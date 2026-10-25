// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1498b2c60 FUN_1498b2c60 body=19 status=ok
// SIG undefined FUN_1498b2c60(void)

undefined1 FUN_1498b2c60(undefined8 param_1,undefined8 param_2)

{
  FUN_1498b185e(param_2);
  return 1;
}



// FUNCTION 1498b2c74 FUN_1498b2c74 body=29 status=ok
// SIG undefined FUN_1498b2c74(void)

undefined8 FUN_1498b2c74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b2ca6 FUN_1498b2ca6 body=93 status=ok
// SIG undefined FUN_1498b2ca6(void)

void FUN_1498b2ca6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea2a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b2d04 FUN_1498b2d04 body=93 status=ok
// SIG undefined FUN_1498b2d04(void)

void FUN_1498b2d04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea2a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b2d62 FUN_1498b2d62 body=126 status=ok
// SIG undefined FUN_1498b2d62(void)

void FUN_1498b2d62(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beea2a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b2dd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b2de8 FUN_1498b2de8 body=19 status=ok
// SIG undefined FUN_1498b2de8(void)

undefined1 FUN_1498b2de8(undefined8 param_1,undefined8 param_2)

{
  FUN_1498b0f8e(param_2);
  return 1;
}



// FUNCTION 1498b2dfc FUN_1498b2dfc body=29 status=ok
// SIG undefined FUN_1498b2dfc(void)

undefined8 FUN_1498b2dfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b2e2e FUN_1498b2e2e body=93 status=ok
// SIG undefined FUN_1498b2e2e(void)

void FUN_1498b2e2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b2e8c FUN_1498b2e8c body=93 status=ok
// SIG undefined FUN_1498b2e8c(void)

void FUN_1498b2e8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b2eea FUN_1498b2eea body=126 status=ok
// SIG undefined FUN_1498b2eea(void)

void FUN_1498b2eea(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beea310;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b2f59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b2f70 FUN_1498b2f70 body=19 status=ok
// SIG undefined FUN_1498b2f70(void)

undefined1 FUN_1498b2f70(undefined8 param_1,undefined8 param_2)

{
  FUN_1498b1134(param_2);
  return 1;
}



// FUNCTION 1498b2f84 FUN_1498b2f84 body=31 status=ok
// SIG undefined FUN_1498b2f84(void)

undefined8 FUN_1498b2f84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b2fc0 FUN_1498b2fc0 body=93 status=ok
// SIG undefined FUN_1498b2fc0(void)

void FUN_1498b2fc0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beea380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498b301e FUN_1498b301e body=126 status=ok
// SIG undefined FUN_1498b301e(void)

void FUN_1498b301e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beea380;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b308d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b309c FUN_1498b309c body=21 status=ok
// SIG undefined FUN_1498b309c(void)

undefined8 FUN_1498b309c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b30b2 FUN_1498b30b2 body=48 status=ok
// SIG undefined FUN_1498b30b2(void)

void FUN_1498b30b2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1498b30e2 FUN_1498b30e2 body=232 status=ok
// SIG undefined FUN_1498b30e2(void)

longlong * FUN_1498b30e2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1410b84b2(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          lVar3 = *(longlong *)(lVar2 + lVar7);
          *(longlong *)(lVar4 + lVar7) = lVar3;
          if ((lVar3 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          *(undefined8 *)(lVar4 + 8 + lVar7) = *(undefined8 *)(lVar2 + 8 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1498b31ca FUN_1498b31ca body=232 status=ok
// SIG undefined FUN_1498b31ca(void)

longlong * FUN_1498b31ca(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1410b852e(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          lVar3 = *(longlong *)(lVar2 + lVar7);
          *(longlong *)(lVar4 + lVar7) = lVar3;
          if ((lVar3 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          *(undefined8 *)(lVar4 + 8 + lVar7) = *(undefined8 *)(lVar2 + 8 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1498b32b2 FUN_1498b32b2 body=95 status=ok
// SIG undefined FUN_1498b32b2(void)

void FUN_1498b32b2(longlong param_1,uint param_2)

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



// FUNCTION 1498b3312 FUN_1498b3312 body=132 status=ok
// SIG undefined FUN_1498b3312(void)

void FUN_1498b3312(longlong param_1,int param_2)

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



// FUNCTION 1498b3398 FUN_1498b3398 body=89 status=ok
// SIG undefined FUN_1498b3398(void)

void FUN_1498b3398(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1498b33f2 FUN_1498b33f2 body=29 status=ok
// SIG undefined FUN_1498b33f2(void)

undefined8 FUN_1498b33f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b341e FUN_1498b341e body=141 status=ok
// SIG undefined FUN_1498b341e(void)

bool FUN_1498b341e(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x18);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 8),&local_30);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return pcVar1 != (code *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b34b2 FUN_1498b34b2 body=29 status=ok
// SIG undefined FUN_1498b34b2(void)

undefined8 FUN_1498b34b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b34de FUN_1498b34de body=141 status=ok
// SIG undefined FUN_1498b34de(void)

bool FUN_1498b34de(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x18);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 8),&local_30);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return pcVar1 != (code *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b3572 FUN_1498b3572 body=29 status=ok
// SIG undefined FUN_1498b3572(void)

undefined8 FUN_1498b3572(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b359e FUN_1498b359e body=141 status=ok
// SIG undefined FUN_1498b359e(void)

bool FUN_1498b359e(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x18);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 8),&local_30);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return pcVar1 != (code *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b3632 FUN_1498b3632 body=147 status=ok
// SIG undefined FUN_1498b3632(void)

void FUN_1498b3632(longlong param_1,int param_2)

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



// FUNCTION 1498b36c6 FUN_1498b36c6 body=48 status=ok
// SIG undefined FUN_1498b36c6(void)

void FUN_1498b36c6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xe8,8);
  }
  return;
}



// FUNCTION 1498b36f6 FUN_1498b36f6 body=146 status=ok
// SIG undefined FUN_1498b36f6(void)

void FUN_1498b36f6(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0xe8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498b378a FUN_1498b378a body=62 status=ok
// SIG undefined FUN_1498b378a(void)

void FUN_1498b378a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1498b37c8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xe8,8);
  }
  return;
}



// FUNCTION 1498b37c8 FUN_1498b37c8 body=110 status=ok
// SIG undefined FUN_1498b37c8(void)

ulonglong FUN_1498b37c8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xe8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1498b3801;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xe8,8);
      param_2 = param_2 / 0xe8;
    }
  }
LAB_1498b3801:
  return param_2 & 0xffffffff;
}



// FUNCTION 1498b3836 FUN_1498b3836 body=113 status=ok
// SIG undefined FUN_1498b3836(void)

void FUN_1498b3836(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    memset(param_1,0,0xb8);
    *(undefined8 *)((longlong)param_1 + 0xb8) = 0xbff0000000000000;
    *(undefined8 *)((longlong)param_1 + 0xc0) = 0xbff0000000000000;
    *(undefined8 *)((longlong)param_1 + 200) = 0xbff0000000000000;
    *(undefined8 *)((longlong)param_1 + 0xd0) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
    *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
    param_1 = (void *)((longlong)param_1 + 0xe8);
  }
  return;
}



// FUNCTION 1498b38a7 FUN_1498b38a7 body=958 status=ok
// SIG undefined FUN_1498b38a7(void)

void FUN_1498b38a7(longlong param_1,uint param_2,code *param_3)

{
  void *pvVar1;
  char cVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  longlong *plVar7;
  void *_Src;
  void *_Src_00;
  void *pvVar8;
  int iVar9;
  void *pvVar10;
  float fVar11;
  undefined1 auStack_478 [32];
  longlong *local_458;
  int local_44c;
  void *local_448;
  void *local_440;
  longlong local_438;
  longlong local_430;
  undefined4 local_428 [190];
  undefined1 local_130 [232];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_478;
  if (1 < (int)param_2) {
    memset(local_428,0,0x2f0);
    local_430 = (ulonglong)param_2 * 0xe8 + param_1 + -0xe8;
    local_438 = param_1;
    fVar11 = logf((float)(int)param_2);
    local_428[0] = (int)(longlong)(fVar11 + fVar11);
    plVar7 = &local_438;
    do {
      pvVar5 = (void *)*plVar7;
      pvVar3 = (void *)plVar7[1];
      iVar9 = (int)plVar7[2];
      uVar6 = (int)((ulonglong)((longlong)pvVar3 - (longlong)pvVar5) >> 3) * 0x4f72c235 + 1;
      _Src_00 = pvVar3;
      _Src = pvVar5;
      pvVar10 = pvVar5;
      local_458 = plVar7;
      if (iVar9 != 0) {
LAB_1498b398d:
        plVar7 = local_458;
        if (8 < (int)uVar6) {
          pvVar10 = (void *)((ulonglong)(uVar6 >> 1) * 0xe8 + (longlong)_Src);
          local_44c = iVar9;
          local_448 = pvVar5;
          local_440 = pvVar3;
          memcpy(local_130,pvVar10,0xe8);
          memcpy(pvVar10,_Src,0xe8);
          memcpy(_Src,local_130,0xe8);
          pvVar5 = (void *)((longlong)_Src_00 + 0xe8);
          pvVar10 = _Src;
          do {
            pvVar3 = (void *)((longlong)pvVar10 + 0xe8);
            pvVar1 = (void *)((longlong)pvVar10 + 0xe8);
            do {
              pvVar10 = pvVar1;
              pvVar4 = pvVar3;
              if (_Src_00 < pvVar10) break;
              cVar2 = (*param_3)(_Src,pvVar10);
              pvVar3 = (void *)((longlong)pvVar4 + 0xe8);
              pvVar1 = (void *)((longlong)pvVar10 + 0xe8);
            } while (cVar2 == '\0');
            pvVar1 = (void *)((longlong)pvVar5 + -0x1d0);
            do {
              pvVar8 = pvVar5;
              pvVar3 = pvVar1;
              pvVar5 = (void *)((longlong)pvVar8 + -0xe8);
              if (pvVar5 <= _Src) break;
              cVar2 = (*param_3)(pvVar5,_Src);
              pvVar1 = (void *)((longlong)pvVar3 + -0xe8);
            } while (cVar2 == '\0');
            if (pvVar5 < pvVar10) goto LAB_1498b3a9e;
            memcpy(local_130,pvVar10,0xe8);
            memcpy(pvVar10,pvVar5,0xe8);
            memcpy(pvVar5,local_130,0xe8);
          } while( true );
        }
        for (; local_458 = plVar7, pvVar3 = _Src, pvVar5 = _Src, _Src < _Src_00;
            _Src_00 = (void *)((longlong)_Src_00 + -0xe8)) {
          while (pvVar10 = pvVar3, pvVar5 = (void *)((longlong)pvVar5 + 0xe8), pvVar5 <= _Src_00) {
            cVar2 = (*param_3)(pvVar10,pvVar5);
            pvVar3 = pvVar5;
            if (cVar2 == '\0') {
              pvVar3 = pvVar10;
            }
          }
          memcpy(local_130,pvVar10,0xe8);
          memcpy(pvVar10,_Src_00,0xe8);
          memcpy(_Src_00,local_130,0xe8);
          plVar7 = local_458;
        }
        goto LAB_1498b3c31;
      }
LAB_1498b3c53:
      FUN_1498b3c66(pvVar10,uVar6,param_3);
      plVar7 = local_458;
LAB_1498b3c31:
      plVar7 = plVar7 + -3;
    } while (&local_438 <= plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1498b3a9e:
  memcpy(local_130,_Src,0xe8);
  memcpy(_Src,pvVar5,0xe8);
  memcpy(pvVar5,local_130,0xe8);
  iVar9 = local_44c + -1;
  pvVar8 = (void *)((longlong)pvVar8 + -0x1d0);
  if ((longlong)pvVar3 - (longlong)local_448 < (longlong)local_440 - (longlong)pvVar4) {
    plVar7 = local_458;
    if (pvVar10 < _Src_00) {
      *local_458 = (longlong)pvVar10;
      local_458[1] = (longlong)_Src_00;
      *(int *)(local_458 + 2) = iVar9;
      plVar7 = local_458 + 3;
    }
    pvVar10 = _Src;
    if (pvVar5 <= (void *)((longlong)_Src + 0xe8U)) goto LAB_1498b3c31;
  }
  else {
    if ((void *)((longlong)_Src + 0xe8U) < pvVar5) {
      *local_458 = (longlong)_Src;
      local_458[1] = (longlong)pvVar8;
      *(int *)(local_458 + 2) = iVar9;
      local_458 = local_458 + 3;
    }
    plVar7 = local_458;
    _Src = pvVar4;
    pvVar8 = _Src_00;
    pvVar3 = _Src_00;
    if (_Src_00 <= pvVar10) goto LAB_1498b3c31;
  }
  local_458 = plVar7;
  uVar6 = (int)((ulonglong)((longlong)pvVar3 - (longlong)_Src) >> 3) * 0x4f72c235 + 1;
  pvVar5 = _Src;
  _Src_00 = pvVar8;
  _Src = pvVar10;
  if (iVar9 == 0) goto LAB_1498b3c53;
  goto LAB_1498b398d;
}



// FUNCTION 1498b3c66 FUN_1498b3c66 body=682 status=ok
// SIG undefined FUN_1498b3c66(void)

void FUN_1498b3c66(void *param_1,uint param_2,code *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  bool bVar9;
  undefined1 auStack_158 [32];
  code *local_138;
  undefined1 local_130 [232];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = param_3;
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar2 = iVar6;
joined_r0x0001498b3cbe:
    do {
      iVar7 = iVar6 * 2 + 1;
      if (iVar7 < (int)param_2) {
        iVar3 = iVar6 * 2 + 2;
        if ((iVar3 < (int)param_2) &&
           (cVar1 = (*local_138)((void *)((longlong)iVar3 * 0xe8 + (longlong)param_1),
                                 (void *)((longlong)iVar7 * 0xe8 + (longlong)param_1)),
           cVar1 == '\0')) {
          iVar7 = iVar3;
        }
        pvVar4 = (void *)((longlong)iVar6 * 0xe8 + (longlong)param_1);
        pvVar8 = (void *)((longlong)iVar7 * 0xe8 + (longlong)param_1);
        cVar1 = (*local_138)(pvVar4,pvVar8);
        if (cVar1 != '\0') {
          memcpy(local_130,pvVar4,0xe8);
          memcpy(pvVar4,pvVar8,0xe8);
          memcpy(pvVar8,local_130,0xe8);
          iVar6 = iVar7;
          goto joined_r0x0001498b3cbe;
        }
      }
      bVar9 = iVar2 != 0;
      iVar6 = iVar2 + -1;
      iVar2 = iVar6;
    } while (bVar9);
    if (1 < (int)param_2) {
      pvVar4 = (void *)(((ulonglong)param_2 - 1) * 0xe8 + (longlong)param_1);
      memcpy(local_130,param_1,0xe8);
      memcpy(param_1,pvVar4,0xe8);
      memcpy(pvVar4,local_130,0xe8);
      if (param_2 != 2) {
        uVar5 = (ulonglong)param_2 - 1;
        do {
          iVar2 = 0;
          iVar7 = 1;
          iVar6 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar3 = iVar7;
            if (((longlong)iVar2 < (longlong)uVar5) &&
               (cVar1 = (*local_138)((void *)((longlong)iVar2 * 0xe8 + (longlong)param_1),
                                     (void *)((longlong)iVar7 * 0xe8 + (longlong)param_1)),
               cVar1 == '\0')) {
              iVar3 = iVar2;
            }
            pvVar8 = (void *)((longlong)iVar6 * 0xe8 + (longlong)param_1);
            pvVar4 = (void *)((longlong)iVar3 * 0xe8 + (longlong)param_1);
            cVar1 = (*local_138)(pvVar8,pvVar4);
            if (cVar1 == '\0') break;
            memcpy(local_130,pvVar8,0xe8);
            memcpy(pvVar8,pvVar4,0xe8);
            memcpy(pvVar4,local_130,0xe8);
            iVar2 = iVar3 * 2;
            iVar7 = iVar3 * 2 + 1;
            iVar6 = iVar3;
          } while ((longlong)iVar7 < (longlong)uVar5);
          pvVar4 = (void *)((uVar5 - 1) * 0xe8 + (longlong)param_1);
          memcpy(local_130,param_1,0xe8);
          memcpy(param_1,pvVar4,0xe8);
          memcpy(pvVar4,local_130,0xe8);
          bVar9 = 2 < uVar5;
          uVar5 = uVar5 - 1;
        } while (bVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b3f12 FUN_1498b3f12 body=246 status=ok
// SIG undefined FUN_1498b3f12(void)

undefined4 * FUN_1498b3f12(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  uint *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14028411c(param_1,local_38);
  puVar1 = (uint *)param_3[1];
  uVar3 = *(uint *)*param_3;
  *local_30 = uVar3;
  local_30[1] = *puVar1;
  local_30[2] = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
    local_30[3] = uVar3;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    local_30[2] = *(uint *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3)
                                    * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_1498b400a(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b400a FUN_1498b400a body=422 status=ok
// SIG undefined FUN_1498b400a(void)

void FUN_1498b400a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b41b2 FUN_1498b41b2 body=146 status=ok
// SIG undefined FUN_1498b41b2(void)

void FUN_1498b41b2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x110,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x110)) {
      uVar5 = uVar4 / 0x110 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x110,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498b4246 FUN_1498b4246 body=285 status=ok
// SIG undefined FUN_1498b4246(void)

undefined4 * FUN_1498b4246(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498b4364(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_1498b444a(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0xc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1498b462e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b4364 FUN_1498b4364 body=229 status=ok
// SIG undefined FUN_1498b4364(void)

int * FUN_1498b4364(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1498b444a FUN_1498b444a body=132 status=ok
// SIG undefined FUN_1498b444a(void)

undefined8 FUN_1498b444a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar1 = FUN_1498b44d0();
    if (iVar1 != -1) {
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_1498b4586(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_1498b446e;
    }
  }
  uVar2 = 0;
LAB_1498b446e:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b44d0 FUN_1498b44d0 body=180 status=ok
// SIG undefined FUN_1498b44d0(void)

int FUN_1498b44d0(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        cVar1 = FUN_1498b45f8(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1498b455e;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1498b455e:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b4586 FUN_1498b4586 body=114 status=ok
// SIG undefined FUN_1498b4586(void)

void FUN_1498b4586(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 1498b45f8 FUN_1498b45f8 body=53 status=ok
// SIG undefined FUN_1498b45f8(void)

ulonglong FUN_1498b45f8(int *param_1,int *param_2)

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



// FUNCTION 1498b462e FUN_1498b462e body=439 status=ok
// SIG undefined FUN_1498b462e(void)

void FUN_1498b462e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b47e6 FUN_1498b47e6 body=62 status=ok
// SIG undefined FUN_1498b47e6(void)

void FUN_1498b47e6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1498b4824(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x110,0x10);
  }
  return;
}



// FUNCTION 1498b4824 FUN_1498b4824 body=110 status=ok
// SIG undefined FUN_1498b4824(void)

ulonglong FUN_1498b4824(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x110) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1498b485d;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x110,0x10);
      param_2 = param_2 / 0x110;
    }
  }
LAB_1498b485d:
  return param_2 & 0xffffffff;
}



// FUNCTION 1498b4892 FUN_1498b4892 body=85 status=ok
// SIG undefined FUN_1498b4892(void)

void FUN_1498b4892(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[10] = 0xbff0000000000000;
    param_1[0xb] = 0xbff0000000000000;
    param_1[0xc] = 0xbff0000000000000;
    *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    param_1[0x20] = 0;
    param_1 = param_1 + 0x22;
  }
  return;
}



// FUNCTION 1498b48e7 FUN_1498b48e7 body=958 status=ok
// SIG undefined FUN_1498b48e7(void)

void FUN_1498b48e7(longlong param_1,uint param_2,code *param_3)

{
  void *pvVar1;
  char cVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  longlong *plVar7;
  void *_Src;
  void *_Src_00;
  void *pvVar8;
  int iVar9;
  void *pvVar10;
  float fVar11;
  undefined1 auStack_498 [32];
  longlong *local_478;
  int local_46c;
  void *local_468;
  void *local_460;
  longlong local_458;
  longlong local_450;
  undefined4 local_448 [188];
  undefined1 local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_498;
  if (1 < (int)param_2) {
    memset(local_448,0,0x2f0);
    local_450 = (ulonglong)param_2 * 0x110 + param_1 + -0x110;
    local_458 = param_1;
    fVar11 = logf((float)(int)param_2);
    local_448[0] = (int)(longlong)(fVar11 + fVar11);
    plVar7 = &local_458;
    do {
      pvVar5 = (void *)*plVar7;
      pvVar3 = (void *)plVar7[1];
      iVar9 = (int)plVar7[2];
      uVar6 = (int)((ulonglong)((longlong)pvVar3 - (longlong)pvVar5) >> 4) * -0xf0f0f0f + 1;
      _Src_00 = pvVar3;
      _Src = pvVar5;
      pvVar10 = pvVar5;
      local_478 = plVar7;
      if (iVar9 != 0) {
LAB_1498b49cd:
        plVar7 = local_478;
        if (8 < (int)uVar6) {
          pvVar10 = (void *)((ulonglong)(uVar6 >> 1) * 0x110 + (longlong)_Src);
          local_46c = iVar9;
          local_468 = pvVar5;
          local_460 = pvVar3;
          memcpy(local_158,pvVar10,0x110);
          memcpy(pvVar10,_Src,0x110);
          memcpy(_Src,local_158,0x110);
          pvVar5 = (void *)((longlong)_Src_00 + 0x110);
          pvVar10 = _Src;
          do {
            pvVar3 = (void *)((longlong)pvVar10 + 0x110);
            pvVar1 = (void *)((longlong)pvVar10 + 0x110);
            do {
              pvVar10 = pvVar1;
              pvVar4 = pvVar3;
              if (_Src_00 < pvVar10) break;
              cVar2 = (*param_3)(_Src,pvVar10);
              pvVar3 = (void *)((longlong)pvVar4 + 0x110);
              pvVar1 = (void *)((longlong)pvVar10 + 0x110);
            } while (cVar2 == '\0');
            pvVar1 = (void *)((longlong)pvVar5 + -0x220);
            do {
              pvVar8 = pvVar5;
              pvVar3 = pvVar1;
              pvVar5 = (void *)((longlong)pvVar8 + -0x110);
              if (pvVar5 <= _Src) break;
              cVar2 = (*param_3)(pvVar5,_Src);
              pvVar1 = (void *)((longlong)pvVar3 + -0x110);
            } while (cVar2 == '\0');
            if (pvVar5 < pvVar10) goto LAB_1498b4ade;
            memcpy(local_158,pvVar10,0x110);
            memcpy(pvVar10,pvVar5,0x110);
            memcpy(pvVar5,local_158,0x110);
          } while( true );
        }
        for (; local_478 = plVar7, pvVar3 = _Src, pvVar5 = _Src, _Src < _Src_00;
            _Src_00 = (void *)((longlong)_Src_00 + -0x110)) {
          while (pvVar10 = pvVar3, pvVar5 = (void *)((longlong)pvVar5 + 0x110), pvVar5 <= _Src_00) {
            cVar2 = (*param_3)(pvVar10,pvVar5);
            pvVar3 = pvVar5;
            if (cVar2 == '\0') {
              pvVar3 = pvVar10;
            }
          }
          memcpy(local_158,pvVar10,0x110);
          memcpy(pvVar10,_Src_00,0x110);
          memcpy(_Src_00,local_158,0x110);
          plVar7 = local_478;
        }
        goto LAB_1498b4c71;
      }
LAB_1498b4c93:
      FUN_1498b4ca6(pvVar10,uVar6,param_3);
      plVar7 = local_478;
LAB_1498b4c71:
      plVar7 = plVar7 + -3;
    } while (&local_458 <= plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1498b4ade:
  memcpy(local_158,_Src,0x110);
  memcpy(_Src,pvVar5,0x110);
  memcpy(pvVar5,local_158,0x110);
  iVar9 = local_46c + -1;
  pvVar8 = (void *)((longlong)pvVar8 + -0x220);
  if ((longlong)pvVar3 - (longlong)local_468 < (longlong)local_460 - (longlong)pvVar4) {
    plVar7 = local_478;
    if (pvVar10 < _Src_00) {
      *local_478 = (longlong)pvVar10;
      local_478[1] = (longlong)_Src_00;
      *(int *)(local_478 + 2) = iVar9;
      plVar7 = local_478 + 3;
    }
    pvVar10 = _Src;
    if (pvVar5 <= (void *)((longlong)_Src + 0x110U)) goto LAB_1498b4c71;
  }
  else {
    if ((void *)((longlong)_Src + 0x110U) < pvVar5) {
      *local_478 = (longlong)_Src;
      local_478[1] = (longlong)pvVar8;
      *(int *)(local_478 + 2) = iVar9;
      local_478 = local_478 + 3;
    }
    plVar7 = local_478;
    _Src = pvVar4;
    pvVar8 = _Src_00;
    pvVar3 = _Src_00;
    if (_Src_00 <= pvVar10) goto LAB_1498b4c71;
  }
  local_478 = plVar7;
  uVar6 = (int)((ulonglong)((longlong)pvVar3 - (longlong)_Src) >> 4) * -0xf0f0f0f + 1;
  pvVar5 = _Src;
  _Src_00 = pvVar8;
  _Src = pvVar10;
  if (iVar9 == 0) goto LAB_1498b4c93;
  goto LAB_1498b49cd;
}



// FUNCTION 1498b4ca6 FUN_1498b4ca6 body=682 status=ok
// SIG undefined FUN_1498b4ca6(void)

void FUN_1498b4ca6(void *param_1,uint param_2,code *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  bool bVar9;
  undefined1 auStack_188 [40];
  code *local_160;
  undefined1 local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_160 = param_3;
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar2 = iVar6;
joined_r0x0001498b4cfe:
    do {
      iVar7 = iVar6 * 2 + 1;
      if (iVar7 < (int)param_2) {
        iVar3 = iVar6 * 2 + 2;
        if ((iVar3 < (int)param_2) &&
           (cVar1 = (*local_160)((void *)((longlong)iVar3 * 0x110 + (longlong)param_1),
                                 (void *)((longlong)iVar7 * 0x110 + (longlong)param_1)),
           cVar1 == '\0')) {
          iVar7 = iVar3;
        }
        pvVar4 = (void *)((longlong)iVar6 * 0x110 + (longlong)param_1);
        pvVar8 = (void *)((longlong)iVar7 * 0x110 + (longlong)param_1);
        cVar1 = (*local_160)(pvVar4,pvVar8);
        if (cVar1 != '\0') {
          memcpy(local_158,pvVar4,0x110);
          memcpy(pvVar4,pvVar8,0x110);
          memcpy(pvVar8,local_158,0x110);
          iVar6 = iVar7;
          goto joined_r0x0001498b4cfe;
        }
      }
      bVar9 = iVar2 != 0;
      iVar6 = iVar2 + -1;
      iVar2 = iVar6;
    } while (bVar9);
    if (1 < (int)param_2) {
      pvVar4 = (void *)(((ulonglong)param_2 - 1) * 0x110 + (longlong)param_1);
      memcpy(local_158,param_1,0x110);
      memcpy(param_1,pvVar4,0x110);
      memcpy(pvVar4,local_158,0x110);
      if (param_2 != 2) {
        uVar5 = (ulonglong)param_2 - 1;
        do {
          iVar2 = 0;
          iVar7 = 1;
          iVar6 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar3 = iVar7;
            if (((longlong)iVar2 < (longlong)uVar5) &&
               (cVar1 = (*local_160)((void *)((longlong)iVar2 * 0x110 + (longlong)param_1),
                                     (void *)((longlong)iVar7 * 0x110 + (longlong)param_1)),
               cVar1 == '\0')) {
              iVar3 = iVar2;
            }
            pvVar8 = (void *)((longlong)iVar6 * 0x110 + (longlong)param_1);
            pvVar4 = (void *)((longlong)iVar3 * 0x110 + (longlong)param_1);
            cVar1 = (*local_160)(pvVar8,pvVar4);
            if (cVar1 == '\0') break;
            memcpy(local_158,pvVar8,0x110);
            memcpy(pvVar8,pvVar4,0x110);
            memcpy(pvVar4,local_158,0x110);
            iVar2 = iVar3 * 2;
            iVar7 = iVar3 * 2 + 1;
            iVar6 = iVar3;
          } while ((longlong)iVar7 < (longlong)uVar5);
          pvVar4 = (void *)((uVar5 - 1) * 0x110 + (longlong)param_1);
          memcpy(local_158,param_1,0x110);
          memcpy(param_1,pvVar4,0x110);
          memcpy(pvVar4,local_158,0x110);
          bVar9 = 2 < uVar5;
          uVar5 = uVar5 - 1;
        } while (bVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b4f52 FUN_1498b4f52 body=48 status=ok
// SIG undefined FUN_1498b4f52(void)

void FUN_1498b4f52(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x110,0x10);
  }
  return;
}



// FUNCTION 1498b4f82 FUN_1498b4f82 body=48 status=ok
// SIG undefined FUN_1498b4f82(void)

void FUN_1498b4f82(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,8);
  }
  return;
}



// FUNCTION 1498b4fb2 FUN_1498b4fb2 body=132 status=ok
// SIG undefined FUN_1498b4fb2(void)

void FUN_1498b4fb2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498b5038 FUN_1498b5038 body=143 status=ok
// SIG undefined FUN_1498b5038(void)

void FUN_1498b5038(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498b50c8 FUN_1498b50c8 body=90 status=ok
// SIG undefined FUN_1498b50c8(void)

void FUN_1498b50c8(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1498b4586();
  return;
}



// FUNCTION 1498b5122 FUN_1498b5122 body=62 status=ok
// SIG undefined FUN_1498b5122(void)

void FUN_1498b5122(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1498b5160(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 1498b5160 FUN_1498b5160 body=104 status=ok
// SIG undefined FUN_1498b5160(void)

ulonglong FUN_1498b5160(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x70) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1498b5196;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x70,8);
      param_2 = param_2 / 0x70;
    }
  }
LAB_1498b5196:
  return param_2 & 0xffffffff;
}



// FUNCTION 1498b51c8 FUN_1498b51c8 body=64 status=ok
// SIG undefined FUN_1498b51c8(void)

void FUN_1498b51c8(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[10] = 0xbff0000000000000;
    param_1[0xb] = 0xbff0000000000000;
    param_1[0xc] = 0xbff0000000000000;
    *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
    param_1 = param_1 + 0xe;
  }
  return;
}



// FUNCTION 1498b5208 FUN_1498b5208 body=859 status=ok
// SIG undefined FUN_1498b5208(void)

void FUN_1498b5208(longlong param_1,uint param_2,code *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  float fVar15;
  undefined1 auStack_408 [40];
  longlong *local_3e0;
  undefined8 *local_3d8;
  int local_3cc;
  undefined8 *local_3c8;
  undefined8 *local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined4 local_3a8 [188];
  undefined8 local_b8 [14];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_408;
  if (1 < (int)param_2) {
    memset(local_3a8,0,0x2f0);
    local_3b0 = (ulonglong)param_2 * 0x70 + param_1 + -0x70;
    local_3b8 = param_1;
    fVar15 = logf((float)(int)param_2);
    local_3a8[0] = (int)(longlong)(fVar15 + fVar15);
    plVar13 = &local_3b8;
    do {
      puVar14 = (undefined8 *)*plVar13;
      puVar3 = (undefined8 *)plVar13[1];
      iVar12 = (int)plVar13[2];
      uVar5 = (int)((ulonglong)((longlong)puVar3 - (longlong)puVar14) >> 4) * -0x49249249 + 1;
      puVar8 = puVar3;
      puVar9 = puVar14;
      local_3e0 = plVar13;
      if (iVar12 != 0) {
LAB_1498b52b5:
        plVar13 = local_3e0;
        if (8 < (int)uVar5) {
          puVar6 = puVar14 + (ulonglong)(uVar5 >> 1) * 0xe;
          puVar10 = local_b8;
          for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar6 = puVar14;
          puVar10 = puVar14 + (ulonglong)(uVar5 >> 1) * 0xe;
          for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar6 = local_b8;
          puVar10 = puVar14;
          for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar6 = puVar8 + 0xe;
          puVar10 = puVar14;
          local_3d8 = puVar8;
          local_3cc = iVar12;
          local_3c8 = puVar9;
          local_3c0 = puVar3;
          do {
            puVar3 = local_3d8;
            puVar8 = puVar10 + 0xe;
            puVar1 = puVar10 + 0xe;
            do {
              puVar10 = puVar1;
              puVar9 = puVar8;
              if (puVar3 < puVar10) break;
              cVar2 = (*param_3)(puVar14,puVar10);
              puVar8 = puVar9 + 0xe;
              puVar1 = puVar10 + 0xe;
            } while (cVar2 == '\0');
            puVar8 = puVar6 + -0x1c;
            do {
              puVar1 = puVar6;
              puVar3 = puVar8;
              puVar6 = puVar1 + -0xe;
              if (puVar6 <= puVar14) break;
              cVar2 = (*param_3)(puVar6,puVar14);
              puVar8 = puVar3 + -0xe;
            } while (cVar2 == '\0');
            lVar4 = 0xe;
            puVar8 = puVar14;
            puVar7 = puVar10;
            puVar11 = local_b8;
            if (puVar6 < puVar10) goto code_r0x0001498b53b0;
            for (; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar11 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar11 = puVar11 + 1;
            }
            puVar3 = puVar6;
            puVar8 = puVar10;
            for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar8 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar8 = puVar8 + 1;
            }
            puVar3 = local_b8;
            puVar8 = puVar6;
            for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar8 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar8 = puVar8 + 1;
            }
          } while( true );
        }
        while (puVar9 = puVar14, puVar3 = puVar14, puVar14 < puVar8) {
          while (puVar6 = puVar9, puVar3 = puVar3 + 0xe, puVar3 <= puVar8) {
            cVar2 = (*param_3)(puVar6,puVar3);
            puVar9 = puVar3;
            if (cVar2 == '\0') {
              puVar9 = puVar6;
            }
          }
          puVar3 = puVar8 + -0xe;
          puVar9 = puVar6;
          puVar10 = local_b8;
          for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar9 = puVar8;
          for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar9 = local_b8;
          puVar6 = puVar8;
          for (lVar4 = 0xe; puVar8 = puVar3, lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        goto LAB_1498b5524;
      }
LAB_1498b5514:
      FUN_1498b5564(puVar14,uVar5,param_3);
      plVar13 = local_3e0;
LAB_1498b5524:
      plVar13 = plVar13 + -3;
    } while (&local_3b8 <= plVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001498b53b0:
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar8 = puVar6;
  puVar7 = puVar14;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar8 = local_b8;
  puVar7 = puVar6;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar12 = local_3cc + -1;
  puVar1 = puVar1 + -0x1c;
  if ((longlong)puVar3 - (longlong)local_3c8 < (longlong)local_3c0 - (longlong)puVar9) {
    plVar13 = local_3e0;
    if (puVar10 < local_3d8) {
      *local_3e0 = (longlong)puVar10;
      local_3e0[1] = (longlong)local_3d8;
      *(int *)(local_3e0 + 2) = iVar12;
      plVar13 = local_3e0 + 3;
    }
    puVar9 = puVar14;
    if (puVar6 <= puVar14 + 0xe) goto LAB_1498b5524;
  }
  else {
    if (puVar14 + 0xe < puVar6) {
      *local_3e0 = (longlong)puVar14;
      local_3e0[1] = (longlong)puVar1;
      *(int *)(local_3e0 + 2) = iVar12;
      local_3e0 = local_3e0 + 3;
    }
    puVar3 = local_3d8;
    plVar13 = local_3e0;
    puVar14 = puVar10;
    puVar1 = local_3d8;
    if (local_3d8 <= puVar10) goto LAB_1498b5524;
  }
  local_3d8 = puVar1;
  local_3e0 = plVar13;
  uVar5 = (int)((ulonglong)((longlong)puVar3 - (longlong)puVar9) >> 4) * -0x49249249 + 1;
  puVar8 = local_3d8;
  if (iVar12 == 0) goto LAB_1498b5514;
  goto LAB_1498b52b5;
}



// FUNCTION 1498b5564 FUN_1498b5564 body=607 status=ok
// SIG undefined FUN_1498b5564(void)

void FUN_1498b5564(undefined8 *param_1,uint param_2,code *param_3)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  undefined8 local_b8 [14];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    uVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      local_c0 = (ulonglong)uVar4;
      uVar6 = local_c0;
      while (uVar2 = uVar4 * 2 + 1, (int)uVar2 < (int)param_2) {
        uVar11 = uVar4 * 2 + 2;
        uVar4 = uVar2;
        if (((int)uVar11 < (int)param_2) &&
           (cVar3 = (*param_3)(param_1 + (longlong)(int)uVar11 * 0xe,
                               param_1 + (longlong)(int)uVar2 * 0xe), cVar3 == '\0')) {
          uVar4 = uVar11;
        }
        puVar9 = param_1 + (longlong)(int)uVar6 * 0xe;
        puVar10 = param_1 + (longlong)(int)uVar4 * 0xe;
        cVar3 = (*param_3)(puVar9,puVar10);
        if (cVar3 == '\0') break;
        puVar8 = puVar9;
        puVar14 = local_b8;
        for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar14 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar14 = puVar14 + 1;
        }
        puVar8 = puVar10;
        for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar9 = local_b8;
        for (lVar5 = 0xe; uVar6 = (ulonglong)uVar4, lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      uVar4 = (int)local_c0 - 1;
    } while ((int)local_c0 != 0);
    if (1 < (int)param_2) {
      puVar10 = param_1;
      puVar9 = local_b8;
      for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar9 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar10 = param_1 + ((ulonglong)param_2 - 1) * 0xe;
      puVar9 = param_1;
      for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar9 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar10 = local_b8;
      puVar9 = param_1 + ((ulonglong)param_2 - 1) * 0xe;
      for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar9 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
      }
      uVar6 = (ulonglong)param_2 - 1;
      if (param_2 != 2) {
        do {
          iVar7 = 0;
          iVar13 = 1;
          iVar15 = 0;
          do {
            iVar7 = iVar7 + 2;
            iVar12 = iVar13;
            if (((longlong)iVar7 < (longlong)uVar6) &&
               (cVar3 = (*param_3)(param_1 + (longlong)iVar7 * 0xe,param_1 + (longlong)iVar13 * 0xe)
               , cVar3 == '\0')) {
              iVar12 = iVar7;
            }
            puVar9 = param_1 + (longlong)iVar15 * 0xe;
            puVar10 = param_1 + (longlong)iVar12 * 0xe;
            cVar3 = (*param_3)(puVar9,puVar10);
            if (cVar3 == '\0') break;
            puVar8 = puVar9;
            puVar14 = local_b8;
            for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar14 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar14 + 1;
            }
            puVar8 = puVar10;
            for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar9 = local_b8;
            for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            iVar7 = iVar12 * 2;
            iVar13 = iVar12 * 2 + 1;
            iVar15 = iVar12;
          } while ((longlong)iVar13 < (longlong)uVar6);
          puVar10 = param_1;
          puVar9 = local_b8;
          for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar9 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar10 = param_1 + (uVar6 - 1) * 0xe;
          puVar9 = param_1;
          for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar9 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar10 = local_b8;
          puVar9 = param_1 + (uVar6 - 1) * 0xe;
          for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar9 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar9 = puVar9 + 1;
          }
          bVar1 = 2 < uVar6;
          uVar6 = uVar6 - 1;
        } while (bVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b57c4 FUN_1498b57c4 body=165 status=ok
// SIG undefined FUN_1498b57c4(void)

void FUN_1498b57c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beea5b0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b586a FUN_1498b586a body=29 status=ok
// SIG undefined FUN_1498b586a(void)

undefined8 FUN_1498b586a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b589c FUN_1498b589c body=93 status=ok
// SIG undefined FUN_1498b589c(void)

void FUN_1498b589c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea5b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b58fa FUN_1498b58fa body=93 status=ok
// SIG undefined FUN_1498b58fa(void)

void FUN_1498b58fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea5b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b5958 FUN_1498b5958 body=126 status=ok
// SIG undefined FUN_1498b5958(void)

void FUN_1498b5958(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beea5b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b59c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b59e0 FUN_1498b59e0 body=20 status=ok
// SIG undefined FUN_1498b59e0(void)

undefined1 FUN_1498b59e0(longlong param_1)

{
  FUN_1498b59f4(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b59f4 FUN_1498b59f4 body=340 status=ok
// SIG undefined FUN_1498b59f4(void)

void FUN_1498b59f4(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_88 [40];
  float *local_60;
  int local_58;
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_60,param_2);
  FUN_144a76c20(&local_50,param_2);
  FUN_144a76c20(&local_40,param_2);
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      iVar7 = local_2c - *(int *)(param_1 + 0x290);
      fVar10 = DAT_14c846338;
      fVar11 = DAT_14c846330._4_4_;
      fVar12 = (float)DAT_14c846330;
      if ((-2 < iVar7) && (uVar8 = iVar7 + 1, (int)uVar8 < (int)local_20[1])) {
        lVar4 = *local_20;
        uVar9 = (ulonglong)uVar8;
        fVar10 = (float)*(double *)(lVar4 + 0x10 + uVar9 * 0x18);
        fVar11 = (float)*(double *)(lVar4 + 8 + uVar9 * 0x18);
        fVar12 = (float)*(double *)(lVar4 + uVar9 * 0x18);
      }
      pfVar1 = local_60 + local_58;
      *local_60 = fVar12;
      pfVar2 = local_50 + local_48;
      *local_50 = fVar11;
      pfVar3 = local_40 + local_38;
      *local_40 = fVar10;
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_60 = pfVar1;
      local_50 = pfVar2;
      local_40 = pfVar3;
    } while (iVar5 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b5b4a FUN_1498b5b4a body=133 status=ok
// SIG undefined FUN_1498b5b4a(void)

void FUN_1498b5b4a(undefined4 *param_1,char *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  
  if (*param_2 == '\x01') {
    iVar8 = *(int *)(param_2 + 0x30);
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar8);
    *(int *)(param_2 + 0x30) = iVar8 + 1;
    puVar6 = (undefined4 *)
             ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar1 * 4 +
             *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar5 = uVar2 & 0x7fff;
    piVar4 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar8 = *piVar4;
    lVar7 = 0;
    if (iVar8 <= (int)uVar5) {
      do {
        uVar5 = uVar5 - iVar8;
        iVar8 = piVar4[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar8 <= (int)uVar5);
    }
    puVar6 = (undefined4 *)
             ((longlong)(int)uVar5 +
             *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8));
  }
  *param_1 = *puVar6;
  return;
}



// FUNCTION 1498b5bd0 FUN_1498b5bd0 body=31 status=ok
// SIG undefined FUN_1498b5bd0(void)

undefined8 FUN_1498b5bd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b5c04 FUN_1498b5c04 body=93 status=ok
// SIG undefined FUN_1498b5c04(void)

void FUN_1498b5c04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b5c62 FUN_1498b5c62 body=93 status=ok
// SIG undefined FUN_1498b5c62(void)

void FUN_1498b5c62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b5cc0 FUN_1498b5cc0 body=126 status=ok
// SIG undefined FUN_1498b5cc0(void)

void FUN_1498b5cc0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beea620;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b5d2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b5d48 FUN_1498b5d48 body=20 status=ok
// SIG undefined FUN_1498b5d48(void)

undefined1 FUN_1498b5d48(longlong param_1)

{
  FUN_1498b5d5c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b5d5c FUN_1498b5d5c body=357 status=ok
// SIG undefined FUN_1498b5d5c(void)

void FUN_1498b5d5c(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_88 [32];
  float *local_68;
  int local_60;
  float *local_58;
  int local_50;
  float *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_58,param_2);
  FUN_144a76c20(&local_48,param_2);
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      piVar6 = local_38 + local_30;
      iVar7 = *local_38 - *(int *)(param_1 + 0x290);
      fVar11 = DAT_14c846338;
      fVar12 = DAT_14c846330._4_4_;
      fVar13 = (float)DAT_14c846330;
      if ((-2 < iVar7) && (uVar8 = iVar7 + 1, (int)uVar8 < (int)local_20[1])) {
        lVar4 = *local_20;
        uVar9 = (ulonglong)uVar8;
        fVar11 = (float)*(double *)(lVar4 + 0x10 + uVar9 * 0x18);
        fVar12 = (float)*(double *)(lVar4 + 8 + uVar9 * 0x18);
        fVar13 = (float)*(double *)(lVar4 + uVar9 * 0x18);
      }
      pfVar1 = local_68 + local_60;
      *local_68 = fVar13;
      pfVar2 = local_58 + local_50;
      *local_58 = fVar12;
      pfVar3 = local_48 + local_40;
      *local_48 = fVar11;
      iVar5 = iVar5 + 1;
      piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar10 = (int *)(param_2 + 0x3c);
      }
      local_68 = pfVar1;
      local_58 = pfVar2;
      local_48 = pfVar3;
      local_38 = piVar6;
    } while (iVar5 < *piVar10);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b5ec2 FUN_1498b5ec2 body=165 status=ok
// SIG undefined FUN_1498b5ec2(void)

void FUN_1498b5ec2(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beea690;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b5f68 FUN_1498b5f68 body=165 status=ok
// SIG undefined FUN_1498b5f68(void)

void FUN_1498b5f68(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beea700;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b600e FUN_1498b600e body=29 status=ok
// SIG undefined FUN_1498b600e(void)

undefined8 FUN_1498b600e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b6040 FUN_1498b6040 body=93 status=ok
// SIG undefined FUN_1498b6040(void)

void FUN_1498b6040(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea690;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b609e FUN_1498b609e body=93 status=ok
// SIG undefined FUN_1498b609e(void)

void FUN_1498b609e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea690;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b60fc FUN_1498b60fc body=126 status=ok
// SIG undefined FUN_1498b60fc(void)

void FUN_1498b60fc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beea690;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b616b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b6184 FUN_1498b6184 body=20 status=ok
// SIG undefined FUN_1498b6184(void)

undefined1 FUN_1498b6184(longlong param_1)

{
  FUN_1498b6198(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b6198 FUN_1498b6198 body=347 status=ok
// SIG undefined FUN_1498b6198(void)

void FUN_1498b6198(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_88 [40];
  float *local_60;
  int local_58;
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_60,param_2);
  FUN_144a76c20(&local_50,param_2);
  FUN_144a76c20(&local_40,param_2);
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      iVar7 = local_2c - *(int *)(param_1 + 0x290);
      fVar10 = DAT_14c846338;
      fVar11 = DAT_14c846330._4_4_;
      fVar12 = (float)DAT_14c846330;
      if ((-2 < iVar7) && (uVar8 = iVar7 + 1, (int)uVar8 < *(int *)(local_20 + 0xd8))) {
        lVar4 = *(longlong *)(local_20 + 0xd0);
        uVar9 = (ulonglong)uVar8;
        fVar10 = (float)*(double *)(lVar4 + 0x10 + uVar9 * 0x18);
        fVar11 = (float)*(double *)(lVar4 + 8 + uVar9 * 0x18);
        fVar12 = (float)*(double *)(lVar4 + uVar9 * 0x18);
      }
      pfVar1 = local_60 + local_58;
      *local_60 = fVar12;
      pfVar2 = local_50 + local_48;
      *local_50 = fVar11;
      pfVar3 = local_40 + local_38;
      *local_40 = fVar10;
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_60 = pfVar1;
      local_50 = pfVar2;
      local_40 = pfVar3;
    } while (iVar5 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b62f4 FUN_1498b62f4 body=29 status=ok
// SIG undefined FUN_1498b62f4(void)

undefined8 FUN_1498b62f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b6326 FUN_1498b6326 body=93 status=ok
// SIG undefined FUN_1498b6326(void)

void FUN_1498b6326(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea700;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b6384 FUN_1498b6384 body=93 status=ok
// SIG undefined FUN_1498b6384(void)

void FUN_1498b6384(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea700;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b63e2 FUN_1498b63e2 body=126 status=ok
// SIG undefined FUN_1498b63e2(void)

void FUN_1498b63e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beea700;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b6451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b646a FUN_1498b646a body=20 status=ok
// SIG undefined FUN_1498b646a(void)

undefined1 FUN_1498b646a(longlong param_1)

{
  FUN_1498b647e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b647e FUN_1498b647e body=364 status=ok
// SIG undefined FUN_1498b647e(void)

void FUN_1498b647e(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_88 [32];
  float *local_68;
  int local_60;
  float *local_58;
  int local_50;
  float *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_58,param_2);
  FUN_144a76c20(&local_48,param_2);
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      piVar6 = local_38 + local_30;
      iVar7 = *local_38 - *(int *)(param_1 + 0x290);
      fVar11 = DAT_14c846338;
      fVar12 = DAT_14c846330._4_4_;
      fVar13 = (float)DAT_14c846330;
      if ((-2 < iVar7) && (uVar8 = iVar7 + 1, (int)uVar8 < *(int *)(local_20 + 0xd8))) {
        lVar4 = *(longlong *)(local_20 + 0xd0);
        uVar9 = (ulonglong)uVar8;
        fVar11 = (float)*(double *)(lVar4 + 0x10 + uVar9 * 0x18);
        fVar12 = (float)*(double *)(lVar4 + 8 + uVar9 * 0x18);
        fVar13 = (float)*(double *)(lVar4 + uVar9 * 0x18);
      }
      pfVar1 = local_68 + local_60;
      *local_68 = fVar13;
      pfVar2 = local_58 + local_50;
      *local_58 = fVar12;
      pfVar3 = local_48 + local_40;
      *local_48 = fVar11;
      iVar5 = iVar5 + 1;
      piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar10 = (int *)(param_2 + 0x3c);
      }
      local_68 = pfVar1;
      local_58 = pfVar2;
      local_48 = pfVar3;
      local_38 = piVar6;
    } while (iVar5 < *piVar10);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b65ec FUN_1498b65ec body=165 status=ok
// SIG undefined FUN_1498b65ec(void)

void FUN_1498b65ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beea770;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b6692 FUN_1498b6692 body=165 status=ok
// SIG undefined FUN_1498b6692(void)

void FUN_1498b6692(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beea7e0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b6738 FUN_1498b6738 body=29 status=ok
// SIG undefined FUN_1498b6738(void)

undefined8 FUN_1498b6738(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b676a FUN_1498b676a body=93 status=ok
// SIG undefined FUN_1498b676a(void)

void FUN_1498b676a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea770;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b67c8 FUN_1498b67c8 body=93 status=ok
// SIG undefined FUN_1498b67c8(void)

void FUN_1498b67c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea770;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b6826 FUN_1498b6826 body=126 status=ok
// SIG undefined FUN_1498b6826(void)

void FUN_1498b6826(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beea770;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b6895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b68ae FUN_1498b68ae body=20 status=ok
// SIG undefined FUN_1498b68ae(void)

undefined1 FUN_1498b68ae(longlong param_1)

{
  FUN_1498b68c2(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b68c2 FUN_1498b68c2 body=341 status=ok
// SIG undefined FUN_1498b68c2(void)

void FUN_1498b68c2(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_88 [40];
  float *local_60;
  int local_58;
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_60,param_2);
  FUN_144a76c20(&local_50,param_2);
  FUN_144a76c20(&local_40,param_2);
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      iVar7 = local_2c - *(int *)(param_1 + 0x290);
      fVar10 = DAT_14c846338;
      fVar11 = DAT_14c846330._4_4_;
      fVar12 = (float)DAT_14c846330;
      if ((-2 < iVar7) && (uVar8 = iVar7 + 1, (int)uVar8 < *(int *)(local_20 + 0x18))) {
        lVar4 = *(longlong *)(local_20 + 0x10);
        uVar9 = (ulonglong)uVar8;
        fVar10 = (float)*(double *)(lVar4 + 0x10 + uVar9 * 0x18);
        fVar11 = (float)*(double *)(lVar4 + 8 + uVar9 * 0x18);
        fVar12 = (float)*(double *)(lVar4 + uVar9 * 0x18);
      }
      pfVar1 = local_60 + local_58;
      *local_60 = fVar12;
      pfVar2 = local_50 + local_48;
      *local_50 = fVar11;
      pfVar3 = local_40 + local_38;
      *local_40 = fVar10;
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_60 = pfVar1;
      local_50 = pfVar2;
      local_40 = pfVar3;
    } while (iVar5 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b6a18 FUN_1498b6a18 body=29 status=ok
// SIG undefined FUN_1498b6a18(void)

undefined8 FUN_1498b6a18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b6a4a FUN_1498b6a4a body=93 status=ok
// SIG undefined FUN_1498b6a4a(void)

void FUN_1498b6a4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea7e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b6aa8 FUN_1498b6aa8 body=93 status=ok
// SIG undefined FUN_1498b6aa8(void)

void FUN_1498b6aa8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea7e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b6b06 FUN_1498b6b06 body=126 status=ok
// SIG undefined FUN_1498b6b06(void)

void FUN_1498b6b06(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beea7e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b6b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b6b8e FUN_1498b6b8e body=20 status=ok
// SIG undefined FUN_1498b6b8e(void)

undefined1 FUN_1498b6b8e(longlong param_1)

{
  FUN_1498b6ba2(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b6ba2 FUN_1498b6ba2 body=358 status=ok
// SIG undefined FUN_1498b6ba2(void)

void FUN_1498b6ba2(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_88 [32];
  float *local_68;
  int local_60;
  float *local_58;
  int local_50;
  float *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_58,param_2);
  FUN_144a76c20(&local_48,param_2);
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      piVar6 = local_38 + local_30;
      iVar7 = *local_38 - *(int *)(param_1 + 0x290);
      fVar11 = DAT_14c846338;
      fVar12 = DAT_14c846330._4_4_;
      fVar13 = (float)DAT_14c846330;
      if ((-2 < iVar7) && (uVar8 = iVar7 + 1, (int)uVar8 < *(int *)(local_20 + 0x18))) {
        lVar4 = *(longlong *)(local_20 + 0x10);
        uVar9 = (ulonglong)uVar8;
        fVar11 = (float)*(double *)(lVar4 + 0x10 + uVar9 * 0x18);
        fVar12 = (float)*(double *)(lVar4 + 8 + uVar9 * 0x18);
        fVar13 = (float)*(double *)(lVar4 + uVar9 * 0x18);
      }
      pfVar1 = local_68 + local_60;
      *local_68 = fVar13;
      pfVar2 = local_58 + local_50;
      *local_58 = fVar12;
      pfVar3 = local_48 + local_40;
      *local_48 = fVar11;
      iVar5 = iVar5 + 1;
      piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar10 = (int *)(param_2 + 0x3c);
      }
      local_68 = pfVar1;
      local_58 = pfVar2;
      local_48 = pfVar3;
      local_38 = piVar6;
    } while (iVar5 < *piVar10);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b6d0a FUN_1498b6d0a body=165 status=ok
// SIG undefined FUN_1498b6d0a(void)

void FUN_1498b6d0a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beea850;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b6db0 FUN_1498b6db0 body=165 status=ok
// SIG undefined FUN_1498b6db0(void)

void FUN_1498b6db0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beea8c0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b6e56 FUN_1498b6e56 body=29 status=ok
// SIG undefined FUN_1498b6e56(void)

undefined8 FUN_1498b6e56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b6e88 FUN_1498b6e88 body=93 status=ok
// SIG undefined FUN_1498b6e88(void)

void FUN_1498b6e88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b6ee6 FUN_1498b6ee6 body=93 status=ok
// SIG undefined FUN_1498b6ee6(void)

void FUN_1498b6ee6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b6f44 FUN_1498b6f44 body=126 status=ok
// SIG undefined FUN_1498b6f44(void)

void FUN_1498b6f44(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beea850;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b6fb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b6fcc FUN_1498b6fcc body=20 status=ok
// SIG undefined FUN_1498b6fcc(void)

undefined1 FUN_1498b6fcc(longlong param_1)

{
  FUN_1498b6fe0(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b6fe0 FUN_1498b6fe0 body=347 status=ok
// SIG undefined FUN_1498b6fe0(void)

void FUN_1498b6fe0(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_88 [40];
  float *local_60;
  int local_58;
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_60,param_2);
  FUN_144a76c20(&local_50,param_2);
  FUN_144a76c20(&local_40,param_2);
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      iVar7 = local_2c - *(int *)(param_1 + 0x290);
      fVar10 = DAT_14c846338;
      fVar11 = DAT_14c846330._4_4_;
      fVar12 = (float)DAT_14c846330;
      if ((-2 < iVar7) && (uVar8 = iVar7 + 1, (int)uVar8 < *(int *)(local_20 + 0x108))) {
        lVar4 = *(longlong *)(local_20 + 0x100);
        uVar9 = (ulonglong)uVar8;
        fVar10 = (float)*(double *)(lVar4 + 0x10 + uVar9 * 0x18);
        fVar11 = (float)*(double *)(lVar4 + 8 + uVar9 * 0x18);
        fVar12 = (float)*(double *)(lVar4 + uVar9 * 0x18);
      }
      pfVar1 = local_60 + local_58;
      *local_60 = fVar12;
      pfVar2 = local_50 + local_48;
      *local_50 = fVar11;
      pfVar3 = local_40 + local_38;
      *local_40 = fVar10;
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_60 = pfVar1;
      local_50 = pfVar2;
      local_40 = pfVar3;
    } while (iVar5 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b713c FUN_1498b713c body=29 status=ok
// SIG undefined FUN_1498b713c(void)

undefined8 FUN_1498b713c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b716e FUN_1498b716e body=93 status=ok
// SIG undefined FUN_1498b716e(void)

void FUN_1498b716e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea8c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b71cc FUN_1498b71cc body=93 status=ok
// SIG undefined FUN_1498b71cc(void)

void FUN_1498b71cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea8c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b722a FUN_1498b722a body=126 status=ok
// SIG undefined FUN_1498b722a(void)

void FUN_1498b722a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beea8c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b7299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b72b2 FUN_1498b72b2 body=20 status=ok
// SIG undefined FUN_1498b72b2(void)

undefined1 FUN_1498b72b2(longlong param_1)

{
  FUN_1498b72c6(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b72c6 FUN_1498b72c6 body=364 status=ok
// SIG undefined FUN_1498b72c6(void)

void FUN_1498b72c6(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_88 [32];
  float *local_68;
  int local_60;
  float *local_58;
  int local_50;
  float *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_58,param_2);
  FUN_144a76c20(&local_48,param_2);
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      piVar6 = local_38 + local_30;
      iVar7 = *local_38 - *(int *)(param_1 + 0x290);
      fVar11 = DAT_14c846338;
      fVar12 = DAT_14c846330._4_4_;
      fVar13 = (float)DAT_14c846330;
      if ((-2 < iVar7) && (uVar8 = iVar7 + 1, (int)uVar8 < *(int *)(local_20 + 0x108))) {
        lVar4 = *(longlong *)(local_20 + 0x100);
        uVar9 = (ulonglong)uVar8;
        fVar11 = (float)*(double *)(lVar4 + 0x10 + uVar9 * 0x18);
        fVar12 = (float)*(double *)(lVar4 + 8 + uVar9 * 0x18);
        fVar13 = (float)*(double *)(lVar4 + uVar9 * 0x18);
      }
      pfVar1 = local_68 + local_60;
      *local_68 = fVar13;
      pfVar2 = local_58 + local_50;
      *local_58 = fVar12;
      pfVar3 = local_48 + local_40;
      *local_48 = fVar11;
      iVar5 = iVar5 + 1;
      piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar10 = (int *)(param_2 + 0x3c);
      }
      local_68 = pfVar1;
      local_58 = pfVar2;
      local_48 = pfVar3;
      local_38 = piVar6;
    } while (iVar5 < *piVar10);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498b7434 FUN_1498b7434 body=165 status=ok
// SIG undefined FUN_1498b7434(void)

void FUN_1498b7434(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beea930;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b74da FUN_1498b74da body=165 status=ok
// SIG undefined FUN_1498b74da(void)

void FUN_1498b74da(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beea9a0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b7580 FUN_1498b7580 body=29 status=ok
// SIG undefined FUN_1498b7580(void)

undefined8 FUN_1498b7580(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b75b2 FUN_1498b75b2 body=93 status=ok
// SIG undefined FUN_1498b75b2(void)

void FUN_1498b75b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea930;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b7610 FUN_1498b7610 body=93 status=ok
// SIG undefined FUN_1498b7610(void)

void FUN_1498b7610(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea930;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b766e FUN_1498b766e body=126 status=ok
// SIG undefined FUN_1498b766e(void)

void FUN_1498b766e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beea930;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b76dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b76f6 FUN_1498b76f6 body=20 status=ok
// SIG undefined FUN_1498b76f6(void)

undefined1 FUN_1498b76f6(longlong param_1)

{
  FUN_1498b770a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b770a FUN_1498b770a body=211 status=ok
// SIG undefined FUN_1498b770a(void)

void FUN_1498b770a(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_40,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      iVar4 = local_2c - *(int *)(param_1 + 0x290);
      uVar6 = 0;
      if (-2 < iVar4) {
        uVar5 = iVar4 + 1;
        if ((int)uVar5 < *(int *)(local_20 + 0x28)) {
          uVar6 = *(undefined4 *)(*(longlong *)(local_20 + 0x20) + (ulonglong)uVar5 * 4);
        }
      }
      puVar1 = local_40 + local_38;
      *local_40 = uVar6;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_40 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b77de FUN_1498b77de body=29 status=ok
// SIG undefined FUN_1498b77de(void)

undefined8 FUN_1498b77de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b7810 FUN_1498b7810 body=93 status=ok
// SIG undefined FUN_1498b7810(void)

void FUN_1498b7810(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea9a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b786e FUN_1498b786e body=93 status=ok
// SIG undefined FUN_1498b786e(void)

void FUN_1498b786e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beea9a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b78cc FUN_1498b78cc body=126 status=ok
// SIG undefined FUN_1498b78cc(void)

void FUN_1498b78cc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beea9a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b793b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b7954 FUN_1498b7954 body=20 status=ok
// SIG undefined FUN_1498b7954(void)

undefined1 FUN_1498b7954(longlong param_1)

{
  FUN_1498b7968(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b7968 FUN_1498b7968 body=228 status=ok
// SIG undefined FUN_1498b7968(void)

void FUN_1498b7968(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_48,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      piVar3 = local_38 + local_30;
      iVar4 = *local_38 - *(int *)(param_1 + 0x290);
      uVar7 = 0;
      if (-2 < iVar4) {
        uVar5 = iVar4 + 1;
        if ((int)uVar5 < *(int *)(local_20 + 0x28)) {
          uVar7 = *(undefined4 *)(*(longlong *)(local_20 + 0x20) + (ulonglong)uVar5 * 4);
        }
      }
      puVar1 = local_48 + local_40;
      *local_48 = uVar7;
      iVar2 = iVar2 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
      local_38 = piVar3;
    } while (iVar2 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b7a4e FUN_1498b7a4e body=165 status=ok
// SIG undefined FUN_1498b7a4e(void)

void FUN_1498b7a4e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeaa80;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b7af4 FUN_1498b7af4 body=31 status=ok
// SIG undefined FUN_1498b7af4(void)

undefined8 FUN_1498b7af4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b7b28 FUN_1498b7b28 body=93 status=ok
// SIG undefined FUN_1498b7b28(void)

void FUN_1498b7b28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeaa10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b7b86 FUN_1498b7b86 body=93 status=ok
// SIG undefined FUN_1498b7b86(void)

void FUN_1498b7b86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeaa10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b7be4 FUN_1498b7be4 body=126 status=ok
// SIG undefined FUN_1498b7be4(void)

void FUN_1498b7be4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeaa10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b7c53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b7c6c FUN_1498b7c6c body=20 status=ok
// SIG undefined FUN_1498b7c6c(void)

undefined1 FUN_1498b7c6c(longlong param_1)

{
  FUN_1498b7c80(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b7c80 FUN_1498b7c80 body=211 status=ok
// SIG undefined FUN_1498b7c80(void)

void FUN_1498b7c80(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_40,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      iVar4 = local_2c - *(int *)(param_1 + 0x290);
      uVar6 = 0;
      if (-2 < iVar4) {
        uVar5 = iVar4 + 1;
        if ((int)uVar5 < *(int *)(local_20 + 0x38)) {
          uVar6 = *(undefined4 *)(*(longlong *)(local_20 + 0x30) + (ulonglong)uVar5 * 4);
        }
      }
      puVar1 = local_40 + local_38;
      *local_40 = uVar6;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_40 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b7d54 FUN_1498b7d54 body=29 status=ok
// SIG undefined FUN_1498b7d54(void)

undefined8 FUN_1498b7d54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b7d86 FUN_1498b7d86 body=93 status=ok
// SIG undefined FUN_1498b7d86(void)

void FUN_1498b7d86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeaa80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b7de4 FUN_1498b7de4 body=93 status=ok
// SIG undefined FUN_1498b7de4(void)

void FUN_1498b7de4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeaa80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b7e42 FUN_1498b7e42 body=126 status=ok
// SIG undefined FUN_1498b7e42(void)

void FUN_1498b7e42(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeaa80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b7eb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b7eca FUN_1498b7eca body=20 status=ok
// SIG undefined FUN_1498b7eca(void)

undefined1 FUN_1498b7eca(longlong param_1)

{
  FUN_1498b7ede(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b7ede FUN_1498b7ede body=228 status=ok
// SIG undefined FUN_1498b7ede(void)

void FUN_1498b7ede(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_48,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      piVar3 = local_38 + local_30;
      iVar4 = *local_38 - *(int *)(param_1 + 0x290);
      uVar7 = 0;
      if (-2 < iVar4) {
        uVar5 = iVar4 + 1;
        if ((int)uVar5 < *(int *)(local_20 + 0x38)) {
          uVar7 = *(undefined4 *)(*(longlong *)(local_20 + 0x30) + (ulonglong)uVar5 * 4);
        }
      }
      puVar1 = local_48 + local_40;
      *local_48 = uVar7;
      iVar2 = iVar2 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
      local_38 = piVar3;
    } while (iVar2 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b7fc4 FUN_1498b7fc4 body=165 status=ok
// SIG undefined FUN_1498b7fc4(void)

void FUN_1498b7fc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeaaf0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b806a FUN_1498b806a body=165 status=ok
// SIG undefined FUN_1498b806a(void)

void FUN_1498b806a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeab60;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b8110 FUN_1498b8110 body=29 status=ok
// SIG undefined FUN_1498b8110(void)

undefined8 FUN_1498b8110(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b8142 FUN_1498b8142 body=93 status=ok
// SIG undefined FUN_1498b8142(void)

void FUN_1498b8142(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeaaf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b81a0 FUN_1498b81a0 body=93 status=ok
// SIG undefined FUN_1498b81a0(void)

void FUN_1498b81a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeaaf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b81fe FUN_1498b81fe body=126 status=ok
// SIG undefined FUN_1498b81fe(void)

void FUN_1498b81fe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeaaf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b826d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b8286 FUN_1498b8286 body=20 status=ok
// SIG undefined FUN_1498b8286(void)

undefined1 FUN_1498b8286(longlong param_1)

{
  FUN_1498b829a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b829a FUN_1498b829a body=211 status=ok
// SIG undefined FUN_1498b829a(void)

void FUN_1498b829a(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_40,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      iVar4 = local_2c - *(int *)(param_1 + 0x290);
      uVar6 = 0;
      if (-2 < iVar4) {
        uVar5 = iVar4 + 1;
        if ((int)uVar5 < *(int *)(local_20 + 0x48)) {
          uVar6 = *(undefined4 *)(*(longlong *)(local_20 + 0x40) + (ulonglong)uVar5 * 4);
        }
      }
      puVar1 = local_40 + local_38;
      *local_40 = uVar6;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_40 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b836e FUN_1498b836e body=29 status=ok
// SIG undefined FUN_1498b836e(void)

undefined8 FUN_1498b836e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b83a0 FUN_1498b83a0 body=93 status=ok
// SIG undefined FUN_1498b83a0(void)

void FUN_1498b83a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeab60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b83fe FUN_1498b83fe body=93 status=ok
// SIG undefined FUN_1498b83fe(void)

void FUN_1498b83fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeab60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b845c FUN_1498b845c body=126 status=ok
// SIG undefined FUN_1498b845c(void)

void FUN_1498b845c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeab60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b84cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b84e4 FUN_1498b84e4 body=20 status=ok
// SIG undefined FUN_1498b84e4(void)

undefined1 FUN_1498b84e4(longlong param_1)

{
  FUN_1498b84f8(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b84f8 FUN_1498b84f8 body=228 status=ok
// SIG undefined FUN_1498b84f8(void)

void FUN_1498b84f8(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_48,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      piVar3 = local_38 + local_30;
      iVar4 = *local_38 - *(int *)(param_1 + 0x290);
      uVar7 = 0;
      if (-2 < iVar4) {
        uVar5 = iVar4 + 1;
        if ((int)uVar5 < *(int *)(local_20 + 0x48)) {
          uVar7 = *(undefined4 *)(*(longlong *)(local_20 + 0x40) + (ulonglong)uVar5 * 4);
        }
      }
      puVar1 = local_48 + local_40;
      *local_48 = uVar7;
      iVar2 = iVar2 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
      local_38 = piVar3;
    } while (iVar2 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b85de FUN_1498b85de body=165 status=ok
// SIG undefined FUN_1498b85de(void)

void FUN_1498b85de(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeabd0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b8684 FUN_1498b8684 body=29 status=ok
// SIG undefined FUN_1498b8684(void)

undefined8 FUN_1498b8684(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b86b6 FUN_1498b86b6 body=93 status=ok
// SIG undefined FUN_1498b86b6(void)

void FUN_1498b86b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeabd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b8714 FUN_1498b8714 body=93 status=ok
// SIG undefined FUN_1498b8714(void)

void FUN_1498b8714(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeabd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b8772 FUN_1498b8772 body=126 status=ok
// SIG undefined FUN_1498b8772(void)

void FUN_1498b8772(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeabd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b87e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b87fa FUN_1498b87fa body=20 status=ok
// SIG undefined FUN_1498b87fa(void)

undefined1 FUN_1498b87fa(longlong param_1)

{
  FUN_1498b880e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b880e FUN_1498b880e body=381 status=ok
// SIG undefined FUN_1498b880e(void)

void FUN_1498b880e(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  undefined4 *local_60;
  int local_58;
  int *local_50;
  int local_48;
  int *local_40;
  int local_38;
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14017991c(local_28);
  FUN_1481a214e(local_2c,param_2);
  FUN_144a76cd4(&local_40,param_2);
  FUN_144a76cd4(&local_50,param_2);
  FUN_144a76cd4(&local_60);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar1 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      if (((*(char *)(param_1 + 0x94) == '\x01') && (*(char *)(param_1 + 0x2b0) == '\x01')) &&
         (*(int *)(local_20 + 8) != 0)) {
        *local_40 = *(int *)(param_1 + 0x290) + 1;
        *local_50 = *(int *)(local_20 + 8) + *(int *)(param_1 + 0x290);
        *local_60 = *(undefined4 *)(local_20 + 8);
      }
      else {
        *local_40 = 0;
        *local_50 = 0;
        *local_60 = 0;
      }
      local_40 = local_40 + local_38;
      local_50 = local_50 + local_48;
      local_60 = local_60 + local_58;
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar1 = (int *)(param_2 + 0x3c);
      }
    } while (iVar2 < *piVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b898c FUN_1498b898c body=31 status=ok
// SIG undefined FUN_1498b898c(void)

undefined8 FUN_1498b898c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b89c0 FUN_1498b89c0 body=93 status=ok
// SIG undefined FUN_1498b89c0(void)

void FUN_1498b89c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeac40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b8a1e FUN_1498b8a1e body=93 status=ok
// SIG undefined FUN_1498b8a1e(void)

void FUN_1498b8a1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeac40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b8a7c FUN_1498b8a7c body=126 status=ok
// SIG undefined FUN_1498b8a7c(void)

void FUN_1498b8a7c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeac40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b8aeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b8afa FUN_1498b8afa body=20 status=ok
// SIG undefined FUN_1498b8afa(void)

undefined1 FUN_1498b8afa(longlong param_1)

{
  FUN_14017954e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b8b0e FUN_1498b8b0e body=165 status=ok
// SIG undefined FUN_1498b8b0e(void)

void FUN_1498b8b0e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeacb0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b8bb4 FUN_1498b8bb4 body=165 status=ok
// SIG undefined FUN_1498b8bb4(void)

void FUN_1498b8bb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beead20;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b8c5a FUN_1498b8c5a body=29 status=ok
// SIG undefined FUN_1498b8c5a(void)

undefined8 FUN_1498b8c5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b8c8c FUN_1498b8c8c body=93 status=ok
// SIG undefined FUN_1498b8c8c(void)

void FUN_1498b8c8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeacb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b8cea FUN_1498b8cea body=93 status=ok
// SIG undefined FUN_1498b8cea(void)

void FUN_1498b8cea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeacb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b8d48 FUN_1498b8d48 body=126 status=ok
// SIG undefined FUN_1498b8d48(void)

void FUN_1498b8d48(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeacb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b8db7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b8dce FUN_1498b8dce body=19 status=ok
// SIG undefined FUN_1498b8dce(void)

undefined1 FUN_1498b8dce(undefined8 param_1,undefined8 param_2)

{
  FUN_1498b8de2(param_2);
  return 1;
}



// FUNCTION 1498b8de2 FUN_1498b8de2 body=168 status=ok
// SIG undefined FUN_1498b8de2(void)

void FUN_1498b8de2(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  int local_30;
  undefined1 local_24 [4];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14017991c(local_20,param_1);
  FUN_1498b5b4a(local_24,param_1);
  FUN_144a76cd4(&local_38,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_38 + local_30;
      *local_38 = 0;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_38 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b8e8c FUN_1498b8e8c body=29 status=ok
// SIG undefined FUN_1498b8e8c(void)

undefined8 FUN_1498b8e8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b8ebe FUN_1498b8ebe body=93 status=ok
// SIG undefined FUN_1498b8ebe(void)

void FUN_1498b8ebe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beead20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b8f1c FUN_1498b8f1c body=93 status=ok
// SIG undefined FUN_1498b8f1c(void)

void FUN_1498b8f1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beead20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b8f7a FUN_1498b8f7a body=126 status=ok
// SIG undefined FUN_1498b8f7a(void)

void FUN_1498b8f7a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beead20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b8fe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b9000 FUN_1498b9000 body=19 status=ok
// SIG undefined FUN_1498b9000(void)

undefined1 FUN_1498b9000(undefined8 param_1,undefined8 param_2)

{
  FUN_1498b9014(param_2);
  return 1;
}



// FUNCTION 1498b9014 FUN_1498b9014 body=168 status=ok
// SIG undefined FUN_1498b9014(void)

void FUN_1498b9014(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  int local_38;
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_20,param_1);
  FUN_144a76cd4(local_30,param_1);
  FUN_144a76cd4(&local_40,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_40 + local_38;
      *local_40 = 0;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_40 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b90be FUN_1498b90be body=165 status=ok
// SIG undefined FUN_1498b90be(void)

void FUN_1498b90be(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beead90;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b9164 FUN_1498b9164 body=165 status=ok
// SIG undefined FUN_1498b9164(void)

void FUN_1498b9164(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeae00;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b920a FUN_1498b920a body=29 status=ok
// SIG undefined FUN_1498b920a(void)

undefined8 FUN_1498b920a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b923c FUN_1498b923c body=93 status=ok
// SIG undefined FUN_1498b923c(void)

void FUN_1498b923c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beead90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b929a FUN_1498b929a body=93 status=ok
// SIG undefined FUN_1498b929a(void)

void FUN_1498b929a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beead90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b92f8 FUN_1498b92f8 body=126 status=ok
// SIG undefined FUN_1498b92f8(void)

void FUN_1498b92f8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beead90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b9367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b9380 FUN_1498b9380 body=20 status=ok
// SIG undefined FUN_1498b9380(void)

undefined1 FUN_1498b9380(longlong param_1)

{
  FUN_1498b9394(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b9394 FUN_1498b9394 body=386 status=ok
// SIG undefined FUN_1498b9394(void)

void FUN_1498b9394(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  int local_68;
  undefined4 *local_60;
  int local_58;
  undefined4 *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_70,param_2);
  FUN_144a76c20(&local_60,param_2);
  FUN_144a76c20(&local_50,param_2);
  FUN_144a76c20(&local_40,param_2);
  piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar9 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar9) {
    iVar8 = 0;
    do {
      iVar11 = local_2c - *(int *)(param_1 + 0x290);
      puVar10 = &DAT_149e1e2f8;
      if (-2 < iVar11) {
        uVar12 = iVar11 + 1;
        puVar10 = &DAT_149e1e2f8;
        if ((int)uVar12 < *(int *)(local_20 + 0xa8)) {
          puVar10 = (undefined8 *)((ulonglong)uVar12 * 0x10 + *(longlong *)(local_20 + 0xa0));
        }
      }
      uVar5 = *(undefined4 *)((longlong)puVar10 + 4);
      uVar6 = *(undefined4 *)(puVar10 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar10 + 0xc);
      puVar1 = local_70 + local_68;
      *local_70 = *(undefined4 *)puVar10;
      puVar2 = local_60 + local_58;
      *local_60 = uVar5;
      puVar3 = local_50 + local_48;
      *local_50 = uVar6;
      puVar4 = local_40 + local_38;
      *local_40 = uVar7;
      iVar8 = iVar8 + 1;
      piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar9 = (int *)(param_2 + 0x3c);
      }
      local_70 = puVar1;
      local_60 = puVar2;
      local_50 = puVar3;
      local_40 = puVar4;
    } while (iVar8 < *piVar9);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b9518 FUN_1498b9518 body=29 status=ok
// SIG undefined FUN_1498b9518(void)

undefined8 FUN_1498b9518(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b954a FUN_1498b954a body=93 status=ok
// SIG undefined FUN_1498b954a(void)

void FUN_1498b954a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeae00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b95a8 FUN_1498b95a8 body=93 status=ok
// SIG undefined FUN_1498b95a8(void)

void FUN_1498b95a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeae00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b9606 FUN_1498b9606 body=126 status=ok
// SIG undefined FUN_1498b9606(void)

void FUN_1498b9606(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeae00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b9675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b968e FUN_1498b968e body=20 status=ok
// SIG undefined FUN_1498b968e(void)

undefined1 FUN_1498b968e(longlong param_1)

{
  FUN_1498b96a2(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b96a2 FUN_1498b96a2 body=403 status=ok
// SIG undefined FUN_1498b96a2(void)

void FUN_1498b96a2(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  int local_50;
  undefined4 *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_58,param_2);
  FUN_144a76c20(&local_48,param_2);
  piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar9 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar9) {
    iVar8 = 0;
    do {
      piVar9 = local_38 + local_30;
      iVar12 = *local_38 - *(int *)(param_1 + 0x290);
      puVar10 = &DAT_149e1e2f8;
      if (-2 < iVar12) {
        uVar13 = iVar12 + 1;
        puVar10 = &DAT_149e1e2f8;
        if ((int)uVar13 < *(int *)(local_20 + 0xa8)) {
          puVar10 = (undefined8 *)((ulonglong)uVar13 * 0x10 + *(longlong *)(local_20 + 0xa0));
        }
      }
      uVar5 = *(undefined4 *)((longlong)puVar10 + 4);
      uVar6 = *(undefined4 *)(puVar10 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar10 + 0xc);
      puVar1 = local_78 + local_70;
      *local_78 = *(undefined4 *)puVar10;
      puVar2 = local_68 + local_60;
      *local_68 = uVar5;
      puVar3 = local_58 + local_50;
      *local_58 = uVar6;
      puVar4 = local_48 + local_40;
      *local_48 = uVar7;
      iVar8 = iVar8 + 1;
      piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar11 = (int *)(param_2 + 0x3c);
      }
      local_78 = puVar1;
      local_68 = puVar2;
      local_58 = puVar3;
      local_48 = puVar4;
      local_38 = piVar9;
    } while (iVar8 < *piVar11);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b9836 FUN_1498b9836 body=165 status=ok
// SIG undefined FUN_1498b9836(void)

void FUN_1498b9836(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeae70;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b98dc FUN_1498b98dc body=165 status=ok
// SIG undefined FUN_1498b98dc(void)

void FUN_1498b98dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeaee0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b9982 FUN_1498b9982 body=29 status=ok
// SIG undefined FUN_1498b9982(void)

undefined8 FUN_1498b9982(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b99b4 FUN_1498b99b4 body=93 status=ok
// SIG undefined FUN_1498b99b4(void)

void FUN_1498b99b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeae70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b9a12 FUN_1498b9a12 body=93 status=ok
// SIG undefined FUN_1498b9a12(void)

void FUN_1498b9a12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeae70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b9a70 FUN_1498b9a70 body=126 status=ok
// SIG undefined FUN_1498b9a70(void)

void FUN_1498b9a70(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeae70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b9adf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b9af8 FUN_1498b9af8 body=20 status=ok
// SIG undefined FUN_1498b9af8(void)

undefined1 FUN_1498b9af8(longlong param_1)

{
  FUN_1498b9b0c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b9b0c FUN_1498b9b0c body=163 status=ok
// SIG undefined FUN_1498b9b0c(void)

void FUN_1498b9b0c(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  int local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14017991c(local_28);
  FUN_144a76c20(&local_38,param_2);
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    uVar2 = *(undefined4 *)(param_1 + 0x2a8);
    iVar3 = 0;
    do {
      puVar1 = local_38 + local_30;
      *local_38 = uVar2;
      iVar3 = iVar3 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
      local_38 = puVar1;
    } while (iVar3 < *piVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b9bb0 FUN_1498b9bb0 body=29 status=ok
// SIG undefined FUN_1498b9bb0(void)

undefined8 FUN_1498b9bb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b9be2 FUN_1498b9be2 body=93 status=ok
// SIG undefined FUN_1498b9be2(void)

void FUN_1498b9be2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeaee0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b9c40 FUN_1498b9c40 body=93 status=ok
// SIG undefined FUN_1498b9c40(void)

void FUN_1498b9c40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeaee0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b9c9e FUN_1498b9c9e body=126 status=ok
// SIG undefined FUN_1498b9c9e(void)

void FUN_1498b9c9e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeaee0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b9d0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498b9d26 FUN_1498b9d26 body=20 status=ok
// SIG undefined FUN_1498b9d26(void)

undefined1 FUN_1498b9d26(longlong param_1)

{
  FUN_1498b9d3a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498b9d3a FUN_1498b9d3a body=163 status=ok
// SIG undefined FUN_1498b9d3a(void)

void FUN_1498b9d3a(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  int local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14017991c(local_28);
  FUN_144a76c20(&local_38,param_2);
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    uVar2 = *(undefined4 *)(param_1 + 0x2a8);
    iVar3 = 0;
    do {
      puVar1 = local_38 + local_30;
      *local_38 = uVar2;
      iVar3 = iVar3 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
      local_38 = puVar1;
    } while (iVar3 < *piVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b9dde FUN_1498b9dde body=165 status=ok
// SIG undefined FUN_1498b9dde(void)

void FUN_1498b9dde(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeaf50;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b9e84 FUN_1498b9e84 body=165 status=ok
// SIG undefined FUN_1498b9e84(void)

void FUN_1498b9e84(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeafc0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498b9f2a FUN_1498b9f2a body=29 status=ok
// SIG undefined FUN_1498b9f2a(void)

undefined8 FUN_1498b9f2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498b9f5c FUN_1498b9f5c body=93 status=ok
// SIG undefined FUN_1498b9f5c(void)

void FUN_1498b9f5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeaf50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498b9fba FUN_1498b9fba body=93 status=ok
// SIG undefined FUN_1498b9fba(void)

void FUN_1498b9fba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeaf50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498ba018 FUN_1498ba018 body=126 status=ok
// SIG undefined FUN_1498ba018(void)

void FUN_1498ba018(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeaf50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498ba087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498ba0a0 FUN_1498ba0a0 body=20 status=ok
// SIG undefined FUN_1498ba0a0(void)

undefined1 FUN_1498ba0a0(longlong param_1)

{
  FUN_1498ba0b4(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498ba0b4 FUN_1498ba0b4 body=211 status=ok
// SIG undefined FUN_1498ba0b4(void)

void FUN_1498ba0b4(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_40,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      iVar4 = local_2c - *(int *)(param_1 + 0x290);
      uVar6 = 0;
      if (-2 < iVar4) {
        uVar5 = iVar4 + 1;
        if ((int)uVar5 < *(int *)(local_20 + 0x68)) {
          uVar6 = *(undefined4 *)(*(longlong *)(local_20 + 0x60) + (ulonglong)uVar5 * 4);
        }
      }
      puVar1 = local_40 + local_38;
      *local_40 = uVar6;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_40 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ba188 FUN_1498ba188 body=29 status=ok
// SIG undefined FUN_1498ba188(void)

undefined8 FUN_1498ba188(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ba1ba FUN_1498ba1ba body=93 status=ok
// SIG undefined FUN_1498ba1ba(void)

void FUN_1498ba1ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeafc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498ba218 FUN_1498ba218 body=93 status=ok
// SIG undefined FUN_1498ba218(void)

void FUN_1498ba218(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeafc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498ba276 FUN_1498ba276 body=126 status=ok
// SIG undefined FUN_1498ba276(void)

void FUN_1498ba276(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeafc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498ba2e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498ba2fe FUN_1498ba2fe body=20 status=ok
// SIG undefined FUN_1498ba2fe(void)

undefined1 FUN_1498ba2fe(longlong param_1)

{
  FUN_1498ba312(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498ba312 FUN_1498ba312 body=228 status=ok
// SIG undefined FUN_1498ba312(void)

void FUN_1498ba312(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_48,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      piVar3 = local_38 + local_30;
      iVar4 = *local_38 - *(int *)(param_1 + 0x290);
      uVar7 = 0;
      if (-2 < iVar4) {
        uVar5 = iVar4 + 1;
        if ((int)uVar5 < *(int *)(local_20 + 0x68)) {
          uVar7 = *(undefined4 *)(*(longlong *)(local_20 + 0x60) + (ulonglong)uVar5 * 4);
        }
      }
      puVar1 = local_48 + local_40;
      *local_48 = uVar7;
      iVar2 = iVar2 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
      local_38 = piVar3;
    } while (iVar2 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ba3f8 FUN_1498ba3f8 body=165 status=ok
// SIG undefined FUN_1498ba3f8(void)

void FUN_1498ba3f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb030;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ba49e FUN_1498ba49e body=165 status=ok
// SIG undefined FUN_1498ba49e(void)

void FUN_1498ba49e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb0a0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ba544 FUN_1498ba544 body=29 status=ok
// SIG undefined FUN_1498ba544(void)

undefined8 FUN_1498ba544(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ba576 FUN_1498ba576 body=93 status=ok
// SIG undefined FUN_1498ba576(void)

void FUN_1498ba576(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb030;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498ba5d4 FUN_1498ba5d4 body=93 status=ok
// SIG undefined FUN_1498ba5d4(void)

void FUN_1498ba5d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb030;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498ba632 FUN_1498ba632 body=126 status=ok
// SIG undefined FUN_1498ba632(void)

void FUN_1498ba632(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb030;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498ba6a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498ba6ba FUN_1498ba6ba body=20 status=ok
// SIG undefined FUN_1498ba6ba(void)

undefined1 FUN_1498ba6ba(longlong param_1)

{
  FUN_1498ba6ce(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498ba6ce FUN_1498ba6ce body=211 status=ok
// SIG undefined FUN_1498ba6ce(void)

void FUN_1498ba6ce(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_40,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      iVar4 = local_2c - *(int *)(param_1 + 0x290);
      uVar6 = 0;
      if (-2 < iVar4) {
        uVar5 = iVar4 + 1;
        if ((int)uVar5 < *(int *)(local_20 + 0x78)) {
          uVar6 = *(undefined4 *)(*(longlong *)(local_20 + 0x70) + (ulonglong)uVar5 * 4);
        }
      }
      puVar1 = local_40 + local_38;
      *local_40 = uVar6;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_40 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ba7a2 FUN_1498ba7a2 body=29 status=ok
// SIG undefined FUN_1498ba7a2(void)

undefined8 FUN_1498ba7a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ba7d4 FUN_1498ba7d4 body=93 status=ok
// SIG undefined FUN_1498ba7d4(void)

void FUN_1498ba7d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb0a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498ba832 FUN_1498ba832 body=93 status=ok
// SIG undefined FUN_1498ba832(void)

void FUN_1498ba832(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb0a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498ba890 FUN_1498ba890 body=126 status=ok
// SIG undefined FUN_1498ba890(void)

void FUN_1498ba890(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb0a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498ba8ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498ba918 FUN_1498ba918 body=20 status=ok
// SIG undefined FUN_1498ba918(void)

undefined1 FUN_1498ba918(longlong param_1)

{
  FUN_1498ba92c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498ba92c FUN_1498ba92c body=228 status=ok
// SIG undefined FUN_1498ba92c(void)

void FUN_1498ba92c(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_48,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      piVar3 = local_38 + local_30;
      iVar4 = *local_38 - *(int *)(param_1 + 0x290);
      uVar7 = 0;
      if (-2 < iVar4) {
        uVar5 = iVar4 + 1;
        if ((int)uVar5 < *(int *)(local_20 + 0x78)) {
          uVar7 = *(undefined4 *)(*(longlong *)(local_20 + 0x70) + (ulonglong)uVar5 * 4);
        }
      }
      puVar1 = local_48 + local_40;
      *local_48 = uVar7;
      iVar2 = iVar2 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
      local_38 = piVar3;
    } while (iVar2 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498baa12 FUN_1498baa12 body=165 status=ok
// SIG undefined FUN_1498baa12(void)

void FUN_1498baa12(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb110;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498baab8 FUN_1498baab8 body=165 status=ok
// SIG undefined FUN_1498baab8(void)

void FUN_1498baab8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb180;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bab5e FUN_1498bab5e body=29 status=ok
// SIG undefined FUN_1498bab5e(void)

undefined8 FUN_1498bab5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498bab90 FUN_1498bab90 body=93 status=ok
// SIG undefined FUN_1498bab90(void)

void FUN_1498bab90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb110;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498babee FUN_1498babee body=93 status=ok
// SIG undefined FUN_1498babee(void)

void FUN_1498babee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb110;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bac4c FUN_1498bac4c body=126 status=ok
// SIG undefined FUN_1498bac4c(void)

void FUN_1498bac4c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb110;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498bacbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498bacd4 FUN_1498bacd4 body=20 status=ok
// SIG undefined FUN_1498bacd4(void)

undefined1 FUN_1498bacd4(longlong param_1)

{
  FUN_1498bace8(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498bace8 FUN_1498bace8 body=217 status=ok
// SIG undefined FUN_1498bace8(void)

void FUN_1498bace8(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_40,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      iVar4 = local_2c - *(int *)(param_1 + 0x290);
      uVar6 = 0;
      if (-2 < iVar4) {
        uVar5 = iVar4 + 1;
        if ((int)uVar5 < *(int *)(local_20 + 0x88)) {
          uVar6 = *(undefined4 *)(*(longlong *)(local_20 + 0x80) + (ulonglong)uVar5 * 4);
        }
      }
      puVar1 = local_40 + local_38;
      *local_40 = uVar6;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_40 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498badc2 FUN_1498badc2 body=29 status=ok
// SIG undefined FUN_1498badc2(void)

undefined8 FUN_1498badc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498badf4 FUN_1498badf4 body=93 status=ok
// SIG undefined FUN_1498badf4(void)

void FUN_1498badf4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb180;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bae52 FUN_1498bae52 body=93 status=ok
// SIG undefined FUN_1498bae52(void)

void FUN_1498bae52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb180;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}


