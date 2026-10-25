// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142d2a89a FUN_142d2a89a body=232 status=ok
// SIG undefined FUN_142d2a89a(void)

void FUN_142d2a89a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142d2a982 FUN_142d2a982 body=81 status=ok
// SIG undefined FUN_142d2a982(void)

void FUN_142d2a982(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471e872b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142d2a9d4 FUN_142d2a9d4 body=29 status=ok
// SIG undefined FUN_142d2a9d4(void)

undefined8 FUN_142d2a9d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2aa06 FUN_142d2aa06 body=85 status=ok
// SIG undefined FUN_142d2aa06(void)

void FUN_142d2aa06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255e20;
  return;
}



// FUNCTION 142d2aa5c FUN_142d2aa5c body=85 status=ok
// SIG undefined FUN_142d2aa5c(void)

void FUN_142d2aa5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255e20;
  return;
}



// FUNCTION 142d2aab2 FUN_142d2aab2 body=118 status=ok
// SIG undefined FUN_142d2aab2(void)

void FUN_142d2aab2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a255e20;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d2ab19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142d2ab28 FUN_142d2ab28 body=81 status=ok
// SIG undefined FUN_142d2ab28(void)

void FUN_142d2ab28(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2ab7a FUN_142d2ab7a body=83 status=ok
// SIG undefined FUN_142d2ab7a(void)

undefined8 FUN_142d2ab7a(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2abce FUN_142d2abce body=29 status=ok
// SIG undefined FUN_142d2abce(void)

undefined8 FUN_142d2abce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2ac00 FUN_142d2ac00 body=85 status=ok
// SIG undefined FUN_142d2ac00(void)

void FUN_142d2ac00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255e90;
  return;
}



// FUNCTION 142d2ac56 FUN_142d2ac56 body=85 status=ok
// SIG undefined FUN_142d2ac56(void)

void FUN_142d2ac56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255e90;
  return;
}



// FUNCTION 142d2acac FUN_142d2acac body=118 status=ok
// SIG undefined FUN_142d2acac(void)

void FUN_142d2acac(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a255e90;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d2ad13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142d2ad22 FUN_142d2ad22 body=81 status=ok
// SIG undefined FUN_142d2ad22(void)

void FUN_142d2ad22(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2ad74 FUN_142d2ad74 body=83 status=ok
// SIG undefined FUN_142d2ad74(void)

undefined8 FUN_142d2ad74(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2adc8 FUN_142d2adc8 body=29 status=ok
// SIG undefined FUN_142d2adc8(void)

undefined8 FUN_142d2adc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2adfa FUN_142d2adfa body=85 status=ok
// SIG undefined FUN_142d2adfa(void)

void FUN_142d2adfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255f00;
  return;
}



// FUNCTION 142d2ae50 FUN_142d2ae50 body=85 status=ok
// SIG undefined FUN_142d2ae50(void)

void FUN_142d2ae50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255f00;
  return;
}



// FUNCTION 142d2aea6 FUN_142d2aea6 body=118 status=ok
// SIG undefined FUN_142d2aea6(void)

void FUN_142d2aea6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a255f00;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d2af0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142d2af1c FUN_142d2af1c body=81 status=ok
// SIG undefined FUN_142d2af1c(void)

void FUN_142d2af1c(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2af6e FUN_142d2af6e body=83 status=ok
// SIG undefined FUN_142d2af6e(void)

undefined8 FUN_142d2af6e(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2afc2 FUN_142d2afc2 body=29 status=ok
// SIG undefined FUN_142d2afc2(void)

undefined8 FUN_142d2afc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2aff4 FUN_142d2aff4 body=85 status=ok
// SIG undefined FUN_142d2aff4(void)

void FUN_142d2aff4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255f70;
  return;
}



// FUNCTION 142d2b04a FUN_142d2b04a body=85 status=ok
// SIG undefined FUN_142d2b04a(void)

void FUN_142d2b04a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255f70;
  return;
}



// FUNCTION 142d2b0a0 FUN_142d2b0a0 body=118 status=ok
// SIG undefined FUN_142d2b0a0(void)

void FUN_142d2b0a0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a255f70;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d2b107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142d2b116 FUN_142d2b116 body=81 status=ok
// SIG undefined FUN_142d2b116(void)

void FUN_142d2b116(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2b168 FUN_142d2b168 body=83 status=ok
// SIG undefined FUN_142d2b168(void)

undefined8 FUN_142d2b168(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2b1bc FUN_142d2b1bc body=29 status=ok
// SIG undefined FUN_142d2b1bc(void)

undefined8 FUN_142d2b1bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2b1ee FUN_142d2b1ee body=85 status=ok
// SIG undefined FUN_142d2b1ee(void)

void FUN_142d2b1ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255fe0;
  return;
}



// FUNCTION 142d2b244 FUN_142d2b244 body=85 status=ok
// SIG undefined FUN_142d2b244(void)

void FUN_142d2b244(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255fe0;
  return;
}



// FUNCTION 142d2b29a FUN_142d2b29a body=118 status=ok
// SIG undefined FUN_142d2b29a(void)

void FUN_142d2b29a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a255fe0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d2b301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142d2b310 FUN_142d2b310 body=81 status=ok
// SIG undefined FUN_142d2b310(void)

void FUN_142d2b310(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2b362 FUN_142d2b362 body=83 status=ok
// SIG undefined FUN_142d2b362(void)

undefined8 FUN_142d2b362(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2b3b6 FUN_142d2b3b6 body=29 status=ok
// SIG undefined FUN_142d2b3b6(void)

undefined8 FUN_142d2b3b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2b3e8 FUN_142d2b3e8 body=85 status=ok
// SIG undefined FUN_142d2b3e8(void)

void FUN_142d2b3e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a256050;
  return;
}



// FUNCTION 142d2b43e FUN_142d2b43e body=85 status=ok
// SIG undefined FUN_142d2b43e(void)

void FUN_142d2b43e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a256050;
  return;
}



// FUNCTION 142d2b494 FUN_142d2b494 body=118 status=ok
// SIG undefined FUN_142d2b494(void)

void FUN_142d2b494(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a256050;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d2b4fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142d2b50a FUN_142d2b50a body=81 status=ok
// SIG undefined FUN_142d2b50a(void)

void FUN_142d2b50a(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2b55c FUN_142d2b55c body=83 status=ok
// SIG undefined FUN_142d2b55c(void)

undefined8 FUN_142d2b55c(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2b5b0 FUN_142d2b5b0 body=29 status=ok
// SIG undefined FUN_142d2b5b0(void)

undefined8 FUN_142d2b5b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2b5e2 FUN_142d2b5e2 body=85 status=ok
// SIG undefined FUN_142d2b5e2(void)

void FUN_142d2b5e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2560c0;
  return;
}



// FUNCTION 142d2b638 FUN_142d2b638 body=85 status=ok
// SIG undefined FUN_142d2b638(void)

void FUN_142d2b638(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2560c0;
  return;
}



// FUNCTION 142d2b68e FUN_142d2b68e body=118 status=ok
// SIG undefined FUN_142d2b68e(void)

void FUN_142d2b68e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a2560c0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d2b6f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142d2b704 FUN_142d2b704 body=81 status=ok
// SIG undefined FUN_142d2b704(void)

void FUN_142d2b704(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2b756 FUN_142d2b756 body=83 status=ok
// SIG undefined FUN_142d2b756(void)

undefined8 FUN_142d2b756(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2b7aa FUN_142d2b7aa body=29 status=ok
// SIG undefined FUN_142d2b7aa(void)

undefined8 FUN_142d2b7aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2b7dc FUN_142d2b7dc body=85 status=ok
// SIG undefined FUN_142d2b7dc(void)

void FUN_142d2b7dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a256130;
  return;
}



// FUNCTION 142d2b832 FUN_142d2b832 body=85 status=ok
// SIG undefined FUN_142d2b832(void)

void FUN_142d2b832(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a256130;
  return;
}



// FUNCTION 142d2b888 FUN_142d2b888 body=118 status=ok
// SIG undefined FUN_142d2b888(void)

void FUN_142d2b888(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a256130;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d2b8ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142d2b8fe FUN_142d2b8fe body=81 status=ok
// SIG undefined FUN_142d2b8fe(void)

void FUN_142d2b8fe(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2b950 FUN_142d2b950 body=83 status=ok
// SIG undefined FUN_142d2b950(void)

undefined8 FUN_142d2b950(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2b9a4 FUN_142d2b9a4 body=29 status=ok
// SIG undefined FUN_142d2b9a4(void)

undefined8 FUN_142d2b9a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2b9d6 FUN_142d2b9d6 body=85 status=ok
// SIG undefined FUN_142d2b9d6(void)

void FUN_142d2b9d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2561a0;
  return;
}



// FUNCTION 142d2ba2c FUN_142d2ba2c body=85 status=ok
// SIG undefined FUN_142d2ba2c(void)

void FUN_142d2ba2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2561a0;
  return;
}



// FUNCTION 142d2ba82 FUN_142d2ba82 body=118 status=ok
// SIG undefined FUN_142d2ba82(void)

void FUN_142d2ba82(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a2561a0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d2bae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142d2baf8 FUN_142d2baf8 body=81 status=ok
// SIG undefined FUN_142d2baf8(void)

void FUN_142d2baf8(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2bb4a FUN_142d2bb4a body=83 status=ok
// SIG undefined FUN_142d2bb4a(void)

undefined8 FUN_142d2bb4a(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2bb9e FUN_142d2bb9e body=659 status=ok
// SIG undefined FUN_142d2bb9e(void)

void FUN_142d2bb9e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = 0;
  local_a8 = 0x100000000;
  local_a0 = 0xffffffff;
  uStack_9c = 0xffffffff;
  uStack_98 = 0xffffffff;
  uStack_94 = 0xffffffff;
  local_90 = 0xffffffffffffffff;
  local_88 = 0x3f800000;
  local_84 = 0xff10;
  lVar7 = *param_1;
  iVar1 = *(int *)(lVar7 + 0x160);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar7 + 0x158);
    lVar9 = 0;
    do {
      uVar2 = *(uint *)(lVar3 + lVar9);
      if ((int)uVar2 < *(int *)(lVar7 + 400)) {
        lVar6 = lVar7 + 0x1a8;
        if (*(longlong *)(lVar7 + 0x1b8) != 0) {
          lVar6 = *(longlong *)(lVar7 + 0x1b8);
        }
        uVar4 = uVar2 + 0x1f;
        if (-1 < (int)uVar2) {
          uVar4 = uVar2;
        }
        if ((*(uint *)(lVar6 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0) {
          lVar7 = 0;
          puVar11 = local_b8;
        }
        else {
          iVar10 = (int)uVar2 / 0x9249 - (int)uVar2 / -0x6db70000;
          lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x198) + (longlong)iVar10 * 8);
          lVar5 = (longlong)(int)(iVar10 * -0x9249 + uVar2) * 0x38;
          puVar11 = (undefined1 *)(lVar6 + lVar5);
          lVar6 = (longlong)*(int *)(lVar6 + 0x28 + lVar5);
          if (lVar6 < 0) {
            lVar7 = (longlong)*(int *)(puVar11 + 0x24) * 0x20 + *(longlong *)(lVar7 + 0x4a8);
          }
          else {
            lVar7 = lVar6 * 0x20 + *(longlong *)(lVar7 + 0x3a0);
          }
        }
        *(uint *)(*param_2 + (ulonglong)*(uint *)(param_2 + 2) * 4) = uVar2;
        lVar6 = param_2[1];
        uVar8 = (ulonglong)(uint)((int)param_2[3] * (int)param_2[2]);
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        if (lVar7 == 0) {
          fVar16 = 0.0;
          fVar15 = 0.0;
          fVar13 = 0.0;
          fVar17 = 0.0;
          fVar14 = 0.0;
          fVar12 = 0.0;
        }
        else {
          fVar13 = (*(float *)(lVar7 + 0x1c) + *(float *)(lVar7 + 0x10)) * 0.5;
          fVar15 = (*(float *)(lVar7 + 0x18) + *(float *)(lVar7 + 0xc)) * 0.5;
          fVar16 = (*(float *)(lVar7 + 0x14) + *(float *)(lVar7 + 8)) * 0.5;
          fVar12 = (*(float *)(lVar7 + 0x1c) - *(float *)(lVar7 + 0x10)) * 0.5;
          fVar14 = (*(float *)(lVar7 + 0x18) - *(float *)(lVar7 + 0xc)) * 0.5;
          fVar17 = (*(float *)(lVar7 + 0x14) - *(float *)(lVar7 + 8)) * 0.5;
        }
        *(float *)(lVar6 + uVar8) = fVar16;
        *(float *)(lVar6 + 4 + uVar8) = fVar15;
        *(float *)(lVar6 + 8 + uVar8) = fVar13;
        *(float *)(lVar6 + 0x10 + uVar8) = fVar17;
        *(float *)(lVar6 + 0x14 + uVar8) = fVar14;
        *(float *)(lVar6 + 0x18 + uVar8) = fVar12;
        iVar10 = *(int *)(puVar11 + 0x1c);
        if (iVar10 < 0) {
          iVar10 = -1;
        }
        *(int *)(lVar6 + 0xc + uVar8) = iVar10;
        *(uint *)(lVar6 + 0x1c + uVar8) = (byte)puVar11[0x34] & 0xf;
        lVar7 = *param_1;
      }
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar1 * 4 != lVar9);
  }
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d2be50 FUN_142d2be50 body=12 status=ok
// SIG undefined FUN_142d2be50(void)

void FUN_142d2be50(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142d2be59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142d2be5c FUN_142d2be5c body=29 status=ok
// SIG undefined FUN_142d2be5c(void)

undefined8 FUN_142d2be5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2be7a FUN_142d2be7a body=807 status=ok
// SIG undefined FUN_142d2be7a(void)

void FUN_142d2be7a(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8 [16];
  undefined1 *local_158;
  undefined4 local_150;
  undefined8 local_148 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  puVar23 = &DAT_14c846400;
  puVar19 = local_1d8;
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar23;
    puVar23 = puVar23 + 1;
    puVar19 = puVar19 + 1;
  }
  local_158 = &DAT_3f8000003f800000;
  local_150 = 0x3f800000;
  puVar23 = &DAT_14c846400;
  puVar19 = local_148;
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar23;
    puVar23 = puVar23 + 1;
    puVar19 = puVar19 + 1;
  }
  local_c8 = 0xbff0000000000000;
  local_c0 = 0xbff0000000000000;
  local_b8 = 0xbff0000000000000;
  local_b0 = 0xbff0000000000000;
  local_a8 = 0xbff0000000000000;
  local_a0 = 0xbff0000000000000;
  local_98 = 1;
  local_90 = 0xffffffff;
  local_60 = 0;
  local_58 = 0x100000000;
  local_8c = 0;
  local_84 = 0;
  lVar17 = *param_1;
  iVar10 = *(int *)(lVar17 + 0x270);
  if ((longlong)iVar10 != 0) {
    lVar12 = *(longlong *)(lVar17 + 0x268);
    lVar21 = 0;
    do {
      uVar11 = *(uint *)(lVar12 + lVar21);
      if ((int)uVar11 < *(int *)(lVar17 + 0x2cc + (ulonglong)*(byte *)(lVar17 + 0x398) * 4)) {
        lVar22 = lVar17 + 0x2a8;
        if (*(longlong *)(lVar17 + 0x2b8) != 0) {
          lVar22 = *(longlong *)(lVar17 + 0x2b8);
        }
        uVar18 = uVar11 + 0x1f;
        if (-1 < (int)uVar11) {
          uVar18 = uVar11;
        }
        puVar23 = local_1d8;
        if ((*(uint *)(lVar22 + (longlong)((int)uVar18 >> 5) * 4) >> (uVar11 & 0x1f) & 1) != 0) {
          puVar23 = (undefined8 *)((longlong)(int)uVar11 * 400 + *(longlong *)(lVar17 + 0x298));
        }
        *(uint *)(*param_2 + (ulonglong)*(uint *)(param_2 + 2) * 4) = uVar11;
        lVar17 = param_2[1];
        uVar20 = (ulonglong)(uint)((int)param_2[3] * (int)param_2[2]);
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        dVar2 = (double)puVar23[0xe];
        dVar3 = (double)puVar23[0xc];
        dVar4 = (double)puVar23[0xd];
        fVar24 = (float)dVar3;
        fVar25 = (float)dVar4;
        fVar26 = (float)dVar2;
        *(float *)(lVar17 + uVar20) = fVar24;
        *(float *)(lVar17 + 4 + uVar20) = fVar25;
        *(float *)(lVar17 + 8 + uVar20) = fVar26;
        *(undefined4 *)(lVar17 + 0xc + uVar20) = 0x3f800000;
        dVar5 = (double)puVar23[0x14];
        dVar6 = (double)puVar23[0x13];
        *(float *)(lVar17 + 0x10 + uVar20) = (float)(double)puVar23[0x12];
        *(float *)(lVar17 + 0x14 + uVar20) = (float)dVar6;
        *(float *)(lVar17 + 0x18 + uVar20) = (float)dVar5;
        *(float *)(lVar17 + 0x1c + uVar20) = (float)(dVar3 - (double)fVar24);
        dVar3 = (double)puVar23[0x18];
        dVar5 = (double)puVar23[0x17];
        *(float *)(lVar17 + 0x20 + uVar20) = (float)(double)puVar23[0x16];
        *(float *)(lVar17 + 0x24 + uVar20) = (float)dVar5;
        *(float *)(lVar17 + 0x28 + uVar20) = (float)dVar3;
        *(float *)(lVar17 + 0x2c + uVar20) = (float)(dVar4 - (double)fVar25);
        dVar3 = (double)puVar23[0x1c];
        dVar4 = (double)puVar23[0x1b];
        *(float *)(lVar17 + 0x30 + uVar20) = (float)(double)puVar23[0x1a];
        *(float *)(lVar17 + 0x34 + uVar20) = (float)dVar4;
        *(float *)(lVar17 + 0x38 + uVar20) = (float)dVar3;
        *(float *)(lVar17 + 0x3c + uVar20) = (float)(dVar2 - (double)fVar26);
        uVar9 = *(undefined2 *)((longlong)puVar23 + 0x154);
        uVar7 = *(undefined1 *)((longlong)puVar23 + 0x14d);
        bVar8 = *(byte *)((longlong)puVar23 + 0x14e);
        uVar13 = puVar23[0x2b];
        *(undefined4 *)(lVar17 + 0x40 + uVar20) = *(undefined4 *)(puVar23 + 0x2a);
        *(uint *)(lVar17 + 0x44 + uVar20) = (uint)bVar8 << 0x11 | (uint)CONCAT12(uVar7,uVar9);
        *(undefined8 *)(lVar17 + 0x48 + uVar20) = uVar13;
        uVar14 = *(undefined4 *)((longlong)puVar23 + 0x164);
        uVar15 = *(undefined4 *)(puVar23 + 0x2d);
        uVar16 = *(undefined4 *)((longlong)puVar23 + 0x16c);
        puVar1 = (undefined4 *)(lVar17 + 0x50 + uVar20);
        *puVar1 = *(undefined4 *)(puVar23 + 0x2c);
        puVar1[1] = uVar14;
        puVar1[2] = uVar15;
        puVar1[3] = uVar16;
        lVar17 = *param_1;
      }
      lVar21 = lVar21 + 4;
    } while ((longlong)iVar10 * 4 != lVar21);
  }
  if ((local_40 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2c1c0 FUN_142d2c1c0 body=12 status=ok
// SIG undefined FUN_142d2c1c0(void)

void FUN_142d2c1c0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142d2c1c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142d2c1cc FUN_142d2c1cc body=29 status=ok
// SIG undefined FUN_142d2c1cc(void)

undefined8 FUN_142d2c1cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2c1ea FUN_142d2c1ea body=1083 status=ok
// SIG undefined FUN_142d2c1ea(void)

void FUN_142d2c1ea(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int local_dc [43];
  
  local_dc[0] = -1;
  lVar10 = *param_1;
  iVar1 = *(int *)(lVar10 + 0x500);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar10 + 0x4f8);
    lVar12 = 0;
    do {
      uVar2 = *(uint *)(lVar3 + lVar12);
      if ((int)uVar2 < *(int *)(lVar10 + 0x55c + (ulonglong)*(byte *)(lVar10 + 0x628) * 4)) {
        lVar14 = lVar10 + 0x538;
        if (*(longlong *)(lVar10 + 0x548) != 0) {
          lVar14 = *(longlong *)(lVar10 + 0x548);
        }
        uVar9 = uVar2 + 0x1f;
        if (-1 < (int)uVar2) {
          uVar9 = uVar2;
        }
        piVar8 = local_dc;
        if ((*(uint *)(lVar14 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
          piVar8 = (int *)((longlong)(int)uVar2 * 4 + *(longlong *)(lVar10 + 0x528));
        }
        *(uint *)(*param_2 + (ulonglong)*(uint *)(param_2 + 2) * 4) = uVar2;
        lVar10 = param_2[1];
        uVar11 = (ulonglong)(uint)((int)param_2[3] * (int)param_2[2]);
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        iVar7 = *piVar8;
        if ((longlong)iVar7 < 0) {
          iVar7 = -1;
          fVar27 = 0.0;
          fVar29 = 0.0;
          fVar22 = 0.0;
          fVar32 = 0.0;
          fVar30 = 0.0;
          fVar28 = 0.0;
          fVar31 = DAT_14c846330._4_4_;
          fVar16 = DAT_14c846338;
          fVar19 = (float)DAT_14c846330;
        }
        else {
          lVar14 = (longlong)iVar7 * 400;
          if (*(char *)(*(longlong *)(*param_1 + 0x298) + 0x140 + lVar14) == '\0') {
            dVar20 = 0.0;
            dVar21 = 0.0;
            dVar18 = 0.0;
            dVar4 = 0.0;
            dVar5 = 0.0;
            dVar6 = 0.0;
          }
          else {
            pdVar13 = (double *)(*(longlong *)(*param_1 + 0x298) + lVar14);
            dVar18 = (pdVar13[0x22] + pdVar13[0x25]) * 0.5;
            dVar24 = (pdVar13[0x23] + pdVar13[0x26]) * 0.5;
            dVar17 = (pdVar13[0x24] + pdVar13[0x27]) * 0.5;
            dVar23 = (pdVar13[0x25] - pdVar13[0x22]) * 0.5;
            dVar26 = (pdVar13[0x26] - pdVar13[0x23]) * 0.5;
            dVar4 = (pdVar13[0x27] - pdVar13[0x24]) * 0.5;
            dVar15 = dVar17 * pdVar13[8] + dVar24 * pdVar13[4] + dVar18 * *pdVar13 + pdVar13[0xc];
            dVar25 = dVar17 * pdVar13[9] + dVar24 * pdVar13[5] + dVar18 * pdVar13[1] + pdVar13[0xd];
            dVar20 = ABS(dVar4 * pdVar13[8]) + ABS(pdVar13[4] * dVar26) + ABS(dVar23 * *pdVar13);
            dVar21 = ABS(dVar4 * pdVar13[9]) + ABS(pdVar13[5] * dVar26) + ABS(dVar23 * pdVar13[1]);
            dVar5 = dVar15 - dVar20;
            dVar6 = dVar25 - dVar21;
            dVar20 = dVar20 + dVar15;
            dVar21 = dVar21 + dVar25;
            dVar18 = dVar17 * pdVar13[10] + dVar24 * pdVar13[6] + dVar18 * pdVar13[2] + pdVar13[0xe]
            ;
            dVar24 = ABS(dVar26 * pdVar13[6]) + ABS(dVar23 * pdVar13[2]) + ABS(dVar4 * pdVar13[10]);
            dVar4 = dVar18 - dVar24;
            dVar18 = dVar18 + dVar24;
          }
          dVar15 = (dVar18 + dVar4) * 0.5;
          dVar24 = (dVar21 + dVar6) * 0.5;
          dVar25 = (dVar20 + dVar5) * 0.5;
          fVar28 = (float)dVar25;
          fVar22 = (float)(dVar25 - (double)fVar28);
          fVar30 = (float)dVar24;
          fVar29 = (float)(dVar24 - (double)fVar30);
          fVar32 = (float)dVar15;
          fVar27 = (float)(dVar15 - (double)fVar32);
          fVar31 = (float)((dVar21 - dVar6) * 0.5);
          fVar16 = (float)((dVar18 - dVar4) * 0.5);
          fVar19 = (float)((dVar20 - dVar5) * 0.5);
        }
        *(float *)(lVar10 + uVar11) = fVar28;
        *(float *)(lVar10 + 4 + uVar11) = fVar30;
        *(float *)(lVar10 + 8 + uVar11) = fVar32;
        *(float *)(lVar10 + 0x10 + uVar11) = fVar22;
        *(float *)(lVar10 + 0x14 + uVar11) = fVar29;
        *(float *)(lVar10 + 0x18 + uVar11) = fVar27;
        *(undefined4 *)(lVar10 + 0x1c + uVar11) = 0x3f800000;
        *(float *)(lVar10 + 0x20 + uVar11) = fVar19;
        *(float *)(lVar10 + 0x24 + uVar11) = fVar31;
        *(float *)(lVar10 + 0x28 + uVar11) = fVar16;
        *(undefined4 *)(lVar10 + 0x2c + uVar11) = 0x3f800000;
        *(int *)(lVar10 + 0xc + uVar11) = iVar7;
        lVar10 = *param_1;
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)iVar1 * 4 != lVar12);
  }
  return;
}



// FUNCTION 142d2c644 FUN_142d2c644 body=12 status=ok
// SIG undefined FUN_142d2c644(void)

void FUN_142d2c644(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142d2c64d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142d2c650 FUN_142d2c650 body=29 status=ok
// SIG undefined FUN_142d2c650(void)

undefined8 FUN_142d2c650(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2c66e FUN_142d2c66e body=365 status=ok
// SIG undefined FUN_142d2c66e(void)

void FUN_142d2c66e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = (longlong)*(int *)(*param_1 + 0x780);
  if (lVar4 != 0) {
    piVar7 = *(int **)(*param_1 + 0x778);
    local_58 = piVar7 + lVar4;
    do {
      if (*piVar7 < *(int *)(param_1[1] + 0x3338)) {
        lVar4 = *(longlong *)(*(longlong *)(param_1[1] + 0x3330) + (longlong)*piVar7 * 8);
        iVar1 = *(int *)(lVar4 + 0x208);
        if (0 < iVar1) {
          iVar2 = *(int *)(lVar4 + 0x204);
          iVar6 = 0;
          do {
            if (*(int *)(lVar4 + 0x100) < 1) {
              local_4c = 0xffffffff;
            }
            else {
              iVar3 = *(int *)(lVar4 + 0x100) + -1;
              if (iVar6 < iVar3) {
                iVar3 = iVar6;
              }
              lVar5 = *(longlong *)(lVar4 + 0xf8);
              if (*(longlong *)(lVar4 + 0xf8) == 0) {
                lVar5 = lVar4 + 0xf0;
              }
              iVar3 = *(int *)(lVar5 + (longlong)iVar3 * 4);
              local_4c = *(undefined4 *)
                          (*(longlong *)
                            (*(longlong *)(*param_1 + 0x198) + (longlong)(iVar3 / 0x9249) * 8) +
                           0x1c + (longlong)(iVar3 % 0x9249) * 0x38);
            }
            iVar3 = iVar6 + iVar2;
            if (iVar3 < (int)param_1[2]) {
              *(int *)(*param_2 + (ulonglong)*(uint *)(param_2 + 2) * 4) = iVar3;
              lVar5 = param_2[2];
              *(int *)(param_2 + 2) = (int)lVar5 + 1;
              memcpy((void *)((ulonglong)(*(uint *)(param_2 + 3) * (int)lVar5) + param_2[1]),
                     &local_4c,(ulonglong)*(uint *)(param_2 + 3));
            }
            iVar6 = iVar6 + 1;
          } while (iVar1 != iVar6);
        }
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2c802 FUN_142d2c802 body=12 status=ok
// SIG undefined FUN_142d2c802(void)

void FUN_142d2c802(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142d2c80b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142d2c80e FUN_142d2c80e body=29 status=ok
// SIG undefined FUN_142d2c80e(void)

undefined8 FUN_142d2c80e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2c82c FUN_142d2c82c body=2237 status=ok
// SIG undefined FUN_142d2c82c(void)

void FUN_142d2c82c(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_248 [30];
  undefined8 uStack_22a;
  undefined2 uStack_222;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined4 local_12b;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined1 *local_ac;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_12b = 0xff00;
  lVar10 = 0x106;
  do {
    *(undefined8 *)((longlong)&uStack_22a + lVar10) = 0xffffffff00000000;
    *(undefined2 *)((longlong)&uStack_222 + lVar10) = 0;
    *(undefined1 *)((longlong)&local_220 + lVar10) = 0;
    lVar10 = lVar10 + 0xc;
  } while (lVar10 != 0x172);
  local_b0 = 0xffff;
  local_b8 = 0xffffffffffffffff;
  local_ac = &DAT_3f8000003f800000;
  local_12c = 0;
  local_220 = DAT_14c846330;
  local_218 = DAT_14c846338;
  local_214 = DAT_14c846330;
  local_20c = DAT_14c846338;
  local_208 = DAT_14c846330;
  local_200 = DAT_14c846338;
  local_1f4 = DAT_14c846338;
  local_1fc = DAT_14c846330;
  local_1f0 = DAT_14c846330;
  local_1e8 = DAT_14c846338;
  local_1d0 = DAT_14c8464f0;
  local_1e0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_1d8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_1b8 = DAT_14c8464f0;
  local_1c8 = (undefined4)DAT_14c8464e0;
  uStack_1c4 = DAT_14c8464e0._4_4_;
  uStack_1c0 = (undefined4)DAT_14c8464e8;
  uStack_1bc = DAT_14c8464e8._4_4_;
  local_1b0 = (undefined4)DAT_14c8464e0;
  uStack_1ac = DAT_14c8464e0._4_4_;
  uStack_1a8 = (undefined4)DAT_14c8464e8;
  uStack_1a4 = DAT_14c8464e8._4_4_;
  local_1a0 = DAT_14c8464f0;
  local_198 = (undefined4)DAT_14c8464e0;
  uStack_194 = DAT_14c8464e0._4_4_;
  uStack_190 = (undefined4)DAT_14c8464e8;
  uStack_18c = DAT_14c8464e8._4_4_;
  local_188 = DAT_14c8464f0;
  local_180 = (undefined4)DAT_14c8464e0;
  uStack_17c = DAT_14c8464e0._4_4_;
  uStack_178 = (undefined4)DAT_14c8464e8;
  uStack_174 = DAT_14c8464e8._4_4_;
  local_170 = DAT_14c8464f0;
  local_160 = DAT_14c846338;
  local_168 = DAT_14c846330;
  local_15c = DAT_14c846330;
  local_154 = DAT_14c846338;
  local_148 = DAT_14c846338;
  local_150 = DAT_14c846330;
  local_13c = DAT_14c846338;
  local_144 = DAT_14c846330;
  local_130 = DAT_14c846338;
  local_138 = DAT_14c846330;
  lVar10 = *param_1;
  iVar9 = *(int *)(lVar10 + 0x118);
  if ((longlong)iVar9 != 0) {
    lVar10 = *(longlong *)(lVar10 + 0x110);
    lVar23 = 0;
    do {
      uVar16 = *(uint *)(lVar10 + lVar23);
      lVar11 = *param_1;
      if ((int)uVar16 < *(int *)(lVar11 + 0x3c + (ulonglong)*(byte *)(lVar11 + 0x108) * 4)) {
        lVar21 = lVar11 + 0x18;
        if (*(longlong *)(lVar11 + 0x28) != 0) {
          lVar21 = *(longlong *)(lVar11 + 0x28);
        }
        uVar14 = uVar16 + 0x1f;
        if (-1 < (int)uVar16) {
          uVar14 = uVar16;
        }
        puVar24 = &local_220;
        if ((*(uint *)(lVar21 + (longlong)((int)uVar14 >> 5) * 4) >> (uVar16 & 0x1f) & 1) != 0) {
          puVar24 = (undefined8 *)((longlong)(int)uVar16 * 0x180 + *(longlong *)(lVar11 + 8));
        }
        if (((longlong)*(int *)(puVar24 + 0x2d) < 0) ||
           (uVar14 = *(uint *)(*(longlong *)(lVar11 + 0x298) + 0x148 +
                              (longlong)*(int *)(puVar24 + 0x2d) * 400), (int)uVar14 < 0)) {
          lVar11 = 0;
        }
        else {
          lVar11 = (longlong)(int)(uVar14 % 0x9249) * 0x38 +
                   *(longlong *)(*(longlong *)(lVar11 + 0x198) + (ulonglong)(uVar14 / 0x9249) * 8);
        }
        *(uint *)(*param_2 + (ulonglong)*(uint *)(param_2 + 2) * 4) = uVar16;
        lVar21 = param_2[1];
        uVar20 = (ulonglong)(uint)((int)param_2[3] * (int)param_2[2]);
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        dVar2 = (double)puVar24[8];
        dVar3 = (double)puVar24[9];
        fVar26 = (float)dVar2;
        fVar28 = (float)dVar3;
        dVar4 = (double)puVar24[10];
        fVar29 = (float)dVar4;
        *(float *)(lVar21 + uVar20) = fVar26;
        *(float *)(lVar21 + 4 + uVar20) = fVar28;
        *(float *)(lVar21 + 8 + uVar20) = fVar29;
        *(undefined4 *)(lVar21 + 0xc + uVar20) = 0x3f800000;
        dVar5 = (double)puVar24[0x11];
        dVar6 = (double)puVar24[0xe];
        *(float *)(lVar21 + 0x10 + uVar20) = (float)(double)puVar24[0xb];
        *(float *)(lVar21 + 0x14 + uVar20) = (float)dVar6;
        *(float *)(lVar21 + 0x18 + uVar20) = (float)dVar5;
        *(float *)(lVar21 + 0x1c + uVar20) = (float)(dVar2 - (double)fVar26);
        dVar2 = (double)puVar24[0x12];
        dVar5 = (double)puVar24[0xf];
        *(float *)(lVar21 + 0x20 + uVar20) = (float)(double)puVar24[0xc];
        *(float *)(lVar21 + 0x24 + uVar20) = (float)dVar5;
        *(float *)(lVar21 + 0x28 + uVar20) = (float)dVar2;
        *(float *)(lVar21 + 0x2c + uVar20) = (float)(dVar3 - (double)fVar28);
        dVar2 = (double)puVar24[0x13];
        dVar3 = (double)puVar24[0x10];
        *(float *)(lVar21 + 0x30 + uVar20) = (float)(double)puVar24[0xd];
        *(float *)(lVar21 + 0x34 + uVar20) = (float)dVar3;
        *(float *)(lVar21 + 0x38 + uVar20) = (float)dVar2;
        *(float *)(lVar21 + 0x3c + uVar20) = (float)(dVar4 - (double)fVar29);
        fVar26 = *(float *)(puVar24 + 0x2f);
        if (fVar26 < 1.0) {
          uVar22 = (uint)ROUND(1.0 / fVar26 + 1.0 / fVar26 + 0.5);
          uVar16 = 0;
          uVar14 = 0;
          if (1 < uVar22) {
            uVar22 = (int)uVar22 >> 1;
            uVar14 = 0x1f;
            if (uVar22 != 0) {
              for (; uVar22 >> uVar14 == 0; uVar14 = uVar14 - 1) {
              }
            }
          }
        }
        else {
          uVar22 = (uint)ROUND(fVar26 + fVar26 + 0.5);
          uVar14 = 0;
          uVar16 = 0;
          if (1 < uVar22) {
            uVar22 = (int)uVar22 >> 1;
            uVar16 = 0x1f;
            if (uVar22 != 0) {
              for (; uVar22 >> uVar16 == 0; uVar16 = uVar16 - 1) {
              }
            }
          }
        }
        if (7 < uVar14) {
          uVar14 = 8;
        }
        if (7 < uVar16) {
          uVar16 = 8;
        }
        if (lVar11 == 0) {
          uVar22 = 0xf00000;
        }
        else {
          uVar22 = (*(byte *)(lVar11 + 0x35) & 0xf) << 0x14;
        }
        lVar21 = lVar21 + uVar20;
        bVar19 = *(byte *)((longlong)puVar24 + 0x171);
        bVar7 = *(byte *)((longlong)puVar24 + 0xf6);
        uVar20 = (ulonglong)bVar7;
        bVar8 = *(byte *)((longlong)puVar24 + 0xf7);
        uVar13 = (uint)(bVar7 <= bVar8) << 0x18;
        if (*(char *)((longlong)puVar24 + 0xf4) == '\0') {
          uVar13 = 0;
        }
        uVar15 = (uint)(bVar7 <= bVar8) << 0x19;
        if (*(char *)((longlong)puVar24 + 0xf5) == '\0') {
          uVar15 = 0;
        }
        dVar2 = (double)puVar24[0x16];
        dVar3 = (double)puVar24[0x15];
        *(float *)(lVar21 + 0x40) = (float)(double)puVar24[0x14];
        *(float *)(lVar21 + 0x44) = (float)dVar3;
        *(float *)(lVar21 + 0x48) = (float)dVar2;
        *(uint *)(lVar21 + 0x4c) =
             uVar15 | uVar13 | (bVar19 & 0xf) << 0x10 | uVar14 | uVar22 | uVar16 << 8;
        if (bVar8 < bVar7) {
          *(undefined8 *)(lVar21 + 0x50) = 0;
          *(undefined8 *)(lVar21 + 0x58) = 0;
          fVar26 = *(float *)(puVar24 + 0x1d);
          fVar28 = *(float *)((longlong)puVar24 + 0xec);
          fVar29 = 100.0;
        }
        else {
          uVar14 = 0;
          uVar25 = 0;
          uVar27 = 0;
          uVar16 = 0;
          if (*(short *)((longlong)puVar24 + uVar20 * 0xc + 0xe0) != 0) {
            uVar16 = (uint)*(byte *)((longlong)puVar24 + uVar20 * 0xc + 0xd9) << 0x10 |
                     (uint)*(byte *)((longlong)puVar24 + uVar20 * 0xc + 0xd8);
            uVar27 = *(undefined4 *)((longlong)puVar24 + uVar20 * 0xc + 0xdc);
          }
          if (*(short *)((longlong)puVar24 + (ulonglong)bVar8 * 0xc + 0xe0) != 0) {
            pbVar12 = (byte *)((longlong)puVar24 + (ulonglong)bVar8 * 0xc + 0xd8);
            uVar14 = (uint)pbVar12[1] << 0x10 | (uint)*pbVar12;
            uVar25 = *(undefined4 *)(pbVar12 + 4);
          }
          *(uint *)(lVar21 + 0x50) = uVar16;
          *(undefined4 *)(lVar21 + 0x54) = uVar27;
          *(uint *)(lVar21 + 0x58) = uVar14;
          *(undefined4 *)(lVar21 + 0x5c) = uVar25;
          if (fVar26 < 1.0) {
            uVar22 = (uint)ROUND(1.0 / fVar26 + 1.0 / fVar26 + 0.5);
            uVar16 = 0;
            uVar14 = 0;
            if (1 < uVar22) {
              uVar22 = (int)uVar22 >> 1;
              uVar14 = 0x1f;
              uVar16 = 0;
              if (uVar22 != 0) {
                for (; uVar22 >> uVar14 == 0; uVar14 = uVar14 - 1) {
                }
              }
            }
          }
          else {
            uVar22 = (uint)ROUND(fVar26 + fVar26 + 0.5);
            uVar16 = 0;
            uVar14 = 0;
            if (1 < uVar22) {
              uVar22 = (int)uVar22 >> 1;
              uVar16 = 0x1f;
              uVar14 = 0;
              if (uVar22 != 0) {
                for (; uVar22 >> uVar16 == 0; uVar16 = uVar16 - 1) {
                }
              }
            }
          }
          if (7 < uVar14) {
            uVar14 = 8;
          }
          if (7 < uVar16) {
            uVar16 = 8;
          }
          iVar17 = bVar7 - uVar14;
          iVar18 = iVar17;
          if (10 < iVar17) {
            iVar18 = 0xb;
          }
          uVar16 = bVar7 - uVar16;
          if (10 < (int)uVar16) {
            uVar16 = 0xb;
          }
          uVar14 = uVar16;
          if ((int)uVar16 < 4) {
            uVar14 = 3;
          }
          if ((iVar17 < 8) && ((uVar14 & 8) == 0)) {
            if (iVar18 < 4) {
              iVar18 = 3;
            }
            iVar18 = 1 << ((byte)iVar18 & 0x1f);
            bVar19 = (byte)uVar14 & 7;
            iVar17 = 1;
          }
          else {
            if (iVar18 < 8) {
              iVar18 = 7;
            }
            if ((int)uVar16 < 8) {
              uVar16 = 7;
            }
            iVar18 = 0x7f << ((char)iVar18 - 7U & 0x1f);
            bVar19 = (char)uVar16 - 7;
            iVar17 = 0x7f;
          }
          fVar26 = *(float *)(puVar24 + 0x1d);
          fVar28 = *(float *)((longlong)puVar24 + 0xec);
          fVar29 = (fVar28 / (float)(iVar17 << (bVar19 & 0x1f)) + fVar26 / (float)iVar18) * 0.5;
        }
        uVar27 = *(undefined4 *)((longlong)puVar24 + 0xdc);
        uVar25 = *(undefined4 *)(puVar24 + 0x1a);
        uVar1 = *(undefined4 *)(puVar24 + 0x17);
        *(undefined4 *)(lVar21 + 0x60) = *(undefined4 *)((longlong)puVar24 + 0xc4);
        *(undefined4 *)(lVar21 + 100) = uVar25;
        *(undefined4 *)(lVar21 + 0x68) = uVar27;
        *(undefined4 *)(lVar21 + 0x6c) = uVar1;
        uVar27 = *(undefined4 *)(puVar24 + 0x1c);
        uVar25 = *(undefined4 *)((longlong)puVar24 + 0xd4);
        uVar1 = *(undefined4 *)((longlong)puVar24 + 0xbc);
        *(undefined4 *)(lVar21 + 0x70) = *(undefined4 *)(puVar24 + 0x19);
        *(undefined4 *)(lVar21 + 0x74) = uVar25;
        *(undefined4 *)(lVar21 + 0x78) = uVar27;
        *(undefined4 *)(lVar21 + 0x7c) = uVar1;
        uVar27 = *(undefined4 *)((longlong)puVar24 + 0xe4);
        uVar25 = *(undefined4 *)(puVar24 + 0x1b);
        uVar1 = *(undefined4 *)(puVar24 + 0x18);
        *(undefined4 *)(lVar21 + 0x80) = *(undefined4 *)((longlong)puVar24 + 0xcc);
        *(undefined4 *)(lVar21 + 0x84) = uVar25;
        *(undefined4 *)(lVar21 + 0x88) = uVar27;
        *(undefined4 *)(lVar21 + 0x8c) = uVar1;
        uVar27 = *(undefined4 *)(puVar24 + 0x1e);
        *(float *)(lVar21 + 0x90) = fVar26;
        *(float *)(lVar21 + 0x94) = fVar28;
        *(undefined4 *)(lVar21 + 0x98) = uVar27;
        *(float *)(lVar21 + 0x9c) = fVar29;
      }
      lVar23 = lVar23 + 4;
    } while ((longlong)iVar9 * 4 != lVar23);
    lVar10 = *param_1;
  }
  if (*(int *)(lVar10 + 0x11c) < 0) {
    *(undefined4 *)(lVar10 + 0x118) = 0;
    FUN_14481578e(lVar10 + 0x110,0);
  }
  else {
    *(undefined4 *)(lVar10 + 0x118) = 0;
  }
  *(undefined4 *)(lVar10 + 0x138) = 0;
  if ((local_a0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d2d108 FUN_142d2d108 body=12 status=ok
// SIG undefined FUN_142d2d108(void)

void FUN_142d2d108(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142d2d111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142d2d114 FUN_142d2d114 body=29 status=ok
// SIG undefined FUN_142d2d114(void)

undefined8 FUN_142d2d114(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2d132 FUN_142d2d132 body=31 status=ok
// SIG undefined FUN_142d2d132(void)

undefined8 FUN_142d2d132(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2d152 FUN_142d2d152 body=1324 status=ok
// SIG undefined FUN_142d2d152(void)

void FUN_142d2d152(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d2d680 FUN_142d2d680 body=31 status=ok
// SIG undefined FUN_142d2d680(void)

undefined8 FUN_142d2d680(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2d6a0 FUN_142d2d6a0 body=1324 status=ok
// SIG undefined FUN_142d2d6a0(void)

void FUN_142d2d6a0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d2dbce FUN_142d2dbce body=31 status=ok
// SIG undefined FUN_142d2dbce(void)

undefined8 FUN_142d2dbce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2dbee FUN_142d2dbee body=1324 status=ok
// SIG undefined FUN_142d2dbee(void)

void FUN_142d2dbee(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d2e11c FUN_142d2e11c body=31 status=ok
// SIG undefined FUN_142d2e11c(void)

undefined8 FUN_142d2e11c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2e13c FUN_142d2e13c body=31 status=ok
// SIG undefined FUN_142d2e13c(void)

undefined8 FUN_142d2e13c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2e15c FUN_142d2e15c body=31 status=ok
// SIG undefined FUN_142d2e15c(void)

undefined8 FUN_142d2e15c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2e17c FUN_142d2e17c body=38 status=ok
// SIG undefined FUN_142d2e17c(void)

undefined8 FUN_142d2e17c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2e1a2 FUN_142d2e1a2 body=2648 status=ok
// SIG undefined FUN_142d2e1a2(void)

void FUN_142d2e1a2(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [4];
  longlong lVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  longlong lVar18;
  longlong lVar19;
  wchar_t *_Dest;
  byte bVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined1 auStack_358 [27];
  undefined1 auStack_33d [8];
  longlong lStack_335;
  undefined4 uStack_32d;
  byte abStack_329 [193];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined8 local_254;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined1 local_240 [7];
  undefined1 auStack_239 [5];
  undefined1 auStack_234 [3];
  undefined1 auStack_231 [5];
  byte abStack_22c [3];
  undefined1 uStack_229;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined8 uStack_1c4;
  undefined8 uStack_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined8 local_19c;
  undefined5 uStack_194;
  undefined3 uStack_18f;
  undefined5 uStack_18c;
  undefined8 uStack_187;
  undefined1 local_178 [8];
  undefined1 auStack_170 [8];
  undefined1 local_168 [4];
  byte bStack_164;
  undefined3 uStack_163;
  uint local_160;
  undefined8 uStack_158;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ushort local_78;
  undefined8 local_70;
  ushort local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_358;
  FUN_144b1c6fa(param_1 + 0x10,&local_228);
  puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar21 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar21 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar21;
  param_2[6] = (ulonglong)(puVar21 + 1);
  puVar21[1] = 0;
  *puVar21 = &PTR_FUN_14a1fb978;
  puVar21[3] = 0;
  *(int *)(puVar21 + 4) = (int)local_218;
  if ((longlong)(int)local_218 == 0) {
    *(undefined4 *)((longlong)puVar21 + 0x24) = 8;
  }
  else {
    puVar11 = &local_228;
    if (uStack_220 != (undefined8 *)0x0) {
      puVar11 = uStack_220;
    }
    FUN_1446fe144(puVar21 + 2,(int)local_218,0);
    puVar16 = (undefined8 *)puVar21[3];
    if ((undefined8 *)puVar21[3] == (undefined8 *)0x0) {
      puVar16 = puVar21 + 2;
    }
    memcpy(puVar16,puVar11,(longlong)(int)local_218);
  }
  puVar21[0xd] = 0;
  puVar11 = (undefined8 *)CONCAT44(uStack_1cc,local_1d0);
  *(int *)(puVar21 + 0xe) = iStack_1c8;
  if ((longlong)iStack_1c8 == 0) {
    *(undefined4 *)((longlong)puVar21 + 0x74) = 8;
  }
  else {
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = &uStack_210;
    }
    FUN_1446fe1b8(puVar21 + 5,iStack_1c8,0);
    puVar16 = (undefined8 *)puVar21[0xd];
    if ((undefined8 *)puVar21[0xd] == (undefined8 *)0x0) {
      puVar16 = puVar21 + 5;
    }
    memcpy(puVar16,puVar11,(longlong)iStack_1c8 << 3);
    puVar11 = (undefined8 *)CONCAT44(uStack_1cc,local_1d0);
  }
  *(undefined4 *)(puVar21 + 0xf) = uStack_1c4._4_4_;
  *(undefined4 *)((longlong)puVar21 + 0x7c) = (undefined4)uStack_1bc;
  *(undefined4 *)(puVar21 + 0x10) = uStack_1bc._4_4_;
  *(undefined4 *)((longlong)puVar21 + 0x84) = (undefined4)uStack_1b4;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar11);
  }
  if (uStack_220 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar9 = 0x15;
  do {
    *(undefined8 *)(auStack_33d + lVar9) = 0;
    *(undefined8 *)((longlong)&lStack_335 + lVar9) = 0;
    *(undefined4 *)((longlong)&uStack_32d + lVar9) = 0xffffffff;
    (abStack_329 + lVar9)[0] = 0;
    (abStack_329 + lVar9)[1] = 0;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0xd5);
  local_254 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  _local_240 = 0;
  auStack_239._1_4_ = auStack_239._1_4_ & 0xffffff00;
  _auStack_234 = 0;
  auStack_231._1_3_ = 0;
  local_24c = 0;
  local_248 = *(undefined4 *)(param_1 + 0x1b8);
  local_244 = *(undefined4 *)(param_1 + 0x1bc);
  _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
  pwVar10 = _Dest + 0x16;
  if ((wchar_t *)param_2[1] < pwVar10) {
    FUN_140023dd8(param_2,0x2e);
    _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar10 = _Dest + 0x16;
  }
  *param_2 = (ulonglong)pwVar10;
  wcscpy(_Dest,L"ScatterMeshSDFsToGrid");
  puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar21 + 0x23;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x120);
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar21 + 0x23;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar21;
  param_2[6] = (ulonglong)(puVar21 + 1);
  puVar21[1] = 0;
  *puVar21 = &PTR_FUN_14a217b50;
  memcpy(puVar21 + 2,abStack_329 + 1,0xe8);
  puVar21[0x1f] = 0;
  puVar21[0x20] = CONCAT44(_auStack_234,auStack_239._1_4_);
  *(uint *)((longlong)puVar21 + 0x107) = CONCAT31(auStack_231._1_3_,auStack_231[0]);
  puVar21[0x22] = _Dest;
  lVar9 = 0x11;
  do {
    *(undefined8 *)(local_240 + lVar9 + 7) = 0;
    *(undefined8 *)(auStack_234 + lVar9 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_229 + lVar9) = 0;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0xd1);
  _local_168 = _local_168 & 0xffffff0000000000;
  lVar9 = 0xd9;
  do {
    *(undefined8 *)(local_240 + lVar9 + 7) = 0;
    *(undefined8 *)(auStack_234 + lVar9 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_229 + lVar9) = 0;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0x199);
  local_a0 = 0;
  local_70 = 0;
  local_68 = local_68 & 0xff;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = local_78 & 0xff00;
  lVar9 = 0x15;
  do {
    if (*(longlong *)(auStack_33d + lVar9) == 0) break;
    *(longlong *)(local_240 + lVar9 + 3) = *(longlong *)(auStack_33d + lVar9);
    bVar4 = abStack_329[lVar9 + 1];
    bVar20 = bVar4 >> 2;
    auStack_231[lVar9 + 4] = bVar20;
    abStack_22c[lVar9] = bVar4 & 3;
    *(undefined4 *)(auStack_234 + lVar9 + 3) = *(undefined4 *)((longlong)&uStack_32d + lVar9);
    *(uint *)(auStack_239 + lVar9 + 4) = (uint)abStack_329[lVar9];
    iVar2 = (int)local_168 + 1;
    bVar4 = bStack_164 | bVar20 == 2;
    _local_168 = CONCAT14(bVar4,iVar2);
    lVar12 = *(longlong *)((longlong)&lStack_335 + lVar9);
    if (lVar12 != 0) {
      local_a0 = 1;
      uVar6 = *(undefined8 *)(auStack_239 + lVar9 + 4);
      *(undefined8 *)(local_178 + lVar9 + 3) = *(undefined8 *)(local_240 + lVar9 + 3);
      *(undefined8 *)(auStack_170 + lVar9 + 3) = uVar6;
      *(undefined8 *)(local_168 + lVar9 + 3) = *(undefined8 *)(auStack_231 + lVar9 + 4);
      *(longlong *)(local_178 + lVar9 + 3) = lVar12;
    }
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0xd5);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_98 = 0;
  uStack_90 = 0;
  auVar8 = local_168;
  if (0 < (longlong)(int)local_168) {
    memcpy(param_2 + 0x15,&local_228,(longlong)(int)local_168 * 0x18);
  }
  *(undefined1 (*) [4])(param_2 + 0x14) = auVar8;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfc | 2;
  lVar9 = 0;
  local_1d8 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = 0;
  uStack_220 = (undefined8 *)0x0;
  uStack_1cc = 0;
  iStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1bc = 0;
  uStack_1b4 = 0;
  local_1ac = 0;
  uStack_1a4 = 0;
  local_19c = 0;
  uStack_194 = 0;
  uStack_18f = 0;
  uStack_18c = 0;
  uStack_187 = 0;
  local_178 = (undefined1  [8])0x0;
  auStack_170 = (undefined1  [8])0x0;
  _local_168 = 0;
  local_160 = 1;
  uStack_158 = 0;
  FUN_144b0e33a(param_2);
  iVar2 = *(int *)(param_1 + 0x1bc);
  iVar5 = *(int *)(param_1 + 0x1b8);
  puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar21 + 5;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x30);
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar21 + 5;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar21;
  param_2[6] = (ulonglong)(puVar21 + 1);
  puVar21[1] = 0;
  puVar21[2] = 0;
  *puVar21 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar21 + 3) = 0;
  *(float *)((longlong)puVar21 + 0x1c) = (float)iVar5;
  *(float *)(puVar21 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar21 + 0x24) = 0x3f800000;
  puVar17 = &DAT_14c9c0de8;
  if (*(char *)(param_1 + 0x1c4) != '\0') {
    puVar17 = &DAT_14c9c0d58;
  }
  uStack_1f0 = *(undefined8 *)(puVar17 + 0x10);
  local_1e8 = DAT_14c9c0d98;
  local_1f8 = DAT_14c9c0d50;
  local_1d0 = 0;
  local_228 = DAT_14ca968c0;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + lVar18 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar12,lVar18,1);
    }
  }
  uStack_220 = (undefined8 *)lVar9;
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
    lVar18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + lVar18 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar12,lVar18,1);
    }
  }
  local_218 = lVar9;
  lVar9 = FUN_140028f18(param_2);
  if ((lVar9 != 0) && ((local_160 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_208;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_208._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_200;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_200._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_218;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_218._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_210;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_210._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_228;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_228._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_220;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_220._4_4_;
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar21 + 4;
    if ((undefined8 *)param_2[1] < puVar11) {
      FUN_140023dd8(param_2,0x28);
      puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar21 + 4;
    }
    *param_2 = (ulonglong)puVar11;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar21;
    param_2[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    *puVar21 = &PTR_LAB_14a37d348;
    puVar21[2] = lVar9;
    *(undefined4 *)(puVar21 + 3) = 0;
    *(undefined1 *)((longlong)puVar21 + 0x1c) = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + lVar18 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar12,lVar18,1);
    }
  }
  FUN_14156b52c();
  unique0x100013fb = uVar6;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9f06f8);
  lVar9 = *(longlong *)(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
    lVar19 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar19 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar18,lVar19,1);
    }
  }
  FUN_141587c7e();
  unique0x10001403 = lVar9 + 0x70;
  FUN_1449cc26b(param_2,lVar12,*(undefined8 *)(param_1 + 0x1d8),&DAT_14c9f0780);
  uVar6 = DAT_14c9ebd70;
  puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar21 + 5;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x30);
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar21 + 5;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar21;
  param_2[6] = (ulonglong)(puVar21 + 1);
  puVar21[1] = 0;
  *puVar21 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar21 + 2) = 0;
  puVar21[3] = uVar6;
  *(undefined4 *)(puVar21 + 4) = 0;
  uVar7 = DAT_14c9ebd50;
  uVar6 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1e8) + 0x210) + 0x10);
  puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar21 + 5;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x30);
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar21 + 5;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar21;
  param_2[6] = (ulonglong)(puVar21 + 1);
  puVar21[1] = 0;
  *puVar21 = &PTR_FUN_14a20cb88;
  puVar21[2] = uVar7;
  puVar21[3] = uVar6;
  puVar21[4] = 0xffffffff00000000;
  if ((*(byte *)((longlong)param_2 + 0x17b) & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
  }
  puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar21 + 2;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x18);
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar21 + 2;
  }
  lVar9 = _local_240;
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar21;
  param_2[6] = (ulonglong)(puVar21 + 1);
  puVar21[1] = 0;
  *puVar21 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  if (_local_240 != 0) {
    LOCK();
    puVar1 = (uint *)(_local_240 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(_local_240 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(_local_240 + 0xd);
        plVar13 = (longlong *)FUN_14001cc68(0x10,8);
        plVar13[1] = lVar9;
        plVar15 = DAT_14ca843c0;
        plVar14 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar13 = (longlong)plVar15;
            LOCK();
            bVar22 = plVar15 != DAT_14ca843c0;
            plVar14 = plVar13;
            if (bVar22) {
              plVar15 = DAT_14ca843c0;
              plVar14 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar14;
            UNLOCK();
          } while (bVar22);
        }
        else {
          do {
            *plVar13 = (longlong)plVar14;
            LOCK();
            bVar22 = plVar14 != DAT_14ca843c8;
            plVar15 = plVar13;
            if (bVar22) {
              plVar14 = DAT_14ca843c8;
              plVar15 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar15;
            UNLOCK();
          } while (bVar22);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d2ec08 FUN_142d2ec08 body=481 status=ok
// SIG undefined FUN_142d2ec08(void)

void FUN_142d2ec08(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471e8d42(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2edea FUN_142d2edea body=232 status=ok
// SIG undefined FUN_142d2edea(void)

void FUN_142d2edea(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142d2eed2 FUN_142d2eed2 body=81 status=ok
// SIG undefined FUN_142d2eed2(void)

void FUN_142d2eed2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471e8de5(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142d2ef24 FUN_142d2ef24 body=31 status=ok
// SIG undefined FUN_142d2ef24(void)

undefined8 FUN_142d2ef24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2ef44 FUN_142d2ef44 body=187 status=ok
// SIG undefined FUN_142d2ef44(void)

void FUN_142d2ef44(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
        goto LAB_142d2efe7;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_142d2efe7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 142d2f000 FUN_142d2f000 body=31 status=ok
// SIG undefined FUN_142d2f000(void)

undefined8 FUN_142d2f000(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2f020 FUN_142d2f020 body=31 status=ok
// SIG undefined FUN_142d2f020(void)

undefined8 FUN_142d2f020(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2f040 FUN_142d2f040 body=31 status=ok
// SIG undefined FUN_142d2f040(void)

undefined8 FUN_142d2f040(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2f060 FUN_142d2f060 body=31 status=ok
// SIG undefined FUN_142d2f060(void)

undefined8 FUN_142d2f060(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2f080 FUN_142d2f080 body=31 status=ok
// SIG undefined FUN_142d2f080(void)

undefined8 FUN_142d2f080(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2f0a0 FUN_142d2f0a0 body=31 status=ok
// SIG undefined FUN_142d2f0a0(void)

undefined8 FUN_142d2f0a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2f0c0 FUN_142d2f0c0 body=450 status=ok
// SIG undefined FUN_142d2f0c0(void)

void FUN_142d2f0c0(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1471e9690(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2f283 FUN_142d2f283 body=81 status=ok
// SIG undefined FUN_142d2f283(void)

void FUN_142d2f283(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471e978b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142d2f2d4 FUN_142d2f2d4 body=229 status=ok
// SIG undefined FUN_142d2f2d4(void)

void FUN_142d2f2d4(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14c9f0ef0,param_3);
  return;
}



// FUNCTION 142d2f3ba FUN_142d2f3ba body=450 status=ok
// SIG undefined FUN_142d2f3ba(void)

void FUN_142d2f3ba(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1471e9cee(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2f57d FUN_142d2f57d body=81 status=ok
// SIG undefined FUN_142d2f57d(void)

void FUN_142d2f57d(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471e9de9(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142d2f5ce FUN_142d2f5ce body=229 status=ok
// SIG undefined FUN_142d2f5ce(void)

void FUN_142d2f5ce(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14c9f0f78,param_3);
  return;
}



// FUNCTION 142d2f6b4 FUN_142d2f6b4 body=450 status=ok
// SIG undefined FUN_142d2f6b4(void)

void FUN_142d2f6b4(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1471ea3f6(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2f877 FUN_142d2f877 body=81 status=ok
// SIG undefined FUN_142d2f877(void)

void FUN_142d2f877(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471ea4f1(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142d2f8c8 FUN_142d2f8c8 body=229 status=ok
// SIG undefined FUN_142d2f8c8(void)

void FUN_142d2f8c8(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14c9f1000,param_3);
  return;
}



// FUNCTION 142d2f9ae FUN_142d2f9ae body=31 status=ok
// SIG undefined FUN_142d2f9ae(void)

undefined8 FUN_142d2f9ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2f9ce FUN_142d2f9ce body=31 status=ok
// SIG undefined FUN_142d2f9ce(void)

undefined8 FUN_142d2f9ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2f9ee FUN_142d2f9ee body=450 status=ok
// SIG undefined FUN_142d2f9ee(void)

void FUN_142d2f9ee(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1471eaad2(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2fbb1 FUN_142d2fbb1 body=81 status=ok
// SIG undefined FUN_142d2fbb1(void)

void FUN_142d2fbb1(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471eabcd(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142d2fc02 FUN_142d2fc02 body=229 status=ok
// SIG undefined FUN_142d2fc02(void)

void FUN_142d2fc02(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14c9f1198,param_3);
  return;
}



// FUNCTION 142d2fce8 FUN_142d2fce8 body=31 status=ok
// SIG undefined FUN_142d2fce8(void)

undefined8 FUN_142d2fce8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2fd08 FUN_142d2fd08 body=31 status=ok
// SIG undefined FUN_142d2fd08(void)

undefined8 FUN_142d2fd08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2fd28 FUN_142d2fd28 body=450 status=ok
// SIG undefined FUN_142d2fd28(void)

void FUN_142d2fd28(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1471eb356(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2feeb FUN_142d2feeb body=81 status=ok
// SIG undefined FUN_142d2feeb(void)

void FUN_142d2feeb(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471eb451(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142d2ff3c FUN_142d2ff3c body=229 status=ok
// SIG undefined FUN_142d2ff3c(void)

void FUN_142d2ff3c(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14c9f1330,param_3);
  return;
}



// FUNCTION 142d30022 FUN_142d30022 body=450 status=ok
// SIG undefined FUN_142d30022(void)

void FUN_142d30022(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1471eba22(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d301e5 FUN_142d301e5 body=81 status=ok
// SIG undefined FUN_142d301e5(void)

void FUN_142d301e5(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471ebb1d(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142d30236 FUN_142d30236 body=229 status=ok
// SIG undefined FUN_142d30236(void)

void FUN_142d30236(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14c9f13b8,param_3);
  return;
}



// FUNCTION 142d3031c FUN_142d3031c body=31 status=ok
// SIG undefined FUN_142d3031c(void)

undefined8 FUN_142d3031c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d3033c FUN_142d3033c body=481 status=ok
// SIG undefined FUN_142d3033c(void)

void FUN_142d3033c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471ebeb2(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d3051e FUN_142d3051e body=232 status=ok
// SIG undefined FUN_142d3051e(void)

void FUN_142d3051e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142d30606 FUN_142d30606 body=81 status=ok
// SIG undefined FUN_142d30606(void)

void FUN_142d30606(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471ebf55(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142d30657 FUN_142d30657 body=10244 status=ok
// SIG undefined FUN_142d30657(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d30657(void)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_5c;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_58,&DAT_14c9ebd84);
  if (cVar2 == '\0') {
    _DAT_14c9ebd84 = 0;
    uRam000000014c9ebd8c = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ebd98,L"r.Shadow.WholeSceneShadowUnbuiltInteractionThreshold",
                &DAT_14c760480,
                L"How many unbuilt light-primitive interactions there can be for a light before the light switches to whole scene shadows"
               );
  atexit(FUN_142cfde78);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ebda8,L"r.Shadow.RecordInteractionShadowPrimitives",&DAT_14c760484,
                &DAT_149dfb77a);
  atexit(FUN_142cfdebd);
  local_78._0_4_ = 0x24;
  FUN_141471170(&DAT_14c9ebdb8,L"r.Light.TestMobilityForStaticSceneMembership",&DAT_14c760488,
                L"Deprecated (UE5.5): Temporary flag to switch back to the old behavior (testing the cast static shadow flag)\n.  The old behavior checked the HasStaticShadowing flag on the proxy, but that is cleared for VSMs so the new behavior tests the mobility instead."
               );
  atexit(FUN_142cfdf02);
  local_78._0_4_ = 0x60;
  FUN_141471170(&DAT_14c9ebdd8,L"r.LightShaftQuality",&DAT_14c76048c,
                L"Defines the light shaft quality (mobile and non mobile).\n  0: off\n  1: on (default)"
               );
  atexit(FUN_142cfe4b3);
  local_78._0_4_ = 0x60;
  FUN_141471170(&DAT_14c9ebde8,L"r.LightShaftAllowTAA",&DAT_14c760490,
                L"Allows temporal filtering for lightshafts.\n  0: off\n  1: on (default)");
  atexit(FUN_142cfe4f8);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ebdf8,L"r.LightShaftDownSampleFactor",&DAT_14c760494,
                L"Downsample factor for light shafts. range: 1..8");
  atexit(FUN_142cfe53d);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ebe08,L"r.LightShaftRenderToSeparateTranslucency",&DAT_14c9f21d4,
                L"If enabled, light shafts will be rendered to the separate translucency buffer.\nThis ensures postprocess materials with BL_BeforeTranslucnecy are applied before light shafts"
               );
  atexit(FUN_142cfe582);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ebe18,L"r.LightShaftBlurPasses",&DAT_14c760498,
                L"Number of light shaft blur passes.");
  atexit(FUN_142cfe5c7);
  local_78._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14c9ebe28,L"r.LightShaftFirstPassDistance",&DAT_14c76049c,
                L"Fraction of the distance to the light to blur on the first radial blur pass.");
  atexit(FUN_142cfe60c);
  local_78._0_4_ = 0x24;
  FUN_141471170(&DAT_14c9ebe38,L"r.LightShaftNumSamples",&DAT_14c7604a0,
                L"Number of samples per light shaft radial blur pass.  Also affects how quickly the blur distance increases with each pass."
               );
  atexit(FUN_142cfe651);
  local_50 = FUN_1401f4208;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ebf60,&local_58);
  local_50 = FUN_1401f4322;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ec088,&local_58);
  local_50 = FUN_1401f3f52;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ec1b0,&local_58);
  local_50 = FUN_145e9fc12;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ec2d8,&local_58);
  local_50 = FUN_141579c68;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ec400,&local_58);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14c9ec410,L"r.LocalFogVolume",&local_58,
                L"Project settings enabling the rendering of Local Fog Volumes.");
  atexit(FUN_142d007a8);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14c9ec428,L"r.SupportLocalFogVolumes",&local_58,
                L"Enables local fog volume rendering and shader code.");
  atexit(FUN_142d007ed);
  local_58._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14c9ec440,L"r.LocalFogVolume.RenderDuringHeightFogPass",&local_58,
                L"LocalFogVolume are going to be rendered during the height fog pass, skipping the tiled rendering pass specific to them. Only work on the non mobile path as an experiment."
               );
  atexit(FUN_142d00832);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14c9ec458,L"r.LocalFogVolume.RenderIntoVolumetricFog",&local_58,
                L"Enables the voxelization of local fog volumes into the volumetric fog rendering system. Otherwise, local fog volumes will remain isolated."
               );
  atexit(FUN_142d00877);
  local_58._0_4_ = 0x3c23d70a;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14c9ec470,L"r.LocalFogVolume.MaxDensityIntoVolumetricFog",&local_58,
                L"LocalFogVolume height fog mode can become exponentially dense in the bottom part. VolumetricFog temporal reprojection then can leak du to high density. Clamping density is a way to get that visual artefact under control."
               );
  atexit(FUN_142d008bc);
  local_58._0_4_ = 0;
  local_78._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14c9ec488,L"r.LocalFogVolume.ApplyOnTranslucent",&local_58,
                L"Project settings enabling the sampling of local fog volumes on translucent elements."
               );
  atexit(FUN_142d00901);
  local_58._0_4_ = 0x80;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14c9ec4a0,L"r.LocalFogVolume.TilePixelSize",&local_58,
                L"Tile size on screen in pixel at which we cull the local fog volumes.");
  atexit(FUN_142d00946);
  local_58._0_4_ = 0x20;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14c9ec4b8,L"r.LocalFogVolume.TileMaxInstanceCount",&local_58,
                L"Maximum number of local fog volumes to account for per view (and per tile or consistency)."
               );
  atexit(FUN_142d0098b);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14c9ec4d0,L"r.LocalFogVolume.TileCullingUseAsync",&local_58,
                L"Enables running the culling process on the async compute pipe.");
  atexit(FUN_142d009d0);
  local_58._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14c9ec4e8,L"r.LocalFogVolume.TileDebug",&local_58,
                L"Debug the tiled rendering data complexity. 1: show per tile LFV count as color ; 2: same as one but also show the effect of pixel discard/clipping."
               );
  atexit(FUN_142d00a15);
  local_58._0_4_ = 0x44fa0000;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14c9ec500,L"r.LocalFogVolume.GlobalStartDistance",&local_58,
                L"The start distance in centimeter from which local fog volumes starts to appear.");
  atexit(FUN_142d00a5a);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14c9ec518,L"r.LocalFogVolume.UseHZB",&local_58,
                L"Enables the use of the HZB to cull local fog volumes away.\n");
  atexit(FUN_142d00a9f);
  local_58 = (undefined8 *)((ulonglong)local_58._4_4_ << 0x20);
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14c9ec530,L"r.LocalFogVolume.HalfResolution",&local_58,
                L"Enables half resolution rendering of local fog volumes with an upsampling to full resolution later. Only works for the mobile path for now.\n"
               );
  atexit(FUN_142d00ae4);
  local_50 = FUN_141590fc0;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ec6b0,&local_58);
  local_50 = FUN_14155de3a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ec7d8,&local_58);
  local_50 = FUN_14155eb18;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ec900,&local_58);
  local_50 = FUN_145e70d1c;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9eca28,&local_58);
  local_50 = FUN_145d503ee;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ecb50,&local_58);
  local_50 = FUN_145f6996e;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ecc78,&local_58);
  local_58 = (undefined8 *)CONCAT71(local_58._1_7_,1);
  local_78._0_4_ = 0;
  FUN_140bd5914(&DAT_14c9ecc88,L"r.gbx.LocalFogVolume.SettingsSupport",&local_58,
                L"Runtime developer toggle to enable/disable Local FogSettings Volumes override of the global ExponentialHeight Fog"
               );
  atexit(FUN_142d056f4);
  local_78._0_4_ = 0x24;
  FUN_141471170(&DAT_14c9ecca0,L"r.Lumen.Supported",&DAT_14c7604a4,
                L"Whether Lumen is supported at all for the project, regardless of platform.  This can be used to avoid compiling shaders and other load time overhead."
               );
  atexit(FUN_142d0611c);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9eccb0,L"r.Lumen.AsyncCompute",&local_58,
                L"Whether Lumen should use async compute if supported.");
  atexit(FUN_142d06161);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9eccc8,L"r.Lumen.WaveOps",&local_58,
                L"Whether Lumen should use wave ops if supported.");
  atexit(FUN_142d061a6);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ecce0,L"r.Lumen.ThreadGroupSize32",&local_58,
                L"Whether to prefer dispatches in groups of 32 threads on HW which supports it (instead of standard 64)."
               );
  atexit(FUN_142d061eb);
  local_58 = (undefined8 *)((ulonglong)local_58._4_4_ << 0x20);
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9eccf8,L"r.Lumen.LightingDataFormat",&local_58,
                L"Data format for surfaces storing lighting information (e.g. radiance, irradiance). 0=PF_FloatR11G11B10 (default), 1=PF_FloatRGBA (64 bit)."
               );
  atexit(FUN_142d06230);
  DAT_14c9f1f18 = 1;
  DAT_14c9f1f1c = 0x43340000;
  DAT_14c9f1f20 = 0x40a00000;
  DAT_14c9f1f24 = 0;
  DAT_14c9f1f28 = 0;
  local_58 = (undefined8 *)0x0;
  local_50 = (code *)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a255b40;
  local_5c = 1;
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,0x60);
  FUN_14078dbce(&DAT_14c9ecd10,L"r.Lumen.DiffuseIndirect.Allow",&local_5c,
                L"Whether to allow Lumen Global Illumination.  Lumen GI is enabled in the project settings, this cvar can only disable it."
               );
  (**(code **)(*DAT_14c9ecd18 + 200))(DAT_14c9ecd18,&local_58);
  if ((int)local_50 == 0) {
LAB_142d30f31:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_142d30f31;
  }
  atexit(FUN_142d062b4);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9ecd28,L"r.Lumen.DiffuseIndirect.TraceStepFactor",&DAT_14c7604a8,
                &DAT_149e0635c);
  atexit(FUN_142d062f9);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9ecd38,L"r.Lumen.DiffuseIndirect.MinSampleRadius",&DAT_14c7604ac,
                &DAT_149e0635c);
  atexit(FUN_142d0633e);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9ecd50,L"r.Lumen.DiffuseIndirect.MinTraceDistance",&DAT_14c9ecd48,
                &DAT_149e0635c);
  atexit(FUN_142d06383);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9ecd60,L"r.Lumen.DiffuseIndirect.SurfaceBias",&DAT_14c9f1f20,&DAT_149e0635c)
  ;
  atexit(FUN_142d063c8);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9ecd70,L"r.Lumen.DiffuseIndirect.CardInterpolateInfluenceRadius",
                &DAT_14c7604b0,&DAT_149e0635c);
  atexit(FUN_142d0640d);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9ecd80,L"r.Lumen.DiffuseIndirect.CardTraceEndDistanceFromCamera",
                &DAT_14c760544,&DAT_149dfb77a);
  atexit(FUN_142d06452);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9ecd90,L"r.Lumen.TraceDistanceScale",&DAT_14c7604b4,
                L"Scales the tracing distance for all tracing methods and Lumen features, used by scalability."
               );
  atexit(FUN_142d06497);
  local_78._0_4_ = 0x60;
  FUN_141471170(&DAT_14c9ecda0,L"r.Lumen.TraceMeshSDFs",&DAT_14c7604b8,
                L"Whether Lumen should trace against Mesh Signed Distance fields.  When enabled, Lumen\'s Software Tracing will be more accurate, but scenes with high instance density (overlapping meshes) will have high tracing costs.  When disabled, lower resolution Global Signed Distance Field will be used instead."
               );
  atexit(FUN_142d064dc);
  local_78._0_4_ = 0x60;
  FUN_141471170(&DAT_14c9ecdb0,L"r.Lumen.TraceMeshSDFs.Allow",&DAT_14c7604bc,
                L"Whether Lumen should trace against Mesh Signed Distance fields.  When enabled, Lumen\'s Software Tracing will be more accurate, but scenes with high instance density (overlapping meshes) will have high tracing costs.  When disabled, lower resolution Global Signed Distance Field will be used instead."
               );
  atexit(FUN_142d06521);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9ecdc0,L"r.Lumen.TraceMeshSDFs.TraceDistance",&DAT_14c9f1f1c,
                L"Max trace distance against Mesh Distance Fields and Heightfields.");
  atexit(FUN_142d06566);
  local_78._0_4_ = 0x60;
  FUN_141471170(&DAT_14c9ecdd0,L"r.Lumen.DiffuseIndirect.CullGridPixelSize",&DAT_14c7604c0,
                L"Size of a cell in the card grid, in pixels.");
  atexit(FUN_142d065ab);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9ecde0,L"r.Lumen.DiffuseIndirect.CullGridDistributionLogZScale",
                &DAT_14c7604c4,&DAT_149dfb77a);
  atexit(FUN_142d065f0);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9ecdf0,L"r.Lumen.DiffuseIndirect.CullGridDistributionLogZOffset",
                &DAT_14c7604c8,&DAT_149dfb77a);
  atexit(FUN_142d06635);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9ece00,L"r.Lumen.DiffuseIndirect.CullGridDistributionZScale",&DAT_14c7604cc,
                &DAT_149dfb77a);
  atexit(FUN_142d0667a);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ece10,L"r.Lumen.DiffuseIndirect.AsyncCompute",&local_58,
                L"Whether to run Lumen diffuse indirect passes on the compute pipe if possible.");
  atexit(FUN_142d066bf);
  local_78._0_4_ = 0x60;
  FUN_141471170(&DAT_14c9ece30,L"r.Lumen.DiffuseIndirect.SSAO",&DAT_14c9ece28,
                L"Whether to render and apply SSAO to Lumen GI, only when r.Lumen.ScreenProbeGather.ShortRangeAO is disabled.  This is useful for providing short range occlusion when Lumen\'s Screen Bent Normal is disabled due to scalability, however SSAO settings like screen radius come from the user\'s post process settings."
               );
  atexit(FUN_142d06704);
  local_78._0_4_ = 0x60;
  FUN_141471170(&DAT_14c9ece40,L"r.Lumen.StereoOptimizations",&DAT_14c7604d0,
                L"Whether to to share certain Lumen state between views during the instanced stereo rendering."
               );
  atexit(FUN_142d06749);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ece50,L"r.Lumen.Ortho.OverrideMeshDFTraceDistances",&local_58,
                L"Use the full screen view rect size in Ortho views to determing the SDF trace distances instead of setting the value manually."
               );
  atexit(FUN_142d0678e);
  local_78._0_4_ = 0x60;
  FUN_141471170(&DAT_14c9ece70,L"r.Lumen.TranslucencyReflections.FrontLayer.Enable",&DAT_14c9ece68,
                L"Whether to render Lumen Reflections on the frontmost layer of Translucent Surfaces.  Other layers will use the lower quality Radiance Cache method that can only produce glossy reflections."
               );
  atexit(FUN_142d0c952);
  local_58._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14c9ece80,L"r.Lumen.TranslucencyReflections.FrontLayer.EnableForProject",
                &local_58,
                L"Whether to render Lumen Reflections on the frontmost layer of Translucent Surfaces.  Other layers will use the lower quality Radiance Cache method that can only produce glossy reflections."
               );
  atexit(FUN_142d0c997);
  local_78._0_4_ = 0x60;
  FUN_141471170(&DAT_14c9ece98,L"r.Lumen.TranslucencyReflections.FrontLayer.Allow",&DAT_14c7604d4,
                L"Whether to render Lumen Reflections on the frontmost layer of Translucent Surfaces.  Other layers will use the lower quality Radiance Cache method that can only produce glossy reflections."
               );
  atexit(FUN_142d0c9dc);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x44800000);
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14c9ecea8,L"r.Lumen.TranslucencyReflections.FrontLayer.DepthThreshold",
                &local_58,
                L"Depth test threshold used to determine whether the fragments being rendered match the single layer that reflections were calculated for. In float ULP units."
               );
  atexit(FUN_142d0ca21);
  local_50 = FUN_14157cce2;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ecfd8,&local_58);
  local_50 = FUN_1415c36ae;
  local_58 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14c9ed070,&local_58);
  local_50 = FUN_140186c82;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9ed198,&local_58);
  local_50 = FUN_140186d9e;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9ed2c0,&local_58);
  DAT_14c9ed2d0 = 1;
  uVar3 = (ulonglong)DAT_14c9c0cf0;
  DAT_14c9ed2d4 = DAT_14c9c0cf0;
  DAT_14c9c0cf0 = DAT_14c9c0cf0 + 1;
  *(undefined1 **)(&DAT_14cafe970 + uVar3 * 0x10) = &LAB_140540f71;
  (&DAT_14cafe978)[uVar3 * 2] = L"LumenFrontLayerTranslucencyGBuffer";
  atexit((_func_5014 *)&LAB_142d0e8ed);
  DAT_14c9ed2d8 = 1;
  DAT_14c9ed2dc = 1;
  _DAT_14ca11c60 = FUN_140540f7e;
  _DAT_14ca11ea8 = 2;
  _DAT_14ca12078 = DAT_14c9ed2d4;
  atexit((_func_5014 *)&LAB_142d0e917);
  local_58 = (undefined8 *)0x0;
  local_50 = (code *)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a255c80;
  local_5c = 1;
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,0x60);
  FUN_14078dbce(&DAT_14c9ed2e0,L"r.Lumen.HardwareRayTracing",&local_5c,
                L"Uses Hardware Ray Tracing for Lumen features, when available.\nLumen will fall back to Software Ray Tracing otherwise.\nNote: Hardware ray tracing has significant scene update costs for\nscenes with more than 100k instances."
               );
  (**(code **)(*DAT_14c9ed2e8 + 200))(DAT_14c9ed2e8,&local_58);
  if ((int)local_50 == 0) {
LAB_142d31585:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_142d31585;
  }
  atexit(FUN_142d11a8f);
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ed2f8,L"r.Lumen.HardwareRayTracing.LightingMode",&local_58,
                L"Determines the ray hit lighting mode:\n0 - Use Lumen Surface Cache for ray hit lighting. This method gives the best GI and reflection performance, but quality will be limited by how well surface cache represents given scene.\n1 - Calculate lighting at a ray hit point for GI and reflections. This will improve both GI and reflection quality, but greatly increases GPU cost, as full material and lighting will be evaluated at every hit point. Lumen Surface Cache will still be used for secondary bounces.\n2 - Calculate lighting at a ray hit point for reflections. This will improve reflection quality, but increases GPU cost, as full material needs to be evaluated and shadow rays traced. Lumen Surface Cache will still be used for GI and secondary bounces, including GI seen in reflections."
               );
  atexit(FUN_142d11ad4);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ed310,L"r.Lumen.HardwareRayTracing.HitLighting.DirectLighting",&local_58,
                L"Whether to calculate direct lighting when doing Hit Lighting or sample it from the Surface Cache."
               );
  atexit(FUN_142d11b19);
  local_58._0_4_ = 2;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ed328,L"r.Lumen.HardwareRayTracing.HitLighting.ShadowMode",&local_58,
                L"Which shadow mode to use for calculating direct lighting in ray hits:\n0 - Disabled shadows\n1 - Hard shadows, but less noise\n2 - Area shadows, but more noise"
               );
  atexit(FUN_142d11b5e);
  local_58._0_4_ = 2;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ed340,L"r.Lumen.HardwareRayTracing.HitLighting.Skylight",&local_58,
                L"Whether to calculate unshadowed skylight when doing Hit Lighting or sample shadowed skylight from the Surface Cache.\n0 - Disabled\n1 - Enabled\n2 - Enabled only for standalone Lumen Reflections"
               );
  atexit(FUN_142d11ba3);
  local_58._0_4_ = 0;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ed358,L"r.Lumen.HardwareRayTracing.HitLighting.ReflectionCaptures",
                &local_58,
                L"Whether to apply Reflection Captures to ray hits when using Hit Lighting.");
  atexit(FUN_142d11be8);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ed370,L"r.Lumen.HardwareRayTracing.Inline",&local_58,
                L"Uses Hardware Inline Ray Tracing for selected Lumen passes, when available.\n");
  atexit(FUN_142d11c2d);
  local_58._0_4_ = 0x41000000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14c9ed388,L"r.Lumen.HardwareRayTracing.PullbackBias",&local_58,
                L"Determines the pull-back bias when resuming a screen-trace ray (default = 8.0)");
  atexit(FUN_142d11c72);
  local_58._0_4_ = 0x43480000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14c9ed3a0,L"r.Lumen.HardwareRayTracing.FarFieldBias",&local_58,
                L"Determines bias for the far field traces. Default = 200");
  atexit(FUN_142d11cb7);
  local_58._0_4_ = 0x2000;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ed3b8,L"r.Lumen.HardwareRayTracing.MaxIterations",&local_58,
                L"Limit number of ray tracing traversal iterations on supported platfoms.\nIncomplete misses will be treated as hitting a black surface (can cause overocculsion).\nIncomplete hits will be treated as a hit (can cause leaking)."
               );
  atexit(FUN_142d11cfc);
  local_58._0_4_ = 3;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ed3d0,L"r.Lumen.HardwareRayTracing.AvoidSelfIntersections",&local_58,
                L"Whether to skip back face hits for a small distance in order to avoid self-intersections when BLAS mismatches rasterized geometry.\n0 - Disabled. May have extra leaking, but it\'s the fastest mode.\n1 - Enabled. This mode retraces to skip first backface hit up to r.Lumen.HardwareRayTracing.SkipBackFaceHitDistance. Good default on most platforms.\n2 - Enabled. This mode uses AHS to skip any backface hits up to r.Lumen.HardwareRayTracing.SkipBackFaceHitDistance. Faster on platforms with inline AHS support.\n3 - Enabled. Automatically chooses between mode 1 and 2 depending on platform for best performance."
               );
  atexit(FUN_142d11d41);
  local_58._0_4_ = 0;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ed3e8,L"r.Lumen.HardwareRayTracing.SurfaceCacheAlphaMasking",&local_58,
                L"Whether to support alpha masking based on the surface cache alpha channel. Disabled by default, as it slows down ray tracing performance."
               );
  atexit(FUN_142d11d86);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ed400,L"r.Lumen.HardwareRayTracing.MeshSectionVisibilityTest",&local_58,
                L"Whether to test mesh section visibility at runtime.\nWhen enabled translucent mesh sections are automatically hidden based on the material, but it slows down performance due to extra visibility tests per intersection.\nWhen disabled translucent meshes can be hidden only if they are fully translucent. Individual mesh sections need to be hidden upfront inside the static mesh editor."
               );
  atexit(FUN_142d11dcb);
  local_58._0_4_ = 0x41200000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14c9ed418,L"r.Lumen.HardwareRayTracing.MinTraceDistanceToSampleSurfaceCache",
                &local_58,
                L"Ray hit distance from which we can start sampling surface cache in order to fix feedback loop where surface cache texel hits itself and propagates lighting."
               );
  atexit(FUN_142d11e10);
  local_58._0_4_ = 0x41200000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14c9ed430,L"r.Lumen.HardwareRayTracing.SurfaceCacheSampling.DepthBias",
                &local_58,
                L"Max distance to project a texel from a mesh card onto a hit point. Higher values will fix issues of mismatch between ray tracing geometry and rasterization, but will also increase leaking."
               );
  atexit(FUN_142d11e55);
  local_58._0_4_ = 0x40a00000;
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14c9ed448,L"r.Lumen.HardwareRayTracing.SkipBackFaceHitDistance",&local_58,
                L"Distance to trace with backface culling enabled, useful when the Ray Tracing geometry doesn\'t match the GBuffer (Nanite Proxy geometry)."
               );
  atexit(FUN_142d11f80);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x3f800000);
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14c9ed460,L"r.Lumen.HardwareRayTracing.SkipTwoSidedHitDistance",&local_58,
                L"When the SkipBackFaceHitDistance is enabled, the first two-sided material hit within this distance will be skipped. This is useful for avoiding self-intersections with the Nanite fallback mesh on foliage, as SkipBackFaceHitDistance doesn\'t work on two sided materials."
               );
  atexit(FUN_142d11fc5);
  DAT_14ca98640 = 0;
  DAT_14ca98790 = DAT_14ca98790 | 0x40;
  DAT_14ca98728 = 0x10;
  local_50 = FUN_145c90888;
  local_58 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14c9ed500,&local_58);
  local_50 = FUN_145e2ecd2;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ed628,&local_58);
  local_50 = FUN_146090308;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ed750,&local_58);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14c9ed760,L"r.LumenScene.Heightfield.Tracing",&local_58,
                L"Enables heightfield (Landscape) software ray tracing (default = 1)");
  atexit(FUN_142d13ccd);
  local_58._0_4_ = 0x20;
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ed778,L"r.LumenScene.Heightfield.MaxTracingSteps",&local_58,
                L"Sets the maximum steps for heightfield (Landscape) software ray tracing (default = 32)"
               );
  atexit(FUN_142d13d12);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x3c23d70a);
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14c9ed790,L"r.LumenScene.Heightfield.ReceiverBias",&local_58,
                L"Extra bias for Landscape surface points. Helps to fix mismatching LOD artifacts between fixed LOD in Surface Cache and Landscape CLOD."
               );
  atexit(FUN_142d13d57);
  local_78._0_4_ = 0x60;
  FUN_141471170(&DAT_14c9ed7a8,L"r.Lumen.IrradianceFieldGather",&DAT_14c9f1f2c,
                L"Whether to use the Irradiance Field Final Gather, an experimental opaque final gather that interpolates from pre-calculated irradiance in probes for cheaper, but lower quality GI."
               );
  atexit(FUN_142d13ddb);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ed7b8,L"r.Lumen.IrradianceFieldGather.NumClipmaps",&DAT_14c7604d8,
                L"Number of radiance cache clipmaps.");
  atexit(FUN_142d13e20);
  local_78._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14c9ed7c8,L"r.Lumen.IrradianceFieldGather.ClipmapWorldExtent",&DAT_14c7604dc,
                L"World space extent of the first clipmap");
  atexit(FUN_142d13e65);
  local_78._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14c9ed7d8,L"r.Lumen.IrradianceFieldGather.ClipmapDistributionBase",
                &DAT_14c7604e0,
                L"Base of the Pow() that controls the size of each successive clipmap relative to the first."
               );
  atexit(FUN_142d13eaa);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ed7e8,L"r.Lumen.IrradianceFieldGather.NumProbesToTraceBudget",
                &DAT_14c7604e4,
                L"Number of probes that can be updated in a frame before downsampling.");
  atexit(FUN_142d13eef);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ed7f8,L"r.Lumen.IrradianceFieldGather.GridResolution",&DAT_14c7604e8,
                L"Resolution of the probe placement grid within each clipmap");
  atexit(FUN_142d13f34);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ed808,L"r.Lumen.IrradianceFieldGather.ProbeResolution",&DAT_14c7604ec,
                L"Resolution of the probe\'s 2d radiance layout.  The number of rays traced for the probe will be ProbeResolution ^ 2"
               );
  atexit(FUN_142d13f79);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ed818,L"r.Lumen.IrradianceFieldGather.IrradianceProbeResolution",
                &DAT_14c7604f0,L"Resolution of the probe\'s 2d irradiance layout.");
  atexit(FUN_142d13fbe);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ed828,L"r.Lumen.IrradianceFieldGather.OcclusionProbeResolution",
                &DAT_14c7604f4,L"Resolution of the probe\'s 2d occlusion layout.");
  atexit(FUN_142d14003);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ed838,L"r.Lumen.IrradianceFieldGather.NumMipmaps",&DAT_14c7604f8,
                L"Number of radiance cache mipmaps.");
  atexit(FUN_142d14048);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ed848,L"r.Lumen.IrradianceFieldGather.ProbeAtlasResolutionInProbes",
                &DAT_14c7604fc,
                L"Number of probes along one dimension of the probe atlas cache texture.  This controls the memory usage of the cache.  Overflow currently results in incorrect rendering."
               );
  atexit(FUN_142d1408d);
  local_78._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14c9ed858,L"r.Lumen.IrradianceFieldGather.ProbeOcclusionViewBias",
                &DAT_14c760500,
                L"Bias along the view direction to reduce self-occlusion artifacts from Probe Occlusion"
               );
  atexit(FUN_142d140d2);
  local_78._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14c9ed868,L"r.Lumen.IrradianceFieldGather.ProbeOcclusionNormalBias",
                &DAT_14c760504,
                L"Bias along the normal to reduce self-occlusion artifacts from Probe Occlusion");
  atexit(FUN_142d14117);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ed880,L"r.Lumen.IrradianceFieldGather.RadianceCache.Stats",&DAT_14c9ed878,
                L"GPU print out Radiance Cache update stats.");
  atexit(FUN_142d1415c);
  local_50 = FUN_145eabd00;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ed9a8,&local_58);
  local_50 = FUN_145f7de2a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9edad0,&local_58);
  local_58 = (undefined8 *)0x0;
  local_50 = (code *)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a255e20;
  local_5c = 0x41200000;
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,0x60);
  FUN_140a6b41e(&DAT_14c9edae0,L"r.LumenScene.SurfaceCache.MeshCardsMinSize",&local_5c,
                L"Minimum mesh cards world space size to be included in Lumen Scene.");
  (**(code **)(*DAT_14c9edae8 + 200))(DAT_14c9edae8,&local_58);
  if ((int)local_50 == 0) {
LAB_142d31e28:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_142d31e28;
  }
  atexit(FUN_142d248b4);
  local_58 = (undefined8 *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a255e90;
  local_70 = 0x60;
  local_78 = &local_58;
  FUN_141703554(&DAT_14c9edaf8,L"r.LumenScene.SurfaceCache.MeshCardsMergeComponents",&DAT_14c760548,
                L"Whether to merge all components with the same RayTracingGroupId into a single MeshCards."
               );
  if ((int)local_50 == 0) {
LAB_142d31f07:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_142d31f07;
  }
  atexit(FUN_142d248f9);
  local_58 = (undefined8 *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a255f00;
  local_70 = 0x60;
  local_78 = &local_58;
  FUN_141703554(&DAT_14c9edb08,L"r.LumenScene.SurfaceCache.MeshCardsMergeInstances",&DAT_14c9f1f14,
                L"Whether to merge all instances of a Instanced Static Mesh Component into a single MeshCards."
               );
  if ((int)local_50 == 0) {
LAB_142d31fe6:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_142d31fe6;
  }
  atexit(FUN_142d2493e);
  local_58 = (undefined8 *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a255f70;
  local_70 = 0x60;
  local_78 = &local_58;
  FUN_1417288fa(&DAT_14c9edb18,L"r.LumenScene.SurfaceCache.MeshCardsMergedCardMinSurfaceArea",
                &DAT_14c760508,L"Minimum area to spawn a merged card.");
  if ((int)local_50 == 0) {
LAB_142d320c5:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_142d320c5;
  }
  atexit(FUN_142d24983);
  local_58 = (undefined8 *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a255fe0;
  local_70 = 0x60;
  local_78 = &local_58;
  FUN_1417288fa(&DAT_14c9edb28,
                L"r.LumenScene.SurfaceCache.MeshCardsMergeInstancesMaxSurfaceAreaRatio",
                &DAT_14c760550,
                L"Only merge if the (combined box surface area) / (summed instance box surface area) < MaxSurfaceAreaRatio"
               );
  if ((int)local_50 == 0) {
LAB_142d321a4:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_142d321a4;
  }
  atexit(FUN_142d249c8);
  local_58 = (undefined8 *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a256050;
  local_70 = 0x60;
  local_78 = &local_58;
  FUN_1417288fa(&DAT_14c9edb38,L"r.LumenScene.SurfaceCache.MeshCardsMergedResolutionScale",
                &DAT_14c760554,
                L"Scale on the resolution calculation for a merged MeshCards.  This compensates for the merged box getting a higher resolution assigned due to being closer to the viewer."
               );
  if ((int)local_50 == 0) {
LAB_142d32283:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_142d32283;
  }
  atexit(FUN_142d24a0d);
  local_58 = (undefined8 *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a2560c0;
  local_70 = 0x60;
  local_78 = &local_58;
  FUN_1417288fa(&DAT_14c9edb48,L"r.LumenScene.SurfaceCache.MeshCardsMergedMaxWorldSize",
                &DAT_14c76054c,
                L"Only merged bounds less than this size on any axis are considered, since Lumen Scene streaming relies on object granularity."
               );
  if ((int)local_50 == 0) {
LAB_142d32362:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_142d32362;
  }
  atexit(FUN_142d24a52);
  local_58 = (undefined8 *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a256130;
  local_70 = 0x60;
  local_78 = &local_58;
  FUN_141703554(&DAT_14c9edb58,L"r.LumenScene.SurfaceCache.MeshCardsCullFaces",&DAT_14c76050c,
                &DAT_149dfb77a);
  if ((int)local_50 == 0) {
LAB_142d32441:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_142d32441;
  }
  atexit(FUN_142d24a97);
  local_58 = (undefined8 *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a2561a0;
  local_70 = 0x20;
  local_78 = &local_58;
  FUN_141703554(&DAT_14c9edb68,L"r.LumenScene.SurfaceCache.MeshCardsDebugSingleCard",&DAT_14c760510,
                L"Spawn only a specified card on mesh. Useful for debugging.");
  if ((int)local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_142d3252e;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142d3252e:
  atexit(FUN_142d24adc);
  local_58._0_4_ = 0x42c80000;
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14c9edb78,L"r.Lumen.SurfaceCache.HeightfieldCaptureMargin",&local_58,
                L"Amount to expand heightfield component bbox for card capture purposes.");
  atexit(FUN_142d24b21);
  local_78._0_4_ = 0x60;
  FUN_141471170(&DAT_14c9edb90,L"r.Lumen.DiffuseIndirect.MeshSDF.AverageCulledCount",&DAT_14c760514,
                &DAT_149dfb77a);
  atexit(FUN_142d25910);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9edba0,L"r.Lumen.DiffuseIndirect.MeshSDF.RadiusThreshold",&DAT_14c760518,
                &DAT_149dfb77a);
  atexit(FUN_142d25955);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9edbb0,L"r.Lumen.DiffuseIndirect.MeshSDF.NotCoveredExpandSurfaceScale",
                &DAT_14c76051c,
                L"Scales the surface expand used for Mesh SDFs that contain mostly two sided materials (foliage)"
               );
  atexit(FUN_142d2599a);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9edbc0,L"r.Lumen.DiffuseIndirect.MeshSDF.NotCoveredMinStepScale",
                &DAT_14c760520,
                L"Scales the min step size to improve performance, for Mesh SDFs that contain mostly two sided materials (foliage)"
               );
  atexit(FUN_142d259df);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9edbd0,L"r.Lumen.DiffuseIndirect.MeshSDF.DitheredTransparencyStepThreshold",
                &DAT_14c760524,
                L"Per-step stochastic semi-transparency threshold, for tracing users that have dithered transparency enabled, for Mesh SDFs that contain mostly two sided materials (foliage)"
               );
  atexit(FUN_142d25a24);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14c9edbe0,L"r.LumenScene.Heightfield.CullForView",&local_58,
                L"Enables Heightfield culling (default = 1)");
  atexit(FUN_142d25a69);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,1);
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14c9edbf8,L"r.LumenScene.Heightfield.FroxelCulling",&local_58,
                L"Enables Heightfield froxel view culling (default = 1)");
  atexit(FUN_142d25aae);
  local_50 = FUN_14159ca50;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9edd28,&local_58);
  local_50 = FUN_14159518c;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ede50,&local_58);
  local_50 = FUN_14156b40a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9edf78,&local_58);
  local_50 = FUN_141587b5c;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ee0a0,&local_58);
  local_50 = FUN_1415770ca;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ee1c8,&local_58);
  local_50 = FUN_14158f206;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ee2f0,&local_58);
  local_50 = FUN_14159cc76;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ee418,&local_58);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ee428,L"r.Lumen.RadianceCache.Update",&DAT_14c760528,
                L"Whether to update radiance cache every frame. Useful for debugging.");
  atexit(FUN_142d25b47);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ee438,L"r.Lumen.RadianceCache.ForceFullUpdate",&DAT_14c9f1f10,
                L"Whether to update entuire radiance cache once. Useful for debugging.");
  atexit(FUN_142d25b8c);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,8);
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14c9ee448,L"r.Lumen.RadianceCache.NumFramesToKeepCachedProbes",&local_58,
                L"Number of frames to keep unused probes in cache. Higher values enable more reuse between frames, but too high values will cause filtering from stale probes."
               );
  atexit(FUN_142d25bd1);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ee468,L"r.Lumen.RadianceCache.OverrideCacheOcclusionLighting",
                &DAT_14c9ee460,&DAT_149dfb77a);
  atexit(FUN_142d25c16);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ee480,L"r.Lumen.RadianceCache.ShowBlackRadianceCacheLighting",
                &DAT_14c9ee478,&DAT_149dfb77a);
  atexit(FUN_142d25c5b);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ee490,L"r.Lumen.RadianceCache.SpatialFilterProbes",&DAT_14c76052c,
                L"Whether to filter probe radiance between neighbors");
  atexit(FUN_142d25ca0);
  local_78._0_4_ = 0x20;
  FUN_141471170(&DAT_14c9ee4a8,L"r.Lumen.RadianceCache.SortTraceTiles",&DAT_14c9ee4a0,
                L"Whether to sort Trace Tiles by direction before tracing to extract coherency");
  atexit(FUN_142d25ce5);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9ee4b8,L"r.Lumen.RadianceCache.SpatialFilterMaxRadianceHitAngle",
                &DAT_14c760530,
                L"In Degrees.  Larger angles allow filtering of nearby features but more leaking.");
  atexit(FUN_142d25d2a);
  local_78._0_4_ = 0x60;
  FUN_141471170(&DAT_14c9ee4c8,L"r.Lumen.RadianceCache.ForceUniformTraceTileLevel",&DAT_14c760534,
                L"When set to >= 0, forces a uniform trace tile level for debugging, and overrides trace tile BRDF importance sampling.  Valid range is [0, 2].  0 = half res, 1 = full res, 2 = supersampled"
               );
  atexit(FUN_142d25d6f);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9ee4d8,L"r.Lumen.RadianceCache.SupersampleTileBRDFThreshold",&DAT_14c760538,
                L"Value of the BRDF [0-1] above which to trace more rays to supersample the probe radiance."
               );
  atexit(FUN_142d25db4);
  local_78._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14c9ee4e8,L"r.Lumen.RadianceCache.SupersampleDistanceFromCamera",&DAT_14c76053c
                ,L"Only probes closer to the camera than this distance can be supersampled.");
  atexit(FUN_142d25df9);
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,0x60);
  FUN_1415c789c(&DAT_14c9ee4f8,L"r.Lumen.RadianceCache.DownsampleDistanceFromCamera",&DAT_14c760540,
                L"Probes further than this distance from the camera are always downsampled.");
  atexit(FUN_142d25e3e);
  local_50 = FUN_145edb03e;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ee620,&local_58);
  local_50 = FUN_145a2404a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ee748,&local_58);
  local_50 = FUN_1415a5a78;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ee870,&local_58);
  local_50 = FUN_1415953b2;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ee998,&local_58);
  local_50 = FUN_141570824;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9eeac0,&local_58);
  local_50 = FUN_1415912ca;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9eebe8,&local_58);
  local_50 = FUN_1415955d8;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9eed10,&local_58);
  local_50 = FUN_1415914f0;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9eee38,&local_58);
  local_50 = FUN_145f49e6e;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9eef60,&local_58);
  local_50 = FUN_1415958e2;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ef088,&local_58);
  local_50 = FUN_145eac276;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ef1b0,&local_58);
  local_50 = FUN_145e5628a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ef2d8,&local_58);
  local_50 = FUN_145e48aaa;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ef400,&local_58);
  local_50 = FUN_141591716;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ef528,&local_58);
  local_50 = FUN_1415738d8;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ef650,&local_58);
  local_50 = FUN_145f4a464;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ef778,&local_58);
  local_50 = FUN_14157b024;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ef8a0,&local_58);
  local_50 = FUN_14157cf08;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9ef9c8,&local_58);
  local_50 = FUN_145f05a22;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9efaf0,&local_58);
  local_50 = FUN_145e715d4;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9efc18,&local_58);
  local_50 = FUN_14158e502;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9efd40,&local_58);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d32e5c FUN_142d32e5c body=69 status=ok
// SIG undefined FUN_142d32e5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d32e5c(void)

{
  _DAT_14c9f21e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d32e9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f21f0,1);
  return;
}



// FUNCTION 142d32ea1 FUN_142d32ea1 body=69 status=ok
// SIG undefined FUN_142d32ea1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d32ea1(void)

{
  _DAT_14c9f2200 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d32ee3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2208,1);
  return;
}



// FUNCTION 142d32ee6 FUN_142d32ee6 body=69 status=ok
// SIG undefined FUN_142d32ee6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d32ee6(void)

{
  _DAT_14c9f2218 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d32f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2220,1);
  return;
}



// FUNCTION 142d32f2b FUN_142d32f2b body=325 status=ok
// SIG undefined FUN_142d32f2b(void)

bool FUN_142d32f2b(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97070) {
    FUN_144b3d300(&DAT_14ca97070);
    if (DAT_14ca97070 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
  }
  lVar1 = DAT_14ca97068;
  bVar7 = true;
  cVar2 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
      cVar2 = '\x02';
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
      cVar2 = DAT_14ca96da8;
    }
    bVar7 = *(int *)(lVar1 + uVar5 * 4) != 0;
  }
  bVar6 = false;
  if ((bVar7) && (cVar2 != '\0')) {
    cVar2 = FUN_141767a62(param_1);
    if (cVar2 == '\0') {
      bVar6 = false;
    }
    else {
      bVar6 = *(int *)(DAT_14c9f21f8 + 4) != 0;
    }
  }
  return bVar6;
}



// FUNCTION 142d330ac FUN_142d330ac body=1245 status=ok
// SIG undefined FUN_142d330ac(void)

void FUN_142d330ac(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  void *param_5,undefined4 *param_6,char param_7,char param_8,undefined8 param_9,
                  longlong param_10,longlong param_11,undefined2 param_12)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined1 local_99;
  longlong local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar10 + 0x7c;
  local_b8 = param_3;
  local_b0 = param_4;
  local_a8 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(plVar1,0x3f0);
    puVar10 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar10 + 0x7c;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  *puVar10 = &PTR_FUN_14a266028;
  local_c0 = puVar10 + 2;
  FUN_1471fd122();
  iVar5 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar10;
  uVar2 = *(undefined1 *)(param_10 + 0x94);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar9 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(plVar1,0x50);
    puVar9 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar9 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  puVar9[1] = *(undefined8 *)(param_10 + 8);
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar9 + 5) = 0;
  *puVar9 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar9 + 6) = uVar2;
  *(undefined1 *)(puVar9 + 7) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar9 + 0x35) = 0;
  puVar9[8] = param_10;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar9;
  *(int *)((longlong)puVar9 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar10[4] = puVar9;
  uVar2 = *(undefined1 *)(param_11 + 0x94);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar9 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(plVar1,0x50);
    puVar9 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar9 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  puVar9[1] = *(undefined8 *)(param_11 + 8);
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar9 + 5) = 0;
  *puVar9 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar9 + 6) = uVar2;
  *(undefined1 *)(puVar9 + 7) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar9 + 0x35) = 0;
  puVar9[8] = param_11;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar5);
  }
  lVar3 = local_a8;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar9;
  *(int *)((longlong)puVar9 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar10[5] = puVar9;
  local_d8 = puVar10 + 6;
  FUN_1471dcd84(param_1,local_b8,local_a8,local_b0);
  puVar10[2] = param_9;
  *(undefined4 *)(puVar10 + 3) = 0x14;
  memcpy(puVar10 + 0x44,param_5,0x188);
  iVar5 = 2;
  if (*(int *)(DAT_14c9ed338 + 4) < 2) {
    iVar5 = *(int *)(DAT_14c9ed338 + 4);
  }
  iVar8 = 0;
  if (0 < iVar5) {
    iVar8 = iVar5;
  }
  *(int *)(puVar10 + 0x76) = iVar8;
  *(uint *)((longlong)puVar10 + 0x3b4) = (uint)(*(int *)(DAT_14c9ed320 + 4) != 0);
  *(uint *)(puVar10 + 0x77) = (uint)((*(uint *)(DAT_14c9ed350 + 4) & 0xfffffffd) != 0);
  *(undefined4 *)(puVar10 + 0x78) = *(undefined4 *)(puVar10 + 0x47);
  uVar11 = 0x7f7fffff;
  if (((param_8 != '\0') && ((*(byte *)(*(longlong *)(lVar3 + 8) + 0x60) & 2) == 0)) &&
     (0 < *(int *)(DAT_14ca3aa08 + 4))) {
    uVar11 = *(undefined4 *)(DAT_14ca3aa38 + 4);
  }
  *(undefined4 *)((longlong)puVar10 + 0x3c4) = uVar11;
  fVar12 = *(float *)(DAT_14c9ed3b0 + 4);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  *(float *)((longlong)puVar10 + 0x3bc) = fVar12;
  *(undefined4 *)(puVar10 + 0x79) = *(undefined4 *)(DAT_14c9f5c88 + 4);
  uVar11 = *(undefined4 *)(DAT_14c9f5cb8 + 4);
  puVar10[0x7a] = 0;
  *(undefined4 *)(puVar10 + 0x7b) = uVar11;
  *(undefined4 *)((longlong)puVar10 + 0x3cc) = *(undefined4 *)(DAT_14c9ed398 + 4);
  iVar5 = param_6[1];
  pwVar6 = L"default";
  if (iVar5 == 1) {
    pwVar6 = L"far-field";
  }
  pwVar7 = L"hit-lighting";
  if (iVar5 != 2) {
    pwVar7 = pwVar6;
  }
  FUN_140056680(local_98,pwVar7);
  local_d0 = puVar10[2];
  if (param_7 != '\x01' || iVar5 == 2) {
    local_78 = param_6[4];
    local_88 = *param_6;
    uStack_84 = param_6[1];
    uStack_80 = param_6[2];
    uStack_7c = param_6[3];
    local_c8 = CONCAT11(local_c8._1_1_,iVar5 != 2);
    local_d8 = local_c0;
    FUN_1471eca90(param_1,&local_99,lVar3);
  }
  else {
    local_58 = param_6[4];
    local_68 = *param_6;
    uStack_64 = param_6[1];
    uStack_60 = param_6[2];
    uStack_5c = param_6[3];
    local_c8 = param_12;
    local_d8 = local_c0;
    FUN_1471ec96a(param_1,&local_99,lVar3);
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d3358a FUN_142d3358a body=13 status=ok
// SIG undefined FUN_142d3358a(void)

undefined4 FUN_142d3358a(void)

{
  return *(undefined4 *)(DAT_14c9f5c88 + 4);
}



// FUNCTION 142d33597 FUN_142d33597 body=10213 status=ok
// SIG undefined FUN_142d33597(void)

void FUN_142d33597(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,undefined8 param_11,undefined2 param_12)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  uint uVar5;
  undefined4 uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  int iVar27;
  int iVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  int iVar31;
  undefined1 auStack_558 [32];
  undefined8 *local_538;
  undefined1 **local_530;
  uint *local_528;
  byte local_520;
  ulonglong local_518;
  ulonglong local_510;
  ulonglong local_508;
  undefined2 local_500;
  char local_4e9;
  ulonglong *local_4e8;
  ulonglong local_4e0;
  longlong local_4d8;
  ulonglong local_4d0;
  longlong local_4c8;
  undefined8 *local_4c0;
  longlong local_4b8;
  ulonglong local_4b0;
  longlong *local_4a8;
  ulonglong local_4a0;
  ulonglong local_498;
  longlong local_490;
  ulonglong local_488;
  ulonglong local_480;
  ulonglong local_478;
  longlong local_470;
  int *local_468;
  ulonglong local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined1 *local_448;
  undefined4 local_440;
  undefined1 local_439;
  uint local_438;
  int iStack_434;
  uint uStack_430;
  int iStack_42c;
  undefined1 *local_424;
  undefined4 local_41c;
  undefined1 local_418 [96];
  uint local_3b8;
  int iStack_3b4;
  uint uStack_3b0;
  int iStack_3ac;
  undefined8 uStack_3a8;
  undefined4 local_3a0;
  uint local_39c;
  undefined4 local_398;
  int iStack_394;
  int local_390;
  undefined4 local_38c;
  undefined2 local_388;
  undefined1 local_386;
  undefined1 local_385 [13];
  undefined1 local_378 [32];
  undefined1 *local_358;
  uint local_350;
  undefined4 local_34c;
  uint local_348;
  int iStack_344;
  uint uStack_340;
  int iStack_33c;
  uint *local_328;
  uint local_320;
  undefined4 local_31c;
  undefined1 local_318 [64];
  undefined8 local_2d8 [5];
  undefined1 local_2ac [84];
  undefined4 auStack_258 [4];
  undefined8 local_248 [22];
  int local_198;
  undefined8 local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_558;
  local_458 = param_2;
  local_450 = param_3;
  if (0 < *(int *)(param_4 + 0x290)) {
    local_4d8 = param_1 + 0x198;
    local_4e8 = (ulonglong *)(param_1 + 0x70);
    local_470 = param_1 + 0x178;
    local_468 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    local_490 = param_1 + 0x188;
    local_4a8 = (longlong *)(param_1 + 0x98);
    uVar12 = 0;
    local_4b0 = 0;
    local_4c8 = param_4;
    do {
      lVar9 = local_4c8;
      lVar13 = *(longlong *)(local_4c8 + 0x280);
      if (*(longlong *)(local_4c8 + 0x280) == 0) {
        lVar13 = local_4c8;
      }
      local_4b8 = *(longlong *)(lVar13 + 0x58 + uVar12 * 0xa0);
      FUN_14494b062(local_418,param_1,*(undefined8 *)(*(longlong *)(local_4b8 + 8) + 0x348));
      lVar13 = local_4b8;
      uVar5 = *(uint *)(lVar9 + 0x290);
      local_4e0 = (ulonglong)uVar5;
      uVar17 = uVar5 - (int)uVar12;
      if (1 < (int)uVar17) {
        uVar17 = 2;
      }
      local_4a0 = (ulonglong)uVar17;
      iVar28 = 4;
      if (DAT_14c9f1f10 == 0) {
        iVar28 = *(int *)(DAT_14c9f2210 + 4);
      }
      iVar31 = 0;
      if (uVar12 != local_4e0) {
        lVar9 = *(longlong *)(local_4c8 + 0x280);
        if (*(longlong *)(local_4c8 + 0x280) == 0) {
          lVar9 = local_4c8;
        }
        iVar27 = uVar5 + (int)local_4b0;
        if (1 < iVar27) {
          iVar27 = 2;
        }
        iVar27 = iVar27 + (uint)(iVar27 == 0);
        iVar31 = 0;
        uVar29 = uVar12;
        do {
          lVar19 = (longlong)(int)uVar29 * 0xa0;
          uVar5 = *(uint *)(lVar9 + 0x28 + lVar19) >> 2 & 0xfffffffe;
          iVar31 = iVar31 + ((int)(uVar5 * uVar5 + iVar28 + -1) / iVar28) *
                            *(int *)(lVar9 + 0x1c + lVar19) * *(int *)(lVar9 + 0x18 + lVar19);
          uVar29 = (ulonglong)((int)uVar29 + 1);
          iVar27 = iVar27 + -1;
        } while (iVar27 != 0);
      }
      local_188 = 0;
      local_180 = 1;
      local_178 = 0;
      local_170 = 1;
      local_168 = 0;
      local_160 = 1;
      local_158 = 0;
      local_150 = 1;
      local_128 = 0;
      local_120 = 1;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      lVar9 = *(longlong *)(local_4b8 + 0x13ad8);
      local_4d0 = uVar12;
      if (lVar9 == 0) {
        uVar5 = *(uint *)(local_4b8 + 0x1de0);
        iVar28 = 0x20;
        if ((uVar5 != 0) && (iVar28 = 0, uVar5 != 0)) {
          for (; (uVar5 >> iVar28 & 1) == 0; iVar28 = iVar28 + 1) {
          }
        }
        uVar6 = 0;
        if (*(longlong *)(local_4b8 + 0x3108) != 0) {
          uVar6 = *(undefined4 *)(*(longlong *)(local_4b8 + 0x3108) + 0x24);
        }
        lVar9 = FUN_140c6b718(local_458,uVar6,iVar28);
      }
      local_530 = (undefined1 **)&local_188;
      local_538 = (undefined8 *)((ulonglong)local_538 & 0xffffffffffffff00);
      FUN_142db26c6(param_1,lVar13,lVar9,local_450);
      puVar10 = local_2ac;
      lVar9 = 0;
      do {
        *(undefined8 *)((longlong)local_2d8 + lVar9) = 0;
        *(undefined8 *)((longlong)local_2d8 + lVar9 + 8) = 0;
        *(undefined8 *)((longlong)local_2d8 + lVar9 + 0x10) = 0;
        lVar19 = 0;
        do {
          *(undefined8 *)(puVar10 + lVar19 + -0xc) = 0;
          *(undefined8 *)((longlong)(puVar10 + lVar19 + -0xc) + 8) = 0x3f80000000000000;
          lVar19 = lVar19 + 0x10;
        } while (lVar19 != 0x60);
        lVar19 = lVar9 + 0xa0;
        *(undefined8 *)((longlong)local_248 + lVar9) = 0;
        *(undefined8 *)((longlong)local_248 + lVar9 + 8) = 0;
        puVar10 = puVar10 + 0xa0;
        lVar9 = lVar19;
      } while (lVar19 != 0x140);
      FUN_14018bad0(lVar13,local_318,0xbf800000);
      iVar28 = 0;
      local_478 = 0;
      local_198 = iVar31;
      if (local_4d0 != local_4e0) {
        iVar27 = (int)local_4e0 + (int)local_4b0;
        if (1 < iVar27) {
          iVar27 = 2;
        }
        local_4c0 = (undefined8 *)CONCAT44(local_4c0._4_4_,iVar27 + (uint)(iVar27 == 0));
        local_478 = 0;
        lVar9 = local_4c8;
        do {
          puVar4 = local_4e8;
          uVar5 = (int)local_4d0 + iVar28;
          uVar12 = (ulonglong)uVar5;
          lVar13 = *(longlong *)(param_9 + 0x20);
          if (*(longlong *)(param_9 + 0x20) == 0) {
            lVar13 = param_9;
          }
          lVar19 = (longlong)(int)uVar5;
          lVar13 = *(longlong *)(lVar13 + lVar19 * 8);
          puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar25 + 9;
          if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
            FUN_140023dd8(local_4e8);
            puVar25 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
            puVar14 = puVar25 + 9;
            lVar9 = local_4c8;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar14;
          puVar25[1] = *(undefined8 *)(lVar13 + 8);
          puVar25[2] = 0;
          *(undefined1 *)(puVar25 + 3) = 3;
          *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
          *puVar25 = &PTR_FUN_14a1fb168;
          *(undefined1 *)(puVar25 + 5) = 1;
          *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
          puVar25[7] = 0;
          puVar25[8] = lVar13;
          iVar27 = *(int *)(param_1 + 0x1a0);
          uVar5 = iVar27 + 1;
          *(uint *)(param_1 + 0x1a0) = uVar5;
          if (*(uint *)(param_1 + 0x1a4) < uVar5) {
            FUN_1447568fc(local_4d8);
            lVar9 = local_4c8;
          }
          puVar4 = local_4e8;
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar27 * 8) = puVar25;
          *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          local_2d8[uVar12 * 0x14] = puVar25;
          lVar13 = *(longlong *)(param_10 + 0x20);
          if (*(longlong *)(param_10 + 0x20) == 0) {
            lVar13 = param_10;
          }
          lVar13 = *(longlong *)(lVar13 + lVar19 * 8);
          puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar25 + 9;
          if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
            FUN_140023dd8(local_4e8);
            puVar25 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
            puVar14 = puVar25 + 9;
            lVar9 = local_4c8;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar14;
          puVar25[1] = *(undefined8 *)(lVar13 + 8);
          puVar25[2] = 0;
          *(undefined1 *)(puVar25 + 3) = 3;
          *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
          *puVar25 = &PTR_FUN_14a1fb168;
          *(undefined1 *)(puVar25 + 5) = 0x1c;
          *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
          puVar25[7] = 0;
          puVar25[8] = lVar13;
          iVar27 = *(int *)(param_1 + 0x1a0);
          uVar5 = iVar27 + 1;
          *(uint *)(param_1 + 0x1a0) = uVar5;
          if (*(uint *)(param_1 + 0x1a4) < uVar5) {
            FUN_1447568fc(local_4d8);
            lVar9 = local_4c8;
          }
          puVar4 = local_4e8;
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar27 * 8) = puVar25;
          *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          local_248[uVar12 * 0x14] = puVar25;
          local_248[uVar12 * 0x14 + 1] = 0;
          lVar13 = *(longlong *)(param_7 + 0x20);
          if (*(longlong *)(param_7 + 0x20) == 0) {
            lVar13 = param_7;
          }
          lVar13 = *(longlong *)(lVar13 + lVar19 * 8);
          puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar25 + 9;
          if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
            FUN_140023dd8(local_4e8);
            puVar25 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
            puVar14 = puVar25 + 9;
            lVar9 = local_4c8;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar14;
          puVar25[1] = *(undefined8 *)(lVar13 + 8);
          puVar25[2] = 0;
          *(undefined1 *)(puVar25 + 3) = 3;
          *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
          *puVar25 = &PTR_FUN_14a1fb168;
          *(undefined1 *)(puVar25 + 5) = 0x1c;
          *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
          puVar25[7] = 0;
          puVar25[8] = lVar13;
          iVar27 = *(int *)(param_1 + 0x1a0);
          uVar5 = iVar27 + 1;
          *(uint *)(param_1 + 0x1a0) = uVar5;
          if (*(uint *)(param_1 + 0x1a4) < uVar5) {
            FUN_1447568fc(local_4d8);
            lVar9 = local_4c8;
          }
          puVar4 = local_4e8;
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar27 * 8) = puVar25;
          *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          local_2d8[uVar12 * 0x14 + 1] = puVar25;
          lVar13 = *(longlong *)(param_8 + 0x20);
          if (*(longlong *)(param_8 + 0x20) == 0) {
            lVar13 = param_8;
          }
          lVar13 = *(longlong *)(lVar13 + lVar19 * 8);
          puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar25 + 9;
          if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
            FUN_140023dd8(local_4e8);
            puVar25 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
            puVar14 = puVar25 + 9;
            lVar9 = local_4c8;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar14;
          puVar25[1] = *(undefined8 *)(lVar13 + 8);
          puVar25[2] = 0;
          *(undefined1 *)(puVar25 + 3) = 3;
          *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
          *puVar25 = &PTR_FUN_14a1fb168;
          *(undefined1 *)(puVar25 + 5) = 0x44;
          *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
          puVar25[7] = 0;
          puVar25[8] = lVar13;
          iVar27 = *(int *)(param_1 + 0x1a0);
          *(uint *)(param_1 + 0x1a0) = iVar27 + 1U;
          if (*(uint *)(param_1 + 0x1a4) < iVar27 + 1U) {
            FUN_1447568fc(local_4d8,iVar27);
            lVar9 = local_4c8;
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar27 * 8) = puVar25;
          *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          local_2d8[uVar12 * 0x14 + 2] = puVar25;
          lVar13 = *(longlong *)(lVar9 + 0x280);
          if (*(longlong *)(lVar9 + 0x280) == 0) {
            lVar13 = lVar9;
          }
          lVar23 = *(longlong *)(param_5 + 0x40);
          if (*(longlong *)(param_5 + 0x40) == 0) {
            lVar23 = param_5;
          }
          lVar23 = *(longlong *)(lVar23 + 8 + lVar19 * 0x10);
          auStack_258[uVar12 * 0x28 + 1] = *(undefined4 *)(lVar23 + 0x160);
          auStack_258[uVar12 * 0x28 + 2] = *(undefined4 *)(lVar23 + 0x164);
          auStack_258[uVar12 * 0x28] = *(undefined4 *)(lVar13 + 0x28 + lVar19 * 0xa0);
          auStack_258[uVar12 * 0x28 + 3] = 0;
          if ((((*(int *)(DAT_14c9f5c70 + 4) != 0) &&
               ((*(uint *)(*(longlong *)(local_4b8 + 8) + 0x60) & 0x80000) != 0)) &&
              (*(int *)(DAT_14c9f2228 + 4) != 0)) &&
             (lVar13 = lVar13 + lVar19 * 0xa0, *(char *)(lVar13 + 0x50) == '\x01')) {
            auStack_258[uVar12 * 0x28 + 3] = 1;
            local_478 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
          }
          puVar14 = (undefined8 *)(lVar23 + 0x80);
          puVar25 = local_2d8 + uVar12 * 0x14 + 4;
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar25 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar25 = puVar25 + 1;
          }
          iVar28 = iVar28 + 1;
        } while ((int)local_4c0 != iVar28);
      }
      puVar4 = local_4e8;
      iVar28 = iVar31 + 0x3fe;
      if (-1 < iVar31 + 0x1ff) {
        iVar28 = iVar31 + 0x1ff;
      }
      iVar31 = (iVar28 >> 9) * 8;
      local_3a0 = DAT_14ca83a40;
      uStack_3b0 = DAT_14ca83a30;
      iStack_3ac = DAT_14ca83a34;
      uStack_3a8 = (longlong *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
      local_39c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_386 = 0;
      local_3b8 = 0x20008;
      iStack_3b4 = 0;
      local_385._1_2_ = 0xff00;
      local_385[0] = (*(int *)(DAT_14c9ecd08 + 4) == 0) << 4 | 10;
      local_38c = 0x10001;
      iStack_394 = 0x1000;
      if (DAT_14ca84e40 < 0x1000) {
        iStack_394 = DAT_14ca84e40;
      }
      local_388 = 0x101;
      if (iStack_394 < 2) {
        iStack_394 = 1;
      }
      local_398 = 0;
      local_390 = DAT_14ca84e40;
      if (iVar31 < DAT_14ca84e40) {
        local_390 = iVar31;
      }
      if (local_390 < 2) {
        local_390 = 1;
      }
      uVar29 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar12 = uVar29 + 0x120;
      if (*(ulonglong *)(param_1 + 0x78) < uVar12) {
        FUN_140023dd8(local_4e8,0x128);
        uVar29 = *puVar4 + 7 & 0xfffffffffffffff8;
        uVar12 = uVar29 + 0x120;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar12;
      FUN_1456bbb8c(uVar29,L"Lumen.RadianceCache.TraceRadiance",&local_3b8,0);
      lVar9 = local_4b8;
      iVar27 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar27 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar27 + 1U) {
        FUN_14472c0f6(local_470,iVar27);
      }
      puVar4 = local_4e8;
      *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar27 * 8) = uVar29;
      *(int *)(uVar29 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
      local_3a0 = DAT_14ca83a40;
      iStack_394 = 0x1000;
      if (DAT_14ca84e40 < 0x1000) {
        iStack_394 = DAT_14ca84e40;
      }
      if (iStack_394 < 2) {
        iStack_394 = 1;
      }
      local_390 = DAT_14ca84e40;
      if (iVar31 < DAT_14ca84e40) {
        local_390 = iVar31;
      }
      uStack_3b0 = DAT_14ca83a30;
      iStack_3ac = DAT_14ca83a34;
      uStack_3a8 = (longlong *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
      local_39c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_386 = 0;
      local_3b8 = 0x20008;
      iStack_3b4 = 0;
      local_38c = 0x10001;
      local_388 = 0x101;
      local_398 = 0;
      local_385._0_3_ = 0xff0015;
      if (local_390 < 2) {
        local_390 = 1;
      }
      uVar24 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar12 = uVar24 + 0x120;
      if (*(ulonglong *)(param_1 + 0x78) < uVar12) {
        FUN_140023dd8(local_4e8,0x128);
        uVar24 = *puVar4 + 7 & 0xfffffffffffffff8;
        uVar12 = uVar24 + 0x120;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar12;
      FUN_1456bbb8c(uVar24,L"Lumen.RadianceCache.TraceHit",&local_3b8,0);
      iVar31 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar31 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar31 + 1U) {
        FUN_14472c0f6(local_470,iVar31);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar31 * 8) = uVar24;
      *(int *)(uVar24 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
      local_4e9 = FUN_141767b49(*(undefined8 *)(lVar9 + 8));
      uVar6 = 0;
      if ((DAT_14ca84ef5 == '\x01') && ((DAT_14ca84ef7 & 1) != 0)) {
        uVar11 = FUN_142d11e9a(lVar9,2);
        uVar6 = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),(int)uVar11 == 1);
      }
      puVar4 = local_4e8;
      local_4c0 = (undefined8 *)CONCAT44(local_4c0._4_4_,uVar6);
      local_3b8 = DAT_14ca84e48;
      if (0xb < DAT_14ca84e48) {
        local_3b8 = 0xc;
      }
      uStack_3a8 = (longlong *)0x0;
      local_3b8 = local_3b8 + (local_3b8 == 0);
      iStack_3b4 = 1;
      uStack_3b0 = 0x4189;
      uVar20 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar12 = uVar20 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar12) {
        FUN_140023dd8(local_4e8,0x160);
        uVar20 = *puVar4 + 0xf & 0xfffffffffffffff0;
        uVar12 = uVar20 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar12;
      FUN_1456bd266(uVar20,L"Lumen.RadianceCache.HardwareRayTracing.IndirectArgsBuffer",&local_3b8,0
                   );
      iVar31 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar31 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar31 + 1U) {
        FUN_144737178(local_490,iVar31);
      }
      puVar4 = local_4e8;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar31 * 8) = uVar20;
      *(int *)(uVar20 + 0x7c) = *(int *)(param_1 + 400) + -1;
      local_3b8 = DAT_14ca84e48;
      if (0xb < DAT_14ca84e48) {
        local_3b8 = 0xc;
      }
      uStack_3a8 = (longlong *)0x0;
      local_3b8 = local_3b8 + (local_3b8 == 0);
      iStack_3b4 = 1;
      uStack_3b0 = 0x4189;
      uVar22 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar12 = uVar22 + 0x150;
      local_488 = uVar20;
      if (*(ulonglong *)(param_1 + 0x78) < uVar12) {
        FUN_140023dd8(local_4e8,0x160);
        uVar22 = *puVar4 + 0xf & 0xfffffffffffffff0;
        uVar12 = uVar22 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar12;
      local_498 = uVar24;
      FUN_1456bd266(uVar22,L"Lumen.RadianceCache.HardwareRayTracing.ResolveIndirectArgs",&local_3b8,
                    0);
      iVar31 = *(int *)(param_1 + 400);
      uVar5 = iVar31 + 1;
      *(uint *)(param_1 + 400) = uVar5;
      if (*(uint *)(param_1 + 0x194) < uVar5) {
        FUN_144737178(local_490);
      }
      puVar4 = local_4e8;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar31 * 8) = uVar22;
      *(int *)(uVar22 + 0x7c) = *(int *)(param_1 + 400) + -1;
      puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar25 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_4e8);
        puVar25 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
        puVar14 = puVar25 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      *puVar25 = &PTR_FUN_14a266030;
      puVar25[2] = 0;
      puVar25[3] = 0;
      puVar25[4] = 0;
      puVar25[5] = 0;
      iVar31 = *(int *)(param_1 + 0xa0);
      uVar5 = iVar31 + 1;
      *(uint *)(param_1 + 0xa0) = uVar5;
      if (*(uint *)(param_1 + 0xa4) < uVar5) {
        FUN_1448cfae8(local_4a8);
      }
      uVar12 = local_488;
      puVar4 = local_4e8;
      *(undefined8 **)(*local_4a8 + (longlong)iVar31 * 8) = puVar25;
      if (local_4d0 != local_4e0) {
        uVar5 = (int)local_4b0 + (int)local_4e0;
        uVar24 = (ulonglong)uVar5;
        if (1 < (int)uVar5) {
          uVar24 = 2;
        }
        puVar14 = local_248;
        lVar9 = 0;
        do {
          (puVar25 + 2)[lVar9] = *puVar14;
          lVar9 = lVar9 + 1;
          puVar14 = puVar14 + 0x14;
        } while (uVar24 + (uVar24 == 0) != lVar9);
      }
      cVar1 = *(char *)(local_488 + 0x68);
      puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar30 + 8;
      local_480 = uVar29;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_4e8,0x48);
        puVar30 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar30 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      puVar30[1] = *(undefined8 *)(uVar12 + 8);
      puVar30[2] = 0;
      *(undefined1 *)(puVar30 + 3) = 2;
      *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar30 + 5) = 0;
      *puVar30 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar30 + 6) = cVar1 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar30 + 0x31) = 0;
      puVar30[7] = uVar12;
      iVar31 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar31 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar31 + 1U) {
        FUN_1447568fc(local_4d8,iVar31);
      }
      puVar4 = local_4e8;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar31 * 8) = puVar30;
      *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar25[4] = puVar30;
      cVar1 = *(char *)(uVar22 + 0x68);
      puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar30 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_4e8,0x48);
        puVar30 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar30 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      puVar30[1] = *(undefined8 *)(uVar22 + 8);
      puVar30[2] = 0;
      *(undefined1 *)(puVar30 + 3) = 2;
      *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar30 + 5) = 0;
      *puVar30 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar30 + 6) = cVar1 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar30 + 0x31) = 0;
      puVar30[7] = uVar22;
      iVar31 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar31 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar31 + 1U) {
        FUN_1447568fc(local_4d8,iVar31);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar31 * 8) = puVar30;
      *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar25[5] = puVar30;
      lVar9 = DAT_14c9eccf0;
      uVar12 = 1;
      if (local_4e9 != '\0') {
        uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_4b8 + 0x3090) * 2);
        if ((DAT_14ca84f10 == '\x01') && (DAT_14ca84f14 < 0x21)) {
          iVar31 = *local_468;
          if ((iVar31 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar31 == 2)))) {
            uVar29 = 0;
          }
          else if (iVar31 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            uVar29 = (ulonglong)(DVar7 != DVar8);
          }
          else {
            uVar29 = 1;
          }
          uVar12 = 0x20;
          if (*(int *)(lVar9 + uVar29 * 4) != 0) goto LAB_142d3404c;
        }
        uVar12 = (ulonglong)((uint)(&DAT_14ca814d8)[(ulonglong)uVar3 * 0xf] >> 0x14 & 0x20) + 0x20;
      }
LAB_142d3404c:
      lVar9 = local_4b8;
      puVar25[6] = uVar12 | 0x100000000;
      uVar11 = *(undefined8 *)(local_4b8 + 0x13818);
      iVar31 = (int)local_4a0;
      local_460 = uVar22;
      FUN_145e567f4();
      FUN_1448e935e(uVar11,&local_3b8,&DAT_14c9f24e8,iVar31 * 2 + -1);
      FUN_145e567f4();
      local_348 = local_3b8;
      iStack_344 = iStack_3b4;
      uStack_340 = uStack_3b0;
      iStack_33c = iStack_3ac;
      local_424 = &DAT_100000001;
      local_41c = 1;
      local_530 = &local_424;
      local_538 = puVar25 + 2;
      FUN_1471eccd1(param_1,&local_3b8,param_12,&local_348);
      uVar12 = local_478;
      local_3b8 = local_3b8 & 0xffffff00;
      iStack_3b4 = (uint)(byte)local_4c0 + (uint)(byte)local_4c0;
      uStack_3b0 = CONCAT31(uStack_3b0._1_3_,
                            ((byte)local_4c0 ^ 1) & *(int *)(DAT_14c9ed3f8 + 4) != 0);
      local_500 = param_12;
      local_508 = local_498;
      local_510 = local_480;
      local_518 = local_488;
      local_520 = (byte)local_478 & 1;
      local_528 = (uint *)CONCAT71(local_528._1_7_,local_4e9);
      local_538 = (undefined8 *)local_318;
      local_530 = (undefined1 **)&local_3b8;
      iStack_3ac = iVar31;
      FUN_142d330ac(param_1,lVar9,local_418);
      if ((uVar12 & 1) != 0) {
        local_328 = (uint *)0x0;
        local_31c = 4;
        local_320 = (uint)local_4a0;
        if (4 < local_320) {
          FUN_1471e9006(&local_348);
        }
        uVar5 = (uint)local_4a0;
        puVar15 = local_328;
        if (local_328 == (uint *)0x0) {
          puVar15 = &local_348;
        }
        memset(puVar15,0,(longlong)(int)uVar5 << 3);
        local_358 = (undefined1 *)0x0;
        local_34c = 4;
        local_350 = uVar5;
        if (4 < uVar5) {
          FUN_1471e9006(local_378);
        }
        puVar10 = local_358;
        if (local_358 == (undefined1 *)0x0) {
          puVar10 = local_378;
        }
        memset(puVar10,0,(longlong)(int)uVar5 << 3);
        if (local_4d0 != local_4e0) {
          uVar5 = (iVar28 >> 9) << 0xf;
          iVar28 = (int)local_4e0 + (int)local_4b0;
          if (1 < iVar28) {
            iVar28 = 2;
          }
          iVar31 = 0;
          do {
            puVar4 = local_4e8;
            uStack_3b0 = 0x4109;
            local_3b8 = 4;
            if (DAT_14ca84e48 < 4) {
              local_3b8 = DAT_14ca84e48;
            }
            uStack_3a8 = (longlong *)0x0;
            local_3b8 = local_3b8 + (local_3b8 == 0);
            iStack_3b4 = 2 - (uint)(DAT_14ca84e48 < 2);
            uVar29 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
            uVar12 = uVar29 + 0x150;
            if (*(ulonglong *)(param_1 + 0x78) < uVar12) {
              FUN_140023dd8(local_4e8,0x160);
              uVar29 = *puVar4 + 0xf & 0xfffffffffffffff0;
              uVar12 = uVar29 + 0x150;
            }
            *(ulonglong *)(param_1 + 0x70) = uVar12;
            FUN_1456bd266(uVar29,L"Lumen.RadianceCache.CompactedTraceTexelAllocator",&local_3b8,0);
            iVar27 = *(int *)(param_1 + 400);
            *(uint *)(param_1 + 400) = iVar27 + 1U;
            if (*(uint *)(param_1 + 0x194) < iVar27 + 1U) {
              FUN_144737178(local_490,iVar27);
            }
            puVar4 = local_4e8;
            *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar27 * 8) = uVar29;
            *(int *)(uVar29 + 0x7c) = *(int *)(param_1 + 400) + -1;
            puVar15 = local_328;
            if (local_328 == (uint *)0x0) {
              puVar15 = &local_348;
            }
            lVar9 = (longlong)iVar31;
            *(ulonglong *)(puVar15 + lVar9 * 2) = uVar29;
            puVar15 = local_328;
            if (local_328 == (uint *)0x0) {
              puVar15 = &local_348;
            }
            lVar13 = *(longlong *)(puVar15 + lVar9 * 2);
            puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar25 + 8;
            if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
              FUN_140023dd8(local_4e8,0x48);
              puVar25 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
              puVar14 = puVar25 + 8;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar14;
            puVar25[1] = *(undefined8 *)(lVar13 + 8);
            puVar25[2] = 0;
            *(undefined1 *)(puVar25 + 3) = 2;
            *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar25 + 5) = 0;
            *puVar25 = &PTR_FUN_14a1fb3e8;
            *(undefined2 *)(puVar25 + 6) = 0x1c;
            *(undefined1 *)((longlong)puVar25 + 0x32) = 0;
            puVar25[7] = lVar13;
            iVar27 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar27 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar27 + 1U) {
              FUN_1447568fc(local_4d8,iVar27);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar27 * 8) = puVar25;
            *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            FUN_1405bfba3(param_1,puVar25,0);
            puVar4 = local_4e8;
            local_3b8 = 4;
            if (DAT_14ca84e48 < 4) {
              local_3b8 = DAT_14ca84e48;
            }
            local_3b8 = local_3b8 + (local_3b8 == 0);
            uStack_3b0 = 0x4109;
            uVar17 = DAT_14ca84e48;
            if (uVar5 < DAT_14ca84e48) {
              uVar17 = uVar5;
            }
            uStack_3a8 = (longlong *)0x0;
            iStack_3b4 = uVar17 + (uVar17 == 0);
            uVar29 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
            uVar12 = uVar29 + 0x150;
            if (*(ulonglong *)(param_1 + 0x78) < uVar12) {
              FUN_140023dd8(local_4e8,0x160);
              uVar29 = *puVar4 + 0xf & 0xfffffffffffffff0;
              uVar12 = uVar29 + 0x150;
            }
            *(ulonglong *)(param_1 + 0x70) = uVar12;
            FUN_1456bd266(uVar29,L"Lumen.RadianceCache.CompactedTraceTexelData",&local_3b8,0);
            iVar27 = *(int *)(param_1 + 400);
            *(uint *)(param_1 + 400) = iVar27 + 1U;
            if (*(uint *)(param_1 + 0x194) < iVar27 + 1U) {
              FUN_144737178(local_490,iVar27);
            }
            *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar27 * 8) = uVar29;
            *(int *)(uVar29 + 0x7c) = *(int *)(param_1 + 400) + -1;
            puVar10 = local_358;
            if (local_358 == (undefined1 *)0x0) {
              puVar10 = local_378;
            }
            *(ulonglong *)(puVar10 + lVar9 * 8) = uVar29;
            iVar31 = iVar31 + 1;
          } while (iVar28 + (uint)(iVar28 == 0) != iVar31);
        }
        puVar4 = local_4e8;
        puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar14 = puVar25 + 0x3c;
        if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
          FUN_140023dd8(local_4e8,0x1f0);
          puVar25 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
          puVar14 = puVar25 + 0x3c;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar14;
        *puVar25 = &PTR_FUN_14a266078;
        FUN_1471fd84c();
        iVar28 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar28 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar28 + 1U) {
          FUN_1448cfae8(local_4a8,iVar28);
        }
        *(undefined8 **)(*local_4a8 + (longlong)iVar28 * 8) = puVar25;
        if (local_4d0 != local_4e0) {
          iVar28 = (int)local_4e0 + (int)local_4b0;
          if (1 < iVar28) {
            iVar28 = 2;
          }
          lVar9 = 0;
          do {
            puVar4 = local_4e8;
            puVar15 = local_328;
            if (local_328 == (uint *)0x0) {
              puVar15 = &local_348;
            }
            lVar13 = *(longlong *)(puVar15 + (longlong)(int)lVar9 * 2);
            puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar30 + 8;
            if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
              FUN_140023dd8(local_4e8,0x48);
              puVar30 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
              puVar14 = puVar30 + 8;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar14;
            puVar30[1] = *(undefined8 *)(lVar13 + 8);
            puVar30[2] = 0;
            *(undefined1 *)(puVar30 + 3) = 2;
            *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar30 + 5) = 0;
            *puVar30 = &PTR_FUN_14a1fb3e8;
            *(undefined2 *)(puVar30 + 6) = 0x1c;
            *(undefined1 *)((longlong)puVar30 + 0x32) = 0;
            puVar30[7] = lVar13;
            iVar31 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar31 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar31 + 1U) {
              FUN_1447568fc(local_4d8,iVar31);
            }
            puVar4 = local_4e8;
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar31 * 8) = puVar30;
            *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            puVar25[lVar9 + 4] = puVar30;
            puVar10 = local_358;
            if (local_358 == (undefined1 *)0x0) {
              puVar10 = local_378;
            }
            lVar13 = *(longlong *)(puVar10 + (longlong)(int)lVar9 * 8);
            puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar30 + 8;
            if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
              FUN_140023dd8(local_4e8,0x48);
              puVar30 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
              puVar14 = puVar30 + 8;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar14;
            puVar30[1] = *(undefined8 *)(lVar13 + 8);
            puVar30[2] = 0;
            *(undefined1 *)(puVar30 + 3) = 2;
            *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar30 + 5) = 0;
            *puVar30 = &PTR_FUN_14a1fb3e8;
            *(undefined2 *)(puVar30 + 6) = 0x1c;
            *(undefined1 *)((longlong)puVar30 + 0x32) = 0;
            puVar30[7] = lVar13;
            iVar31 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar31 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar31 + 1U) {
              FUN_1447568fc(local_4d8,iVar31);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar31 * 8) = puVar30;
            *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            puVar25[lVar9 + 6] = puVar30;
            lVar9 = lVar9 + 1;
          } while (iVar28 + (uint)(iVar28 == 0) != (int)lVar9);
        }
        puVar25[2] = local_460;
        *(undefined4 *)(puVar25 + 3) = 4;
        memcpy(puVar25 + 8,local_318,0x188);
        puVar25[0x3a] = local_498;
        uVar11 = *(undefined8 *)(local_4b8 + 0x13818);
        iVar28 = (int)local_4a0;
        FUN_145f06010();
        FUN_1448e935e(uVar11,&local_3b8,&DAT_14c9f2738,iVar28 + -1);
        FUN_145f06010();
        local_438 = local_3b8;
        iStack_434 = iStack_3b4;
        uStack_430 = uStack_3b0;
        iStack_42c = iStack_3ac;
        local_3b8 = 0;
        iStack_3b4 = 0;
        uStack_3a8 = (longlong *)0x0;
        local_530 = (undefined1 **)puVar25[2];
        local_538 = puVar25 + 2;
        local_528 = &local_3b8;
        FUN_1471ecd9b(param_1,&local_439,param_12,&local_438);
        if (CONCAT44(iStack_3b4,local_3b8) != 0) {
          plVar18 = uStack_3a8;
          if (uStack_3a8 == (longlong *)0x0) {
            plVar18 = (longlong *)&local_398;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
        puVar4 = local_4e8;
        puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar14 = puVar25 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
          FUN_140023dd8(local_4e8,0x50);
          puVar25 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
          puVar14 = puVar25 + 8;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar14;
        *puVar25 = &PTR_FUN_14a266030;
        puVar25[2] = 0;
        puVar25[3] = 0;
        puVar25[4] = 0;
        puVar25[5] = 0;
        iVar28 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar28 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar28 + 1U) {
          FUN_1448cfae8(local_4a8,iVar28);
        }
        puVar14 = puVar25 + 2;
        *(undefined8 **)(*local_4a8 + (longlong)iVar28 * 8) = puVar25;
        local_4c0 = puVar14;
        if (local_4d0 != local_4e0) {
          iVar28 = (int)local_4e0 + (int)local_4b0;
          if (1 < iVar28) {
            iVar28 = 2;
          }
          puVar30 = local_248 + 1;
          lVar9 = 0;
          do {
            puVar4 = local_4e8;
            puVar15 = local_328;
            if (local_328 == (uint *)0x0) {
              puVar15 = &local_348;
            }
            lVar13 = *(longlong *)(puVar15 + (longlong)(int)lVar9 * 2);
            puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar16 = puVar26 + 9;
            if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
              FUN_140023dd8(local_4e8,0x50);
              puVar26 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
              puVar16 = puVar26 + 9;
              puVar14 = local_4c0;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar16;
            puVar26[1] = *(undefined8 *)(lVar13 + 8);
            puVar26[2] = 0;
            *(undefined1 *)(puVar26 + 3) = 3;
            *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
            *puVar26 = &PTR_FUN_14a1fb168;
            *(undefined1 *)(puVar26 + 5) = 0x1c;
            *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
            puVar26[7] = 0;
            puVar26[8] = lVar13;
            iVar31 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar31 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar31 + 1U) {
              FUN_1447568fc(local_4d8,iVar31);
              puVar14 = local_4c0;
            }
            puVar4 = local_4e8;
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar31 * 8) = puVar26;
            *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            puVar10 = local_358;
            if (local_358 == (undefined1 *)0x0) {
              puVar10 = local_378;
            }
            puVar30[-1] = puVar26;
            lVar13 = *(longlong *)(puVar10 + (longlong)(int)lVar9 * 8);
            puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar16 = puVar21 + 9;
            if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
              FUN_140023dd8(local_4e8,0x50);
              puVar21 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
              puVar16 = puVar21 + 9;
              puVar14 = local_4c0;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar16;
            puVar21[1] = *(undefined8 *)(lVar13 + 8);
            puVar21[2] = 0;
            *(undefined1 *)(puVar21 + 3) = 3;
            *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
            *puVar21 = &PTR_FUN_14a1fb168;
            *(undefined1 *)(puVar21 + 5) = 0x1c;
            *(undefined8 *)((longlong)puVar21 + 0x2c) = 0xffffffff00000000;
            puVar21[7] = 0;
            puVar21[8] = lVar13;
            iVar31 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar31 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar31 + 1U) {
              FUN_1447568fc(local_4d8,iVar31);
              puVar14 = local_4c0;
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar31 * 8) = puVar21;
            *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            *puVar30 = puVar21;
            puVar14[lVar9] = puVar26;
            lVar9 = lVar9 + 1;
            puVar30 = puVar30 + 0x14;
          } while (iVar28 + (uint)(iVar28 == 0) != (int)lVar9);
        }
        uVar12 = local_488;
        puVar4 = local_4e8;
        cVar1 = *(char *)(local_488 + 0x68);
        puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar30 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
          FUN_140023dd8(local_4e8,0x48);
          puVar30 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar30 + 8;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar14;
        puVar30[1] = *(undefined8 *)(uVar12 + 8);
        puVar30[2] = 0;
        *(undefined1 *)(puVar30 + 3) = 2;
        *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar30 + 5) = 0;
        *puVar30 = &PTR_FUN_14a1fb3e8;
        *(byte *)(puVar30 + 6) = cVar1 >> 7 & 0x1c;
        *(undefined2 *)((longlong)puVar30 + 0x31) = 0;
        puVar30[7] = uVar12;
        iVar28 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar28 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar28 + 1U) {
          FUN_1447568fc(local_4d8,iVar28);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar28 * 8) = puVar30;
        *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar25[4] = puVar30;
        puVar25[5] = 0;
        lVar9 = DAT_14c9eccf0;
        uVar29 = 1;
        if (local_4e9 != '\0') {
          uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_4b8 + 0x3090) * 2);
          if ((DAT_14ca84f10 == '\x01') && (DAT_14ca84f14 < 0x21)) {
            iVar28 = *local_468;
            if ((iVar28 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar28 == 2)))) {
              uVar24 = 0;
            }
            else if (iVar28 == 1) {
              DVar7 = FUN_140ad26c0();
              DVar8 = GetCurrentThreadId();
              uVar24 = (ulonglong)(DVar7 != DVar8);
            }
            else {
              uVar24 = 1;
            }
            uVar29 = 0x20;
            if (*(int *)(lVar9 + uVar24 * 4) != 0) goto LAB_142d34c83;
          }
          uVar29 = (ulonglong)((uint)(&DAT_14ca814d8)[(ulonglong)uVar3 * 0xf] >> 0x14 & 0x20) + 0x20
          ;
        }
LAB_142d34c83:
        iVar28 = (int)local_4a0;
        puVar25[6] = uVar29 | 0x100000000;
        uVar11 = *(undefined8 *)(local_4b8 + 0x13818);
        FUN_145e567f4();
        FUN_1448e935e(uVar11,&local_3b8,&DAT_14c9f24e8,iVar28 * 2 + -2);
        FUN_145e567f4();
        local_438 = local_3b8;
        iStack_434 = iStack_3b4;
        uStack_430 = uStack_3b0;
        iStack_42c = iStack_3ac;
        local_448 = &DAT_100000001;
        local_440 = 1;
        local_530 = &local_448;
        local_538 = local_4c0;
        FUN_1471eccd1(param_1,&local_3b8,param_12,&local_438);
        local_3b8 = local_3b8 & 0xffffff00;
        iStack_3b4 = 1;
        uStack_3b0 = uStack_3b0 & 0xffffff00;
        local_500 = param_12;
        local_508 = local_498;
        local_510 = local_480;
        local_518 = uVar12;
        local_528 = (uint *)CONCAT71(local_528._1_7_,local_4e9);
        local_538 = (undefined8 *)local_318;
        local_520 = 1;
        local_530 = (undefined1 **)&local_3b8;
        iStack_3ac = iVar28;
        FUN_142d330ac(param_1,local_4b8,local_418);
        if (local_358 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_328 != (uint *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar4 = local_4e8;
      puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar25 + 0x3c;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_4e8);
        puVar25 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
        puVar14 = puVar25 + 0x3c;
      }
      uVar12 = local_460;
      *local_4e8 = (ulonglong)puVar14;
      *puVar25 = &PTR_FUN_14a2660b8;
      local_4c0 = puVar25 + 2;
      puVar25[2] = 0;
      puVar25[3] = 0;
      puVar25[4] = 0;
      puVar25[5] = 0;
      lVar9 = (longlong)puVar25 + 0x9c;
      lVar13 = 0;
      do {
        puVar14 = (undefined8 *)((longlong)puVar25 + lVar13 + 0x70);
        *puVar14 = 0;
        puVar14[1] = 0;
        *(undefined8 *)((longlong)puVar25 + lVar13 + 0x80) = 0;
        lVar19 = 0;
        do {
          puVar14 = (undefined8 *)(lVar9 + -0xc + lVar19);
          *puVar14 = 0;
          puVar14[1] = 0x3f80000000000000;
          lVar19 = lVar19 + 0x10;
        } while (lVar19 != 0x60);
        lVar19 = lVar13 + 0xa0;
        *(undefined8 *)((longlong)puVar25 + lVar13 + 0x100) = 0;
        *(undefined8 *)((longlong)puVar25 + lVar13 + 0x108) = 0;
        lVar9 = lVar9 + 0xa0;
        lVar13 = lVar19;
      } while (lVar19 != 0x140);
      puVar25[0x38] = 0;
      puVar25[0x39] = 0;
      puVar25[0x3a] = 0;
      *(undefined4 *)(puVar25 + 0x3b) = 4;
      iVar28 = *(int *)(param_1 + 0xa0);
      uVar5 = iVar28 + 1;
      *(uint *)(param_1 + 0xa0) = uVar5;
      if (*(uint *)(param_1 + 0xa4) < uVar5) {
        FUN_1448cfae8(local_4a8);
      }
      *(undefined8 **)(*local_4a8 + (longlong)iVar28 * 8) = puVar25;
      puVar25[0x3a] = uVar12;
      *(undefined4 *)(puVar25 + 0x3b) = 4;
      if (local_4d0 != local_4e0) {
        uVar5 = (int)local_4e0 + (int)local_4b0;
        if (1 < (int)uVar5) {
          uVar5 = 2;
        }
        uVar29 = (ulonglong)uVar5 + (ulonglong)((ulonglong)uVar5 == 0);
        lVar9 = 0;
        uVar12 = local_4d0;
        local_4e0 = uVar29;
        do {
          puVar4 = local_4e8;
          lVar13 = *(longlong *)(param_6 + 0x100);
          if (*(longlong *)(param_6 + 0x100) == 0) {
            lVar13 = param_6;
          }
          lVar23 = (longlong)((int)uVar12 + (int)lVar9) * 0x40;
          lVar19 = *(longlong *)(lVar13 + 0x30 + lVar23);
          uVar2 = *(undefined1 *)(lVar19 + 0x94);
          puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar30 + 9;
          if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
            FUN_140023dd8(local_4e8);
            puVar30 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
            puVar14 = puVar30 + 9;
            uVar12 = local_4d0;
            uVar29 = local_4e0;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar14;
          puVar30[1] = *(undefined8 *)(lVar19 + 8);
          puVar30[2] = 0;
          *(undefined1 *)(puVar30 + 3) = 0;
          *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar30 + 5) = 0;
          *puVar30 = &PTR_FUN_14a1fb948;
          *(undefined1 *)(puVar30 + 6) = uVar2;
          *(undefined1 *)(puVar30 + 7) = 0;
          *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
          *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
          puVar30[8] = lVar19;
          iVar28 = *(int *)(param_1 + 0x1a0);
          uVar5 = iVar28 + 1;
          *(uint *)(param_1 + 0x1a0) = uVar5;
          if (*(uint *)(param_1 + 0x1a4) < uVar5) {
            FUN_1447568fc(local_4d8);
            uVar12 = local_4d0;
            uVar29 = local_4e0;
          }
          puVar4 = local_4e8;
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar28 * 8) = puVar30;
          *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          puVar25[lVar9 + 2] = puVar30;
          lVar13 = *(longlong *)(lVar13 + lVar23 + 0x10);
          uVar2 = *(undefined1 *)(lVar13 + 0x94);
          puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar30 + 9;
          if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
            FUN_140023dd8(local_4e8);
            puVar30 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
            puVar14 = puVar30 + 9;
            uVar12 = local_4d0;
            uVar29 = local_4e0;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar14;
          puVar30[1] = *(undefined8 *)(lVar13 + 8);
          puVar30[2] = 0;
          *(undefined1 *)(puVar30 + 3) = 0;
          *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar30 + 5) = 0;
          *puVar30 = &PTR_FUN_14a1fb948;
          *(undefined1 *)(puVar30 + 6) = uVar2;
          *(undefined1 *)(puVar30 + 7) = 0;
          *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
          *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
          puVar30[8] = lVar13;
          iVar28 = *(int *)(param_1 + 0x1a0);
          uVar5 = iVar28 + 1;
          *(uint *)(param_1 + 0x1a0) = uVar5;
          if (*(uint *)(param_1 + 0x1a4) < uVar5) {
            FUN_1447568fc(local_4d8);
            uVar12 = local_4d0;
            uVar29 = local_4e0;
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar28 * 8) = puVar30;
          *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          puVar25[lVar9 + 4] = puVar30;
          lVar9 = lVar9 + 1;
        } while ((int)uVar29 != (int)lVar9);
      }
      memcpy(puVar25 + 6,local_318,0x188);
      puVar25[0x39] = local_480;
      puVar25[0x38] = local_498;
      uVar11 = *(undefined8 *)(local_4b8 + 0x13818);
      iVar28 = (int)local_4a0;
      FUN_145f2df28();
      FUN_1448e935e(uVar11,&local_3b8,&DAT_14c9f2610,iVar28 + -1);
      FUN_145f2df28();
      local_348 = local_3b8;
      iStack_344 = iStack_3b4;
      uStack_340 = uStack_3b0;
      iStack_33c = iStack_3ac;
      local_3b8 = 0;
      iStack_3b4 = 0;
      uStack_3a8 = (longlong *)0x0;
      local_530 = (undefined1 **)puVar25[0x3a];
      local_538 = local_4c0;
      local_528 = &local_3b8;
      FUN_1471ecee1(param_1,local_378,param_12,&local_348);
      if (CONCAT44(iStack_3b4,local_3b8) != 0) {
        plVar18 = uStack_3a8;
        if (uStack_3a8 == (longlong *)0x0) {
          plVar18 = (longlong *)&local_398;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      uVar12 = local_4d0 + 2;
      local_4b0 = (ulonglong)((int)local_4b0 - 2);
    } while ((int)uVar12 < *(int *)(local_4c8 + 0x290));
  }
  if ((local_80 ^ (ulonglong)auStack_558) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d35d7d FUN_142d35d7d body=69 status=ok
// SIG undefined FUN_142d35d7d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d35d7d(void)

{
  _DAT_14c9f27f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d35dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2800,1);
  return;
}



// FUNCTION 142d35dc2 FUN_142d35dc2 body=69 status=ok
// SIG undefined FUN_142d35dc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d35dc2(void)

{
  _DAT_14c9f2808 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d35e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2810,1);
  return;
}



// FUNCTION 142d35e07 FUN_142d35e07 body=69 status=ok
// SIG undefined FUN_142d35e07(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d35e07(void)

{
  _DAT_14c9f2818 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d35e49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2820,1);
  return;
}



// FUNCTION 142d35e4c FUN_142d35e4c body=69 status=ok
// SIG undefined FUN_142d35e4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d35e4c(void)

{
  _DAT_14c9f2828 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d35e8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2830,1);
  return;
}



// FUNCTION 142d35e91 FUN_142d35e91 body=69 status=ok
// SIG undefined FUN_142d35e91(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d35e91(void)

{
  _DAT_14c9f2838 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d35ed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2840,1);
  return;
}



// FUNCTION 142d35ed6 FUN_142d35ed6 body=69 status=ok
// SIG undefined FUN_142d35ed6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d35ed6(void)

{
  _DAT_14c9f2848 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d35f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2850,1);
  return;
}



// FUNCTION 142d35f1b FUN_142d35f1b body=69 status=ok
// SIG undefined FUN_142d35f1b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d35f1b(void)

{
  _DAT_14c9f2858 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d35f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2860,1);
  return;
}



// FUNCTION 142d35f60 FUN_142d35f60 body=69 status=ok
// SIG undefined FUN_142d35f60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d35f60(void)

{
  _DAT_14c9f2868 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d35fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2870,1);
  return;
}



// FUNCTION 142d35fa5 FUN_142d35fa5 body=69 status=ok
// SIG undefined FUN_142d35fa5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d35fa5(void)

{
  _DAT_14c9f2878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d35fe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2880,1);
  return;
}



// FUNCTION 142d35fea FUN_142d35fea body=69 status=ok
// SIG undefined FUN_142d35fea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d35fea(void)

{
  _DAT_14c9f2888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3602c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2890,1);
  return;
}



// FUNCTION 142d3602f FUN_142d3602f body=69 status=ok
// SIG undefined FUN_142d3602f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3602f(void)

{
  _DAT_14c9f2898 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d36071. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f28a0,1);
  return;
}



// FUNCTION 142d36074 FUN_142d36074 body=69 status=ok
// SIG undefined FUN_142d36074(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d36074(void)

{
  _DAT_14c9f28a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d360b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f28b0,1);
  return;
}



// FUNCTION 142d360b9 FUN_142d360b9 body=69 status=ok
// SIG undefined FUN_142d360b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d360b9(void)

{
  _DAT_14c9f28b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d360fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f28c0,1);
  return;
}



// FUNCTION 142d360fe FUN_142d360fe body=69 status=ok
// SIG undefined FUN_142d360fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d360fe(void)

{
  _DAT_14c9f28c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d36140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f28d0,1);
  return;
}



// FUNCTION 142d36143 FUN_142d36143 body=69 status=ok
// SIG undefined FUN_142d36143(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d36143(void)

{
  _DAT_14c9f28d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d36185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f28e0,1);
  return;
}



// FUNCTION 142d36188 FUN_142d36188 body=69 status=ok
// SIG undefined FUN_142d36188(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d36188(void)

{
  _DAT_14c9f28f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d361ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f28f8,1);
  return;
}



// FUNCTION 142d361cd FUN_142d361cd body=69 status=ok
// SIG undefined FUN_142d361cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d361cd(void)

{
  _DAT_14c9f2900 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3620f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2908,1);
  return;
}



// FUNCTION 142d36212 FUN_142d36212 body=69 status=ok
// SIG undefined FUN_142d36212(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d36212(void)

{
  _DAT_14c9f2910 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d36254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2918,1);
  return;
}



// FUNCTION 142d36257 FUN_142d36257 body=69 status=ok
// SIG undefined FUN_142d36257(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d36257(void)

{
  _DAT_14c9f2920 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d36299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2928,1);
  return;
}



// FUNCTION 142d3629c FUN_142d3629c body=69 status=ok
// SIG undefined FUN_142d3629c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3629c(void)

{
  _DAT_14c9f2938 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d362de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2940,1);
  return;
}



// FUNCTION 142d362e1 FUN_142d362e1 body=69 status=ok
// SIG undefined FUN_142d362e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d362e1(void)

{
  _DAT_14c9f2950 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d36323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f2958,1);
  return;
}



// FUNCTION 142d36389 FUN_142d36389 body=18595 status=ok
// SIG undefined FUN_142d36389(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d36389(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong *param_8,
                  ushort param_9)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong ****pppplVar4;
  double dVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong *******ppppppplVar15;
  char cVar16;
  undefined1 uVar17;
  uint uVar18;
  DWORD DVar19;
  undefined4 uVar20;
  DWORD DVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong ******pppppplVar24;
  longlong *****ppppplVar25;
  longlong lVar26;
  uint uVar27;
  int iVar28;
  longlong *******ppppppplVar29;
  ulonglong uVar30;
  longlong *plVar31;
  byte bVar32;
  int iVar33;
  undefined8 *puVar34;
  undefined *puVar35;
  ulonglong uVar36;
  ushort uVar37;
  int iVar38;
  ulonglong uVar39;
  longlong *plVar40;
  undefined4 *puVar41;
  undefined8 *puVar42;
  longlong *****ppppplVar43;
  undefined8 *puVar44;
  longlong *plVar45;
  longlong *******ppppppplVar46;
  undefined8 *puVar47;
  bool bVar48;
  bool bVar49;
  float fVar50;
  float fVar51;
  undefined1 auStack_3a8 [32];
  longlong *******local_388;
  undefined8 *local_380;
  ushort local_378;
  ulonglong *local_370;
  longlong local_368;
  longlong *******local_360;
  longlong local_358;
  longlong *local_350;
  undefined4 local_348;
  int local_344;
  longlong *local_340;
  int local_338;
  uint local_334;
  undefined4 local_330;
  int local_32c;
  uint local_328;
  undefined4 local_324;
  longlong *local_320;
  longlong *local_318;
  int local_30c;
  longlong ******local_308;
  longlong *****local_300;
  undefined8 *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 *local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 *local_2c0;
  undefined8 *local_2b8;
  longlong ******local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  ulonglong local_298;
  undefined1 local_289;
  char local_287;
  undefined1 local_286;
  undefined1 local_284;
  char local_282;
  undefined1 local_281;
  undefined4 local_27f;
  undefined3 uStack_27b;
  longlong local_278;
  undefined1 local_270 [8];
  longlong *local_268;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined1 *puStack_230;
  undefined *local_228;
  longlong local_220;
  undefined8 local_218;
  undefined1 local_210;
  longlong *******local_208;
  undefined1 local_200;
  longlong *local_1f8;
  longlong local_1e8 [2];
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  longlong *******local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *****local_a8;
  ulonglong local_a0 [12];
  
  local_a0[0] = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  uVar18 = *(uint *)(param_6 + 0x280);
  local_350 = (longlong *)(ulonglong)uVar18;
  local_344 = (int)param_8[5];
  uVar27 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar27 = DAT_14ca84e48;
  }
  puStack_230 = (undefined1 *)CONCAT44(puStack_230._4_4_,0x10109);
  local_228 = (undefined *)0x0;
  uVar6 = DAT_14ca84e48;
  if (uVar18 < DAT_14ca84e48) {
    uVar6 = uVar18;
  }
  local_238 = (longlong *)CONCAT44(uVar6 + (uVar6 == 0),uVar27 + (uVar27 == 0));
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar39 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar30 = uVar39 + 0x150;
  local_370 = puVar1;
  local_340 = param_2;
  if (*(ulonglong *)(param_1 + 0x78) < uVar30) {
    FUN_140023dd8(puVar1,0x160);
    uVar39 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar30 = uVar39 + 0x150;
  }
  lVar22 = param_1 + 0x188;
  *(ulonglong *)(param_1 + 0x70) = uVar30;
  FUN_1456bd266(uVar39,L"Lumen.Radiosity.CardTileAllocator",&local_238,0);
  iVar33 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar33 + 1U) {
    FUN_144737178(lVar22,iVar33);
  }
  puVar1 = local_370;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar33 * 8) = uVar39;
  *(int *)(uVar39 + 0x7c) = *(int *)(param_1 + 400) + -1;
  uVar18 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar18 = DAT_14ca84e48;
  }
  puStack_230 = (undefined1 *)CONCAT44(puStack_230._4_4_,0x10109);
  uVar27 = local_344 * (int)local_350;
  if (DAT_14ca84e48 <= (uint)(local_344 * (int)local_350)) {
    uVar27 = DAT_14ca84e48;
  }
  local_228 = (undefined *)0x0;
  local_238 = (longlong *)CONCAT44(uVar27 + (uVar27 == 0),uVar18 + (uVar18 == 0));
  uVar36 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar30 = uVar36 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar30) {
    FUN_140023dd8(local_370,0x160);
    uVar36 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar30 = uVar36 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar30;
  FUN_1456bd266(uVar36,L"Lumen.Radiosity.CardTiles",&local_238,0);
  iVar33 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar33 + 1U) {
    FUN_144737178(lVar22,iVar33);
  }
  puVar1 = local_370;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar33 * 8) = uVar36;
  *(int *)(uVar36 + 0x7c) = *(int *)(param_1 + 400) + -1;
  cVar16 = *(char *)(uVar39 + 0x68);
  puVar42 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar47 = puVar42 + 8;
  local_300 = (longlong *****)lVar22;
  if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
    FUN_140023dd8(local_370,0x48);
    puVar42 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar47 = puVar42 + 8;
  }
  local_358 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar47;
  puVar42[1] = *(undefined8 *)(uVar39 + 8);
  puVar42[2] = 0;
  *(undefined1 *)(puVar42 + 3) = 2;
  *(undefined8 *)((longlong)puVar42 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar42 + 5) = 0;
  *puVar42 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar42 + 6) = cVar16 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar42 + 0x31) = 0;
  puVar42[7] = uVar39;
  iVar33 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar33 + 1U) {
    FUN_1447568fc(local_358,iVar33);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = puVar42;
  *(int *)((longlong)puVar42 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  FUN_1405bfba3(param_1,puVar42,0,param_9);
  puVar1 = local_370;
  local_324 = (undefined4)(8 / (ulonglong)*(uint *)(param_7 + 4));
  cVar16 = *(char *)(uVar39 + 0x68);
  puVar42 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar47 = puVar42 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
    FUN_140023dd8(local_370,0x50);
    puVar42 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar47 = puVar42 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar47;
  puVar42[1] = *(undefined8 *)(uVar39 + 8);
  puVar42[2] = 0;
  *(undefined1 *)(puVar42 + 3) = 3;
  *(undefined8 *)((longlong)puVar42 + 0x1c) = 0xffffffffffffffff;
  *puVar42 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar42 + 5) = cVar16 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar42 + 0x2c) = 0xffffffff00000000;
  puVar42[7] = 0;
  puVar42[8] = uVar39;
  iVar33 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar33 + 1U) {
    FUN_1447568fc(local_358,iVar33);
  }
  puVar1 = local_370;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = puVar42;
  *(int *)((longlong)puVar42 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  cVar16 = *(char *)(uVar36 + 0x68);
  puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar47 = puVar34 + 9;
  local_2b8 = puVar42;
  if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
    FUN_140023dd8(local_370,0x50);
    puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar47 = puVar34 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar47;
  puVar34[1] = *(undefined8 *)(uVar36 + 8);
  puVar34[2] = 0;
  *(undefined1 *)(puVar34 + 3) = 3;
  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
  *puVar34 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar34 + 5) = cVar16 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
  puVar34[7] = 0;
  puVar34[8] = uVar36;
  iVar33 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar33 + 1U) {
    FUN_1447568fc(local_358,iVar33);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  local_328 = *(uint *)(param_7 + 4);
  local_32c = 0x1f;
  if (local_328 != 0) {
    for (; local_328 >> local_32c == 0; local_32c = local_32c + -1) {
    }
  }
  if (local_328 == 0) {
    local_32c = 0;
  }
  fVar51 = 0.0;
  if (*(char *)(param_7 + 1) == '\x01') {
    fVar51 = DAT_14c760574;
    if (1.0 <= DAT_14c760574) {
      fVar51 = 1.0;
    }
    if (fVar51 <= 0.0) {
      fVar51 = 0.0;
    }
  }
  local_348 = 1;
  if (DAT_14c76058c != 0) {
    puVar35 = &DAT_14c8735f0;
    if (*(int *)(DAT_14c9ecd08 + 4) == 0) {
      puVar35 = &DAT_14c8738f0;
    }
    if (((puVar35[0x22] & 0x20) != 0) && (local_348 = 1, (DAT_14c874180 >> 0x15 & 1) != 0)) {
      local_348 = DAT_14c760590;
    }
  }
  local_338 = *(int *)(param_7 + 8);
  local_2f8 = *(undefined8 **)(param_7 + 0x20);
  local_2c8 = *(undefined8 *)(param_7 + 0x28);
  local_2d0 = *(undefined8 *)(param_5 + 0xa24);
  local_330 = DAT_14c760594;
  FUN_1400d0708(&uStack_124,
                CONCAT71((int7)((ulonglong)local_2f8 >> 8),(*(int *)(DAT_14c9ecd08 + 4) == 0) << 4)
                | 10);
  FUN_1448a862c(&local_238);
  FUN_14019e00e(&local_118,&local_238,0,1);
  lVar22 = FUN_1448a8484();
  local_334 = 2;
  if (*(byte *)(lVar22 + 0x41) != 3) {
    local_334 = (uint)*(byte *)(lVar22 + 0x41);
  }
  local_308 = (longlong ******)local_118;
  if (local_118 != (longlong *******)0x0) {
    LOCK();
    pppppplVar24 = (longlong ******)(local_118 + 1);
    ppppplVar25 = *pppppplVar24;
    *(uint *)pppppplVar24 = *(uint *)pppppplVar24 - 1;
    UNLOCK();
    if (((ulonglong)ppppplVar25 & 0x3fffffff) == 1) {
      pppppplVar24 = (longlong ******)(local_118 + 1);
      LOCK();
      uVar18 = *(uint *)pppppplVar24;
      *(uint *)pppppplVar24 = *(uint *)pppppplVar24 | 0x40000000;
      UNLOCK();
      if ((uVar18 >> 0x1e & 1) == 0) {
        bVar32 = *(byte *)((longlong)local_118 + 0xd);
        plVar23 = (longlong *)FUN_14001cc68(0x10);
        plVar23[1] = (longlong)local_118;
        plVar40 = DAT_14ca843c0;
        plVar45 = DAT_14ca843c8;
        if ((bVar32 & 2) == 0) {
          do {
            *plVar23 = (longlong)plVar40;
            LOCK();
            bVar48 = plVar40 != DAT_14ca843c0;
            plVar45 = plVar23;
            if (bVar48) {
              plVar40 = DAT_14ca843c0;
              plVar45 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar45;
            UNLOCK();
          } while (bVar48);
        }
        else {
          do {
            *plVar23 = (longlong)plVar45;
            LOCK();
            bVar48 = plVar45 != DAT_14ca843c8;
            plVar40 = plVar23;
            if (bVar48) {
              plVar45 = DAT_14ca843c8;
              plVar40 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar40;
            UNLOCK();
          } while (bVar48);
        }
      }
    }
  }
  puVar1 = local_370;
  local_360 = (longlong *******)*param_3;
  local_2b0 = local_360[0x2703];
  puVar42 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar47 = puVar42 + 0x24;
  if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
    FUN_140023dd8(local_370);
    puVar42 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar47 = puVar42 + 0x24;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar47;
  *puVar42 = &PTR_FUN_14a2660f8;
  puVar42[2] = 0;
  *(undefined4 *)(puVar42 + 3) = 4;
  puVar42[4] = 0;
  *(undefined1 *)(puVar42 + 5) = 1;
  puVar42[6] = 0;
  puVar42[7] = 0;
  puVar42[8] = 0;
  puVar42[9] = 0;
  *(undefined4 *)(puVar42 + 0x1e) = 0;
  *(undefined4 *)((longlong)puVar42 + 0xf4) = 0;
  *(undefined4 *)(puVar42 + 0x1f) = 0;
  *(undefined4 *)((longlong)puVar42 + 0xfc) = 0x3f800000;
  *(undefined4 *)(puVar42 + 0x1c) = 0;
  *(undefined4 *)((longlong)puVar42 + 0xe4) = 0;
  *(undefined4 *)(puVar42 + 0x1d) = 0;
  *(undefined4 *)((longlong)puVar42 + 0xec) = 0x3f800000;
  *(undefined4 *)(puVar42 + 0x22) = 0;
  *(undefined4 *)((longlong)puVar42 + 0x114) = 0;
  *(undefined4 *)(puVar42 + 0x23) = 0;
  *(undefined4 *)((longlong)puVar42 + 0x11c) = 0x3f800000;
  *(undefined4 *)(puVar42 + 0x20) = 0;
  *(undefined4 *)((longlong)puVar42 + 0x104) = 0;
  *(undefined4 *)(puVar42 + 0x21) = 0;
  *(undefined4 *)((longlong)puVar42 + 0x10c) = 0x3f800000;
  local_318 = (longlong *)(param_1 + 0x98);
  iVar33 = *(int *)(param_1 + 0xa0);
  uVar18 = iVar33 + 1;
  *(uint *)(param_1 + 0xa0) = uVar18;
  local_320 = param_3;
  if (*(uint *)(param_1 + 0xa4) < uVar18) {
    FUN_1448cfae8(local_318);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar33 * 8) = puVar42;
  puVar42[2] = param_8[3];
  *(undefined4 *)(puVar42 + 3) = 4;
  uVar3 = *(undefined8 *)(param_6 + 0xe8);
  local_2c0 = puVar34;
  lVar22 = FUN_1449a4512();
  puVar1 = local_370;
  cVar16 = '\x02';
  if (*(char *)(lVar22 + 0x41) != '\x03') {
    cVar16 = *(char *)(lVar22 + 0x41);
  }
  puVar42[4] = uVar3;
  *(char *)(puVar42 + 5) = cVar16;
  cVar16 = *(char *)(uVar39 + 0x68);
  puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar47 = puVar34 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
    FUN_140023dd8(local_370);
    puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar47 = puVar34 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar47;
  puVar34[1] = *(undefined8 *)(uVar39 + 8);
  puVar34[2] = 0;
  *(undefined1 *)(puVar34 + 3) = 2;
  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar34 + 5) = 0;
  *puVar34 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar34 + 6) = cVar16 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar34 + 0x31) = 0;
  puVar34[7] = uVar39;
  iVar33 = *(int *)(param_1 + 0x1a0);
  uVar18 = iVar33 + 1;
  *(uint *)(param_1 + 0x1a0) = uVar18;
  if (*(uint *)(param_1 + 0x1a4) < uVar18) {
    FUN_1447568fc(local_358);
  }
  puVar1 = local_370;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar42[6] = puVar34;
  cVar16 = *(char *)(uVar36 + 0x68);
  puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar47 = puVar34 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
    FUN_140023dd8(local_370);
    puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar47 = puVar34 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar47;
  puVar34[1] = *(undefined8 *)(uVar36 + 8);
  puVar34[2] = 0;
  *(undefined1 *)(puVar34 + 3) = 2;
  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar34 + 5) = 0;
  *puVar34 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar34 + 6) = cVar16 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar34 + 0x31) = 0;
  puVar34[7] = uVar36;
  iVar33 = *(int *)(param_1 + 0x1a0);
  uVar18 = iVar33 + 1;
  *(uint *)(param_1 + 0x1a0) = uVar18;
  if (*(uint *)(param_1 + 0x1a4) < uVar18) {
    FUN_1447568fc(local_358);
  }
  puVar1 = local_370;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar42[7] = puVar34;
  lVar22 = *param_8;
  cVar16 = *(char *)(lVar22 + 0x68);
  puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar47 = puVar34 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
    FUN_140023dd8(local_370);
    puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar47 = puVar34 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar47;
  puVar34[1] = *(undefined8 *)(lVar22 + 8);
  puVar34[2] = 0;
  *(undefined1 *)(puVar34 + 3) = 3;
  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
  *puVar34 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar34 + 5) = cVar16 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
  puVar34[7] = 0;
  puVar34[8] = lVar22;
  iVar33 = *(int *)(param_1 + 0x1a0);
  uVar18 = iVar33 + 1;
  *(uint *)(param_1 + 0x1a0) = uVar18;
  if (*(uint *)(param_1 + 0x1a4) < uVar18) {
    FUN_1447568fc(local_358);
  }
  puVar1 = local_370;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar42[8] = puVar34;
  lVar22 = param_8[1];
  cVar16 = *(char *)(lVar22 + 0x68);
  puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar47 = puVar34 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
    FUN_140023dd8(local_370);
    puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar47 = puVar34 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar47;
  puVar34[1] = *(undefined8 *)(lVar22 + 8);
  puVar34[2] = 0;
  *(undefined1 *)(puVar34 + 3) = 3;
  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
  *puVar34 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar34 + 5) = cVar16 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
  puVar34[7] = 0;
  puVar34[8] = lVar22;
  iVar33 = *(int *)(param_1 + 0x1a0);
  uVar18 = iVar33 + 1;
  *(uint *)(param_1 + 0x1a0) = uVar18;
  if (*(uint *)(param_1 + 0x1a4) < uVar18) {
    FUN_1447568fc(local_358);
  }
  puVar47 = puVar42 + 2;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar42[9] = puVar34;
  *(int *)(puVar42 + 10) = (int)local_350;
  *(int *)((longlong)puVar42 + 0x54) = local_344;
  if (0 < (int)local_350) {
    puVar34 = (undefined8 *)(param_6 + 0x150);
    lVar22 = 0;
    do {
      uVar3 = puVar34[4];
      uVar7 = puVar34[5];
      uVar8 = puVar34[6];
      uVar9 = puVar34[7];
      uVar10 = puVar34[8];
      uVar11 = puVar34[9];
      uVar12 = puVar34[0xb];
      puVar44 = (undefined8 *)((longlong)puVar42 + lVar22 * 4 + 0x90);
      *puVar44 = puVar34[10];
      puVar44[1] = uVar12;
      puVar44 = (undefined8 *)((longlong)puVar42 + lVar22 * 4 + 0x80);
      *puVar44 = uVar10;
      puVar44[1] = uVar11;
      puVar44 = (undefined8 *)((longlong)puVar42 + lVar22 * 4 + 0x70);
      *puVar44 = uVar8;
      puVar44[1] = uVar9;
      puVar44 = (undefined8 *)((longlong)puVar42 + lVar22 * 4 + 0x60);
      *puVar44 = uVar3;
      puVar44[1] = uVar7;
      uVar20 = *(undefined4 *)(puVar34 + 1);
      *(undefined8 *)((longlong)puVar42 + lVar22 + 0xe0) = *puVar34;
      *(undefined4 *)((longlong)puVar42 + lVar22 + 0xe8) = uVar20;
      *(undefined4 *)((longlong)puVar42 + lVar22 + 0xec) = 0x3f800000;
      uVar20 = *(undefined4 *)((longlong)puVar34 + 0x14);
      *(undefined8 *)((longlong)puVar42 + lVar22 + 0x100) = *(undefined8 *)((longlong)puVar34 + 0xc)
      ;
      *(undefined4 *)((longlong)puVar42 + lVar22 + 0x108) = uVar20;
      *(undefined4 *)((longlong)puVar42 + lVar22 + 0x10c) = 0x3f800000;
      lVar22 = lVar22 + 0x10;
      puVar34 = puVar34 + 0x16;
    } while ((longlong)local_350 << 4 != lVar22);
  }
  FUN_1415772f0();
  FUN_1415772f0();
  FUN_1448e935e(local_2b0,&local_238,&DAT_14c9f29d8,0);
  FUN_1415772f0();
  puVar14 = puStack_230;
  uVar3 = local_238;
  local_118 = (longlong *******)0x0;
  uStack_108 = (longlong *******)0x0;
  lVar22 = param_8[3];
  local_278 = lVar22;
  FUN_141577412();
  local_238 = &local_278;
  puStack_230 = local_270;
  FUN_1448f70da(uVar3,&DAT_14c9f6040,puVar47,&local_238);
  puStack_230 = (undefined1 *)uVar3;
  local_228 = puVar14;
  local_218 = CONCAT44(local_218._4_4_,0xc);
  local_208 = local_118;
  local_1f8 = (longlong *)uStack_108;
  uStack_108 = (longlong *******)0x0;
  uStack_1d0 = uStack_e0;
  uStack_1cc = uStack_dc;
  if (local_118 != (longlong *******)0x0) {
    local_118 = (longlong *******)0x0;
  }
  local_238 = puVar47;
  local_220 = lVar22;
  FUN_141577412();
  FUN_140069376(param_1);
  puVar1 = local_370;
  local_388 = (longlong *******)&local_238;
  local_368 = param_1;
  if ((param_9 & 4) == 0) {
    uVar37 = param_9;
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == 1)) &&
       (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_9 & 2) != 0)))) {
      uVar37 = param_9 & 0xfff9 | 4;
    }
    puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar42 = puVar34 + 0x46;
    if (*(undefined8 **)(param_1 + 0x78) < puVar42) {
      FUN_140023dd8(local_370,0x240);
      puVar34 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar42 = puVar34 + 0x46;
    }
    *local_370 = (ulonglong)puVar42;
    FUN_1417694de(puVar34,&local_278,puVar47,uVar37);
    param_1 = local_368;
  }
  else {
    if (((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) ||
       ((DAT_14ca84e6a != 1 || ((DAT_14ca84e99 & 1) != 0)))) {
      uVar37 = param_9 & 0xfff9 | 2;
    }
    else {
      uVar37 = param_9;
      if (DAT_14c760ddc == 2 && (param_9 & 2) != 0) {
        uVar37 = param_9 & 0xfffd;
      }
    }
    puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar42 = puVar34 + 0x48;
    if (*(undefined8 **)(param_1 + 0x78) < puVar42) {
      FUN_140023dd8(local_370,0x250);
      puVar34 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar42 = puVar34 + 0x48;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar42;
    uVar20 = *(undefined4 *)(param_1 + 0x660);
    FUN_1417694de(puVar34,&local_278,puVar47,uVar37);
    *puVar34 = &PTR_FUN_14a266100;
    *(undefined4 *)(puVar34 + 0x46) = uVar20;
  }
  puVar47 = local_2b8;
  local_2d8 = param_1 + 0x168;
  iVar33 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar33 + 1U) {
    FUN_14470e57a(local_2d8,iVar33);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar33 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar34);
  if (local_208 != (longlong *******)0x0) {
    plVar40 = local_1f8;
    if (local_1f8 == (longlong *)0x0) {
      plVar40 = local_1e8;
    }
    (**(code **)(*plVar40 + 0x10))();
  }
  if (local_118 != (longlong *******)0x0) {
    ppppppplVar29 = uStack_108;
    if (uStack_108 == (longlong *******)0x0) {
      ppppppplVar29 = (longlong *******)&local_f8;
    }
    (*(code *)(*ppppppplVar29)[2])();
  }
  puVar1 = local_370;
  uVar18 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar18 = DAT_14ca84e48;
  }
  uVar6 = (int)local_350 * 5;
  puStack_230 = (undefined1 *)CONCAT44(puStack_230._4_4_,0x4189);
  uVar27 = DAT_14ca84e48;
  if (uVar6 < DAT_14ca84e48) {
    uVar27 = uVar6;
  }
  local_228 = (undefined *)0x0;
  local_238 = (longlong *)CONCAT44(uVar27 + (uVar27 == 0),uVar18 + (uVar18 == 0));
  ppppplVar43 = (longlong *****)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  ppppplVar25 = ppppplVar43 + 0x2a;
  if (*(longlong ******)(param_1 + 0x78) < ppppplVar25) {
    FUN_140023dd8(local_370,0x160);
    ppppplVar43 = (longlong *****)(*puVar1 + 0xf & 0xfffffffffffffff0);
    ppppplVar25 = ppppplVar43 + 0x2a;
  }
  *(longlong ******)(param_1 + 0x70) = ppppplVar25;
  FUN_1456bd266(ppppplVar43,L"Lumen.RadiosityIndirectArgs",&local_238,0);
  iVar33 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar33 + 1U) {
    FUN_144737178(local_300,iVar33);
  }
  puVar1 = local_370;
  *(longlong ******)(*(longlong *)(param_1 + 0x188) + (longlong)iVar33 * 8) = ppppplVar43;
  *(int *)((longlong)ppppplVar43 + 0x7c) = *(int *)(param_1 + 400) + -1;
  puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar42 = puVar34 + 0x16;
  if (*(undefined8 **)(param_1 + 0x78) < puVar42) {
    FUN_140023dd8(local_370,0xc0);
    puVar34 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar42 = puVar34 + 0x16;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar42;
  *puVar34 = &PTR_FUN_14a266138;
  puVar34[2] = 0;
  puVar34[0x12] = 0;
  puVar34[4] = 0;
  puVar34[5] = 0;
  puVar34[6] = 0;
  puVar34[7] = 0;
  *(undefined1 *)(puVar34 + 0x13) = 1;
  iVar33 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar33 + 1U) {
    FUN_1448cfae8(local_318,iVar33);
  }
  puVar1 = local_370;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar33 * 8) = puVar34;
  cVar16 = *(char *)(ppppplVar43 + 0xd);
  puVar44 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar42 = puVar44 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar42) {
    FUN_140023dd8(local_370,0x48);
    puVar44 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar42 = puVar44 + 8;
  }
  iVar38 = local_338 * local_338;
  *(undefined8 **)(param_1 + 0x70) = puVar42;
  puVar44[1] = ppppplVar43[1];
  puVar44[2] = 0;
  *(undefined1 *)(puVar44 + 3) = 2;
  *(undefined8 *)((longlong)puVar44 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar44 + 5) = 0;
  *puVar44 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar44 + 6) = cVar16 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar44 + 0x31) = 0;
  puVar44[7] = ppppplVar43;
  iVar33 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar33 + 1U;
  local_300 = ppppplVar43;
  if (*(uint *)(param_1 + 0x1a4) < iVar33 + 1U) {
    FUN_1447568fc(local_358,iVar33);
  }
  ppppppplVar29 = local_360;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = puVar44;
  *(int *)((longlong)puVar44 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar34[2] = puVar44;
  puVar34[4] = puVar47;
  puVar34[5] = local_2c0;
  puVar34[6] = local_2f8;
  puVar34[7] = local_2c8;
  puVar34[8] = local_2d0;
  *(uint *)(puVar34 + 9) = local_328;
  *(int *)((longlong)puVar34 + 0x4c) = local_32c;
  *(undefined4 *)(puVar34 + 10) = local_324;
  *(int *)((longlong)puVar34 + 0x54) = local_338;
  *(int *)(puVar34 + 0xb) = iVar38;
  *(float *)((longlong)puVar34 + 0x5c) = fVar51;
  *(undefined4 *)(puVar34 + 0xc) = local_330;
  *(undefined4 *)((longlong)puVar34 + 100) = local_348;
  *(int *)(puVar34 + 0xd) = (int)local_350;
  *(int *)((longlong)puVar34 + 0x6c) = (int)local_350;
  *(int *)(puVar34 + 0xe) = local_344;
  *(undefined4 *)((longlong)puVar34 + 0x74) = local_130;
  *(undefined4 *)(puVar34 + 0xf) = uStack_12c;
  *(undefined4 *)((longlong)puVar34 + 0x7c) = uStack_128;
  *(undefined4 *)(puVar34 + 0x10) = uStack_124;
  *(undefined8 *)((longlong)puVar34 + 0x84) = local_120;
  puVar34[0x12] = local_308;
  *(char *)(puVar34 + 0x13) = (char)local_334;
  *(uint *)((longlong)puVar34 + 0x9c) = CONCAT31(uStack_27b,local_27f._3_1_);
  puVar47 = puVar34 + 2;
  *(undefined4 *)((longlong)puVar34 + 0x99) = local_27f;
  local_30c = iVar38;
  cVar16 = FUN_141767b49(local_360[1]);
  lVar22 = DAT_14c9eccf0;
  iVar33 = 1;
  if (cVar16 != '\0') {
    uVar37 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(ppppppplVar29 + 0x612) * 2);
    if ((DAT_14ca84f10 == '\x01') && (DAT_14ca84f14 < 0x21)) {
      iVar33 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if ((iVar33 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar33 == 2)))) {
        uVar30 = 0;
      }
      else if (iVar33 == 1) {
        DVar21 = FUN_140ad26c0();
        DVar19 = GetCurrentThreadId();
        uVar30 = (ulonglong)(DVar21 != DVar19);
      }
      else {
        uVar30 = 1;
      }
      iVar33 = 0x20;
      if (*(int *)(lVar22 + uVar30 * 4) != 0) goto LAB_142d37387;
    }
    iVar33 = ((uint)(&DAT_14ca814d8)[(ulonglong)uVar37 * 0xf] >> 0x14 & 0x20) + 0x20;
  }
LAB_142d37387:
  *(int *)(puVar34 + 0x14) = iVar33;
  FUN_14152afec();
  FUN_14152afec();
  FUN_1448e935e(local_2b0,&local_238,&DAT_14c9f2b00,0);
  FUN_14152afec();
  puVar14 = puStack_230;
  uVar3 = local_238;
  FUN_14152b10e();
  local_238 = (longlong *)0x0;
  puStack_230 = (undefined1 *)0x0;
  FUN_1448f70da(uVar3,&DAT_14c9f60c8,puVar47,&local_238);
  FUN_140069376(param_1);
  puVar1 = local_370;
  if ((param_9 & 4) == 0) {
    uVar37 = param_9;
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == 1)) &&
       (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_9 & 2) != 0)))) {
      uVar37 = param_9 & 0xfff9 | 4;
    }
    puVar34 = (undefined8 *)(*(longlong *)(local_368 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar42 = puVar34 + 0x3d;
    if (*(undefined8 **)(local_368 + 0x78) < puVar42) {
      FUN_140023dd8(local_370,0x1f0);
      puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar42 = puVar34 + 0x3d;
    }
    *local_370 = (ulonglong)puVar42;
    puStack_230 = (undefined1 *)DAT_14c9f6110;
    if (DAT_14c9f6110 != 0) {
      LOCK();
      *(int *)(DAT_14c9f6110 + 8) = *(int *)(DAT_14c9f6110 + 8) + 1;
      UNLOCK();
    }
    local_228 = &DAT_14c9f60c8;
    local_388 = (longlong *******)CONCAT71(local_388._1_7_,2);
    local_238 = puVar47;
    FUN_140068f1a(puVar34,&local_118,&local_238,uVar37);
    *puVar34 = &PTR_FUN_14a266160;
    puVar34[0x37] = &DAT_14c9f60c8;
    puVar34[0x38] = puVar47;
    puVar34[0x39] = uVar3;
    puVar34[0x3a] = puVar14;
    puVar34[0x3b] = &DAT_100000001;
    *(undefined4 *)(puVar34 + 0x3c) = 1;
    param_1 = local_368;
  }
  else {
    if (((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) ||
       ((DAT_14ca84e6a != 1 || ((DAT_14ca84e99 & 1) != 0)))) {
      uVar37 = param_9 & 0xfff9 | 2;
    }
    else {
      uVar37 = param_9;
      if (DAT_14c760ddc == 2 && (param_9 & 2) != 0) {
        uVar37 = param_9 & 0xfffd;
      }
    }
    puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar42 = puVar34 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar42) {
      FUN_140023dd8(local_370,0x1f8);
      puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar42 = puVar34 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar42;
    uVar20 = *(undefined4 *)(param_1 + 0x660);
    puStack_230 = (undefined1 *)DAT_14c9f6110;
    if (DAT_14c9f6110 != 0) {
      LOCK();
      *(int *)(DAT_14c9f6110 + 8) = *(int *)(DAT_14c9f6110 + 8) + 1;
      UNLOCK();
    }
    local_228 = &DAT_14c9f60c8;
    local_388 = (longlong *******)CONCAT71(local_388._1_7_,2);
    local_238 = puVar47;
    FUN_140068f1a(puVar34,&local_118,&local_238,uVar37);
    puVar34[0x37] = &DAT_14c9f60c8;
    puVar34[0x38] = puVar47;
    puVar34[0x39] = uVar3;
    puVar34[0x3a] = puVar14;
    puVar34[0x3b] = &DAT_100000001;
    *(undefined4 *)(puVar34 + 0x3c) = 1;
    *puVar34 = &PTR_FUN_14a266140;
    *(undefined4 *)(puVar34 + 0x3d) = uVar20;
  }
  ppppppplVar29 = local_360;
  iVar33 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar33 + 1U) {
    FUN_14470e57a(local_2d8,iVar33);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar33 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar34);
  local_238 = (longlong *)0x0;
  puStack_230 = (undefined1 *)CONCAT71(puStack_230._1_7_,1);
  local_228 = (undefined *)0x0;
  local_220 = CONCAT71(local_220._1_7_,1);
  local_218 = 0;
  local_210 = 1;
  local_208 = (longlong *******)0x0;
  local_200 = 1;
  local_1d8 = 0;
  uStack_1d0 = CONCAT31(uStack_1d0._1_3_,1);
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  pppppplVar24 = ppppppplVar29[0x275b];
  local_380 = &local_238;
  if (pppppplVar24 == (longlong ******)0x0) {
    uVar18 = *(uint *)(ppppppplVar29 + 0x3bc);
    if (uVar18 == 0) {
      iVar33 = 0x20;
    }
    else {
      iVar33 = 0;
      if (uVar18 != 0) {
        for (; (uVar18 >> iVar33 & 1) == 0; iVar33 = iVar33 + 1) {
        }
      }
    }
    if (ppppppplVar29[0x621] == (longlong ******)0x0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined4 *)((longlong)ppppppplVar29[0x621] + 0x24);
    }
    pppppplVar24 = (longlong ******)FUN_140c6b718(local_340,uVar20,iVar33);
  }
  local_388 = (longlong *******)((ulonglong)local_388 & 0xffffffffffffff00);
  FUN_142db26c6(param_1,ppppppplVar29,pppppplVar24,param_6);
  pppppplVar24 = ppppppplVar29[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar40 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
    if (plVar40 == (longlong *)0x0) {
      DAT_14ca97068 = 0;
    }
    else {
      DAT_14ca97068 = (**(code **)(*plVar40 + 0x68))(plVar40);
    }
    _Init_thread_footer(&DAT_14ca97070);
    param_1 = local_368;
  }
  lVar22 = DAT_14ca97068;
  bVar48 = true;
  cVar16 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    iVar33 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (iVar33 == 0x40000002) {
      cVar16 = '\x02';
      uVar30 = 0;
    }
    else {
      bVar48 = true;
      cVar16 = '\x02';
      if ((DAT_14c86a9f8 == '\x01') && (iVar33 != 2)) {
        if (iVar33 == 1) {
          DVar21 = FUN_140ad26c0();
          DVar19 = GetCurrentThreadId();
          bVar48 = DVar21 == DVar19;
          cVar16 = DAT_14ca96da8;
        }
        else {
          bVar48 = false;
        }
      }
      uVar30 = (ulonglong)(bVar48 ^ 1);
    }
    bVar48 = *(int *)(lVar22 + uVar30 * 4) != 0;
    param_1 = local_368;
  }
  if ((bVar48) && (cVar16 != '\0')) {
    ppppplVar25 = (longlong *****)&DAT_14c760db4;
    if (pppppplVar24[8] != (longlong *****)0x0) {
      ppppplVar25 = pppppplVar24[8] + 1;
    }
    cVar16 = FUN_144785782(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)ppppplVar25 * 2));
    lVar22 = DAT_14c9ed2f0;
    if ((cVar16 != '\0') &&
       ((DAT_14ca84efa != '\0' || ((DAT_14ca84ef5 == '\x01' && ((DAT_14ca84ef7 & 1) != 0)))))) {
      iVar33 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar33 == 0x40000002) {
        uVar30 = 0;
      }
      else {
        bVar48 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar33 != 2)) {
          if (iVar33 == 1) {
            DVar21 = FUN_140ad26c0();
            DVar19 = GetCurrentThreadId();
            bVar48 = DVar21 == DVar19;
          }
          else {
            bVar48 = false;
          }
        }
        uVar30 = (ulonglong)(bVar48 ^ 1);
      }
      ppppppplVar29 = local_360;
      param_1 = local_368;
      if ((*(int *)(lVar22 + uVar30 * 4) != 0) &&
         ((((*(int *)(pppppplVar24 + 2) == 1 ||
            ((*(int *)(pppppplVar24 + 2) == 2 &&
             (cVar16 = FUN_144b2acae(*pppppplVar24[1]), cVar16 != '\0')))) &&
           (pppplVar4 = *pppppplVar24[1], *(char *)(pppplVar4 + 0x613) == '\x01')) &&
          (((*(char *)(pppplVar4 + 0x47d) != '\x01' ||
            (*(char *)((longlong)pppplVar4 + 0x23ea) == '\x01')) &&
           (*(int *)(DAT_14c9f28e8 + 4) != 0)))))) {
        uVar17 = FUN_141767b49(ppppppplVar29[1]);
        puVar1 = local_370;
        local_340 = (longlong *)CONCAT71(local_340._1_7_,uVar17);
        lVar22 = *local_320;
        puVar42 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar47 = puVar42 + 0x58;
        if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
          FUN_140023dd8(local_370,0x2d0);
          puVar42 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar47 = puVar42 + 0x58;
        }
        lVar26 = local_368;
        *(undefined8 **)(local_368 + 0x70) = puVar47;
        *puVar42 = &PTR_FUN_14a266178;
        local_360 = (longlong *******)(puVar42 + 2);
        FUN_1471fd1d2();
        puVar42[0x40] = 0;
        *(undefined4 *)(puVar42 + 0x41) = 0x14;
        puVar42[0x50] = 0;
        puVar42[0x42] = 0;
        puVar42[0x43] = 0;
        puVar42[0x44] = 0;
        puVar42[0x45] = 0;
        *(undefined1 *)(puVar42 + 0x51) = 1;
        puVar42[0x55] = 0;
        puVar42[0x56] = 0;
        iVar33 = *(int *)(lVar26 + 0xa0);
        *(uint *)(lVar26 + 0xa0) = iVar33 + 1U;
        if (*(uint *)(lVar26 + 0xa4) < iVar33 + 1U) {
          FUN_1448cfae8(local_318,iVar33);
        }
        lVar13 = local_368;
        *(undefined8 **)(*(longlong *)(local_368 + 0x98) + (longlong)iVar33 * 8) = puVar42;
        FUN_14494b062(&local_118,local_368,*(undefined8 *)(*(longlong *)(lVar22 + 8) + 0x348));
        local_388 = local_360;
        FUN_1471dcd84(lVar13,&local_118,lVar22,&local_238);
        puVar1 = local_370;
        puVar42[0x40] = local_300;
        *(undefined4 *)(puVar42 + 0x41) = 0x14;
        puVar42[0x42] = local_2b8;
        puVar42[0x43] = local_2c0;
        puVar42[0x44] = local_2f8;
        puVar42[0x45] = local_2c8;
        puVar42[0x46] = local_2d0;
        *(uint *)(puVar42 + 0x47) = local_328;
        *(int *)((longlong)puVar42 + 0x23c) = local_32c;
        *(undefined4 *)(puVar42 + 0x48) = local_324;
        *(int *)((longlong)puVar42 + 0x244) = local_338;
        *(int *)(puVar42 + 0x49) = local_30c;
        *(float *)((longlong)puVar42 + 0x24c) = fVar51;
        *(undefined4 *)(puVar42 + 0x4a) = local_330;
        *(undefined4 *)((longlong)puVar42 + 0x254) = local_348;
        *(int *)(puVar42 + 0x4b) = (int)local_350;
        *(int *)(puVar42 + 0x4c) = local_344;
        *(undefined4 *)((longlong)puVar42 + 0x264) = local_130;
        *(undefined4 *)(puVar42 + 0x4d) = uStack_12c;
        *(undefined4 *)((longlong)puVar42 + 0x26c) = uStack_128;
        *(undefined4 *)(puVar42 + 0x4e) = uStack_124;
        *(undefined8 *)((longlong)puVar42 + 0x274) = local_120;
        puVar42[0x50] = local_308;
        *(char *)(puVar42 + 0x51) = (char)local_334;
        *(uint *)((longlong)puVar42 + 0x28c) = CONCAT31(uStack_27b,local_27f._3_1_);
        *(undefined4 *)((longlong)puVar42 + 0x289) = local_27f;
        *(undefined4 *)((longlong)puVar42 + 0x25c) = 0;
        lVar26 = *(longlong *)(param_7 + 0x20);
        uVar17 = *(undefined1 *)(lVar26 + 0x94);
        puVar34 = (undefined8 *)(*(longlong *)(lVar13 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar47 = puVar34 + 9;
        if (*(undefined8 **)(lVar13 + 0x78) < puVar47) {
          FUN_140023dd8(local_370,0x50);
          puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar47 = puVar34 + 9;
        }
        *(undefined8 **)(local_368 + 0x70) = puVar47;
        puVar34[1] = *(undefined8 *)(lVar26 + 8);
        puVar34[2] = 0;
        *(undefined1 *)(puVar34 + 3) = 0;
        *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar34 + 5) = 0;
        *puVar34 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar34 + 6) = uVar17;
        *(undefined1 *)(puVar34 + 7) = 0;
        *(undefined4 *)((longlong)puVar34 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar34 + 0x35) = 0;
        puVar34[8] = lVar26;
        iVar33 = *(int *)(local_368 + 0x1a0);
        *(uint *)(local_368 + 0x1a0) = iVar33 + 1U;
        if (*(uint *)(local_368 + 0x1a4) < iVar33 + 1U) {
          FUN_1447568fc(local_358,iVar33);
        }
        puVar1 = local_370;
        *(undefined8 **)(*(longlong *)(local_368 + 0x198) + (longlong)iVar33 * 8) = puVar34;
        *(int *)((longlong)puVar34 + 0x1c) = *(int *)(local_368 + 0x1a0) + -1;
        puVar42[0x55] = puVar34;
        lVar26 = *(longlong *)(param_7 + 0x28);
        uVar17 = *(undefined1 *)(lVar26 + 0x94);
        puVar34 = (undefined8 *)(*(longlong *)(local_368 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar47 = puVar34 + 9;
        if (*(undefined8 **)(local_368 + 0x78) < puVar47) {
          FUN_140023dd8(local_370,0x50);
          puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar47 = puVar34 + 9;
        }
        *(undefined8 **)(local_368 + 0x70) = puVar47;
        puVar34[1] = *(undefined8 *)(lVar26 + 8);
        puVar34[2] = 0;
        *(undefined1 *)(puVar34 + 3) = 0;
        *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar34 + 5) = 0;
        *puVar34 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar34 + 6) = uVar17;
        *(undefined1 *)(puVar34 + 7) = 0;
        *(undefined4 *)((longlong)puVar34 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar34 + 0x35) = 0;
        puVar34[8] = lVar26;
        iVar33 = *(int *)(local_368 + 0x1a0);
        *(uint *)(local_368 + 0x1a0) = iVar33 + 1U;
        if (*(uint *)(local_368 + 0x1a4) < iVar33 + 1U) {
          FUN_1447568fc(local_358,iVar33);
        }
        *(undefined8 **)(*(longlong *)(local_368 + 0x198) + (longlong)iVar33 * 8) = puVar34;
        *(int *)((longlong)puVar34 + 0x1c) = *(int *)(local_368 + 0x1a0) + -1;
        puVar42[0x56] = puVar34;
        iVar33 = DAT_14ca84d8c << 6;
        *(int *)(puVar42 + 0x52) = iVar33;
        fVar50 = DAT_14c760588;
        if (1000.0 <= DAT_14c760588) {
          fVar50 = 1000.0;
        }
        if (fVar50 <= 0.0) {
          fVar50 = 0.0;
        }
        *(float *)((longlong)puVar42 + 0x29c) = fVar50;
        dVar5 = (double)*(float *)(DAT_14c9ed7a0 + 4);
        if (100.0 <= dVar5) {
          dVar5 = 100.0;
        }
        if (dVar5 <= 0.001) {
          dVar5 = 0.001;
        }
        *(float *)(puVar42 + 0x54) = (float)dVar5;
        fVar50 = DAT_14c76057c;
        if (1e+06 <= DAT_14c76057c) {
          fVar50 = 1e+06;
        }
        if (fVar50 <= 0.0) {
          fVar50 = 0.0;
        }
        *(float *)((longlong)puVar42 + 0x2a4) = fVar50;
        fVar50 = DAT_14c760584;
        if (1000.0 <= DAT_14c760584) {
          fVar50 = 1000.0;
        }
        if (fVar50 <= 0.0) {
          fVar50 = 0.0;
        }
        *(float *)((longlong)puVar42 + 0x294) = fVar50;
        fVar50 = *(float *)(lVar22 + 0x291c) * _DAT_14c7604b4;
        if (1048576.0 <= fVar50) {
          fVar50 = 1048576.0;
        }
        if (fVar50 <= 0.01) {
          fVar50 = 0.01;
        }
        *(float *)(puVar42 + 0x53) = fVar50;
        iVar38 = *(int *)(DAT_14c9ed3e0 + 4);
        if (iVar38 == 3) {
          cVar16 = DAT_14ca84efc + '\x01';
        }
        else {
          iVar28 = 2;
          if (iVar38 < 2) {
            iVar28 = iVar38;
          }
          cVar16 = '\0';
          if (0 < iVar28) {
            cVar16 = (char)iVar28;
          }
        }
        bVar48 = *(int *)(DAT_14c9ed3f8 + 4) != 0;
        FUN_140002266(&local_118,L"%ux%u",iVar33,1);
        local_380 = (undefined8 *)puVar42[0x40];
        if ((char)local_340 == '\0') {
          local_289 = 0;
          local_388 = local_360;
          local_287 = cVar16;
          local_286 = bVar48;
          FUN_1471ed96a(local_368,&local_278,lVar22);
        }
        else {
          local_284 = 0;
          local_378 = param_9;
          local_388 = local_360;
          local_282 = cVar16;
          local_281 = bVar48;
          FUN_1471ed838(local_368,&local_278,lVar22);
        }
        param_1 = local_368;
        if (local_118 != (longlong *******)0x0) {
          FUN_1400020a8();
          param_1 = local_368;
        }
        goto LAB_142d38e09;
      }
    }
  }
  puVar1 = local_370;
  lVar22 = *(longlong *)(param_7 + 0x20);
  uVar17 = *(undefined1 *)(lVar22 + 0x94);
  puVar42 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar47 = puVar42 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
    FUN_140023dd8(local_370,0x50);
    puVar42 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar47 = puVar42 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar47;
  puVar42[1] = *(undefined8 *)(lVar22 + 8);
  puVar42[2] = 0;
  *(undefined1 *)(puVar42 + 3) = 0;
  *(undefined8 *)((longlong)puVar42 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar42 + 5) = 1;
  *puVar42 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar42 + 6) = uVar17;
  *(undefined1 *)(puVar42 + 7) = 0;
  *(undefined4 *)((longlong)puVar42 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar42 + 0x35) = 0;
  puVar42[8] = lVar22;
  iVar33 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar33 + 1U) {
    FUN_1447568fc(local_358,iVar33);
  }
  puVar1 = local_370;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = puVar42;
  *(int *)((longlong)puVar42 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  lVar22 = *(longlong *)(param_7 + 0x28);
  uVar17 = *(undefined1 *)(lVar22 + 0x94);
  plVar45 = (longlong *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  plVar40 = plVar45 + 9;
  if (*(longlong **)(param_1 + 0x78) < plVar40) {
    FUN_140023dd8(local_370,0x50);
    plVar45 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
    plVar40 = plVar45 + 9;
  }
  *(longlong **)(param_1 + 0x70) = plVar40;
  plVar45[1] = *(longlong *)(lVar22 + 8);
  plVar45[2] = 0;
  *(undefined1 *)(plVar45 + 3) = 0;
  *(undefined8 *)((longlong)plVar45 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(plVar45 + 5) = 1;
  *plVar45 = (longlong)&PTR_FUN_14a1fb948;
  *(undefined1 *)(plVar45 + 6) = uVar17;
  *(undefined1 *)(plVar45 + 7) = 0;
  *(undefined4 *)((longlong)plVar45 + 0x31) = 0;
  *(undefined2 *)((longlong)plVar45 + 0x35) = 0;
  plVar45[8] = lVar22;
  iVar33 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar33 + 1U) {
    FUN_1447568fc(local_358,iVar33);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = plVar45;
  *(int *)((longlong)plVar45 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  local_320 = plVar45;
  if (0 < (int)local_350) {
    piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    local_2f0 = (undefined8 *)(CONCAT44(local_2f0._4_4_,(uint)param_9) & 0xffffffff0000fffd);
    uVar18 = param_9 & 0xfffffff9;
    local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,uVar18 + 2);
    local_2a8 = (ulonglong)(uVar18 | 4);
    puVar41 = (undefined4 *)(param_6 + 0x1b8);
    local_360 = (longlong *******)((ulonglong)local_360 & 0xffffffff00000000);
    plVar40 = (longlong *)0x0;
    local_2e0 = puVar42;
    do {
      puVar1 = local_370;
      puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar47 = puVar34 + 0x40;
      if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
        FUN_140023dd8(local_370,0x210);
        puVar34 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar47 = puVar34 + 0x40;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar47;
      *puVar34 = &PTR_FUN_14a266180;
      puVar34[2] = 0;
      *(undefined4 *)(puVar34 + 3) = 4;
      puVar34[0x12] = 0;
      puVar34[4] = 0;
      puVar34[5] = 0;
      puVar34[6] = 0;
      puVar34[7] = 0;
      *(undefined1 *)(puVar34 + 0x13) = 1;
      puVar34[0x14] = 0;
      *(undefined1 *)(puVar34 + 0x15) = 1;
      puVar34[0x16] = 0;
      *(undefined1 *)(puVar34 + 0x17) = 1;
      puVar34[0x18] = 0;
      *(undefined1 *)(puVar34 + 0x19) = 1;
      puVar34[0x1a] = 0;
      *(undefined1 *)(puVar34 + 0x1b) = 1;
      puVar34[0x20] = 0;
      *(undefined1 *)(puVar34 + 0x21) = 1;
      puVar34[0x22] = 0;
      puVar34[0x23] = 0;
      puVar34[0x24] = 0;
      puVar34[0x25] = 0;
      puVar34[0x31] = 0;
      puVar34[0x32] = 0;
      puVar34[0x2f] = 0;
      puVar34[0x30] = 0;
      puVar34[0x2d] = 0;
      puVar34[0x2e] = 0;
      puVar34[0x2b] = 0;
      puVar34[0x2c] = 0;
      puVar34[0x29] = 0;
      puVar34[0x2a] = 0;
      puVar34[0x3d] = 0;
      puVar34[0x3e] = 0;
      iVar33 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar33 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar33 + 1U) {
        FUN_1448cfae8(local_318,iVar33);
      }
      *(undefined8 **)(*local_318 + (longlong)iVar33 * 8) = puVar34;
      puVar34[2] = local_300;
      *(undefined4 *)(puVar34 + 3) = 4;
      puVar34[4] = local_2b8;
      puVar34[5] = local_2c0;
      puVar34[6] = local_2f8;
      puVar34[7] = local_2c8;
      puVar34[8] = local_2d0;
      *(uint *)(puVar34 + 9) = local_328;
      *(int *)((longlong)puVar34 + 0x4c) = local_32c;
      *(undefined4 *)(puVar34 + 10) = local_324;
      *(int *)((longlong)puVar34 + 0x54) = local_338;
      *(int *)(puVar34 + 0xb) = local_30c;
      *(float *)((longlong)puVar34 + 0x5c) = fVar51;
      *(undefined4 *)(puVar34 + 0xc) = local_330;
      *(undefined4 *)((longlong)puVar34 + 100) = local_348;
      *(int *)(puVar34 + 0xd) = (int)local_350;
      *(int *)(puVar34 + 0xe) = local_344;
      *(ulonglong *)((longlong)puVar34 + 0x74) = CONCAT44(uStack_12c,local_130);
      *(ulonglong *)((longlong)puVar34 + 0x7c) = CONCAT44(uStack_124,uStack_128);
      *(undefined8 *)((longlong)puVar34 + 0x84) = local_120;
      puVar34[0x12] = local_308;
      *(char *)(puVar34 + 0x13) = (char)local_334;
      *(uint *)((longlong)puVar34 + 0x9c) = CONCAT31(uStack_27b,local_27f._3_1_);
      *(undefined4 *)((longlong)puVar34 + 0x99) = local_27f;
      *(int *)((longlong)puVar34 + 0x6c) = (int)plVar40;
      puVar34[0x3d] = puVar42;
      puVar34[0x3e] = local_320;
      memcpy(puVar34 + 0x14,&local_238,0x100);
      FUN_14018bbb0(*puVar41,puVar41[-2],puVar34 + 0x34);
      puVar34[0x35] = 0;
      *(undefined4 *)(puVar34 + 0x38) = 0x40a00000;
      fVar50 = DAT_14c760580;
      if (1000.0 <= DAT_14c760580) {
        fVar50 = 1000.0;
      }
      if (fVar50 <= 0.0) {
        fVar50 = 0.0;
      }
      *(float *)((longlong)puVar34 + 0x1b4) = fVar50;
      *(undefined4 *)(puVar34 + 0x37) = *puVar41;
      fVar50 = DAT_14c76057c;
      if (1e+06 <= DAT_14c76057c) {
        fVar50 = 1e+06;
      }
      if (fVar50 <= 0.0) {
        fVar50 = 0.0;
      }
      *(float *)(puVar34 + 0x3c) = fVar50;
      lVar22 = DAT_14c9eccf0;
      iVar33 = 0;
      if (DAT_14ca84f10 == '\x01') {
        bVar48 = false;
        if (DAT_14ca84f14 < 0x21) {
          iVar38 = *piVar2;
          if (((iVar38 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar38 == 2)) {
            uVar30 = 0;
          }
          else if (iVar38 == 1) {
            DVar21 = FUN_140ad26c0();
            DVar19 = GetCurrentThreadId();
            uVar30 = (ulonglong)(DVar21 != DVar19);
          }
          else {
            uVar30 = 1;
          }
          bVar48 = *(int *)(lVar22 + uVar30 * 4) != 0;
        }
      }
      else {
        bVar48 = false;
      }
      uVar18 = *(uint *)(*(longlong *)(puVar41 + -0x26) + 0x60);
      bVar49 = DAT_14c9cfd58 != 0;
      FUN_14157b24a();
      FUN_1448e935e(local_2b0,&local_118,&DAT_14c9f2c28,
                    (uVar18 >> 0x11 & 2 | (uint)bVar48) +
                    (uint)(bVar49 & (byte)(uVar18 >> 0x12)) * 4);
      FUN_14157b24a();
      ppppppplVar15 = local_110;
      ppppppplVar29 = local_118;
      lVar22 = DAT_14c9eccf0;
      local_278 = 0;
      local_268 = (longlong *)0x0;
      if ((DAT_14ca84f10 == '\x01') && (DAT_14ca84f14 < 0x21)) {
        iVar33 = *piVar2;
        if ((iVar33 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar33 == 2)))) {
          uVar30 = 0;
        }
        else if (iVar33 == 1) {
          uVar20 = FUN_140ad26c0();
          local_340 = (longlong *)CONCAT44(local_340._4_4_,uVar20);
          DVar21 = GetCurrentThreadId();
          uVar30 = (ulonglong)((DWORD)local_340 != DVar21);
        }
        else {
          uVar30 = 1;
        }
        iVar33 = 0;
        if (*(int *)(lVar22 + uVar30 * 4) != 0) {
          iVar33 = 0xc;
        }
      }
      ppppplVar25 = local_300;
      ppppppplVar46 = (longlong *******)(puVar34 + 2);
      iVar33 = iVar33 + (int)local_360;
      local_a8 = local_300;
      local_340 = plVar40;
      FUN_14157b36c();
      local_118 = (longlong *******)&local_a8;
      local_110 = (longlong *******)local_a0;
      FUN_1448f70da(ppppppplVar29,&DAT_14c9f61d8,ppppppplVar46,&local_118);
      local_110 = ppppppplVar29;
      uStack_108 = ppppppplVar15;
      local_100 = ppppplVar25;
      local_e8 = local_278;
      local_d8 = local_268;
      local_268 = (longlong *)0x0;
      local_b8 = local_248;
      uStack_b4 = uStack_244;
      uStack_b0 = uStack_240;
      uStack_ac = uStack_23c;
      local_c8 = local_258;
      uStack_c4 = uStack_254;
      uStack_c0 = uStack_250;
      uStack_bc = uStack_24c;
      if (local_278 != 0) {
        local_278 = 0;
      }
      local_118 = ppppppplVar46;
      local_f8 = iVar33;
      FUN_14157b36c();
      FUN_140069376(param_1);
      plVar40 = local_340;
      puVar1 = local_370;
      uVar18 = (uint)param_9;
      if ((param_9 & 4) == 0) {
        if (((0 < DAT_14c760ddc) && (uVar18 = (uint)param_9, DAT_14ca84e23 == '\x01')) &&
           (uVar18 = (uint)param_9,
           (DAT_14c760ddc == 2 && (param_9 & 2) != 0) && ((DAT_14ca84e99 ^ 1) & DAT_14ca84e6a) == 1)
           ) {
          uVar18 = (uint)local_2a8;
        }
        puVar34 = (undefined8 *)(*(longlong *)(local_368 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar47 = puVar34 + 0x46;
        if (*(undefined8 **)(local_368 + 0x78) < puVar47) {
          FUN_140023dd8(local_370,0x240);
          puVar34 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar47 = puVar34 + 0x46;
        }
        *local_370 = (ulonglong)puVar47;
        local_388 = (longlong *******)&local_118;
        FUN_14176964a(puVar34,&local_a8,ppppppplVar46,uVar18);
        param_1 = local_368;
        plVar40 = local_340;
      }
      else {
        uVar27 = (uint)local_2e8;
        if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
           ((DAT_14ca84e6a == 1 &&
            (((DAT_14ca84e99 & 1) == 0 &&
             (uVar27 = uVar18, DAT_14c760ddc == 2 && (param_9 & 2) != 0)))))) {
          uVar27 = (uint)local_2f0;
        }
        puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar47 = puVar34 + 0x48;
        if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
          FUN_140023dd8(local_370,0x250);
          puVar34 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar47 = puVar34 + 0x48;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar47;
        uVar20 = *(undefined4 *)(param_1 + 0x660);
        local_388 = (longlong *******)&local_118;
        FUN_14176964a(puVar34,&local_a8,ppppppplVar46,uVar27);
        *puVar34 = &PTR_FUN_14a266190;
        *(undefined4 *)(puVar34 + 0x46) = uVar20;
      }
      puVar42 = local_2e0;
      iVar33 = *(int *)(param_1 + 0x170);
      *(uint *)(param_1 + 0x170) = iVar33 + 1U;
      if (*(uint *)(param_1 + 0x174) < iVar33 + 1U) {
        FUN_14470e57a(local_2d8,iVar33);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar33 * 8) = puVar34;
      *(int *)((longlong)puVar34 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
      FUN_140069100(param_1,puVar34);
      if (local_e8 != 0) {
        plVar45 = local_d8;
        if (local_d8 == (longlong *)0x0) {
          plVar45 = (longlong *)&local_c8;
        }
        (**(code **)(*plVar45 + 0x10))();
      }
      if (local_278 != 0) {
        plVar45 = local_268;
        if (local_268 == (longlong *)0x0) {
          plVar45 = (longlong *)&local_258;
        }
        (**(code **)(*plVar45 + 0x10))();
      }
      plVar40 = (longlong *)((longlong)plVar40 + 1);
      local_360 = (longlong *******)CONCAT44(local_360._4_4_,(int)local_360 + 0x3c);
      puVar41 = puVar41 + 0x2c;
    } while (local_350 != plVar40);
  }
LAB_142d38e09:
  lVar22 = local_e8;
  puVar1 = local_370;
  puVar47 = local_2f8;
  if ((DAT_14c760564 != 0) && (0 < DAT_14c760568)) {
    local_110 = (longlong *******)CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
    uStack_108 = (longlong *******)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    iVar33 = (int)*(undefined8 *)(param_7 + 0x14);
    iStack_f4 = DAT_14ca84e40;
    if (iVar33 < DAT_14ca84e40) {
      iStack_f4 = iVar33;
    }
    if (iStack_f4 < 2) {
      iStack_f4 = 1;
    }
    iVar33 = (int)((ulonglong)*(undefined8 *)(param_7 + 0x14) >> 0x20);
    iStack_f0 = DAT_14ca84e40;
    if (iVar33 < DAT_14ca84e40) {
      iStack_f0 = iVar33;
    }
    local_118 = (longlong *******)&DAT_00020008;
    local_e8._6_2_ = SUB82(lVar22,6);
    local_e8._0_6_ =
         CONCAT24(0xff00,(uint)(byte)((*(int *)(DAT_14c9ecd08 + 4) == 0) << 4) << 0x18 | 0xa000000);
    uStack_ec = 0x10001;
    local_e8 = CONCAT62(local_e8._2_6_,0x101);
    local_f8 = 0;
    local_100 = (longlong *****)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    if (iStack_f0 < 2) {
      iStack_f0 = 1;
    }
    puVar47 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar42 = puVar47 + 0x24;
    if (*(undefined8 **)(param_1 + 0x78) < puVar42) {
      FUN_140023dd8(local_370,0x128);
      puVar47 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar42 = puVar47 + 0x24;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar42;
    FUN_1456bbb8c(puVar47,L"Lumen.Radiosity.FilteredTraceRadianceAtlas",&local_118,0);
    iVar33 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar33 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar33 + 1U) {
      FUN_14472c0f6(param_1 + 0x178,iVar33);
    }
    puVar1 = local_370;
    *(undefined8 **)(*(longlong *)(param_1 + 0x178) + (longlong)iVar33 * 8) = puVar47;
    *(int *)((longlong)puVar47 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
    uVar17 = *(undefined1 *)((longlong)puVar47 + 0x94);
    puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar42 = puVar34 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar42) {
      FUN_140023dd8(local_370,0x50);
      puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar42 = puVar34 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar42;
    puVar34[1] = puVar47[1];
    puVar34[2] = 0;
    *(undefined1 *)(puVar34 + 3) = 0;
    *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar34 + 5) = 1;
    *puVar34 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar34 + 6) = uVar17;
    *(undefined1 *)(puVar34 + 7) = 0;
    *(undefined4 *)((longlong)puVar34 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar34 + 0x35) = 0;
    puVar34[8] = puVar47;
    iVar33 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar33 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar33 + 1U) {
      FUN_1447568fc(local_358,iVar33);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = puVar34;
    *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    if (0 < (int)local_350) {
      local_2a8 = CONCAT44(local_2a8._4_4_,(uint)param_9) & 0xffffffff0000fffd;
      uVar18 = param_9 & 0xfffffff9;
      local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,uVar18 + 2);
      local_2a0 = (ulonglong)(uVar18 | 4);
      plVar40 = (longlong *)(param_6 + 0x1c8);
      iVar33 = 0;
      plVar45 = (longlong *)0x0;
      local_2f0 = puVar47;
      local_2e0 = puVar34;
      do {
        puVar1 = local_370;
        puVar42 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar47 = puVar42 + 0x1a;
        if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
          FUN_140023dd8(local_370,0xe0);
          puVar42 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar47 = puVar42 + 0x1a;
        }
        local_320 = (longlong *)CONCAT44(local_320._4_4_,iVar33);
        *(undefined8 **)(param_1 + 0x70) = puVar47;
        *puVar42 = &PTR_FUN_14a2661c8;
        local_360 = (longlong *******)(puVar42 + 2);
        puVar42[2] = 0;
        *(undefined4 *)(puVar42 + 3) = 4;
        puVar42[4] = 0;
        *(undefined1 *)(puVar42 + 5) = 1;
        puVar42[6] = 0;
        *(undefined1 *)(puVar42 + 7) = 1;
        puVar42[0x16] = 0;
        puVar42[8] = 0;
        puVar42[9] = 0;
        puVar42[10] = 0;
        puVar42[0xb] = 0;
        *(undefined1 *)(puVar42 + 0x17) = 1;
        puVar42[0x18] = 0;
        iVar33 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar33 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar33 + 1U) {
          FUN_1448cfae8(local_318,iVar33);
        }
        ppppplVar25 = local_300;
        *(undefined8 **)(*local_318 + (longlong)iVar33 * 8) = puVar42;
        puVar42[0x18] = puVar34;
        puVar42[2] = local_300;
        *(undefined4 *)(puVar42 + 3) = 4;
        lVar22 = *plVar40;
        local_340 = plVar40;
        lVar26 = FUN_1447e4f80();
        cVar16 = *(char *)(lVar26 + 0x41);
        if (cVar16 == '\x03') {
          cVar16 = '\x02';
        }
        puVar42[4] = *(undefined8 *)(lVar22 + 0x18);
        *(char *)(puVar42 + 5) = cVar16;
        uVar3 = *(undefined8 *)(param_6 + 0xe8);
        lVar22 = FUN_1449a4512();
        cVar16 = *(char *)(lVar22 + 0x41);
        if (cVar16 == '\x03') {
          cVar16 = '\x02';
        }
        puVar42[6] = uVar3;
        *(char *)(puVar42 + 7) = cVar16;
        puVar42[8] = local_2b8;
        puVar42[9] = local_2c0;
        puVar42[10] = local_2f8;
        puVar42[0xb] = local_2c8;
        puVar42[0xc] = local_2d0;
        *(uint *)(puVar42 + 0xd) = local_328;
        *(int *)((longlong)puVar42 + 0x6c) = local_32c;
        *(undefined4 *)(puVar42 + 0xe) = local_324;
        *(int *)((longlong)puVar42 + 0x74) = local_338;
        *(int *)(puVar42 + 0xf) = local_30c;
        *(float *)((longlong)puVar42 + 0x7c) = fVar51;
        *(undefined4 *)(puVar42 + 0x10) = local_330;
        *(undefined4 *)((longlong)puVar42 + 0x84) = local_348;
        *(int *)(puVar42 + 0x11) = (int)local_350;
        *(int *)(puVar42 + 0x12) = local_344;
        *(undefined8 *)((longlong)puVar42 + 0xa4) = local_120;
        *(ulonglong *)((longlong)puVar42 + 0x94) = CONCAT44(uStack_12c,local_130);
        *(ulonglong *)((longlong)puVar42 + 0x9c) = CONCAT44(uStack_124,uStack_128);
        puVar42[0x16] = local_308;
        *(char *)(puVar42 + 0x17) = (char)local_334;
        *(uint *)((longlong)puVar42 + 0xbc) = CONCAT31(uStack_27b,local_27f._3_1_);
        *(undefined4 *)((longlong)puVar42 + 0xb9) = local_27f;
        *(int *)((longlong)puVar42 + 0x8c) = (int)plVar45;
        *(undefined4 *)(puVar42 + 0x19) = DAT_14c760578;
        bVar48 = DAT_14c76056c != 0;
        iVar33 = DAT_14c760568;
        if (1 < DAT_14c760568) {
          iVar33 = 2;
        }
        if (iVar33 < 1) {
          iVar33 = 0;
        }
        bVar32 = *(byte *)(param_7 + 1);
        FUN_141595b08();
        FUN_1448e935e(local_2b0,&local_118,&DAT_14c9f2fa0,
                      (uint)bVar32 * 2 + iVar33 * 4 | (uint)bVar48);
        FUN_141595b08();
        ppppppplVar46 = local_110;
        ppppppplVar15 = local_118;
        local_278 = 0;
        local_268 = (longlong *)0x0;
        local_a8 = ppppplVar25;
        FUN_141595c2a();
        ppppppplVar29 = local_360;
        local_118 = (longlong *******)&local_a8;
        local_110 = (longlong *******)local_a0;
        FUN_1448f70da(ppppppplVar15,&DAT_14c9f62e8,local_360,&local_118);
        local_118 = ppppppplVar29;
        local_110 = ppppppplVar15;
        uStack_108 = ppppppplVar46;
        local_100 = ppppplVar25;
        iVar33 = (int)local_320;
        local_f8 = (int)local_320;
        local_e8 = local_278;
        local_d8 = local_268;
        local_268 = (longlong *)0x0;
        local_b8 = local_248;
        uStack_b4 = uStack_244;
        uStack_b0 = uStack_240;
        uStack_ac = uStack_23c;
        local_c8 = local_258;
        uStack_c4 = uStack_254;
        uStack_c0 = uStack_250;
        uStack_bc = uStack_24c;
        if (local_278 != 0) {
          local_278 = 0;
        }
        FUN_141595c2a();
        FUN_140069376(param_1);
        plVar40 = local_340;
        puVar1 = local_370;
        uVar18 = (uint)param_9;
        if ((param_9 & 4) == 0) {
          if (((0 < DAT_14c760ddc) && (uVar18 = (uint)param_9, DAT_14ca84e23 == '\x01')) &&
             (uVar18 = (uint)param_9,
             (DAT_14c760ddc == 2 && (param_9 & 2) != 0) &&
             ((DAT_14ca84e99 ^ 1) & DAT_14ca84e6a) == 1)) {
            uVar18 = (uint)local_2a0;
          }
          puVar42 = (undefined8 *)(*(longlong *)(local_368 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar47 = puVar42 + 0x46;
          if (*(undefined8 **)(local_368 + 0x78) < puVar47) {
            FUN_140023dd8(local_370,0x240);
            puVar42 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
            puVar47 = puVar42 + 0x46;
          }
          *local_370 = (ulonglong)puVar47;
          local_388 = (longlong *******)&local_118;
          FUN_14176978e(puVar42,&local_a8,local_360,uVar18);
          param_1 = local_368;
          plVar40 = local_340;
          iVar33 = (int)local_320;
        }
        else {
          uVar27 = (uint)local_2e8;
          if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
             ((DAT_14ca84e6a == 1 &&
              (((DAT_14ca84e99 & 1) == 0 &&
               (uVar27 = uVar18, DAT_14c760ddc == 2 && (param_9 & 2) != 0)))))) {
            uVar27 = (uint)local_2a8;
          }
          puVar42 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar47 = puVar42 + 0x48;
          if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
            FUN_140023dd8(local_370,0x250);
            puVar42 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
            puVar47 = puVar42 + 0x48;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar47;
          uVar20 = *(undefined4 *)(param_1 + 0x660);
          local_388 = (longlong *******)&local_118;
          FUN_14176978e(puVar42,&local_a8,local_360,uVar27);
          *puVar42 = &PTR_FUN_14a2661d0;
          *(undefined4 *)(puVar42 + 0x46) = uVar20;
        }
        puVar34 = local_2e0;
        iVar38 = *(int *)(param_1 + 0x170);
        *(uint *)(param_1 + 0x170) = iVar38 + 1U;
        if (*(uint *)(param_1 + 0x174) < iVar38 + 1U) {
          FUN_14470e57a(local_2d8,iVar38);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar38 * 8) = puVar42;
        *(int *)((longlong)puVar42 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
        FUN_140069100(param_1,puVar42);
        if (local_e8 != 0) {
          plVar23 = local_d8;
          if (local_d8 == (longlong *)0x0) {
            plVar23 = (longlong *)&local_c8;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
        if (local_278 != 0) {
          plVar23 = local_268;
          if (local_268 == (longlong *)0x0) {
            plVar23 = (longlong *)&local_258;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
        plVar45 = (longlong *)((longlong)plVar45 + 1);
        iVar33 = iVar33 + 0x3c;
        plVar40 = plVar40 + 0x16;
      } while (local_350 != plVar45);
      local_2f8 = local_2f0;
      puVar47 = local_2f8;
    }
  }
  local_2f8 = puVar47;
  puVar1 = local_370;
  lVar22 = *(longlong *)(param_7 + 0x30);
  uVar17 = *(undefined1 *)(lVar22 + 0x94);
  puVar42 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar47 = puVar42 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
    FUN_140023dd8(local_370,0x50);
    puVar42 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar47 = puVar42 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar47;
  puVar42[1] = *(undefined8 *)(lVar22 + 8);
  puVar42[2] = 0;
  *(undefined1 *)(puVar42 + 3) = 0;
  *(undefined8 *)((longlong)puVar42 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar42 + 5) = 1;
  *puVar42 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar42 + 6) = uVar17;
  *(undefined1 *)(puVar42 + 7) = 0;
  *(undefined4 *)((longlong)puVar42 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar42 + 0x35) = 0;
  puVar42[8] = lVar22;
  iVar33 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar33 + 1U) {
    FUN_1447568fc(local_358,iVar33);
  }
  puVar1 = local_370;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = puVar42;
  *(int *)((longlong)puVar42 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  lVar22 = *(longlong *)(param_7 + 0x38);
  uVar17 = *(undefined1 *)(lVar22 + 0x94);
  puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar47 = puVar34 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
    FUN_140023dd8(local_370,0x50);
    puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar47 = puVar34 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar47;
  puVar34[1] = *(undefined8 *)(lVar22 + 8);
  puVar34[2] = 0;
  *(undefined1 *)(puVar34 + 3) = 0;
  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar34 + 5) = 1;
  *puVar34 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar34 + 6) = uVar17;
  *(undefined1 *)(puVar34 + 7) = 0;
  *(undefined4 *)((longlong)puVar34 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar34 + 0x35) = 0;
  puVar34[8] = lVar22;
  iVar33 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar33 + 1U) {
    FUN_1447568fc(local_358,iVar33);
  }
  puVar1 = local_370;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  lVar22 = *(longlong *)(param_7 + 0x40);
  uVar17 = *(undefined1 *)(lVar22 + 0x94);
  puVar44 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar47 = puVar44 + 9;
  local_2e0 = puVar34;
  if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
    FUN_140023dd8(local_370,0x50);
    puVar44 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar47 = puVar44 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar47;
  puVar44[1] = *(undefined8 *)(lVar22 + 8);
  puVar44[2] = 0;
  *(undefined1 *)(puVar44 + 3) = 0;
  *(undefined8 *)((longlong)puVar44 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar44 + 5) = 1;
  *puVar44 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar44 + 6) = uVar17;
  *(undefined1 *)(puVar44 + 7) = 0;
  *(undefined4 *)((longlong)puVar44 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar44 + 0x35) = 0;
  puVar44[8] = lVar22;
  iVar33 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar33 + 1U) {
    FUN_1447568fc(local_358,iVar33);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = puVar44;
  *(int *)((longlong)puVar44 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  local_2e8 = puVar44;
  if (0 < (int)local_350) {
    local_2a0 = CONCAT44(local_2a0._4_4_,(uint)param_9) & 0xffffffff0000fffd;
    uVar18 = param_9 & 0xfffffff9;
    local_2a8 = CONCAT44(local_2a8._4_4_,uVar18 + 2);
    local_298 = (ulonglong)(uVar18 | 4);
    plVar40 = (longlong *)(param_6 + 0x1c8);
    iVar33 = 0x18;
    plVar45 = (longlong *)0x0;
    local_2f0 = puVar42;
    do {
      puVar1 = local_370;
      puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar47 = puVar34 + 0x1c;
      if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
        FUN_140023dd8(local_370,0xf0);
        puVar34 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar47 = puVar34 + 0x1c;
      }
      local_320 = (longlong *)CONCAT44(local_320._4_4_,iVar33);
      *(undefined8 **)(param_1 + 0x70) = puVar47;
      *puVar34 = &PTR_FUN_14a266208;
      local_360 = (longlong *******)(puVar34 + 2);
      puVar34[6] = 0;
      puVar34[2] = 0;
      puVar34[3] = 0;
      puVar34[4] = 0;
      *(undefined1 *)(puVar34 + 7) = 1;
      puVar34[8] = 0;
      *(undefined1 *)(puVar34 + 9) = 1;
      puVar34[0x18] = 0;
      puVar34[10] = 0;
      puVar34[0xb] = 0;
      puVar34[0xc] = 0;
      puVar34[0xd] = 0;
      *(undefined1 *)(puVar34 + 0x19) = 1;
      puVar34[0x1a] = 0;
      *(undefined4 *)(puVar34 + 0x1b) = 4;
      iVar33 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar33 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar33 + 1U) {
        FUN_1448cfae8(local_318,iVar33);
      }
      ppppplVar25 = local_300;
      *(undefined8 **)(*local_318 + (longlong)iVar33 * 8) = puVar34;
      puVar34[2] = puVar42;
      puVar34[3] = local_2e0;
      puVar34[4] = local_2e8;
      puVar34[0x1a] = local_300;
      *(undefined4 *)(puVar34 + 0x1b) = 4;
      lVar22 = *plVar40;
      local_340 = plVar40;
      lVar26 = FUN_1447e4f80();
      cVar16 = *(char *)(lVar26 + 0x41);
      if (cVar16 == '\x03') {
        cVar16 = '\x02';
      }
      puVar34[6] = *(undefined8 *)(lVar22 + 0x18);
      *(char *)(puVar34 + 7) = cVar16;
      uVar3 = *(undefined8 *)(param_6 + 0xe8);
      lVar22 = FUN_1449a4512();
      cVar16 = *(char *)(lVar22 + 0x41);
      if (cVar16 == '\x03') {
        cVar16 = '\x02';
      }
      puVar34[8] = uVar3;
      *(char *)(puVar34 + 9) = cVar16;
      puVar34[10] = local_2b8;
      puVar34[0xb] = local_2c0;
      puVar34[0xc] = local_2f8;
      puVar34[0xd] = local_2c8;
      puVar34[0xe] = local_2d0;
      *(uint *)(puVar34 + 0xf) = local_328;
      *(int *)((longlong)puVar34 + 0x7c) = local_32c;
      *(undefined4 *)(puVar34 + 0x10) = local_324;
      *(int *)((longlong)puVar34 + 0x84) = local_338;
      *(int *)(puVar34 + 0x11) = local_30c;
      *(float *)((longlong)puVar34 + 0x8c) = fVar51;
      *(undefined4 *)(puVar34 + 0x12) = local_330;
      *(undefined4 *)((longlong)puVar34 + 0x94) = local_348;
      *(int *)(puVar34 + 0x13) = (int)local_350;
      *(int *)(puVar34 + 0x14) = local_344;
      *(undefined8 *)((longlong)puVar34 + 0xb4) = local_120;
      *(undefined4 *)((longlong)puVar34 + 0xa4) = local_130;
      *(undefined4 *)(puVar34 + 0x15) = uStack_12c;
      *(undefined4 *)((longlong)puVar34 + 0xac) = uStack_128;
      *(undefined4 *)(puVar34 + 0x16) = uStack_124;
      puVar34[0x18] = local_308;
      *(char *)(puVar34 + 0x19) = (char)local_334;
      *(uint *)((longlong)puVar34 + 0xcc) = CONCAT31(uStack_27b,local_27f._3_1_);
      *(undefined4 *)((longlong)puVar34 + 0xc9) = local_27f;
      *(int *)((longlong)puVar34 + 0x9c) = (int)plVar45;
      FUN_1415804a6();
      FUN_1415804a6();
      FUN_1448e935e(local_2b0,&local_118,&DAT_14c9f30c8,0);
      FUN_1415804a6();
      ppppppplVar46 = local_110;
      ppppppplVar15 = local_118;
      local_278 = 0;
      local_268 = (longlong *)0x0;
      local_a8 = ppppplVar25;
      FUN_1415805c8();
      ppppppplVar29 = local_360;
      local_118 = (longlong *******)&local_a8;
      local_110 = (longlong *******)local_a0;
      FUN_1448f70da(ppppppplVar15,&DAT_14c9f6370,local_360,&local_118);
      local_118 = ppppppplVar29;
      local_110 = ppppppplVar15;
      uStack_108 = ppppppplVar46;
      local_100 = ppppplVar25;
      iVar33 = (int)local_320;
      local_f8 = (int)local_320;
      local_e8 = local_278;
      local_d8 = local_268;
      local_268 = (longlong *)0x0;
      local_b8 = local_248;
      uStack_b4 = uStack_244;
      uStack_b0 = uStack_240;
      uStack_ac = uStack_23c;
      local_c8 = local_258;
      uStack_c4 = uStack_254;
      uStack_c0 = uStack_250;
      uStack_bc = uStack_24c;
      if (local_278 != 0) {
        local_278 = 0;
      }
      FUN_1415805c8();
      FUN_140069376(param_1);
      plVar40 = local_340;
      puVar1 = local_370;
      if ((param_9 & 4) == 0) {
        puVar34 = (undefined8 *)(*(longlong *)(local_368 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar47 = puVar34 + 0x46;
        if (*(undefined8 **)(local_368 + 0x78) < puVar47) {
          FUN_140023dd8(local_370,0x240);
          puVar34 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar47 = puVar34 + 0x46;
        }
        *local_370 = (ulonglong)puVar47;
        local_388 = (longlong *******)&local_118;
        FUN_1417698d2(puVar34,&local_a8,local_360);
        param_1 = local_368;
        plVar40 = local_340;
        iVar33 = (int)local_320;
      }
      else {
        puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar47 = puVar34 + 0x48;
        if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
          FUN_140023dd8(local_370,0x250);
          puVar34 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar47 = puVar34 + 0x48;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar47;
        uVar20 = *(undefined4 *)(param_1 + 0x660);
        local_388 = (longlong *******)&local_118;
        FUN_1417698d2(puVar34,&local_a8,local_360);
        *puVar34 = &PTR_FUN_14a266210;
        *(undefined4 *)(puVar34 + 0x46) = uVar20;
      }
      puVar42 = local_2f0;
      iVar38 = *(int *)(param_1 + 0x170);
      *(uint *)(param_1 + 0x170) = iVar38 + 1U;
      if (*(uint *)(param_1 + 0x174) < iVar38 + 1U) {
        FUN_14470e57a(local_2d8,iVar38);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar38 * 8) = puVar34;
      *(int *)((longlong)puVar34 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
      FUN_140069100(param_1,puVar34);
      if (local_e8 != 0) {
        plVar23 = local_d8;
        if (local_d8 == (longlong *)0x0) {
          plVar23 = (longlong *)&local_c8;
        }
        (**(code **)(*plVar23 + 0x10))();
      }
      if (local_278 != 0) {
        plVar23 = local_268;
        if (local_268 == (longlong *)0x0) {
          plVar23 = (longlong *)&local_258;
        }
        (**(code **)(*plVar23 + 0x10))();
      }
      plVar45 = (longlong *)((longlong)plVar45 + 1);
      iVar33 = iVar33 + 0x3c;
      plVar40 = plVar40 + 0x16;
    } while (local_350 != plVar45);
  }
  puVar1 = local_370;
  lVar22 = *(longlong *)(param_6 + 0x58);
  uVar17 = *(undefined1 *)(lVar22 + 0x94);
  plVar45 = (longlong *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  plVar40 = plVar45 + 9;
  if (*(longlong **)(param_1 + 0x78) < plVar40) {
    FUN_140023dd8(local_370,0x50);
    plVar45 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
    plVar40 = plVar45 + 9;
  }
  *(longlong **)(param_1 + 0x70) = plVar40;
  plVar45[1] = *(longlong *)(lVar22 + 8);
  plVar45[2] = 0;
  *(undefined1 *)(plVar45 + 3) = 0;
  *(undefined8 *)((longlong)plVar45 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(plVar45 + 5) = 1;
  *plVar45 = (longlong)&PTR_FUN_14a1fb948;
  *(undefined1 *)(plVar45 + 6) = uVar17;
  *(undefined1 *)(plVar45 + 7) = 0;
  *(undefined4 *)((longlong)plVar45 + 0x31) = 0;
  *(undefined2 *)((longlong)plVar45 + 0x35) = 0;
  plVar45[8] = lVar22;
  iVar33 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar33 + 1U) {
    FUN_1447568fc(local_358,iVar33);
  }
  puVar1 = local_370;
  *(longlong **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = plVar45;
  *(int *)((longlong)plVar45 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  lVar22 = *(longlong *)(param_6 + 0x60);
  uVar17 = *(undefined1 *)(lVar22 + 0x94);
  puVar42 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar47 = puVar42 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
    FUN_140023dd8(local_370,0x50);
    puVar42 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar47 = puVar42 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar47;
  puVar42[1] = *(undefined8 *)(lVar22 + 8);
  puVar42[2] = 0;
  *(undefined1 *)(puVar42 + 3) = 0;
  *(undefined8 *)((longlong)puVar42 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar42 + 5) = 1;
  *puVar42 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar42 + 6) = uVar17;
  *(undefined1 *)(puVar42 + 7) = 0;
  *(undefined4 *)((longlong)puVar42 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar42 + 0x35) = 0;
  puVar42[8] = lVar22;
  iVar33 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar33 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar33 + 1U) {
    FUN_1447568fc(local_358,iVar33);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar33 * 8) = puVar42;
  *(int *)((longlong)puVar42 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  local_340 = puVar42;
  if (0 < (int)local_350) {
    local_2e8 = (undefined8 *)(CONCAT44(local_2e8._4_4_,(uint)param_9) & 0xffffffff0000fffd);
    uVar18 = param_9 & 0xfffffff9;
    local_2e0 = (undefined8 *)CONCAT44(local_2e0._4_4_,uVar18 + 2);
    local_2f0 = (undefined8 *)(ulonglong)(uVar18 | 4);
    plVar40 = (longlong *)(param_6 + 0x1c8);
    local_360 = (longlong *******)CONCAT44(local_360._4_4_,0x24);
    plVar23 = (longlong *)0x0;
    local_320 = plVar45;
    do {
      puVar1 = local_370;
      puVar42 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar47 = puVar42 + 0x20;
      if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
        FUN_140023dd8(local_370,0x110);
        puVar42 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar47 = puVar42 + 0x20;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar47;
      *puVar42 = &PTR_FUN_14a266248;
      puVar42[2] = 0;
      *(undefined4 *)(puVar42 + 3) = 4;
      puVar42[4] = 0;
      *(undefined1 *)(puVar42 + 5) = 1;
      puVar42[6] = 0;
      *(undefined1 *)(puVar42 + 7) = 1;
      puVar42[0x16] = 0;
      puVar42[8] = 0;
      puVar42[9] = 0;
      puVar42[10] = 0;
      puVar42[0xb] = 0;
      *(undefined1 *)(puVar42 + 0x17) = 1;
      puVar42[0x1e] = 0;
      puVar42[0x18] = 0;
      puVar42[0x19] = 0;
      puVar42[0x1a] = 0;
      puVar42[0x1b] = 0;
      puVar42[0x1c] = 0;
      *(undefined1 *)(puVar42 + 0x1f) = 1;
      iVar33 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar33 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar33 + 1U) {
        FUN_1448cfae8(local_318,iVar33);
      }
      *(undefined8 **)(*local_318 + (longlong)iVar33 * 8) = puVar42;
      puVar42[2] = local_300;
      *(undefined4 *)(puVar42 + 3) = 4;
      lVar22 = *plVar40;
      lVar26 = FUN_1447e4f80();
      cVar16 = *(char *)(lVar26 + 0x41);
      if (*(char *)(lVar26 + 0x41) == '\x03') {
        cVar16 = '\x02';
      }
      puVar42[4] = *(undefined8 *)(lVar22 + 0x18);
      *(char *)(puVar42 + 5) = cVar16;
      uVar3 = *(undefined8 *)(param_6 + 0xe8);
      lVar22 = FUN_1449a4512();
      cVar16 = *(char *)(lVar22 + 0x41);
      if (cVar16 == '\x03') {
        cVar16 = '\x02';
      }
      puVar42[6] = uVar3;
      *(char *)(puVar42 + 7) = cVar16;
      puVar42[8] = local_2b8;
      puVar42[9] = local_2c0;
      puVar42[10] = local_2f8;
      puVar42[0xb] = local_2c8;
      puVar42[0xc] = local_2d0;
      *(uint *)(puVar42 + 0xd) = local_328;
      *(int *)((longlong)puVar42 + 0x6c) = local_32c;
      *(undefined4 *)(puVar42 + 0xe) = local_324;
      *(int *)((longlong)puVar42 + 0x74) = local_338;
      *(int *)(puVar42 + 0xf) = local_30c;
      *(float *)((longlong)puVar42 + 0x7c) = fVar51;
      *(undefined4 *)(puVar42 + 0x10) = local_330;
      *(undefined4 *)((longlong)puVar42 + 0x84) = local_348;
      *(int *)(puVar42 + 0x11) = (int)local_350;
      *(int *)(puVar42 + 0x12) = local_344;
      *(undefined8 *)((longlong)puVar42 + 0xa4) = local_120;
      *(ulonglong *)((longlong)puVar42 + 0x94) = CONCAT44(uStack_12c,local_130);
      *(ulonglong *)((longlong)puVar42 + 0x9c) = CONCAT44(uStack_124,uStack_128);
      puVar42[0x16] = local_308;
      *(char *)(puVar42 + 0x17) = (char)local_334;
      *(uint *)((longlong)puVar42 + 0xbc) = CONCAT31(uStack_27b,local_27f._3_1_);
      *(undefined4 *)((longlong)puVar42 + 0xb9) = local_27f;
      *(int *)((longlong)puVar42 + 0x8c) = (int)plVar23;
      puVar42[0x18] = plVar45;
      puVar42[0x19] = local_340;
      puVar42[0x1a] = *(undefined8 *)(param_7 + 0x30);
      puVar42[0x1b] = *(undefined8 *)(param_7 + 0x38);
      puVar42[0x1c] = *(undefined8 *)(param_7 + 0x40);
      *(undefined4 *)(puVar42 + 0x1d) = DAT_14c760578;
      uVar3 = *(undefined8 *)(*plVar40 + 0x118d0);
      lVar22 = FUN_144a2c9be();
      cVar16 = *(char *)(lVar22 + 0x41);
      if (cVar16 == '\x03') {
        cVar16 = '\x02';
      }
      puVar42[0x1e] = uVar3;
      *(char *)(puVar42 + 0x1f) = cVar16;
      bVar48 = DAT_14c76056c != 0;
      cVar16 = *(char *)(param_7 + 1);
      if (DAT_14c76058c == 0) {
LAB_142d3a3ef:
        bVar32 = 0;
      }
      else {
        puVar35 = &DAT_14c8735f0;
        if (*(int *)(DAT_14c9ecd08 + 4) == 0) {
          puVar35 = &DAT_14c8738f0;
        }
        if ((puVar35[0x22] & 0x20) == 0) goto LAB_142d3a3ef;
        bVar32 = (byte)(DAT_14c874180 >> 0x13) & 4;
      }
      ppppppplVar46 = (longlong *******)(puVar42 + 2);
      FUN_141572154();
      FUN_1448e935e(local_2b0,&local_118,&DAT_14c9f31f0,cVar16 * '\x02' | bVar32 | bVar48);
      FUN_141572154();
      ppppppplVar15 = local_110;
      ppppppplVar29 = local_118;
      ppppplVar25 = local_300;
      local_278 = 0;
      local_268 = (longlong *)0x0;
      local_a8 = local_300;
      FUN_141572276();
      local_118 = (longlong *******)&local_a8;
      local_110 = (longlong *******)local_a0;
      FUN_1448f70da(ppppppplVar29,&DAT_14c9f63f8,ppppppplVar46,&local_118);
      local_110 = ppppppplVar29;
      uStack_108 = ppppppplVar15;
      local_100 = ppppplVar25;
      local_f8 = (int)local_360;
      local_e8 = local_278;
      local_d8 = local_268;
      local_268 = (longlong *)0x0;
      local_b8 = local_248;
      uStack_b4 = uStack_244;
      uStack_b0 = uStack_240;
      uStack_ac = uStack_23c;
      local_c8 = local_258;
      uStack_c4 = uStack_254;
      uStack_c0 = uStack_250;
      uStack_bc = uStack_24c;
      if (local_278 != 0) {
        local_278 = 0;
      }
      local_118 = ppppppplVar46;
      FUN_141572276();
      param_1 = local_368;
      FUN_140069376(local_368);
      puVar1 = local_370;
      if ((param_9 & 4) == 0) {
        uVar30 = (ulonglong)(uint)param_9;
        if (((0 < DAT_14c760ddc) && (uVar30 = (ulonglong)param_9, DAT_14ca84e23 == '\x01')) &&
           (uVar30 = (ulonglong)param_9,
           (DAT_14c760ddc == 2 && (param_9 & 2) != 0) && ((DAT_14ca84e99 ^ 1) & DAT_14ca84e6a) == 1)
           ) {
          uVar30 = (ulonglong)local_2f0 & 0xffffffff;
        }
        puVar42 = (undefined8 *)(*(longlong *)(local_368 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar47 = puVar42 + 0x46;
        if (*(undefined8 **)(local_368 + 0x78) < puVar47) {
          FUN_140023dd8(local_370,0x240);
          puVar42 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar47 = puVar42 + 0x46;
        }
        *local_370 = (ulonglong)puVar47;
        local_388 = (longlong *******)&local_118;
        FUN_141769a16(puVar42,&local_a8,ppppppplVar46,uVar30);
        param_1 = local_368;
      }
      else {
        uVar18 = (uint)local_2e0;
        if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
           ((DAT_14ca84e6a == 1 &&
            (((DAT_14ca84e99 & 1) == 0 &&
             (uVar18 = (uint)param_9, DAT_14c760ddc == 2 && (param_9 & 2) != 0)))))) {
          uVar18 = (uint)local_2e8;
        }
        puVar42 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar47 = puVar42 + 0x48;
        if (*(undefined8 **)(param_1 + 0x78) < puVar47) {
          FUN_140023dd8(local_370,0x250);
          puVar42 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar47 = puVar42 + 0x48;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar47;
        uVar20 = *(undefined4 *)(param_1 + 0x660);
        local_388 = (longlong *******)&local_118;
        FUN_141769a16(puVar42,&local_a8,ppppppplVar46,uVar18);
        *puVar42 = &PTR_FUN_14a266250;
        *(undefined4 *)(puVar42 + 0x46) = uVar20;
      }
      iVar33 = *(int *)(param_1 + 0x170);
      *(uint *)(param_1 + 0x170) = iVar33 + 1U;
      if (*(uint *)(param_1 + 0x174) < iVar33 + 1U) {
        FUN_14470e57a(local_2d8,iVar33);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar33 * 8) = puVar42;
      *(int *)((longlong)puVar42 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
      FUN_140069100(param_1);
      if (local_e8 != 0) {
        plVar45 = local_d8;
        if (local_d8 == (longlong *)0x0) {
          plVar45 = (longlong *)&local_c8;
        }
        (**(code **)(*plVar45 + 0x10))();
      }
      plVar45 = local_320;
      if (local_278 != 0) {
        plVar31 = local_268;
        if (local_268 == (longlong *)0x0) {
          plVar31 = (longlong *)&local_258;
        }
        (**(code **)(*plVar31 + 0x10))();
      }
      plVar23 = (longlong *)((longlong)plVar23 + 1);
      local_360 = (longlong *******)CONCAT44(local_360._4_4_,(int)local_360 + 0x3c);
      plVar40 = plVar40 + 0x16;
    } while (local_350 != plVar23);
  }
  plVar40 = (longlong *)FUN_14495f742(param_1,*(undefined8 *)(param_7 + 0x20));
  plVar40 = (longlong *)*plVar40;
  plVar45 = *(longlong **)(param_5 + 0x838);
  if (plVar45 != plVar40) {
    *(longlong **)(param_5 + 0x838) = plVar40;
    if (plVar40 != (longlong *)0x0) {
      (**(code **)(*plVar40 + 0x30))();
    }
    if (plVar45 != (longlong *)0x0) {
      (**(code **)(*plVar45 + 0x38))(plVar45);
    }
  }
  plVar40 = (longlong *)FUN_14495f742(param_1,*(undefined8 *)(param_7 + 0x28));
  plVar40 = (longlong *)*plVar40;
  plVar45 = *(longlong **)(param_5 + 0x840);
  if (plVar45 != plVar40) {
    *(longlong **)(param_5 + 0x840) = plVar40;
    if (plVar40 != (longlong *)0x0) {
      (**(code **)(*plVar40 + 0x30))();
    }
    if (plVar45 != (longlong *)0x0) {
      (**(code **)(*plVar45 + 0x38))(plVar45);
    }
  }
  plVar40 = (longlong *)FUN_14495f742(param_1,*(undefined8 *)(param_7 + 0x30));
  plVar40 = (longlong *)*plVar40;
  plVar45 = *(longlong **)(param_5 + 0x848);
  if (plVar45 != plVar40) {
    *(longlong **)(param_5 + 0x848) = plVar40;
    if (plVar40 != (longlong *)0x0) {
      (**(code **)(*plVar40 + 0x30))();
    }
    if (plVar45 != (longlong *)0x0) {
      (**(code **)(*plVar45 + 0x38))(plVar45);
    }
  }
  plVar40 = (longlong *)FUN_14495f742(param_1,*(undefined8 *)(param_7 + 0x38));
  plVar40 = (longlong *)*plVar40;
  plVar45 = *(longlong **)(param_5 + 0x850);
  if (plVar45 != plVar40) {
    *(longlong **)(param_5 + 0x850) = plVar40;
    if (plVar40 != (longlong *)0x0) {
      (**(code **)(*plVar40 + 0x30))();
    }
    if (plVar45 != (longlong *)0x0) {
      (**(code **)(*plVar45 + 0x38))(plVar45);
    }
  }
  plVar40 = (longlong *)FUN_14495f742(param_1,*(undefined8 *)(param_7 + 0x40));
  plVar40 = (longlong *)*plVar40;
  plVar45 = *(longlong **)(param_5 + 0x858);
  if (plVar45 != plVar40) {
    *(longlong **)(param_5 + 0x858) = plVar40;
    if (plVar40 != (longlong *)0x0) {
      (**(code **)(*plVar40 + 0x30))();
    }
    if (plVar45 != (longlong *)0x0) {
      (**(code **)(*plVar45 + 0x38))(plVar45);
    }
  }
  if ((local_a0[0] ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d3ac2e FUN_142d3ac2e body=484 status=ok
// SIG undefined FUN_142d3ac2e(void)

void FUN_142d3ac2e(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined2 param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined2 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 1000);
  lVar3 = *(longlong *)(lVar2 + 0x13ad8);
  if (lVar3 == 0) {
    uVar1 = *(uint *)(lVar2 + 0x1de0);
    if (uVar1 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
        }
      }
    }
    if (*(longlong *)(lVar2 + 0x3108) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(longlong *)(lVar2 + 0x3108) + 0x24);
    }
    lVar3 = FUN_140c6b718(*(undefined8 *)(param_1 + 8),uVar4,iVar5);
  }
  if ((((DAT_14c760558 == 0) || ((*(uint *)(param_1 + 0xf8) & 0x100000) == 0)) ||
      (*(char *)(lVar3 + 0x8fc) != '\x01')) || (*(int *)(param_5 + 0x28) == 0)) {
    if (*(int *)(DAT_14c9f2960 + 4) < 1) {
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_68 = 0;
      local_60 = 1;
      local_58 = 1;
      FUN_1401a4871(param_2,*(undefined8 *)(param_3 + 0x58));
    }
    else {
      DAT_14c9f2968 = 1;
    }
  }
  else {
    local_90 = param_1 + 1000;
    local_b0 = (undefined8 *)CONCAT62(local_b0._2_6_,param_6);
    local_b8 = &local_88;
    FUN_142d67c6e(param_2,*(undefined8 *)(*(longlong *)(param_1 + 1000) + 0x13818),param_5,
                  param_3 + 0xe8);
    FUN_142d06275(*(undefined8 *)(param_1 + 8),param_1 + 0x98);
    local_98 = param_6;
    local_a0 = param_5;
    local_b8 = (undefined8 *)lVar3;
    local_b0 = (undefined8 *)param_3;
    local_a8 = param_4;
    FUN_142d36389(param_2,*(undefined8 *)(param_1 + 8),local_90,0);
    local_a8 = CONCAT62(local_a8._2_6_,param_6);
    local_b0 = &local_88;
    local_b8 = (undefined8 *)param_5;
    FUN_142d7a17b(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 1000),param_2,param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d3ae38 FUN_142d3ae38 body=3351 status=ok
// SIG undefined FUN_142d3ae38(void)

void FUN_142d3ae38(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  char cVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_108 [32];
  int *local_e8;
  ulonglong *local_d8;
  uint local_cc;
  ulonglong local_c8;
  longlong local_c0;
  int local_b4;
  undefined8 *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_6d;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *(longlong *)(param_1 + 1000);
  lVar6 = -1;
  if (0 < (longlong)*(int *)(param_1 + 0x410)) {
    lVar12 = 0;
    do {
      lVar6 = lVar12;
      if (*(longlong *)(*(longlong *)(param_1 + 0x408) + lVar12 * 8) == lVar2) break;
      lVar12 = lVar12 + 1;
      lVar6 = -1;
    } while (*(int *)(param_1 + 0x410) != lVar12);
  }
  lVar12 = param_1 + 0xe38;
  if (*(longlong *)(param_1 + 0xe58) != 0) {
    lVar12 = *(longlong *)(param_1 + 0xe58);
  }
  iVar13 = *(int *)(lVar12 + (longlong)(int)lVar6 * 0x20);
  lVar6 = *(longlong *)(lVar2 + 0x13ad8);
  if (lVar6 == 0) {
    uVar14 = *(uint *)(lVar2 + 0x1de0);
    if (uVar14 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0;
      if (uVar14 != 0) {
        for (; (uVar14 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
        }
      }
    }
    if (*(longlong *)(lVar2 + 0x3108) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(*(longlong *)(lVar2 + 0x3108) + 0x24);
    }
    lVar6 = FUN_140c6b718(*(undefined8 *)(param_1 + 8),uVar11,iVar5);
  }
  if ((((((*(int *)(param_1 + 0x3f0) == 1) && (*(longlong *)(lVar2 + 0x3108) != 0)) && (iVar13 == 2)
        ) && ((DAT_14c760558 != 0 && ((*(uint *)(param_1 + 0xf8) & 0x100000) != 0)))) &&
      ((*(char *)(lVar6 + 0x8fc) == '\x01' &&
       ((*(longlong *)(lVar6 + 0x848) != 0 && (*(longlong *)(lVar6 + 0x850) != 0)))))) &&
     ((*(longlong *)(lVar6 + 0x858) != 0 && (*(int *)(DAT_14c9f2930 + 4) != 0)))) {
    local_78 = *(undefined8 *)(param_3 + 0x1b8);
    uVar14 = (int)DAT_14c76055c / 2;
    if (*(float *)(lVar2 + 0x2900) < 6.0) {
      uVar14 = DAT_14c76055c;
    }
    uVar4 = 8;
    if (uVar14 < 8) {
      uVar4 = uVar14;
    }
    local_80 = *(undefined8 *)(param_3 + 0x1c8);
    uVar7 = (ulonglong)((uVar4 - 1) + (uint)(uVar4 == 0)) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar13 = 1 << ((byte)lVar12 & 0x1f);
    local_cc = 0x80 >> ((byte)lVar12 & 0x1f);
    local_88 = FUN_14473c272(param_2,lVar6 + 0x848,0);
    local_90 = FUN_14473c272(param_2,lVar6 + 0x850,0);
    local_98 = FUN_14473c272(param_2,lVar6 + 0x858,0);
    uVar7 = *(ulonglong *)(lVar6 + 0xa24);
    uVar14 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar14 = DAT_14ca84e48;
    }
    local_60 = uVar14 + (uVar14 == 0);
    local_50 = (undefined *)0x0;
    iStack_5c = 1;
    uStack_58 = 0x10109;
    puVar1 = (ulonglong *)(param_2 + 0x70);
    uVar16 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar10 = uVar16 + 0x150;
    local_d8 = puVar1;
    local_b4 = iVar13;
    if (*(ulonglong *)(param_2 + 0x78) < uVar10) {
      FUN_140023dd8(puVar1,0x160);
      uVar16 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar10 = uVar16 + 0x150;
    }
    uVar14 = (int)((longlong)((ulonglong)(uint)((longlong)uVar7 >> 0x3f) << 0x20 | uVar7 >> 0x20) /
                  (longlong)iVar13) *
             (int)((longlong)((ulonglong)(uint)((int)uVar7 >> 0x1f) << 0x20 | uVar7 & 0xffffffff) /
                  (longlong)iVar13);
    *(ulonglong *)(param_2 + 0x70) = uVar10;
    FUN_1456bd266(uVar16,L"Lumen.RadiosityVisualizeProbeAllocator",&local_60,0);
    iVar13 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar13 + 1U) {
      FUN_144737178(param_2 + 0x188,iVar13);
    }
    puVar1 = local_d8;
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar13 * 8) = uVar16;
    *(int *)(uVar16 + 0x7c) = *(int *)(param_2 + 400) + -1;
    uVar4 = 0x10;
    if (DAT_14ca84e48 < 0x10) {
      uVar4 = DAT_14ca84e48;
    }
    local_60 = uVar4 + (uVar4 == 0);
    uStack_58 = 0x10109;
    uVar4 = DAT_14ca84e48;
    if (uVar14 < DAT_14ca84e48) {
      uVar4 = uVar14;
    }
    local_50 = (undefined *)0x0;
    iStack_5c = uVar4 + (uVar4 == 0);
    uVar10 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar7 = uVar10 + 0x150;
    local_c8 = uVar16;
    if (*(ulonglong *)(param_2 + 0x78) < uVar7) {
      FUN_140023dd8(local_d8,0x160);
      uVar10 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar7 = uVar10 + 0x150;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar7;
    FUN_1456bd266(uVar10,L"Lumen.RadiosityVisualizeProbeData",&local_60,0);
    iVar13 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar13 + 1U) {
      FUN_144737178(param_2 + 0x188,iVar13);
    }
    puVar1 = local_d8;
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar13 * 8) = uVar10;
    *(int *)(uVar10 + 0x7c) = *(int *)(param_2 + 400) + -1;
    cVar9 = *(char *)(local_c8 + 0x68);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar15 + 8;
    local_a8 = uVar10;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(local_d8,0x48);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar15 + 8;
    }
    local_c0 = param_2 + 0x198;
    *(undefined8 **)(param_2 + 0x70) = puVar8;
    puVar15[1] = *(undefined8 *)(local_c8 + 8);
    puVar15[2] = 0;
    *(undefined1 *)(puVar15 + 3) = 2;
    *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar15 + 5) = 0;
    *puVar15 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar15 + 6) = cVar9 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar15 + 0x31) = 0;
    puVar15[7] = local_c8;
    iVar13 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
      FUN_1447568fc(local_c0,iVar13);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar15;
    *(int *)((longlong)puVar15 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    FUN_1405bfba3(param_2,puVar15,0,2);
    puVar1 = local_d8;
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar8 = puVar15 + 10;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(local_d8,0x60);
      puVar15 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar8 = puVar15 + 10;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar8;
    *puVar15 = &PTR_FUN_14a266288;
    puVar15[2] = 0;
    *(undefined1 *)(puVar15 + 3) = 1;
    puVar15[4] = 0;
    *(undefined1 *)(puVar15 + 5) = 1;
    local_a0 = param_2 + 0x98;
    puVar15[6] = 0;
    puVar15[7] = 0;
    iVar13 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar13 + 1U) {
      FUN_1448cfae8(local_a0,iVar13);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar13 * 8) = puVar15;
    puVar15[2] = *(undefined8 *)(lVar2 + 0x18);
    *(undefined1 *)(puVar15 + 3) = 1;
    uVar3 = *(undefined8 *)(param_4 + 0xe8);
    lVar12 = FUN_1449a4512();
    puVar1 = local_d8;
    cVar9 = '\x02';
    if (*(char *)(lVar12 + 0x41) != '\x03') {
      cVar9 = *(char *)(lVar12 + 0x41);
    }
    puVar15[4] = uVar3;
    *(char *)(puVar15 + 5) = cVar9;
    *(float *)(puVar15 + 8) = (float)*(int *)(DAT_14c9f2948 + 4);
    *(uint *)((longlong)puVar15 + 0x44) = local_cc;
    *(int *)(puVar15 + 9) = local_b4;
    local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,uVar14);
    *(uint *)((longlong)puVar15 + 0x4c) = uVar14;
    cVar9 = *(char *)(local_c8 + 0x68);
    puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar17 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(local_d8,0x48);
      puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar17 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar8;
    puVar17[1] = *(undefined8 *)(local_c8 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 2;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar17 + 5) = 0;
    *puVar17 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar17 + 6) = cVar9 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar17 + 0x31) = 0;
    puVar17[7] = local_c8;
    iVar13 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
      FUN_1447568fc(local_c0,iVar13);
    }
    puVar1 = local_d8;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar15[6] = puVar17;
    cVar9 = *(char *)(local_a8 + 0x68);
    puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar17 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(local_d8,0x48);
      puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar17 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar8;
    puVar17[1] = *(undefined8 *)(local_a8 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 2;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar17 + 5) = 0;
    *puVar17 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar17 + 6) = cVar9 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar17 + 0x31) = 0;
    puVar17[7] = local_a8;
    iVar13 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
      FUN_1447568fc(local_c0,iVar13);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar15[7] = puVar17;
    FUN_1471eddfe(*(undefined8 *)(lVar2 + 0x13818),&local_60);
    iVar5 = local_cc * local_cc * *(int *)(lVar6 + 0x67c + (ulonglong)*(byte *)(lVar6 + 0x748) * 4);
    iVar13 = iVar5 + 0x3f;
    local_6c = iVar5 + 0x7e;
    if (-1 < iVar13) {
      local_6c = iVar13;
    }
    local_6c = local_6c >> 6;
    local_64 = 1;
    if (DAT_14ca84f24 < local_6c) {
      local_68 = local_6c + 0xfe;
      if (-1 < local_6c + 0x7f) {
        local_68 = local_6c + 0x7f;
      }
      local_68 = local_68 >> 7;
      local_6c = 0x80;
    }
    else {
      local_68 = 1;
    }
    uVar11 = local_b0._0_4_;
    if (DAT_14ca84f28 < local_68) {
      local_64 = local_68 + 0xfe;
      if (-1 < local_68 + 0x7f) {
        local_64 = local_68 + 0x7f;
      }
      local_64 = local_64 >> 7;
      local_68 = 0x80;
    }
    local_e8 = &local_6c;
    FUN_1471ede6b(param_2,&local_6d,&local_60,puVar15 + 2);
    puVar1 = local_d8;
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar8 = puVar15 + 0x32;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(local_d8,0x1a0);
      puVar15 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar8 = puVar15 + 0x32;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar8;
    *puVar15 = &PTR_FUN_14a2662a8;
    local_b0 = puVar15 + 2;
    FUN_1471feb64();
    iVar13 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar13 + 1U) {
      FUN_1448cfae8(local_a0,iVar13);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar13 * 8) = puVar15;
    puVar15[2] = *(undefined8 *)(lVar2 + 0x18);
    *(undefined1 *)(puVar15 + 3) = 1;
    uVar3 = *(undefined8 *)(param_4 + 0xe8);
    lVar6 = FUN_1449a4512();
    puVar1 = local_d8;
    cVar9 = '\x02';
    if (*(char *)(lVar6 + 0x41) != '\x03') {
      cVar9 = *(char *)(lVar6 + 0x41);
    }
    puVar15[4] = uVar3;
    *(char *)(puVar15 + 5) = cVar9;
    *(float *)(puVar15 + 8) = (float)*(int *)(DAT_14c9f2948 + 4);
    *(uint *)((longlong)puVar15 + 0x44) = local_cc;
    *(int *)(puVar15 + 9) = local_b4;
    *(undefined4 *)((longlong)puVar15 + 0x4c) = uVar11;
    cVar9 = *(char *)(local_c8 + 0x68);
    puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar17 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(local_d8,0x50);
      puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar17 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar8;
    puVar17[1] = *(undefined8 *)(local_c8 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 3;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *puVar17 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar17 + 5) = cVar9 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar17 + 0x2c) = 0xffffffff00000000;
    puVar17[7] = 0;
    puVar17[8] = local_c8;
    iVar13 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
      FUN_1447568fc(local_c0,iVar13);
    }
    puVar1 = local_d8;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar15[6] = puVar17;
    cVar9 = *(char *)(local_a8 + 0x68);
    puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar17 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(local_d8,0x50);
      puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar17 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar8;
    puVar17[1] = *(undefined8 *)(local_a8 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 3;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *puVar17 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar17 + 5) = cVar9 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar17 + 0x2c) = 0xffffffff00000000;
    puVar17[7] = 0;
    puVar17[8] = local_a8;
    iVar13 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
      FUN_1447568fc(local_c0,iVar13);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar15[7] = puVar17;
    puVar15[10] = *(undefined8 *)(lVar2 + 0x18);
    *(undefined1 *)(puVar15 + 0xb) = 1;
    uVar3 = *(undefined8 *)(param_4 + 0xe8);
    lVar6 = FUN_1449a4512();
    cVar9 = '\x02';
    if (*(char *)(lVar6 + 0x41) != '\x03') {
      cVar9 = *(char *)(lVar6 + 0x41);
    }
    puVar15[0xc] = uVar3;
    *(char *)(puVar15 + 0xd) = cVar9;
    puVar15[0xe] = local_88;
    puVar15[0xf] = local_90;
    puVar15[0x10] = local_98;
    puVar15[0x2a] = local_80;
    puVar15[0x2b] = 0;
    *(undefined2 *)(puVar15 + 0x2c) = 0x100;
    *(undefined4 *)((longlong)puVar15 + 0x164) = 0x22;
    puVar15[0x12] = local_78;
    puVar15[0x13] = 0;
    *(undefined4 *)(puVar15 + 0x14) = 0xffff0001;
    FUN_1471fec70();
    FUN_140069376(param_2);
    puVar1 = local_d8;
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar15 + 0x3a;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(local_d8,0x1d8);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar15 + 0x3a;
    }
    puVar17 = local_b0;
    *local_d8 = (ulonglong)puVar8;
    local_60 = (int)local_b0;
    iStack_5c = (int)((ulonglong)local_b0 >> 0x20);
    uStack_58 = (undefined4)DAT_14c9f7bf8;
    uStack_54 = (undefined4)((ulonglong)DAT_14c9f7bf8 >> 0x20);
    if (DAT_14c9f7bf8 != 0) {
      LOCK();
      *(int *)(DAT_14c9f7bf8 + 8) = *(int *)(DAT_14c9f7bf8 + 8) + 1;
      UNLOCK();
    }
    local_50 = &DAT_14c9f7bb0;
    local_e8 = (int *)CONCAT71(local_e8._1_7_,2);
    FUN_140068f1a(puVar15,&local_6d,&local_60,1);
    *puVar15 = &PTR_FUN_14a2662b0;
    puVar15[0x37] = puVar17;
    puVar15[0x38] = lVar2;
    *(undefined4 *)(puVar15 + 0x39) = uVar11;
    iVar13 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar13 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar13);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar13 * 8) = puVar15;
    *(int *)((longlong)puVar15 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d3bb50 FUN_142d3bb50 body=69 status=ok
// SIG undefined FUN_142d3bb50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3bb50(void)

{
  _DAT_14c9f3628 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3bb92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3630,1);
  return;
}



// FUNCTION 142d3bb95 FUN_142d3bb95 body=69 status=ok
// SIG undefined FUN_142d3bb95(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3bb95(void)

{
  _DAT_14c9f3640 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3bbd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3648,1);
  return;
}



// FUNCTION 142d3bbda FUN_142d3bbda body=69 status=ok
// SIG undefined FUN_142d3bbda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3bbda(void)

{
  _DAT_14c9f3658 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3bc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3660,1);
  return;
}



// FUNCTION 142d3bc1f FUN_142d3bc1f body=69 status=ok
// SIG undefined FUN_142d3bc1f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3bc1f(void)

{
  _DAT_14c9f3670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3bc61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3678,1);
  return;
}



// FUNCTION 142d3bc88 FUN_142d3bc88 body=2725 status=ok
// SIG undefined FUN_142d3bc88(void)

void FUN_142d3bc88(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,void *param_6,undefined8 *param_7,longlong *param_8,
                  void *param_9,undefined4 *param_10,int param_11,byte param_12,byte param_13,
                  char param_14,byte param_15,char param_16,undefined2 param_17)

{
  longlong *plVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  char cVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined1 **local_170;
  undefined2 local_168;
  longlong local_158;
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f5;
  undefined1 *local_f4;
  undefined4 local_ec;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 local_d8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_140 = *(longlong *)(*param_8 + 0x40);
  local_128 = *(longlong *)(param_8[1] + 0x40);
  local_d8 = 0;
  uVar9 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar9 = DAT_14ca84e48;
  }
  local_e8 = uVar9 + (uVar9 == 0);
  uStack_e4 = 1;
  uStack_e0 = 0x4189;
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar19 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar22 = uVar19 + 0x150;
  local_130 = param_3;
  local_120 = param_2;
  if (*(ulonglong *)(param_1 + 0x78) < uVar22) {
    FUN_140023dd8(plVar1,0x160);
    uVar19 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar22 = uVar19 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar22;
  FUN_1456bd266(uVar19,L"Lumen.Reflection.CompactTracingIndirectArgs",&local_e8,0);
  iVar4 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar4 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar4);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar4 * 8) = uVar19;
  *(int *)(uVar19 + 0x7c) = *(int *)(param_1 + 400) + -1;
  lVar2 = DAT_14c9eccf0;
  uVar22 = 1;
  if (param_14 != '\0') {
    uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_4 + 0x3090) * 2);
    if ((DAT_14ca84f10 == '\x01') && (DAT_14ca84f14 < 0x21)) {
      iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if ((iVar4 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar4 == 2)))) {
        uVar11 = 0;
      }
      else if (iVar4 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar11 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar11 = 1;
      }
      uVar22 = 0x20;
      if (*(int *)(lVar2 + uVar11 * 4) != 0) goto LAB_142d3be4d;
    }
    uVar22 = (ulonglong)((uint)(&DAT_14ca814d8)[(ulonglong)uVar3 * 0xf] >> 0x14 & 0x20) + 0x20;
  }
LAB_142d3be4d:
  puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar20 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(plVar1,0x40);
    puVar20 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar20 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  *puVar20 = &PTR_FUN_14a2663b8;
  lVar2 = param_1 + 0x98;
  puVar20[2] = 0;
  puVar20[3] = 0;
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(lVar2,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar20;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar16 + 9;
  local_138 = lVar2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(plVar1,0x50);
    puVar16 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar16 + 9;
  }
  local_158 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  puVar16[1] = *(undefined8 *)(local_140 + 8);
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 3;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
  *puVar16 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar16 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar16 + 0x2c) = 0xffffffff00000000;
  puVar16[7] = 0;
  puVar16[8] = local_140;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  local_150 = plVar1;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_158,iVar4);
  }
  plVar1 = local_150;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar20[2] = puVar16;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar16 + 8;
  local_148 = param_4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(local_150,0x48);
    puVar16 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar16 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  puVar16[1] = *(undefined8 *)(uVar19 + 8);
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 2;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar16 + 5) = 0;
  *puVar16 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar16 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar16 + 0x32) = 0;
  puVar16[7] = uVar19;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_158,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar20[3] = puVar16;
  puVar20[4] = uVar22 | 0x100000000;
  FUN_1471ee862(*(undefined8 *)(local_148 + 0x13818),&local_e8);
  local_170 = &local_f4;
  local_f4 = &DAT_100000001;
  local_ec = 1;
  local_178 = puVar20 + 2;
  FUN_1471ee8cf(param_1,&local_f5,param_17,&local_e8);
  plVar1 = local_150;
  puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar20 + 0xb8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(local_150,0x5d0);
    puVar20 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar20 + 0xb8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  *puVar20 = &PTR_FUN_14a2663f8;
  puVar7 = puVar20 + 2;
  FUN_1471ff594(puVar7);
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(local_138,iVar4);
  }
  lVar2 = local_148;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar20;
  local_178 = puVar7;
  FUN_1471dcd84(param_1,local_130,local_148,param_5);
  plVar1 = local_150;
  puVar20[0x40] = uVar19;
  *(undefined4 *)(puVar20 + 0x41) = 0x14;
  puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar16 = puVar17 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
    FUN_140023dd8(local_150,0x50);
    puVar17 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar16 = puVar17 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar16;
  puVar17[1] = *(undefined8 *)(local_140 + 8);
  puVar17[2] = 0;
  *(undefined1 *)(puVar17 + 3) = 3;
  *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
  *puVar17 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar17 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar17 + 0x2c) = 0xffffffff00000000;
  puVar17[7] = 0;
  puVar17[8] = local_140;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_158,iVar4);
  }
  plVar1 = local_150;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar17;
  *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar20[0x42] = puVar17;
  puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar16 = puVar17 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
    FUN_140023dd8(local_150,0x50);
    puVar17 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar16 = puVar17 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar16;
  puVar17[1] = *(undefined8 *)(local_128 + 8);
  puVar17[2] = 0;
  *(undefined1 *)(puVar17 + 3) = 3;
  *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
  *puVar17 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar17 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar17 + 0x2c) = 0xffffffff00000000;
  puVar17[7] = 0;
  puVar17[8] = local_128;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_158,iVar4);
  }
  lVar13 = local_120;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar17;
  *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar20[0x43] = puVar17;
  FUN_142d3c72e(&local_e8,param_1,lVar2,local_120);
  piVar18 = &local_e8;
  puVar16 = puVar20 + 0x44;
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar16 = *(undefined8 *)piVar18;
    piVar18 = piVar18 + 2;
    puVar16 = puVar16 + 1;
  }
  if ((*(longlong *)(puVar20[0x44] + 0x38) == *(longlong *)(lVar13 + 0x1b8)) || (puVar20[0xd] == 0))
  {
    uVar8 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
    puVar20[0xd] = uVar8;
  }
  puVar20[0x54] = *(undefined8 *)(lVar2 + 0x136f0);
  *(undefined4 *)(puVar20 + 0x55) = DAT_14c760598;
  *(undefined4 *)((longlong)puVar20 + 0x2ac) = DAT_14c76059c;
  uVar24 = 0x7f7fffff;
  if (((*(byte *)(*(longlong *)(lVar2 + 8) + 0x60) & 2) == 0) && (0 < *(int *)(DAT_14ca3aa08 + 4)))
  {
    uVar24 = *(undefined4 *)(DAT_14ca3aa38 + 4);
  }
  *(undefined4 *)(puVar20 + 0x56) = uVar24;
  *(float *)((longlong)puVar20 + 0x2b4) = DAT_14c7605a0 * *(float *)(lVar2 + 0x109c);
  fVar25 = *(float *)(DAT_14c9f4648 + 4);
  if (180.0 <= fVar25) {
    fVar25 = 180.0;
  }
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  fVar25 = cosf(fVar25 * 0.017453292);
  *(float *)(puVar20 + 0x57) = fVar25;
  *(uint *)((longlong)puVar20 + 700) = (uint)param_15;
  iVar4 = *(int *)(DAT_14c9ed338 + 4);
  if (1 < iVar4) {
    iVar4 = 2;
  }
  iVar10 = 0;
  if (0 < iVar4) {
    iVar10 = iVar4;
  }
  *(int *)(puVar20 + 0x58) = iVar10;
  *(uint *)((longlong)puVar20 + 0x2c4) = (uint)(*(int *)(DAT_14c9ed320 + 4) != 0);
  bVar23 = *(int *)(DAT_14c9ed350 + 4) != 0;
  if (*(int *)(DAT_14c9ed350 + 4) == 2) {
    bVar23 = param_11 != 2;
  }
  *(uint *)(puVar20 + 0x59) = (uint)bVar23;
  *(uint *)((longlong)puVar20 + 0x2cc) = (uint)(*(int *)(DAT_14c9ed368 + 4) != 0);
  fVar25 = *(float *)(DAT_14c9ed3b0 + 4);
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  *(float *)(puVar20 + 0x5a) = fVar25;
  uVar24 = *(undefined4 *)(DAT_14c9f5cb8 + 4);
  puVar20[0x5c] = 0;
  *(undefined4 *)(puVar20 + 0x5d) = uVar24;
  *(undefined4 *)((longlong)puVar20 + 0x2d4) = *(undefined4 *)(DAT_14c9ed398 + 4);
  *(uint *)(puVar20 + 0x5b) = (uint)param_12;
  *(uint *)((longlong)puVar20 + 0x2dc) = (uint)param_13;
  memcpy(puVar20 + 0x5e,param_6,0x100);
  puVar16 = puVar20 + 0x7e;
  for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar16 = *param_7;
    param_7 = param_7 + 1;
    puVar16 = puVar16 + 1;
  }
  memcpy(puVar20 + 0x88,param_9,0x168);
  if (param_16 != '\0') {
    uVar8 = *(undefined8 *)(lVar2 + 0x11c90);
    lVar13 = FUN_1414708b2();
    cVar21 = '\x02';
    if (*(char *)(lVar13 + 0x41) != '\x03') {
      cVar21 = *(char *)(lVar13 + 0x41);
    }
    puVar20[0xb6] = uVar8;
    *(char *)(puVar20 + 0xb7) = cVar21;
  }
  iVar4 = param_10[1];
  pwVar14 = L"default";
  if (iVar4 == 1) {
    pwVar14 = L"far-field";
  }
  pwVar15 = L"hit-lighting";
  if (iVar4 != 2) {
    pwVar15 = pwVar14;
  }
  FUN_140056680(&local_e8,pwVar15);
  if (param_14 == '\0') {
    local_170 = (undefined1 **)puVar20[0x40];
    local_118 = *param_10;
    uStack_114 = param_10[1];
    uStack_110 = param_10[2];
    uStack_10c = param_10[3];
    local_168 = CONCAT11(local_168._1_1_,iVar4 != 2);
    local_178 = puVar7;
    FUN_1471eeabe(param_1,&local_f4,lVar2);
  }
  else {
    local_170 = (undefined1 **)puVar20[0x40];
    local_108 = *param_10;
    uStack_104 = param_10[1];
    uStack_100 = param_10[2];
    uStack_fc = param_10[3];
    local_168 = param_17;
    local_178 = puVar7;
    FUN_1471ee99a(param_1,&local_f4,lVar2);
  }
  if (CONCAT44(uStack_e4,local_e8) != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d3c72e FUN_142d3c72e body=1763 status=ok
// SIG undefined FUN_142d3c72e(void)

undefined8 * FUN_142d3c72e(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined2 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_168 [40];
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [96];
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)(param_4 + 0x1b8);
  local_138 = lVar3;
  if (*(longlong *)(param_3 + 0x133a8) == 0) {
    local_128 = *(undefined8 *)(param_3 + 0x30f8);
    iVar9 = *(int *)(param_4 + 0x20);
    iVar10 = *(int *)(param_4 + 0x24);
    if ((*(longlong *)(param_3 + 0x131e0) == 0) || (DAT_14c9f4548 != 1)) {
      if (*(longlong *)(param_3 + 0x131d8) == 0) {
        iVar12 = -1;
        iVar7 = (int)((ulonglong)local_128 >> 0x20);
        iVar6 = *(int *)(param_3 + 0x3104) - iVar7;
        iVar8 = *(int *)(param_3 + 0x3100) - (int)local_128;
      }
      else {
        iVar12 = -1;
        lVar3 = FUN_14473c272(param_2,param_3 + 0x131d8,0);
        local_128 = *(undefined8 *)(param_3 + 0x125c0);
        iVar7 = (int)((ulonglong)local_128 >> 0x20);
        iVar6 = *(int *)(param_3 + 0x125cc) - iVar7;
        iVar8 = *(int *)(param_3 + 0x125c8) - (int)local_128;
        iVar9 = *(int *)(lVar3 + 0x84);
        iVar10 = *(int *)(lVar3 + 0x88);
      }
      goto LAB_142d3c7ed;
    }
    lVar3 = FUN_14473c272(param_2,param_3 + 0x131e0,0);
    local_128 = *(undefined8 *)(param_3 + 0x131f8);
    iVar7 = (int)((ulonglong)local_128 >> 0x20);
    iVar6 = *(int *)(param_3 + 0x13204) - iVar7;
    iVar8 = *(int *)(param_3 + 0x13200) - (int)local_128;
    iVar9 = *(int *)(lVar3 + 0x84);
    iVar10 = *(int *)(lVar3 + 0x88);
    if (1 < *(ushort *)(lVar3 + 0x8e)) {
      iVar12 = *(int *)(param_3 + 0x13208);
      goto LAB_142d3c7ed;
    }
  }
  else {
    lVar3 = FUN_14473c272(param_2,param_3 + 0x133a8,0);
    local_128 = *(undefined8 *)(param_3 + 0x133c0);
    iVar6 = *(int *)(param_3 + 0x133cc) - (int)((ulonglong)local_128 >> 0x20);
    iVar8 = *(int *)(param_3 + 0x133c8) - (int)local_128;
    iVar9 = *(int *)(lVar3 + 0x84);
    iVar10 = *(int *)(lVar3 + 0x88);
  }
  iVar7 = (int)((ulonglong)local_128 >> 0x20);
  iVar12 = -1;
LAB_142d3c7ed:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar11 = *(int *)(param_3 + 0x30fc);
  fVar17 = (float)(*(int *)(param_3 + 0x3104) - iVar11);
  iVar2 = *(int *)(param_3 + 0x30f8);
  fVar22 = (float)(*(int *)(param_3 + 0x3100) - iVar2);
  fVar16 = fVar17 / (float)(*(int *)(param_3 + 0x137cc) * 2);
  fVar15 = fVar22 / (float)(*(int *)(param_3 + 0x137c8) * 2);
  fVar20 = 1.0;
  fVar18 = 1.0 / fVar16;
  fVar19 = 1.0 / fVar15;
  *(float *)(param_1 + 4) = fVar15;
  *(float *)((longlong)param_1 + 0x24) = fVar16;
  *(float *)(param_1 + 5) = fVar19;
  *(float *)((longlong)param_1 + 0x2c) = fVar18;
  fVar15 = 1.0 / (float)*(int *)(param_4 + 0x20);
  fVar16 = 1.0 / (float)*(int *)(param_4 + 0x24);
  fVar23 = fVar16 * fVar17 * -0.5;
  fVar21 = fVar15 * fVar22 * 0.5;
  *(float *)(param_1 + 0xe) = (fVar19 + fVar19) * fVar21;
  *(float *)((longlong)param_1 + 0x74) = fVar18 * -2.0 * fVar23;
  *(float *)(param_1 + 0xf) = ((float)iVar2 + fVar22 * 0.5) * fVar15 - fVar21;
  *(float *)((longlong)param_1 + 0x7c) = fVar23 + ((float)iVar11 + fVar17 * 0.5) * fVar16;
  *(float *)(param_1 + 8) = (float)iVar8 * 0.5 * (1.0 / (float)iVar9);
  *(float *)((longlong)param_1 + 0x44) = (float)-iVar6 * 0.5 * (1.0 / (float)iVar10);
  *(float *)(param_1 + 9) = ((float)(int)local_128 + (float)iVar8 * 0.5) * (1.0 / (float)iVar9);
  *(float *)((longlong)param_1 + 0x4c) = ((float)iVar6 * 0.5 + (float)iVar7) * (1.0 / (float)iVar10)
  ;
  iVar10 = *(int *)(param_3 + 0x125c0);
  iVar9 = *(int *)(param_3 + 0x125c4);
  iVar11 = *(int *)(param_3 + 0x125cc) - iVar9;
  fVar17 = (float)(*(int *)(param_3 + 0x125c8) - iVar10) * 0.5;
  *(float *)(param_1 + 10) = fVar17 * fVar15;
  *(float *)((longlong)param_1 + 0x54) = (float)-iVar11 * 0.5 * fVar16;
  *(float *)(param_1 + 0xb) = ((float)iVar10 + fVar17) * fVar15;
  *(float *)((longlong)param_1 + 0x5c) = ((float)iVar11 * 0.5 + (float)iVar9) * fVar16;
  local_120 = CONCAT44(iVar6 + iVar7,iVar8 + (int)local_128);
  local_130 = *(undefined8 *)(lVar3 + 0x84);
  local_140 = param_4;
  FUN_144a2c7c2(local_118);
  param_1[6] = local_b8;
  param_1[7] = local_b0;
  if (lVar3 != local_138) {
    fVar20 = *(float *)(param_3 + 0x13694) / *(float *)(param_3 + 0x13170);
  }
  *(float *)(param_1 + 0xc) = fVar20;
  uVar1 = *(undefined1 *)(lVar3 + 0x90);
  if (iVar12 < 0) {
    if ((*(char *)(lVar3 + 0x92) == '\x04') || (*(char *)(lVar3 + 0x92) == '\x01')) {
      uVar14 = *(undefined2 *)(lVar3 + 0x8e);
    }
    else {
      uVar14 = 0;
    }
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar13 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x48);
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar13 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar4;
    puVar13[1] = *(undefined8 *)(lVar3 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 1;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *puVar13 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar13 + 5) = 0;
    *(undefined1 *)((longlong)puVar13 + 0x2a) = uVar1;
    *(undefined1 *)((longlong)puVar13 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x2e) = uVar14;
    *(undefined1 *)(puVar13 + 6) = 0;
    *(undefined1 *)((longlong)puVar13 + 0x32) = 0;
  }
  else {
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar13 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x48);
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar13 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar4;
    puVar13[1] = *(undefined8 *)(lVar3 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 1;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *puVar13 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar13 + 5) = 0;
    *(undefined1 *)((longlong)puVar13 + 0x2a) = uVar1;
    *(undefined1 *)((longlong)puVar13 + 0x2b) = 0;
    *(short *)((longlong)puVar13 + 0x2c) = (short)iVar12;
    *(undefined4 *)((longlong)puVar13 + 0x2e) = 1;
    *(undefined1 *)((longlong)puVar13 + 0x32) = 1;
  }
  puVar13[7] = lVar3;
  iVar10 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar10 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar10 + 1U) {
    FUN_1447568fc((longlong *)(param_2 + 0x198),iVar10);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar10 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  *param_1 = puVar13;
  lVar3 = *(longlong *)(param_3 + 0x3108);
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x1c40) == 0)) {
    uVar5 = *(undefined8 *)(local_140 + 0x1f0);
  }
  else {
    uVar5 = FUN_14473c272(param_2,lVar3 + 0x1c40,0);
  }
  param_1[1] = uVar5;
  lVar3 = *(longlong *)(param_3 + 0x136f8);
  param_1[2] = lVar3;
  iVar10 = *(int *)(lVar3 + 0x88);
  *(float *)(param_1 + 0xd) = 1.0 / (float)*(int *)(lVar3 + 0x84);
  *(float *)((longlong)param_1 + 0x6c) = 1.0 / (float)iVar10;
  if ((local_a0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d3ce12 FUN_142d3ce12 body=9434 status=ok
// SIG undefined FUN_142d3ce12(void)

undefined8 *
FUN_142d3ce12(undefined8 *param_1,longlong param_2,longlong param_3,void *param_4,void *param_5,
             undefined8 *param_6,byte param_7,undefined4 param_8,undefined4 param_9,ushort param_10,
             int param_11,char param_12)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  char cVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  uint *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ushort uVar24;
  uint uVar25;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 *local_198;
  ulonglong *local_190;
  int local_184;
  longlong local_180;
  uint local_174;
  longlong local_170;
  longlong local_168;
  undefined8 *local_160;
  longlong local_158;
  longlong local_150;
  ulonglong local_148;
  ulonglong local_140;
  uint local_134;
  void *local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  longlong local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  ulonglong local_d0;
  undefined4 local_c8 [4];
  longlong local_b8;
  longlong *local_a8;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  ulonglong local_70 [6];
  
  lVar15 = DAT_14ca97170;
  local_70[0] = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_170 = param_3;
  local_130 = param_4;
  if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) {
    uVar14 = 0;
  }
  else if (iVar6 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar14 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar14 = 1;
  }
  iVar6 = 1;
  local_160 = param_1;
  if (0 < *(int *)(lVar15 + uVar14 * 4)) {
    if (*(int *)(DAT_14ca5dc68 + 4) < 1) {
      uVar9 = FUN_147430fbd(*(undefined2 *)
                             (&DAT_14ca85070 + (longlong)*(int *)(local_170 + 0x3090) * 2));
    }
    else {
      puVar17 = (uint *)(*(longlong *)(local_170 + 0x118c8) + 0x18);
      if (*(longlong *)(local_170 + 0x118c8) == 0) {
        puVar17 = (uint *)(local_170 + 0x11828);
      }
      uVar9 = *puVar17;
    }
    uVar25 = 8;
    if (uVar9 < 8) {
      uVar25 = uVar9;
    }
    iVar6 = uVar25 + (uVar25 == 0);
  }
  local_d8 = (longlong *)0x0;
  uVar9 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar9 = DAT_14ca84e48;
  }
  local_e8._0_4_ = uVar9 + (uVar9 == 0);
  local_e8._4_4_ = 1;
  uStack_e0._0_4_ = 0x4109;
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar19 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar14 = uVar19 + 0x150;
  local_190 = puVar1;
  if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
    FUN_140023dd8(puVar1,0x160);
    uVar19 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar14 = uVar19 + 0x150;
  }
  lVar15 = param_2 + 0x188;
  *(ulonglong *)(param_2 + 0x70) = uVar14;
  FUN_1456bd266(uVar19,L"Lumen.Reflections.CompactedTraceTexelAllocator",&local_e8,0);
  iVar13 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar13 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar13 + 1U) {
    FUN_144737178(lVar15,iVar13);
  }
  puVar1 = local_190;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar13 * 8) = uVar19;
  *(int *)(uVar19 + 0x7c) = *(int *)(param_2 + 400) + -1;
  uVar25 = iVar6 * *(int *)((longlong)param_5 + 0x28) * *(int *)((longlong)param_5 + 0x2c);
  uVar9 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar9 = DAT_14ca84e48;
  }
  local_e8._0_4_ = uVar9 + (uVar9 == 0);
  uStack_e0._0_4_ = 0x4109;
  uVar9 = DAT_14ca84e48;
  if (uVar25 < DAT_14ca84e48) {
    uVar9 = uVar25;
  }
  local_d8 = (longlong *)0x0;
  local_e8._4_4_ = uVar9 + (uVar9 == 0);
  uVar20 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar14 = uVar20 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
    FUN_140023dd8(local_190,0x160);
    uVar20 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar14 = uVar20 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar14;
  local_174 = 0;
  FUN_1456bd266(uVar20,L"Lumen.Reflections.CompactedTraceTexelData",&local_e8,0);
  iVar6 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar6 + 1U) {
    FUN_144737178(lVar15,iVar6);
  }
  puVar1 = local_190;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar6 * 8) = uVar20;
  *(int *)(uVar20 + 0x7c) = *(int *)(param_2 + 400) + -1;
  if (((DAT_14c7605f8 == 0) || (DAT_14ca84f10 != '\x01')) ||
     ((0x20 < DAT_14ca84f14 ||
      ((DAT_14ca84f18 < 0x20 ||
       ((*(uint *)(&DAT_14ca814cc +
                  (ulonglong)
                  *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_170 + 0x3090) * 2) * 0x3c) &
        0x300) == 0)))))) {
    local_184 = 0x40;
  }
  else {
    local_174 = DAT_14c7605f4;
    if (DAT_14c7605f4 == 1) {
      local_184 = 0x40;
    }
    else if (DAT_14c7605f4 == 2) {
      local_184 = 0x80;
      local_174 = 1;
    }
    else {
      local_174 = 1;
      if (DAT_14c7605f4 < 5) {
        local_184 = 0x100;
      }
      else {
        local_184 = (uint)(8 < DAT_14c7605f4) * 0x200 + 0x200;
      }
    }
  }
  local_d8 = (longlong *)0x0;
  uVar9 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar9 = DAT_14ca84e48;
  }
  local_e8._0_4_ = uVar9 + (uVar9 == 0);
  local_e8._4_4_ = 1;
  uStack_e0._0_4_ = 0x4189;
  uVar23 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar14 = uVar23 + 0x150;
  local_134 = uVar25;
  if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
    FUN_140023dd8(local_190,0x160);
    uVar23 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar14 = uVar23 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar14;
  local_148 = uVar20;
  FUN_1456bd266(uVar23,L"Lumen.Reflections.CompactionIndirectArgs",&local_e8,0);
  iVar6 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar6 + 1U) {
    FUN_144737178(lVar15,iVar6);
  }
  puVar1 = local_190;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar6 * 8) = uVar23;
  *(int *)(uVar23 + 0x7c) = *(int *)(param_2 + 400) + -1;
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar18 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_190,0x50);
    puVar18 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar11 = puVar18 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  *puVar18 = &PTR_FUN_14a266568;
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 1;
  local_158 = param_2 + 0x98;
  puVar18[4] = 0;
  puVar18[5] = 0;
  puVar18[6] = 0;
  iVar6 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar6 + 1U) {
    FUN_1448cfae8(local_158,iVar6);
  }
  puVar1 = local_190;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar6 * 8) = puVar18;
  puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar21 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_190,0x48);
    puVar21 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar21 + 8;
  }
  local_180 = param_2 + 0x198;
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  puVar21[1] = *(undefined8 *)(uVar19 + 8);
  puVar21[2] = 0;
  *(undefined1 *)(puVar21 + 3) = 2;
  *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar21 + 5) = 0;
  *puVar21 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar21 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar21 + 0x32) = 0;
  puVar21[7] = uVar19;
  iVar6 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(local_180,iVar6);
  }
  puVar1 = local_190;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar21;
  *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar18[4] = puVar21;
  puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar21 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_190,0x48);
    puVar21 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar21 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  puVar21[1] = *(undefined8 *)(uVar23 + 8);
  puVar21[2] = 0;
  *(undefined1 *)(puVar21 + 3) = 2;
  *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar21 + 5) = 0;
  *puVar21 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar21 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar21 + 0x32) = 0;
  puVar21[7] = uVar23;
  iVar6 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(local_180,iVar6);
  }
  puVar1 = local_190;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar21;
  *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar18[5] = puVar21;
  lVar10 = param_6[7];
  puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar21 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_190,0x50);
    puVar21 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar21 + 9;
  }
  puVar22 = puVar18 + 2;
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  puVar21[1] = *(undefined8 *)(lVar10 + 8);
  puVar21[2] = 0;
  *(undefined1 *)(puVar21 + 3) = 3;
  *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
  *puVar21 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar21 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar21 + 0x2c) = 0xffffffff00000000;
  puVar21[7] = 0;
  puVar21[8] = lVar10;
  iVar6 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
  local_150 = lVar15;
  if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(local_180,iVar6);
  }
  lVar15 = local_170;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar21;
  *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar18[6] = puVar21;
  *(int *)(puVar18 + 7) = local_184;
  uVar4 = *(undefined8 *)(local_170 + 0x118d0);
  lVar10 = FUN_144a2c9be();
  cVar12 = '\x02';
  if (*(char *)(lVar10 + 0x41) != '\x03') {
    cVar12 = *(char *)(lVar10 + 0x41);
  }
  puVar18[2] = uVar4;
  *(char *)(puVar18 + 3) = cVar12;
  uVar4 = *(undefined8 *)(lVar15 + 0x13818);
  FUN_141573afe();
  FUN_1448e935e(uVar4,&local_e8,&DAT_14c9f4950,0);
  FUN_141573afe();
  uVar4 = CONCAT44(local_e8._4_4_,(int)local_e8);
  local_168 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
  FUN_141573c20();
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  uStack_e0._0_4_ = 0;
  uStack_e0._4_4_ = 0;
  FUN_1448f70da(uVar4,&DAT_14c9f6e98,puVar22,&local_e8);
  FUN_140069376(param_2);
  puVar1 = local_190;
  local_140 = uVar19;
  local_e8 = puVar22;
  if ((param_10 & 4) == 0) {
    uVar24 = param_10;
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_10 & 2) != 0)))))) {
      uVar24 = param_10 & 0xfff9 | 4;
    }
    puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar18 + 0x3d;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(local_190,0x1f0);
      puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar18 + 0x3d;
    }
    *local_190 = (ulonglong)puVar11;
    uStack_e0._0_4_ = (undefined4)DAT_14c9f6ee0;
    uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14c9f6ee0 >> 0x20);
    if (DAT_14c9f6ee0 != 0) {
      LOCK();
      *(int *)(DAT_14c9f6ee0 + 8) = *(int *)(DAT_14c9f6ee0 + 8) + 1;
      UNLOCK();
    }
    local_d8 = (longlong *)&DAT_14c9f6e98;
    local_1a8 = (undefined8 *)CONCAT71(local_1a8._1_7_,2);
    FUN_140068f1a(puVar18,&local_128,&local_e8,uVar24);
    *puVar18 = &PTR_FUN_14a266590;
    puVar18[0x37] = &DAT_14c9f6e98;
    puVar18[0x38] = puVar22;
    puVar18[0x39] = uVar4;
    puVar18[0x3a] = local_168;
    puVar18[0x3b] = &DAT_100000001;
    *(undefined4 *)(puVar18 + 0x3c) = 1;
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      uVar24 = param_10 & 0xfff9 | 2;
    }
    else {
      uVar24 = param_10;
      if (DAT_14c760ddc == 2 && (param_10 & 2) != 0) {
        uVar24 = param_10 & 0xfffd;
      }
    }
    puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar18 + 0x3e;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(local_190,0x1f8);
      puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar18 + 0x3e;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar11;
    uVar3 = *(undefined4 *)(param_2 + 0x660);
    uStack_e0._0_4_ = (undefined4)DAT_14c9f6ee0;
    uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14c9f6ee0 >> 0x20);
    if (DAT_14c9f6ee0 != 0) {
      LOCK();
      *(int *)(DAT_14c9f6ee0 + 8) = *(int *)(DAT_14c9f6ee0 + 8) + 1;
      UNLOCK();
    }
    local_d8 = (longlong *)&DAT_14c9f6e98;
    local_1a8 = (undefined8 *)CONCAT71(local_1a8._1_7_,2);
    FUN_140068f1a(puVar18,&local_128,&local_e8,uVar24);
    puVar18[0x37] = &DAT_14c9f6e98;
    puVar18[0x38] = puVar22;
    puVar18[0x39] = uVar4;
    puVar18[0x3a] = local_168;
    puVar18[0x3b] = &DAT_100000001;
    *(undefined4 *)(puVar18 + 0x3c) = 1;
    *puVar18 = &PTR_FUN_14a266570;
    *(undefined4 *)(puVar18 + 0x3d) = uVar3;
  }
  local_168 = param_2 + 0x168;
  iVar6 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar6 + 1U) {
    FUN_14470e57a(local_168,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar6 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar18);
  puVar1 = local_190;
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar18 + 0x56;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_190,0x2c0);
    puVar18 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar11 = puVar18 + 0x56;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  *puVar18 = &PTR_FUN_14a2665a8;
  puVar11 = puVar18 + 2;
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 1;
  puVar18[4] = 0;
  *(undefined1 *)(puVar18 + 5) = 1;
  puVar18[6] = 0;
  *(undefined1 *)(puVar18 + 7) = 1;
  puVar18[8] = 0;
  *(undefined1 *)(puVar18 + 9) = 1;
  puVar18[0xe] = 0;
  *(undefined1 *)(puVar18 + 0xf) = 1;
  puVar18[0x22] = 0;
  puVar18[0x40] = 0;
  puVar18[0x10] = 0;
  puVar18[0x11] = 0;
  puVar18[0x12] = 0;
  puVar18[0x13] = 0;
  puVar18[0x17] = 0;
  puVar18[0x18] = 0;
  puVar18[0x19] = 0;
  puVar18[0x1a] = 0;
  puVar18[0x1b] = 0;
  puVar18[0x1c] = 0;
  puVar18[0x1d] = 0;
  puVar18[0x1e] = 0;
  puVar18[0x1f] = 0;
  puVar18[0x20] = 0;
  puVar18[0x3e] = 0;
  puVar18[0x3c] = 0;
  puVar18[0x3d] = 0;
  puVar18[0x3a] = 0;
  puVar18[0x3b] = 0;
  puVar18[0x38] = 0;
  puVar18[0x39] = 0;
  puVar18[0x36] = 0;
  puVar18[0x37] = 0;
  puVar18[0x34] = 0;
  puVar18[0x35] = 0;
  puVar18[0x32] = 0;
  puVar18[0x33] = 0;
  *(undefined1 *)(puVar18 + 0x41) = 1;
  puVar18[0x42] = 0;
  puVar18[0x43] = 0;
  puVar18[0x44] = 0;
  puVar18[0x45] = 0;
  *(undefined4 *)(puVar18 + 0x46) = 4;
  puVar18[0x47] = 0;
  *(undefined4 *)(puVar18 + 0x48) = 4;
  puVar18[0x49] = 0;
  *(undefined4 *)(puVar18 + 0x4a) = 4;
  puVar18[0x4c] = 0;
  *(undefined1 *)(puVar18 + 0x4d) = 1;
  puVar18[0x52] = 0;
  puVar18[0x53] = 0;
  puVar18[0x50] = 0;
  puVar18[0x51] = 0;
  *(undefined4 *)(puVar18 + 0x54) = 4;
  iVar6 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar6 + 1U) {
    FUN_1448cfae8(local_158,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar6 * 8) = puVar18;
  memcpy(puVar11,local_130,0x100);
  memcpy(puVar18 + 0x22,param_5,0x100);
  puVar1 = local_190;
  puVar21 = param_6;
  puVar22 = puVar18 + 0x42;
  for (lVar15 = 9; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar22 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_190,0x48);
    puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar22 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  puVar22[1] = *(undefined8 *)(local_140 + 8);
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 2;
  *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar22 + 5) = 0;
  *puVar22 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar22 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar22 + 0x32) = 0;
  puVar22[7] = local_140;
  iVar6 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(local_180,iVar6);
  }
  puVar1 = local_190;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar18[0x50] = puVar22;
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar22 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_190,0x48);
    puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar22 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  puVar22[1] = *(undefined8 *)(local_148 + 8);
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 2;
  *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar22 + 5) = 0;
  *puVar22 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar22 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar22 + 0x32) = 0;
  puVar22[7] = local_148;
  iVar6 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(local_180,iVar6);
  }
  puVar1 = local_190;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar18[0x51] = puVar22;
  lVar15 = param_6[7];
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar22 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_190,0x50);
    puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar22 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  puVar22[1] = *(undefined8 *)(lVar15 + 8);
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 3;
  *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
  *puVar22 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar22 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
  puVar22[7] = 0;
  puVar22[8] = lVar15;
  iVar6 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(local_180,iVar6);
  }
  lVar15 = local_170;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar18[0x52] = puVar22;
  *(uint *)(puVar18 + 0x4e) = (uint)param_7;
  *(undefined4 *)((longlong)puVar18 + 0x274) = param_8;
  *(undefined4 *)(puVar18 + 0x4f) = param_9;
  uVar4 = *(undefined8 *)(local_170 + 0x118d0);
  lVar10 = FUN_144a2c9be();
  cVar12 = '\x02';
  if (*(char *)(lVar10 + 0x41) != '\x03') {
    cVar12 = *(char *)(lVar10 + 0x41);
  }
  puVar18[0x4c] = uVar4;
  *(char *)(puVar18 + 0x4d) = cVar12;
  puVar18[0x53] = uVar23;
  *(undefined4 *)(puVar18 + 0x54) = 4;
  uVar4 = *(undefined8 *)(lVar15 + 0x13818);
  if (local_184 == 0x40) {
    iVar6 = 8;
  }
  else {
    iVar13 = 4;
    if (local_184 != 0x100) {
      iVar13 = (uint)(local_184 == 0x200) * 2;
    }
    iVar6 = 6;
    if (local_184 != 0x80) {
      iVar6 = iVar13;
    }
  }
  iVar6 = iVar6 + local_174;
  FUN_14159625e();
  FUN_1448e935e(uVar4,&local_e8,&DAT_14c9f4a78,iVar6 * 3 + param_11);
  FUN_14159625e();
  puVar18 = local_e8;
  uVar4 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
  local_128 = 0;
  local_118 = (longlong *)0x0;
  local_78 = uVar23;
  FUN_141596380();
  local_e8 = &local_78;
  uStack_e0 = local_70;
  FUN_1448f70da(puVar18,&DAT_14c9f6f20,puVar11,&local_e8);
  local_c8[0] = 0;
  local_b8 = local_128;
  local_a8 = local_118;
  local_118 = (longlong *)0x0;
  local_98 = local_108;
  uStack_90 = uStack_100;
  local_88 = local_f8;
  uStack_84 = uStack_f4;
  uStack_80 = uStack_f0;
  uStack_7c = uStack_ec;
  if (local_128 != 0) {
    local_128 = 0;
  }
  local_d8 = (longlong *)uVar4;
  local_d0 = uVar23;
  local_e8 = puVar11;
  uStack_e0 = puVar18;
  FUN_141596380();
  FUN_140069376(param_2);
  puVar18 = local_160;
  puVar1 = local_190;
  if ((param_10 & 4) == 0) {
    uVar24 = param_10;
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_10 & 2) != 0)))))) {
      uVar24 = param_10 & 0xfff9 | 4;
    }
    puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar22 = puVar21 + 0x46;
    if (*(undefined8 **)(param_2 + 0x78) < puVar22) {
      FUN_140023dd8(local_190,0x240);
      puVar21 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar22 = puVar21 + 0x46;
    }
    *local_190 = (ulonglong)puVar22;
    local_1a8 = &local_e8;
    FUN_14176a394(puVar21,&local_78,puVar11,uVar24);
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      uVar24 = param_10 & 0xfff9 | 2;
    }
    else {
      uVar24 = param_10;
      if (DAT_14c760ddc == 2 && (param_10 & 2) != 0) {
        uVar24 = param_10 & 0xfffd;
      }
    }
    puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar18 = puVar21 + 0x48;
    if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
      FUN_140023dd8(local_190,0x250);
      puVar21 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar18 = puVar21 + 0x48;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar18;
    uVar3 = *(undefined4 *)(param_2 + 0x660);
    local_1a8 = &local_e8;
    FUN_14176a394(puVar21,&local_78,puVar11,uVar24);
    *puVar21 = &PTR_FUN_14a2665b0;
    *(undefined4 *)(puVar21 + 0x46) = uVar3;
    puVar18 = local_160;
  }
  uVar14 = local_140;
  iVar6 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar6 + 1U) {
    FUN_14470e57a(local_168,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar6 * 8) = puVar21;
  *(int *)((longlong)puVar21 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar21);
  puVar11 = uStack_e0;
  if (local_b8 != 0) {
    plVar16 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar16 = &local_98;
    }
    (**(code **)(*plVar16 + 0x10))();
    puVar11 = uStack_e0;
  }
  uStack_e0._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
  if (local_128 != 0) {
    plVar16 = local_118;
    if (local_118 == (longlong *)0x0) {
      plVar16 = &local_108;
    }
    uStack_e0 = puVar11;
    (**(code **)(*plVar16 + 0x10))();
  }
  puVar1 = local_190;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = 0;
  *(undefined4 *)(puVar18 + 3) = 4;
  puVar18[4] = 0;
  uStack_e0._0_4_ = 0x4189;
  uVar9 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar9 = DAT_14ca84e48;
  }
  local_d8 = (longlong *)0x0;
  local_e8._0_4_ = uVar9 + (uVar9 == 0);
  uVar9 = 3;
  if (DAT_14ca84e48 < 3) {
    uVar9 = DAT_14ca84e48;
  }
  *(undefined4 *)(puVar18 + 5) = 0x14;
  local_e8._4_4_ = uVar9 + (uVar9 == 0);
  uVar20 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar19 = uVar20 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar19) {
    FUN_140023dd8(local_190,0x160);
    uVar20 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar19 = uVar20 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar19;
  FUN_1456bd266(uVar20,L"Lumen.Reflections.CompactTracingIndirectArgs",&local_e8,0);
  iVar6 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar6 + 1U) {
    FUN_144737178(local_150,iVar6);
  }
  puVar1 = local_190;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar6 * 8) = uVar20;
  *(int *)(uVar20 + 0x7c) = *(int *)(param_2 + 400) + -1;
  puVar18[2] = uVar20;
  *(undefined4 *)(puVar18 + 3) = 4;
  uVar9 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar9 = DAT_14ca84e48;
  }
  local_d8 = (longlong *)0x0;
  local_e8._0_4_ = uVar9 + (uVar9 == 0);
  local_e8._4_4_ = 1;
  uStack_e0._0_4_ = 0x4189;
  uVar23 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar19 = uVar23 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar19) {
    FUN_140023dd8(local_190,0x160);
    uVar23 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar19 = uVar23 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar19;
  FUN_1456bd266(uVar23,L"Lumen.Reflections.CompactRayTraceDispatchIndirectArgs",&local_e8,0);
  iVar6 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar6 + 1U) {
    FUN_144737178(local_150,iVar6);
  }
  puVar1 = local_190;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar6 * 8) = uVar23;
  *(int *)(uVar23 + 0x7c) = *(int *)(param_2 + 400) + -1;
  puVar18[4] = uVar23;
  *(undefined4 *)(puVar18 + 5) = 0x14;
  puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar21 + 0x28;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_190,0x150);
    puVar21 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar11 = puVar21 + 0x28;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  *puVar21 = &PTR_FUN_14a2665e8;
  puVar21[6] = 0;
  puVar21[0x24] = 0;
  puVar21[2] = 0;
  puVar21[3] = 0;
  puVar21[4] = 0;
  puVar21[0x16] = 0;
  puVar21[0x17] = 0;
  puVar21[0x18] = 0;
  puVar21[0x19] = 0;
  puVar21[0x1a] = 0;
  puVar21[0x1b] = 0;
  puVar21[0x1c] = 0;
  puVar21[0x1d] = 0;
  puVar21[0x1e] = 0;
  puVar21[0x1f] = 0;
  puVar21[0x20] = 0;
  puVar21[0x21] = 0;
  puVar21[0x22] = 0;
  *(undefined1 *)(puVar21 + 0x25) = 1;
  puVar21[0x26] = 0;
  *(undefined1 *)(puVar21 + 0x27) = 1;
  iVar6 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar6 + 1U) {
    FUN_1448cfae8(local_158,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar6 * 8) = puVar21;
  memcpy(puVar21 + 6,param_5,0x100);
  puVar1 = local_190;
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar22 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_190,0x48);
    puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar22 + 8;
  }
  puVar2 = puVar21 + 2;
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  puVar22[1] = *(undefined8 *)(uVar20 + 8);
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 2;
  *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar22 + 5) = 0;
  *puVar22 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar22 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar22 + 0x32) = 0;
  puVar22[7] = uVar20;
  iVar6 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(local_180,iVar6);
  }
  puVar1 = local_190;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  *puVar2 = puVar22;
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar22 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_190,0x48);
    puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar22 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  puVar22[1] = *(undefined8 *)(uVar23 + 8);
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 2;
  *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar22 + 5) = 0;
  *puVar22 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar22 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar22 + 0x32) = 0;
  puVar22[7] = uVar23;
  iVar6 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(local_180,iVar6);
  }
  puVar1 = local_190;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar21[3] = puVar22;
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar22 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_190,0x50);
    puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar22 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  puVar22[1] = *(undefined8 *)(uVar14 + 8);
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 3;
  *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
  *puVar22 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar22 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
  puVar22[7] = 0;
  puVar22[8] = uVar14;
  iVar6 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(local_180,iVar6);
  }
  lVar15 = local_170;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar21[4] = puVar22;
  uVar4 = *(undefined8 *)(local_170 + 0x118d0);
  lVar10 = FUN_144a2c9be();
  cVar12 = '\x02';
  if (*(char *)(lVar10 + 0x41) != '\x03') {
    cVar12 = *(char *)(lVar10 + 0x41);
  }
  puVar21[0x26] = uVar4;
  *(char *)(puVar21 + 0x27) = cVar12;
  uVar4 = *(undefined8 *)(lVar15 + 0x13818);
  FUN_141570a4a();
  FUN_1448e935e(uVar4,&local_e8,&DAT_14c9f4cc8,0);
  FUN_141570a4a();
  uVar4 = CONCAT44(local_e8._4_4_,(int)local_e8);
  uVar5 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
  FUN_141570b6c();
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  uStack_e0._0_4_ = 0;
  uStack_e0._4_4_ = 0;
  FUN_1448f70da(uVar4,&DAT_14c9f7030,puVar2,&local_e8);
  FUN_140069376(param_2);
  puVar1 = local_190;
  local_e8 = puVar2;
  if ((param_10 & 4) == 0) {
    uVar24 = param_10;
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_10 & 2) != 0)))))) {
      uVar24 = param_10 & 0xfff9 | 4;
    }
    puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar21 + 0x3d;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(local_190,0x1f0);
      puVar21 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar21 + 0x3d;
    }
    *local_190 = (ulonglong)puVar11;
    uStack_e0._0_4_ = (undefined4)DAT_14c9f7078;
    uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14c9f7078 >> 0x20);
    if (DAT_14c9f7078 != 0) {
      LOCK();
      *(int *)(DAT_14c9f7078 + 8) = *(int *)(DAT_14c9f7078 + 8) + 1;
      UNLOCK();
    }
    local_d8 = (longlong *)&DAT_14c9f7030;
    local_1a8 = (undefined8 *)CONCAT71(local_1a8._1_7_,2);
    FUN_140068f1a(puVar21,&local_128,&local_e8,uVar24);
    *puVar21 = &PTR_FUN_14a266610;
    puVar21[0x37] = &DAT_14c9f7030;
    puVar21[0x38] = puVar2;
    puVar21[0x39] = uVar4;
    puVar21[0x3a] = uVar5;
    puVar21[0x3b] = &DAT_100000001;
    *(undefined4 *)(puVar21 + 0x3c) = 1;
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      uVar24 = param_10 & 0xfff9 | 2;
    }
    else {
      uVar24 = param_10;
      if (DAT_14c760ddc == 2 && (param_10 & 2) != 0) {
        uVar24 = param_10 & 0xfffd;
      }
    }
    puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar21 + 0x3e;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(local_190,0x1f8);
      puVar21 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar21 + 0x3e;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar11;
    uVar3 = *(undefined4 *)(param_2 + 0x660);
    uStack_e0._0_4_ = (undefined4)DAT_14c9f7078;
    uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14c9f7078 >> 0x20);
    if (DAT_14c9f7078 != 0) {
      LOCK();
      *(int *)(DAT_14c9f7078 + 8) = *(int *)(DAT_14c9f7078 + 8) + 1;
      UNLOCK();
    }
    local_d8 = (longlong *)&DAT_14c9f7030;
    local_1a8 = (undefined8 *)CONCAT71(local_1a8._1_7_,2);
    FUN_140068f1a(puVar21,&local_128,&local_e8,uVar24);
    puVar21[0x37] = &DAT_14c9f7030;
    puVar21[0x38] = puVar2;
    puVar21[0x39] = uVar4;
    puVar21[0x3a] = uVar5;
    puVar21[0x3b] = &DAT_100000001;
    *(undefined4 *)(puVar21 + 0x3c) = 1;
    *puVar21 = &PTR_FUN_14a2665f0;
    *(undefined4 *)(puVar21 + 0x3d) = uVar3;
    puVar18 = local_160;
  }
  uVar14 = local_140;
  iVar6 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar6 + 1U) {
    FUN_14470e57a(local_168,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar6 * 8) = puVar21;
  *(int *)((longlong)puVar21 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar21);
  puVar1 = local_190;
  uVar19 = local_148;
  puVar11 = local_e8;
  if (param_12 != '\0') {
    uVar9 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar9 = DAT_14ca84e48;
    }
    local_e8._0_4_ = uVar9 + (uVar9 == 0);
    uStack_e0._0_4_ = 0x4109;
    uVar9 = DAT_14ca84e48;
    if (local_134 < DAT_14ca84e48) {
      uVar9 = local_134;
    }
    local_d8 = (longlong *)0x0;
    local_e8._4_4_ = uVar9 + (uVar9 == 0);
    uVar19 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar20 = uVar19 + 0x150;
    if (*(ulonglong *)(param_2 + 0x78) < uVar20) {
      FUN_140023dd8(local_190,0x160);
      uVar19 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar20 = uVar19 + 0x150;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar20;
    FUN_1456bd266(uVar19,L"Lumen.Reflections.CompactedTraceTexelData",&local_e8,0);
    iVar6 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar6 + 1U) {
      FUN_144737178(local_150,iVar6);
    }
    puVar1 = local_190;
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar6 * 8) = uVar19;
    *(int *)(uVar19 + 0x7c) = *(int *)(param_2 + 400) + -1;
    puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar21 + 0x2a;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(local_190,0x160);
      puVar21 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar11 = puVar21 + 0x2a;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar11;
    *puVar21 = &PTR_FUN_14a266628;
    puVar21[2] = 0;
    *(undefined4 *)(puVar21 + 3) = 4;
    puVar21[4] = 0;
    puVar21[0x22] = 0;
    puVar21[0x14] = 0;
    puVar21[0x15] = 0;
    puVar21[0x16] = 0;
    puVar21[0x17] = 0;
    puVar21[0x18] = 0;
    puVar21[0x19] = 0;
    puVar21[0x1a] = 0;
    puVar21[0x1b] = 0;
    puVar21[0x1c] = 0;
    puVar21[0x1d] = 0;
    puVar21[0x1e] = 0;
    puVar21[0x1f] = 0;
    puVar21[0x20] = 0;
    *(undefined1 *)(puVar21 + 0x23) = 1;
    puVar21[0x28] = 0;
    puVar21[0x24] = 0;
    puVar21[0x25] = 0;
    puVar21[0x26] = 0;
    *(undefined1 *)(puVar21 + 0x29) = 1;
    iVar6 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar6 + 1U) {
      FUN_1448cfae8(local_158,iVar6);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar6 * 8) = puVar21;
    uVar4 = puVar18[3];
    puVar21[2] = puVar18[2];
    puVar21[3] = uVar4;
    memcpy(puVar21 + 4,param_5,0x100);
    puVar1 = local_190;
    puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar18 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(local_190,0x50);
      puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar18 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar11;
    puVar18[1] = *(undefined8 *)(uVar14 + 8);
    puVar18[2] = 0;
    *(undefined1 *)(puVar18 + 3) = 3;
    *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
    *puVar18 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar18 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
    puVar18[7] = 0;
    puVar18[8] = uVar14;
    iVar6 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
      FUN_1447568fc(local_180,iVar6);
    }
    puVar1 = local_190;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar18;
    *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar21[0x24] = puVar18;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar22 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(local_190,0x50);
      puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar22 + 9;
    }
    puVar18 = local_160;
    *(undefined8 **)(param_2 + 0x70) = puVar11;
    puVar22[1] = *(undefined8 *)(local_148 + 8);
    puVar22[2] = 0;
    *(undefined1 *)(puVar22 + 3) = 3;
    *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
    *puVar22 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar22 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
    puVar22[7] = 0;
    puVar22[8] = local_148;
    iVar6 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
      FUN_1447568fc(local_180,iVar6);
    }
    puVar1 = local_190;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar22;
    *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar21[0x25] = puVar22;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar22 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(local_190,0x48);
      puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar22 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar11;
    puVar22[1] = *(undefined8 *)(uVar19 + 8);
    puVar22[2] = 0;
    *(undefined1 *)(puVar22 + 3) = 2;
    *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar22 + 5) = 0;
    *puVar22 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar22 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar22 + 0x32) = 0;
    puVar22[7] = uVar19;
    iVar6 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
      FUN_1447568fc(local_180,iVar6);
    }
    lVar15 = local_170;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar22;
    *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar21[0x26] = puVar22;
    uVar4 = *(undefined8 *)(local_170 + 0x118d0);
    lVar10 = FUN_144a2c9be();
    cVar12 = '\x02';
    if (*(char *)(lVar10 + 0x41) != '\x03') {
      cVar12 = *(char *)(lVar10 + 0x41);
    }
    puVar21[0x28] = uVar4;
    *(char *)(puVar21 + 0x29) = cVar12;
    uVar4 = *(undefined8 *)(lVar15 + 0x13818);
    FUN_145f4ba18();
    FUN_1448e935e(uVar4,&local_e8,&DAT_14c9f4ba0,local_174);
    FUN_145f4ba18();
    local_128 = CONCAT44(local_e8._4_4_,(int)local_e8);
    uStack_120 = (undefined4)uStack_e0;
    uStack_11c = uStack_e0._4_4_;
    local_e8._0_4_ = 0;
    local_e8._4_4_ = 0;
    local_d8 = (longlong *)0x0;
    local_1a0 = puVar21[2];
    local_1a8 = puVar21 + 2;
    local_198 = &local_e8;
    FUN_1471f0028(param_2,&local_78,param_10);
    puVar11 = (undefined8 *)0x0;
    if (CONCAT44(local_e8._4_4_,(int)local_e8) != 0) {
      plVar16 = local_d8;
      if (local_d8 == (longlong *)0x0) {
        plVar16 = (longlong *)local_c8;
      }
      (**(code **)(*plVar16 + 0x10))();
      puVar11 = (undefined8 *)CONCAT44(local_e8._4_4_,(int)local_e8);
    }
  }
  puVar1 = local_190;
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar22 + 9;
  local_e8 = puVar11;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_190,0x50);
    puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar22 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  puVar22[1] = *(undefined8 *)(uVar14 + 8);
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 3;
  *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
  *puVar22 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar22 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
  puVar22[7] = 0;
  puVar22[8] = uVar14;
  iVar6 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(local_180,iVar6);
  }
  puVar1 = local_190;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  *puVar18 = puVar22;
  puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar21 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_190,0x50);
    puVar21 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar21 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  puVar21[1] = *(undefined8 *)(uVar19 + 8);
  puVar21[2] = 0;
  *(undefined1 *)(puVar21 + 3) = 3;
  *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
  *puVar21 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar21 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar21 + 0x2c) = 0xffffffff00000000;
  puVar21[7] = 0;
  puVar21[8] = uVar19;
  iVar6 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(local_180,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar21;
  *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar18[1] = puVar21;
  if ((local_70[0] ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar18;
}



// FUNCTION 142d3f2ed FUN_142d3f2ed body=69 status=ok
// SIG undefined FUN_142d3f2ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f2ed(void)

{
  _DAT_14c9f3a00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f32f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3a08,1);
  return;
}



// FUNCTION 142d3f332 FUN_142d3f332 body=69 status=ok
// SIG undefined FUN_142d3f332(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f332(void)

{
  _DAT_14c9f3a18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3a20,1);
  return;
}



// FUNCTION 142d3f377 FUN_142d3f377 body=69 status=ok
// SIG undefined FUN_142d3f377(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f377(void)

{
  _DAT_14c9f3a30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f3b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3a38,1);
  return;
}



// FUNCTION 142d3f3bc FUN_142d3f3bc body=69 status=ok
// SIG undefined FUN_142d3f3bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f3bc(void)

{
  _DAT_14c9f3a48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f3fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3a50,1);
  return;
}



// FUNCTION 142d3f401 FUN_142d3f401 body=69 status=ok
// SIG undefined FUN_142d3f401(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f401(void)

{
  _DAT_14c9f3a58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3a60,1);
  return;
}



// FUNCTION 142d3f446 FUN_142d3f446 body=69 status=ok
// SIG undefined FUN_142d3f446(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f446(void)

{
  _DAT_14c9f3a68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3a70,1);
  return;
}



// FUNCTION 142d3f48b FUN_142d3f48b body=69 status=ok
// SIG undefined FUN_142d3f48b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f48b(void)

{
  _DAT_14c9f3a78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f4cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3a80,1);
  return;
}



// FUNCTION 142d3f4d0 FUN_142d3f4d0 body=69 status=ok
// SIG undefined FUN_142d3f4d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f4d0(void)

{
  _DAT_14c9f3a90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3a98,1);
  return;
}



// FUNCTION 142d3f515 FUN_142d3f515 body=69 status=ok
// SIG undefined FUN_142d3f515(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f515(void)

{
  _DAT_14c9f3aa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3ab0,1);
  return;
}



// FUNCTION 142d3f55a FUN_142d3f55a body=69 status=ok
// SIG undefined FUN_142d3f55a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f55a(void)

{
  _DAT_14c9f3ac0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3ac8,1);
  return;
}



// FUNCTION 142d3f59f FUN_142d3f59f body=69 status=ok
// SIG undefined FUN_142d3f59f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f59f(void)

{
  _DAT_14c9f3ad0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f5e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3ad8,1);
  return;
}



// FUNCTION 142d3f5e4 FUN_142d3f5e4 body=69 status=ok
// SIG undefined FUN_142d3f5e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f5e4(void)

{
  _DAT_14c9f3ae0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3ae8,1);
  return;
}



// FUNCTION 142d3f629 FUN_142d3f629 body=69 status=ok
// SIG undefined FUN_142d3f629(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f629(void)

{
  _DAT_14c9f3af0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f66b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3af8,1);
  return;
}



// FUNCTION 142d3f66e FUN_142d3f66e body=69 status=ok
// SIG undefined FUN_142d3f66e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f66e(void)

{
  _DAT_14c9f3b08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3b10,1);
  return;
}



// FUNCTION 142d3f6b3 FUN_142d3f6b3 body=69 status=ok
// SIG undefined FUN_142d3f6b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f6b3(void)

{
  _DAT_14c9f3b20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f6f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3b28,1);
  return;
}



// FUNCTION 142d3f6f8 FUN_142d3f6f8 body=69 status=ok
// SIG undefined FUN_142d3f6f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f6f8(void)

{
  _DAT_14c9f3b38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f73a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3b40,1);
  return;
}



// FUNCTION 142d3f73d FUN_142d3f73d body=69 status=ok
// SIG undefined FUN_142d3f73d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f73d(void)

{
  _DAT_14c9f3b48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f77f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3b50,1);
  return;
}



// FUNCTION 142d3f782 FUN_142d3f782 body=69 status=ok
// SIG undefined FUN_142d3f782(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f782(void)

{
  _DAT_14c9f3b68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3b70,1);
  return;
}



// FUNCTION 142d3f7c7 FUN_142d3f7c7 body=69 status=ok
// SIG undefined FUN_142d3f7c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f7c7(void)

{
  _DAT_14c9f3b78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3b80,1);
  return;
}



// FUNCTION 142d3f80c FUN_142d3f80c body=69 status=ok
// SIG undefined FUN_142d3f80c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f80c(void)

{
  _DAT_14c9f3b88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f84e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3b90,1);
  return;
}



// FUNCTION 142d3f851 FUN_142d3f851 body=69 status=ok
// SIG undefined FUN_142d3f851(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f851(void)

{
  _DAT_14c9f3b98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3ba0,1);
  return;
}



// FUNCTION 142d3f896 FUN_142d3f896 body=69 status=ok
// SIG undefined FUN_142d3f896(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f896(void)

{
  _DAT_14c9f3bb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3bb8,1);
  return;
}



// FUNCTION 142d3f8db FUN_142d3f8db body=69 status=ok
// SIG undefined FUN_142d3f8db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f8db(void)

{
  _DAT_14c9f3bc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f91d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3bc8,1);
  return;
}



// FUNCTION 142d3f920 FUN_142d3f920 body=69 status=ok
// SIG undefined FUN_142d3f920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f920(void)

{
  _DAT_14c9f3bd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3be0,1);
  return;
}



// FUNCTION 142d3f965 FUN_142d3f965 body=69 status=ok
// SIG undefined FUN_142d3f965(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f965(void)

{
  _DAT_14c9f3bf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f9a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3bf8,1);
  return;
}



// FUNCTION 142d3f9aa FUN_142d3f9aa body=69 status=ok
// SIG undefined FUN_142d3f9aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f9aa(void)

{
  _DAT_14c9f3c08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3f9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3c10,1);
  return;
}



// FUNCTION 142d3f9ef FUN_142d3f9ef body=69 status=ok
// SIG undefined FUN_142d3f9ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3f9ef(void)

{
  _DAT_14c9f3c18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3fa31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3c20,1);
  return;
}



// FUNCTION 142d3fa34 FUN_142d3fa34 body=69 status=ok
// SIG undefined FUN_142d3fa34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3fa34(void)

{
  _DAT_14c9f3c30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3fa76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3c38,1);
  return;
}



// FUNCTION 142d3fa79 FUN_142d3fa79 body=69 status=ok
// SIG undefined FUN_142d3fa79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3fa79(void)

{
  _DAT_14c9f3c40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3fabb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3c48,1);
  return;
}



// FUNCTION 142d3fabe FUN_142d3fabe body=69 status=ok
// SIG undefined FUN_142d3fabe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3fabe(void)

{
  _DAT_14c9f3c58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3fb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3c60,1);
  return;
}



// FUNCTION 142d3fb03 FUN_142d3fb03 body=69 status=ok
// SIG undefined FUN_142d3fb03(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3fb03(void)

{
  _DAT_14c9f3c68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3fb45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3c70,1);
  return;
}



// FUNCTION 142d3fb48 FUN_142d3fb48 body=69 status=ok
// SIG undefined FUN_142d3fb48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3fb48(void)

{
  _DAT_14c9f3c80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3fb8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3c88,1);
  return;
}



// FUNCTION 142d3fb8d FUN_142d3fb8d body=69 status=ok
// SIG undefined FUN_142d3fb8d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3fb8d(void)

{
  _DAT_14c9f3c98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3fbcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3ca0,1);
  return;
}



// FUNCTION 142d3fbd2 FUN_142d3fbd2 body=69 status=ok
// SIG undefined FUN_142d3fbd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3fbd2(void)

{
  _DAT_14c9f3cb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3fc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3cb8,1);
  return;
}



// FUNCTION 142d3fc17 FUN_142d3fc17 body=69 status=ok
// SIG undefined FUN_142d3fc17(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3fc17(void)

{
  _DAT_14c9f3cc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3fc59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3cc8,1);
  return;
}



// FUNCTION 142d3fc5c FUN_142d3fc5c body=69 status=ok
// SIG undefined FUN_142d3fc5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3fc5c(void)

{
  _DAT_14c9f3cd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3fc9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3cd8,1);
  return;
}



// FUNCTION 142d3fca1 FUN_142d3fca1 body=69 status=ok
// SIG undefined FUN_142d3fca1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3fca1(void)

{
  _DAT_14c9f3ce8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3fce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3cf0,1);
  return;
}



// FUNCTION 142d3fce6 FUN_142d3fce6 body=69 status=ok
// SIG undefined FUN_142d3fce6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3fce6(void)

{
  _DAT_14c9f3d00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d3fd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f3d08,1);
  return;
}



// FUNCTION 142d3fd2b FUN_142d3fd2b body=105 status=ok
// SIG undefined FUN_142d3fd2b(void)

void FUN_142d3fd2b(longlong param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x293c);
  if (*(float *)(DAT_14c9f3aa0 + 4) <= *(float *)(param_1 + 0x293c)) {
    fVar1 = *(float *)(DAT_14c9f3aa0 + 4);
  }
  *param_2 = fVar1;
  fVar1 = DAT_14c7605b0;
  if (1.0 <= DAT_14c7605b0) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.001) {
    fVar1 = 0.001;
  }
  param_2[2] = 1.0 / fVar1;
  param_2[1] = *(float *)(DAT_14c9f3ab8 + 4);
  if (0.0 <= *(float *)(DAT_14c9f3a88 + 4)) {
    *param_2 = *(float *)(DAT_14c9f3a88 + 4);
  }
  return;
}



// FUNCTION 142d3fe02 FUN_142d3fe02 body=1715 status=ok
// SIG undefined FUN_142d3fe02(void)

void FUN_142d3fe02(longlong *param_1,byte param_2)

{
  longlong **pplVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined1 auStack_d8 [32];
  longlong **local_b8;
  undefined8 local_b0;
  longlong **local_a8;
  byte local_9a;
  undefined1 local_99;
  longlong *local_98;
  undefined8 uStack_90;
  longlong *local_88;
  longlong **pplStack_80;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  int iStack_64;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar12 = *param_1;
  puVar16 = (undefined8 *)(*(longlong *)(lVar12 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar16 + 0x30;
  local_9a = param_2;
  if (*(undefined8 **)(lVar12 + 0x78) < puVar10) {
    FUN_140023dd8((longlong *)(lVar12 + 0x70),400);
    puVar16 = (undefined8 *)(*(longlong *)(lVar12 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar10 = puVar16 + 0x30;
  }
  *(undefined8 **)(lVar12 + 0x70) = puVar10;
  *puVar16 = &PTR_FUN_14a266400;
  puVar16[8] = 0;
  puVar16[2] = 0;
  puVar16[3] = 0;
  puVar16[4] = 0;
  puVar16[5] = 0;
  puVar16[6] = 0;
  *(undefined1 *)(puVar16 + 9) = 1;
  puVar16[10] = 0;
  *(undefined1 *)(puVar16 + 0xb) = 1;
  puVar16[0xc] = 0;
  puVar16[0x2a] = 0;
  puVar16[0x1c] = 0;
  puVar16[0x1d] = 0;
  puVar16[0x1e] = 0;
  puVar16[0x1f] = 0;
  puVar16[0x20] = 0;
  puVar16[0x21] = 0;
  puVar16[0x22] = 0;
  puVar16[0x23] = 0;
  puVar16[0x24] = 0;
  puVar16[0x25] = 0;
  puVar16[0x26] = 0;
  puVar16[0x27] = 0;
  puVar16[0x28] = 0;
  *(undefined1 *)(puVar16 + 0x2b) = 1;
  puVar16[0x2e] = 0;
  *(undefined4 *)(puVar16 + 0x2f) = 4;
  iVar3 = *(int *)(lVar12 + 0xa0);
  *(uint *)(lVar12 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(lVar12 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8((longlong *)(lVar12 + 0x98),iVar3);
  }
  *(undefined8 **)(*(longlong *)(lVar12 + 0x98) + (longlong)iVar3 * 8) = puVar16;
  lVar12 = *param_1;
  lVar11 = *(longlong *)param_1[1];
  plVar13 = (longlong *)(*(longlong *)(lVar12 + 0x70) + 7U & 0xfffffffffffffff8);
  plVar9 = plVar13 + 8;
  if (*(longlong **)(lVar12 + 0x78) < plVar9) {
    FUN_140023dd8((longlong *)(lVar12 + 0x70),0x48);
    plVar13 = (longlong *)(*(longlong *)(lVar12 + 0x70) + 7U & 0xfffffffffffffff8);
    plVar9 = plVar13 + 8;
  }
  pplVar1 = (longlong **)(puVar16 + 2);
  *(longlong **)(lVar12 + 0x70) = plVar9;
  plVar13[1] = *(longlong *)(lVar11 + 8);
  plVar13[2] = 0;
  *(undefined1 *)(plVar13 + 3) = 2;
  *(undefined8 *)((longlong)plVar13 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(plVar13 + 5) = 0;
  *plVar13 = (longlong)&PTR_FUN_14a1fb3e8;
  *(undefined2 *)(plVar13 + 6) = 0x1c;
  *(undefined1 *)((longlong)plVar13 + 0x32) = 0;
  plVar13[7] = lVar11;
  iVar3 = *(int *)(lVar12 + 0x1a0);
  *(uint *)(lVar12 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(lVar12 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar12 + 0x198,iVar3);
  }
  *(longlong **)(*(longlong *)(lVar12 + 0x198) + (longlong)iVar3 * 8) = plVar13;
  *(int *)((longlong)plVar13 + 0x1c) = *(int *)(lVar12 + 0x1a0) + -1;
  *pplVar1 = plVar13;
  lVar12 = *param_1;
  lVar11 = *(longlong *)param_1[2];
  puVar14 = (undefined8 *)(*(longlong *)(lVar12 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar14 + 8;
  if (*(undefined8 **)(lVar12 + 0x78) < puVar10) {
    FUN_140023dd8((longlong *)(lVar12 + 0x70),0x48);
    puVar14 = (undefined8 *)(*(longlong *)(lVar12 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar14 + 8;
  }
  *(undefined8 **)(lVar12 + 0x70) = puVar10;
  puVar14[1] = *(undefined8 *)(lVar11 + 8);
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 2;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar14 + 5) = 0;
  *puVar14 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar14 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar14 + 0x32) = 0;
  puVar14[7] = lVar11;
  iVar3 = *(int *)(lVar12 + 0x1a0);
  *(uint *)(lVar12 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(lVar12 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar12 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(lVar12 + 0x198) + (longlong)iVar3 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x1c) = *(int *)(lVar12 + 0x1a0) + -1;
  puVar16[3] = puVar14;
  lVar12 = *param_1;
  lVar11 = *(longlong *)param_1[3];
  puVar14 = (undefined8 *)(*(longlong *)(lVar12 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar14 + 8;
  if (*(undefined8 **)(lVar12 + 0x78) < puVar10) {
    FUN_140023dd8((longlong *)(lVar12 + 0x70),0x48);
    puVar14 = (undefined8 *)(*(longlong *)(lVar12 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar14 + 8;
  }
  *(undefined8 **)(lVar12 + 0x70) = puVar10;
  puVar14[1] = *(undefined8 *)(lVar11 + 8);
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 2;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar14 + 5) = 0;
  *puVar14 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar14 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar14 + 0x32) = 0;
  puVar14[7] = lVar11;
  iVar3 = *(int *)(lVar12 + 0x1a0);
  *(uint *)(lVar12 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(lVar12 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar12 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(lVar12 + 0x198) + (longlong)iVar3 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x1c) = *(int *)(lVar12 + 0x1a0) + -1;
  puVar16[4] = puVar14;
  lVar12 = *param_1;
  lVar11 = *(longlong *)param_1[4];
  puVar14 = (undefined8 *)(*(longlong *)(lVar12 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar14 + 8;
  if (*(undefined8 **)(lVar12 + 0x78) < puVar10) {
    FUN_140023dd8((longlong *)(lVar12 + 0x70),0x48);
    puVar14 = (undefined8 *)(*(longlong *)(lVar12 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar14 + 8;
  }
  *(undefined8 **)(lVar12 + 0x70) = puVar10;
  puVar14[1] = *(undefined8 *)(lVar11 + 8);
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 2;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar14 + 5) = 0;
  *puVar14 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar14 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar14 + 0x32) = 0;
  puVar14[7] = lVar11;
  iVar3 = *(int *)(lVar12 + 0x1a0);
  *(uint *)(lVar12 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(lVar12 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar12 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(lVar12 + 0x198) + (longlong)iVar3 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x1c) = *(int *)(lVar12 + 0x1a0) + -1;
  puVar16[5] = puVar14;
  puVar16[6] = *(undefined8 *)param_1[5];
  lVar12 = param_1[6];
  lVar11 = FUN_1447e4f80();
  cVar8 = *(char *)(lVar11 + 0x41);
  if (*(char *)(lVar11 + 0x41) == '\x03') {
    cVar8 = '\x02';
  }
  puVar16[8] = *(undefined8 *)(lVar12 + 0x18);
  *(char *)(puVar16 + 9) = cVar8;
  uVar5 = *(undefined8 *)(param_1[6] + 0x118d0);
  lVar12 = FUN_144a2c9be();
  cVar8 = *(char *)(lVar12 + 0x41);
  if (cVar8 == '\x03') {
    cVar8 = '\x02';
  }
  puVar16[10] = uVar5;
  *(char *)(puVar16 + 0xb) = cVar8;
  puVar16[0x2c] = *(undefined8 *)param_1[7];
  puVar16[0x2d] = *(undefined8 *)param_1[7];
  memcpy(puVar16 + 0xc,(void *)param_1[8],0x100);
  bVar7 = local_9a;
  uVar5 = *(undefined8 *)(param_1[6] + 0x13818);
  uVar6 = (uint)local_9a;
  FUN_14159a1d0();
  FUN_1448e935e(uVar5,&local_88,&DAT_14c9f3eb0,uVar6 * 2);
  FUN_14159a1d0();
  plVar9 = local_88;
  local_98 = local_88;
  uStack_90 = pplStack_80;
  if (bVar7 == 0) {
    iVar4 = *(int *)param_1[7];
    iVar15 = ((int *)param_1[7])[1];
    iVar3 = iVar15 + 7;
    iVar15 = iVar15 + 0xe;
    if (-1 < iVar3) {
      iVar15 = iVar3;
    }
    iVar3 = iVar4 + 7;
    iVar4 = iVar4 + 0xe;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    uVar2 = *(undefined2 *)param_1[9];
    lVar12 = *param_1;
    FUN_14159a2f2();
    local_88 = (longlong *)0x0;
    pplStack_80 = (longlong **)0x0;
    FUN_1448f70da(plVar9,&DAT_14c9f69d0,pplVar1,&local_88);
    local_88 = (longlong *)&DAT_14c9f69d0;
    local_78 = local_98;
    uStack_70 = (undefined4)uStack_90;
    uStack_6c = uStack_90._4_4_;
    local_60 = 1;
    local_b8 = &local_88;
    pplStack_80 = pplVar1;
    local_68 = iVar4 >> 3;
    iStack_64 = iVar15 >> 3;
    FUN_141769b5a(lVar12,&local_99,pplVar1,uVar2);
  }
  else {
    puVar16[0x2e] = *(undefined8 *)(param_1[6] + 0x118c0);
    *(undefined4 *)(puVar16 + 0x2f) = 4;
    local_88 = (longlong *)0x0;
    local_78 = (longlong *)0x0;
    local_b0 = *(undefined8 *)(param_1[6] + 0x118c0);
    local_b8 = pplVar1;
    local_a8 = &local_88;
    FUN_1471f8767(*param_1,&local_99,*(undefined2 *)param_1[9],&local_98);
    if (local_88 != (longlong *)0x0) {
      plVar9 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar9 = (longlong *)&local_68;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d404f6 FUN_142d404f6 body=39397 status=ok
// SIG undefined FUN_142d404f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142d404f6(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       undefined8 param_5,void *param_6,void *param_7,uint param_8,longlong param_9,
                       undefined8 *param_10,ushort param_11)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong **ppuVar6;
  undefined1 *puVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong *puVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  undefined *puVar28;
  ulonglong *puVar29;
  longlong **pplVar30;
  uint *puVar31;
  uint uVar32;
  longlong lVar33;
  wchar_t *pwVar34;
  byte bVar35;
  ushort uVar36;
  int iVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong *plVar40;
  ulonglong *puVar41;
  ulonglong *puVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  undefined8 *puVar45;
  undefined6 uVar46;
  ulonglong uVar47;
  uint uVar48;
  undefined8 *puVar50;
  undefined2 uVar51;
  uint uVar52;
  undefined8 *puVar53;
  longlong *plVar54;
  undefined8 *puVar55;
  bool bVar56;
  bool bVar57;
  bool bVar58;
  float fVar59;
  float fVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined1 auStack_9d8 [32];
  longlong **local_9b8;
  longlong **local_9b0;
  longlong **local_9a8;
  float local_9a0;
  float local_998;
  float *local_990;
  undefined4 local_988;
  uint local_980;
  ushort local_978;
  ulonglong *local_970;
  longlong local_968;
  undefined8 *local_960;
  undefined8 local_958;
  ulonglong *local_950;
  longlong *local_948;
  undefined8 *local_940;
  ulonglong local_938;
  undefined8 *local_930;
  longlong local_928;
  undefined8 local_920;
  uint local_914;
  ulonglong local_910;
  int *local_908;
  longlong local_900;
  ulonglong local_8f8;
  undefined8 local_8f0;
  int local_8e4;
  longlong local_8e0;
  ulonglong local_8d8;
  int local_8cc;
  undefined8 local_8c8;
  ulonglong local_8c0;
  uint local_8b8;
  uint local_8b4;
  ulonglong local_8b0;
  ulonglong local_8a8;
  longlong local_8a0;
  undefined8 local_898;
  undefined1 local_88b;
  ushort local_88a;
  undefined1 local_888 [48];
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 *local_838;
  undefined8 local_830;
  ulonglong *local_828;
  undefined8 *local_820;
  longlong **local_818;
  ushort *local_810;
  ulonglong local_808;
  undefined8 uStack_800;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined8 local_7e8;
  char local_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  char local_7c0;
  undefined8 local_7b8;
  undefined1 local_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798 [4];
  undefined4 local_778;
  undefined8 local_770;
  undefined4 local_768;
  undefined8 local_760;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined8 local_748 [16];
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 local_658;
  undefined1 local_650;
  float local_648;
  longlong *local_638 [4];
  undefined4 local_618;
  ulonglong *local_610;
  undefined4 local_608;
  ulonglong *local_600;
  undefined4 local_5f8;
  longlong *local_5e8;
  undefined4 local_5e0;
  int local_5d8;
  ulonglong local_5d0;
  ulonglong local_5c8;
  undefined8 local_5c0;
  float local_5b8;
  float local_5b4;
  float local_5b0;
  undefined4 local_5ac;
  uint local_5a8;
  uint local_5a4;
  uint local_5a0;
  int local_59c;
  int local_598;
  uint local_594;
  uint local_590;
  undefined4 local_58c;
  float local_588;
  undefined4 local_584;
  undefined4 local_580;
  float local_57c;
  float local_578;
  undefined4 local_574;
  float local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  ulonglong local_558;
  ulonglong uStack_550;
  ulonglong local_548;
  ulonglong uStack_540;
  ulonglong local_538;
  ulonglong uStack_530;
  ulonglong local_528;
  undefined8 *puStack_520;
  undefined8 *local_518;
  undefined8 *puStack_510;
  undefined8 *local_508;
  longlong local_4f8;
  char local_4f0;
  float local_4e8 [20];
  longlong local_498;
  ulonglong *local_378;
  undefined8 uStack_370;
  ulonglong *local_368;
  undefined8 uStack_360;
  ulonglong local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  longlong local_300;
  undefined *local_2f8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  float fStack_290;
  float fStack_28c;
  float local_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  int local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 local_248;
  uint uStack_240;
  undefined2 uStack_23c;
  undefined2 uStack_23a;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong *local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_168;
  ulonglong *local_160;
  ulonglong *local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  ulonglong local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_f8;
  ulonglong local_f0 [22];
  int iVar49;
  
  local_f0[0] = DAT_14c707940 ^ (ulonglong)auStack_9d8;
  local_8e4 = CONCAT31(local_8e4._1_3_,(param_8 & 0xfffffffd) == 0);
  lVar15 = -1;
  if (0 < (longlong)*(int *)(param_1 + 0x410)) {
    lVar33 = 0;
    do {
      lVar15 = lVar33;
      if (*(longlong *)(*(longlong *)(param_1 + 0x408) + lVar33 * 8) == param_3) break;
      lVar33 = lVar33 + 1;
      lVar15 = -1;
    } while (*(int *)(param_1 + 0x410) != lVar33);
  }
  lVar33 = param_1 + 0xe38;
  if (*(longlong *)(param_1 + 0xe58) != 0) {
    lVar33 = *(longlong *)(param_1 + 0xe58);
  }
  local_8b4 = *(uint *)(lVar33 + (longlong)(int)lVar15 * 0x20);
  local_930 = (undefined8 *)param_1;
  local_928 = param_4;
  uVar14 = FUN_144ab4f03();
  local_8c0 = CONCAT71(local_8c0._1_7_,(char)uVar14);
  local_8d8 = CONCAT71((int7)((ulonglong)uVar14 >> 8),param_8 != 1);
  memcpy(local_4e8,param_7,0x170);
  local_4e8[0] = DAT_14c7605ac;
  if (100000.0 <= DAT_14c7605ac) {
    local_4e8[0] = 100000.0;
  }
  if (local_4e8[0] <= 1.0) {
    local_4e8[0] = 1.0;
  }
  local_594 = 0;
  local_5e8 = (longlong *)0x0;
  local_4f8 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_528 = 0;
  puStack_520 = (undefined8 *)0x0;
  local_518 = (undefined8 *)0x0;
  puStack_510 = (undefined8 *)0x0;
  local_508 = (undefined8 *)0x0;
  local_4f0 = 1;
  local_578 = *(float *)(param_3 + 0x293c);
  if (*(float *)(DAT_14c9f3aa0 + 4) <= *(float *)(param_3 + 0x293c)) {
    local_578 = *(float *)(DAT_14c9f3aa0 + 4);
  }
  local_570 = DAT_14c7605b0;
  if (1.0 <= DAT_14c7605b0) {
    local_570 = 1.0;
  }
  if (local_570 <= 0.001) {
    local_570 = 0.001;
  }
  local_570 = 1.0 / local_570;
  local_574 = *(undefined4 *)(DAT_14c9f3ab8 + 4);
  if (0.0 <= *(float *)(DAT_14c9f3a88 + 4)) {
    local_578 = *(float *)(DAT_14c9f3a88 + 4);
  }
  local_568 = *(undefined8 *)(DAT_14ca63b68 + 8);
  uStack_560 = DAT_14c9c0de0;
  if (*(longlong *)(param_3 + 0x3108) != 0) {
    local_594 = *(uint *)(*(longlong *)(param_3 + 0x3108) + 0x6e0);
  }
  if (-1 < (int)*(uint *)(DAT_14c9f3ce0 + 4)) {
    local_594 = *(uint *)(DAT_14c9f3ce0 + 4);
  }
  local_590 = local_594 & 7;
  local_8a8 = 1;
  uVar27 = (ulonglong)*(uint *)(DAT_14c9f3b30 + 4);
  if ((int)*(uint *)(DAT_14c9f3b30 + 4) < 2) {
    uVar27 = 1;
  }
  local_58c = (undefined4)((ulonglong)local_594 % uVar27);
  local_968 = param_3;
  if (param_8 == 0) {
    if (DAT_14c9f3d18 == (undefined8 *)0x0) {
LAB_142d48a27:
      uStack_850._0_4_ = 0x4109;
      uVar48 = 0x10;
      if (DAT_14ca84e48 < 0x10) {
        uVar48 = DAT_14ca84e48;
      }
      uStack_848._0_4_ = 0;
      uStack_848._4_4_ = 0;
      local_858._0_4_ = uVar48 + (uVar48 == 0);
      uVar48 = 0x60;
      if (DAT_14ca84e48 < 0x60) {
        uVar48 = DAT_14ca84e48;
      }
      local_858._4_4_ = uVar48 + (uVar48 == 0);
      plVar18 = (longlong *)(param_2 + 0x70);
      uVar27 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar38 = uVar27 + 0x150;
      if (*(ulonglong *)(param_2 + 0x78) < uVar38) {
        FUN_140023dd8(plVar18,0x160);
        uVar27 = *plVar18 + 0xfU & 0xfffffffffffffff0;
        uVar38 = uVar27 + 0x150;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar38;
      FUN_1456bd266(uVar27,L"VisualizeTracesData",&local_858,0);
      iVar11 = *(int *)(param_2 + 400);
      *(uint *)(param_2 + 400) = iVar11 + 1U;
      if (*(uint *)(param_2 + 0x194) < iVar11 + 1U) {
        FUN_144737178(param_2 + 0x188,iVar11);
      }
      *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar11 * 8) = uVar27;
      *(int *)(uVar27 + 0x7c) = *(int *)(param_2 + 400) + -1;
      puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar45 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
        FUN_140023dd8(plVar18,0x48);
        puVar45 = (undefined8 *)(*plVar18 + 7U & 0xfffffffffffffff8);
        puVar21 = puVar45 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar21;
      puVar45[1] = *(undefined8 *)(uVar27 + 8);
      puVar45[2] = 0;
      *(undefined1 *)(puVar45 + 3) = 2;
      *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar45 + 5) = 0;
      *puVar45 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar45 + 6) = 1;
      *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
      puVar45[7] = uVar27;
      iVar11 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
        FUN_1447568fc(param_2 + 0x198,iVar11);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar45;
      *(int *)((longlong)puVar45 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      FUN_143212081(param_2,puVar45,0,2);
      param_3 = local_968;
    }
    else {
      uVar27 = FUN_144735dd8(param_2,&DAT_14c9f3d18,0);
      if ((uVar27 == 0) || (*(int *)(uVar27 + 100) != 0x60)) goto LAB_142d48a27;
    }
    local_5e0 = 0;
    plVar40 = (longlong *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    plVar18 = plVar40 + 8;
    if (*(longlong **)(param_2 + 0x78) < plVar18) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x48);
      plVar40 = (longlong *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      plVar18 = plVar40 + 8;
    }
    *(longlong **)(param_2 + 0x70) = plVar18;
    plVar40[1] = *(longlong *)(uVar27 + 8);
    plVar40[2] = 0;
    *(undefined1 *)(plVar40 + 3) = 2;
    *(undefined8 *)((longlong)plVar40 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(plVar40 + 5) = 0;
    *plVar40 = (longlong)&PTR_FUN_14a1fb3e8;
    *(undefined2 *)(plVar40 + 6) = 1;
    *(undefined1 *)((longlong)plVar40 + 0x32) = 0;
    plVar40[7] = uVar27;
    iVar11 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar11);
    }
    *(longlong **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = plVar40;
    *(int *)((longlong)plVar40 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    local_910 = uVar27;
    local_5e8 = plVar40;
    if (DAT_14c9f3c50 == 1) {
      DAT_14c9f3c50 = 2;
      local_5e0 = 1;
    }
LAB_142d408a7:
    local_8a8 = (ulonglong)
                ((1 < *(int *)(DAT_14c9f3a28 + 4) << (*(float *)(param_3 + 0x2934) <= 0.25)) + 1);
  }
  else {
    local_910 = 0;
    if (param_8 == 2) goto LAB_142d408a7;
  }
  local_5d8 = (int)local_8a8;
  iVar23 = local_5d8 + -1;
  iVar11 = *(int *)(param_3 + 0x3104);
  iVar26 = *(int *)(param_3 + 0x30fc);
  lVar15 = (longlong)local_5d8;
  iVar37 = *(int *)(param_3 + 0x3100);
  iVar10 = *(int *)(param_3 + 0x30f8);
  lVar33 = (longlong)local_5d8;
  local_898 = CONCAT44(((int)((ulonglong)*(undefined8 *)(local_928 + 0x20) >> 0x20) + local_5d8 + -1
                       ) / local_5d8,
                       (local_5d8 + (int)*(undefined8 *)(local_928 + 0x20) + -1) / local_5d8);
  local_914 = param_8 - 1;
  if (1 < local_914) {
    FUN_140304d29(&local_858,local_968,&local_898);
    local_898 = CONCAT44(local_858._4_4_,(int)local_858);
    param_3 = local_968;
  }
  lVar20 = DAT_14ca97170;
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar24 = *(int *)(lVar19 + 0xc60);
  if (((iVar24 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar24 == 2)) {
    uVar27 = 0;
  }
  else if (iVar24 == 1) {
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    uVar27 = (ulonglong)(DVar12 != DVar13);
  }
  else {
    uVar27 = 1;
  }
  lVar4 = local_968;
  local_940 = (undefined8 *)CONCAT44(local_940._4_4_,1);
  if (0 < *(int *)(lVar20 + uVar27 * 4)) {
    if (*(int *)(DAT_14ca5dc68 + 4) < 1) {
      uVar48 = FUN_147430fbd(*(undefined2 *)
                              (&DAT_14ca85070 + (longlong)*(int *)(local_968 + 0x3090) * 2));
    }
    else {
      puVar31 = (uint *)(*(longlong *)(local_968 + 0x118c8) + 0x18);
      if (*(longlong *)(local_968 + 0x118c8) == 0) {
        puVar31 = (uint *)(local_968 + 0x11828);
      }
      uVar48 = *puVar31;
    }
    uVar25 = 8;
    if (uVar48 < 8) {
      uVar25 = uVar48;
    }
    local_940 = (undefined8 *)CONCAT44(local_940._4_4_,uVar25 + (uVar25 == 0));
    param_3 = lVar4;
  }
  bVar56 = false;
  if ((*(int *)(DAT_14c9f5c70 + 4) != 0) &&
     (bVar56 = false, (*(uint *)(*(longlong *)(param_3 + 8) + 0x60) & 0x80000) != 0)) {
    bVar56 = *(int *)(DAT_14c9f3680 + 4) != 0;
  }
  uVar51 = SUB82(local_940,0);
  local_588 = *(float *)(param_3 + 0x291c) * _DAT_14c7604b4;
  if (1048576.0 <= local_588) {
    local_588 = 1048576.0;
  }
  local_5d0 = (longlong)(local_5d8 + (int)*(undefined8 *)(param_3 + 0x30f8) + -1) /
              (longlong)local_5d8 & 0xffffffffU |
              (longlong)
              ((int)((ulonglong)*(undefined8 *)(param_3 + 0x30f8) >> 0x20) + local_5d8 + -1) /
              (longlong)local_5d8 << 0x20;
  local_5c8 = (longlong)((iVar23 + iVar37) - iVar10) / lVar33 & 0xffffffffU |
              (longlong)((iVar11 + iVar23) - iVar26) / lVar15 << 0x20;
  uVar25 = (uint)local_898;
  uVar48 = (uint)((ulonglong)local_898 >> 0x20);
  local_5c0 = local_898;
  local_5b4 = 1.0 / (float)(int)uVar48;
  local_5b8 = 1.0 / (float)(int)uVar25;
  local_5b0 = (float)*(int *)(DAT_14c9f3b58 + 4);
  local_5ac = DAT_14c9f3b60;
  local_5a4 = (uint)(DAT_14c7605b8 != 0 & (byte)local_8e4);
  local_5a0 = (uint)(*(int *)(DAT_14c9f3ca8 + 4) != 0);
  iVar11 = *(int *)(DAT_14c9f4660 + 4);
  if (iVar11 < 1) {
    iVar11 = *(int *)(param_3 + 0x2940);
  }
  if (local_588 <= 0.01) {
    local_588 = 0.01;
  }
  iVar26 = 0x40;
  if (iVar11 < 0x40) {
    iVar26 = iVar11;
  }
  local_59c = 1;
  if (1 < iVar26) {
    local_59c = iVar26;
  }
  iVar11 = *(int *)(DAT_14c9f4690 + 4);
  if (iVar11 < 1) {
    iVar11 = *(int *)(param_3 + 0x2944);
  }
  iVar26 = 0x3f;
  if (iVar11 < 0x3f) {
    iVar26 = iVar11;
  }
  local_598 = 0;
  if (0 < iVar26) {
    local_598 = iVar26;
  }
  local_598 = local_598 + 1;
  if (bVar56) {
    local_57c = *(float *)(DAT_14c9f5c88 + 4);
    local_584 = *(undefined4 *)(DAT_14c9f5ca0 + 4);
    local_580 = 0x7f7fffff;
    if (((*(byte *)(*(longlong *)(param_3 + 8) + 0x60) & 2) == 0) &&
       (0 < *(int *)(DAT_14ca3aa08 + 4))) {
      local_580 = *(undefined4 *)(DAT_14ca3aa38 + 4);
    }
  }
  else {
    local_584 = 0;
    local_580 = 0x7f7fffff;
    local_57c = local_588;
  }
  uStack_850._0_4_ = DAT_14ca83a30;
  uStack_850._4_4_ = DAT_14ca83a34;
  uStack_848._0_4_ = DAT_14ca83a38;
  uStack_848._4_4_ = DAT_14ca83a3c;
  local_858._0_2_ = 8;
  local_858._2_2_ = 2;
  local_858._4_4_ = 0;
  local_830 = (ulonglong *)CONCAT26(uVar51,0x100000000);
  local_828 = (ulonglong *)CONCAT26(local_828._6_2_,0xff000a010101);
  local_840 = (ulonglong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
  uVar32 = DAT_14ca84e40;
  if ((int)uVar25 < (int)DAT_14ca84e40) {
    uVar32 = uVar25;
  }
  if ((int)uVar32 < 2) {
    uVar32 = 1;
  }
  uVar25 = DAT_14ca84e40;
  if ((int)uVar48 < (int)DAT_14ca84e40) {
    uVar25 = uVar48;
  }
  local_838 = (undefined8 *)((ulonglong)uVar32 << 0x20);
  if ((int)uVar25 < 2) {
    uVar25 = 1;
  }
  local_830 = (ulonglong *)CONCAT44(local_830._4_4_,uVar25);
  puVar29 = (ulonglong *)(param_2 + 0x70);
  uVar38 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar27 = uVar38 + 0x120;
  local_970 = puVar29;
  local_5a8 = param_8;
  if (*(ulonglong *)(param_2 + 0x78) < uVar27) {
    FUN_140023dd8(puVar29,0x128);
    uVar38 = *puVar29 + 7 & 0xfffffffffffffff8;
    uVar27 = uVar38 + 0x120;
  }
  local_900 = param_2 + 0x178;
  *(ulonglong *)(param_2 + 0x70) = uVar27;
  FUN_1456bbb8c(uVar38,L"Lumen.Reflections.ReflectionRayBuffer",&local_858,0);
  iVar11 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar11 + 1U) {
    FUN_14472c0f6(local_900,iVar11);
  }
  puVar29 = local_970;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar11 * 8) = uVar38;
  *(int *)(uVar38 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  uVar48 = DAT_14ca84e40;
  if ((int)(uint)local_5c0 < (int)DAT_14ca84e40) {
    uVar48 = (uint)local_5c0;
  }
  if ((int)uVar48 < 2) {
    uVar48 = 1;
  }
  uVar32 = (uint)((ulonglong)local_5c0 >> 0x20);
  uVar25 = DAT_14ca84e40;
  if ((int)uVar32 < (int)DAT_14ca84e40) {
    uVar25 = uVar32;
  }
  uStack_850._0_4_ = DAT_14ca83a30;
  uStack_850._4_4_ = DAT_14ca83a34;
  uStack_848._0_4_ = DAT_14ca83a38;
  uStack_848._4_4_ = DAT_14ca83a3c;
  local_858._0_2_ = 8;
  local_858._2_2_ = 2;
  local_858._4_4_ = 0;
  local_830 = (ulonglong *)CONCAT26(uVar51,0x100000000);
  local_828 = (ulonglong *)CONCAT26(local_828._6_2_,0xff000d010101);
  local_840 = (ulonglong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
  if ((int)uVar25 < 2) {
    uVar25 = 1;
  }
  local_838 = (undefined8 *)((ulonglong)uVar48 << 0x20);
  local_830 = (ulonglong *)CONCAT44(local_830._4_4_,uVar25);
  uVar39 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar27 = uVar39 + 0x120;
  local_558 = uVar38;
  if (*(ulonglong *)(param_2 + 0x78) < uVar27) {
    FUN_140023dd8(local_970,0x128);
    uVar39 = *puVar29 + 7 & 0xfffffffffffffff8;
    uVar27 = uVar39 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar27;
  FUN_1456bbb8c(uVar39,L"Lumen.Reflections.ReflectionDownsampledDepth",&local_858,0);
  iVar11 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar11 + 1U) {
    FUN_14472c0f6(local_900,iVar11);
  }
  puVar29 = local_970;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar11 * 8) = uVar39;
  *(int *)(uVar39 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  uVar48 = DAT_14ca84e40;
  if ((int)(uint)local_5c0 < (int)DAT_14ca84e40) {
    uVar48 = (uint)local_5c0;
  }
  if ((int)uVar48 < 2) {
    uVar48 = 1;
  }
  uVar32 = (uint)((ulonglong)local_5c0 >> 0x20);
  uVar25 = DAT_14ca84e40;
  if ((int)uVar32 < (int)DAT_14ca84e40) {
    uVar25 = uVar32;
  }
  uStack_850._0_4_ = DAT_14ca83a30;
  uStack_850._4_4_ = DAT_14ca83a34;
  uStack_848._0_4_ = DAT_14ca83a38;
  uStack_848._4_4_ = DAT_14ca83a3c;
  local_858._0_2_ = 8;
  local_858._2_2_ = 2;
  local_858._4_4_ = 0;
  local_830 = (ulonglong *)CONCAT26(uVar51,0x100000000);
  local_828 = (ulonglong *)CONCAT26(local_828._6_2_,0xff0020010101);
  local_840 = (ulonglong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
  if ((int)uVar25 < 2) {
    uVar25 = 1;
  }
  local_838 = (undefined8 *)((ulonglong)uVar48 << 0x20);
  local_830 = (ulonglong *)CONCAT44(local_830._4_4_,uVar25);
  uVar38 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar27 = uVar38 + 0x120;
  local_548 = uVar39;
  if (*(ulonglong *)(param_2 + 0x78) < uVar27) {
    FUN_140023dd8(local_970,0x128);
    uVar38 = *puVar29 + 7 & 0xfffffffffffffff8;
    uVar27 = uVar38 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar27;
  FUN_1456bbb8c(uVar38,L"Lumen.Reflections.RayTraceDistance",&local_858,0);
  iVar11 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar11 + 1U) {
    FUN_14472c0f6(local_900,iVar11);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar11 * 8) = uVar38;
  *(int *)(uVar38 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  uStack_550 = uVar38;
  FUN_1448a862c(local_888);
  FUN_14019e00e(&local_858,local_888,0,1);
  lVar15 = FUN_1448a8484();
  local_4f0 = '\x02';
  if (*(char *)(lVar15 + 0x41) != '\x03') {
    local_4f0 = *(char *)(lVar15 + 0x41);
  }
  lVar15 = CONCAT44(local_858._4_4_,CONCAT22(local_858._2_2_,(undefined2)local_858));
  local_4f8 = lVar15;
  if (lVar15 != 0) {
    LOCK();
    puVar31 = (uint *)(lVar15 + 8);
    uVar48 = *puVar31;
    *puVar31 = *puVar31 - 1;
    UNLOCK();
    if ((uVar48 & 0x3fffffff) == 1) {
      puVar31 = (uint *)(lVar15 + 8);
      LOCK();
      uVar48 = *puVar31;
      *puVar31 = *puVar31 | 0x40000000;
      UNLOCK();
      if ((uVar48 >> 0x1e & 1) == 0) {
        bVar35 = *(byte *)(lVar15 + 0xd);
        plVar16 = (longlong *)FUN_14001cc68(0x10,8);
        plVar16[1] = lVar15;
        plVar18 = DAT_14ca843c0;
        plVar40 = DAT_14ca843c8;
        if ((bVar35 & 2) == 0) {
          do {
            *plVar16 = (longlong)plVar18;
            LOCK();
            bVar56 = plVar18 != DAT_14ca843c0;
            plVar40 = plVar16;
            if (bVar56) {
              plVar18 = DAT_14ca843c0;
              plVar40 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar40;
            UNLOCK();
          } while (bVar56);
        }
        else {
          do {
            *plVar16 = (longlong)plVar40;
            LOCK();
            bVar56 = plVar40 != DAT_14ca843c8;
            plVar18 = plVar16;
            if (bVar56) {
              plVar40 = DAT_14ca843c8;
              plVar18 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar18;
            UNLOCK();
          } while (bVar56);
        }
      }
    }
  }
  local_8c8 = (ulonglong *)(local_928 + 0x20);
  local_908 = (int *)(lVar19 + 0xc60);
  local_8b8 = (uint)param_11;
  if ((((param_9 == 0) || (puVar29 = *(ulonglong **)(param_9 + 8), puVar29 == (ulonglong *)0x0)) ||
      (local_5d8 != 1)) || (*(int *)(param_9 + 0x18) != 8)) {
    local_88a = param_11;
    if (param_10 == (undefined8 *)0x0) {
      FUN_140304d29(&local_168,param_3);
      lVar15 = DAT_14ca97170;
      iVar11 = *local_908;
      if (((iVar11 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar11 == 2)) {
        uVar27 = 0;
      }
      else if (iVar11 == 1) {
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        uVar27 = (ulonglong)(DVar12 != DVar13);
      }
      else {
        uVar27 = 1;
      }
      lVar33 = local_968;
      iVar11 = 1;
      if (0 < *(int *)(lVar15 + uVar27 * 4)) {
        if (*(int *)(DAT_14ca5dc68 + 4) < 1) {
          uVar48 = FUN_147430fbd(*(undefined2 *)
                                  (&DAT_14ca85070 + (longlong)*(int *)(local_968 + 0x3090) * 2));
        }
        else {
          puVar31 = (uint *)(*(longlong *)(local_968 + 0x118c8) + 0x18);
          if (*(longlong *)(local_968 + 0x118c8) == 0) {
            puVar31 = (uint *)(local_968 + 0x11828);
          }
          uVar48 = *puVar31;
        }
        uVar25 = 8;
        if (uVar48 < 8) {
          uVar25 = uVar48;
        }
        iVar11 = uVar25 + (uVar25 == 0);
        param_3 = lVar33;
      }
      plVar18 = (longlong *)((ulonglong)local_168 & 0xffffffff);
      iVar26 = local_168._4_4_;
    }
    else {
      plVar18 = (longlong *)*local_8c8;
      iVar11 = 1;
      iVar26 = (int)((ulonglong)plVar18 >> 0x20);
      local_168 = (ulonglong *)plVar18;
    }
    puVar29 = local_970;
    iVar10 = *(int *)(param_3 + 0x3104) - *(int *)(param_3 + 0x30fc);
    iVar37 = iVar10 + 0xe;
    if (-1 < iVar10 + 7) {
      iVar37 = iVar10 + 7;
    }
    iVar24 = *(int *)(param_3 + 0x3100) - *(int *)(param_3 + 0x30f8);
    iVar23 = iVar24 + 0xe;
    if (-1 < iVar24 + 7) {
      iVar23 = iVar24 + 7;
    }
    iVar49 = iVar26 + 0xe;
    if (-1 < iVar26 + 7) {
      iVar49 = iVar26 + 7;
    }
    uVar48 = iVar49 >> 3;
    iVar49 = (int)plVar18;
    iVar5 = iVar49 + 0xe;
    if (-1 < iVar49 + 7) {
      iVar5 = iVar49 + 7;
    }
    local_308 = (ulonglong *)CONCAT44(iVar37 >> 3,iVar23 >> 3);
    uVar25 = iVar5 >> 3;
    local_8cc = local_5d8 << 3;
    local_938 = (longlong)(iVar10 + local_5d8 * 8 + -1) / (longlong)local_8cc & 0xffffffff;
    local_8f8 = (longlong)(iVar24 + -1 + local_5d8 * 8) / (longlong)local_8cc & 0xffffffff;
    local_8b0 = CONCAT44(local_8b0._4_4_,(iVar26 + local_5d8 * 8 + -1) / local_8cc);
    local_8cc = (iVar49 + local_5d8 * 8 + -1) / local_8cc;
    uVar52 = uVar25 * iVar11 * uVar48;
    uVar32 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar32 = DAT_14ca84e48;
    }
    uStack_850._0_4_ = 0x4109;
    local_858._0_4_ = uVar32 + (uVar32 == 0);
    uStack_848._0_4_ = 0;
    uStack_848._4_4_ = 0;
    uVar32 = DAT_14ca84e48;
    if (uVar52 < DAT_14ca84e48) {
      uVar32 = uVar52;
    }
    local_858._4_4_ = uVar32 + (uVar32 == 0);
    plVar40 = (longlong *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    plVar18 = plVar40 + 0x2a;
    if (*(longlong **)(param_2 + 0x78) < plVar18) {
      FUN_140023dd8(local_970,0x160);
      plVar40 = (longlong *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      plVar18 = plVar40 + 0x2a;
    }
    lVar15 = param_2 + 0x188;
    *(longlong **)(param_2 + 0x70) = plVar18;
    FUN_1456bd266(plVar40,L"Lumen.Reflections.ReflectionClearTileData",&local_858,0);
    iVar26 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar26 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar26 + 1U) {
      FUN_144737178(lVar15,iVar26);
    }
    puVar29 = local_970;
    *(longlong **)(*(longlong *)(param_2 + 0x188) + (longlong)iVar26 * 8) = plVar40;
    *(int *)((longlong)plVar40 + 0x7c) = *(int *)(param_2 + 400) + -1;
    uVar32 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar32 = DAT_14ca84e48;
    }
    local_858._0_4_ = uVar32 + (uVar32 == 0);
    uStack_850._0_4_ = 0x4109;
    uVar32 = DAT_14ca84e48;
    if (uVar52 < DAT_14ca84e48) {
      uVar32 = uVar52;
    }
    uStack_848._0_4_ = 0;
    uStack_848._4_4_ = 0;
    local_858._4_4_ = uVar32 + (uVar32 == 0);
    plVar16 = (longlong *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    plVar18 = plVar16 + 0x2a;
    local_638[0] = plVar40;
    if (*(longlong **)(param_2 + 0x78) < plVar18) {
      FUN_140023dd8(local_970,0x160);
      plVar16 = (longlong *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      plVar18 = plVar16 + 0x2a;
    }
    *(longlong **)(param_2 + 0x70) = plVar18;
    FUN_1456bd266(plVar16,L"Lumen.Reflections.ReflectionResolveTileData",&local_858,0);
    iVar26 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar26 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar26 + 1U) {
      FUN_144737178(lVar15,iVar26);
    }
    puVar29 = local_970;
    *(longlong **)(*(longlong *)(param_2 + 0x188) + (longlong)iVar26 * 8) = plVar16;
    *(int *)((longlong)plVar16 + 0x7c) = *(int *)(param_2 + 400) + -1;
    uStack_848._0_4_ = 0;
    uStack_848._4_4_ = 0;
    uVar32 = 0xc;
    if (DAT_14ca84e48 < 0xc) {
      uVar32 = DAT_14ca84e48;
    }
    local_858._0_4_ = uVar32 + (uVar32 == 0);
    local_858._4_4_ = 1;
    uStack_850._0_4_ = 0x4189;
    puVar41 = (ulonglong *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar17 = puVar41 + 0x2a;
    local_2a8 = plVar16;
    if (*(ulonglong **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_970,0x160);
      puVar41 = (ulonglong *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar17 = puVar41 + 0x2a;
    }
    *(ulonglong **)(param_2 + 0x70) = puVar17;
    FUN_1456bd266(puVar41,L"Lumen.Reflections.ReflectionClearTileIndirectArgs",&local_858,0);
    iVar26 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar26 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar26 + 1U) {
      FUN_144737178(lVar15,iVar26);
    }
    puVar29 = local_970;
    *(ulonglong **)(*(longlong *)(param_2 + 0x188) + (longlong)iVar26 * 8) = puVar41;
    *(int *)((longlong)puVar41 + 0x7c) = *(int *)(param_2 + 400) + -1;
    uVar32 = 0xc;
    if (DAT_14ca84e48 < 0xc) {
      uVar32 = DAT_14ca84e48;
    }
    uStack_848._0_4_ = 0;
    uStack_848._4_4_ = 0;
    local_858._0_4_ = uVar32 + (uVar32 == 0);
    local_858._4_4_ = 1;
    uStack_850._0_4_ = 0x4189;
    puVar42 = (ulonglong *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar17 = puVar42 + 0x2a;
    local_378 = puVar41;
    if (*(ulonglong **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_970,0x160);
      puVar42 = (ulonglong *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar17 = puVar42 + 0x2a;
    }
    *(ulonglong **)(param_2 + 0x70) = puVar17;
    FUN_1456bd266(puVar42,L"Lumen.Reflections.ReflectionResolveTileIndirectArgs",&local_858,0);
    iVar26 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar26 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar26 + 1U) {
      FUN_144737178(lVar15,iVar26);
    }
    puVar29 = local_970;
    *(ulonglong **)(*(longlong *)(param_2 + 0x188) + (longlong)iVar26 * 8) = puVar42;
    *(int *)((longlong)puVar42 + 0x7c) = *(int *)(param_2 + 400) + -1;
    uVar32 = 0xc;
    if (DAT_14ca84e48 < 0xc) {
      uVar32 = DAT_14ca84e48;
    }
    uStack_848._0_4_ = 0;
    uStack_848._4_4_ = 0;
    local_858._0_4_ = uVar32 + (uVar32 == 0);
    local_858._4_4_ = 1;
    uStack_850._0_4_ = 0x4189;
    puVar41 = (ulonglong *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar17 = puVar41 + 0x2a;
    local_8a0 = lVar15;
    local_338 = puVar42;
    if (*(ulonglong **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_970,0x160);
      puVar41 = (ulonglong *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar17 = puVar41 + 0x2a;
    }
    *(ulonglong **)(param_2 + 0x70) = puVar17;
    FUN_1456bd266(puVar41,L"Lumen.Reflections.ReflectionTracingTileIndirectArgs",&local_858,0);
    iVar26 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar26 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar26 + 1U) {
      FUN_144737178(local_8a0,iVar26);
    }
    puVar29 = local_970;
    *(ulonglong **)(*(longlong *)(param_2 + 0x188) + (longlong)iVar26 * 8) = puVar41;
    *(int *)((longlong)puVar41 + 0x7c) = *(int *)(param_2 + 400) + -1;
    if ((int)DAT_14ca84e40 <= (int)uVar25) {
      uVar25 = DAT_14ca84e40;
    }
    if ((int)uVar25 < 2) {
      uVar25 = 1;
    }
    uVar32 = DAT_14ca84e40;
    if ((int)uVar48 < (int)DAT_14ca84e40) {
      uVar32 = uVar48;
    }
    uStack_850._0_4_ = DAT_14ca83a30;
    uStack_850._4_4_ = DAT_14ca83a34;
    uStack_848._0_4_ = DAT_14ca83a38;
    uStack_848._4_4_ = DAT_14ca83a3c;
    local_858._0_2_ = 8;
    local_858._2_2_ = 2;
    local_858._4_4_ = 0;
    local_830 = (ulonglong *)CONCAT26((short)iVar11,0x100000000);
    local_828 = (ulonglong *)CONCAT26(local_828._6_2_,0xff0039010101);
    local_840 = (ulonglong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    if ((int)uVar32 < 2) {
      uVar32 = 1;
    }
    local_838 = (undefined8 *)((ulonglong)uVar25 << 0x20);
    local_830 = (ulonglong *)CONCAT44(local_830._4_4_,uVar32);
    uVar38 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar27 = uVar38 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar27) {
      FUN_140023dd8(local_970,0x128);
      uVar38 = *puVar29 + 7 & 0xfffffffffffffff8;
      uVar27 = uVar38 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar27;
    FUN_1456bbb8c(uVar38,L"Lumen.Reflections.ResolveTileUsed",&local_858,0);
    iVar26 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar26 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar26 + 1U) {
      FUN_14472c0f6(local_900,iVar26);
    }
    uVar27 = local_548;
    puVar29 = local_970;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar26 * 8) = uVar38;
    *(int *)(uVar38 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    uVar2 = *(undefined1 *)(local_548 + 0x94);
    puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar45 + 9;
    local_f8 = uVar38;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x50);
      puVar45 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar45 + 9;
    }
    local_948 = (longlong *)CONCAT44(local_948._4_4_,iVar11);
    local_8e0 = param_2 + 0x198;
    *(undefined8 **)(param_2 + 0x70) = puVar21;
    puVar45[1] = *(undefined8 *)(uVar27 + 8);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 0;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar45 + 5) = 1;
    *puVar45 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar45 + 6) = uVar2;
    *(undefined1 *)(puVar45 + 7) = 0;
    *(undefined4 *)((longlong)puVar45 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x35) = 0;
    puVar45[8] = uVar27;
    iVar11 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(local_8e0,iVar11);
    }
    puVar17 = local_378;
    puVar29 = local_970;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar50 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x48);
      puVar50 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar50 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar21;
    puVar50[1] = puVar17[1];
    puVar50[2] = 0;
    *(undefined1 *)(puVar50 + 3) = 2;
    *(undefined8 *)((longlong)puVar50 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar50 + 5) = 1;
    *puVar50 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar50 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar50 + 0x32) = 0;
    puVar50[7] = puVar17;
    iVar11 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(local_8e0,iVar11);
    }
    puVar17 = local_338;
    puVar29 = local_970;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar50;
    *(int *)((longlong)puVar50 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar55 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar55 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x48);
      puVar55 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar55 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar21;
    puVar55[1] = puVar17[1];
    puVar55[2] = 0;
    *(undefined1 *)(puVar55 + 3) = 2;
    *(undefined8 *)((longlong)puVar55 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar55 + 5) = 1;
    *puVar55 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar55 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar55 + 0x32) = 0;
    puVar55[7] = puVar17;
    iVar11 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(local_8e0,iVar11);
    }
    puVar29 = local_970;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar55;
    *(int *)((longlong)puVar55 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar53 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar53 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x48);
      puVar53 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar53 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar21;
    puVar53[1] = puVar41[1];
    puVar53[2] = 0;
    *(undefined1 *)(puVar53 + 3) = 2;
    *(undefined8 *)((longlong)puVar53 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar53 + 5) = 1;
    *puVar53 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar53 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar53 + 0x32) = 0;
    puVar53[7] = puVar41;
    iVar11 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
    local_958 = puVar41;
    if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(local_8e0,iVar11);
    }
    uVar27 = local_f8;
    puVar29 = local_970;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar53;
    *(int *)((longlong)puVar53 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    uVar2 = *(undefined1 *)(local_f8 + 0x94);
    puVar44 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar44 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x50);
      puVar44 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar44 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar21;
    puVar44[1] = *(undefined8 *)(uVar27 + 8);
    puVar44[2] = 0;
    *(undefined1 *)(puVar44 + 3) = 0;
    *(undefined8 *)((longlong)puVar44 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar44 + 5) = 1;
    *puVar44 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar44 + 6) = uVar2;
    *(undefined1 *)(puVar44 + 7) = 0;
    *(undefined4 *)((longlong)puVar44 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar44 + 0x35) = 0;
    puVar44[8] = uVar27;
    iVar11 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(local_8e0,iVar11);
    }
    puVar29 = local_970;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar44;
    *(int *)((longlong)puVar44 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar43 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar21 = puVar43 + 0x32;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x1a0);
      puVar43 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar21 = puVar43 + 0x32;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar21;
    *puVar43 = &PTR_FUN_14a265130;
    puVar43[8] = 0;
    puVar43[2] = 0;
    puVar43[3] = 0;
    puVar43[4] = 0;
    puVar43[5] = 0;
    puVar43[6] = 0;
    *(undefined1 *)(puVar43 + 9) = 1;
    puVar43[10] = 0;
    *(undefined1 *)(puVar43 + 0xb) = 1;
    puVar43[0xc] = 0;
    puVar43[0xd] = 0;
    puVar43[0xe] = 0;
    *(undefined1 *)(puVar43 + 0xf) = 1;
    puVar43[0x10] = 0;
    puVar43[0x2e] = 0;
    puVar43[0x20] = 0;
    puVar43[0x21] = 0;
    puVar43[0x22] = 0;
    puVar43[0x23] = 0;
    puVar43[0x24] = 0;
    puVar43[0x25] = 0;
    puVar43[0x26] = 0;
    puVar43[0x27] = 0;
    puVar43[0x28] = 0;
    puVar43[0x29] = 0;
    puVar43[0x2a] = 0;
    puVar43[0x2b] = 0;
    puVar43[0x2c] = 0;
    *(undefined1 *)(puVar43 + 0x2f) = 1;
    puVar43[0x30] = 0;
    *(undefined4 *)(puVar43 + 0x31) = 4;
    local_920 = (longlong *)(param_2 + 0x98);
    iVar11 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar11 + 1U) {
      FUN_1448cfae8(local_920,iVar11);
    }
    local_950 = puVar43 + 2;
    local_960 = puVar43 + 0x10;
    *(undefined8 **)(*local_920 + (longlong)iVar11 * 8) = puVar43;
    puVar43[2] = puVar45;
    puVar43[3] = puVar50;
    puVar43[4] = puVar55;
    puVar43[5] = puVar53;
    puVar43[6] = puVar44;
    lVar33 = FUN_1447e4f80();
    lVar15 = local_968;
    cVar9 = *(char *)(lVar33 + 0x41);
    if (*(char *)(lVar33 + 0x41) == '\x03') {
      cVar9 = '\x02';
    }
    puVar43[8] = *(undefined8 *)(local_968 + 0x18);
    *(char *)(puVar43 + 9) = cVar9;
    uVar14 = *(undefined8 *)(local_928 + 0x198);
    lVar33 = FUN_14482e3b2();
    cVar9 = *(char *)(lVar33 + 0x41);
    if (cVar9 == '\x03') {
      cVar9 = '\x02';
    }
    puVar43[10] = uVar14;
    *(char *)(puVar43 + 0xb) = cVar9;
    if (param_10 != (undefined8 *)0x0) {
      uVar70 = *(undefined4 *)((longlong)param_10 + 4);
      uVar61 = *(undefined4 *)(param_10 + 1);
      uVar62 = *(undefined4 *)((longlong)param_10 + 0xc);
      *(undefined4 *)(puVar43 + 0xc) = *(undefined4 *)param_10;
      *(undefined4 *)((longlong)puVar43 + 100) = uVar70;
      *(undefined4 *)(puVar43 + 0xd) = uVar61;
      *(undefined4 *)((longlong)puVar43 + 0x6c) = uVar62;
    }
    uVar14 = *(undefined8 *)(lVar15 + 0x118d0);
    lVar33 = FUN_144a2c9be();
    cVar9 = '\x02';
    if (*(char *)(lVar33 + 0x41) != '\x03') {
      cVar9 = *(char *)(lVar33 + 0x41);
    }
    puVar43[0xe] = uVar14;
    *(char *)(puVar43 + 0xf) = cVar9;
    memcpy(local_960,&local_5e8,0x100);
    uVar14 = *(undefined8 *)(lVar15 + 0x13818);
    FUN_14159ce9c();
    FUN_1448e935e(uVar14,&local_858,&DAT_14c9f3d88,param_10 != (undefined8 *)0x0);
    FUN_14159ce9c();
    uVar36 = local_88a;
    uVar14 = CONCAT44(local_858._4_4_,CONCAT22(local_858._2_2_,(undefined2)local_858));
    local_8f0 = CONCAT44(uStack_850._4_4_,(int)uStack_850);
    uVar70 = (undefined4)local_308;
    uVar61 = local_308._4_4_;
    uVar48 = (uint)local_88a;
    FUN_14159cfbe();
    puVar17 = local_950;
    local_858._0_2_ = 0;
    local_858._2_2_ = 0;
    local_858._4_4_ = 0;
    uStack_850._0_4_ = 0;
    uStack_850._4_4_ = 0;
    FUN_1448f70da(uVar14,&DAT_14c9f68c0,local_950,&local_858);
    FUN_140069376(param_2);
    uVar3 = local_8f0;
    puVar29 = local_970;
    local_960 = (undefined8 *)uVar14;
    if ((uVar36 & 4) == 0) {
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == '\x01')) &&
         (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar36 & 2) != 0)))) {
        uVar48 = uVar36 & 0xfffffff9 | 4;
      }
      puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar45 + 0x3d;
      if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
        local_8f0 = CONCAT44(local_8f0._4_4_,uVar48);
        FUN_140023dd8(local_970,0x1f0);
        puVar45 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
        puVar21 = puVar45 + 0x3d;
        uVar48 = (uint)local_8f0;
      }
      *local_970 = (ulonglong)puVar21;
      local_858._0_2_ = SUB82(puVar17,0);
      local_858._2_2_ = (undefined2)((ulonglong)puVar17 >> 0x10);
      local_858._4_4_ = (int)((ulonglong)puVar17 >> 0x20);
      uStack_850._0_4_ = (int)DAT_14c9f6908;
      uStack_850._4_4_ = (undefined4)((ulonglong)DAT_14c9f6908 >> 0x20);
      if (DAT_14c9f6908 != 0) {
        LOCK();
        *(int *)(DAT_14c9f6908 + 8) = *(int *)(DAT_14c9f6908 + 8) + 1;
        UNLOCK();
      }
      uStack_848._0_4_ = 0x4c9f68c0;
      uStack_848._4_4_ = 1;
      local_9b8 = (longlong **)CONCAT71(local_9b8._1_7_,2);
      FUN_140068f1a(puVar45,&local_268,&local_858,uVar48);
      *puVar45 = &PTR_FUN_14a265160;
      puVar45[0x37] = &DAT_14c9f68c0;
      puVar45[0x38] = puVar17;
      puVar45[0x39] = local_960;
      puVar45[0x3a] = uVar3;
      *(undefined4 *)(puVar45 + 0x3b) = uVar70;
      *(undefined4 *)((longlong)puVar45 + 0x1dc) = uVar61;
      *(int *)(puVar45 + 0x3c) = (int)local_948;
      iVar11 = (int)local_948;
    }
    else {
      if (((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) ||
         ((DAT_14ca84e6a != '\x01' || ((DAT_14ca84e99 & 1) != 0)))) {
        uVar48 = uVar36 & 0xfffffff9 | 2;
      }
      else if (DAT_14c760ddc == 2 && (uVar36 & 2) != 0) {
        uVar48 = uVar36 & 0xfffd;
      }
      puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar45 + 0x3e;
      if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
        FUN_140023dd8(local_970,0x1f8);
        puVar45 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
        puVar21 = puVar45 + 0x3e;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar21;
      uVar62 = *(undefined4 *)(param_2 + 0x660);
      local_858._0_2_ = SUB82(local_950,0);
      local_858._2_2_ = (undefined2)((ulonglong)local_950 >> 0x10);
      local_858._4_4_ = (int)((ulonglong)local_950 >> 0x20);
      uStack_850._0_4_ = (int)DAT_14c9f6908;
      uStack_850._4_4_ = (undefined4)((ulonglong)DAT_14c9f6908 >> 0x20);
      if (DAT_14c9f6908 != 0) {
        LOCK();
        *(int *)(DAT_14c9f6908 + 8) = *(int *)(DAT_14c9f6908 + 8) + 1;
        UNLOCK();
      }
      uStack_848._0_4_ = 0x4c9f68c0;
      uStack_848._4_4_ = 1;
      local_9b8 = (longlong **)CONCAT71(local_9b8._1_7_,2);
      FUN_140068f1a(puVar45,&local_268,&local_858,uVar48);
      puVar45[0x37] = &DAT_14c9f68c0;
      puVar45[0x38] = local_950;
      puVar45[0x39] = local_960;
      puVar45[0x3a] = uVar3;
      *(undefined4 *)(puVar45 + 0x3b) = uVar70;
      *(undefined4 *)((longlong)puVar45 + 0x1dc) = uVar61;
      *(int *)(puVar45 + 0x3c) = (int)local_948;
      *puVar45 = &PTR_FUN_14a265140;
      *(undefined4 *)(puVar45 + 0x3d) = uVar62;
      iVar11 = (int)local_948;
    }
    puVar29 = local_958;
    lVar15 = local_968;
    iVar26 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar26 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar26 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar26);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar26 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar45);
    local_858._0_2_ = (undefined2)param_2;
    local_858._2_2_ = (undefined2)((ulonglong)param_2 >> 0x10);
    local_858._4_4_ = (int)((ulonglong)param_2 >> 0x20);
    uStack_850 = &local_378;
    uStack_848 = (ulonglong **)local_638;
    local_840 = &local_338;
    local_838 = &local_2a8;
    local_830 = &local_f8;
    local_828 = (ulonglong *)lVar15;
    local_820 = &local_308;
    local_810 = &local_88a;
    uVar27 = 0;
    local_818 = &local_5e8;
    FUN_142d3fe02(&local_858,0);
    lVar15 = DAT_14ca97170;
    iVar26 = *local_908;
    if (iVar26 != 0x40000002) {
      if ((DAT_14c86a9f8 == '\x01') && (iVar26 != 2)) {
        if (iVar26 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          uVar27 = (ulonglong)(DVar12 != DVar13);
        }
        else {
          uVar27 = 1;
        }
      }
      else {
        uVar27 = 0;
      }
    }
    if ((param_10 == (undefined8 *)0x0) && (0 < *(int *)(lVar15 + uVar27 * 4))) {
      FUN_142d3fe02(&local_858,1);
    }
    puVar17 = local_970;
    if (local_5d8 == 1) {
      local_958 = local_338;
      plVar18 = local_2a8;
    }
    else {
      uVar48 = (int)local_8b0 * local_8cc * iVar11;
      uVar25 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar25 = DAT_14ca84e48;
      }
      uStack_260 = (ulonglong *)CONCAT44(uStack_260._4_4_,0x4109);
      if (DAT_14ca84e48 <= uVar48) {
        uVar48 = DAT_14ca84e48;
      }
      uStack_258 = (ulonglong *)0x0;
      local_268 = (ulonglong *)CONCAT44(uVar48 + (uVar48 == 0),uVar25 + (uVar25 == 0));
      plVar40 = (longlong *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      plVar18 = plVar40 + 0x2a;
      if (*(longlong **)(param_2 + 0x78) < plVar18) {
        FUN_140023dd8(local_970,0x160);
        plVar40 = (longlong *)(*puVar17 + 0xf & 0xfffffffffffffff0);
        plVar18 = plVar40 + 0x2a;
      }
      *(longlong **)(param_2 + 0x70) = plVar18;
      FUN_1456bd266(plVar40,L"Lumen.Reflections.ReflectionTracingTileData",&local_268,0);
      iVar11 = *(int *)(param_2 + 400);
      *(uint *)(param_2 + 400) = iVar11 + 1U;
      if (*(uint *)(param_2 + 0x194) < iVar11 + 1U) {
        FUN_144737178(local_8a0,iVar11);
      }
      puVar17 = local_970;
      *(longlong **)(*(longlong *)(param_2 + 0x188) + (longlong)iVar11 * 8) = plVar40;
      *(int *)((longlong)plVar40 + 0x7c) = *(int *)(param_2 + 400) + -1;
      puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar21 = puVar45 + 0x30;
      if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
        FUN_140023dd8(local_970,400);
        puVar45 = (undefined8 *)(*puVar17 + 0xf & 0xfffffffffffffff0);
        puVar21 = puVar45 + 0x30;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar21;
      *puVar45 = &PTR_FUN_14a266400;
      puVar45[8] = 0;
      puVar45[2] = 0;
      puVar45[3] = 0;
      puVar45[4] = 0;
      puVar45[5] = 0;
      puVar45[6] = 0;
      *(undefined1 *)(puVar45 + 9) = 1;
      puVar45[10] = 0;
      *(undefined1 *)(puVar45 + 0xb) = 1;
      puVar45[0xc] = 0;
      puVar45[0x2a] = 0;
      puVar45[0x1c] = 0;
      puVar45[0x1d] = 0;
      puVar45[0x1e] = 0;
      puVar45[0x1f] = 0;
      puVar45[0x20] = 0;
      puVar45[0x21] = 0;
      puVar45[0x22] = 0;
      puVar45[0x23] = 0;
      puVar45[0x24] = 0;
      puVar45[0x25] = 0;
      puVar45[0x26] = 0;
      puVar45[0x27] = 0;
      puVar45[0x28] = 0;
      *(undefined1 *)(puVar45 + 0x2b) = 1;
      puVar45[0x2e] = 0;
      *(undefined4 *)(puVar45 + 0x2f) = 4;
      iVar11 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar11 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar11 + 1U) {
        FUN_1448cfae8(local_920,iVar11);
      }
      puVar17 = local_970;
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar11 * 8) = puVar45;
      puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar50 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
        FUN_140023dd8(local_970,0x48);
        puVar50 = (undefined8 *)(*puVar17 + 7 & 0xfffffffffffffff8);
        puVar21 = puVar50 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar21;
      puVar50[1] = puVar29[1];
      puVar50[2] = 0;
      *(undefined1 *)(puVar50 + 3) = 2;
      *(undefined8 *)((longlong)puVar50 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar50 + 5) = 0;
      *puVar50 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar50 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar50 + 0x32) = 0;
      puVar50[7] = puVar29;
      iVar11 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
        FUN_1447568fc(local_8e0,iVar11);
      }
      puVar29 = local_970;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar50;
      *(int *)((longlong)puVar50 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar45[4] = puVar50;
      puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar50 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
        FUN_140023dd8(local_970,0x48);
        puVar50 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
        puVar21 = puVar50 + 8;
      }
      local_950 = puVar45 + 2;
      *(undefined8 **)(param_2 + 0x70) = puVar21;
      puVar50[1] = plVar40[1];
      puVar50[2] = 0;
      *(undefined1 *)(puVar50 + 3) = 2;
      *(undefined8 *)((longlong)puVar50 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar50 + 5) = 0;
      *puVar50 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar50 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar50 + 0x32) = 0;
      puVar50[7] = plVar40;
      iVar11 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
      local_920 = plVar40;
      if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
        FUN_1447568fc(local_8e0,iVar11);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar50;
      *(int *)((longlong)puVar50 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar45[5] = puVar50;
      puVar45[6] = local_f8;
      lVar33 = FUN_1447e4f80();
      lVar15 = local_968;
      cVar9 = *(char *)(lVar33 + 0x41);
      if (*(char *)(lVar33 + 0x41) == '\x03') {
        cVar9 = '\x02';
      }
      puVar45[8] = *(undefined8 *)(local_968 + 0x18);
      *(char *)(puVar45 + 9) = cVar9;
      uVar14 = *(undefined8 *)(local_968 + 0x118d0);
      lVar33 = FUN_144a2c9be();
      uVar27 = local_938;
      cVar9 = *(char *)(lVar33 + 0x41);
      if (cVar9 == '\x03') {
        cVar9 = '\x02';
      }
      puVar45[10] = uVar14;
      *(char *)(puVar45 + 0xb) = cVar9;
      iVar37 = (int)local_8f8;
      puVar45[0x2c] = local_8f8 & 0xffffffff | local_938 << 0x20;
      puVar45[0x2d] = local_308;
      memcpy(puVar45 + 0xc,&local_5e8,0x100);
      uVar14 = *(undefined8 *)(lVar15 + 0x13818);
      FUN_14159a1d0();
      FUN_1448e935e(uVar14,&local_268,&DAT_14c9f3eb0,1);
      FUN_14159a1d0();
      uVar14 = local_268;
      uVar36 = local_88a;
      local_960 = uStack_260;
      iVar26 = (int)uVar27 + 7;
      iVar11 = (int)uVar27 + 0xe;
      if (-1 < iVar26) {
        iVar11 = iVar26;
      }
      iVar10 = iVar37 + 7;
      iVar26 = iVar37 + 0xe;
      if (-1 < iVar10) {
        iVar26 = iVar10;
      }
      FUN_14159a2f2();
      puVar29 = local_950;
      local_268 = (ulonglong *)0x0;
      uStack_260 = (ulonglong *)0x0;
      FUN_1448f70da(uVar14,&DAT_14c9f69d0,local_950,&local_268);
      local_268 = (ulonglong *)&DAT_14c9f69d0;
      uStack_260 = puVar29;
      uStack_258 = (ulonglong *)uVar14;
      uStack_250 = local_960;
      local_248 = CONCAT44(iVar11 >> 3,iVar26 >> 3);
      uStack_240 = (int)local_948;
      local_9b8 = (longlong **)&local_268;
      FUN_141769b5a(param_2,&local_88b,puVar29,uVar36);
      plVar18 = local_920;
    }
    puVar29 = local_338;
    puVar41 = local_378;
    plVar16 = local_638[0];
    puVar17 = local_970;
    plVar54 = (longlong *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    plVar40 = plVar54 + 9;
    if (*(longlong **)(param_2 + 0x78) < plVar40) {
      FUN_140023dd8(local_970,0x50);
      plVar54 = (longlong *)(*puVar17 + 7 & 0xfffffffffffffff8);
      plVar40 = plVar54 + 9;
    }
    *(longlong **)(param_2 + 0x70) = plVar40;
    plVar54[1] = plVar16[1];
    plVar54[2] = 0;
    *(undefined1 *)(plVar54 + 3) = 3;
    *(undefined8 *)((longlong)plVar54 + 0x1c) = 0xffffffffffffffff;
    *plVar54 = (longlong)&PTR_FUN_14a1fb168;
    *(undefined1 *)(plVar54 + 5) = 0x1c;
    *(undefined8 *)((longlong)plVar54 + 0x2c) = 0xffffffff00000000;
    plVar54[7] = 0;
    plVar54[8] = (longlong)plVar16;
    iVar11 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(local_8e0,iVar11);
    }
    plVar40 = local_2a8;
    puVar17 = local_970;
    *(longlong **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = plVar54;
    *(int *)((longlong)plVar54 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar45 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x50);
      puVar45 = (undefined8 *)(*puVar17 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar45 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar21;
    puVar45[1] = plVar40[1];
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 3;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *puVar45 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar45 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar45 + 0x2c) = 0xffffffff00000000;
    puVar45[7] = 0;
    puVar45[8] = plVar40;
    iVar11 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(local_8e0,iVar11);
    }
    puVar17 = local_970;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    local_638[2] = (longlong *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = local_638[2] + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x50);
      local_638[2] = (longlong *)(*puVar17 + 7 & 0xfffffffffffffff8);
      puVar21 = local_638[2] + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar21;
    local_638[2][1] = plVar18[1];
    local_638[2][2] = 0;
    *(undefined1 *)(local_638[2] + 3) = 3;
    *(undefined8 *)((longlong)local_638[2] + 0x1c) = 0xffffffffffffffff;
    *local_638[2] = (longlong)&PTR_FUN_14a1fb168;
    *(undefined1 *)(local_638[2] + 5) = 0x1c;
    *(undefined8 *)((longlong)local_638[2] + 0x2c) = 0xffffffff00000000;
    local_638[2][7] = 0;
    local_638[2][8] = (longlong)plVar18;
    iVar11 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(local_8e0,iVar11);
    }
    *(longlong **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = local_638[2];
    *(int *)((longlong)local_638[2] + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    local_638[0] = plVar54;
  }
  else {
    local_638[0] = (longlong *)0x0;
    local_638[2] = *(longlong **)(param_9 + 0x10);
    puVar41 = (ulonglong *)0x0;
    puVar45 = local_638[2];
    local_958 = puVar29;
  }
  puVar17 = local_970;
  local_618 = 4;
  local_608 = 4;
  bVar56 = DAT_14c9f3a40 != 0;
  local_600 = local_958;
  local_5f8 = 4;
  puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar50 + 0x6a;
  local_638[1] = puVar45;
  local_638[3] = (longlong *)puVar41;
  local_610 = puVar29;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_970,0x360);
    puVar50 = (undefined8 *)(*puVar17 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar50 + 0x6a;
  }
  local_8d8 = CONCAT71((int7)(local_8d8 >> 8),(byte)local_8d8 & (byte)local_8c0);
  *local_970 = (ulonglong)puVar21;
  *puVar50 = &PTR_FUN_14a266448;
  puVar21 = puVar50 + 2;
  puVar50[6] = 0;
  puVar50[2] = 0;
  puVar50[3] = 0;
  puVar50[4] = 0;
  *(undefined1 *)(puVar50 + 7) = 1;
  puVar50[10] = 0;
  *(undefined1 *)(puVar50 + 0xb) = 1;
  local_920 = puVar50 + 0xc;
  puVar50[0xc] = 0;
  puVar50[0xd] = 0;
  puVar50[0xe] = 0;
  *(undefined1 *)(puVar50 + 0xf) = 1;
  puVar50[0x10] = 0;
  puVar50[0x2e] = 0;
  puVar50[0x20] = 0;
  puVar50[0x21] = 0;
  puVar50[0x22] = 0;
  puVar50[0x23] = 0;
  puVar50[0x24] = 0;
  puVar50[0x25] = 0;
  puVar50[0x26] = 0;
  puVar50[0x27] = 0;
  puVar50[0x28] = 0;
  puVar50[0x29] = 0;
  puVar50[0x2a] = 0;
  puVar50[0x2b] = 0;
  puVar50[0x2c] = 0;
  *(undefined1 *)(puVar50 + 0x2f) = 1;
  puVar50[0x32] = 0;
  puVar50[0x33] = 0;
  puVar50[0x30] = 0;
  puVar50[0x31] = 0;
  *(undefined4 *)(puVar50 + 0x34) = 4;
  puVar50[0x35] = 0;
  *(undefined4 *)(puVar50 + 0x36) = 4;
  puVar50[0x37] = 0;
  *(undefined4 *)(puVar50 + 0x38) = 4;
  puVar50[0x44] = 0;
  puVar50[0x45] = 0;
  puVar50[0x46] = 0;
  puVar50[0x47] = 0;
  puVar50[0x48] = 0;
  puVar50[0x49] = 0;
  lVar15 = 0x25c;
  do {
    puVar45 = (undefined8 *)((longlong)puVar50 + lVar15 + -0xc);
    *puVar45 = 0;
    puVar45[1] = 0x3f80000000000000;
    lVar15 = lVar15 + 0x10;
  } while (lVar15 != 700);
  lVar15 = 700;
  do {
    puVar45 = (undefined8 *)((longlong)puVar50 + lVar15 + -0xc);
    *puVar45 = 0;
    puVar45[1] = 0x3f80000000000000;
    lVar15 = lVar15 + 0x10;
  } while (lVar15 != 0x31c);
  local_8c0 = CONCAT71(local_8c0._1_7_,bVar56 && local_498 != 0);
  puVar50[0x68] = 0;
  local_948 = (longlong *)(param_2 + 0x98);
  iVar11 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar11 + 1U) {
    FUN_1448cfae8(local_948,iVar11);
  }
  uVar27 = local_558;
  puVar29 = local_970;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar11 * 8) = puVar50;
  uVar2 = *(undefined1 *)(local_558 + 0x94);
  puVar55 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar45 = puVar55 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar45) {
    FUN_140023dd8(local_970,0x50);
    puVar55 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
    puVar45 = puVar55 + 9;
  }
  local_938 = param_2 + 0x198;
  *(undefined8 **)(param_2 + 0x70) = puVar45;
  puVar55[1] = *(undefined8 *)(uVar27 + 8);
  puVar55[2] = 0;
  *(undefined1 *)(puVar55 + 3) = 0;
  *(undefined8 *)((longlong)puVar55 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar55 + 5) = 0;
  *puVar55 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar55 + 6) = uVar2;
  *(undefined1 *)(puVar55 + 7) = 0;
  *(undefined4 *)((longlong)puVar55 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar55 + 0x35) = 0;
  puVar55[8] = uVar27;
  iVar11 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_938,iVar11);
  }
  uVar27 = local_548;
  puVar29 = local_970;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar55;
  *(int *)((longlong)puVar55 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  *puVar21 = puVar55;
  uVar2 = *(undefined1 *)(local_548 + 0x94);
  puVar55 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar45 = puVar55 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar45) {
    FUN_140023dd8(local_970,0x50);
    puVar55 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
    puVar45 = puVar55 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar45;
  puVar55[1] = *(undefined8 *)(uVar27 + 8);
  puVar55[2] = 0;
  *(undefined1 *)(puVar55 + 3) = 0;
  *(undefined8 *)((longlong)puVar55 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar55 + 5) = 0;
  *puVar55 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar55 + 6) = uVar2;
  *(undefined1 *)(puVar55 + 7) = 0;
  *(undefined4 *)((longlong)puVar55 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar55 + 0x35) = 0;
  puVar55[8] = uVar27;
  iVar11 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_938,iVar11);
  }
  uVar27 = uStack_550;
  puVar29 = local_970;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar55;
  *(int *)((longlong)puVar55 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar50[3] = puVar55;
  uVar2 = *(undefined1 *)(uStack_550 + 0x94);
  puVar55 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar45 = puVar55 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar45) {
    FUN_140023dd8(local_970,0x50);
    puVar55 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
    puVar45 = puVar55 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar45;
  puVar55[1] = *(undefined8 *)(uVar27 + 8);
  puVar55[2] = 0;
  *(undefined1 *)(puVar55 + 3) = 0;
  *(undefined8 *)((longlong)puVar55 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar55 + 5) = 0;
  *puVar55 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar55 + 6) = uVar2;
  *(undefined1 *)(puVar55 + 7) = 0;
  *(undefined4 *)((longlong)puVar55 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar55 + 0x35) = 0;
  puVar55[8] = uVar27;
  iVar11 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_938,iVar11);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar55;
  *(int *)((longlong)puVar55 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar50[4] = puVar55;
  lVar15 = FUN_1447e4f80();
  cVar9 = *(char *)(lVar15 + 0x41);
  if (*(char *)(lVar15 + 0x41) == '\x03') {
    cVar9 = '\x02';
  }
  puVar50[6] = *(undefined8 *)(local_968 + 0x18);
  *(char *)(puVar50 + 7) = cVar9;
  fVar59 = *(float *)(local_968 + 0x291c) * _DAT_14c7604b4;
  if (1048576.0 <= fVar59) {
    fVar59 = 1048576.0;
  }
  if (fVar59 <= 0.01) {
    fVar59 = 0.01;
  }
  *(float *)(puVar50 + 8) = fVar59;
  fVar59 = DAT_14c7605a8;
  if (4.0 <= DAT_14c7605a8) {
    fVar59 = 4.0;
  }
  if (fVar59 <= 0.05) {
    fVar59 = 0.05;
  }
  *(float *)((longlong)puVar50 + 0x44) = fVar59;
  *(undefined4 *)(puVar50 + 9) = DAT_14c7605b4;
  uVar14 = *(undefined8 *)(local_928 + 0x198);
  lVar15 = FUN_14482e3b2();
  puVar29 = local_970;
  cVar9 = *(char *)(lVar15 + 0x41);
  if (cVar9 == '\x03') {
    cVar9 = '\x02';
  }
  puVar50[10] = uVar14;
  *(char *)(puVar50 + 0xb) = cVar9;
  puVar55 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar45 = puVar55 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar45) {
    FUN_140023dd8(local_970,0x50);
    puVar55 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
    puVar45 = puVar55 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar45;
  puVar55[1] = local_958[1];
  puVar55[2] = 0;
  *(undefined1 *)(puVar55 + 3) = 3;
  *(undefined8 *)((longlong)puVar55 + 0x1c) = 0xffffffffffffffff;
  *puVar55 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar55 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar55 + 0x2c) = 0xffffffff00000000;
  puVar55[7] = 0;
  puVar55[8] = local_958;
  iVar11 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_938,iVar11);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar55;
  *(int *)((longlong)puVar55 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar50[0x68] = puVar55;
  if (param_10 == (undefined8 *)0x0) {
    bVar35 = 0;
  }
  else {
    uVar14 = param_10[1];
    *local_920 = *param_10;
    local_920[1] = uVar14;
    bVar35 = 2;
  }
  memcpy(puVar50 + 0x10,&local_5e8,0x100);
  pplVar30 = local_638;
  puVar45 = puVar50 + 0x30;
  for (lVar15 = 9; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar45 = *pplVar30;
    pplVar30 = pplVar30 + 1;
    puVar45 = puVar45 + 1;
  }
  memcpy(puVar50 + 0x3a,local_4e8,0x168);
  lVar15 = local_968;
  uVar14 = *(undefined8 *)(local_968 + 0x118d0);
  lVar33 = FUN_144a2c9be();
  cVar9 = '\x02';
  if (*(char *)(lVar33 + 0x41) != '\x03') {
    cVar9 = *(char *)(lVar33 + 0x41);
  }
  puVar50[0xe] = uVar14;
  *(char *)(puVar50 + 0xf) = cVar9;
  uVar14 = *(undefined8 *)(lVar15 + 0x13818);
  iVar11 = (int)local_8d8 * 4;
  bVar35 = bVar35 | (byte)local_8c0;
  local_8f0 = CONCAT44(local_8f0._4_4_,iVar11);
  FUN_14159a3f6();
  FUN_1448e935e(uVar14,&local_858,&DAT_14c9f3fd8,bVar35 | (byte)iVar11);
  FUN_14159a3f6();
  ppuVar6 = uStack_850;
  uVar61 = local_858._4_4_;
  puVar29 = local_958;
  uVar70 = CONCAT22(local_858._2_2_,(undefined2)local_858);
  uVar14 = CONCAT44(local_858._4_4_,uVar70);
  local_268 = (ulonglong *)0x0;
  uStack_258 = (ulonglong *)0x0;
  local_168 = local_958;
  FUN_14159a518();
  local_858._0_2_ = SUB82(&local_168,0);
  local_858._2_2_ = (undefined2)((ulonglong)&local_168 >> 0x10);
  local_858._4_4_ = (int)((ulonglong)&local_168 >> 0x20);
  uStack_850 = &local_160;
  FUN_1448f70da(uVar14,&DAT_14c9f6a58,puVar21,&local_858);
  local_858._0_2_ = SUB82(puVar21,0);
  local_858._2_2_ = (undefined2)((ulonglong)puVar21 >> 0x10);
  local_858._4_4_ = (int)((ulonglong)puVar21 >> 0x20);
  uStack_850._4_4_ = uVar61;
  local_840 = puVar29;
  local_838 = (undefined8 *)((ulonglong)local_838 & 0xffffffff00000000);
  local_828 = local_268;
  local_818 = (longlong **)uStack_258;
  uStack_258 = (ulonglong *)0x0;
  uStack_800 = CONCAT26(uStack_23a,CONCAT24(uStack_23c,uStack_240));
  local_808 = local_248;
  local_7f8 = (undefined4)local_238;
  uStack_7f4 = local_238._4_4_;
  uStack_7f0 = uStack_230;
  uStack_7ec = uStack_22c;
  if (local_268 != (ulonglong *)0x0) {
    local_268 = (ulonglong *)0x0;
  }
  uStack_850._0_4_ = uVar70;
  uStack_848 = ppuVar6;
  FUN_14159a518();
  FUN_140069376(param_2);
  puVar29 = local_970;
  uVar51 = SUB82(local_940,0);
  if ((param_11 & 4) == 0) {
    uVar36 = param_11;
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_11 & 2) != 0)))))) {
      uVar36 = param_11 & 0xfff9 | 4;
    }
    puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar45 = puVar50 + 0x46;
    if (*(undefined8 **)(param_2 + 0x78) < puVar45) {
      FUN_140023dd8(local_970,0x240);
      puVar50 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar45 = puVar50 + 0x46;
    }
    *local_970 = (ulonglong)puVar45;
    local_9b8 = (longlong **)&local_858;
    FUN_141769e00(puVar50,&local_168,puVar21,uVar36);
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      uVar36 = param_11 & 0xfff9 | 2;
    }
    else {
      uVar36 = param_11;
      if (DAT_14c760ddc == 2 && (param_11 & 2) != 0) {
        uVar36 = param_11 & 0xfffd;
      }
    }
    puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar45 = puVar50 + 0x48;
    if (*(undefined8 **)(param_2 + 0x78) < puVar45) {
      FUN_140023dd8(local_970,0x250);
      puVar50 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar45 = puVar50 + 0x48;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar45;
    uVar70 = *(undefined4 *)(param_2 + 0x660);
    local_9b8 = (longlong **)&local_858;
    FUN_141769e00(puVar50,&local_168,puVar21,uVar36);
    *puVar50 = &PTR_FUN_14a266450;
    *(undefined4 *)(puVar50 + 0x46) = uVar70;
    uVar51 = SUB82(local_940,0);
  }
  lVar15 = local_968;
  local_8f8 = param_2 + 0x168;
  iVar11 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar11 + 1U) {
    FUN_14470e57a(local_8f8,iVar11);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar11 * 8) = puVar50;
  *(int *)((longlong)puVar50 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar50);
  if (local_828 != (ulonglong *)0x0) {
    pplVar30 = local_818;
    if (local_818 == (longlong **)0x0) {
      pplVar30 = (longlong **)&local_808;
    }
    (**(code **)((longlong)*pplVar30 + 0x10))();
  }
  if (local_268 != (ulonglong *)0x0) {
    plVar18 = (longlong *)uStack_258;
    if (uStack_258 == (ulonglong *)0x0) {
      plVar18 = &local_248;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  puVar29 = local_970;
  uVar48 = DAT_14ca84e40;
  if ((int)(uint)local_5c0 < (int)DAT_14ca84e40) {
    uVar48 = (uint)local_5c0;
  }
  if ((int)uVar48 < 2) {
    uVar48 = 1;
  }
  uVar32 = (uint)((ulonglong)local_5c0 >> 0x20);
  uVar25 = DAT_14ca84e40;
  if ((int)uVar32 < (int)DAT_14ca84e40) {
    uVar25 = uVar32;
  }
  uStack_850._0_4_ = DAT_14ca83a30;
  uStack_850._4_4_ = DAT_14ca83a34;
  uStack_848._0_4_ = DAT_14ca83a38;
  uStack_848._4_4_ = DAT_14ca83a3c;
  local_858._0_2_ = 8;
  local_858._2_2_ = 2;
  local_858._4_4_ = 0;
  local_830 = (ulonglong *)CONCAT26(uVar51,0x100000000);
  local_828 = (ulonglong *)CONCAT26(local_828._6_2_,0xff0009010101);
  local_840 = (ulonglong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
  if ((int)uVar25 < 2) {
    uVar25 = 1;
  }
  local_838 = (undefined8 *)((ulonglong)uVar48 << 0x20);
  local_830 = (ulonglong *)CONCAT44(local_830._4_4_,uVar25);
  uVar38 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar27 = uVar38 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar27) {
    FUN_140023dd8(local_970,0x128);
    uVar38 = *puVar29 + 7 & 0xfffffffffffffff8;
    uVar27 = uVar38 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar27;
  FUN_1456bbb8c(uVar38,L"Lumen.Reflections.TraceRadiance",&local_858,0);
  iVar11 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar11 + 1U) {
    FUN_14472c0f6(local_900,iVar11);
  }
  puVar29 = local_970;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar11 * 8) = uVar38;
  *(int *)(uVar38 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  uVar2 = *(undefined1 *)(uVar38 + 0x94);
  puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar45 + 9;
  local_538 = uVar38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_970,0x50);
    puVar45 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar45 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  puVar45[1] = *(undefined8 *)(uVar38 + 8);
  puVar45[2] = 0;
  *(undefined1 *)(puVar45 + 3) = 0;
  *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar45 + 5) = 0;
  *puVar45 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar45 + 6) = uVar2;
  *(undefined1 *)(puVar45 + 7) = 0;
  *(undefined4 *)((longlong)puVar45 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar45 + 0x35) = 0;
  puVar45[8] = uVar38;
  iVar11 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_938,iVar11);
  }
  puVar29 = local_970;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar45;
  *(int *)((longlong)puVar45 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  uVar48 = DAT_14ca84e40;
  if ((int)(uint)local_5c0 < (int)DAT_14ca84e40) {
    uVar48 = (uint)local_5c0;
  }
  if ((int)uVar48 < 2) {
    uVar48 = 1;
  }
  uVar32 = (uint)((ulonglong)local_5c0 >> 0x20);
  uVar25 = DAT_14ca84e40;
  if ((int)uVar32 < (int)DAT_14ca84e40) {
    uVar25 = uVar32;
  }
  uStack_850._0_4_ = DAT_14ca83a30;
  uStack_850._4_4_ = DAT_14ca83a34;
  uStack_848._0_4_ = DAT_14ca83a38;
  uStack_848._4_4_ = DAT_14ca83a3c;
  local_858._0_2_ = 8;
  local_858._2_2_ = 2;
  local_858._4_4_ = 0;
  local_830 = (ulonglong *)CONCAT26(uVar51,0x100000000);
  local_828 = (ulonglong *)CONCAT26(local_828._6_2_,0xff0015010101);
  local_840 = (ulonglong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
  if ((int)uVar25 < 2) {
    uVar25 = 1;
  }
  local_838 = (undefined8 *)((ulonglong)uVar48 << 0x20);
  local_830 = (ulonglong *)CONCAT44(local_830._4_4_,uVar25);
  uVar38 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar27 = uVar38 + 0x120;
  puStack_520 = puVar45;
  if (*(ulonglong *)(param_2 + 0x78) < uVar27) {
    FUN_140023dd8(local_970,0x128);
    uVar38 = *puVar29 + 7 & 0xfffffffffffffff8;
    uVar27 = uVar38 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar27;
  pwVar34 = L"Lumen.Reflections.TraceHit";
  FUN_1456bbb8c(uVar38,L"Lumen.Reflections.TraceHit",&local_858,0);
  uVar48 = *(uint *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = uVar48 + 1;
  if (*(uint *)(param_2 + 0x184) < uVar48 + 1) {
    pwVar34 = (wchar_t *)(ulonglong)uVar48;
    FUN_14472c0f6(local_900,pwVar34);
  }
  puVar29 = local_970;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)(int)uVar48 * 8) = uVar38;
  *(int *)(uVar38 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  uVar2 = *(undefined1 *)(uVar38 + 0x94);
  puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar45 + 9;
  uStack_540 = uVar38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    pwVar34 = (wchar_t *)0x0;
    FUN_140023dd8(local_970,0x50);
    puVar45 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar45 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  puVar45[1] = *(undefined8 *)(uVar38 + 8);
  puVar45[2] = 0;
  *(undefined1 *)(puVar45 + 3) = 0;
  *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar45 + 5) = 0;
  *puVar45 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar45 + 6) = uVar2;
  *(undefined1 *)(puVar45 + 7) = 0;
  *(undefined4 *)((longlong)puVar45 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar45 + 0x35) = 0;
  puVar45[8] = uVar38;
  uVar48 = *(uint *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = uVar48 + 1;
  if (*(uint *)(param_2 + 0x1a4) < uVar48 + 1) {
    pwVar34 = (wchar_t *)(ulonglong)uVar48;
    FUN_1447568fc(local_938,pwVar34);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)(int)uVar48 * 8) = puVar45;
  *(int *)((longlong)puVar45 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_518 = puVar45;
  if ((DAT_14ca84ef5 == '\x01') && ((DAT_14ca84ef7 & 1) != 0)) {
    pwVar34 = (wchar_t *)(ulonglong)local_8b4;
    iVar11 = FUN_142d11e9a(lVar15,pwVar34);
    puVar29 = local_970;
    if ((iVar11 != 0) || (*(int *)(DAT_14c9f3668 + 4) != 0)) {
      uVar48 = DAT_14ca84e40;
      if ((int)(uint)local_5c0 < (int)DAT_14ca84e40) {
        uVar48 = (uint)local_5c0;
      }
      if ((int)uVar48 < 2) {
        uVar48 = 1;
      }
      uVar32 = (uint)((ulonglong)local_5c0 >> 0x20);
      uVar25 = DAT_14ca84e40;
      if ((int)uVar32 < (int)DAT_14ca84e40) {
        uVar25 = uVar32;
      }
      uStack_850._0_4_ = DAT_14ca83a30;
      uStack_850._4_4_ = DAT_14ca83a34;
      uStack_848._0_4_ = DAT_14ca83a38;
      uStack_848._4_4_ = DAT_14ca83a3c;
      local_858._0_2_ = 8;
      local_858._2_2_ = 2;
      local_858._4_4_ = 0;
      local_830 = (ulonglong *)CONCAT26(uVar51,0x100000000);
      local_828 = (ulonglong *)CONCAT26(local_828._6_2_,0xff0020010101);
      local_840 = (ulonglong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if ((int)uVar25 < 2) {
        uVar25 = 1;
      }
      local_838 = (undefined8 *)((ulonglong)uVar48 << 0x20);
      local_830 = (ulonglong *)CONCAT44(local_830._4_4_,uVar25);
      uVar38 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar27 = uVar38 + 0x120;
      if (*(ulonglong *)(param_2 + 0x78) < uVar27) {
        FUN_140023dd8(local_970,0x128);
        uVar38 = *puVar29 + 7 & 0xfffffffffffffff8;
        uVar27 = uVar38 + 0x120;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar27;
      FUN_1456bbb8c(uVar38,L"Lumen.Reflections.TraceMaterialId",&local_858,0);
      iVar11 = *(int *)(param_2 + 0x180);
      *(uint *)(param_2 + 0x180) = iVar11 + 1U;
      if (*(uint *)(param_2 + 0x184) < iVar11 + 1U) {
        FUN_14472c0f6(local_900,iVar11);
      }
      puVar29 = local_970;
      *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar11 * 8) = uVar38;
      *(int *)(uVar38 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
      uVar2 = *(undefined1 *)(uVar38 + 0x94);
      puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar45 + 9;
      uStack_530 = uVar38;
      if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
        FUN_140023dd8(local_970,0x50);
        puVar45 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
        puVar21 = puVar45 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar21;
      puVar45[1] = *(undefined8 *)(uVar38 + 8);
      puVar45[2] = 0;
      *(undefined1 *)(puVar45 + 3) = 0;
      *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar45 + 5) = 0;
      *puVar45 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar45 + 6) = uVar2;
      *(undefined1 *)(puVar45 + 7) = 0;
      *(undefined4 *)((longlong)puVar45 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar45 + 0x35) = 0;
      puVar45[8] = uVar38;
      iVar11 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
        FUN_1447568fc(local_938,iVar11);
      }
      puVar29 = local_970;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar45;
      *(int *)((longlong)puVar45 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      uVar48 = DAT_14ca84e40;
      if ((int)(uint)local_5c0 < (int)DAT_14ca84e40) {
        uVar48 = (uint)local_5c0;
      }
      if ((int)uVar48 < 2) {
        uVar48 = 1;
      }
      uVar32 = (uint)((ulonglong)local_5c0 >> 0x20);
      uVar25 = DAT_14ca84e40;
      if ((int)uVar32 < (int)DAT_14ca84e40) {
        uVar25 = uVar32;
      }
      uStack_850._0_4_ = DAT_14ca83a30;
      uStack_850._4_4_ = DAT_14ca83a34;
      uStack_848._0_4_ = DAT_14ca83a38;
      uStack_848._4_4_ = DAT_14ca83a3c;
      local_858._0_2_ = 8;
      local_858._2_2_ = 2;
      local_858._4_4_ = 0;
      local_830 = (ulonglong *)CONCAT26(uVar51,0x100000000);
      local_828 = (ulonglong *)CONCAT26(local_828._6_2_,0xff0044010101);
      local_840 = (ulonglong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if ((int)uVar25 < 2) {
        uVar25 = 1;
      }
      local_838 = (undefined8 *)((ulonglong)uVar48 << 0x20);
      local_830 = (ulonglong *)CONCAT44(local_830._4_4_,uVar25);
      uVar38 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar27 = uVar38 + 0x120;
      puStack_510 = puVar45;
      if (*(ulonglong *)(param_2 + 0x78) < uVar27) {
        FUN_140023dd8(local_970,0x128);
        uVar38 = *puVar29 + 7 & 0xfffffffffffffff8;
        uVar27 = uVar38 + 0x120;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar27;
      pwVar34 = L"Lumen.Reflections.TraceBookmark";
      FUN_1456bbb8c(uVar38,L"Lumen.Reflections.TraceBookmark",&local_858,0);
      uVar48 = *(uint *)(param_2 + 0x180);
      *(uint *)(param_2 + 0x180) = uVar48 + 1;
      if (*(uint *)(param_2 + 0x184) < uVar48 + 1) {
        pwVar34 = (wchar_t *)(ulonglong)uVar48;
        FUN_14472c0f6(local_900,pwVar34);
      }
      puVar29 = local_970;
      *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)(int)uVar48 * 8) = uVar38;
      *(int *)(uVar38 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
      uVar2 = *(undefined1 *)(uVar38 + 0x94);
      puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar45 + 9;
      local_528 = uVar38;
      if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
        pwVar34 = (wchar_t *)0x0;
        FUN_140023dd8(local_970,0x50);
        puVar45 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
        puVar21 = puVar45 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar21;
      puVar45[1] = *(undefined8 *)(uVar38 + 8);
      puVar45[2] = 0;
      *(undefined1 *)(puVar45 + 3) = 0;
      *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar45 + 5) = 0;
      *puVar45 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar45 + 6) = uVar2;
      *(undefined1 *)(puVar45 + 7) = 0;
      *(undefined4 *)((longlong)puVar45 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar45 + 0x35) = 0;
      puVar45[8] = uVar38;
      uVar48 = *(uint *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = uVar48 + 1;
      if (*(uint *)(param_2 + 0x1a4) < uVar48 + 1) {
        pwVar34 = (wchar_t *)(ulonglong)uVar48;
        FUN_1447568fc(local_938,pwVar34);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)(int)uVar48 * 8) = puVar45;
      *(int *)((longlong)puVar45 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      local_508 = puVar45;
    }
  }
  puVar29 = local_970;
  if (DAT_14c7605a4 == 0) {
    local_958 = (ulonglong *)((ulonglong)local_958._4_4_ << 0x20);
  }
  else {
    bVar35 = 0;
    if ((DAT_14c7604b8 != 0) && (bVar35 = 0, DAT_14c7604bc != 0)) {
      bVar35 = (*(byte *)((longlong)local_930 + 0xfa) & 2) >> 1;
    }
    local_958 = (ulonglong *)
                CONCAT44(local_958._4_4_,
                         (int)CONCAT71((int7)((ulonglong)pwVar34 >> 8),param_8 == 0 & bVar35));
  }
  local_960 = *(undefined8 **)((longlong)local_930 + 8);
  puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar45 + 0x2e;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_970,0x180);
    puVar45 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar45 + 0x2e;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  *puVar45 = &PTR_FUN_14a266668;
  puVar45[2] = 0;
  puVar45[0x20] = 0;
  puVar45[0x12] = 0;
  puVar45[0x13] = 0;
  puVar45[0x14] = 0;
  puVar45[0x15] = 0;
  puVar45[0x16] = 0;
  puVar45[0x17] = 0;
  puVar45[0x18] = 0;
  puVar45[0x19] = 0;
  puVar45[0x1a] = 0;
  puVar45[0x1b] = 0;
  puVar45[0x1c] = 0;
  puVar45[0x1d] = 0;
  puVar45[0x1e] = 0;
  *(undefined1 *)(puVar45 + 0x21) = 1;
  puVar45[0x22] = 0;
  puVar45[0x23] = 0;
  puVar45[0x24] = 0;
  puVar45[0x25] = 0;
  *(undefined4 *)(puVar45 + 0x26) = 4;
  puVar45[0x27] = 0;
  *(undefined4 *)(puVar45 + 0x28) = 4;
  puVar45[0x29] = 0;
  *(undefined4 *)(puVar45 + 0x2a) = 4;
  puVar45[0x2c] = 0;
  *(undefined1 *)(puVar45 + 0x2d) = 1;
  iVar11 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar11 + 1U) {
    FUN_1448cfae8(local_948,iVar11);
  }
  *(undefined8 **)(*local_948 + (longlong)iVar11 * 8) = puVar45;
  memcpy(puVar45 + 2,&local_5e8,0x100);
  pplVar30 = local_638;
  puVar21 = puVar45 + 0x22;
  for (lVar33 = 9; lVar33 != 0; lVar33 = lVar33 + -1) {
    *puVar21 = *pplVar30;
    pplVar30 = pplVar30 + 1;
    puVar21 = puVar21 + 1;
  }
  uVar14 = *(undefined8 *)(lVar15 + 0x118d0);
  local_930 = puVar45 + 2;
  lVar33 = FUN_144a2c9be();
  cVar9 = '\x02';
  if (*(char *)(lVar33 + 0x41) != '\x03') {
    cVar9 = *(char *)(lVar33 + 0x41);
  }
  puVar45[0x2c] = uVar14;
  *(char *)(puVar45 + 0x2d) = cVar9;
  bVar56 = uStack_530 != 0;
  uVar14 = *(undefined8 *)(lVar15 + 0x13818);
  FUN_14157f214();
  FUN_1448e935e(uVar14,&local_858,&DAT_14c9f4700,bVar56);
  FUN_14157f214();
  puVar29 = local_600;
  uVar61 = uStack_850._4_4_;
  iVar26 = (int)uStack_850;
  uVar70 = local_858._4_4_;
  puVar21 = local_930;
  iVar11 = CONCAT22(local_858._2_2_,(undefined2)local_858);
  uVar14 = CONCAT44(local_858._4_4_,iVar11);
  local_268 = (ulonglong *)0x0;
  uStack_258 = (ulonglong *)0x0;
  local_168 = local_600;
  FUN_14157f336();
  local_858._0_2_ = SUB82(&local_168,0);
  local_858._2_2_ = (undefined2)((ulonglong)&local_168 >> 0x10);
  local_858._4_4_ = (int)((ulonglong)&local_168 >> 0x20);
  uStack_850 = &local_160;
  FUN_1448f70da(uVar14,&DAT_14c9f6d88,puVar21,&local_858);
  local_858._0_2_ = SUB82(puVar21,0);
  local_858._2_2_ = (undefined2)((ulonglong)puVar21 >> 0x10);
  local_858._4_4_ = (int)((ulonglong)puVar21 >> 0x20);
  uStack_850._4_4_ = uVar70;
  uStack_848._0_4_ = iVar26;
  uStack_848._4_4_ = uVar61;
  local_840 = puVar29;
  local_838 = (undefined8 *)((ulonglong)local_838 & 0xffffffff00000000);
  local_828 = local_268;
  local_818 = (longlong **)uStack_258;
  uStack_258 = (ulonglong *)0x0;
  uStack_800 = CONCAT26(uStack_23a,CONCAT24(uStack_23c,uStack_240));
  local_808 = local_248;
  local_7f8 = (undefined4)local_238;
  uStack_7f4 = local_238._4_4_;
  uStack_7f0 = uStack_230;
  uStack_7ec = uStack_22c;
  if (local_268 != (ulonglong *)0x0) {
    local_268 = (ulonglong *)0x0;
  }
  uStack_850._0_4_ = iVar11;
  FUN_14157f336();
  FUN_140069376(param_2);
  lVar15 = local_968;
  puVar29 = local_970;
  if ((param_11 & 4) == 0) {
    uVar36 = param_11;
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_11 & 2) != 0)))))) {
      uVar36 = param_11 & 0xfff9 | 4;
    }
    puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar50 = puVar45 + 0x46;
    if (*(undefined8 **)(param_2 + 0x78) < puVar50) {
      FUN_140023dd8(local_970,0x240);
      puVar45 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar50 = puVar45 + 0x46;
    }
    *local_970 = (ulonglong)puVar50;
    local_9b8 = (longlong **)&local_858;
    FUN_14176a500(puVar45,&local_168,puVar21,uVar36);
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      uVar36 = param_11 & 0xfff9 | 2;
    }
    else {
      uVar36 = param_11;
      if (DAT_14c760ddc == 2 && (param_11 & 2) != 0) {
        uVar36 = param_11 & 0xfffd;
      }
    }
    puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar21 = puVar45 + 0x48;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x250);
      puVar45 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar21 = puVar45 + 0x48;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar21;
    uVar70 = *(undefined4 *)(param_2 + 0x660);
    local_9b8 = (longlong **)&local_858;
    FUN_14176a500(puVar45,&local_168,local_930,uVar36);
    *puVar45 = &PTR_FUN_14a266670;
    *(undefined4 *)(puVar45 + 0x46) = uVar70;
    lVar15 = local_968;
  }
  iVar11 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar11 + 1U) {
    FUN_14470e57a(local_8f8,iVar11);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar11 * 8) = puVar45;
  *(int *)((longlong)puVar45 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar45);
  if (local_828 != (ulonglong *)0x0) {
    pplVar30 = local_818;
    if (local_818 == (longlong **)0x0) {
      pplVar30 = (longlong **)&local_808;
    }
    (**(code **)((longlong)*pplVar30 + 0x10))();
  }
  if (local_268 != (ulonglong *)0x0) {
    plVar18 = (longlong *)uStack_258;
    if (uStack_258 == (ulonglong *)0x0) {
      plVar18 = &local_248;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  local_268 = (ulonglong *)0x0;
  uStack_260 = (ulonglong *)CONCAT71(uStack_260._1_7_,1);
  uStack_258 = (ulonglong *)0x0;
  uStack_250 = (ulonglong *)CONCAT71(uStack_250._1_7_,1);
  local_248 = 0;
  uStack_240 = CONCAT31(uStack_240._1_3_,1);
  local_238 = (ulonglong *)0x0;
  uStack_230 = CONCAT31(uStack_230._1_3_,1);
  local_208 = (ulonglong *)0x0;
  uStack_200 = CONCAT31(uStack_200._1_3_,1);
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  iVar11 = *(int *)(DAT_14c9f3c90 + 4);
  lVar33 = *(longlong *)(lVar15 + 0x13ad8);
  if (lVar33 == 0) {
    uVar48 = *(uint *)(lVar15 + 0x1de0);
    if (uVar48 == 0) {
      iVar26 = 0x20;
    }
    else {
      iVar26 = 0;
      if (uVar48 != 0) {
        for (; (uVar48 >> iVar26 & 1) == 0; iVar26 = iVar26 + 1) {
        }
      }
    }
    if (*(longlong *)(lVar15 + 0x3108) == 0) {
      uVar70 = 0;
    }
    else {
      uVar70 = *(undefined4 *)(*(longlong *)(lVar15 + 0x3108) + 0x24);
    }
    lVar33 = FUN_140c6b718(local_960,uVar70,iVar26);
  }
  local_9b0 = (longlong **)&local_268;
  local_9b8 = (longlong **)CONCAT71(local_9b8._1_7_,iVar11 != 0);
  FUN_142db26c6(param_2,lVar15,lVar33,param_5);
  local_2a8 = (longlong *)CONCAT44(local_2a8._4_4_,0x3f800000);
  local_298 = 0;
  fVar59 = *(float *)(lVar15 + 0x291c) * _DAT_14c7604b4;
  if (1048576.0 <= fVar59) {
    fVar59 = 1048576.0;
  }
  if (fVar59 <= 0.01) {
    fVar59 = 0.01;
  }
  fStack_290 = fVar59;
  if (1.0 < *(double *)(lVar15 + 0x8a8) || *(double *)(lVar15 + 0x8a8) == 1.0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar18 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.Lumen.Ortho.OverrideMeshDFTraceDistances",1);
    lVar15 = local_968;
    if (((plVar18 == (longlong *)0x0) ||
        (lVar33 = (**(code **)(*plVar18 + 0x68))(plVar18), lVar33 == 0)) ||
       (*(int *)(lVar33 + 4) < 1)) goto LAB_142d43aa0;
    fStack_28c = (float)DAT_14c84635c;
    fVar60 = DAT_14c84635c._4_4_;
    if (1.0 < *(double *)(lVar15 + 0x8a8) || *(double *)(lVar15 + 0x8a8) == 1.0) {
      fStack_28c = (float)*(double *)(local_968 + 0x930) + (float)*(double *)(local_968 + 0x930);
      fVar60 = (float)*(double *)(local_968 + 0x958) + (float)*(double *)(local_968 + 0x958);
    }
    if (fStack_28c <= fVar60) {
      fStack_28c = fVar60;
    }
    if (fVar59 <= fStack_28c) {
      fStack_28c = fVar59;
    }
    if (fStack_28c <= 0.0) {
      fStack_28c = 0.0;
    }
    lVar15 = local_968;
    fVar59 = DAT_14c760544;
    if (DAT_14c760544 <= fStack_28c) {
      fVar59 = fStack_28c;
    }
  }
  else {
LAB_142d43aa0:
    fStack_28c = DAT_14c9f1f1c;
    if (fVar59 <= DAT_14c9f1f1c) {
      fStack_28c = fVar59;
    }
    fVar59 = DAT_14c760544;
    if (fStack_28c <= 0.0) {
      fStack_28c = 0.0;
    }
  }
  local_2a8 = (longlong *)CONCAT44(fVar59,(undefined4)local_2a8);
  local_288 = DAT_14c9f1f20;
  if (100.0 <= DAT_14c9f1f20) {
    local_288 = 100.0;
  }
  if (local_288 <= 0.01) {
    local_288 = 0.01;
  }
  uStack_284 = 0x41200000;
  uVar27 = 0;
  uStack_2a0 = 0;
  uStack_280 = 0;
  iVar11 = 0x100;
  if (*(int *)(DAT_14c9ed788 + 4) < 0x100) {
    iVar11 = *(int *)(DAT_14c9ed788 + 4);
  }
  local_278 = 1;
  if (1 < iVar11) {
    local_278 = iVar11;
  }
  FUN_14494b062(&local_308,param_2,local_928);
  puVar21 = local_920;
  puVar29 = local_970;
  if (DAT_14c7605e0 != 0) {
    if ((*(byte *)(*(longlong *)(lVar15 + 8) + 0x62) & 1) == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = (ulonglong)*(byte *)(lVar15 + 0x2938) & 0xffffffffffffff01;
    }
  }
  bVar35 = DAT_14c7605fc != 0;
  local_920 = (longlong *)((ulonglong)local_920 & 0xffffffff00000000);
  if ((DAT_14c7605e0 != 0) && (DAT_14c760600 != 0)) {
    local_920._4_4_ = SUB84(puVar21,4);
    if ((*(byte *)(*(longlong *)(lVar15 + 8) + 0x62) & 1) == 0) {
      local_920 = (longlong *)((ulonglong)local_920._4_4_ << 0x20);
    }
    else {
      local_920 = (longlong *)
                  (CONCAT44(local_920._4_4_,
                            (int)CONCAT71((int7)((ulonglong)*(longlong *)(lVar15 + 8) >> 8),
                                          *(undefined1 *)(lVar15 + 0x2938))) & 0xffffffffffffff01);
    }
  }
  bVar8 = DAT_14c7605fc == 2;
  if ((char)uVar27 != '\0') {
    local_8cc = CONCAT31(local_8cc._1_3_,bVar35);
    local_930 = (undefined8 *)CONCAT71(local_930._1_7_,DAT_14c7605fc == 2);
    puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar21 = puVar45 + 0x76;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x3c0);
      puVar45 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar21 = puVar45 + 0x76;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar21;
    *puVar45 = &PTR_FUN_14a2666a8;
    local_950 = puVar45 + 2;
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    puVar45[4] = 0;
    *(undefined1 *)(puVar45 + 5) = 1;
    puVar45[6] = 0;
    *(undefined1 *)(puVar45 + 7) = 1;
    puVar45[8] = 0;
    *(undefined1 *)(puVar45 + 9) = 1;
    puVar45[0xe] = 0;
    *(undefined1 *)(puVar45 + 0xf) = 1;
    puVar45[0x26] = 0;
    *(undefined4 *)(puVar45 + 0x27) = 0;
    puVar45[0x10] = 0;
    puVar45[0x11] = 0;
    puVar45[0x12] = 0;
    puVar45[0x13] = 0;
    puVar45[0x17] = 0;
    puVar45[0x18] = 0;
    puVar45[0x19] = 0;
    puVar45[0x1a] = 0;
    puVar45[0x1b] = 0;
    puVar45[0x1c] = 0;
    puVar45[0x1d] = 0;
    puVar45[0x1e] = 0;
    puVar45[0x1f] = 0;
    puVar45[0x20] = 0;
    puVar45[0x24] = 0;
    puVar45[0x22] = 0;
    puVar45[0x23] = 0;
    *(undefined4 *)((longlong)puVar45 + 0x13c) = 0x3f800000;
    puVar45[0x2a] = 0;
    puVar45[0x2b] = 0x3f80000000000000;
    puVar45[0x2c] = 0;
    puVar45[0x2d] = 0x3f80000000000000;
    puVar45[0x30] = 0;
    puVar45[0x31] = 0x3f80000000000000;
    puVar45[0x40] = 0;
    puVar45[0x5e] = 0;
    puVar45[0x32] = 0;
    puVar45[0x33] = 0;
    puVar45[0x34] = 0;
    puVar45[0x35] = 0;
    puVar45[0x36] = 0;
    puVar45[0x37] = 0;
    puVar45[0x38] = 0;
    puVar45[0x39] = 0;
    puVar45[0x3a] = 0;
    puVar45[0x3b] = 0;
    puVar45[0x3c] = 0;
    puVar45[0x3d] = 0;
    puVar45[0x50] = 0;
    puVar45[0x51] = 0;
    puVar45[0x52] = 0;
    puVar45[0x53] = 0;
    puVar45[0x54] = 0;
    puVar45[0x55] = 0;
    puVar45[0x56] = 0;
    puVar45[0x57] = 0;
    puVar45[0x58] = 0;
    puVar45[0x59] = 0;
    puVar45[0x5a] = 0;
    puVar45[0x5b] = 0;
    puVar45[0x5c] = 0;
    *(undefined1 *)(puVar45 + 0x5f) = 1;
    puVar45[0x62] = 0;
    puVar45[99] = 0;
    puVar45[0x60] = 0;
    puVar45[0x61] = 0;
    *(undefined4 *)(puVar45 + 100) = 4;
    puVar45[0x65] = 0;
    *(undefined4 *)(puVar45 + 0x66) = 4;
    puVar45[0x67] = 0;
    *(undefined4 *)(puVar45 + 0x68) = 4;
    puVar45[0x72] = 0;
    *(undefined1 *)(puVar45 + 0x73) = 1;
    puVar45[0x74] = 0;
    *(undefined1 *)(puVar45 + 0x75) = 1;
    iVar11 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar11 + 1U;
    local_8b0 = uVar27;
    if (*(uint *)(param_2 + 0xa4) < iVar11 + 1U) {
      FUN_1448cfae8(local_948,iVar11);
    }
    lVar15 = local_928;
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar11 * 8) = puVar45;
    FUN_142d3c72e(&local_858,param_2,local_968,local_928);
    puVar21 = &local_858;
    puVar50 = puVar45 + 0x22;
    for (lVar33 = 0x10; lVar33 != 0; lVar33 = lVar33 + -1) {
      *puVar50 = *puVar21;
      puVar21 = puVar21 + 1;
      puVar50 = puVar50 + 1;
    }
    memcpy(local_950,&local_268,0x100);
    puVar21 = &local_308;
    puVar50 = puVar45 + 0x32;
    for (lVar33 = 0xc; lVar33 != 0; lVar33 = lVar33 + -1) {
      *puVar50 = *puVar21;
      puVar21 = puVar21 + 1;
      puVar50 = puVar50 + 1;
    }
    if ((*(longlong *)(puVar45[0x22] + 0x38) == *(longlong *)(lVar15 + 0x1b8)) ||
       (puVar45[0x3d] == 0)) {
      uVar14 = FUN_14476842e(param_2,&DAT_14ca63b28,L"BlackDummy",2);
      puVar45[0x3d] = uVar14;
    }
    lVar15 = local_968;
    *(float *)(puVar45 + 0x3e) = (float)_DAT_14c7605e4;
    *(float *)((longlong)puVar45 + 500) = DAT_14c7605e8 * *(float *)(local_968 + 0x109c);
    *(float *)(puVar45 + 0x3f) = DAT_14c7605ec * *(float *)(local_968 + 0x109c);
    *(int *)((longlong)puVar45 + 0x1fc) = DAT_14c9f4570;
    memcpy(puVar45 + 0x40,&local_5e8,0x100);
    pplVar30 = local_638;
    puVar21 = puVar45 + 0x60;
    for (lVar33 = 9; lVar33 != 0; lVar33 = lVar33 + -1) {
      *puVar21 = *pplVar30;
      pplVar30 = pplVar30 + 1;
      puVar21 = puVar21 + 1;
    }
    *(int *)(puVar45 + 0x70) = local_278;
    *(float *)(puVar45 + 0x6e) = local_288;
    *(undefined4 *)((longlong)puVar45 + 0x374) = uStack_284;
    *(undefined4 *)(puVar45 + 0x6f) = (undefined4)uStack_280;
    *(undefined4 *)((longlong)puVar45 + 0x37c) = uStack_280._4_4_;
    *(undefined4 *)(puVar45 + 0x6c) = (undefined4)local_298;
    *(undefined4 *)((longlong)puVar45 + 0x364) = local_298._4_4_;
    *(float *)(puVar45 + 0x6d) = fStack_290;
    *(float *)((longlong)puVar45 + 0x36c) = fStack_28c;
    *(undefined4 *)(puVar45 + 0x6a) = (undefined4)local_2a8;
    *(undefined4 *)((longlong)puVar45 + 0x354) = local_2a8._4_4_;
    *(undefined4 *)(puVar45 + 0x6b) = (undefined4)uStack_2a0;
    *(undefined4 *)((longlong)puVar45 + 0x35c) = uStack_2a0._4_4_;
    bVar35 = 0 < DAT_14c7605f0 & *(byte *)(lVar15 + 0x11a08);
    if (bVar35 == 1) {
      uVar14 = *(undefined8 *)(lVar15 + 0x11a00);
      lVar33 = FUN_144a81af4();
      cVar9 = '\x02';
      if (*(char *)(lVar33 + 0x41) != '\x03') {
        cVar9 = *(char *)(lVar33 + 0x41);
      }
      puVar45[0x72] = uVar14;
      *(char *)(puVar45 + 0x73) = cVar9;
    }
    uVar14 = *(undefined8 *)(lVar15 + 0x118d0);
    lVar33 = FUN_144a2c9be();
    uVar27 = local_8b0;
    cVar9 = '\x02';
    if (*(char *)(lVar33 + 0x41) != '\x03') {
      cVar9 = *(char *)(lVar33 + 0x41);
    }
    puVar45[0x74] = uVar14;
    *(char *)(puVar45 + 0x75) = cVar9;
    if (DAT_14c9f4570 < 1) {
      uVar48 = 0;
    }
    else {
      uVar48 = 0;
      if (((DAT_14ca84f10 == '\x01') && (uVar48 = 0, DAT_14ca84f14 < 0x21)) &&
         (0x1f < DAT_14ca84f18)) {
        uVar48 = (uint)(((&DAT_14ca814cd)
                         [(ulonglong)
                          *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar15 + 0x3090) * 2) *
                          0x3c] & 3) != 0);
      }
    }
    bVar8 = FUN_144ab4f03();
    uVar14 = *(undefined8 *)(lVar15 + 0x13818);
    FUN_1415a1404();
    FUN_1448e935e(uVar14,&local_858,&DAT_14c9f4828,(uint)bVar35 + uVar48 * 2 + (uint)bVar8 * 4);
    FUN_1415a1404();
    puVar17 = local_600;
    uVar61 = uStack_850._4_4_;
    iVar26 = (int)uStack_850;
    uVar70 = local_858._4_4_;
    iVar11 = CONCAT22(local_858._2_2_,(undefined2)local_858);
    uVar14 = CONCAT44(local_858._4_4_,iVar11);
    local_168 = (ulonglong *)0x0;
    local_158 = (ulonglong *)0x0;
    local_378 = local_600;
    FUN_1415a1526();
    puVar29 = local_950;
    local_858._0_2_ = SUB82(&local_378,0);
    local_858._2_2_ = (undefined2)((ulonglong)&local_378 >> 0x10);
    local_858._4_4_ = (int)((ulonglong)&local_378 >> 0x20);
    uStack_850 = (ulonglong **)&uStack_370;
    FUN_1448f70da(uVar14,&DAT_14c9f6e10,local_950,&local_858);
    local_858._0_2_ = SUB82(puVar29,0);
    local_858._2_2_ = (undefined2)((ulonglong)puVar29 >> 0x10);
    local_858._4_4_ = (int)((ulonglong)puVar29 >> 0x20);
    uStack_850._4_4_ = uVar70;
    uStack_848._0_4_ = iVar26;
    uStack_848._4_4_ = uVar61;
    local_840 = puVar17;
    local_838 = (undefined8 *)((ulonglong)local_838 & 0xffffffff00000000);
    local_828 = local_168;
    local_818 = (longlong **)local_158;
    local_158 = (ulonglong *)0x0;
    local_808 = CONCAT44(uStack_144,local_148);
    uStack_800 = uStack_140;
    local_7f8 = (undefined4)local_138;
    uStack_7f4 = local_138._4_4_;
    uStack_7f0 = uStack_130;
    uStack_7ec = uStack_12c;
    if (local_168 != (ulonglong *)0x0) {
      local_168 = (ulonglong *)0x0;
    }
    uStack_850._0_4_ = iVar11;
    FUN_1415a1526();
    FUN_140069376(param_2);
    lVar15 = local_968;
    puVar29 = local_970;
    bVar35 = (byte)local_8cc;
    if ((param_11 & 4) == 0) {
      uVar36 = param_11;
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14ca84e6a == '\x01' &&
          (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_11 & 2) != 0)))))) {
        uVar36 = param_11 & 0xfff9 | 4;
      }
      puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar21 = puVar45 + 0x46;
      if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
        FUN_140023dd8(local_970,0x240);
        puVar45 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
        puVar21 = puVar45 + 0x46;
      }
      *local_970 = (ulonglong)puVar21;
      local_9b8 = (longlong **)&local_858;
      FUN_14176a644(puVar45,&local_378,local_950,uVar36);
    }
    else {
      if (((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) ||
         ((DAT_14ca84e6a != '\x01' || ((DAT_14ca84e99 & 1) != 0)))) {
        uVar36 = param_11 & 0xfff9 | 2;
      }
      else {
        uVar36 = param_11;
        if (DAT_14c760ddc == 2 && (param_11 & 2) != 0) {
          uVar36 = param_11 & 0xfffd;
        }
      }
      puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar21 = puVar45 + 0x48;
      if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
        FUN_140023dd8(local_970,0x250);
        puVar45 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
        puVar21 = puVar45 + 0x48;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar21;
      uVar70 = *(undefined4 *)(param_2 + 0x660);
      local_9b8 = (longlong **)&local_858;
      FUN_14176a644(puVar45,&local_378,local_950,uVar36);
      *puVar45 = &PTR_FUN_14a2666b0;
      *(undefined4 *)(puVar45 + 0x46) = uVar70;
      lVar15 = local_968;
      uVar27 = local_8b0;
      bVar35 = (byte)local_8cc;
    }
    iVar11 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar11 + 1U) {
      FUN_14470e57a(local_8f8,iVar11);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar11 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar45);
    if (local_828 != (ulonglong *)0x0) {
      pplVar30 = local_818;
      if (local_818 == (longlong **)0x0) {
        pplVar30 = (longlong **)&local_808;
      }
      (**(code **)((longlong)*pplVar30 + 0x10))();
    }
    if (local_168 != (ulonglong *)0x0) {
      puVar29 = local_158;
      if (local_158 == (ulonglong *)0x0) {
        puVar29 = (ulonglong *)&local_148;
      }
      (**(code **)(*puVar29 + 0x10))();
    }
    bVar8 = (byte)local_930;
  }
  lVar33 = lVar15;
  if ((*(char *)(lVar15 + 0x11a08) == '\x01') &&
     (lVar33 = local_968, *(longlong *)(lVar15 + 0x11c90) != 0)) {
    bVar56 = false;
    if (*(longlong *)(local_968 + 0x11c98) != 0) {
      bVar56 = *(longlong *)(local_968 + 0x11ca8) != 0;
    }
  }
  else {
    bVar56 = false;
  }
  bVar57 = 0 < DAT_14c760674;
  lVar15 = *(longlong *)(lVar33 + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97070) {
    FUN_144b3d300(&DAT_14ca97070);
    if (DAT_14ca97070 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar18 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar18 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar18 + 0x68))(plVar18);
      }
      _Init_thread_footer(&DAT_14ca97070);
      lVar33 = local_968;
    }
  }
  lVar19 = DAT_14ca97068;
  bVar58 = true;
  cVar9 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    iVar11 = *local_908;
    if (iVar11 == 0x40000002) {
      cVar9 = '\x02';
      uVar38 = 0;
    }
    else {
      bVar58 = true;
      cVar9 = '\x02';
      if ((DAT_14c86a9f8 == '\x01') && (iVar11 != 2)) {
        if (iVar11 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar58 = DVar12 == DVar13;
          cVar9 = DAT_14ca96da8;
        }
        else {
          bVar58 = false;
        }
      }
      uVar38 = (ulonglong)(bVar58 ^ 1);
    }
    bVar58 = *(int *)(lVar19 + uVar38 * 4) != 0;
    lVar33 = local_968;
  }
  local_930 = (undefined8 *)CONCAT71(local_930._1_7_,bVar8 | (byte)uVar27 & bVar35);
  if ((bVar58) && (cVar9 != '\0')) {
    piVar22 = &DAT_14c760db4;
    if (*(longlong *)(lVar15 + 0x40) != 0) {
      piVar22 = (int *)(*(longlong *)(lVar15 + 0x40) + 8);
    }
    cVar9 = FUN_144785782(*(undefined2 *)(&DAT_14ca85070 + (longlong)*piVar22 * 2));
    lVar19 = DAT_14c9ed2f0;
    if ((cVar9 == '\0') ||
       ((DAT_14ca84efa == '\0' && ((DAT_14ca84ef5 != '\x01' || ((DAT_14ca84ef7 & 1) == 0))))))
    goto LAB_142d442f1;
    iVar11 = *local_908;
    if (iVar11 == 0x40000002) {
      uVar27 = 0;
    }
    else {
      bVar58 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar11 != 2)) {
        if (iVar11 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar58 = DVar12 == DVar13;
        }
        else {
          bVar58 = false;
        }
      }
      uVar27 = (ulonglong)(bVar58 ^ 1);
    }
    lVar33 = local_968;
    if ((*(int *)(lVar19 + uVar27 * 4) == 0) ||
       ((((*(int *)(lVar15 + 0x10) != 1 &&
          ((*(int *)(lVar15 + 0x10) != 2 ||
           (cVar9 = FUN_144b2acae(**(undefined8 **)(lVar15 + 8)), cVar9 == '\0')))) ||
         (lVar19 = DAT_14c9f3638, lVar15 = **(longlong **)(lVar15 + 8),
         *(char *)(lVar15 + 0x3098) != '\x01')) ||
        ((*(char *)(lVar15 + 0x23e8) == '\x01' && (*(char *)(lVar15 + 0x23ea) != '\x01'))))))
    goto LAB_142d442f1;
    iVar11 = *local_908;
    if (iVar11 == 0x40000002) {
      uVar27 = 0;
    }
    else {
      bVar58 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar11 != 2)) {
        if (iVar11 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar58 = DVar12 == DVar13;
        }
        else {
          bVar58 = false;
        }
      }
      uVar27 = (ulonglong)(bVar58 ^ 1);
    }
    lVar15 = local_968;
    lVar33 = local_968;
    if (*(int *)(lVar19 + uVar27 * 4) == 0) goto LAB_142d442f1;
    local_978 = param_11;
    local_980 = local_8b4;
    local_988 = CONCAT31(local_988._1_3_,(byte)local_930);
    local_990 = local_4e8;
    local_998 = (float)CONCAT31(local_998._1_3_,(byte)local_8c0);
    local_9a0 = fStack_290;
    local_9a8 = local_638;
    local_9b0 = &local_5e8;
    local_9b8 = (longlong **)&local_268;
    FUN_1471eecff(param_2,local_928,&local_308,local_968);
    uVar27 = local_910;
    uVar51 = local_940._0_2_;
  }
  else {
LAB_142d442f1:
    uVar48 = (uint)(byte)(bVar56 & bVar57);
    if ((byte)local_958 != '\0') {
      memcpy(&local_858,param_6,0x170);
      if (CONCAT44(uStack_754,local_758) == 0) {
        local_9a8 = (longlong **)CONCAT62(local_9a8._2_6_,param_11);
        local_9b8 = (longlong **)&local_2a8;
        local_9b0 = (longlong **)&local_858;
        FUN_142d06860(param_2,local_960,lVar33,param_5);
      }
      iVar11 = (int)uStack_848;
      lVar15 = *(longlong *)(lVar33 + 0x13ad8);
      if (lVar15 == 0) {
        uVar25 = *(uint *)(lVar33 + 0x1de0);
        if (uVar25 == 0) {
          iVar26 = 0x20;
        }
        else {
          iVar26 = 0;
          if (uVar25 != 0) {
            for (; (uVar25 >> iVar26 & 1) == 0; iVar26 = iVar26 + 1) {
            }
          }
        }
        if (*(longlong *)(lVar33 + 0x3108) == 0) {
          uVar70 = 0;
        }
        else {
          uVar70 = *(undefined4 *)(*(longlong *)(lVar33 + 0x3108) + 0x24);
        }
        lVar15 = FUN_140c6b718(local_960,uVar70,iVar26);
      }
      bVar35 = FUN_142d13d9c(*(undefined8 *)(lVar33 + 8),lVar15);
      if ((iVar11 != 0) || (bVar35 != 0)) {
        local_958 = (ulonglong *)CONCAT44(local_958._4_4_,uVar48);
        local_990 = (float *)CONCAT62(local_990._2_6_,param_11);
        local_998 = fStack_28c;
        local_9a0 = (float)local_2a8._4_4_;
        local_9b0 = local_638;
        local_9b8 = &local_5e8;
        local_980 = local_980 & 0xffffff00;
        local_988 = 0;
        local_9a8 = (longlong **)CONCAT71(local_9a8._1_7_,1);
        FUN_142d3ce12(&local_338,param_2,lVar33,&local_268);
        puVar29 = local_970;
        puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar21 = puVar45 + 0x84;
        if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
          FUN_140023dd8(local_970,0x430);
          puVar45 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
          puVar21 = puVar45 + 0x84;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar21;
        *puVar45 = &PTR_FUN_14a2666e8;
        local_950 = puVar45 + 2;
        puVar45[2] = 0;
        *(undefined1 *)(puVar45 + 3) = 1;
        puVar45[4] = 0;
        *(undefined1 *)(puVar45 + 5) = 1;
        puVar45[6] = 0;
        *(undefined1 *)(puVar45 + 7) = 1;
        puVar45[8] = 0;
        *(undefined1 *)(puVar45 + 9) = 1;
        puVar45[0xe] = 0;
        *(undefined1 *)(puVar45 + 0xf) = 1;
        puVar45[0x50] = 0;
        puVar45[0x6e] = 0;
        puVar45[0x10] = 0;
        puVar45[0x11] = 0;
        puVar45[0x12] = 0;
        puVar45[0x13] = 0;
        puVar45[0x17] = 0;
        puVar45[0x18] = 0;
        puVar45[0x19] = 0;
        puVar45[0x1a] = 0;
        puVar45[0x1b] = 0;
        puVar45[0x1c] = 0;
        puVar45[0x1d] = 0;
        puVar45[0x1e] = 0;
        puVar45[0x1f] = 0;
        puVar45[0x20] = 0;
        puVar45[0x22] = 0;
        puVar45[0x23] = 0;
        puVar45[0x25] = 0;
        puVar45[0x26] = 0;
        puVar45[0x28] = 0;
        puVar45[0x29] = 0;
        puVar45[0x2a] = 0;
        puVar45[0x2b] = 0;
        puVar45[0x2c] = 0;
        puVar45[0x2d] = 0;
        puVar45[0x42] = 0;
        puVar45[0x43] = 0;
        puVar45[0x44] = 0;
        puVar45[0x4a] = 0;
        puVar45[0x4b] = 0;
        puVar45[0x4c] = 0;
        puVar45[0x4d] = 0;
        puVar45[0x4e] = 0;
        puVar45[0x60] = 0;
        puVar45[0x61] = 0;
        puVar45[0x62] = 0;
        puVar45[99] = 0;
        puVar45[100] = 0;
        puVar45[0x65] = 0;
        puVar45[0x66] = 0;
        puVar45[0x67] = 0;
        puVar45[0x68] = 0;
        puVar45[0x69] = 0;
        puVar45[0x6a] = 0;
        puVar45[0x6b] = 0;
        puVar45[0x6c] = 0;
        *(undefined1 *)(puVar45 + 0x6f) = 1;
        puVar45[0x78] = 0;
        *(undefined1 *)(puVar45 + 0x79) = 1;
        puVar45[0x7a] = 0;
        *(undefined1 *)(puVar45 + 0x7b) = 1;
        puVar45[0x7c] = 0;
        *(undefined1 *)(puVar45 + 0x7d) = 1;
        puVar45[0x80] = 0;
        puVar45[0x7e] = 0;
        puVar45[0x7f] = 0;
        *(undefined4 *)(puVar45 + 0x81) = 4;
        puVar45[0x82] = 0;
        *(undefined4 *)(puVar45 + 0x83) = 0x14;
        iVar26 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar26 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar26 + 1U) {
          FUN_1448cfae8(local_948,iVar26);
        }
        *(undefined8 **)(*local_948 + (longlong)iVar26 * 8) = puVar45;
        memcpy(local_950,&local_268,0x100);
        memcpy(puVar45 + 0x22,&local_858,0x168);
        memcpy(puVar45 + 0x50,&local_5e8,0x100);
        *(undefined4 *)(puVar45 + 0x70) = (undefined4)local_2a8;
        *(undefined4 *)((longlong)puVar45 + 900) = local_2a8._4_4_;
        *(undefined4 *)(puVar45 + 0x71) = (undefined4)uStack_2a0;
        *(undefined4 *)((longlong)puVar45 + 0x38c) = uStack_2a0._4_4_;
        *(undefined4 *)(puVar45 + 0x72) = (undefined4)local_298;
        *(undefined4 *)((longlong)puVar45 + 0x394) = local_298._4_4_;
        *(float *)(puVar45 + 0x73) = fStack_290;
        *(float *)((longlong)puVar45 + 0x39c) = fStack_28c;
        *(float *)(puVar45 + 0x74) = local_288;
        *(undefined4 *)((longlong)puVar45 + 0x3a4) = uStack_284;
        *(undefined4 *)(puVar45 + 0x75) = (undefined4)uStack_280;
        *(undefined4 *)((longlong)puVar45 + 0x3ac) = uStack_280._4_4_;
        *(int *)(puVar45 + 0x76) = local_278;
        uVar14 = *(undefined8 *)(local_928 + 0x198);
        lVar15 = FUN_14482e3b2();
        cVar9 = *(char *)(lVar15 + 0x41);
        if (*(char *)(lVar15 + 0x41) == '\x03') {
          cVar9 = '\x02';
        }
        puVar45[0x78] = uVar14;
        *(char *)(puVar45 + 0x79) = cVar9;
        *(undefined4 *)(puVar45 + 0x7e) = (undefined4)local_338;
        *(undefined4 *)((longlong)puVar45 + 0x3f4) = local_338._4_4_;
        *(undefined4 *)(puVar45 + 0x7f) = uStack_330;
        *(undefined4 *)((longlong)puVar45 + 0x3fc) = uStack_32c;
        *(undefined4 *)(puVar45 + 0x80) = local_328;
        *(undefined4 *)((longlong)puVar45 + 0x404) = uStack_324;
        *(undefined4 *)(puVar45 + 0x81) = uStack_320;
        *(undefined4 *)((longlong)puVar45 + 0x40c) = uStack_31c;
        *(undefined4 *)(puVar45 + 0x82) = local_318;
        *(undefined4 *)((longlong)puVar45 + 0x414) = uStack_314;
        *(undefined4 *)(puVar45 + 0x83) = uStack_310;
        *(undefined4 *)((longlong)puVar45 + 0x41c) = uStack_30c;
        uVar48 = (uint)local_958;
        if ((char)local_958 != '\0') {
          uVar14 = *(undefined8 *)(local_968 + 0x11c90);
          lVar15 = FUN_1414708b2();
          cVar9 = *(char *)(lVar15 + 0x41);
          if (cVar9 == '\x03') {
            cVar9 = '\x02';
          }
          puVar45[0x7a] = uVar14;
          *(char *)(puVar45 + 0x7b) = cVar9;
        }
        uVar14 = *(undefined8 *)(local_968 + 0x118d0);
        lVar15 = FUN_144a2c9be();
        cVar9 = '\x02';
        if (*(char *)(lVar15 + 0x41) != '\x03') {
          cVar9 = *(char *)(lVar15 + 0x41);
        }
        puVar45[0x7c] = uVar14;
        *(char *)(puVar45 + 0x7d) = cVar9;
        lVar15 = DAT_14c9eccf0;
        uVar70 = 0;
        if (DAT_14ca84f10 == '\x01') {
          bVar56 = false;
          if (DAT_14ca84f14 < 0x21) {
            iVar26 = *local_908;
            if (((iVar26 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar26 == 2)) {
              uVar27 = 0;
            }
            else if (iVar26 == 1) {
              DVar12 = FUN_140ad26c0();
              DVar13 = GetCurrentThreadId();
              uVar27 = (ulonglong)(DVar12 != DVar13);
            }
            else {
              uVar27 = 1;
            }
            bVar56 = *(int *)(lVar15 + uVar27 * 4) != 0;
          }
        }
        else {
          bVar56 = false;
        }
        uVar25 = DAT_14c9c9af8 << 4;
        if (iVar11 == 0) {
          uVar25 = 0;
        }
        uVar14 = *(undefined8 *)(local_968 + 0x13818);
        FUN_14154ce4a();
        FUN_1448e935e(uVar14,&local_168,&DAT_14c9f4df0,
                      (uVar48 & 0xff) * 2 + (uint)(iVar11 != 0) * 4 + (uint)bVar35 * 8 |
                      (uint)bVar56 | uVar25);
        FUN_14154ce4a();
        puVar17 = local_160;
        puVar29 = local_168;
        lVar15 = DAT_14c9eccf0;
        local_378 = (ulonglong *)0x0;
        local_368 = (ulonglong *)0x0;
        if ((DAT_14ca84f10 == '\x01') && (DAT_14ca84f14 < 0x21)) {
          iVar11 = *local_908;
          if ((iVar11 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar11 == 2)))) {
            uVar27 = 0;
          }
          else if (iVar11 == 1) {
            DVar12 = FUN_140ad26c0();
            DVar13 = GetCurrentThreadId();
            uVar27 = (ulonglong)(DVar12 != DVar13);
          }
          else {
            uVar27 = 1;
          }
          uVar70 = 0xc;
          if (*(int *)(lVar15 + uVar27 * 4) == 0) {
            uVar70 = 0;
          }
        }
        local_f8 = CONCAT44(uStack_324,local_328);
        FUN_14154cf6c();
        puVar41 = local_950;
        local_168 = &local_f8;
        local_160 = local_f0;
        FUN_1448f70da(puVar29,&DAT_14c9f70b8,local_950,&local_168);
        local_168 = puVar41;
        local_160 = puVar29;
        local_158 = puVar17;
        local_138 = local_378;
        local_128 = (longlong *)local_368;
        local_368 = (ulonglong *)0x0;
        local_118 = local_358;
        uStack_110 = uStack_350;
        local_108 = local_348;
        uStack_104 = uStack_344;
        uStack_100 = uStack_340;
        uStack_fc = uStack_33c;
        if (local_378 != (ulonglong *)0x0) {
          local_378 = (ulonglong *)0x0;
        }
        local_148 = uVar70;
        FUN_14154cf6c();
        FUN_140069376(param_2);
        puVar29 = local_970;
        if ((param_11 & 4) == 0) {
          uVar36 = param_11;
          if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
             ((DAT_14ca84e6a == '\x01' &&
              (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_11 & 2) != 0)))))) {
            uVar36 = param_11 & 0xfff9 | 4;
          }
          puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar21 = puVar45 + 0x46;
          if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
            FUN_140023dd8(local_970,0x240);
            puVar45 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
            puVar21 = puVar45 + 0x46;
          }
          *local_970 = (ulonglong)puVar21;
          local_9b8 = (longlong **)&local_168;
          FUN_14176a788(puVar45,&local_f8,local_950,uVar36);
        }
        else {
          if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
             ((DAT_14ca84e99 & 1) != 0)) {
            uVar36 = param_11 & 0xfff9 | 2;
          }
          else {
            uVar36 = param_11;
            if (DAT_14c760ddc == 2 && (param_11 & 2) != 0) {
              uVar36 = param_11 & 0xfffd;
            }
          }
          puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar21 = puVar45 + 0x48;
          if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
            FUN_140023dd8(local_970,0x250);
            puVar45 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
            puVar21 = puVar45 + 0x48;
          }
          *(undefined8 **)(param_2 + 0x70) = puVar21;
          uVar70 = *(undefined4 *)(param_2 + 0x660);
          local_9b8 = (longlong **)&local_168;
          FUN_14176a788(puVar45,&local_f8,local_950,uVar36);
          *puVar45 = &PTR_FUN_14a2666f0;
          *(undefined4 *)(puVar45 + 0x46) = uVar70;
        }
        iVar11 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar11 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar11 + 1U) {
          FUN_14470e57a(local_8f8,iVar11);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar11 * 8) = puVar45;
        *(int *)((longlong)puVar45 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar45);
        if (local_138 != (ulonglong *)0x0) {
          puVar29 = (ulonglong *)local_128;
          if ((ulonglong *)local_128 == (ulonglong *)0x0) {
            puVar29 = &local_118;
          }
          (**(code **)(*puVar29 + 0x10))();
        }
        lVar33 = local_968;
        if (local_378 != (ulonglong *)0x0) {
          puVar29 = local_368;
          if (local_368 == (ulonglong *)0x0) {
            puVar29 = &local_358;
          }
          (**(code **)(*puVar29 + 0x10))();
        }
        uVar48 = 0;
      }
    }
    local_958 = (ulonglong *)CONCAT44(local_958._4_4_,uVar48);
    local_980 = local_980 & 0xffffff00;
    local_988 = 0;
    local_990 = (float *)CONCAT62(local_990._2_6_,param_11);
    local_998 = fStack_290;
    local_9a0 = 0.0;
    local_9a8 = (longlong **)((ulonglong)local_9a8 & 0xffffffffffffff00);
    local_9b0 = local_638;
    local_9b8 = &local_5e8;
    FUN_142d3ce12(&local_378,param_2,lVar33,&local_268);
    puVar29 = local_970;
    puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar21 = puVar45 + 0xa4;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x530);
      puVar45 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar21 = puVar45 + 0xa4;
    }
    *local_970 = (ulonglong)puVar21;
    *puVar45 = &PTR_FUN_14a266728;
    puVar21 = puVar45 + 2;
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    puVar45[4] = 0;
    *(undefined1 *)(puVar45 + 5) = 1;
    puVar45[6] = 0;
    *(undefined1 *)(puVar45 + 7) = 1;
    puVar45[8] = 0;
    *(undefined1 *)(puVar45 + 9) = 1;
    puVar45[0xe] = 0;
    *(undefined1 *)(puVar45 + 0xf) = 1;
    puVar45[0x22] = 0;
    puVar45[0x40] = 0;
    puVar45[0x10] = 0;
    puVar45[0x11] = 0;
    puVar45[0x12] = 0;
    puVar45[0x13] = 0;
    puVar45[0x17] = 0;
    puVar45[0x18] = 0;
    puVar45[0x19] = 0;
    puVar45[0x1a] = 0;
    puVar45[0x1b] = 0;
    puVar45[0x1c] = 0;
    puVar45[0x1d] = 0;
    puVar45[0x1e] = 0;
    puVar45[0x1f] = 0;
    puVar45[0x20] = 0;
    puVar45[0x3e] = 0;
    puVar45[0x3c] = 0;
    puVar45[0x3d] = 0;
    puVar45[0x3a] = 0;
    puVar45[0x3b] = 0;
    puVar45[0x38] = 0;
    puVar45[0x39] = 0;
    puVar45[0x36] = 0;
    puVar45[0x37] = 0;
    puVar45[0x34] = 0;
    puVar45[0x35] = 0;
    puVar45[0x32] = 0;
    puVar45[0x33] = 0;
    *(undefined1 *)(puVar45 + 0x41) = 1;
    puVar45[0x4a] = 0;
    *(undefined1 *)(puVar45 + 0x4b) = 1;
    puVar45[0x4c] = 0;
    *(undefined1 *)(puVar45 + 0x4d) = 1;
    puVar45[0x4e] = 0;
    *(undefined1 *)(puVar45 + 0x4f) = 1;
    puVar45[0x50] = 0;
    puVar45[0x51] = 0;
    puVar45[0x52] = 0;
    *(undefined4 *)(puVar45 + 0x53) = 4;
    puVar45[0x54] = 0;
    *(undefined4 *)(puVar45 + 0x55) = 0x14;
    puVar45[100] = 0;
    puVar45[0x65] = 0;
    puVar45[0x62] = 0;
    puVar45[99] = 0;
    puVar45[0x60] = 0;
    puVar45[0x61] = 0;
    lVar15 = 0x33c;
    do {
      puVar50 = (undefined8 *)((longlong)puVar45 + lVar15 + -0xc);
      *puVar50 = 0;
      puVar50[1] = 0x3f80000000000000;
      lVar15 = lVar15 + 0x10;
    } while (lVar15 != 0x39c);
    lVar15 = 0x39c;
    do {
      puVar50 = (undefined8 *)((longlong)puVar45 + lVar15 + -0xc);
      *puVar50 = 0;
      puVar50[1] = 0x3f80000000000000;
      lVar15 = lVar15 + 0x10;
    } while (lVar15 != 0x3fc);
    puVar45[0x88] = 0;
    puVar45[0x89] = 0x3f80000000000000;
    puVar45[0x84] = 0;
    puVar45[0x85] = 0;
    puVar45[0x86] = 0;
    puVar45[0x8c] = 0;
    puVar45[0x8d] = 0x3f80000000000000;
    puVar45[0x8e] = 0;
    puVar45[0x8f] = 0x3f80000000000000;
    puVar45[0x92] = 0;
    puVar45[0x93] = 0x3f80000000000000;
    puVar45[0xa1] = 0;
    puVar45[0x94] = 0;
    puVar45[0x95] = 0;
    puVar45[0x96] = 0;
    puVar45[0x97] = 0;
    puVar45[0x98] = 0;
    puVar45[0x99] = 0;
    puVar45[0x9a] = 0;
    puVar45[0x9b] = 0;
    puVar45[0x9c] = 0;
    puVar45[0x9d] = 0;
    puVar45[0x9e] = 0;
    puVar45[0x9f] = 0;
    iVar11 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar11 + 1U) {
      FUN_1448cfae8(local_948,iVar11);
    }
    *(undefined8 **)(*local_948 + (longlong)iVar11 * 8) = puVar45;
    memcpy(puVar21,&local_268,0x100);
    memcpy(puVar45 + 0x22,&local_5e8,0x100);
    *(undefined4 *)(puVar45 + 0x42) = (undefined4)local_2a8;
    *(undefined4 *)((longlong)puVar45 + 0x214) = local_2a8._4_4_;
    *(undefined4 *)(puVar45 + 0x43) = (undefined4)uStack_2a0;
    *(undefined4 *)((longlong)puVar45 + 0x21c) = uStack_2a0._4_4_;
    *(undefined4 *)(puVar45 + 0x44) = (undefined4)local_298;
    *(undefined4 *)((longlong)puVar45 + 0x224) = local_298._4_4_;
    *(float *)(puVar45 + 0x45) = fStack_290;
    *(float *)((longlong)puVar45 + 0x22c) = fStack_28c;
    *(float *)(puVar45 + 0x46) = local_288;
    *(undefined4 *)((longlong)puVar45 + 0x234) = uStack_284;
    *(undefined4 *)(puVar45 + 0x47) = (undefined4)uStack_280;
    *(undefined4 *)((longlong)puVar45 + 0x23c) = uStack_280._4_4_;
    *(int *)(puVar45 + 0x48) = local_278;
    uVar14 = *(undefined8 *)(local_928 + 0x198);
    lVar15 = FUN_14482e3b2();
    cVar9 = *(char *)(lVar15 + 0x41);
    if (*(char *)(lVar15 + 0x41) == '\x03') {
      cVar9 = '\x02';
    }
    puVar45[0x4a] = uVar14;
    *(char *)(puVar45 + 0x4b) = cVar9;
    puVar45[0x50] = local_378;
    puVar45[0x51] = uStack_370;
    puVar45[0x52] = local_368;
    puVar45[0x53] = uStack_360;
    puVar45[0x54] = local_358;
    puVar45[0x55] = uStack_350;
    memcpy(puVar45 + 0x56,local_4e8,0x168);
    lVar15 = local_968;
    uVar14 = *(undefined8 *)(local_968 + 0x118d0);
    lVar33 = FUN_144a2c9be();
    cVar9 = *(char *)(lVar33 + 0x41);
    if (cVar9 == '\x03') {
      cVar9 = '\x02';
    }
    puVar45[0x4e] = uVar14;
    *(char *)(puVar45 + 0x4f) = cVar9;
    if ((byte)local_958 != '\0') {
      uVar14 = *(undefined8 *)(lVar15 + 0x11c90);
      lVar33 = FUN_1414708b2();
      cVar9 = '\x02';
      if (*(char *)(lVar33 + 0x41) != '\x03') {
        cVar9 = *(char *)(lVar33 + 0x41);
      }
      puVar45[0x4c] = uVar14;
      *(char *)(puVar45 + 0x4d) = cVar9;
    }
    lVar33 = local_928;
    FUN_142d3c72e(&local_858,param_2,lVar15,local_928);
    plVar18 = &local_858;
    plVar40 = puVar45 + 0x84;
    for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
      *plVar40 = *plVar18;
      plVar18 = plVar18 + 1;
      plVar40 = plVar40 + 1;
    }
    puVar50 = &local_308;
    puVar55 = puVar45 + 0x94;
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar55 = *puVar50;
      puVar50 = puVar50 + 1;
      puVar55 = puVar55 + 1;
    }
    if ((*(longlong *)(puVar45[0x84] + 0x38) == *(longlong *)(lVar33 + 0x1b8)) ||
       (puVar45[0x9f] == 0)) {
      uVar14 = FUN_14476842e(param_2,&DAT_14ca63b28,L"BlackDummy",2);
      puVar45[0x9f] = uVar14;
    }
    lVar15 = local_968;
    *(float *)(puVar45 + 0xa0) = DAT_14c7605a0 * *(float *)(local_968 + 0x109c);
    fVar59 = *(float *)(DAT_14c9f4648 + 4);
    if (180.0 <= fVar59) {
      fVar59 = 180.0;
    }
    if (fVar59 <= 0.0) {
      fVar59 = 0.0;
    }
    fVar59 = cosf(fVar59 * 0.017453292);
    *(float *)((longlong)puVar45 + 0x504) = fVar59;
    puVar45[0xa1] = *(undefined8 *)(lVar15 + 0x136f0);
    *(undefined4 *)(puVar45 + 0xa2) = DAT_14c760598;
    *(undefined4 *)((longlong)puVar45 + 0x514) = DAT_14c76059c;
    lVar15 = DAT_14c9eccf0;
    uVar70 = 0;
    bVar35 = (byte)local_8c0;
    if (DAT_14ca84f10 == '\x01') {
      bVar56 = false;
      if (DAT_14ca84f14 < 0x21) {
        iVar11 = *local_908;
        if (((iVar11 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar11 == 2)) {
          uVar27 = 0;
        }
        else if (iVar11 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          uVar27 = (ulonglong)(DVar12 != DVar13);
        }
        else {
          uVar27 = 1;
        }
        bVar56 = *(int *)(lVar15 + uVar27 * 4) != 0;
      }
    }
    else {
      bVar56 = false;
    }
    uVar48 = *(uint *)(*(longlong *)(local_968 + 8) + 0x60);
    lVar15 = *(longlong *)(local_968 + 0x13818);
    iVar11 = ((uint)bVar56 | uVar48 >> 0x11 & 2) +
             (((uint)(byte)local_920 * 4 + (uint)(byte)local_930 * 2 | (uint)bVar35) * 4 +
              (uint)(byte)local_958 * 2 & 0x7f | (uint)(DAT_14c9cfd58 != 0 & (byte)(uVar48 >> 0x12))
             ) * 4;
    FUN_14157ea8e();
    FUN_1448e935e(lVar15,&local_168,&DAT_14c9f4f18,iVar11);
    uVar51 = *(undefined2 *)(lVar15 + 0x50);
    FUN_14157ea8e();
    uStack_850._0_4_ = 1;
    uStack_850._4_4_ = (undefined4)DAT_14c9f4f38;
    uStack_848._0_4_ = (int)((ulonglong)DAT_14c9f4f38 >> 0x20);
    local_858._0_2_ = uVar51;
    local_858._4_4_ = iVar11;
    FUN_140fe3648();
    puVar17 = local_160;
    puVar29 = local_168;
    lVar15 = DAT_14c9eccf0;
    local_168 = (ulonglong *)0x0;
    local_158 = (ulonglong *)0x0;
    if ((DAT_14ca84f10 == '\x01') && (DAT_14ca84f14 < 0x21)) {
      iVar11 = *local_908;
      if ((iVar11 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar11 == 2)))) {
        uVar27 = 0;
      }
      else if (iVar11 == 1) {
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        uVar27 = (ulonglong)(DVar12 != DVar13);
      }
      else {
        uVar27 = 1;
      }
      uVar70 = 0xc;
      if (*(int *)(lVar15 + uVar27 * 4) == 0) {
        uVar70 = 0;
      }
    }
    puVar41 = local_368;
    local_338 = local_368;
    FUN_14157ebb0();
    local_858._0_2_ = SUB82(&local_338,0);
    local_858._2_2_ = (undefined2)((ulonglong)&local_338 >> 0x10);
    local_858._4_4_ = (int)((ulonglong)&local_338 >> 0x20);
    uStack_850 = (ulonglong **)&uStack_330;
    FUN_1448f70da(puVar29,&DAT_14c9f71c8,puVar21,&local_858);
    local_858._0_2_ = SUB82(puVar21,0);
    local_858._2_2_ = (undefined2)((ulonglong)puVar21 >> 0x10);
    local_858._4_4_ = (int)((ulonglong)puVar21 >> 0x20);
    uStack_850._0_4_ = (int)puVar29;
    uStack_850._4_4_ = (undefined4)((ulonglong)puVar29 >> 0x20);
    uStack_848._0_4_ = (int)puVar17;
    uStack_848._4_4_ = (undefined4)((ulonglong)puVar17 >> 0x20);
    local_840 = puVar41;
    local_838 = (undefined8 *)CONCAT44(local_838._4_4_,uVar70);
    local_828 = local_168;
    local_818 = (longlong **)local_158;
    local_158 = (ulonglong *)0x0;
    local_808 = CONCAT44(uStack_144,local_148);
    uStack_800 = uStack_140;
    local_7f8 = (undefined4)local_138;
    uStack_7f4 = local_138._4_4_;
    uStack_7f0 = uStack_130;
    uStack_7ec = uStack_12c;
    if (local_168 != (ulonglong *)0x0) {
      local_168 = (ulonglong *)0x0;
    }
    FUN_14157ebb0();
    FUN_140069376(param_2);
    lVar15 = local_968;
    puVar29 = local_970;
    if ((param_11 & 4) == 0) {
      uVar36 = param_11;
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14ca84e6a == '\x01' &&
          (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_11 & 2) != 0)))))) {
        uVar36 = param_11 & 0xfff9 | 4;
      }
      puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar45 = puVar50 + 0x46;
      if (*(undefined8 **)(param_2 + 0x78) < puVar45) {
        FUN_140023dd8(local_970,0x240);
        puVar50 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
        puVar45 = puVar50 + 0x46;
      }
      *local_970 = (ulonglong)puVar45;
      local_9b8 = (longlong **)&local_858;
      FUN_14176a8cc(puVar50,&local_338,puVar21,uVar36);
    }
    else {
      if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
         ((DAT_14ca84e99 & 1) != 0)) {
        uVar36 = param_11 & 0xfff9 | 2;
      }
      else {
        uVar36 = param_11;
        if (DAT_14c760ddc == 2 && (param_11 & 2) != 0) {
          uVar36 = param_11 & 0xfffd;
        }
      }
      puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar45 = puVar50 + 0x48;
      if (*(undefined8 **)(param_2 + 0x78) < puVar45) {
        FUN_140023dd8(local_970,0x250);
        puVar50 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
        puVar45 = puVar50 + 0x48;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar45;
      uVar70 = *(undefined4 *)(param_2 + 0x660);
      local_9b8 = (longlong **)&local_858;
      FUN_14176a8cc(puVar50,&local_338,puVar21,uVar36);
      *puVar50 = &PTR_FUN_14a266730;
      *(undefined4 *)(puVar50 + 0x46) = uVar70;
      lVar15 = local_968;
    }
    uVar27 = local_910;
    iVar11 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar11 + 1U;
    uVar51 = local_940._0_2_;
    if (*(uint *)(param_2 + 0x174) < iVar11 + 1U) {
      FUN_14470e57a(local_8f8,iVar11);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar11 * 8) = puVar50;
    *(int *)((longlong)puVar50 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar50);
    if (local_828 != (ulonglong *)0x0) {
      pplVar30 = local_818;
      if (local_818 == (longlong **)0x0) {
        pplVar30 = (longlong **)&local_808;
      }
      (**(code **)((longlong)*pplVar30 + 0x10))();
    }
    if (local_168 != (ulonglong *)0x0) {
      puVar29 = local_158;
      if (local_158 == (ulonglong *)0x0) {
        puVar29 = (ulonglong *)&local_148;
      }
      (**(code **)(*puVar29 + 0x10))();
    }
  }
  puVar29 = local_970;
  if (*(int *)(DAT_14c9f4678 + 4) != 0) {
    DAT_14ca4d100 = 1;
    puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar21 = puVar45 + 0x34;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x1b0);
      puVar45 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar21 = puVar45 + 0x34;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar21;
    *puVar45 = &PTR_FUN_14a266768;
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    puVar45[4] = 0;
    *(undefined1 *)(puVar45 + 5) = 1;
    puVar45[0x26] = 0;
    puVar45[6] = 0;
    puVar45[7] = 0;
    puVar45[8] = 0;
    puVar45[0x18] = 0;
    puVar45[0x19] = 0;
    puVar45[0x1a] = 0;
    puVar45[0x1b] = 0;
    puVar45[0x1c] = 0;
    puVar45[0x1d] = 0;
    puVar45[0x1e] = 0;
    puVar45[0x1f] = 0;
    puVar45[0x20] = 0;
    puVar45[0x21] = 0;
    puVar45[0x22] = 0;
    puVar45[0x23] = 0;
    puVar45[0x24] = 0;
    *(undefined1 *)(puVar45 + 0x27) = 1;
    puVar45[0x30] = 0;
    *(undefined1 *)(puVar45 + 0x31) = 1;
    puVar45[0x32] = 0;
    *(undefined1 *)(puVar45 + 0x33) = 1;
    iVar11 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar11 + 1U) {
      FUN_1448cfae8(local_948,iVar11);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar11 * 8) = puVar45;
    lVar33 = FUN_1447e4f80();
    lVar15 = local_968;
    cVar9 = *(char *)(lVar33 + 0x41);
    if (*(char *)(lVar33 + 0x41) == '\x03') {
      cVar9 = '\x02';
    }
    puVar45[2] = *(undefined8 *)(local_968 + 0x18);
    *(char *)(puVar45 + 3) = cVar9;
    memcpy(puVar45 + 8,&local_5e8,0x100);
    *(undefined4 *)(puVar45 + 0x28) = (undefined4)local_2a8;
    *(undefined4 *)((longlong)puVar45 + 0x144) = local_2a8._4_4_;
    *(undefined4 *)(puVar45 + 0x29) = (undefined4)uStack_2a0;
    *(undefined4 *)((longlong)puVar45 + 0x14c) = uStack_2a0._4_4_;
    *(undefined4 *)(puVar45 + 0x2a) = (undefined4)local_298;
    *(undefined4 *)((longlong)puVar45 + 0x154) = local_298._4_4_;
    *(float *)(puVar45 + 0x2b) = fStack_290;
    *(float *)((longlong)puVar45 + 0x15c) = fStack_28c;
    *(float *)(puVar45 + 0x2c) = local_288;
    *(undefined4 *)((longlong)puVar45 + 0x164) = uStack_284;
    *(undefined4 *)(puVar45 + 0x2d) = (undefined4)uStack_280;
    *(undefined4 *)((longlong)puVar45 + 0x16c) = uStack_280._4_4_;
    *(int *)(puVar45 + 0x2e) = local_278;
    uVar14 = *(undefined8 *)(local_928 + 0x198);
    lVar33 = FUN_14482e3b2();
    cVar9 = *(char *)(lVar33 + 0x41);
    if (cVar9 == '\x03') {
      cVar9 = '\x02';
    }
    puVar45[0x32] = uVar14;
    *(char *)(puVar45 + 0x33) = cVar9;
    uVar14 = *(undefined8 *)(lVar15 + 0x118d0);
    lVar33 = FUN_144a2c9be();
    cVar9 = *(char *)(lVar33 + 0x41);
    if (cVar9 == '\x03') {
      cVar9 = '\x02';
    }
    puVar45[0x30] = uVar14;
    *(char *)(puVar45 + 0x31) = cVar9;
    FUN_1472ea582(param_2,lVar15 + 0x13870,puVar45 + 4);
    FUN_1471f016e(*(undefined8 *)(lVar15 + 0x13818),&local_858);
    local_168 = (ulonglong *)&DAT_100000001;
    local_160 = (ulonglong *)CONCAT44(local_160._4_4_,1);
    local_9b0 = (longlong **)&local_168;
    local_9b8 = (longlong **)(puVar45 + 2);
    FUN_1471f01db(param_2,&local_378,param_11,&local_858);
    uVar27 = local_910;
    uVar51 = local_940._0_2_;
  }
  if (uVar27 != 0) {
    plVar18 = (longlong *)FUN_1449609de(param_2,uVar27);
    puVar45 = DAT_14c9f3d18;
    puVar21 = (undefined8 *)*plVar18;
    if (DAT_14c9f3d18 != puVar21) {
      DAT_14c9f3d18 = puVar21;
      if (puVar21 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
        UNLOCK();
      }
      if (puVar45 != (undefined8 *)0x0) {
        LOCK();
        piVar22 = (int *)(puVar45 + 1);
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        if (*piVar22 == 0) {
          (**(code **)*puVar45)(puVar45,1);
        }
      }
    }
  }
  if (local_914 < 2) {
    local_2a8 = (longlong *)*local_8c8;
  }
  else {
    FUN_140304d29(&local_2a8,lVar15,local_8c8);
  }
  puVar29 = local_970;
  pwVar34 = L"Lumen.Reflections.ResolvedSpecularIndirect";
  if (param_8 == 2) {
    pwVar34 = L"Lumen.Reflections.FrontLayer.ResolvedSpecularIndirect";
  }
  uStack_850._0_4_ = DAT_14ca83a58;
  uStack_850._4_4_ = DAT_14ca83a5c;
  uStack_848._0_4_ = DAT_14ca83a60;
  uStack_848._4_4_ = DAT_14ca83a64;
  local_858._0_2_ = 8;
  local_858._2_2_ = 2;
  local_858._4_4_ = 0;
  local_830 = (ulonglong *)CONCAT26(uVar51,0x100000000);
  local_828 = (ulonglong *)CONCAT26(local_828._6_2_,0xff0009010101);
  uVar25 = (uint)local_2a8;
  uVar48 = DAT_14ca84e40;
  if ((int)uVar25 < (int)DAT_14ca84e40) {
    uVar48 = uVar25;
  }
  if ((int)uVar48 < 2) {
    uVar48 = 1;
  }
  uVar52 = (uint)((ulonglong)local_2a8 >> 0x20);
  uVar32 = DAT_14ca84e40;
  if ((int)uVar52 < (int)DAT_14ca84e40) {
    uVar32 = uVar52;
  }
  local_840 = (ulonglong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a68);
  if ((int)uVar32 < 2) {
    uVar32 = 1;
  }
  local_838 = (undefined8 *)((ulonglong)uVar48 << 0x20);
  local_830 = (ulonglong *)CONCAT44(local_830._4_4_,uVar32);
  uVar38 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar27 = uVar38 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar27) {
    FUN_140023dd8(local_970,0x128);
    uVar38 = *puVar29 + 7 & 0xfffffffffffffff8;
    uVar27 = uVar38 + 0x120;
    uVar51 = local_940._0_2_;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar27;
  FUN_1456bbb8c(uVar38,pwVar34,&local_858,0);
  iVar11 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar11 + 1U) {
    FUN_14472c0f6(local_900,iVar11);
  }
  puVar29 = local_970;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar11 * 8) = uVar38;
  pwVar34 = L"Lumen.Reflections.ResolvedSpecularIndirectDepth";
  if (param_8 == 2) {
    pwVar34 = L"Lumen.Reflections.FrontLayer.ResolvedSpecularIndirectDepth";
  }
  *(int *)(uVar38 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  uVar48 = DAT_14ca84e40;
  if ((int)uVar25 < (int)DAT_14ca84e40) {
    uVar48 = uVar25;
  }
  if ((int)uVar48 < 2) {
    uVar48 = 1;
  }
  uVar25 = DAT_14ca84e40;
  if ((int)uVar52 < (int)DAT_14ca84e40) {
    uVar25 = uVar52;
  }
  uStack_850._0_4_ = DAT_14ca83a58;
  uStack_850._4_4_ = DAT_14ca83a5c;
  uStack_848._0_4_ = DAT_14ca83a60;
  uStack_848._4_4_ = DAT_14ca83a64;
  local_858._0_2_ = 8;
  local_858._2_2_ = 2;
  local_858._4_4_ = 0;
  local_830 = (ulonglong *)CONCAT26(uVar51,0x100000000);
  local_828 = (ulonglong *)CONCAT26(local_828._6_2_,0xff0015010101);
  local_840 = (ulonglong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a68);
  if ((int)uVar25 < 2) {
    uVar25 = 1;
  }
  local_838 = (undefined8 *)((ulonglong)uVar48 << 0x20);
  local_830 = (ulonglong *)CONCAT44(local_830._4_4_,uVar25);
  uVar39 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar27 = uVar39 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar27) {
    FUN_140023dd8(local_970,0x128);
    uVar39 = *puVar29 + 7 & 0xfffffffffffffff8;
    uVar27 = uVar39 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar27;
  FUN_1456bbb8c(uVar39,pwVar34,&local_858,0);
  iVar11 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar11 + 1U) {
    FUN_14472c0f6(local_900,iVar11);
  }
  puVar29 = local_970;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar11 * 8) = uVar39;
  *(int *)(uVar39 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  fVar59 = (float)DAT_14c7605c4 * *(float *)(lVar15 + 0x2934);
  iVar26 = (int)ROUND(fVar59 + fVar59 + 0.5) >> 1;
  iVar11 = 0x40;
  if (iVar26 < 0x40) {
    iVar11 = iVar26;
  }
  if (iVar11 < DAT_14c7605c4) {
    iVar11 = DAT_14c7605c4;
  }
  local_920 = (longlong *)CONCAT44(local_920._4_4_,iVar11);
  local_930 = (undefined8 *)CONCAT71(local_930._1_7_,DAT_14c7605c0 != 0);
  pwVar34 = L"Lumen.Reflections.SpecularAndSecondMoment";
  if (param_8 == 2) {
    pwVar34 = L"Lumen.Reflections.FrontLayer.SpecularAndSecondMoment";
  }
  puVar28 = (undefined *)(*(longlong *)(lVar15 + 8) + 0x1b8);
  if (*(char *)(*(longlong *)(lVar15 + 8) + 0xd0) == '\0') {
    puVar28 = &DAT_14cb05410;
  }
  local_828 = (ulonglong *)CONCAT26(local_828._6_2_,0xff000a010000);
  local_858._0_2_ = 8;
  local_858._2_2_ = 2;
  local_858._4_4_ = 0;
  local_830 = (ulonglong *)CONCAT26(uVar51,0x100000000);
  local_828 = (ulonglong *)CONCAT62(local_828._2_6_,0x101);
  uVar25 = (uint)*(undefined8 *)(puVar28 + 0x10);
  uVar48 = DAT_14ca84e40;
  if ((int)uVar25 < (int)DAT_14ca84e40) {
    uVar48 = uVar25;
  }
  if ((int)uVar48 < 2) {
    uVar48 = 1;
  }
  uVar32 = (uint)((ulonglong)*(undefined8 *)(puVar28 + 0x10) >> 0x20);
  uVar25 = DAT_14ca84e40;
  if ((int)uVar32 < (int)DAT_14ca84e40) {
    uVar25 = uVar32;
  }
  uStack_850._0_4_ = DAT_14ca83a30;
  uStack_850._4_4_ = DAT_14ca83a34;
  uStack_848._0_4_ = DAT_14ca83a38;
  uStack_848._4_4_ = DAT_14ca83a3c;
  local_840 = (ulonglong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
  if ((int)uVar25 < 2) {
    uVar25 = 1;
  }
  local_838 = (undefined8 *)((ulonglong)uVar48 << 0x20);
  local_830 = (ulonglong *)CONCAT44(local_830._4_4_,uVar25);
  uVar47 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar27 = uVar47 + 0x120;
  local_8c0 = uVar39;
  if (*(ulonglong *)(param_2 + 0x78) < uVar27) {
    FUN_140023dd8(local_970,0x128);
    uVar47 = *puVar29 + 7 & 0xfffffffffffffff8;
    uVar27 = uVar47 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar27;
  FUN_1456bbb8c(uVar47,pwVar34,&local_858,0);
  iVar11 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar11 + 1U) {
    FUN_14472c0f6(local_900,iVar11);
  }
  puVar29 = local_970;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar11 * 8) = uVar47;
  *(int *)(uVar47 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  uVar2 = *(undefined1 *)(uVar38 + 0x94);
  puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar45 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_970,0x50);
    puVar45 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar45 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  puVar45[1] = *(undefined8 *)(uVar38 + 8);
  puVar45[2] = 0;
  *(undefined1 *)(puVar45 + 3) = 0;
  *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar45 + 5) = 1;
  *puVar45 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar45 + 6) = uVar2;
  *(undefined1 *)(puVar45 + 7) = 0;
  *(undefined4 *)((longlong)puVar45 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar45 + 0x35) = 0;
  puVar45[8] = uVar38;
  iVar11 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
  local_958 = (ulonglong *)uVar38;
  if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_938,iVar11);
  }
  puVar29 = local_970;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar45;
  *(int *)((longlong)puVar45 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_908 = (int *)uVar47;
  if ((param_8 & 0xfffffffd) == 0) {
    puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar21 = puVar50 + 0x10;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x90);
      puVar50 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar21 = puVar50 + 0x10;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar21;
    *puVar50 = &PTR_FUN_14a266488;
    puVar50[2] = 0;
    *(undefined1 *)(puVar50 + 3) = 1;
    puVar50[4] = 0;
    puVar50[5] = 0;
    puVar50[6] = 0;
    puVar50[7] = 0;
    *(undefined4 *)(puVar50 + 8) = 4;
    puVar50[9] = 0;
    *(undefined4 *)(puVar50 + 10) = 4;
    puVar50[0xb] = 0;
    *(undefined4 *)(puVar50 + 0xc) = 4;
    puVar50[0xe] = 0;
    puVar50[0xf] = 0;
    iVar11 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar11 + 1U) {
      FUN_1448cfae8(local_948,iVar11);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar11 * 8) = puVar50;
    lVar15 = FUN_1447e4f80();
    puVar29 = local_970;
    cVar9 = '\x02';
    if (*(char *)(lVar15 + 0x41) != '\x03') {
      cVar9 = *(char *)(lVar15 + 0x41);
    }
    puVar50[2] = *(undefined8 *)(local_968 + 0x18);
    *(char *)(puVar50 + 3) = cVar9;
    pplVar30 = local_638;
    puVar21 = puVar50 + 4;
    for (lVar15 = 9; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar21 = *pplVar30;
      pplVar30 = pplVar30 + 1;
      puVar21 = puVar21 + 1;
    }
    puVar50[0xe] = puVar45;
    uVar2 = *(undefined1 *)(uVar47 + 0x94);
    puVar55 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar55 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x50);
      puVar55 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar55 + 9;
    }
    puVar53 = puVar50 + 2;
    *(undefined8 **)(param_2 + 0x70) = puVar21;
    puVar55[1] = *(undefined8 *)(uVar47 + 8);
    puVar55[2] = 0;
    *(undefined1 *)(puVar55 + 3) = 0;
    *(undefined8 *)((longlong)puVar55 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar55 + 5) = 0;
    *puVar55 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar55 + 6) = uVar2;
    *(undefined1 *)(puVar55 + 7) = 0;
    *(undefined4 *)((longlong)puVar55 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar55 + 0x35) = 0;
    puVar55[8] = uVar47;
    iVar11 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(local_938,iVar11);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar55;
    *(int *)((longlong)puVar55 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar50[0xf] = puVar55;
    uVar14 = *(undefined8 *)(local_968 + 0x13818);
    FUN_14157e868();
    FUN_14157e868();
    FUN_1448e935e(uVar14,&local_858,&DAT_14c9f4350,0);
    FUN_14157e868();
    plVar18 = local_638[3];
    uVar61 = uStack_850._4_4_;
    iVar26 = (int)uStack_850;
    uVar70 = local_858._4_4_;
    iVar11 = CONCAT22(local_858._2_2_,(undefined2)local_858);
    uVar14 = CONCAT44(local_858._4_4_,iVar11);
    local_268 = (ulonglong *)0x0;
    uStack_258 = (ulonglong *)0x0;
    local_168 = (ulonglong *)local_638[3];
    FUN_14157e98a();
    local_858._0_2_ = SUB82(&local_168,0);
    local_858._2_2_ = (undefined2)((ulonglong)&local_168 >> 0x10);
    local_858._4_4_ = (int)((ulonglong)&local_168 >> 0x20);
    uStack_850 = &local_160;
    FUN_1448f70da(uVar14,&DAT_14c9f6c78,puVar53,&local_858);
    local_858._0_2_ = SUB82(puVar53,0);
    local_858._2_2_ = (undefined2)((ulonglong)puVar53 >> 0x10);
    local_858._4_4_ = (int)((ulonglong)puVar53 >> 0x20);
    uStack_850._4_4_ = uVar70;
    uStack_848._0_4_ = iVar26;
    uStack_848._4_4_ = uVar61;
    local_840 = (ulonglong *)plVar18;
    local_838 = (undefined8 *)((ulonglong)local_838 & 0xffffffff00000000);
    local_828 = local_268;
    local_818 = (longlong **)uStack_258;
    uStack_258 = (ulonglong *)0x0;
    uStack_800 = CONCAT26(uStack_23a,CONCAT24(uStack_23c,uStack_240));
    local_808 = local_248;
    local_7f8 = (undefined4)local_238;
    uStack_7f4 = local_238._4_4_;
    uStack_7f0 = uStack_230;
    uStack_7ec = uStack_22c;
    if (local_268 != (ulonglong *)0x0) {
      local_268 = (ulonglong *)0x0;
    }
    uStack_850._0_4_ = iVar11;
    FUN_14157e98a();
    FUN_140069376(param_2);
    puVar29 = local_970;
    if ((param_11 & 4) == 0) {
      uVar36 = param_11;
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14ca84e6a == '\x01' &&
          (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_11 & 2) != 0)))))) {
        uVar36 = param_11 & 0xfff9 | 4;
      }
      puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar21 = puVar50 + 0x46;
      if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
        FUN_140023dd8(local_970,0x240);
        puVar50 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
        puVar21 = puVar50 + 0x46;
      }
      *local_970 = (ulonglong)puVar21;
      local_9b8 = (longlong **)&local_858;
      FUN_141769f44(puVar50,&local_168,puVar53,uVar36);
    }
    else {
      if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
         ((DAT_14ca84e99 & 1) != 0)) {
        uVar36 = param_11 & 0xfff9 | 2;
      }
      else {
        uVar36 = param_11;
        if (DAT_14c760ddc == 2 && (param_11 & 2) != 0) {
          uVar36 = param_11 & 0xfffd;
        }
      }
      puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar21 = puVar50 + 0x48;
      if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
        FUN_140023dd8(local_970,0x250);
        puVar50 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
        puVar21 = puVar50 + 0x48;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar21;
      uVar70 = *(undefined4 *)(param_2 + 0x660);
      local_9b8 = (longlong **)&local_858;
      FUN_141769f44(puVar50,&local_168,puVar53,uVar36);
      *puVar50 = &PTR_FUN_14a266490;
      *(undefined4 *)(puVar50 + 0x46) = uVar70;
    }
    iVar11 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar11 + 1U) {
      FUN_14470e57a(local_8f8,iVar11);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar11 * 8) = puVar50;
    *(int *)((longlong)puVar50 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar50);
    if (local_828 != (ulonglong *)0x0) {
      pplVar30 = local_818;
      if (local_818 == (longlong **)0x0) {
        pplVar30 = (longlong **)&local_808;
      }
      (**(code **)((longlong)*pplVar30 + 0x10))();
    }
    if (local_268 != (ulonglong *)0x0) {
      plVar18 = (longlong *)uStack_258;
      if (uStack_258 == (ulonglong *)0x0) {
        plVar18 = &local_248;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  puVar29 = local_970;
  puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar50 + 0x3e;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_970,0x200);
    puVar50 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar50 + 0x3e;
  }
  uVar27 = local_8c0;
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  *puVar50 = &PTR_FUN_14a2664c8;
  puVar50[8] = 0;
  puVar50[0x26] = 0;
  puVar50[2] = 0;
  puVar50[3] = 0;
  puVar50[0x18] = 0;
  puVar50[0x19] = 0;
  puVar50[0x1a] = 0;
  puVar50[0x1b] = 0;
  puVar50[0x1c] = 0;
  puVar50[0x1d] = 0;
  puVar50[0x1e] = 0;
  puVar50[0x1f] = 0;
  puVar50[0x20] = 0;
  puVar50[0x21] = 0;
  puVar50[0x22] = 0;
  puVar50[0x23] = 0;
  puVar50[0x24] = 0;
  *(undefined1 *)(puVar50 + 0x27) = 1;
  puVar50[0x28] = 0;
  puVar50[0x29] = 0;
  puVar50[0x2a] = 0;
  puVar50[0x2b] = 0;
  *(undefined4 *)(puVar50 + 0x2c) = 4;
  puVar50[0x2d] = 0;
  *(undefined4 *)(puVar50 + 0x2e) = 4;
  puVar50[0x2f] = 0;
  *(undefined4 *)(puVar50 + 0x30) = 4;
  puVar50[0x32] = 0;
  *(undefined1 *)(puVar50 + 0x33) = 1;
  puVar50[0x34] = 0;
  *(undefined1 *)(puVar50 + 0x35) = 1;
  puVar50[0x38] = 0;
  puVar50[0x36] = 0;
  puVar50[0x37] = 0;
  *(undefined1 *)(puVar50 + 0x39) = 1;
  puVar50[0x3a] = 0;
  *(undefined1 *)(puVar50 + 0x3b) = 1;
  puVar50[0x3c] = 0;
  puVar50[0x3d] = 0;
  iVar11 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar11 + 1U) {
    FUN_1448cfae8(local_948,iVar11);
  }
  puVar29 = local_970;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar11 * 8) = puVar50;
  puVar50[2] = puVar45;
  uVar2 = *(undefined1 *)(uVar27 + 0x94);
  puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar45 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_970,0x50);
    puVar45 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar45 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  puVar45[1] = *(undefined8 *)(uVar27 + 8);
  puVar45[2] = 0;
  *(undefined1 *)(puVar45 + 3) = 0;
  *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar45 + 5) = 0;
  *puVar45 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar45 + 6) = uVar2;
  *(undefined1 *)(puVar45 + 7) = 0;
  *(undefined4 *)((longlong)puVar45 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar45 + 0x35) = 0;
  puVar45[8] = uVar27;
  iVar11 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
  iVar26 = (int)local_940;
  if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_938,iVar11);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar45;
  *(int *)((longlong)puVar45 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar50[3] = puVar45;
  *(undefined4 *)(puVar50 + 4) = (undefined4)local_920;
  *(undefined4 *)((longlong)puVar50 + 0x24) = *(undefined4 *)(DAT_14c9f3ba8 + 4);
  *(undefined4 *)(puVar50 + 5) = DAT_14c7605c8;
  fVar59 = *(float *)(DAT_14c9f3c00 + 4);
  if (fVar59 <= 0.0) {
    fVar59 = 0.0;
  }
  *(float *)((longlong)puVar50 + 0x2c) = fVar59;
  fVar59 = *(float *)(DAT_14c9f3bd0 + 4);
  if (2.0 <= fVar59) {
    fVar59 = 2.0;
  }
  if (fVar59 <= 0.0) {
    fVar59 = 0.0;
  }
  *(float *)(puVar50 + 6) = fVar59;
  fVar59 = *(float *)(DAT_14c9f3be8 + 4);
  if (1.0 <= fVar59) {
    fVar59 = 1.0;
  }
  if (fVar59 <= 0.0) {
    fVar59 = 0.0;
  }
  *(float *)((longlong)puVar50 + 0x34) = fVar59;
  memcpy(puVar50 + 8,&local_5e8,0x100);
  lVar15 = FUN_1447e4f80();
  cVar9 = *(char *)(lVar15 + 0x41);
  if (cVar9 == '\x03') {
    cVar9 = '\x02';
  }
  puVar50[0x32] = *(undefined8 *)(local_968 + 0x18);
  *(char *)(puVar50 + 0x33) = cVar9;
  uVar14 = *(undefined8 *)(local_928 + 0x198);
  lVar33 = FUN_14482e3b2();
  lVar15 = local_968;
  cVar9 = *(char *)(lVar33 + 0x41);
  if (cVar9 == '\x03') {
    cVar9 = '\x02';
  }
  puVar50[0x34] = uVar14;
  *(char *)(puVar50 + 0x35) = cVar9;
  if (param_10 != (undefined8 *)0x0) {
    uVar70 = *(undefined4 *)((longlong)param_10 + 4);
    uVar61 = *(undefined4 *)(param_10 + 1);
    uVar62 = *(undefined4 *)((longlong)param_10 + 0xc);
    *(undefined4 *)(puVar50 + 0x36) = *(undefined4 *)param_10;
    *(undefined4 *)((longlong)puVar50 + 0x1b4) = uVar70;
    *(undefined4 *)(puVar50 + 0x37) = uVar61;
    *(undefined4 *)((longlong)puVar50 + 0x1bc) = uVar62;
  }
  bVar35 = (byte)local_8e4 & (byte)local_930;
  puVar21 = puVar50 + 2;
  pplVar30 = local_638;
  puVar45 = puVar50 + 0x28;
  for (lVar33 = 9; lVar33 != 0; lVar33 = lVar33 + -1) {
    *puVar45 = *pplVar30;
    pplVar30 = pplVar30 + 1;
    puVar45 = puVar45 + 1;
  }
  uVar14 = *(undefined8 *)(local_968 + 0x118d0);
  lVar33 = FUN_144a2c9be();
  cVar9 = '\x02';
  if (*(char *)(lVar33 + 0x41) != '\x03') {
    cVar9 = *(char *)(lVar33 + 0x41);
  }
  puVar50[0x38] = uVar14;
  *(char *)(puVar50 + 0x39) = cVar9;
  fVar59 = 1.0 / (float)iVar26;
  *(float *)(puVar50 + 7) = fVar59;
  iVar11 = 0;
  if (*(int *)(DAT_14c9f3cf8 + 4) != 0) {
    DAT_14ca4d100 = 1;
    FUN_1472ea582(param_2,lVar15 + 0x13870,puVar50 + 0x3a);
    iVar11 = 2;
  }
  uVar14 = *(undefined8 *)(lVar15 + 0x13818);
  iVar26 = (int)local_8a8 + 3;
  if ((char)local_8d8 == '\0') {
    iVar26 = (int)local_8a8 + 0x3fffffff;
  }
  FUN_14159f284();
  FUN_1448e935e(uVar14,&local_858,&DAT_14c9f4100,
                (uint)(param_10 != (undefined8 *)0x0) * 2 + (iVar26 + iVar11) * 4 | (uint)bVar35);
  FUN_14159f284();
  puVar29 = local_610;
  uVar62 = uStack_850._4_4_;
  iVar11 = (int)uStack_850;
  uVar61 = local_858._4_4_;
  uVar70 = CONCAT22(local_858._2_2_,(undefined2)local_858);
  uVar14 = CONCAT44(local_858._4_4_,uVar70);
  local_268 = (undefined8 *)0x0;
  uStack_258 = (ulonglong *)0x0;
  local_168 = local_610;
  FUN_14159f3a6();
  local_858._0_2_ = SUB82(&local_168,0);
  local_858._2_2_ = (undefined2)((ulonglong)&local_168 >> 0x10);
  local_858._4_4_ = (int)((ulonglong)&local_168 >> 0x20);
  uStack_850 = &local_160;
  FUN_1448f70da(uVar14,&DAT_14c9f6ae0,puVar21,&local_858);
  local_858._0_2_ = SUB82(puVar21,0);
  local_858._2_2_ = (undefined2)((ulonglong)puVar21 >> 0x10);
  local_858._4_4_ = (int)((ulonglong)puVar21 >> 0x20);
  uStack_850._4_4_ = uVar61;
  uStack_848._0_4_ = iVar11;
  uStack_848._4_4_ = uVar62;
  local_840 = puVar29;
  local_838 = (undefined8 *)((ulonglong)local_838 & 0xffffffff00000000);
  local_828 = local_268;
  local_818 = (longlong **)uStack_258;
  uStack_258 = (ulonglong *)0x0;
  uStack_800 = CONCAT26(uStack_23a,CONCAT24(uStack_23c,uStack_240));
  local_808 = local_248;
  local_7f8 = (undefined4)local_238;
  uStack_7f4 = local_238._4_4_;
  uStack_7f0 = uStack_230;
  uStack_7ec = uStack_22c;
  if (local_268 != (undefined8 *)0x0) {
    local_268 = (undefined8 *)0x0;
  }
  uStack_850._0_4_ = uVar70;
  FUN_14159f3a6();
  FUN_140069376(param_2);
  lVar15 = local_968;
  puVar29 = local_970;
  if ((param_11 & 4) == 0) {
    uVar51 = SUB82(local_940,0);
    uVar36 = param_11;
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_11 & 2) != 0)))))) {
      uVar36 = param_11 & 0xfff9 | 4;
    }
    puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar45 = puVar50 + 0x46;
    if (*(undefined8 **)(param_2 + 0x78) < puVar45) {
      FUN_140023dd8(local_970,0x240);
      puVar50 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar45 = puVar50 + 0x46;
    }
    *local_970 = (ulonglong)puVar45;
    local_9b8 = (longlong **)&local_858;
    FUN_14176a088(puVar50,&local_168,puVar21,uVar36);
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      uVar36 = param_11 & 0xfff9 | 2;
    }
    else {
      uVar36 = param_11;
      if (DAT_14c760ddc == 2 && (param_11 & 2) != 0) {
        uVar36 = param_11 & 0xfffd;
      }
    }
    puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar45 = puVar50 + 0x48;
    if (*(undefined8 **)(param_2 + 0x78) < puVar45) {
      FUN_140023dd8(local_970,0x250);
      puVar50 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar45 = puVar50 + 0x48;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar45;
    uVar70 = *(undefined4 *)(param_2 + 0x660);
    local_9b8 = (longlong **)&local_858;
    FUN_14176a088(puVar50,&local_168,puVar21,uVar36);
    *puVar50 = &PTR_FUN_14a2664d0;
    *(undefined4 *)(puVar50 + 0x46) = uVar70;
    uVar51 = SUB82(local_940,0);
    lVar15 = local_968;
  }
  iVar11 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar11 + 1U) {
    FUN_14470e57a(local_8f8,iVar11);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar11 * 8) = puVar50;
  *(int *)((longlong)puVar50 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar50);
  if (local_828 != (undefined8 *)0x0) {
    pplVar30 = (longlong **)&local_808;
    if (local_818 != (longlong **)0x0) {
      pplVar30 = local_818;
    }
    (**(code **)((longlong)*pplVar30 + 0x10))();
  }
  if (local_268 != (undefined8 *)0x0) {
    plVar18 = &local_248;
    if (uStack_258 != (ulonglong *)0x0) {
      plVar18 = (longlong *)uStack_258;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  uVar27 = (ulonglong)local_958;
  if ((param_8 & 0xfffffffd) != 0) goto LAB_142d4793d;
  local_858._0_2_ = 0;
  local_858._2_2_ = 0;
  local_858._4_4_ = 0;
  uStack_850._0_1_ = 1;
  local_7e0 = 1;
  local_7d8 = 0;
  uStack_7d0 = 0;
  local_7c8 = 0;
  local_7c0 = 1;
  local_7b8 = 0;
  local_7b0 = 1;
  local_7a8 = 0;
  uStack_7a0 = 0;
  local_798[0] = 0;
  local_798[1] = 0;
  local_798[2] = 0;
  local_798[3] = 0;
  local_778 = 4;
  local_770 = 0;
  local_768 = 4;
  local_760 = 0;
  local_758 = 4;
  local_748[0] = 0;
  local_658 = 0;
  local_6c8 = 0;
  uStack_6c0 = 0;
  local_6b8 = 0;
  uStack_6b0 = 0;
  local_6a8 = 0;
  uStack_6a0 = 0;
  local_698 = 0;
  uStack_690 = 0;
  local_688 = 0;
  uStack_680 = 0;
  local_678 = 0;
  uStack_670 = 0;
  local_668 = 0;
  local_650 = 1;
  lVar19 = FUN_1447e4f80();
  lVar33 = local_928;
  cVar9 = *(char *)(lVar19 + 0x41);
  if (cVar9 == '\x03') {
    cVar9 = '\x02';
  }
  uVar14 = *(undefined8 *)(lVar15 + 0x18);
  local_858._0_2_ = (undefined2)uVar14;
  local_858._2_2_ = (undefined2)((ulonglong)uVar14 >> 0x10);
  local_858._4_4_ = (int)((ulonglong)uVar14 >> 0x20);
  uStack_850._0_4_ = CONCAT31(uStack_850._1_3_,cVar9);
  FUN_1448e94e7(&uStack_848,param_2,*(undefined8 *)(local_928 + 0x198));
  local_7e8 = 0;
  uVar14 = *(undefined8 *)(lVar33 + 0x198);
  lVar33 = FUN_14482e3b2();
  local_7e0 = *(char *)(lVar33 + 0x41);
  if (local_7e0 == '\x03') {
    local_7e0 = '\x02';
  }
  if (param_10 != (undefined8 *)0x0) {
    local_7d8 = *param_10;
    uStack_7d0 = param_10[1];
  }
  uVar3 = *(undefined8 *)(lVar15 + 0x118d0);
  local_7e8 = uVar14;
  lVar33 = FUN_144a2c9be();
  local_7c0 = '\x02';
  if (*(char *)(lVar33 + 0x41) != '\x03') {
    local_7c0 = *(char *)(lVar33 + 0x41);
  }
  local_7c8 = uVar3;
  pplVar30 = local_638;
  puVar21 = local_798;
  for (lVar33 = 9; lVar33 != 0; lVar33 = lVar33 + -1) {
    *puVar21 = *pplVar30;
    pplVar30 = pplVar30 + 1;
    puVar21 = puVar21 + 1;
  }
  memcpy(local_748,&local_5e8,0x100);
  local_8e4 = *(int *)(DAT_14c9f3cf8 + 4);
  local_648 = fVar59;
  if (local_8e4 != 0) {
    DAT_14ca4d100 = 1;
    FUN_1472ea582(param_2,lVar15 + 0x13870,&local_7b8);
  }
  local_930 = (undefined8 *)CONCAT44(local_930._4_4_,DAT_14c7605b8);
  uVar27 = (ulonglong)DAT_14c7605cc;
  local_8a8 = CONCAT44(local_8a8._4_4_,DAT_14c7605cc);
  if (*(longlong *)(lVar15 + 0x3108) == 0) {
LAB_142d464d2:
    local_910 = CONCAT71((int7)(uVar27 >> 8),1);
    plVar18 = (longlong *)0x0;
LAB_142d46512:
    local_914 = 0;
    local_8c8 = (ulonglong *)((ulonglong)local_8c8._4_4_ << 0x20);
    uVar64 = 0;
    uVar65 = 0;
    uVar66 = 0;
    uVar67 = 0;
    uVar68 = 0;
    uVar69 = 0;
    uVar70 = 0;
    uVar61 = 0;
    uVar62 = 0;
    uVar63 = 0;
LAB_142d46542:
    local_960 = (undefined8 *)0x0;
    lVar33 = 0;
  }
  else {
    uVar27 = 0x1a60;
    lVar33 = 0x19f0;
    if (param_8 == 2) {
      lVar33 = 0x1a60;
    }
    plVar18 = (longlong *)(*(longlong *)(lVar15 + 0x3108) + lVar33);
    if (plVar18 == (longlong *)0x0) goto LAB_142d464d2;
    if ((*(char *)(lVar15 + 0x23cc) != '\0') ||
       ((*(byte *)(lVar15 + 0x125b0) & 8) != 0 || DAT_14c7605b8 == 0)) {
      local_910 = 0;
      goto LAB_142d46512;
    }
    uVar70 = (undefined4)plVar18[8];
    uVar61 = *(undefined4 *)((longlong)plVar18 + 0x44);
    uVar62 = (undefined4)plVar18[9];
    uVar63 = *(undefined4 *)((longlong)plVar18 + 0x4c);
    uVar66 = (undefined4)plVar18[10];
    uVar67 = *(undefined4 *)((longlong)plVar18 + 0x54);
    uVar68 = (undefined4)plVar18[0xb];
    uVar69 = *(undefined4 *)((longlong)plVar18 + 0x5c);
    local_914 = *(uint *)(plVar18 + 0xc);
    local_8c8 = (ulonglong *)CONCAT44(local_8c8._4_4_,*(undefined4 *)((longlong)plVar18 + 100));
    uVar64 = (undefined4)plVar18[0xd];
    uVar65 = *(undefined4 *)((longlong)plVar18 + 0x6c);
    if (((longlong *)*plVar18 == (longlong *)0x0) || (plVar18[1] == 0)) {
LAB_142d47c62:
      local_910 = 0;
      goto LAB_142d46542;
    }
    lVar33 = (**(code **)(*(longlong *)*plVar18 + 0x10))();
    puVar28 = (undefined *)(*(longlong *)(lVar15 + 8) + 0x1b8);
    if (*(char *)(*(longlong *)(lVar15 + 8) + 0xd0) == '\0') {
      puVar28 = &DAT_14cb05410;
    }
    if ((*(int *)(lVar33 + 0x2c) != *(int *)(puVar28 + 0x10)) ||
       (*(int *)(lVar33 + 0x30) != *(int *)(puVar28 + 0x14))) goto LAB_142d47c62;
    local_910 = 0;
    lVar33 = FUN_14473c272(param_2,plVar18,0);
    local_960 = (undefined8 *)FUN_14473c272(param_2,plVar18 + 1,0);
  }
  if (*(longlong *)(*(longlong *)(lVar15 + 0x3108) + 0x1c40) == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = FUN_14473c272(param_2,*(longlong *)(lVar15 + 0x3108) + 0x1c40,0);
  }
  puVar29 = local_970;
  if (*(longlong *)(local_928 + 0x1f0) != 0) {
    lVar19 = *(longlong *)(local_928 + 0x1f0);
  }
  pwVar34 = L"Lumen.Reflections.NumFramesAccumulated";
  if (param_8 == 2) {
    pwVar34 = L"Lumen.Reflections.FrontLayer.NumFramesAccumulated";
  }
  puVar28 = (undefined *)(*(longlong *)(lVar15 + 8) + 0x1b8);
  if (*(char *)(*(longlong *)(lVar15 + 8) + 0xd0) == '\0') {
    puVar28 = &DAT_14cb05410;
  }
  local_238 = (ulonglong *)CONCAT26(local_238._6_2_,0xff0003010000);
  local_268 = (ulonglong *)&DAT_00020008;
  uStack_23c = 1;
  local_238 = (ulonglong *)CONCAT62(local_238._2_6_,0x101);
  uVar25 = (uint)*(undefined8 *)(puVar28 + 0x10);
  uVar48 = DAT_14ca84e40;
  if ((int)uVar25 < (int)DAT_14ca84e40) {
    uVar48 = uVar25;
  }
  if ((int)uVar48 < 2) {
    uVar48 = 1;
  }
  uVar25 = (uint)((ulonglong)*(undefined8 *)(puVar28 + 0x10) >> 0x20);
  uStack_240 = DAT_14ca84e40;
  if ((int)uVar25 < (int)DAT_14ca84e40) {
    uStack_240 = uVar25;
  }
  uStack_260 = (ulonglong *)CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_258 = (ulonglong *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uStack_250 = (ulonglong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
  if ((int)uStack_240 < 2) {
    uStack_240 = 1;
  }
  local_248 = (ulonglong)uVar48 << 0x20;
  uVar38 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar27 = uVar38 + 0x120;
  uStack_23a = uVar51;
  if (*(ulonglong *)(param_2 + 0x78) < uVar27) {
    FUN_140023dd8(local_970,0x128);
    uVar38 = *puVar29 + 7 & 0xfffffffffffffff8;
    uVar27 = uVar38 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar27;
  FUN_1456bbb8c(uVar38,pwVar34,&local_268,0);
  iVar11 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar11 + 1U) {
    FUN_14472c0f6(local_900,iVar11);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar11 * 8) = uVar38;
  *(int *)(uVar38 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  local_920 = plVar18;
  local_8d8 = uVar38;
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(&local_268,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp"
                  ,0x66);
    DAT_14c760a84 = FUN_145d12cf0(&local_268);
    lVar15 = local_968;
    if (local_268 != (ulonglong *)0x0) {
      FUN_1400020a8();
      lVar15 = local_968;
    }
  }
  puVar29 = local_970;
  if ((DAT_14c760a84 < *(int *)(param_2 + 0x130)) &&
     (lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar20 != 0)) {
    lVar20 = lVar20 + 8;
  }
  else {
    lVar20 = 0;
  }
  lVar4 = *(longlong *)(local_928 + 0x2f0);
  lVar20 = *(longlong *)(lVar20 + 8);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x24) & 4) != 0)) {
    lVar20 = lVar4;
  }
  puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar45 + 0x58;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_970,0x2d0);
    puVar45 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar45 + 0x58;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  *puVar45 = &PTR_FUN_14a266508;
  puVar45[2] = 0;
  *(undefined1 *)(puVar45 + 3) = 1;
  puVar45[4] = 0;
  puVar45[5] = 0;
  puVar45[6] = 0;
  puVar45[7] = 0;
  puVar45[8] = 0;
  puVar45[9] = 0;
  puVar45[10] = 0;
  puVar45[0xb] = 0;
  puVar45[0xc] = 0;
  puVar45[0xd] = 0;
  puVar45[0xe] = 0;
  puVar45[0xf] = 0;
  puVar45[0x10] = 0;
  *(undefined1 *)(puVar45 + 0x11) = 1;
  puVar45[0x12] = 0;
  puVar45[0x13] = 0;
  puVar45[0x14] = 0;
  *(undefined1 *)(puVar45 + 0x15) = 1;
  puVar45[0x16] = 0;
  *(undefined1 *)(puVar45 + 0x17) = 1;
  puVar45[0x18] = 0;
  puVar45[0x19] = 0;
  puVar45[0x1a] = 0;
  puVar45[0x1b] = 0;
  puVar45[0x1c] = 0;
  puVar45[0x1d] = 0;
  *(undefined4 *)(puVar45 + 0x1e) = 4;
  puVar45[0x1f] = 0;
  *(undefined4 *)(puVar45 + 0x20) = 4;
  puVar45[0x21] = 0;
  *(undefined4 *)(puVar45 + 0x22) = 4;
  puVar45[0x24] = 0;
  puVar45[0x42] = 0;
  puVar45[0x34] = 0;
  puVar45[0x35] = 0;
  puVar45[0x36] = 0;
  puVar45[0x37] = 0;
  puVar45[0x38] = 0;
  puVar45[0x39] = 0;
  puVar45[0x3a] = 0;
  puVar45[0x3b] = 0;
  puVar45[0x3c] = 0;
  puVar45[0x3d] = 0;
  puVar45[0x3e] = 0;
  puVar45[0x3f] = 0;
  puVar45[0x40] = 0;
  *(undefined1 *)(puVar45 + 0x43) = 1;
  puVar45[0x46] = 0;
  puVar45[0x47] = 0;
  puVar45[0x48] = 0;
  puVar45[0x49] = 0;
  puVar45[0x4a] = 0;
  puVar45[0x4b] = 0;
  *(undefined8 *)((longlong)puVar45 + 0x25c) = 0;
  *(undefined8 *)((longlong)puVar45 + 0x264) = 0;
  *(undefined8 *)((longlong)puVar45 + 0x26c) = 0x3f800000;
  *(undefined8 *)((longlong)puVar45 + 0x274) = 0;
  *(undefined8 *)((longlong)puVar45 + 0x27c) = 0x3f800000;
  *(undefined8 *)((longlong)puVar45 + 0x284) = 0;
  *(undefined4 *)((longlong)puVar45 + 0x28c) = 0x3f800000;
  puVar45[0x53] = 0;
  puVar45[0x54] = 0;
  iVar11 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar11 + 1U) {
    FUN_1448cfae8(local_948,iVar11);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar11 * 8) = puVar45;
  local_950 = puVar45 + 2;
  memcpy(puVar45 + 2,&local_858,0x218);
  piVar22 = local_908;
  puVar29 = local_970;
  puVar45[0x46] = local_958;
  puVar45[0x47] = local_8c0;
  puVar45[0x48] = lVar33;
  puVar45[0x49] = local_960;
  puVar45[0x4a] = lVar20;
  puVar45[0x4b] = lVar19;
  *(float *)(puVar45 + 0x52) = *(float *)(lVar15 + 0x13694) / *(float *)(lVar15 + 0x13170);
  *(undefined4 *)(puVar45 + 0x4c) = uVar70;
  *(undefined4 *)((longlong)puVar45 + 0x264) = uVar61;
  *(undefined4 *)(puVar45 + 0x4d) = uVar62;
  *(undefined4 *)((longlong)puVar45 + 0x26c) = uVar63;
  *(undefined4 *)(puVar45 + 0x4e) = uVar66;
  *(undefined4 *)((longlong)puVar45 + 0x274) = uVar67;
  *(undefined4 *)(puVar45 + 0x4f) = uVar68;
  *(undefined4 *)((longlong)puVar45 + 0x27c) = uVar69;
  *(uint *)(puVar45 + 0x50) = local_914;
  *(undefined4 *)((longlong)puVar45 + 0x284) = (undefined4)local_8c8;
  *(undefined4 *)(puVar45 + 0x51) = uVar64;
  *(undefined4 *)((longlong)puVar45 + 0x28c) = uVar65;
  uVar2 = *(undefined1 *)((longlong)local_908 + 0x94);
  puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar50 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_970,0x50);
    puVar50 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar50 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  puVar50[1] = *(undefined8 *)((longlong)piVar22 + 8);
  puVar50[2] = 0;
  *(undefined1 *)(puVar50 + 3) = 0;
  *(undefined8 *)((longlong)puVar50 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar50 + 5) = 0;
  *puVar50 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar50 + 6) = uVar2;
  *(undefined1 *)(puVar50 + 7) = 0;
  *(undefined4 *)((longlong)puVar50 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar50 + 0x35) = 0;
  puVar50[8] = piVar22;
  iVar11 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_938,iVar11);
  }
  uVar27 = local_8d8;
  puVar29 = local_970;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar50;
  *(int *)((longlong)puVar50 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar45[0x53] = puVar50;
  uVar2 = *(undefined1 *)(local_8d8 + 0x94);
  puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar50 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_970,0x50);
    puVar50 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar50 + 9;
  }
  lVar15 = local_968;
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  puVar50[1] = *(undefined8 *)(uVar27 + 8);
  puVar50[2] = 0;
  *(undefined1 *)(puVar50 + 3) = 0;
  *(undefined8 *)((longlong)puVar50 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar50 + 5) = 0;
  *puVar50 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar50 + 6) = uVar2;
  *(undefined1 *)(puVar50 + 7) = 0;
  *(undefined4 *)((longlong)puVar50 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar50 + 0x35) = 0;
  puVar50[8] = uVar27;
  iVar11 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_938,iVar11);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar50;
  *(int *)((longlong)puVar50 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar45[0x54] = puVar50;
  fVar59 = *(float *)(DAT_14c9f3b00 + 4);
  if (fVar59 <= 1.0) {
    fVar59 = 1.0;
  }
  *(float *)(puVar45 + 0x55) = (float)(int)fVar59;
  *(undefined4 *)((longlong)puVar45 + 0x2ac) = *(undefined4 *)(DAT_14c9f3b18 + 4);
  *(undefined4 *)(puVar45 + 0x56) = DAT_14c7605bc;
  uVar14 = *(undefined8 *)(lVar15 + 0x13818);
  bVar35 = (local_8e4 != 0) * '\x02' | ((lVar33 != 0 && (int)local_930 != 0) && lVar19 != 0) |
           (byte)local_8f0;
  FUN_141595d2e();
  FUN_1448e935e(uVar14,&local_268,&DAT_14c9f4228,bVar35);
  FUN_141595d2e();
  uVar14 = uStack_260;
  puVar7 = (undefined1 *)local_268;
  puVar17 = local_610;
  local_168 = (ulonglong *)0x0;
  local_158 = (ulonglong *)0x0;
  local_308 = local_610;
  FUN_141595e50();
  puVar29 = local_950;
  local_268 = &local_308;
  uStack_260 = (ulonglong *)&local_300;
  FUN_1448f70da(puVar7,&DAT_14c9f6b68,local_950,&local_268);
  local_268 = puVar29;
  uStack_260 = (ulonglong *)puVar7;
  uStack_258 = (ulonglong *)uVar14;
  uStack_250 = puVar17;
  local_248 = local_248 & 0xffffffff00000000;
  local_238 = local_168;
  local_228 = (longlong *)local_158;
  local_158 = (ulonglong *)0x0;
  local_218 = CONCAT44(uStack_144,local_148);
  uStack_210 = uStack_140;
  local_208 = local_138;
  uStack_200 = uStack_130;
  uStack_1fc = uStack_12c;
  if (local_168 != (ulonglong *)0x0) {
    local_168 = (ulonglong *)0x0;
  }
  FUN_141595e50();
  FUN_140069376(param_2);
  puVar17 = local_970;
  if ((param_11 & 4) == 0) {
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_11 & 2) != 0)))))) {
      param_11 = param_11 & 0xfff9 | 4;
    }
    puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar21 = puVar45 + 0x46;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x240);
      puVar45 = (undefined8 *)(*puVar17 + 0xf & 0xfffffffffffffff0);
      puVar21 = puVar45 + 0x46;
    }
    *local_970 = (ulonglong)puVar21;
    local_9b8 = (longlong **)&local_268;
    FUN_14176a1cc(puVar45,&local_308,puVar29,param_11);
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      local_8b8 = param_11 & 0xfffffff9 | 2;
    }
    else if (DAT_14c760ddc == 2 && (param_11 & 2) != 0) {
      local_8b8 = local_8b8 & 0xfffd;
    }
    puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar21 = puVar45 + 0x48;
    if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
      FUN_140023dd8(local_970,0x250);
      puVar45 = (undefined8 *)(*puVar17 + 0xf & 0xfffffffffffffff0);
      puVar21 = puVar45 + 0x48;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar21;
    uVar70 = *(undefined4 *)(param_2 + 0x660);
    local_9b8 = (longlong **)&local_268;
    FUN_14176a1cc(puVar45,&local_308,local_950,local_8b8);
    *puVar45 = &PTR_FUN_14a266510;
    *(undefined4 *)(puVar45 + 0x46) = uVar70;
  }
  puVar21 = local_940;
  iVar11 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar11 + 1U) {
    FUN_14470e57a(local_8f8,iVar11);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar11 * 8) = puVar45;
  *(int *)((longlong)puVar45 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar45);
  if (local_238 != (ulonglong *)0x0) {
    plVar18 = local_228;
    if (local_228 == (longlong *)0x0) {
      plVar18 = &local_218;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (local_168 != (ulonglong *)0x0) {
    puVar29 = local_158;
    if (local_158 == (ulonglong *)0x0) {
      puVar29 = (ulonglong *)&local_148;
    }
    (**(code **)(*puVar29 + 0x10))();
  }
  puVar29 = local_970;
  pwVar34 = L"Lumen.Reflections.SpecularIndirect";
  if (param_8 == 2) {
    pwVar34 = L"Lumen.Reflections.FrontLayer.SpecularIndirect";
  }
  uStack_260 = (ulonglong *)CONCAT44(DAT_14ca83a5c,DAT_14ca83a58);
  uStack_258 = (ulonglong *)CONCAT44(DAT_14ca83a64,DAT_14ca83a60);
  local_268 = (ulonglong *)0x20009;
  uStack_23c = 1;
  uStack_23a = SUB82(puVar21,0);
  uVar48 = DAT_14ca84e40;
  if ((int)(uint)local_2a8 < (int)DAT_14ca84e40) {
    uVar48 = (uint)local_2a8;
  }
  if ((int)uVar48 < 2) {
    uVar48 = 1;
  }
  uVar25 = (uint)((ulonglong)local_2a8 >> 0x20);
  uStack_240 = DAT_14ca84e40;
  if ((int)uVar25 < (int)DAT_14ca84e40) {
    uStack_240 = uVar25;
  }
  local_238 = (ulonglong *)CONCAT26(local_238._6_2_,0xff000a010101);
  uStack_250 = (ulonglong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a68);
  if ((int)uStack_240 < 2) {
    uStack_240 = 1;
  }
  local_248 = (ulonglong)uVar48 << 0x20;
  uVar38 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar27 = uVar38 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar27) {
    FUN_140023dd8(local_970,0x128);
    uVar38 = *puVar29 + 7 & 0xfffffffffffffff8;
    uVar27 = uVar38 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar27;
  FUN_1456bbb8c(uVar38,pwVar34,&local_268,0);
  iVar11 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar11 + 1U) {
    FUN_14472c0f6(local_900,iVar11);
  }
  puVar29 = local_970;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar11 * 8) = uVar38;
  *(int *)(uVar38 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar45 + 0x4c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_970,0x270);
    puVar45 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar45 + 0x4c;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  *puVar45 = &PTR_FUN_14a266548;
  puVar45[2] = 0;
  *(undefined1 *)(puVar45 + 3) = 1;
  puVar45[4] = 0;
  puVar45[5] = 0;
  puVar45[6] = 0;
  puVar45[7] = 0;
  puVar45[8] = 0;
  puVar45[9] = 0;
  puVar45[10] = 0;
  puVar45[0xb] = 0;
  puVar45[0xc] = 0;
  puVar45[0xd] = 0;
  puVar45[0xe] = 0;
  puVar45[0xf] = 0;
  puVar45[0x10] = 0;
  *(undefined1 *)(puVar45 + 0x11) = 1;
  puVar45[0x12] = 0;
  puVar45[0x13] = 0;
  puVar45[0x14] = 0;
  *(undefined1 *)(puVar45 + 0x15) = 1;
  puVar45[0x16] = 0;
  *(undefined1 *)(puVar45 + 0x17) = 1;
  puVar45[0x18] = 0;
  puVar45[0x19] = 0;
  puVar45[0x1a] = 0;
  puVar45[0x1b] = 0;
  puVar45[0x1c] = 0;
  puVar45[0x1d] = 0;
  *(undefined4 *)(puVar45 + 0x1e) = 4;
  puVar45[0x1f] = 0;
  *(undefined4 *)(puVar45 + 0x20) = 4;
  puVar45[0x21] = 0;
  *(undefined4 *)(puVar45 + 0x22) = 4;
  puVar45[0x24] = 0;
  puVar45[0x42] = 0;
  puVar45[0x34] = 0;
  puVar45[0x35] = 0;
  puVar45[0x36] = 0;
  puVar45[0x37] = 0;
  puVar45[0x38] = 0;
  puVar45[0x39] = 0;
  puVar45[0x3a] = 0;
  puVar45[0x3b] = 0;
  puVar45[0x3c] = 0;
  puVar45[0x3d] = 0;
  puVar45[0x3e] = 0;
  puVar45[0x3f] = 0;
  puVar45[0x40] = 0;
  *(undefined1 *)(puVar45 + 0x43) = 1;
  puVar45[0x46] = 0;
  puVar45[0x47] = 0;
  puVar45[0x48] = 0;
  iVar11 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar11 + 1U) {
    FUN_1448cfae8(local_948,iVar11);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar11 * 8) = puVar45;
  local_940 = puVar45 + 2;
  memcpy(puVar45 + 2,&local_858,0x218);
  puVar29 = local_970;
  uVar2 = *(undefined1 *)(uVar38 + 0x94);
  puVar50 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar50 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_970,0x50);
    puVar50 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar50 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  puVar50[1] = *(undefined8 *)(uVar38 + 8);
  puVar50[2] = 0;
  *(undefined1 *)(puVar50 + 3) = 0;
  *(undefined8 *)((longlong)puVar50 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar50 + 5) = 0;
  *puVar50 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar50 + 6) = uVar2;
  *(undefined1 *)(puVar50 + 7) = 0;
  *(undefined4 *)((longlong)puVar50 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar50 + 0x35) = 0;
  puVar50[8] = uVar38;
  iVar11 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar11 + 1U;
  local_958 = (ulonglong *)uVar38;
  if (*(uint *)(param_2 + 0x1a4) < iVar11 + 1U) {
    FUN_1447568fc(local_938,iVar11);
  }
  bVar56 = (int)local_8a8 != 0;
  bVar57 = local_8e4 != 0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar11 * 8) = puVar50;
  *(int *)((longlong)puVar50 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar45[0x46] = puVar50;
  puVar45[0x47] = local_908;
  puVar45[0x48] = local_8d8;
  *(undefined4 *)(puVar45 + 0x49) = DAT_14c7605d4;
  *(undefined4 *)((longlong)puVar45 + 0x24c) = *(undefined4 *)(DAT_14c9f3c28 + 4);
  iVar11 = 0x400;
  if (DAT_14c7605d0 < 0x400) {
    iVar11 = DAT_14c7605d0;
  }
  if (iVar11 < 1) {
    iVar11 = 0;
  }
  *(int *)(puVar45 + 0x4a) = iVar11;
  fVar59 = *(float *)(DAT_14c9f3b00 + 4);
  if (fVar59 <= 1.0) {
    fVar59 = 1.0;
  }
  *(float *)((longlong)puVar45 + 0x254) = (float)(int)fVar59;
  bVar35 = FUN_144ab4f03();
  uVar14 = *(undefined8 *)(local_968 + 0x13818);
  FUN_141596038();
  FUN_1448e935e(uVar14,&local_268,&DAT_14c9f4478,
                (uint)(param_8 == 2) + (uint)bVar57 * 4 + (uint)bVar56 * 2 + (uint)bVar35 * 8);
  FUN_141596038();
  plVar18 = (longlong *)uStack_260;
  uVar14 = local_268;
  puVar29 = local_610;
  local_168 = (ulonglong *)0x0;
  local_158 = (ulonglong *)0x0;
  local_308 = local_610;
  FUN_14159615a();
  puVar21 = local_940;
  local_268 = &local_308;
  uStack_260 = (ulonglong *)&local_300;
  FUN_1448f70da(uVar14,&DAT_14c9f6d00,local_940,&local_268);
  local_268 = puVar21;
  uStack_260 = (ulonglong *)uVar14;
  uStack_258 = (ulonglong *)plVar18;
  uStack_250 = puVar29;
  local_248 = local_248 & 0xffffffff00000000;
  local_238 = local_168;
  local_228 = (longlong *)local_158;
  local_158 = (ulonglong *)0x0;
  local_218 = CONCAT44(uStack_144,local_148);
  uStack_210 = uStack_140;
  local_208 = local_138;
  uStack_200 = uStack_130;
  uStack_1fc = uStack_12c;
  if (local_168 != (ulonglong *)0x0) {
    local_168 = (ulonglong *)0x0;
  }
  FUN_14159615a();
  FUN_140069376(param_2);
  uVar27 = (ulonglong)local_958;
  puVar29 = local_970;
  uVar46 = (undefined6)((ulonglong)uVar14 >> 0x10);
  uVar70 = (undefined4)CONCAT62(uVar46,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar70 = (undefined4)CONCAT62(uVar46,4);
  }
  puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar45 + 0x46;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_970,0x240);
    puVar45 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar45 + 0x46;
  }
  *local_970 = (ulonglong)puVar21;
  local_308 = local_940;
  local_300 = DAT_14c9f6d48;
  if (DAT_14c9f6d48 != 0) {
    LOCK();
    *(int *)(DAT_14c9f6d48 + 8) = *(int *)(DAT_14c9f6d48 + 8) + 1;
    UNLOCK();
  }
  local_2f8 = &DAT_14c9f6d00;
  local_9b8 = (longlong **)CONCAT71(local_9b8._1_7_,2);
  FUN_140068f1a(puVar45,&local_378,&local_308,uVar70);
  plVar18 = local_920;
  *puVar45 = &PTR_FUN_14a266550;
  puVar45[0x38] = local_268;
  puVar45[0x39] = uStack_260;
  puVar45[0x3a] = uStack_258;
  puVar45[0x3b] = uStack_250;
  *(undefined4 *)(puVar45 + 0x3c) = (undefined4)local_248;
  puVar45[0x3e] = local_238;
  puVar45[0x40] = local_228;
  local_228 = (longlong *)0x0;
  *(undefined4 *)(puVar45 + 0x44) = (undefined4)local_208;
  *(undefined4 *)((longlong)puVar45 + 0x224) = local_208._4_4_;
  *(undefined4 *)(puVar45 + 0x45) = uStack_200;
  *(undefined4 *)((longlong)puVar45 + 0x22c) = uStack_1fc;
  *(undefined4 *)(puVar45 + 0x42) = (undefined4)local_218;
  *(undefined4 *)((longlong)puVar45 + 0x214) = local_218._4_4_;
  *(undefined4 *)(puVar45 + 0x43) = (undefined4)uStack_210;
  *(undefined4 *)((longlong)puVar45 + 0x21c) = uStack_210._4_4_;
  if (local_238 != (ulonglong *)0x0) {
    local_238 = (ulonglong *)0x0;
  }
  iVar11 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar11 + 1U) {
    FUN_14470e57a(local_8f8,iVar11);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar11 * 8) = puVar45;
  *(int *)((longlong)puVar45 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar45);
  if (local_238 != (ulonglong *)0x0) {
    plVar40 = &local_218;
    if (local_228 != (longlong *)0x0) {
      plVar40 = local_228;
    }
    (**(code **)(*plVar40 + 0x10))(plVar40);
  }
  piVar22 = local_908;
  lVar15 = local_968;
  if (local_168 != (ulonglong *)0x0) {
    puVar29 = (ulonglong *)&local_148;
    if (local_158 != (ulonglong *)0x0) {
      puVar29 = local_158;
    }
    (**(code **)(*puVar29 + 0x10))();
  }
  if (((char)local_910 == '\0') && ((*(byte *)(lVar15 + 0x125b0) & 1) == 0)) {
    *(undefined4 *)(plVar18 + 4) = *(undefined4 *)(*(longlong *)(lVar15 + 0x3108) + 0x454);
    *(undefined8 *)((longlong)plVar18 + 0x24) = *(undefined8 *)(lVar15 + 0x30f8);
    *(undefined8 *)((longlong)plVar18 + 0x2c) = *(undefined8 *)(lVar15 + 0x3100);
    puVar28 = &DAT_14cb05410;
    if (*(char *)(*(longlong *)(lVar15 + 8) + 0xd0) != '\0') {
      puVar28 = (undefined *)(*(longlong *)(lVar15 + 8) + 0x1b8);
    }
    iVar11 = *(int *)(puVar28 + 0x10);
    iVar26 = *(int *)(puVar28 + 0x14);
    iVar37 = *(int *)(lVar15 + 0x30f8);
    fVar59 = (float)(*(int *)(lVar15 + 0x3100) - iVar37);
    iVar10 = *(int *)(lVar15 + 0x30fc);
    fVar60 = (float)(*(int *)(lVar15 + 0x3104) - iVar10);
    *(float *)(plVar18 + 8) = (1.0 / (float)iVar11) * fVar59 * 0.5;
    *(float *)((longlong)plVar18 + 0x44) = (1.0 / (float)iVar26) * fVar60 * -0.5;
    *(float *)(plVar18 + 9) = ((float)iVar10 + fVar60 * 0.5) * (1.0 / (float)iVar26);
    *(float *)((longlong)plVar18 + 0x4c) = ((float)iVar37 + fVar59 * 0.5) * (1.0 / (float)iVar11);
    fVar59 = 1.0 / (float)*(int *)(local_928 + 0x24);
    fVar60 = 1.0 / (float)*(int *)(local_928 + 0x20);
    iVar11 = *(int *)(lVar15 + 0x3104);
    iVar26 = *(int *)(lVar15 + 0x3100);
    iVar37 = *(int *)(lVar15 + 0x30fc);
    *(float *)(plVar18 + 10) = (float)*(int *)(lVar15 + 0x30f8) * fVar60;
    *(float *)((longlong)plVar18 + 0x54) = (float)iVar37 * fVar59;
    *(float *)(plVar18 + 0xb) = (float)iVar26 * fVar60;
    *(float *)((longlong)plVar18 + 0x5c) = (float)iVar11 * fVar59;
    iVar11 = *(int *)(lVar15 + 0x3104);
    iVar26 = *(int *)(lVar15 + 0x3100);
    iVar37 = *(int *)(lVar15 + 0x30fc);
    *(float *)(plVar18 + 0xc) = ((float)*(int *)(lVar15 + 0x30f8) + 0.51) * fVar60;
    *(float *)((longlong)plVar18 + 100) = ((float)iVar37 + 0.51) * fVar59;
    *(float *)(plVar18 + 0xd) = ((float)iVar26 + -0.51) * fVar60;
    *(float *)((longlong)plVar18 + 0x6c) = ((float)iVar11 + -0.51) * fVar59;
    plVar40 = (longlong *)*plVar18;
    if ((local_8d8 == 0 || piVar22 == (int *)0x0) || (int)local_930 == 0) {
      if (plVar40 != (longlong *)0x0) {
        *plVar18 = 0;
        (**(code **)(*plVar40 + 0x38))();
      }
      plVar40 = (longlong *)plVar18[1];
      if (plVar40 != (longlong *)0x0) {
        plVar18[1] = 0;
        (**(code **)(*plVar40 + 0x38))();
      }
    }
    else {
      if (plVar40 != (longlong *)0x0) {
        *plVar18 = 0;
        (**(code **)(*plVar40 + 0x38))();
      }
      bVar35 = *(byte *)((longlong)piVar22 + 0x24);
      *(byte *)((longlong)piVar22 + 0x24) = bVar35 | 2;
      *(undefined1 *)((longlong)piVar22 + 0x26) = 1;
      plVar40 = (longlong *)(param_2 + 0x1b8);
      iVar11 = *(int *)(param_2 + 0x1c0);
      *(uint *)(param_2 + 0x1c0) = iVar11 + 1U;
      if (*(uint *)(param_2 + 0x1c4) < iVar11 + 1U) {
        FUN_14017e38e(plVar40,iVar11);
      }
      lVar15 = *plVar40;
      *(int **)(lVar15 + (longlong)iVar11 * 0x10) = piVar22;
      *(longlong **)(lVar15 + 8 + (longlong)iVar11 * 0x10) = plVar18;
      if ((bVar35 & 2) == 0) {
        pcVar1 = (char *)(param_2 + 0x4a8);
        LOCK();
        bVar56 = *(char *)(param_2 + 0x4a8) == '\0';
        if (bVar56) {
          *(char *)(param_2 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar56) {
          FUN_1447d2058(pcVar1);
        }
        iVar11 = *(int *)(param_2 + 0x4b8);
        *(uint *)(param_2 + 0x4b8) = iVar11 + 1U;
        if (*(uint *)(param_2 + 0x4bc) < iVar11 + 1U) {
          FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar11);
        }
        lVar15 = *(longlong *)(param_2 + 0x4b0);
        *(undefined8 *)(lVar15 + (longlong)iVar11 * 0x10) = 2;
        *(int **)(lVar15 + 8 + (longlong)iVar11 * 0x10) = local_908;
        LOCK();
        cVar9 = *pcVar1;
        if (cVar9 == '\x01') {
          *pcVar1 = '\0';
        }
        UNLOCK();
        if (cVar9 != '\x01') {
          FUN_14008cdb0(pcVar1);
        }
      }
      plVar16 = (longlong *)plVar18[1];
      if (plVar16 != (longlong *)0x0) {
        plVar18[1] = 0;
        (**(code **)(*plVar16 + 0x38))();
      }
      uVar38 = local_8d8;
      bVar35 = *(byte *)(local_8d8 + 0x24);
      *(byte *)(local_8d8 + 0x24) = bVar35 | 2;
      *(undefined1 *)(local_8d8 + 0x26) = 1;
      iVar11 = *(int *)(param_2 + 0x1c0);
      *(uint *)(param_2 + 0x1c0) = iVar11 + 1U;
      if (*(uint *)(param_2 + 0x1c4) < iVar11 + 1U) {
        FUN_14017e38e(plVar40,iVar11);
      }
      lVar15 = *plVar40;
      *(ulonglong *)(lVar15 + (longlong)iVar11 * 0x10) = uVar38;
      *(longlong **)(lVar15 + 8 + (longlong)iVar11 * 0x10) = plVar18 + 1;
      if ((bVar35 & 2) == 0) {
        pcVar1 = (char *)(param_2 + 0x4a8);
        LOCK();
        bVar56 = *(char *)(param_2 + 0x4a8) == '\0';
        if (bVar56) {
          *(char *)(param_2 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar56) {
          FUN_1447d2058();
        }
        uVar38 = local_8d8;
        iVar11 = *(int *)(param_2 + 0x4b8);
        *(uint *)(param_2 + 0x4b8) = iVar11 + 1U;
        if (*(uint *)(param_2 + 0x4bc) < iVar11 + 1U) {
          FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar11);
        }
        lVar15 = *(longlong *)(param_2 + 0x4b0);
        *(undefined8 *)(lVar15 + (longlong)iVar11 * 0x10) = 2;
        *(ulonglong *)(lVar15 + 8 + (longlong)iVar11 * 0x10) = uVar38;
        LOCK();
        cVar9 = *pcVar1;
        if (cVar9 == '\x01') {
          *pcVar1 = '\0';
        }
        UNLOCK();
        if (cVar9 != '\x01') {
          FUN_14008cdb0(pcVar1);
        }
      }
    }
  }
LAB_142d4793d:
  if ((local_f0[0] ^ (ulonglong)auStack_9d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar27;
}



// FUNCTION 142d49edc FUN_142d49edc body=69 status=ok
// SIG undefined FUN_142d49edc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d49edc(void)

{
  _DAT_14c9f4538 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d49f1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f4540,1);
  return;
}



// FUNCTION 142d49f21 FUN_142d49f21 body=69 status=ok
// SIG undefined FUN_142d49f21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d49f21(void)

{
  _DAT_14c9f4550 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d49f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f4558,1);
  return;
}



// FUNCTION 142d49f66 FUN_142d49f66 body=69 status=ok
// SIG undefined FUN_142d49f66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d49f66(void)

{
  _DAT_14c9f4560 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d49fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f4568,1);
  return;
}



// FUNCTION 142d49fab FUN_142d49fab body=69 status=ok
// SIG undefined FUN_142d49fab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d49fab(void)

{
  _DAT_14c9f4578 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d49fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f4580,1);
  return;
}



// FUNCTION 142d49ff0 FUN_142d49ff0 body=69 status=ok
// SIG undefined FUN_142d49ff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d49ff0(void)

{
  _DAT_14c9f4588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f4590,1);
  return;
}



// FUNCTION 142d4a035 FUN_142d4a035 body=69 status=ok
// SIG undefined FUN_142d4a035(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a035(void)

{
  _DAT_14c9f4598 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f45a0,1);
  return;
}



// FUNCTION 142d4a07a FUN_142d4a07a body=69 status=ok
// SIG undefined FUN_142d4a07a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a07a(void)

{
  _DAT_14c9f45a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f45b0,1);
  return;
}



// FUNCTION 142d4a0bf FUN_142d4a0bf body=69 status=ok
// SIG undefined FUN_142d4a0bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a0bf(void)

{
  _DAT_14c9f45b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a101. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f45c0,1);
  return;
}



// FUNCTION 142d4a104 FUN_142d4a104 body=69 status=ok
// SIG undefined FUN_142d4a104(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a104(void)

{
  _DAT_14c9f45c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f45d0,1);
  return;
}



// FUNCTION 142d4a149 FUN_142d4a149 body=69 status=ok
// SIG undefined FUN_142d4a149(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a149(void)

{
  _DAT_14c9f45d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a18b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f45e0,1);
  return;
}



// FUNCTION 142d4a18e FUN_142d4a18e body=69 status=ok
// SIG undefined FUN_142d4a18e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a18e(void)

{
  _DAT_14c9f45e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f45f0,1);
  return;
}



// FUNCTION 142d4a1d3 FUN_142d4a1d3 body=69 status=ok
// SIG undefined FUN_142d4a1d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a1d3(void)

{
  _DAT_14c9f45f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f4600,1);
  return;
}



// FUNCTION 142d4a218 FUN_142d4a218 body=69 status=ok
// SIG undefined FUN_142d4a218(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a218(void)

{
  _DAT_14c9f4608 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a25a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f4610,1);
  return;
}



// FUNCTION 142d4a25d FUN_142d4a25d body=69 status=ok
// SIG undefined FUN_142d4a25d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a25d(void)

{
  _DAT_14c9f4618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a29f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f4620,1);
  return;
}



// FUNCTION 142d4a2a2 FUN_142d4a2a2 body=69 status=ok
// SIG undefined FUN_142d4a2a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a2a2(void)

{
  _DAT_14c9f4628 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f4630,1);
  return;
}



// FUNCTION 142d4a2e7 FUN_142d4a2e7 body=69 status=ok
// SIG undefined FUN_142d4a2e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a2e7(void)

{
  _DAT_14c9f4638 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f4640,1);
  return;
}



// FUNCTION 142d4a32c FUN_142d4a32c body=69 status=ok
// SIG undefined FUN_142d4a32c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a32c(void)

{
  _DAT_14c9f4650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a36e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f4658,1);
  return;
}



// FUNCTION 142d4a371 FUN_142d4a371 body=69 status=ok
// SIG undefined FUN_142d4a371(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a371(void)

{
  _DAT_14c9f4668 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a3b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f4670,1);
  return;
}



// FUNCTION 142d4a3b6 FUN_142d4a3b6 body=69 status=ok
// SIG undefined FUN_142d4a3b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a3b6(void)

{
  _DAT_14c9f4680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f4688,1);
  return;
}



// FUNCTION 142d4a46f FUN_142d4a46f body=69 status=ok
// SIG undefined FUN_142d4a46f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a46f(void)

{
  _DAT_14c9f5100 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a4b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5108,1);
  return;
}



// FUNCTION 142d4a4b4 FUN_142d4a4b4 body=69 status=ok
// SIG undefined FUN_142d4a4b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a4b4(void)

{
  _DAT_14c9f5118 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a4f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5120,1);
  return;
}



// FUNCTION 142d4a4f9 FUN_142d4a4f9 body=69 status=ok
// SIG undefined FUN_142d4a4f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a4f9(void)

{
  _DAT_14c9f5128 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a53b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5130,1);
  return;
}



// FUNCTION 142d4a53e FUN_142d4a53e body=69 status=ok
// SIG undefined FUN_142d4a53e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a53e(void)

{
  _DAT_14c9f5138 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5140,1);
  return;
}



// FUNCTION 142d4a583 FUN_142d4a583 body=69 status=ok
// SIG undefined FUN_142d4a583(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a583(void)

{
  _DAT_14c9f5150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a5c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5158,1);
  return;
}



// FUNCTION 142d4a5c8 FUN_142d4a5c8 body=69 status=ok
// SIG undefined FUN_142d4a5c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a5c8(void)

{
  _DAT_14c9f5160 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a60a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5168,1);
  return;
}



// FUNCTION 142d4a60d FUN_142d4a60d body=69 status=ok
// SIG undefined FUN_142d4a60d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a60d(void)

{
  _DAT_14c9f5178 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a64f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5180,1);
  return;
}



// FUNCTION 142d4a652 FUN_142d4a652 body=69 status=ok
// SIG undefined FUN_142d4a652(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a652(void)

{
  _DAT_14c9f5188 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5190,1);
  return;
}



// FUNCTION 142d4a697 FUN_142d4a697 body=69 status=ok
// SIG undefined FUN_142d4a697(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a697(void)

{
  _DAT_14c9f5198 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a6d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f51a0,1);
  return;
}



// FUNCTION 142d4a6dc FUN_142d4a6dc body=69 status=ok
// SIG undefined FUN_142d4a6dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a6dc(void)

{
  _DAT_14c9f51a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a71e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f51b0,1);
  return;
}



// FUNCTION 142d4a721 FUN_142d4a721 body=69 status=ok
// SIG undefined FUN_142d4a721(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a721(void)

{
  _DAT_14c9f51b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f51c0,1);
  return;
}



// FUNCTION 142d4a766 FUN_142d4a766 body=69 status=ok
// SIG undefined FUN_142d4a766(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a766(void)

{
  _DAT_14c9f51c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f51d0,1);
  return;
}



// FUNCTION 142d4a7ab FUN_142d4a7ab body=69 status=ok
// SIG undefined FUN_142d4a7ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a7ab(void)

{
  _DAT_14c9f51d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a7ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f51e0,1);
  return;
}



// FUNCTION 142d4a7f0 FUN_142d4a7f0 body=69 status=ok
// SIG undefined FUN_142d4a7f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a7f0(void)

{
  _DAT_14c9f51e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f51f0,1);
  return;
}



// FUNCTION 142d4a835 FUN_142d4a835 body=69 status=ok
// SIG undefined FUN_142d4a835(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a835(void)

{
  _DAT_14c9f51f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5200,1);
  return;
}



// FUNCTION 142d4a87a FUN_142d4a87a body=69 status=ok
// SIG undefined FUN_142d4a87a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a87a(void)

{
  _DAT_14c9f5208 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5210,1);
  return;
}



// FUNCTION 142d4a8bf FUN_142d4a8bf body=69 status=ok
// SIG undefined FUN_142d4a8bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a8bf(void)

{
  _DAT_14c9f5218 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5220,1);
  return;
}



// FUNCTION 142d4a904 FUN_142d4a904 body=69 status=ok
// SIG undefined FUN_142d4a904(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a904(void)

{
  _DAT_14c9f5228 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5230,1);
  return;
}



// FUNCTION 142d4a949 FUN_142d4a949 body=69 status=ok
// SIG undefined FUN_142d4a949(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a949(void)

{
  _DAT_14c9f5238 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a98b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5240,1);
  return;
}



// FUNCTION 142d4a98e FUN_142d4a98e body=69 status=ok
// SIG undefined FUN_142d4a98e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a98e(void)

{
  _DAT_14c9f5250 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4a9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5258,1);
  return;
}



// FUNCTION 142d4a9d3 FUN_142d4a9d3 body=69 status=ok
// SIG undefined FUN_142d4a9d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4a9d3(void)

{
  _DAT_14c9f5260 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4aa15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5268,1);
  return;
}



// FUNCTION 142d4aa18 FUN_142d4aa18 body=69 status=ok
// SIG undefined FUN_142d4aa18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4aa18(void)

{
  _DAT_14c9f5270 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4aa5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5278,1);
  return;
}



// FUNCTION 142d4aa5d FUN_142d4aa5d body=69 status=ok
// SIG undefined FUN_142d4aa5d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4aa5d(void)

{
  _DAT_14c9f5280 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4aa9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5288,1);
  return;
}



// FUNCTION 142d4aaa2 FUN_142d4aaa2 body=69 status=ok
// SIG undefined FUN_142d4aaa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4aaa2(void)

{
  _DAT_14c9f5290 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f5298,1);
  return;
}



// FUNCTION 142d4aae7 FUN_142d4aae7 body=69 status=ok
// SIG undefined FUN_142d4aae7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4aae7(void)

{
  _DAT_14c9f52a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4ab29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f52a8,1);
  return;
}



// FUNCTION 142d4ab2c FUN_142d4ab2c body=69 status=ok
// SIG undefined FUN_142d4ab2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4ab2c(void)

{
  _DAT_14c9f52b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4ab6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f52b8,1);
  return;
}



// FUNCTION 142d4ab71 FUN_142d4ab71 body=69 status=ok
// SIG undefined FUN_142d4ab71(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4ab71(void)

{
  _DAT_14c9f52c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4abb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f52c8,1);
  return;
}



// FUNCTION 142d4abb6 FUN_142d4abb6 body=69 status=ok
// SIG undefined FUN_142d4abb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4abb6(void)

{
  _DAT_14c9f52d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4abf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f52d8,1);
  return;
}



// FUNCTION 142d4abfb FUN_142d4abfb body=69 status=ok
// SIG undefined FUN_142d4abfb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4abfb(void)

{
  _DAT_14c9f52e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4ac3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f52e8,1);
  return;
}



// FUNCTION 142d4ac40 FUN_142d4ac40 body=69 status=ok
// SIG undefined FUN_142d4ac40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4ac40(void)

{
  _DAT_14c9f52f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4ac82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9f52f8,1);
  return;
}



// FUNCTION 142d4ac85 FUN_142d4ac85 body=393 status=ok
// SIG undefined FUN_142d4ac85(void)

undefined8 FUN_142d4ac85(undefined8 param_1,short param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97070) {
    FUN_144b3d300(&DAT_14ca97070);
    if (DAT_14ca97070 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
  }
  lVar1 = DAT_14ca97068;
  bVar7 = true;
  cVar2 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
      cVar2 = '\x02';
    }
    else {
      uVar5 = FUN_144a61b4f();
      uVar5 = (uVar5 ^ 1) & 0xff;
      cVar2 = DAT_14ca96da8;
    }
    bVar7 = *(int *)(lVar1 + uVar5 * 4) != 0;
  }
  if ((bVar7) && (cVar2 != '\0')) {
    cVar2 = FUN_141767a62(param_1);
    lVar1 = DAT_14c9f5110;
    if (cVar2 != '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar5 = 0;
      }
      else {
        bVar3 = FUN_144a61b4f();
        uVar5 = (ulonglong)(bVar3 ^ 1);
      }
      if ((param_2 == 0x31) && (*(int *)(lVar1 + uVar5 * 4) != 0)) {
        uVar6 = FUN_144880847(0x31,0);
        return uVar6;
      }
    }
  }
  return 0;
}



// FUNCTION 142d4ae6e FUN_142d4ae6e body=22151 status=ok
// SIG undefined FUN_142d4ae6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_142d4ae6e(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,longlong param_5
             ,int *param_6,longlong param_7,undefined8 param_8,undefined2 param_9,int *param_10)

{
  ulonglong *puVar1;
  char *pcVar2;
  byte bVar3;
  undefined1 uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  int iVar19;
  ulonglong uVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  undefined4 uVar26;
  undefined6 uVar28;
  undefined8 *puVar27;
  longlong *plVar29;
  undefined8 *puVar30;
  uint uVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  short sVar35;
  ulonglong uVar36;
  bool bVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_578 [32];
  longlong *local_558;
  int *local_550;
  undefined1 *local_548;
  undefined4 local_540;
  undefined4 local_538;
  undefined2 local_530;
  longlong local_528;
  longlong *local_520;
  ulonglong *local_518;
  ulonglong local_510;
  longlong *local_508;
  longlong *local_500;
  longlong local_4f8;
  longlong *local_4f0;
  ulonglong *local_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  longlong *local_4d0;
  longlong local_4c8;
  longlong *local_4c0;
  longlong local_4b8;
  ulonglong local_4b0;
  longlong local_4a8;
  longlong *local_4a0;
  uint local_494;
  ulonglong local_490;
  longlong local_488;
  longlong local_480;
  undefined8 *local_478;
  longlong *local_470;
  undefined8 *local_468;
  undefined8 *local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  longlong *local_438;
  undefined8 local_430;
  longlong local_428;
  longlong local_420;
  int local_414;
  int local_410;
  undefined4 local_40c;
  int local_408;
  int local_404;
  undefined4 local_400;
  int local_3fc;
  int local_3f8;
  undefined4 local_3f4;
  int local_3f0;
  int local_3ec;
  undefined4 local_3e8;
  int local_3e4;
  int local_3e0;
  undefined4 local_3dc;
  undefined1 local_3d8 [96];
  undefined8 local_378;
  undefined1 local_369;
  int local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined1 local_358 [48];
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined8 *local_308;
  longlong lStack_300;
  undefined4 local_2f8;
  int local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  longlong lStack_2a0;
  longlong local_298;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  uint uStack_26c;
  longlong local_268;
  uint local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined1 local_250;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  ulonglong local_188;
  ulonglong uStack_180;
  int local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  float local_15c;
  undefined4 local_158;
  int local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 *local_e8;
  char local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined4 local_b8;
  uint uStack_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined4 local_a6;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_578;
  local_528 = param_3;
  local_500 = param_4;
  local_4d0 = param_2;
  local_4a8 = param_1;
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(&local_288,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp"
                  ,0x66);
    DAT_14c760a84 = FUN_145d12cf0(&local_288);
    if (local_288 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar25 = local_500;
  lVar16 = local_528;
  if ((DAT_14c760a84 < *(int *)(local_528 + 0x130)) &&
     (local_480 = *(longlong *)(*(longlong *)(local_528 + 0x128) + (longlong)DAT_14c760a84 * 8),
     local_480 != 0)) {
    local_480 = local_480 + 8;
  }
  else {
    local_480 = 0;
  }
  FUN_1448e94e7(local_3d8,local_528,local_500[0x33]);
  local_e8 = (undefined8 *)0x0;
  local_188 = 0;
  uStack_180 = 0;
  local_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  local_108 = (undefined *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  local_e0 = 1;
  local_178 = DAT_14c760604;
  lVar13 = (longlong)((int)((ulonglong)plVar25[4] >> 0x20) + DAT_14c760604 + -1) /
           (longlong)DAT_14c760604;
  uVar23 = (longlong)(DAT_14c760604 + (int)plVar25[4] + -1) / (longlong)DAT_14c760604;
  local_170 = (longlong)
              ((DAT_14c760604 + -1 + *(int *)(param_7 + 0x3100)) - *(int *)(param_7 + 0x30f8)) /
              (longlong)DAT_14c760604 & 0xffffffffU |
              (longlong)
              ((*(int *)(param_7 + 0x3104) + DAT_14c760604 + -1) - *(int *)(param_7 + 0x30fc)) /
              (longlong)DAT_14c760604 << 0x20;
  lVar11 = (uVar23 & 0xffffffff) + (lVar13 << 0x20);
  local_160 = DAT_14c760608;
  local_168 = lVar11;
  local_15c = cosf((DAT_14c760624 * 3.1415927) / 180.0);
  local_158 = DAT_14c760628;
  local_4c8 = lVar11;
  FUN_1471f0c36(&local_288,lVar16,param_5,lVar11);
  local_128 = local_268;
  uStack_130 = CONCAT44(uStack_26c,uStack_270);
  local_148 = (int)local_288;
  uStack_144 = local_288._4_4_;
  uStack_140 = uStack_280;
  uStack_13c = uStack_27c;
  FUN_1471f0f7b(&local_288,lVar16,&local_148);
  local_f8 = local_268;
  local_108 = local_278;
  local_118 = local_288;
  uStack_110 = CONCAT44(uStack_27c,uStack_280);
  uVar22 = *(ulonglong *)(param_5 + 0x370);
  uVar31 = (uint)uVar23;
  uVar34 = (uint)lVar13;
  if (uVar22 == 0) {
    uStack_26c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_258 = CONCAT26(local_258._6_2_,0xff000d000000);
    local_288 = (undefined8 *)&DAT_00020008;
    local_25c = 0x10001;
    local_258 = CONCAT62(local_258._2_6_,0x101);
    uStack_280 = DAT_14ca83a30;
    uStack_27c = DAT_14ca83a34;
    local_278 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    uStack_270 = DAT_14ca83a40;
    uVar33 = DAT_14ca84e40;
    if ((int)uVar31 < (int)DAT_14ca84e40) {
      uVar33 = uVar31;
    }
    if ((int)uVar33 < 2) {
      uVar33 = 1;
    }
    local_260 = DAT_14ca84e40;
    if ((int)uVar34 < (int)DAT_14ca84e40) {
      local_260 = uVar34;
    }
    if ((int)local_260 < 2) {
      local_260 = 1;
    }
    local_268 = (ulonglong)uVar33 << 0x20;
    uVar22 = *(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar23 = uVar22 + 0x120;
    if (*(ulonglong *)(lVar16 + 0x78) < uVar23) {
      FUN_140023dd8((longlong *)(lVar16 + 0x70),0x128);
      uVar22 = *(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar23 = uVar22 + 0x120;
    }
    *(ulonglong *)(lVar16 + 0x70) = uVar23;
    FUN_1456bbb8c(uVar22,L"Lumen.ReSTIRGather.DownsampledSceneDepth",&local_288,0);
    iVar7 = *(int *)(lVar16 + 0x180);
    *(uint *)(lVar16 + 0x180) = iVar7 + 1U;
    if (*(uint *)(lVar16 + 0x184) < iVar7 + 1U) {
      FUN_14472c0f6(lVar16 + 0x178,iVar7);
    }
    *(ulonglong *)(*(longlong *)(lVar16 + 0x178) + (longlong)iVar7 * 8) = uVar22;
    *(int *)(uVar22 + 0x9c) = *(int *)(lVar16 + 0x180) + -1;
    *(ulonglong *)(param_5 + 0x370) = uVar22;
  }
  uVar23 = *(ulonglong *)(param_5 + 0x378);
  local_188 = uVar22;
  if (uVar23 == 0) {
    local_258 = CONCAT26(local_258._6_2_,0xff0012000000);
    local_288 = (undefined8 *)&DAT_00020008;
    local_25c = 0x10001;
    local_258 = CONCAT62(local_258._2_6_,0x101);
    if ((int)DAT_14ca84e40 <= (int)uVar31) {
      uVar31 = DAT_14ca84e40;
    }
    if ((int)uVar31 < 2) {
      uVar31 = 1;
    }
    uStack_270 = DAT_14ca83a40;
    local_260 = DAT_14ca84e40;
    if ((int)uVar34 < (int)DAT_14ca84e40) {
      local_260 = uVar34;
    }
    uStack_26c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uStack_280 = DAT_14ca83a30;
    uStack_27c = DAT_14ca83a34;
    local_278 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    if ((int)local_260 < 2) {
      local_260 = 1;
    }
    local_268 = (ulonglong)uVar31 << 0x20;
    uVar23 = *(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar22 = uVar23 + 0x120;
    if (*(ulonglong *)(lVar16 + 0x78) < uVar22) {
      FUN_140023dd8((longlong *)(lVar16 + 0x70),0x128);
      uVar23 = *(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar22 = uVar23 + 0x120;
    }
    *(ulonglong *)(lVar16 + 0x70) = uVar22;
    FUN_1456bbb8c(uVar23,L"Lumen.ReSTIRGather.DownsampledWorldNormal",&local_288,0);
    iVar7 = *(int *)(lVar16 + 0x180);
    *(uint *)(lVar16 + 0x180) = iVar7 + 1U;
    if (*(uint *)(lVar16 + 0x184) < iVar7 + 1U) {
      FUN_14472c0f6(lVar16 + 0x178,iVar7);
    }
    *(ulonglong *)(*(longlong *)(lVar16 + 0x178) + (longlong)iVar7 * 8) = uVar23;
    *(int *)(uVar23 + 0x9c) = *(int *)(lVar16 + 0x180) + -1;
    *(ulonglong *)(param_5 + 0x378) = uVar23;
  }
  uStack_180 = uVar23;
  FUN_1448a862c(local_358);
  FUN_14019e00e(&local_288,local_358,1,1);
  lVar11 = FUN_1448a8484();
  puVar18 = local_288;
  local_e0 = '\x02';
  if (*(char *)(lVar11 + 0x41) != '\x03') {
    local_e0 = *(char *)(lVar11 + 0x41);
  }
  local_e8 = local_288;
  if (local_288 != (undefined8 *)0x0) {
    LOCK();
    puVar21 = (uint *)(local_288 + 1);
    uVar31 = *puVar21;
    *puVar21 = *puVar21 - 1;
    UNLOCK();
    if ((uVar31 & 0x3fffffff) == 1) {
      puVar21 = (uint *)(local_288 + 1);
      LOCK();
      uVar31 = *puVar21;
      *puVar21 = *puVar21 | 0x40000000;
      UNLOCK();
      if ((uVar31 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)((longlong)local_288 + 0xd);
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = (longlong)puVar18;
        plVar25 = DAT_14ca843c0;
        plVar17 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar25;
            LOCK();
            bVar37 = plVar25 != DAT_14ca843c0;
            plVar17 = plVar12;
            if (bVar37) {
              plVar25 = DAT_14ca843c0;
              plVar17 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar17;
            UNLOCK();
          } while (bVar37);
        }
        else {
          do {
            *plVar12 = (longlong)plVar17;
            LOCK();
            bVar37 = plVar17 != DAT_14ca843c8;
            plVar25 = plVar12;
            if (bVar37) {
              plVar17 = DAT_14ca843c8;
              plVar25 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar25;
            UNLOCK();
          } while (bVar37);
        }
      }
    }
  }
  local_288 = (undefined8 *)0x0;
  uStack_280 = CONCAT31(uStack_280._1_3_,1);
  local_278 = (undefined *)0x0;
  uStack_270 = CONCAT31(uStack_270._1_3_,1);
  local_268 = 0;
  local_260 = CONCAT31(local_260._1_3_,1);
  local_258 = 0;
  local_250 = 1;
  local_228 = 0;
  local_220 = 1;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  lVar11 = *(longlong *)(param_7 + 0x13ad8);
  if (lVar11 == 0) {
    uVar31 = *(uint *)(param_7 + 0x1de0);
    iVar7 = 0x20;
    if ((uVar31 != 0) && (iVar7 = 0, uVar31 != 0)) {
      for (; (uVar31 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
      }
    }
    uVar26 = 0;
    if (*(longlong *)(param_7 + 0x3108) != 0) {
      uVar26 = *(undefined4 *)(*(longlong *)(param_7 + 0x3108) + 0x24);
    }
    lVar11 = FUN_140c6b718(*(undefined8 *)(local_4a8 + 8),uVar26,iVar7);
  }
  local_558 = (longlong *)((ulonglong)local_558 & 0xffffffffffffff00);
  local_550 = (int *)&local_288;
  FUN_142db26c6(lVar16,param_7,lVar11,param_5);
  lVar16 = *(longlong *)(param_7 + 0x3108);
  uVar28 = (undefined6)((ulonglong)param_7 >> 0x10);
  if ((((0 < (int)DAT_14c9f5148 && lVar16 != 0) && (*(uint *)(lVar16 + 0x6e0) % DAT_14c9f5148 == 0))
      && (*(longlong *)(lVar16 + 0x1960) != 0)) &&
     (((int)local_168 == *(int *)(lVar16 + 0x1958) && (local_168._4_4_ == *(int *)(lVar16 + 0x195c))
      ))) {
    puVar1 = (ulonglong *)(local_528 + 0x70);
    puVar27 = (undefined8 *)(*(longlong *)(local_528 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar18 = puVar27 + 100;
    local_4e8 = puVar1;
    if (*(undefined8 **)(local_528 + 0x78) < puVar18) {
      FUN_140023dd8(puVar1,0x330);
      puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar18 = puVar27 + 100;
    }
    lVar11 = local_528;
    *(undefined8 **)(local_528 + 0x70) = puVar18;
    *puVar27 = &PTR_FUN_14a2667e8;
    local_520 = puVar27 + 2;
    FUN_147201110();
    iVar7 = *(int *)(lVar11 + 0xa0);
    *(uint *)(lVar11 + 0xa0) = iVar7 + 1U;
    if (*(uint *)(lVar11 + 0xa4) < iVar7 + 1U) {
      FUN_1448cfae8(lVar11 + 0x98,iVar7);
    }
    *(undefined8 **)(*(longlong *)(lVar11 + 0x98) + (longlong)iVar7 * 8) = puVar27;
    local_558 = local_520;
    FUN_1471dcd84(lVar11,local_3d8,param_7,&local_288);
    lVar13 = FUN_14473c272(lVar11,lVar16 + 0x1968,0);
    puVar1 = local_4e8;
    uVar4 = *(undefined1 *)(lVar13 + 0x94);
    puVar30 = (undefined8 *)(*(longlong *)(lVar11 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar30 + 9;
    if (*(undefined8 **)(lVar11 + 0x78) < puVar18) {
      FUN_140023dd8(local_4e8,0x50);
      puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar30 + 9;
    }
    *(undefined8 **)(lVar11 + 0x70) = puVar18;
    puVar30[1] = *(undefined8 *)(lVar13 + 8);
    puVar30[2] = 0;
    *(undefined1 *)(puVar30 + 3) = 0;
    *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar30 + 5) = 0;
    *puVar30 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar30 + 6) = uVar4;
    *(undefined1 *)(puVar30 + 7) = 0;
    *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
    puVar30[8] = lVar13;
    iVar7 = *(int *)(lVar11 + 0x1a0);
    *(uint *)(lVar11 + 0x1a0) = iVar7 + 1U;
    if (*(uint *)(lVar11 + 0x1a4) < iVar7 + 1U) {
      FUN_1447568fc(lVar11 + 0x198,iVar7);
    }
    *(undefined8 **)(*(longlong *)(lVar11 + 0x198) + (longlong)iVar7 * 8) = puVar30;
    *(int *)((longlong)puVar30 + 0x1c) = *(int *)(lVar11 + 0x1a0) + -1;
    puVar27[0x56] = puVar30;
    local_518 = (ulonglong *)(lVar11 + 0x198);
    lVar13 = FUN_14473c272(lVar11,lVar16 + 0x1980,0);
    puVar1 = local_4e8;
    uVar4 = *(undefined1 *)(lVar13 + 0x94);
    puVar30 = (undefined8 *)(*(longlong *)(lVar11 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar30 + 9;
    if (*(undefined8 **)(lVar11 + 0x78) < puVar18) {
      FUN_140023dd8(local_4e8,0x50);
      puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar30 + 9;
    }
    *(undefined8 **)(lVar11 + 0x70) = puVar18;
    puVar30[1] = *(undefined8 *)(lVar13 + 8);
    puVar30[2] = 0;
    *(undefined1 *)(puVar30 + 3) = 0;
    *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar30 + 5) = 0;
    *puVar30 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar30 + 6) = uVar4;
    *(undefined1 *)(puVar30 + 7) = 0;
    *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
    puVar30[8] = lVar13;
    iVar7 = *(int *)(lVar11 + 0x1a0);
    *(uint *)(lVar11 + 0x1a0) = iVar7 + 1U;
    if (*(uint *)(lVar11 + 0x1a4) < iVar7 + 1U) {
      FUN_1447568fc(local_518,iVar7);
    }
    *(undefined8 **)(*(longlong *)(lVar11 + 0x198) + (longlong)iVar7 * 8) = puVar30;
    *(int *)((longlong)puVar30 + 0x1c) = *(int *)(lVar11 + 0x1a0) + -1;
    puVar27[0x57] = puVar30;
    uVar14 = FUN_14473c272(lVar11,lVar16 + 0x1960,0);
    puVar27[0x58] = uVar14;
    uVar14 = FUN_14473c272(lVar11,lVar16 + 0x1970,0);
    puVar27[0x59] = uVar14;
    uVar14 = FUN_14473c272(lVar11,lVar16 + 0x1978,0);
    puVar27[0x5a] = uVar14;
    puVar18 = puVar27 + 0x40;
    memcpy(puVar18,&local_188,0xb0);
    uVar14 = *(undefined8 *)(lVar16 + 0x1948);
    puVar27[0x5c] = *(undefined8 *)(lVar16 + 0x1940);
    puVar27[0x5d] = uVar14;
    puVar27[0x5e] = *(undefined8 *)(lVar16 + 0x1950);
    *(float *)(puVar27 + 0x5f) = *(float *)(param_7 + 0x13694) / *(float *)(param_7 + 0x13170);
    if (*(longlong *)(lVar16 + 0x1988) == 0) {
      uVar14 = *puVar18;
    }
    else {
      uVar14 = FUN_14473c272(lVar11,lVar16 + 0x1988,0);
    }
    puVar27[0x60] = uVar14;
    if (*(longlong *)(lVar16 + 0x1990) == 0) {
      uVar14 = puVar27[0x41];
    }
    else {
      uVar14 = FUN_14473c272(local_528,lVar16 + 0x1990,0);
    }
    puVar27[0x61] = uVar14;
    memcpy(puVar18,&local_188,0xb0);
    *(undefined4 *)(puVar27 + 0x62) = *(undefined4 *)(DAT_14c9ed398 + 4);
    *(undefined4 *)((longlong)puVar27 + 0x314) = 1;
    fVar38 = *(float *)(param_7 + 0x291c) * _DAT_14c7604b4;
    if (1048576.0 <= fVar38) {
      fVar38 = 1048576.0;
    }
    if (fVar38 <= 0.01) {
      fVar38 = 0.01;
    }
    *(float *)(puVar27 + 99) = fVar38;
    *(undefined4 *)((longlong)puVar27 + 0x31c) = DAT_14c760630;
    cVar6 = '\0';
    bVar37 = true;
    if ((DAT_14ca84ef5 == '\x01') && (cVar6 = '\0', (DAT_14ca84ef7 & 1) != 0)) {
      cVar6 = '\x02';
      iVar7 = FUN_142d11e9a(param_7,2);
      if (iVar7 == 0) {
        bVar37 = *(int *)(DAT_14c9f3668 + 4) == 0;
        cVar6 = !bVar37 * '\x02';
      }
      else {
        bVar37 = false;
      }
    }
    uVar14 = *(undefined8 *)(param_7 + 0x13818);
    FUN_145f2ecbc();
    FUN_1448e935e(uVar14,&local_d8,&DAT_14c9f5368,cVar6);
    FUN_145f2ecbc();
    lVar11 = (longlong)uStack_d0;
    puVar18 = local_d8;
    uVar14 = *(undefined8 *)(lVar16 + 0x1950);
    FUN_145f2ef2a();
    local_d8 = (undefined8 *)0x0;
    uStack_d0 = (undefined8 *)0x0;
    FUN_1448f70da(puVar18,&DAT_14c9f72d8,local_520,&local_d8);
    uVar15 = (**(code **)(**(longlong **)(*(longlong *)(param_7 + 8) + 0x178) + 8))();
    lVar16 = local_528;
    uVar15 = FUN_1472e1976(uVar15,local_528);
    FUN_145f2ef2a();
    FUN_140069376(lVar16);
    puVar1 = local_4e8;
    uVar26 = (undefined4)CONCAT62(uVar28,2);
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar26 = (undefined4)CONCAT62(uVar28,4);
    }
    puVar30 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar27 = puVar30 + 0x3e;
    if (*(undefined8 **)(lVar16 + 0x78) < puVar27) {
      FUN_140023dd8(local_4e8,0x1f8);
      puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar27 = puVar30 + 0x3e;
    }
    *local_4e8 = (ulonglong)puVar27;
    local_d8 = local_520;
    uStack_d0 = (undefined8 *)DAT_14c9f7320;
    if (DAT_14c9f7320 != 0) {
      LOCK();
      *(int *)(DAT_14c9f7320 + 8) = *(int *)(DAT_14c9f7320 + 8) + 1;
      UNLOCK();
    }
    local_c8 = &DAT_14c9f72d8;
    local_558 = (longlong *)CONCAT71(local_558._1_7_,2);
    FUN_140068f1a(puVar30,&local_2e8,&local_d8,uVar26);
    lVar16 = local_528;
    *puVar30 = &PTR_FUN_14a2667b0;
    puVar30[0x37] = local_520;
    puVar30[0x38] = param_7;
    puVar30[0x39] = uVar15;
    puVar30[0x3a] = puVar18;
    puVar30[0x3b] = lVar11;
    *(bool *)(puVar30 + 0x3c) = bVar37;
    *(undefined2 *)((longlong)puVar30 + 0x1e1) = (undefined2)local_2b8;
    *(undefined1 *)((longlong)puVar30 + 0x1e3) = local_2b8._2_1_;
    *(undefined8 *)((longlong)puVar30 + 0x1e4) = uVar14;
    iVar7 = *(int *)(local_528 + 0x170);
    *(uint *)(local_528 + 0x170) = iVar7 + 1U;
    if (*(uint *)(local_528 + 0x174) < iVar7 + 1U) {
      FUN_14470e57a(local_528 + 0x168,iVar7);
    }
    *(undefined8 **)(*(longlong *)(lVar16 + 0x168) + (longlong)iVar7 * 8) = puVar30;
    *(int *)((longlong)puVar30 + 0x2c) = *(int *)(lVar16 + 0x170) + -1;
    FUN_140069100(lVar16,puVar30);
  }
  lVar16 = local_528;
  puVar1 = (ulonglong *)(local_528 + 0x70);
  puVar27 = (undefined8 *)(*(longlong *)(local_528 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar18 = puVar27 + 0x5a;
  local_518 = puVar1;
  if (*(undefined8 **)(local_528 + 0x78) < puVar18) {
    FUN_140023dd8(puVar1,0x2e0);
    puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar18 = puVar27 + 0x5a;
  }
  *(undefined8 **)(lVar16 + 0x70) = puVar18;
  *puVar27 = &PTR_FUN_14a2667f0;
  puVar18 = puVar27 + 2;
  FUN_1471fd1d2(puVar18);
  puVar27[0x54] = 0;
  puVar27[0x40] = 0;
  puVar27[0x41] = 0;
  puVar27[0x48] = 0;
  puVar27[0x49] = 0;
  puVar27[0x4a] = 0;
  puVar27[0x4b] = 0;
  puVar27[0x4c] = 0;
  puVar27[0x4e] = 0;
  puVar27[0x4f] = 0;
  puVar27[0x50] = 0;
  puVar27[0x51] = 0;
  puVar27[0x52] = 0;
  *(undefined1 *)(puVar27 + 0x55) = 1;
  local_4b8 = lVar16 + 0x98;
  puVar27[0x56] = 0;
  puVar27[0x57] = 0;
  iVar7 = *(int *)(lVar16 + 0xa0);
  *(uint *)(lVar16 + 0xa0) = iVar7 + 1U;
  if (*(uint *)(lVar16 + 0xa4) < iVar7 + 1U) {
    FUN_1448cfae8(local_4b8,iVar7);
  }
  *(undefined8 **)(*(longlong *)(lVar16 + 0x98) + (longlong)iVar7 * 8) = puVar27;
  local_558 = puVar18;
  FUN_1471dcd84(lVar16,local_3d8,param_7,&local_288);
  uVar22 = local_188;
  puVar1 = local_518;
  uVar4 = *(undefined1 *)(local_188 + 0x94);
  puVar24 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar30 = puVar24 + 9;
  if (*(undefined8 **)(lVar16 + 0x78) < puVar30) {
    FUN_140023dd8(local_518,0x50);
    puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar30 = puVar24 + 9;
  }
  local_4e0 = lVar16 + 0x198;
  *(undefined8 **)(lVar16 + 0x70) = puVar30;
  puVar24[1] = *(undefined8 *)(uVar22 + 8);
  puVar24[2] = 0;
  *(undefined1 *)(puVar24 + 3) = 0;
  *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar24 + 5) = 0;
  *puVar24 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar24 + 6) = uVar4;
  *(undefined1 *)(puVar24 + 7) = 0;
  *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
  puVar24[8] = uVar22;
  iVar7 = *(int *)(lVar16 + 0x1a0);
  *(uint *)(lVar16 + 0x1a0) = iVar7 + 1U;
  if (*(uint *)(lVar16 + 0x1a4) < iVar7 + 1U) {
    FUN_1447568fc(local_4e0,iVar7);
  }
  uVar22 = uStack_180;
  puVar1 = local_518;
  *(undefined8 **)(*(longlong *)(lVar16 + 0x198) + (longlong)iVar7 * 8) = puVar24;
  *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar16 + 0x1a0) + -1;
  puVar27[0x56] = puVar24;
  uVar4 = *(undefined1 *)(uStack_180 + 0x94);
  puVar24 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar30 = puVar24 + 9;
  if (*(undefined8 **)(lVar16 + 0x78) < puVar30) {
    FUN_140023dd8(local_518,0x50);
    puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar30 = puVar24 + 9;
  }
  *(undefined8 **)(lVar16 + 0x70) = puVar30;
  puVar24[1] = *(undefined8 *)(uVar22 + 8);
  puVar24[2] = 0;
  *(undefined1 *)(puVar24 + 3) = 0;
  *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar24 + 5) = 0;
  *puVar24 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar24 + 6) = uVar4;
  *(undefined1 *)(puVar24 + 7) = 0;
  *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
  puVar24[8] = uVar22;
  iVar7 = *(int *)(lVar16 + 0x1a0);
  *(uint *)(lVar16 + 0x1a0) = iVar7 + 1U;
  if (*(uint *)(lVar16 + 0x1a4) < iVar7 + 1U) {
    FUN_1447568fc(local_4e0,iVar7);
  }
  *(undefined8 **)(*(longlong *)(lVar16 + 0x198) + (longlong)iVar7 * 8) = puVar24;
  *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar16 + 0x1a0) + -1;
  puVar27[0x57] = puVar24;
  memcpy(puVar27 + 0x40,&local_188,0xb0);
  *(undefined4 *)(puVar27 + 0x58) = *(undefined4 *)(DAT_14c9ed398 + 4);
  *(undefined4 *)((longlong)puVar27 + 0x2c4) = 1;
  fVar38 = *(float *)(param_7 + 0x291c) * _DAT_14c7604b4;
  if (1048576.0 <= fVar38) {
    fVar38 = 1048576.0;
  }
  if (fVar38 <= 0.01) {
    fVar38 = 0.01;
  }
  *(float *)(puVar27 + 0x59) = fVar38;
  *(undefined4 *)((longlong)puVar27 + 0x2cc) = DAT_14c760630;
  bVar37 = true;
  cVar6 = '\0';
  if ((DAT_14ca84ef5 == '\x01') && (cVar6 = '\0', (DAT_14ca84ef7 & 1) != 0)) {
    cVar6 = '\x02';
    iVar7 = FUN_142d11e9a(param_7,2);
    if (iVar7 == 0) {
      bVar37 = *(int *)(DAT_14c9f3668 + 4) == 0;
      cVar6 = !bVar37 * '\x02';
    }
    else {
      bVar37 = false;
    }
  }
  uVar14 = *(undefined8 *)(param_7 + 0x13818);
  FUN_145f4c00e();
  FUN_1448e935e(uVar14,&local_d8,&DAT_14c9f5490,cVar6);
  FUN_145f4c00e();
  lVar11 = (longlong)uStack_d0;
  puVar27 = local_d8;
  uVar22 = local_170;
  FUN_145f4c27c();
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = (undefined8 *)0x0;
  FUN_1448f70da(puVar27,&DAT_14c9f74f8,puVar18,&local_d8);
  uVar14 = (**(code **)(**(longlong **)(*(longlong *)(param_7 + 8) + 0x178) + 8))();
  lVar16 = local_528;
  uVar14 = FUN_1472e1976(uVar14,local_528);
  FUN_145f4c27c();
  FUN_140069376(lVar16);
  puVar1 = local_518;
  uVar26 = (undefined4)CONCAT62(uVar28,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar26 = (undefined4)CONCAT62(uVar28,4);
  }
  puVar24 = (undefined8 *)(*(longlong *)(local_528 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar30 = puVar24 + 0x3e;
  if (*(undefined8 **)(local_528 + 0x78) < puVar30) {
    FUN_140023dd8(local_518,0x1f8);
    puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar30 = puVar24 + 0x3e;
  }
  *local_518 = (ulonglong)puVar30;
  uStack_d0 = (undefined8 *)DAT_14c9f7540;
  if (DAT_14c9f7540 != 0) {
    LOCK();
    *(int *)(DAT_14c9f7540 + 8) = *(int *)(DAT_14c9f7540 + 8) + 1;
    UNLOCK();
  }
  local_c8 = &DAT_14c9f74f8;
  local_558 = (longlong *)CONCAT71(local_558._1_7_,2);
  local_d8 = puVar18;
  FUN_140068f1a(puVar24,&local_2e8,&local_d8,uVar26);
  lVar16 = local_528;
  *puVar24 = &PTR_FUN_14a2667d0;
  puVar24[0x37] = puVar18;
  puVar24[0x38] = param_7;
  puVar24[0x39] = uVar14;
  puVar24[0x3a] = puVar27;
  puVar24[0x3b] = lVar11;
  *(bool *)(puVar24 + 0x3c) = bVar37;
  *(undefined2 *)((longlong)puVar24 + 0x1e1) = (undefined2)local_2b8;
  *(undefined1 *)((longlong)puVar24 + 0x1e3) = local_2b8._2_1_;
  *(ulonglong *)((longlong)puVar24 + 0x1e4) = uVar22;
  iVar7 = *(int *)(local_528 + 0x170);
  *(uint *)(local_528 + 0x170) = iVar7 + 1U;
  if (*(uint *)(local_528 + 0x174) < iVar7 + 1U) {
    FUN_14470e57a(local_528 + 0x168,iVar7);
  }
  *(undefined8 **)(*(longlong *)(lVar16 + 0x168) + (longlong)iVar7 * 8) = puVar24;
  *(int *)((longlong)puVar24 + 0x2c) = *(int *)(lVar16 + 0x170) + -1;
  FUN_140069100(lVar16,puVar24);
  puVar18 = *(undefined8 **)(param_7 + 0x3108);
  if (puVar18 != (undefined8 *)0x0 && DAT_14c76060c != 0) {
    FUN_1471f0c36(&local_2b8,lVar16,param_5,local_4c8);
    FUN_1471f0f7b(&local_2e8,lVar16,&local_2b8);
    puVar1 = local_518;
    local_4e8 = puVar18 + 0x32c;
    local_520 = puVar18;
    if (((puVar18[0x32c] == 0) || (*(char *)(param_7 + 0x23cc) != '\0')) ||
       (((*(byte *)(param_7 + 0x125b0) & 8) != 0 ||
        ((((int)local_168 != *(int *)(puVar18 + 0x32b) ||
          (local_168._4_4_ != *(int *)((longlong)puVar18 + 0x195c))) || (DAT_14c9f5170 != 0)))))) {
      puVar30 = (undefined8 *)(*(longlong *)(local_528 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar27 = puVar30 + 0x24;
      if (*(undefined8 **)(local_528 + 0x78) < puVar27) {
        FUN_140023dd8(local_518,0x130);
        puVar30 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar27 = puVar30 + 0x24;
      }
      *(undefined8 **)(local_528 + 0x70) = puVar27;
      *puVar30 = &PTR_FUN_14a266818;
      puVar30[0x1c] = 0;
      puVar30[2] = 0;
      puVar30[3] = 0;
      puVar30[4] = 0;
      puVar30[5] = 0;
      puVar30[6] = 0;
      puVar30[8] = 0;
      puVar30[9] = 0;
      puVar30[0x10] = 0;
      puVar30[0x11] = 0;
      puVar30[0x12] = 0;
      puVar30[0x13] = 0;
      puVar30[0x14] = 0;
      puVar30[0x16] = 0;
      puVar30[0x17] = 0;
      puVar30[0x18] = 0;
      puVar30[0x19] = 0;
      puVar30[0x1a] = 0;
      *(undefined1 *)(puVar30 + 0x1d) = 1;
      puVar30[0x1e] = 0;
      *(undefined1 *)(puVar30 + 0x1f) = 1;
      puVar30[0x20] = 0;
      *(undefined1 *)(puVar30 + 0x21) = 1;
      puVar30[0x22] = 0;
      *(undefined1 *)(puVar30 + 0x23) = 1;
      iVar7 = *(int *)(local_528 + 0xa0);
      *(uint *)(local_528 + 0xa0) = iVar7 + 1U;
      if (*(uint *)(local_528 + 0xa4) < iVar7 + 1U) {
        FUN_1448cfae8(local_4b8,iVar7);
      }
      lVar16 = local_528;
      *(undefined8 **)(*(longlong *)(local_528 + 0x98) + (longlong)iVar7 * 8) = puVar30;
      puVar30[2] = CONCAT44(uStack_2e4,local_2e8);
      puVar30[3] = CONCAT44(uStack_2dc,uStack_2e0);
      puVar30[4] = CONCAT44(uStack_2d4,local_2d8);
      puVar30[5] = local_2d0;
      puVar30[6] = local_2c8;
      memcpy(puVar30 + 8,&local_188,0xb0);
      lVar11 = FUN_1447e4f80();
      cVar6 = *(char *)(lVar11 + 0x41);
      if (*(char *)(lVar11 + 0x41) == '\x03') {
        cVar6 = '\x02';
      }
      puVar30[0x1e] = *(undefined8 *)(param_7 + 0x18);
      *(char *)(puVar30 + 0x1f) = cVar6;
      lVar11 = local_500[0x33];
      lVar13 = FUN_14482e3b2();
      cVar6 = *(char *)(lVar13 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar30[0x20] = lVar11;
      *(char *)(puVar30 + 0x21) = cVar6;
      uVar14 = *(undefined8 *)(param_7 + 0x118d0);
      lVar11 = FUN_144a2c9be();
      cVar6 = *(char *)(lVar11 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar30[0x22] = uVar14;
      *(char *)(puVar30 + 0x23) = cVar6;
      uVar14 = *(undefined8 *)(param_7 + 0x13818);
      FUN_145f7ea2e();
      FUN_1448e935e(uVar14,&local_d8,&DAT_14c9f56e0,0);
      FUN_145f7ea2e();
      local_308 = local_d8;
      lStack_300 = (longlong)uStack_d0;
      local_3ec = local_170._4_4_ + 0xe;
      if (-1 < local_170._4_4_ + 7) {
        local_3ec = local_170._4_4_ + 7;
      }
      local_3ec = local_3ec >> 3;
      local_3f0 = (int)local_170 + 0xe;
      if (-1 < (int)local_170 + 7) {
        local_3f0 = (int)local_170 + 7;
      }
      local_3f0 = local_3f0 >> 3;
      local_558 = (longlong *)&local_3f0;
      local_3e8 = 1;
      FUN_1471f11d8(lVar16,&local_d8,&local_308,puVar30 + 2);
      DAT_14c9f5170 = 0;
    }
    else {
      puVar30 = (undefined8 *)(*(longlong *)(local_528 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar27 = puVar30 + 0x3e;
      if (*(undefined8 **)(local_528 + 0x78) < puVar27) {
        FUN_140023dd8(local_518,0x200);
        puVar30 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar27 = puVar30 + 0x3e;
      }
      lVar16 = local_528;
      *(undefined8 **)(local_528 + 0x70) = puVar27;
      *puVar30 = &PTR_FUN_14a2667f8;
      local_4f0 = puVar30 + 2;
      FUN_1472011da();
      iVar7 = *(int *)(lVar16 + 0xa0);
      *(uint *)(lVar16 + 0xa0) = iVar7 + 1U;
      if (*(uint *)(lVar16 + 0xa4) < iVar7 + 1U) {
        FUN_1448cfae8(local_4b8,iVar7);
      }
      lVar16 = local_528;
      *(undefined8 **)(*(longlong *)(local_528 + 0x98) + (longlong)iVar7 * 8) = puVar30;
      puVar30[2] = CONCAT44(uStack_2e4,local_2e8);
      puVar30[3] = CONCAT44(uStack_2dc,uStack_2e0);
      puVar30[4] = CONCAT44(uStack_2d4,local_2d8);
      puVar30[5] = local_2d0;
      puVar30[6] = local_2c8;
      uVar14 = FUN_14473c272(local_528,local_4e8,0);
      puVar30[7] = uVar14;
      uVar14 = FUN_14473c272(lVar16,puVar18 + 0x32d,0);
      puVar30[8] = uVar14;
      uVar14 = FUN_14473c272(lVar16,puVar18 + 0x32e,0);
      puVar30[9] = uVar14;
      uVar14 = FUN_14473c272(lVar16,puVar18 + 0x32f,0);
      puVar30[10] = uVar14;
      uVar14 = FUN_14473c272(lVar16,puVar18 + 0x330,0);
      puVar30[0xb] = uVar14;
      memcpy(puVar30 + 0xc,&local_188,0xb0);
      lVar11 = FUN_1447e4f80();
      plVar25 = local_500;
      cVar6 = *(char *)(lVar11 + 0x41);
      if (*(char *)(lVar11 + 0x41) == '\x03') {
        cVar6 = '\x02';
      }
      puVar30[0x22] = *(undefined8 *)(param_7 + 0x18);
      *(char *)(puVar30 + 0x23) = cVar6;
      lVar11 = local_500[0x33];
      lVar13 = FUN_14482e3b2();
      cVar6 = *(char *)(lVar13 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar30[0x24] = lVar11;
      *(char *)(puVar30 + 0x25) = cVar6;
      uVar14 = *(undefined8 *)(param_7 + 0x118d0);
      lVar11 = FUN_144a2c9be();
      cVar6 = *(char *)(lVar11 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar30[0x3c] = uVar14;
      *(char *)(puVar30 + 0x3d) = cVar6;
      FUN_1448e94e7(&local_d8,lVar16,plVar25[0x33]);
      puVar27 = &local_d8;
      puVar24 = puVar30 + 0x26;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar24 = *puVar27;
        puVar27 = puVar27 + 1;
        puVar24 = puVar24 + 1;
      }
      uVar14 = local_520[0x329];
      puVar30[0x32] = local_520[0x328];
      puVar30[0x33] = uVar14;
      fVar39 = 1.0 / (float)*(int *)((longlong)plVar25 + 0x24);
      fVar38 = 1.0 / (float)(int)plVar25[4];
      iVar7 = *(int *)((longlong)local_520 + 0x193c);
      iVar19 = *(int *)(local_520 + 0x327);
      iVar8 = *(int *)((longlong)local_520 + 0x1934);
      *(float *)(puVar30 + 0x34) = (float)*(int *)(local_520 + 0x326) * fVar38;
      *(float *)((longlong)puVar30 + 0x1a4) = (float)iVar8 * fVar39;
      *(float *)(puVar30 + 0x35) = (float)iVar19 * fVar38;
      *(float *)((longlong)puVar30 + 0x1ac) = (float)iVar7 * fVar39;
      puVar30[0x36] = local_520[0x32a];
      *(float *)(puVar30 + 0x37) = *(float *)(param_7 + 0x13694) / *(float *)(param_7 + 0x13170);
      if (local_520[0x331] == 0) {
        uVar14 = puVar30[0xc];
      }
      else {
        uVar14 = FUN_14473c272(lVar16,puVar18 + 0x331,0);
      }
      lVar16 = local_528;
      puVar30[0x38] = uVar14;
      if (local_520[0x332] == 0) {
        uVar14 = puVar30[0xd];
      }
      else {
        uVar14 = FUN_14473c272(local_528,puVar18 + 0x332,0);
      }
      puVar30[0x39] = uVar14;
      *(undefined4 *)(puVar30 + 0x3a) = DAT_14c760610;
      uVar14 = *(undefined8 *)(param_7 + 0x13818);
      FUN_145f72acc();
      FUN_1448e935e(uVar14,&local_d8,&DAT_14c9f55b8,0);
      FUN_145f72acc();
      local_308 = local_d8;
      lStack_300 = (longlong)uStack_d0;
      local_3e0 = local_170._4_4_ + 0xe;
      if (-1 < local_170._4_4_ + 7) {
        local_3e0 = local_170._4_4_ + 7;
      }
      local_3e0 = local_3e0 >> 3;
      local_3e4 = (int)local_170 + 0xe;
      if (-1 < (int)local_170 + 7) {
        local_3e4 = (int)local_170 + 7;
      }
      local_3e4 = local_3e4 >> 3;
      local_558 = (longlong *)&local_3e4;
      local_3dc = 1;
      FUN_1471f1126(lVar16,&local_d8,&local_308,local_4f0);
      local_128 = local_298;
      local_148 = (int)local_2b8;
      uStack_144 = local_2b8._4_4_;
      uStack_140 = (undefined4)uStack_2b0;
      uStack_13c = uStack_2b0._4_4_;
      uStack_130 = lStack_2a0;
    }
    lVar11 = local_2b8;
    puVar1 = local_4e8;
    lVar16 = local_528;
    if ((*(byte *)(param_7 + 0x125b0) & 1) == 0) {
      local_520[0x326] = *(undefined8 *)(param_7 + 0x30f8);
      local_520[0x327] = *(undefined8 *)(param_7 + 0x3100);
      fVar39 = 1.0 / (float)(int)local_500[4];
      fVar38 = 1.0 / (float)*(int *)((longlong)local_500 + 0x24);
      iVar7 = *(int *)(param_7 + 0x30f8);
      iVar19 = *(int *)(param_7 + 0x30fc);
      fVar40 = (float)(*(int *)(param_7 + 0x3100) - iVar7);
      fVar41 = (float)(*(int *)(param_7 + 0x3104) - iVar19);
      *(float *)(local_520 + 0x328) = fVar39 * fVar40 * 0.5;
      *(float *)((longlong)local_520 + 0x1944) = fVar38 * fVar41 * -0.5;
      *(float *)(local_520 + 0x329) = ((float)iVar19 + fVar41 * 0.5) * fVar38;
      *(float *)((longlong)local_520 + 0x194c) = ((float)iVar7 + fVar40 * 0.5) * fVar39;
      local_520[0x32a] = local_170;
      local_520[0x32b] = local_168;
      plVar25 = (longlong *)local_520[0x32c];
      if (plVar25 != (longlong *)0x0) {
        *local_4e8 = 0;
        (**(code **)(*plVar25 + 0x38))();
      }
      bVar3 = *(byte *)(lVar11 + 0x24);
      *(byte *)(lVar11 + 0x24) = bVar3 | 2;
      *(undefined1 *)(lVar11 + 0x26) = 1;
      plVar25 = (longlong *)(local_528 + 0x1b8);
      iVar7 = *(int *)(local_528 + 0x1c0);
      *(uint *)(local_528 + 0x1c0) = iVar7 + 1U;
      if (*(uint *)(local_528 + 0x1c4) < iVar7 + 1U) {
        FUN_14017e38e(plVar25,iVar7);
      }
      lVar13 = local_528;
      lVar16 = *plVar25;
      *(longlong *)(lVar16 + (longlong)iVar7 * 0x10) = lVar11;
      *(ulonglong **)(lVar16 + 8 + (longlong)iVar7 * 0x10) = puVar1;
      if ((bVar3 & 2) == 0) {
        pcVar2 = (char *)(local_528 + 0x4a8);
        LOCK();
        bVar37 = *(char *)(local_528 + 0x4a8) == '\0';
        if (bVar37) {
          *(char *)(local_528 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar37) {
          FUN_1447d2058();
        }
        iVar7 = *(int *)(lVar13 + 0x4b8);
        *(uint *)(lVar13 + 0x4b8) = iVar7 + 1U;
        if (*(uint *)(lVar13 + 0x4bc) < iVar7 + 1U) {
          FUN_1447f2dbc((longlong *)(lVar13 + 0x4b0),iVar7);
        }
        lVar16 = *(longlong *)(lVar13 + 0x4b0);
        *(undefined8 *)(lVar16 + (longlong)iVar7 * 0x10) = 2;
        *(longlong *)(lVar16 + 8 + (longlong)iVar7 * 0x10) = lVar11;
        LOCK();
        cVar6 = *pcVar2;
        if (cVar6 == '\x01') {
          *pcVar2 = '\0';
        }
        UNLOCK();
        if (cVar6 != '\x01') {
          FUN_14008cdb0(pcVar2);
        }
      }
      lVar16 = uStack_2b0;
      plVar17 = (longlong *)local_520[0x32d];
      if (plVar17 != (longlong *)0x0) {
        puVar18[0x32d] = 0;
        (**(code **)(*plVar17 + 0x38))();
      }
      bVar3 = *(byte *)(lVar16 + 0x24);
      *(byte *)(lVar16 + 0x24) = bVar3 | 2;
      *(undefined1 *)(lVar16 + 0x26) = 1;
      iVar7 = *(int *)(local_528 + 0x1c0);
      *(uint *)(local_528 + 0x1c0) = iVar7 + 1U;
      if (*(uint *)(local_528 + 0x1c4) < iVar7 + 1U) {
        FUN_14017e38e(plVar25,iVar7);
      }
      lVar13 = local_528;
      lVar11 = *plVar25;
      *(longlong *)(lVar11 + (longlong)iVar7 * 0x10) = lVar16;
      *(undefined8 **)(lVar11 + 8 + (longlong)iVar7 * 0x10) = puVar18 + 0x32d;
      if ((bVar3 & 2) == 0) {
        pcVar2 = (char *)(local_528 + 0x4a8);
        LOCK();
        bVar37 = *(char *)(local_528 + 0x4a8) == '\0';
        if (bVar37) {
          *(char *)(local_528 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar37) {
          FUN_1447d2058();
        }
        iVar7 = *(int *)(lVar13 + 0x4b8);
        *(uint *)(lVar13 + 0x4b8) = iVar7 + 1U;
        if (*(uint *)(lVar13 + 0x4bc) < iVar7 + 1U) {
          FUN_1447f2dbc((longlong *)(lVar13 + 0x4b0),iVar7);
        }
        lVar11 = *(longlong *)(lVar13 + 0x4b0);
        *(undefined8 *)(lVar11 + (longlong)iVar7 * 0x10) = 2;
        *(longlong *)(lVar11 + 8 + (longlong)iVar7 * 0x10) = lVar16;
        LOCK();
        cVar6 = *pcVar2;
        if (cVar6 == '\x01') {
          *pcVar2 = '\0';
        }
        UNLOCK();
        if (cVar6 != '\x01') {
          FUN_14008cdb0(pcVar2);
        }
      }
      lVar16 = CONCAT44(uStack_2a4,local_2a8);
      plVar17 = (longlong *)local_520[0x32e];
      if (plVar17 != (longlong *)0x0) {
        puVar18[0x32e] = 0;
        (**(code **)(*plVar17 + 0x38))();
      }
      bVar3 = *(byte *)(lVar16 + 0x24);
      *(byte *)(lVar16 + 0x24) = bVar3 | 2;
      *(undefined1 *)(lVar16 + 0x26) = 1;
      iVar7 = *(int *)(local_528 + 0x1c0);
      *(uint *)(local_528 + 0x1c0) = iVar7 + 1U;
      if (*(uint *)(local_528 + 0x1c4) < iVar7 + 1U) {
        FUN_14017e38e(plVar25,iVar7);
      }
      lVar13 = local_528;
      lVar11 = *plVar25;
      *(longlong *)(lVar11 + (longlong)iVar7 * 0x10) = lVar16;
      *(undefined8 **)(lVar11 + 8 + (longlong)iVar7 * 0x10) = puVar18 + 0x32e;
      if ((bVar3 & 2) == 0) {
        pcVar2 = (char *)(local_528 + 0x4a8);
        LOCK();
        bVar37 = *(char *)(local_528 + 0x4a8) == '\0';
        if (bVar37) {
          *(char *)(local_528 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar37) {
          FUN_1447d2058();
        }
        iVar7 = *(int *)(lVar13 + 0x4b8);
        *(uint *)(lVar13 + 0x4b8) = iVar7 + 1U;
        if (*(uint *)(lVar13 + 0x4bc) < iVar7 + 1U) {
          FUN_1447f2dbc((longlong *)(lVar13 + 0x4b0),iVar7);
        }
        lVar11 = *(longlong *)(lVar13 + 0x4b0);
        *(undefined8 *)(lVar11 + (longlong)iVar7 * 0x10) = 2;
        *(longlong *)(lVar11 + 8 + (longlong)iVar7 * 0x10) = lVar16;
        LOCK();
        cVar6 = *pcVar2;
        if (cVar6 == '\x01') {
          *pcVar2 = '\0';
        }
        UNLOCK();
        if (cVar6 != '\x01') {
          FUN_14008cdb0(pcVar2);
        }
      }
      lVar16 = lStack_2a0;
      plVar17 = (longlong *)local_520[0x32f];
      if (plVar17 != (longlong *)0x0) {
        puVar18[0x32f] = 0;
        (**(code **)(*plVar17 + 0x38))();
      }
      bVar3 = *(byte *)(lVar16 + 0x24);
      *(byte *)(lVar16 + 0x24) = bVar3 | 2;
      *(undefined1 *)(lVar16 + 0x26) = 1;
      iVar7 = *(int *)(local_528 + 0x1c0);
      *(uint *)(local_528 + 0x1c0) = iVar7 + 1U;
      if (*(uint *)(local_528 + 0x1c4) < iVar7 + 1U) {
        FUN_14017e38e(plVar25,iVar7);
      }
      lVar13 = local_528;
      lVar11 = *plVar25;
      *(longlong *)(lVar11 + (longlong)iVar7 * 0x10) = lVar16;
      *(undefined8 **)(lVar11 + 8 + (longlong)iVar7 * 0x10) = puVar18 + 0x32f;
      if ((bVar3 & 2) == 0) {
        pcVar2 = (char *)(local_528 + 0x4a8);
        LOCK();
        bVar37 = *(char *)(local_528 + 0x4a8) == '\0';
        if (bVar37) {
          *(char *)(local_528 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar37) {
          FUN_1447d2058();
        }
        iVar7 = *(int *)(lVar13 + 0x4b8);
        *(uint *)(lVar13 + 0x4b8) = iVar7 + 1U;
        if (*(uint *)(lVar13 + 0x4bc) < iVar7 + 1U) {
          FUN_1447f2dbc((longlong *)(lVar13 + 0x4b0),iVar7);
        }
        lVar11 = *(longlong *)(lVar13 + 0x4b0);
        *(undefined8 *)(lVar11 + (longlong)iVar7 * 0x10) = 2;
        *(longlong *)(lVar11 + 8 + (longlong)iVar7 * 0x10) = lVar16;
        LOCK();
        cVar6 = *pcVar2;
        if (cVar6 == '\x01') {
          *pcVar2 = '\0';
        }
        UNLOCK();
        if (cVar6 != '\x01') {
          FUN_14008cdb0(pcVar2);
        }
      }
      lVar16 = local_298;
      plVar17 = (longlong *)local_520[0x330];
      if (plVar17 != (longlong *)0x0) {
        puVar18[0x330] = 0;
        (**(code **)(*plVar17 + 0x38))();
      }
      bVar3 = *(byte *)(lVar16 + 0x24);
      *(byte *)(lVar16 + 0x24) = bVar3 | 2;
      *(undefined1 *)(lVar16 + 0x26) = 1;
      iVar7 = *(int *)(local_528 + 0x1c0);
      *(uint *)(local_528 + 0x1c0) = iVar7 + 1U;
      if (*(uint *)(local_528 + 0x1c4) < iVar7 + 1U) {
        FUN_14017e38e(plVar25,iVar7);
      }
      lVar13 = local_528;
      lVar11 = *plVar25;
      *(longlong *)(lVar11 + (longlong)iVar7 * 0x10) = lVar16;
      *(undefined8 **)(lVar11 + 8 + (longlong)iVar7 * 0x10) = puVar18 + 0x330;
      if ((bVar3 & 2) == 0) {
        pcVar2 = (char *)(local_528 + 0x4a8);
        LOCK();
        bVar37 = *(char *)(local_528 + 0x4a8) == '\0';
        if (bVar37) {
          *(char *)(local_528 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar37) {
          FUN_1447d2058();
        }
        iVar7 = *(int *)(lVar13 + 0x4b8);
        *(uint *)(lVar13 + 0x4b8) = iVar7 + 1U;
        if (*(uint *)(lVar13 + 0x4bc) < iVar7 + 1U) {
          FUN_1447f2dbc((longlong *)(lVar13 + 0x4b0),iVar7);
        }
        lVar11 = *(longlong *)(lVar13 + 0x4b0);
        *(undefined8 *)(lVar11 + (longlong)iVar7 * 0x10) = 2;
        *(longlong *)(lVar11 + 8 + (longlong)iVar7 * 0x10) = lVar16;
        LOCK();
        cVar6 = *pcVar2;
        if (cVar6 == '\x01') {
          *pcVar2 = '\0';
        }
        UNLOCK();
        if (cVar6 != '\x01') {
          FUN_14008cdb0(pcVar2);
        }
      }
      uVar22 = local_188;
      plVar17 = (longlong *)local_520[0x331];
      if (plVar17 != (longlong *)0x0) {
        puVar18[0x331] = 0;
        (**(code **)(*plVar17 + 0x38))();
      }
      bVar3 = *(byte *)(uVar22 + 0x24);
      *(byte *)(uVar22 + 0x24) = bVar3 | 2;
      *(undefined1 *)(uVar22 + 0x26) = 1;
      iVar7 = *(int *)(local_528 + 0x1c0);
      *(uint *)(local_528 + 0x1c0) = iVar7 + 1U;
      if (*(uint *)(local_528 + 0x1c4) < iVar7 + 1U) {
        FUN_14017e38e(plVar25,iVar7);
      }
      lVar11 = local_528;
      lVar16 = *plVar25;
      *(ulonglong *)(lVar16 + (longlong)iVar7 * 0x10) = uVar22;
      *(undefined8 **)(lVar16 + 8 + (longlong)iVar7 * 0x10) = puVar18 + 0x331;
      if ((bVar3 & 2) == 0) {
        pcVar2 = (char *)(local_528 + 0x4a8);
        LOCK();
        bVar37 = *(char *)(local_528 + 0x4a8) == '\0';
        if (bVar37) {
          *(char *)(local_528 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar37) {
          FUN_1447d2058();
        }
        iVar7 = *(int *)(lVar11 + 0x4b8);
        *(uint *)(lVar11 + 0x4b8) = iVar7 + 1U;
        if (*(uint *)(lVar11 + 0x4bc) < iVar7 + 1U) {
          FUN_1447f2dbc((longlong *)(lVar11 + 0x4b0),iVar7);
        }
        lVar16 = *(longlong *)(lVar11 + 0x4b0);
        *(undefined8 *)(lVar16 + (longlong)iVar7 * 0x10) = 2;
        *(ulonglong *)(lVar16 + 8 + (longlong)iVar7 * 0x10) = uVar22;
        LOCK();
        cVar6 = *pcVar2;
        if (cVar6 == '\x01') {
          *pcVar2 = '\0';
        }
        UNLOCK();
        if (cVar6 != '\x01') {
          FUN_14008cdb0(pcVar2);
        }
      }
      uVar22 = uStack_180;
      plVar17 = (longlong *)local_520[0x332];
      if (plVar17 != (longlong *)0x0) {
        puVar18[0x332] = 0;
        (**(code **)(*plVar17 + 0x38))();
      }
      bVar3 = *(byte *)(uVar22 + 0x24);
      *(byte *)(uVar22 + 0x24) = bVar3 | 2;
      *(undefined1 *)(uVar22 + 0x26) = 1;
      iVar7 = *(int *)(local_528 + 0x1c0);
      *(uint *)(local_528 + 0x1c0) = iVar7 + 1U;
      if (*(uint *)(local_528 + 0x1c4) < iVar7 + 1U) {
        FUN_14017e38e(plVar25,iVar7);
      }
      lVar11 = local_528;
      lVar16 = *plVar25;
      *(ulonglong *)(lVar16 + (longlong)iVar7 * 0x10) = uVar22;
      *(undefined8 **)(lVar16 + 8 + (longlong)iVar7 * 0x10) = puVar18 + 0x332;
      lVar16 = local_528;
      if ((bVar3 & 2) == 0) {
        pcVar2 = (char *)(local_528 + 0x4a8);
        LOCK();
        bVar37 = *(char *)(local_528 + 0x4a8) == '\0';
        if (bVar37) {
          *(char *)(local_528 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar37) {
          FUN_1447d2058();
        }
        iVar7 = *(int *)(lVar11 + 0x4b8);
        *(uint *)(lVar11 + 0x4b8) = iVar7 + 1U;
        if (*(uint *)(lVar11 + 0x4bc) < iVar7 + 1U) {
          FUN_1447f2dbc((longlong *)(lVar11 + 0x4b0),iVar7);
        }
        lVar16 = *(longlong *)(lVar11 + 0x4b0);
        *(undefined8 *)(lVar16 + (longlong)iVar7 * 0x10) = 2;
        *(ulonglong *)(lVar16 + 8 + (longlong)iVar7 * 0x10) = uVar22;
        LOCK();
        cVar6 = *pcVar2;
        if (cVar6 == '\x01') {
          *pcVar2 = '\0';
        }
        UNLOCK();
        lVar16 = local_528;
        if (cVar6 != '\x01') {
          FUN_14008cdb0(pcVar2);
          lVar16 = local_528;
        }
      }
    }
  }
  lVar11 = local_528;
  local_4f0 = local_500 + 4;
  iVar7 = 0x10;
  if (DAT_14c760618 < 0x10) {
    iVar7 = DAT_14c760618;
  }
  local_4e8 = (ulonglong *)CONCAT44(local_4e8._4_4_,iVar7);
  if (0 < DAT_14c760618 && 0 < DAT_14c760614) {
    iVar7 = 0;
    do {
      FUN_1471f0c36(&local_2b8,lVar16,param_5,local_4c8);
      FUN_1471f0f7b(&local_d8,lVar16,&local_2b8);
      puVar1 = local_518;
      local_f8 = CONCAT44(uStack_b4,local_b8);
      local_108 = local_c8;
      local_118 = local_d8;
      uStack_110 = (longlong)uStack_d0;
      puVar27 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar18 = puVar27 + 0x2c;
      if (*(undefined8 **)(lVar16 + 0x78) < puVar18) {
        FUN_140023dd8(local_518,0x170);
        puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar18 = puVar27 + 0x2c;
      }
      *(undefined8 **)(lVar16 + 0x70) = puVar18;
      *puVar27 = &PTR_FUN_14a266838;
      puVar27[0x16] = 0;
      puVar27[2] = 0;
      puVar27[3] = 0;
      puVar27[10] = 0;
      puVar27[0xb] = 0;
      puVar27[0xc] = 0;
      puVar27[0xd] = 0;
      puVar27[0xe] = 0;
      puVar27[0x10] = 0;
      puVar27[0x11] = 0;
      puVar27[0x12] = 0;
      puVar27[0x13] = 0;
      puVar27[0x14] = 0;
      *(undefined1 *)(puVar27 + 0x17) = 1;
      puVar27[0x18] = 0;
      *(undefined1 *)(puVar27 + 0x19) = 1;
      puVar27[0x1a] = 0;
      *(undefined1 *)(puVar27 + 0x1b) = 1;
      puVar27[0x2a] = 0;
      puVar27[0x1c] = 0;
      puVar27[0x1d] = 0;
      puVar27[0x1e] = 0;
      puVar27[0x1f] = 0;
      puVar27[0x20] = 0;
      puVar27[0x21] = 0;
      puVar27[0x22] = 0;
      puVar27[0x23] = 0;
      puVar27[0x24] = 0;
      puVar27[0x25] = 0;
      puVar27[0x26] = 0;
      puVar27[0x27] = 0;
      *(undefined1 *)(puVar27 + 0x2b) = 1;
      iVar19 = *(int *)(lVar16 + 0xa0);
      *(uint *)(lVar16 + 0xa0) = iVar19 + 1U;
      if (*(uint *)(lVar16 + 0xa4) < iVar19 + 1U) {
        FUN_1448cfae8(local_4b8,iVar19);
      }
      local_520 = puVar27 + 2;
      *(undefined8 **)(*(longlong *)(lVar11 + 0x98) + (longlong)iVar19 * 8) = puVar27;
      memcpy(local_520,&local_188,0xb0);
      lVar16 = FUN_1447e4f80();
      plVar25 = local_500;
      cVar6 = *(char *)(lVar16 + 0x41);
      if (*(char *)(lVar16 + 0x41) == '\x03') {
        cVar6 = '\x02';
      }
      puVar27[0x18] = *(undefined8 *)(param_7 + 0x18);
      *(char *)(puVar27 + 0x19) = cVar6;
      lVar16 = local_500[0x33];
      lVar13 = FUN_14482e3b2();
      cVar6 = *(char *)(lVar13 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar27[0x1a] = lVar16;
      *(char *)(puVar27 + 0x1b) = cVar6;
      uVar14 = *(undefined8 *)(param_7 + 0x118d0);
      lVar16 = FUN_144a2c9be();
      cVar6 = *(char *)(lVar16 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar27[0x2a] = uVar14;
      *(char *)(puVar27 + 0x2b) = cVar6;
      FUN_1448e94e7(&local_d8,lVar11,plVar25[0x33]);
      puVar18 = &local_d8;
      puVar30 = puVar27 + 0x1c;
      for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar30 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar30 = puVar30 + 1;
      }
      *(undefined4 *)(puVar27 + 0x28) = DAT_14c760620;
      *(undefined4 *)((longlong)puVar27 + 0x144) = DAT_14c76062c;
      *(undefined4 *)(puVar27 + 0x29) = DAT_14c76061c;
      *(int *)((longlong)puVar27 + 0x14c) = iVar7;
      uVar14 = *(undefined8 *)(param_7 + 0x13818);
      FUN_145f7f030();
      FUN_1448e935e(uVar14,&local_d8,&DAT_14c9f5808,0);
      FUN_145f7f030();
      local_2e8 = (int)local_d8;
      uStack_2e4 = local_d8._4_4_;
      uStack_2e0 = (int)uStack_d0;
      uStack_2dc = uStack_d0._4_4_;
      local_3f8 = local_170._4_4_ + 0xe;
      if (-1 < local_170._4_4_ + 7) {
        local_3f8 = local_170._4_4_ + 7;
      }
      local_3f8 = local_3f8 >> 3;
      local_3fc = (int)local_170 + 0xe;
      if (-1 < (int)local_170 + 7) {
        local_3fc = (int)local_170 + 7;
      }
      local_3fc = local_3fc >> 3;
      local_3f4 = 1;
      local_558 = (longlong *)&local_3fc;
      FUN_1471f128a(lVar11,&local_d8,&local_2e8,local_520);
      local_128 = local_298;
      local_148 = (int)local_2b8;
      uStack_144 = local_2b8._4_4_;
      uStack_140 = (undefined4)uStack_2b0;
      uStack_13c = uStack_2b0._4_4_;
      uStack_130 = lStack_2a0;
      iVar7 = iVar7 + 1;
      lVar16 = lVar11;
    } while ((int)local_4e8 != iVar7);
  }
  puVar1 = local_518;
  local_2f8 = DAT_14ca83a40;
  local_308 = (undefined8 *)CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  lStack_300 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  lVar11 = *local_4f0;
  uVar34 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  plVar25 = *(longlong **)(param_5 + 0x2e0);
  lVar13 = lVar11;
  uVar31 = uVar34;
  if (plVar25 == (longlong *)0x0) {
    local_a6 = 0xff000900;
    local_d8 = (undefined8 *)&DAT_00020008;
    local_ac = 0x10001;
    local_a8 = 0x101;
    uStack_b4 = DAT_14ca84e40;
    if ((int)(uint)lVar11 < (int)DAT_14ca84e40) {
      uStack_b4 = (uint)lVar11;
    }
    if ((int)uStack_b4 < 2) {
      uStack_b4 = 1;
    }
    uVar31 = (uint)((ulonglong)lVar11 >> 0x20);
    local_b0 = DAT_14ca84e40;
    if ((int)uVar31 < (int)DAT_14ca84e40) {
      local_b0 = uVar31;
    }
    uStack_c0 = DAT_14ca83a40;
    uStack_d0 = (undefined8 *)CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
    local_c8 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    local_b8 = 0;
    if ((int)local_b0 < 2) {
      local_b0 = 1;
    }
    plVar25 = (longlong *)(*(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8);
    plVar17 = plVar25 + 0x24;
    uStack_bc = uVar34;
    if (*(longlong **)(lVar16 + 0x78) < plVar17) {
      FUN_140023dd8(local_518,0x128);
      plVar25 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
      plVar17 = plVar25 + 0x24;
    }
    *(longlong **)(lVar16 + 0x70) = plVar17;
    FUN_1456bbb8c(plVar25,L"Lumen.ReSTIRGather.DiffuseIndirect",&local_d8,0);
    iVar7 = *(int *)(lVar16 + 0x180);
    *(uint *)(lVar16 + 0x180) = iVar7 + 1U;
    if (*(uint *)(lVar16 + 0x184) < iVar7 + 1U) {
      FUN_14472c0f6(lVar16 + 0x178,iVar7);
    }
    *(longlong **)(*(longlong *)(lVar16 + 0x178) + (longlong)iVar7 * 8) = plVar25;
    *(int *)((longlong)plVar25 + 0x9c) = *(int *)(lVar16 + 0x180) + -1;
    *(longlong **)(param_5 + 0x2e0) = plVar25;
    lVar13 = *local_4f0;
    uVar31 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  }
  puVar1 = local_518;
  local_318 = DAT_14ca83a40;
  local_328 = DAT_14ca83a30;
  uStack_324 = DAT_14ca83a34;
  uStack_320 = DAT_14ca83a38;
  uStack_31c = DAT_14ca83a3c;
  uVar22 = *(ulonglong *)(param_5 + 0x2f0);
  local_520 = plVar25;
  if (uVar22 == 0) {
    local_a6 = 0xff000900;
    local_d8 = (undefined8 *)&DAT_00020008;
    local_ac = 0x10001;
    local_a8 = 0x101;
    uStack_b4 = DAT_14ca84e40;
    if ((int)(uint)lVar13 < (int)DAT_14ca84e40) {
      uStack_b4 = (uint)lVar13;
    }
    if ((int)uStack_b4 < 2) {
      uStack_b4 = 1;
    }
    uVar33 = (uint)((ulonglong)lVar13 >> 0x20);
    local_b0 = DAT_14ca84e40;
    if ((int)uVar33 < (int)DAT_14ca84e40) {
      local_b0 = uVar33;
    }
    uStack_c0 = DAT_14ca83a40;
    uStack_d0 = (undefined8 *)CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
    local_c8 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    local_b8 = 0;
    if ((int)local_b0 < 2) {
      local_b0 = 1;
    }
    uVar22 = *(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar23 = uVar22 + 0x120;
    uStack_bc = uVar31;
    if (*(ulonglong *)(lVar16 + 0x78) < uVar23) {
      FUN_140023dd8(local_518,0x128);
      uVar22 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar23 = uVar22 + 0x120;
    }
    *(ulonglong *)(lVar16 + 0x70) = uVar23;
    FUN_1456bbb8c(uVar22,L"Lumen.ReSTIRGather.RoughSpecularIndirect",&local_d8,0);
    iVar7 = *(int *)(lVar16 + 0x180);
    *(uint *)(lVar16 + 0x180) = iVar7 + 1U;
    if (*(uint *)(lVar16 + 0x184) < iVar7 + 1U) {
      FUN_14472c0f6(lVar16 + 0x178,iVar7);
    }
    *(ulonglong *)(*(longlong *)(lVar16 + 0x178) + (longlong)iVar7 * 8) = uVar22;
    *(int *)(uVar22 + 0x9c) = *(int *)(lVar16 + 0x180) + -1;
    *(ulonglong *)(param_5 + 0x2f0) = uVar22;
  }
  puVar1 = local_518;
  uVar23 = *(ulonglong *)(param_5 + 0x300);
  local_428 = lVar13;
  if (uVar23 == 0) {
    local_a6 = 0xff001500;
    local_d8 = (undefined8 *)&DAT_00020008;
    local_ac = 0x10001;
    local_a8 = 0x101;
    uStack_c0 = DAT_14ca83a40;
    uVar33 = (uint)*local_4f0;
    uStack_b4 = DAT_14ca84e40;
    if ((int)uVar33 < (int)DAT_14ca84e40) {
      uStack_b4 = uVar33;
    }
    if ((int)uStack_b4 < 2) {
      uStack_b4 = 1;
    }
    uVar33 = (uint)((ulonglong)*local_4f0 >> 0x20);
    local_b0 = DAT_14ca84e40;
    if ((int)uVar33 < (int)DAT_14ca84e40) {
      local_b0 = uVar33;
    }
    uStack_bc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uStack_d0 = (undefined8 *)CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
    local_c8 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    local_b8 = 0;
    if ((int)local_b0 < 2) {
      local_b0 = 1;
    }
    uVar23 = *(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar20 = uVar23 + 0x120;
    if (*(ulonglong *)(lVar16 + 0x78) < uVar20) {
      FUN_140023dd8(local_518,0x128);
      uVar23 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar20 = uVar23 + 0x120;
    }
    *(ulonglong *)(lVar16 + 0x70) = uVar20;
    FUN_1456bbb8c(uVar23,L"Lumen.ReSTIRGather.ResolveVariance",&local_d8,0);
    iVar7 = *(int *)(lVar16 + 0x180);
    *(uint *)(lVar16 + 0x180) = iVar7 + 1U;
    if (*(uint *)(lVar16 + 0x184) < iVar7 + 1U) {
      FUN_14472c0f6(lVar16 + 0x178,iVar7);
    }
    *(ulonglong *)(*(longlong *)(lVar16 + 0x178) + (longlong)iVar7 * 8) = uVar23;
    *(int *)(uVar23 + 0x9c) = *(int *)(lVar16 + 0x180) + -1;
    *(ulonglong *)(param_5 + 0x300) = uVar23;
  }
  puVar1 = local_518;
  local_4c8 = CONCAT44(local_4c8._4_4_,DAT_14c76064c);
  puVar27 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar18 = puVar27 + 0x26;
  if (*(undefined8 **)(lVar16 + 0x78) < puVar18) {
    FUN_140023dd8(local_518,0x140);
    puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar18 = puVar27 + 0x26;
  }
  local_4e8 = (ulonglong *)CONCAT44(local_4e8._4_4_,uVar34);
  *(undefined8 **)(local_528 + 0x70) = puVar18;
  *puVar27 = &PTR_FUN_14a266858;
  puVar27[0x1a] = 0;
  puVar27[2] = 0;
  puVar27[3] = 0;
  puVar27[4] = 0;
  puVar27[6] = 0;
  puVar27[7] = 0;
  puVar27[0xe] = 0;
  puVar27[0xf] = 0;
  puVar27[0x10] = 0;
  puVar27[0x11] = 0;
  puVar27[0x12] = 0;
  puVar27[0x14] = 0;
  puVar27[0x15] = 0;
  puVar27[0x16] = 0;
  puVar27[0x17] = 0;
  puVar27[0x18] = 0;
  *(undefined1 *)(puVar27 + 0x1b) = 1;
  puVar27[0x1e] = 0;
  *(undefined1 *)(puVar27 + 0x1f) = 1;
  puVar27[0x20] = 0;
  *(undefined1 *)(puVar27 + 0x21) = 1;
  puVar27[0x22] = 0;
  *(undefined1 *)(puVar27 + 0x23) = 1;
  iVar7 = *(int *)(local_528 + 0xa0);
  *(uint *)(local_528 + 0xa0) = iVar7 + 1U;
  local_494 = uVar31;
  local_420 = lVar11;
  if (*(uint *)(local_528 + 0xa4) < iVar7 + 1U) {
    FUN_1448cfae8(local_4b8,iVar7);
  }
  puVar1 = local_518;
  plVar25 = local_520;
  lVar16 = local_528;
  *(undefined8 **)(*(longlong *)(local_528 + 0x98) + (longlong)iVar7 * 8) = puVar27;
  uVar4 = *(undefined1 *)((longlong)local_520 + 0x94);
  puVar30 = (undefined8 *)(*(longlong *)(local_528 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar30 + 9;
  if (*(undefined8 **)(local_528 + 0x78) < puVar18) {
    FUN_140023dd8(local_518,0x50);
    puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar30 + 9;
  }
  *(undefined8 **)(lVar16 + 0x70) = puVar18;
  puVar30[1] = plVar25[1];
  puVar30[2] = 0;
  *(undefined1 *)(puVar30 + 3) = 0;
  *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar30 + 5) = 0;
  *puVar30 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar30 + 6) = uVar4;
  *(undefined1 *)(puVar30 + 7) = 0;
  *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
  puVar30[8] = plVar25;
  iVar7 = *(int *)(lVar16 + 0x1a0);
  *(uint *)(lVar16 + 0x1a0) = iVar7 + 1U;
  if (*(uint *)(lVar16 + 0x1a4) < iVar7 + 1U) {
    FUN_1447568fc(local_4e0,iVar7);
  }
  puVar1 = local_518;
  *(undefined8 **)(*(longlong *)(lVar16 + 0x198) + (longlong)iVar7 * 8) = puVar30;
  *(int *)((longlong)puVar30 + 0x1c) = *(int *)(lVar16 + 0x1a0) + -1;
  puVar27[2] = puVar30;
  uVar4 = *(undefined1 *)(uVar22 + 0x94);
  puVar30 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar30 + 9;
  if (*(undefined8 **)(lVar16 + 0x78) < puVar18) {
    FUN_140023dd8(local_518,0x50);
    puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar30 + 9;
  }
  *(undefined8 **)(lVar16 + 0x70) = puVar18;
  puVar30[1] = *(undefined8 *)(uVar22 + 8);
  puVar30[2] = 0;
  *(undefined1 *)(puVar30 + 3) = 0;
  *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar30 + 5) = 0;
  *puVar30 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar30 + 6) = uVar4;
  *(undefined1 *)(puVar30 + 7) = 0;
  *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
  puVar30[8] = uVar22;
  iVar7 = *(int *)(lVar16 + 0x1a0);
  *(uint *)(lVar16 + 0x1a0) = iVar7 + 1U;
  if (*(uint *)(lVar16 + 0x1a4) < iVar7 + 1U) {
    FUN_1447568fc(local_4e0,iVar7);
  }
  puVar1 = local_518;
  *(undefined8 **)(*(longlong *)(lVar16 + 0x198) + (longlong)iVar7 * 8) = puVar30;
  *(int *)((longlong)puVar30 + 0x1c) = *(int *)(lVar16 + 0x1a0) + -1;
  puVar27[3] = puVar30;
  uVar4 = *(undefined1 *)(uVar23 + 0x94);
  puVar30 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar30 + 9;
  if (*(undefined8 **)(lVar16 + 0x78) < puVar18) {
    FUN_140023dd8(local_518,0x50);
    puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar30 + 9;
  }
  *(undefined8 **)(lVar16 + 0x70) = puVar18;
  puVar30[1] = *(undefined8 *)(uVar23 + 8);
  puVar30[2] = 0;
  *(undefined1 *)(puVar30 + 3) = 0;
  *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar30 + 5) = 0;
  *puVar30 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar30 + 6) = uVar4;
  *(undefined1 *)(puVar30 + 7) = 0;
  *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
  puVar30[8] = uVar23;
  iVar7 = *(int *)(lVar16 + 0x1a0);
  *(uint *)(lVar16 + 0x1a0) = iVar7 + 1U;
  if (*(uint *)(lVar16 + 0x1a4) < iVar7 + 1U) {
    FUN_1447568fc(local_4e0,iVar7);
  }
  *(undefined8 **)(*(longlong *)(lVar16 + 0x198) + (longlong)iVar7 * 8) = puVar30;
  *(int *)((longlong)puVar30 + 0x1c) = *(int *)(lVar16 + 0x1a0) + -1;
  puVar27[4] = puVar30;
  memcpy(puVar27 + 6,&local_188,0xb0);
  lVar16 = FUN_1447e4f80();
  cVar6 = *(char *)(lVar16 + 0x41);
  if (*(char *)(lVar16 + 0x41) == '\x03') {
    cVar6 = '\x02';
  }
  puVar27[0x1e] = *(undefined8 *)(param_7 + 0x18);
  *(char *)(puVar27 + 0x1f) = cVar6;
  lVar16 = local_500[0x33];
  lVar11 = FUN_14482e3b2();
  cVar6 = *(char *)(lVar11 + 0x41);
  if (cVar6 == '\x03') {
    cVar6 = '\x02';
  }
  puVar27[0x20] = lVar16;
  *(char *)(puVar27 + 0x21) = cVar6;
  uVar14 = *(undefined8 *)(param_7 + 0x118d0);
  lVar16 = FUN_144a2c9be();
  cVar6 = *(char *)(lVar16 + 0x41);
  if (cVar6 == '\x03') {
    cVar6 = '\x02';
  }
  puVar27[0x22] = uVar14;
  *(char *)(puVar27 + 0x23) = cVar6;
  fVar38 = *(float *)(param_7 + 0x293c);
  if (*(float *)(DAT_14c9f3aa0 + 4) <= *(float *)(param_7 + 0x293c)) {
    fVar38 = *(float *)(DAT_14c9f3aa0 + 4);
  }
  *(float *)(puVar27 + 0x1c) = fVar38;
  fVar38 = DAT_14c7605b0;
  if (1.0 <= DAT_14c7605b0) {
    fVar38 = 1.0;
  }
  if (fVar38 <= 0.001) {
    fVar38 = 0.001;
  }
  *(float *)(puVar27 + 0x1d) = 1.0 / fVar38;
  *(undefined4 *)((longlong)puVar27 + 0xe4) = *(undefined4 *)(DAT_14c9f3ab8 + 4);
  if (0.0 <= *(float *)(DAT_14c9f3a88 + 4)) {
    *(float *)(puVar27 + 0x1c) = *(float *)(DAT_14c9f3a88 + 4);
  }
  bVar37 = (int)local_4c8 != 0;
  *(undefined4 *)(puVar27 + 0x24) = DAT_14c760638;
  *(undefined4 *)((longlong)puVar27 + 0x124) = DAT_14c76063c;
  uVar31 = (uint)DAT_14c760634;
  uVar14 = *(undefined8 *)(param_7 + 0x13818);
  FUN_145f69f68();
  FUN_1448e935e(uVar14,&local_d8,&DAT_14c9f5930,(uint)bVar37 * 3 + uVar31);
  FUN_145f69f68();
  lVar16 = local_528;
  local_2b8._0_4_ = (int)local_d8;
  local_2b8._4_4_ = local_d8._4_4_;
  uStack_2b0._0_4_ = SUB84(uStack_d0,0);
  uStack_2b0._4_4_ = uStack_d0._4_4_;
  iVar19 = *(int *)(param_7 + 0x3104) - *(int *)(param_7 + 0x30fc);
  iVar7 = iVar19 + 7;
  local_404 = iVar19 + 0xe;
  if (-1 < iVar7) {
    local_404 = iVar7;
  }
  local_404 = local_404 >> 3;
  iVar19 = *(int *)(param_7 + 0x3100) - *(int *)(param_7 + 0x30f8);
  iVar7 = iVar19 + 7;
  local_408 = iVar19 + 0xe;
  if (-1 < iVar7) {
    local_408 = iVar7;
  }
  local_408 = local_408 >> 3;
  local_558 = (longlong *)&local_408;
  local_400 = 1;
  FUN_1471f133c(local_528,&local_d8);
  lVar11 = local_4a8;
  plVar17 = local_520;
  plVar25 = local_4d0;
  if ((DAT_14c760640 == 0) || (lVar13 = *(longlong *)(param_7 + 0x3108), lVar13 == 0))
  goto LAB_142d4e04c;
  cVar6 = *(char *)(local_4a8 + 0xda8);
  FUN_140304d29(&local_378,param_7,local_4f0);
  lVar5 = DAT_14ca97170;
  iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_4f8 = lVar13;
  if ((iVar7 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar7 == 2)))) {
    uVar20 = 0;
  }
  else if (iVar7 == 1) {
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    uVar20 = (ulonglong)(DVar9 != DVar10);
  }
  else {
    uVar20 = 1;
  }
  sVar35 = 1;
  if (0 < *(int *)(lVar5 + uVar20 * 4)) {
    if (*(int *)(DAT_14ca5dc68 + 4) < 1) {
      uVar31 = FUN_147430fbd(*(undefined2 *)
                              (&DAT_14ca85070 + (longlong)*(int *)(param_7 + 0x3090) * 2));
    }
    else {
      puVar21 = (uint *)(*(longlong *)(param_7 + 0x118c8) + 0x18);
      if (*(longlong *)(param_7 + 0x118c8) == 0) {
        puVar21 = (uint *)(param_7 + 0x11828);
      }
      uVar31 = *puVar21;
    }
    uVar34 = 8;
    if (uVar31 < 8) {
      uVar34 = uVar31;
    }
    sVar35 = (short)uVar34 + (ushort)(uVar34 == 0);
    lVar11 = local_4a8;
    lVar16 = local_528;
  }
  puVar1 = local_518;
  lVar13 = local_528;
  plVar12 = (longlong *)(local_4f8 + 0x19c0);
  if (*(int *)(local_4f8 + 0x19e0) == (int)*local_4f0) {
    bVar37 = *(int *)(local_4f8 + 0x19e4) == *(int *)((longlong)local_500 + 0x24);
  }
  else {
    bVar37 = false;
  }
  local_4f0 = (longlong *)(local_4f8 + 0x19d8);
  uVar14 = *(undefined8 *)(param_7 + 0x30f8);
  local_430 = *(undefined8 *)(param_7 + 0x3100);
  plVar29 = (longlong *)*plVar12;
  plVar25 = local_4d0;
  plVar17 = local_520;
  if (plVar29 == (longlong *)0x0) {
    local_4c0 = plVar12;
    if ((*(byte *)(param_7 + 0x125b0) & 1) == 0) {
LAB_142d4dc2d:
      plVar25 = local_520;
      bVar3 = *(byte *)((longlong)local_520 + 0x24);
      *(byte *)((longlong)local_520 + 0x24) = bVar3 | 2;
      *(undefined1 *)((longlong)local_520 + 0x26) = 1;
      plVar12 = (longlong *)(lVar16 + 0x1b8);
      iVar7 = *(int *)(lVar16 + 0x1c0);
      *(uint *)(lVar16 + 0x1c0) = iVar7 + 1U;
      local_4d8 = uVar14;
      if (*(uint *)(lVar16 + 0x1c4) < iVar7 + 1U) {
        FUN_14017e38e(plVar12,iVar7);
      }
      lVar13 = *plVar12;
      *(longlong **)(lVar13 + (longlong)iVar7 * 0x10) = plVar25;
      *(longlong **)(lVar13 + 8 + (longlong)iVar7 * 0x10) = local_4c0;
      if ((bVar3 & 2) == 0) {
        pcVar2 = (char *)(lVar16 + 0x4a8);
        LOCK();
        bVar37 = *(char *)(lVar16 + 0x4a8) == '\0';
        if (bVar37) {
          *(char *)(lVar16 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar37) {
          FUN_1447d2058(pcVar2);
        }
        plVar25 = (longlong *)(lVar16 + 0x4b0);
        iVar7 = *(int *)(lVar16 + 0x4b8);
        *(uint *)(lVar16 + 0x4b8) = iVar7 + 1U;
        if (*(uint *)(lVar16 + 0x4bc) < iVar7 + 1U) {
          FUN_1447f2dbc(plVar25,iVar7);
        }
        lVar16 = local_528;
        lVar13 = *plVar25;
        *(undefined8 *)(lVar13 + (longlong)iVar7 * 0x10) = 2;
        *(longlong **)(lVar13 + 8 + (longlong)iVar7 * 0x10) = local_520;
        LOCK();
        cVar6 = *pcVar2;
        if (cVar6 == '\x01') {
          *pcVar2 = '\0';
        }
        UNLOCK();
        if (cVar6 != '\x01') {
          FUN_14008cdb0(pcVar2);
        }
      }
      puVar18 = (undefined8 *)(local_4f8 + 0x19c8);
      plVar25 = *(longlong **)(local_4f8 + 0x19c8);
      if (plVar25 != (longlong *)0x0) {
        *puVar18 = 0;
        (**(code **)(*plVar25 + 0x38))();
      }
      bVar3 = *(byte *)(uVar22 + 0x24);
      *(byte *)(uVar22 + 0x24) = bVar3 | 2;
      *(undefined1 *)(uVar22 + 0x26) = 1;
      iVar7 = *(int *)(lVar16 + 0x1c0);
      *(uint *)(lVar16 + 0x1c0) = iVar7 + 1U;
      if (*(uint *)(lVar16 + 0x1c4) < iVar7 + 1U) {
        FUN_14017e38e(plVar12,iVar7);
      }
      lVar13 = *plVar12;
      *(ulonglong *)(lVar13 + (longlong)iVar7 * 0x10) = uVar22;
      *(undefined8 **)(lVar13 + 8 + (longlong)iVar7 * 0x10) = puVar18;
      if ((bVar3 & 2) == 0) {
        pcVar2 = (char *)(lVar16 + 0x4a8);
        LOCK();
        bVar37 = *(char *)(lVar16 + 0x4a8) == '\0';
        if (bVar37) {
          *(char *)(lVar16 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar37) {
          FUN_1447d2058(pcVar2);
        }
        plVar25 = (longlong *)(lVar16 + 0x4b0);
        iVar7 = *(int *)(lVar16 + 0x4b8);
        *(uint *)(lVar16 + 0x4b8) = iVar7 + 1U;
        if (*(uint *)(lVar16 + 0x4bc) < iVar7 + 1U) {
          FUN_1447f2dbc(plVar25,iVar7);
        }
        lVar16 = local_528;
        lVar13 = *plVar25;
        *(undefined8 *)(lVar13 + (longlong)iVar7 * 0x10) = 2;
        *(ulonglong *)(lVar13 + 8 + (longlong)iVar7 * 0x10) = uVar22;
        LOCK();
        cVar6 = *pcVar2;
        if (cVar6 == '\x01') {
          *pcVar2 = '\0';
        }
        UNLOCK();
        if (cVar6 != '\x01') {
          FUN_14008cdb0(pcVar2);
        }
      }
      plVar17 = DAT_14ca63b28;
      plVar25 = (longlong *)*local_4f0;
      if (plVar25 != DAT_14ca63b28) {
        *local_4f0 = (longlong)DAT_14ca63b28;
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0x30))();
        }
        if (plVar25 != (longlong *)0x0) {
          (**(code **)(*plVar25 + 0x38))(plVar25);
        }
      }
      plVar17 = local_520;
      plVar25 = local_4d0;
      uVar14 = local_4d8;
      if ((int)local_4c8 != 0) {
        puVar18 = (undefined8 *)(local_4f8 + 0x19d0);
        plVar25 = *(longlong **)(local_4f8 + 0x19d0);
        if (plVar25 != (longlong *)0x0) {
          *puVar18 = 0;
          (**(code **)(*plVar25 + 0x38))();
        }
        bVar3 = *(byte *)(uVar23 + 0x24);
        *(byte *)(uVar23 + 0x24) = bVar3 | 2;
        *(undefined1 *)(uVar23 + 0x26) = 1;
        iVar7 = *(int *)(lVar16 + 0x1c0);
        *(uint *)(lVar16 + 0x1c0) = iVar7 + 1U;
        if (*(uint *)(lVar16 + 0x1c4) < iVar7 + 1U) {
          FUN_14017e38e(plVar12,iVar7);
        }
        uVar14 = local_4d8;
        lVar13 = *plVar12;
        *(ulonglong *)(lVar13 + (longlong)iVar7 * 0x10) = uVar23;
        *(undefined8 **)(lVar13 + 8 + (longlong)iVar7 * 0x10) = puVar18;
        plVar17 = local_520;
        plVar25 = local_4d0;
        if ((bVar3 & 2) == 0) {
          pcVar2 = (char *)(lVar16 + 0x4a8);
          LOCK();
          bVar37 = *(char *)(lVar16 + 0x4a8) == '\0';
          if (bVar37) {
            *(char *)(lVar16 + 0x4a8) = '\x01';
          }
          UNLOCK();
          if (!bVar37) {
            FUN_1447d2058();
          }
          iVar7 = *(int *)(lVar16 + 0x4b8);
          *(uint *)(lVar16 + 0x4b8) = iVar7 + 1U;
          if (*(uint *)(lVar16 + 0x4bc) < iVar7 + 1U) {
            FUN_1447f2dbc((longlong *)(lVar16 + 0x4b0),iVar7);
          }
          lVar16 = *(longlong *)(lVar16 + 0x4b0);
          *(undefined8 *)(lVar16 + (longlong)iVar7 * 0x10) = 2;
          *(ulonglong *)(lVar16 + 8 + (longlong)iVar7 * 0x10) = uVar23;
          LOCK();
          cVar6 = *pcVar2;
          if (cVar6 == '\x01') {
            *pcVar2 = '\0';
          }
          UNLOCK();
          plVar17 = local_520;
          plVar25 = local_4d0;
          if (cVar6 != '\x01') {
            FUN_14008cdb0(pcVar2);
            plVar17 = local_520;
            plVar25 = local_4d0;
          }
        }
      }
    }
  }
  else if ((*(char *)(param_7 + 0x23cc) == '\0') &&
          ((bool)(bVar37 & ((*(uint *)(param_7 + 0x125b0) & 8) == 0 && _DAT_14c9f5248 == 0)))) {
    if ((int)local_4c8 == 0) {
      if (cVar6 != '\0') goto LAB_142d4dbf8;
    }
    else if (*(longlong *)(local_4f8 + 0x19d0) == 0 || cVar6 != '\0') goto LAB_142d4dbf8;
    uVar33 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_2a8 = DAT_14ca83a40;
    local_2b8._0_4_ = DAT_14ca83a30;
    local_2b8._4_4_ = DAT_14ca83a34;
    uStack_2b0._0_4_ = DAT_14ca83a38;
    uStack_2b0._4_4_ = DAT_14ca83a3c;
    local_2d8 = DAT_14ca83a68;
    local_2e8 = DAT_14ca83a58;
    uStack_2e4 = DAT_14ca83a5c;
    uStack_2e0 = DAT_14ca83a60;
    uStack_2dc = DAT_14ca83a64;
    plVar25 = *(longlong **)(param_5 + 0x308);
    uVar34 = (uint)((ulonglong)local_378 >> 0x20);
    uVar31 = (uint)local_378;
    local_4d8 = uVar14;
    local_4c0 = plVar12;
    if (plVar25 == (longlong *)0x0) {
      local_a6 = 0xff000a01;
      local_d8 = (undefined8 *)&DAT_00020008;
      local_ac = CONCAT22(sVar35,1);
      local_a8 = 0x101;
      uStack_b4 = DAT_14ca84e40;
      if ((int)uVar31 < (int)DAT_14ca84e40) {
        uStack_b4 = uVar31;
      }
      if ((int)uStack_b4 < 2) {
        uStack_b4 = 1;
      }
      local_b0 = DAT_14ca84e40;
      if ((int)uVar34 < (int)DAT_14ca84e40) {
        local_b0 = uVar34;
      }
      uStack_c0 = DAT_14ca83a40;
      uStack_d0 = (undefined8 *)CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
      local_c8 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
      local_b8 = 0;
      if ((int)local_b0 < 2) {
        local_b0 = 1;
      }
      plVar25 = (longlong *)(*(longlong *)(local_528 + 0x70) + 7U & 0xfffffffffffffff8);
      plVar17 = plVar25 + 0x24;
      uStack_bc = uVar33;
      if (*(longlong **)(local_528 + 0x78) < plVar17) {
        FUN_140023dd8(local_518,0x128);
        plVar25 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
        plVar17 = plVar25 + 0x24;
      }
      *(longlong **)(lVar13 + 0x70) = plVar17;
      FUN_1456bbb8c(plVar25,L"Lumen.ReSTIRGather.DiffuseIndirect",&local_d8,0);
      iVar7 = *(int *)(lVar13 + 0x180);
      *(uint *)(lVar13 + 0x180) = iVar7 + 1U;
      if (*(uint *)(lVar13 + 0x184) < iVar7 + 1U) {
        FUN_14472c0f6(lVar13 + 0x178,iVar7);
      }
      *(longlong **)(*(longlong *)(lVar13 + 0x178) + (longlong)iVar7 * 8) = plVar25;
      *(int *)((longlong)plVar25 + 0x9c) = *(int *)(lVar13 + 0x180) + -1;
      *(longlong **)(param_5 + 0x308) = plVar25;
    }
    puVar1 = local_518;
    lVar16 = local_528;
    uVar20 = *(ulonglong *)(param_5 + 0x318);
    local_508 = plVar25;
    if (uVar20 == 0) {
      local_a6 = 0xff000901;
      local_d8 = (undefined8 *)&DAT_00020008;
      local_ac = CONCAT22(sVar35,1);
      local_a8 = 0x101;
      uStack_b4 = DAT_14ca84e40;
      if ((int)uVar31 < (int)DAT_14ca84e40) {
        uStack_b4 = uVar31;
      }
      if ((int)uStack_b4 < 2) {
        uStack_b4 = 1;
      }
      local_b0 = DAT_14ca84e40;
      if ((int)uVar34 < (int)DAT_14ca84e40) {
        local_b0 = uVar34;
      }
      uStack_c0 = local_2a8;
      uStack_d0 = (undefined8 *)CONCAT44(local_2b8._4_4_,(int)local_2b8);
      local_c8 = (undefined *)CONCAT44(uStack_2b0._4_4_,(undefined4)uStack_2b0);
      local_b8 = 0;
      if ((int)local_b0 < 2) {
        local_b0 = 1;
      }
      uVar20 = *(longlong *)(local_528 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar36 = uVar20 + 0x120;
      uStack_bc = uVar33;
      if (*(ulonglong *)(local_528 + 0x78) < uVar36) {
        FUN_140023dd8(local_518,0x128);
        uVar20 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar36 = uVar20 + 0x120;
      }
      *(ulonglong *)(lVar16 + 0x70) = uVar36;
      FUN_1456bbb8c(uVar20,L"Lumen.ReSTIRGather.RoughSpecularIndirect",&local_d8,0);
      iVar7 = *(int *)(lVar16 + 0x180);
      *(uint *)(lVar16 + 0x180) = iVar7 + 1U;
      if (*(uint *)(lVar16 + 0x184) < iVar7 + 1U) {
        FUN_14472c0f6(lVar16 + 0x178,iVar7);
      }
      *(ulonglong *)(*(longlong *)(lVar16 + 0x178) + (longlong)iVar7 * 8) = uVar20;
      *(int *)(uVar20 + 0x9c) = *(int *)(lVar16 + 0x180) + -1;
      *(ulonglong *)(param_5 + 0x318) = uVar20;
    }
    plVar25 = local_4c0;
    puVar1 = local_518;
    lVar16 = local_528;
    uVar36 = *(ulonglong *)(param_5 + 0x328);
    local_510 = uVar20;
    if (uVar36 == 0) {
      local_a6 = 0xff001501;
      local_d8 = (undefined8 *)&DAT_00020008;
      local_ac = CONCAT22(sVar35,1);
      local_a8 = 0x101;
      uStack_d0 = (undefined8 *)CONCAT44(uStack_2e4,local_2e8);
      local_c8 = (undefined *)CONCAT44(uStack_2dc,uStack_2e0);
      uStack_c0 = local_2d8;
      local_b8 = 0;
      uStack_b4 = DAT_14ca84e40;
      if ((int)uVar31 < (int)DAT_14ca84e40) {
        uStack_b4 = uVar31;
      }
      if ((int)uStack_b4 < 2) {
        uStack_b4 = 1;
      }
      local_b0 = DAT_14ca84e40;
      if ((int)uVar34 < (int)DAT_14ca84e40) {
        local_b0 = uVar34;
      }
      if ((int)local_b0 < 2) {
        local_b0 = 1;
      }
      uVar36 = *(longlong *)(local_528 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar20 = uVar36 + 0x120;
      uStack_bc = uVar33;
      if (*(ulonglong *)(local_528 + 0x78) < uVar20) {
        FUN_140023dd8(local_518,0x128);
        uVar36 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar20 = uVar36 + 0x120;
      }
      *(ulonglong *)(lVar16 + 0x70) = uVar20;
      FUN_1456bbb8c(uVar36,L"Lumen.ReSTIRGather.ResolveVariance",&local_d8,0);
      iVar7 = *(int *)(lVar16 + 0x180);
      *(uint *)(lVar16 + 0x180) = iVar7 + 1U;
      if (*(uint *)(lVar16 + 0x184) < iVar7 + 1U) {
        FUN_14472c0f6(lVar16 + 0x178,iVar7);
      }
      *(ulonglong *)(*(longlong *)(lVar16 + 0x178) + (longlong)iVar7 * 8) = uVar36;
      *(int *)(uVar36 + 0x9c) = *(int *)(lVar16 + 0x180) + -1;
      *(ulonglong *)(param_5 + 0x328) = uVar36;
    }
    local_440 = FUN_14473c272(lVar16,plVar25,0);
    lVar11 = local_4f8;
    local_438 = (longlong *)(local_4f8 + 0x19c8);
    local_448 = FUN_14473c272(lVar16,local_438,0);
    local_4a0 = (longlong *)(lVar11 + 0x19d0);
    local_450 = FUN_14473c272(lVar16,local_4a0,0);
    puVar1 = local_518;
    uStack_c0 = DAT_14ca83a40;
    if ((int)DAT_14ca84e40 <= (int)uVar31) {
      uVar31 = DAT_14ca84e40;
    }
    uStack_b4 = uVar31;
    if ((int)uVar31 < 2) {
      uStack_b4 = 1;
    }
    local_b0 = DAT_14ca84e40;
    if ((int)uVar34 < (int)DAT_14ca84e40) {
      local_b0 = uVar34;
    }
    uStack_d0 = (undefined8 *)CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
    local_c8 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    uStack_bc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_d8 = (undefined8 *)&DAT_00020008;
    local_ac = 0x10001;
    local_a8 = 0x101;
    local_b8 = 0;
    local_a6 = 0xff004700;
    if ((int)local_b0 < 2) {
      local_b0 = 1;
    }
    uVar32 = *(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar20 = uVar32 + 0x120;
    if (*(ulonglong *)(lVar16 + 0x78) < uVar20) {
      FUN_140023dd8(local_518,0x128);
      uVar32 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar20 = uVar32 + 0x120;
    }
    *(ulonglong *)(lVar16 + 0x70) = uVar20;
    FUN_1456bbb8c(uVar32,L"Lumen.ReSTIRGather.NumHistoryFramesAccumulated",&local_d8,0);
    iVar7 = *(int *)(lVar16 + 0x180);
    *(uint *)(lVar16 + 0x180) = iVar7 + 1U;
    if (*(uint *)(lVar16 + 0x184) < iVar7 + 1U) {
      FUN_14472c0f6(lVar16 + 0x178,iVar7);
    }
    *(ulonglong *)(*(longlong *)(lVar16 + 0x178) + (longlong)iVar7 * 8) = uVar32;
    *(int *)(uVar32 + 0x9c) = *(int *)(lVar16 + 0x180) + -1;
    if (*(longlong *)(*(longlong *)(param_7 + 0x3108) + 0x1c40) == 0) {
      local_488 = local_500[0x38];
    }
    else {
      local_488 = FUN_14473c272(lVar16,*(longlong *)(param_7 + 0x3108) + 0x1c40,0);
    }
    local_458 = FUN_14473c272(lVar16,local_4f0,0);
    puVar1 = local_518;
    uVar4 = *(undefined1 *)((longlong)local_508 + 0x94);
    puVar27 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar27 + 9;
    if (*(undefined8 **)(lVar16 + 0x78) < puVar18) {
      FUN_140023dd8(local_518,0x50);
      puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar27 + 9;
    }
    *(undefined8 **)(lVar16 + 0x70) = puVar18;
    puVar27[1] = local_508[1];
    puVar27[2] = 0;
    *(undefined1 *)(puVar27 + 3) = 0;
    *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar27 + 5) = 1;
    *puVar27 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar27 + 6) = uVar4;
    *(undefined1 *)(puVar27 + 7) = 0;
    *(undefined4 *)((longlong)puVar27 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar27 + 0x35) = 0;
    puVar27[8] = local_508;
    iVar7 = *(int *)(lVar16 + 0x1a0);
    *(uint *)(lVar16 + 0x1a0) = iVar7 + 1U;
    if (*(uint *)(lVar16 + 0x1a4) < iVar7 + 1U) {
      FUN_1447568fc(local_4e0,iVar7);
    }
    puVar1 = local_518;
    *(undefined8 **)(*(longlong *)(lVar16 + 0x198) + (longlong)iVar7 * 8) = puVar27;
    *(int *)((longlong)puVar27 + 0x1c) = *(int *)(lVar16 + 0x1a0) + -1;
    uVar4 = *(undefined1 *)(local_510 + 0x94);
    local_468 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = local_468 + 9;
    if (*(undefined8 **)(lVar16 + 0x78) < puVar18) {
      FUN_140023dd8(local_518,0x50);
      local_468 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = local_468 + 9;
    }
    *(undefined8 **)(lVar16 + 0x70) = puVar18;
    local_468[1] = *(undefined8 *)(local_510 + 8);
    local_468[2] = 0;
    *(undefined1 *)(local_468 + 3) = 0;
    *(undefined8 *)((longlong)local_468 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(local_468 + 5) = 1;
    *local_468 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(local_468 + 6) = uVar4;
    *(undefined1 *)(local_468 + 7) = 0;
    *(undefined4 *)((longlong)local_468 + 0x31) = 0;
    *(undefined2 *)((longlong)local_468 + 0x35) = 0;
    local_468[8] = local_510;
    iVar7 = *(int *)(lVar16 + 0x1a0);
    *(uint *)(lVar16 + 0x1a0) = iVar7 + 1U;
    local_460 = puVar27;
    if (*(uint *)(lVar16 + 0x1a4) < iVar7 + 1U) {
      FUN_1447568fc(local_4e0,iVar7);
    }
    puVar1 = local_518;
    *(undefined8 **)(*(longlong *)(lVar16 + 0x198) + (longlong)iVar7 * 8) = local_468;
    *(int *)((longlong)local_468 + 0x1c) = *(int *)(lVar16 + 0x1a0) + -1;
    uVar4 = *(undefined1 *)(uVar36 + 0x94);
    puVar27 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar27 + 9;
    if (*(undefined8 **)(lVar16 + 0x78) < puVar18) {
      FUN_140023dd8(local_518,0x50);
      puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar27 + 9;
    }
    *(undefined8 **)(lVar16 + 0x70) = puVar18;
    puVar27[1] = *(undefined8 *)(uVar36 + 8);
    puVar27[2] = 0;
    *(undefined1 *)(puVar27 + 3) = 0;
    *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar27 + 5) = 1;
    *puVar27 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar27 + 6) = uVar4;
    *(undefined1 *)(puVar27 + 7) = 0;
    *(undefined4 *)((longlong)puVar27 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar27 + 0x35) = 0;
    puVar27[8] = uVar36;
    iVar7 = *(int *)(lVar16 + 0x1a0);
    *(uint *)(lVar16 + 0x1a0) = iVar7 + 1U;
    local_4b0 = uVar36;
    if (*(uint *)(lVar16 + 0x1a4) < iVar7 + 1U) {
      FUN_1447568fc(local_4e0,iVar7);
    }
    puVar1 = local_518;
    *(undefined8 **)(*(longlong *)(lVar16 + 0x198) + (longlong)iVar7 * 8) = puVar27;
    *(int *)((longlong)puVar27 + 0x1c) = *(int *)(lVar16 + 0x1a0) + -1;
    uVar4 = *(undefined1 *)(uVar32 + 0x94);
    puVar30 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar30 + 9;
    if (*(undefined8 **)(lVar16 + 0x78) < puVar18) {
      FUN_140023dd8(local_518,0x50);
      puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar30 + 9;
    }
    *(undefined8 **)(lVar16 + 0x70) = puVar18;
    puVar30[1] = *(undefined8 *)(uVar32 + 8);
    puVar30[2] = 0;
    *(undefined1 *)(puVar30 + 3) = 0;
    *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar30 + 5) = 1;
    *puVar30 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar30 + 6) = uVar4;
    *(undefined1 *)(puVar30 + 7) = 0;
    *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
    puVar30[8] = uVar32;
    iVar7 = *(int *)(lVar16 + 0x1a0);
    *(uint *)(lVar16 + 0x1a0) = iVar7 + 1U;
    if (*(uint *)(lVar16 + 0x1a4) < iVar7 + 1U) {
      FUN_1447568fc(local_4e0,iVar7);
    }
    bVar37 = (int)local_4c8 != 0;
    *(undefined8 **)(*(longlong *)(lVar16 + 0x198) + (longlong)iVar7 * 8) = puVar30;
    *(int *)((longlong)puVar30 + 0x1c) = *(int *)(lVar16 + 0x1a0) + -1;
    uVar14 = *(undefined8 *)(param_7 + 0x13818);
    FUN_145e859aa();
    FUN_1448e935e(uVar14,&local_d8,&DAT_14c9f5a58,bVar37);
    FUN_145e859aa();
    puVar1 = local_518;
    local_368 = (int)local_d8;
    uStack_364 = local_d8._4_4_;
    uStack_360 = (int)uStack_d0;
    uStack_35c = uStack_d0._4_4_;
    puVar24 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar18 = puVar24 + 0x2c;
    if (*(undefined8 **)(lVar16 + 0x78) < puVar18) {
      FUN_140023dd8(local_518,0x170);
      puVar24 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar18 = puVar24 + 0x2c;
    }
    lVar16 = local_528;
    *(undefined8 **)(local_528 + 0x70) = puVar18;
    *puVar24 = &PTR_FUN_14a265fe0;
    local_470 = puVar24 + 2;
    local_490 = uVar32;
    FUN_1471fc3be();
    iVar7 = *(int *)(lVar16 + 0xa0);
    *(uint *)(lVar16 + 0xa0) = iVar7 + 1U;
    if (*(uint *)(lVar16 + 0xa4) < iVar7 + 1U) {
      FUN_1448cfae8(local_4b8,iVar7);
    }
    lVar16 = local_528;
    local_478 = (undefined8 *)(local_4f8 + 0x19b0);
    *(undefined8 **)(*(longlong *)(local_528 + 0x98) + (longlong)iVar7 * 8) = puVar24;
    puVar24[2] = local_460;
    puVar24[3] = local_468;
    puVar24[4] = puVar27;
    puVar24[5] = puVar30;
    lVar11 = FUN_1447e4f80();
    plVar25 = local_500;
    cVar6 = *(char *)(lVar11 + 0x41);
    if (*(char *)(lVar11 + 0x41) == '\x03') {
      cVar6 = '\x02';
    }
    puVar24[6] = *(undefined8 *)(param_7 + 0x18);
    *(char *)(puVar24 + 7) = cVar6;
    FUN_1448e94e7(&local_d8,lVar16,local_500[0x33]);
    puVar18 = &local_d8;
    puVar27 = puVar24 + 8;
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar27 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar27 = puVar27 + 1;
    }
    lVar16 = plVar25[0x33];
    lVar11 = FUN_14482e3b2();
    cVar6 = *(char *)(lVar11 + 0x41);
    if (cVar6 == '\x03') {
      cVar6 = '\x02';
    }
    puVar24[0x14] = lVar16;
    *(char *)(puVar24 + 0x15) = cVar6;
    uVar14 = *(undefined8 *)(param_7 + 0x118d0);
    lVar16 = FUN_144a2c9be();
    cVar6 = *(char *)(lVar16 + 0x41);
    if (cVar6 == '\x03') {
      cVar6 = '\x02';
    }
    puVar24[0x16] = uVar14;
    *(char *)(puVar24 + 0x17) = cVar6;
    puVar24[0x1b] = local_440;
    puVar24[0x1c] = local_448;
    puVar24[0x1d] = local_450;
    puVar24[0x1e] = local_488;
    puVar24[0x1f] = local_458;
    *(undefined4 *)(puVar24 + 0x21) = DAT_14c760644;
    *(float *)((longlong)puVar24 + 0x10c) =
         *(float *)(param_7 + 0x13694) / *(float *)(param_7 + 0x13170);
    fVar38 = *(float *)(param_7 + 0x2914);
    if (8.0 <= fVar38) {
      fVar38 = 8.0;
    }
    if (fVar38 <= 0.5) {
      fVar38 = 0.5;
    }
    fVar39 = 0.5;
    if (*(char *)(*(longlong *)(param_7 + 8) + 0x119) == '\0') {
      fVar39 = 1.0;
    }
    fVar39 = (1.0 / SQRT(fVar38)) * _DAT_14c760648 * fVar39;
    *(float *)(puVar24 + 0x22) = (float)((int)ROUND(fVar39 + fVar39 + 0.5) >> 1);
    uVar14 = local_478[1];
    puVar24[0x24] = *local_478;
    puVar24[0x25] = uVar14;
    fVar38 = 1.0 / (float)*(int *)((longlong)local_500 + 0x24);
    fVar39 = 1.0 / (float)(int)local_500[4];
    iVar7 = *(int *)(local_4f8 + 0x19ac);
    iVar19 = *(int *)(local_4f8 + 0x19a8);
    iVar8 = *(int *)(local_4f8 + 0x19a4);
    *(float *)(puVar24 + 0x26) = ((float)*(int *)(local_4f8 + 0x19a0) + 0.5) * fVar39;
    *(float *)((longlong)puVar24 + 0x134) = ((float)iVar8 + 0.5) * fVar38;
    *(float *)(puVar24 + 0x27) = ((float)iVar19 + -1.0) * fVar39;
    *(float *)((longlong)puVar24 + 0x13c) = ((float)iVar7 + -1.0) * fVar38;
    *(undefined4 *)(puVar24 + 0x2a) = DAT_14c760608;
    puVar24[0x18] = local_520;
    puVar24[0x19] = uVar22;
    puVar24[0x1a] = uVar23;
    iVar19 = *(int *)(param_7 + 0x3104) - *(int *)(param_7 + 0x30fc);
    iVar7 = iVar19 + 7;
    iVar19 = iVar19 + 0xe;
    if (-1 < iVar7) {
      iVar19 = iVar7;
    }
    iVar8 = *(int *)(param_7 + 0x3100) - *(int *)(param_7 + 0x30f8);
    iVar7 = iVar8 + 7;
    iVar8 = iVar8 + 0xe;
    if (-1 < iVar7) {
      iVar8 = iVar7;
    }
    local_d8 = (undefined8 *)CONCAT44(iVar19 >> 3,iVar8 >> 3);
    uStack_d0 = (undefined8 *)CONCAT44(uStack_d0._4_4_,1);
    local_550 = (int *)&local_d8;
    local_558 = local_470;
    FUN_1471fc2f3(local_528,&local_369,param_9,&local_368);
    plVar12 = local_438;
    lVar11 = local_4a8;
    uVar23 = local_4b0;
    plVar25 = local_4d0;
    uVar14 = local_4d8;
    plVar17 = local_508;
    uVar22 = local_510;
    if ((*(byte *)(param_7 + 0x125b0) & 1) == 0) {
      plVar17 = (longlong *)*local_4c0;
      if (plVar17 != (longlong *)0x0) {
        *local_4c0 = 0;
        (**(code **)(*plVar17 + 0x38))();
      }
      bVar3 = *(byte *)((longlong)local_508 + 0x24);
      *(byte *)((longlong)local_508 + 0x24) = bVar3 | 2;
      *(undefined1 *)((longlong)local_508 + 0x26) = 1;
      local_520 = (longlong *)(local_528 + 0x1b8);
      iVar7 = *(int *)(local_528 + 0x1c0);
      *(uint *)(local_528 + 0x1c0) = iVar7 + 1U;
      if (*(uint *)(local_528 + 0x1c4) < iVar7 + 1U) {
        FUN_14017e38e(local_520,iVar7);
      }
      lVar13 = local_528;
      lVar16 = *local_520;
      *(longlong **)(lVar16 + (longlong)iVar7 * 0x10) = local_508;
      *(longlong **)(lVar16 + 8 + (longlong)iVar7 * 0x10) = local_4c0;
      if ((bVar3 & 2) == 0) {
        pcVar2 = (char *)(local_528 + 0x4a8);
        LOCK();
        bVar37 = *(char *)(local_528 + 0x4a8) == '\0';
        if (bVar37) {
          *(char *)(local_528 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar37) {
          FUN_1447d2058();
        }
        iVar7 = *(int *)(lVar13 + 0x4b8);
        *(uint *)(lVar13 + 0x4b8) = iVar7 + 1U;
        if (*(uint *)(lVar13 + 0x4bc) < iVar7 + 1U) {
          FUN_1447f2dbc((longlong *)(lVar13 + 0x4b0),iVar7);
        }
        uVar23 = local_4b0;
        uVar14 = local_4d8;
        lVar16 = *(longlong *)(lVar13 + 0x4b0);
        *(undefined8 *)(lVar16 + (longlong)iVar7 * 0x10) = 2;
        *(longlong **)(lVar16 + 8 + (longlong)iVar7 * 0x10) = local_508;
        LOCK();
        cVar6 = *pcVar2;
        if (cVar6 == '\x01') {
          *pcVar2 = '\0';
        }
        UNLOCK();
        if (cVar6 != '\x01') {
          FUN_14008cdb0(pcVar2);
        }
      }
      plVar17 = (longlong *)*plVar12;
      if (plVar17 != (longlong *)0x0) {
        *plVar12 = 0;
        (**(code **)(*plVar17 + 0x38))();
      }
      bVar3 = *(byte *)(local_510 + 0x24);
      *(byte *)(local_510 + 0x24) = bVar3 | 2;
      *(undefined1 *)(local_510 + 0x26) = 1;
      iVar7 = *(int *)(local_528 + 0x1c0);
      *(uint *)(local_528 + 0x1c0) = iVar7 + 1U;
      if (*(uint *)(local_528 + 0x1c4) < iVar7 + 1U) {
        FUN_14017e38e(local_520,iVar7);
      }
      lVar13 = local_528;
      lVar16 = *local_520;
      *(ulonglong *)(lVar16 + (longlong)iVar7 * 0x10) = local_510;
      *(longlong **)(lVar16 + 8 + (longlong)iVar7 * 0x10) = plVar12;
      if ((bVar3 & 2) == 0) {
        pcVar2 = (char *)(local_528 + 0x4a8);
        LOCK();
        bVar37 = *(char *)(local_528 + 0x4a8) == '\0';
        if (bVar37) {
          *(char *)(local_528 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar37) {
          FUN_1447d2058();
        }
        iVar7 = *(int *)(lVar13 + 0x4b8);
        *(uint *)(lVar13 + 0x4b8) = iVar7 + 1U;
        if (*(uint *)(lVar13 + 0x4bc) < iVar7 + 1U) {
          FUN_1447f2dbc((longlong *)(lVar13 + 0x4b0),iVar7);
        }
        uVar23 = local_4b0;
        uVar14 = local_4d8;
        lVar16 = *(longlong *)(lVar13 + 0x4b0);
        *(undefined8 *)(lVar16 + (longlong)iVar7 * 0x10) = 2;
        *(ulonglong *)(lVar16 + 8 + (longlong)iVar7 * 0x10) = local_510;
        LOCK();
        cVar6 = *pcVar2;
        if (cVar6 == '\x01') {
          *pcVar2 = '\0';
        }
        UNLOCK();
        if (cVar6 != '\x01') {
          FUN_14008cdb0(pcVar2);
        }
      }
      plVar17 = (longlong *)*local_4f0;
      if (plVar17 != (longlong *)0x0) {
        *local_4f0 = 0;
        (**(code **)(*plVar17 + 0x38))();
      }
      uVar22 = local_490;
      bVar3 = *(byte *)(local_490 + 0x24);
      *(byte *)(local_490 + 0x24) = bVar3 | 2;
      *(undefined1 *)(local_490 + 0x26) = 1;
      iVar7 = *(int *)(local_528 + 0x1c0);
      *(uint *)(local_528 + 0x1c0) = iVar7 + 1U;
      if (*(uint *)(local_528 + 0x1c4) < iVar7 + 1U) {
        FUN_14017e38e(local_520,iVar7);
      }
      lVar13 = local_528;
      lVar16 = *local_520;
      *(ulonglong *)(lVar16 + (longlong)iVar7 * 0x10) = uVar22;
      *(longlong **)(lVar16 + 8 + (longlong)iVar7 * 0x10) = local_4f0;
      if ((bVar3 & 2) == 0) {
        pcVar2 = (char *)(local_528 + 0x4a8);
        LOCK();
        bVar37 = *(char *)(local_528 + 0x4a8) == '\0';
        if (bVar37) {
          *(char *)(local_528 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar37) {
          FUN_1447d2058(pcVar2);
        }
        iVar7 = *(int *)(lVar13 + 0x4b8);
        *(uint *)(lVar13 + 0x4b8) = iVar7 + 1U;
        if (*(uint *)(lVar13 + 0x4bc) < iVar7 + 1U) {
          FUN_1447f2dbc((longlong *)(lVar13 + 0x4b0),iVar7);
        }
        uVar23 = local_4b0;
        uVar14 = local_4d8;
        lVar16 = *(longlong *)(lVar13 + 0x4b0);
        *(undefined8 *)(lVar16 + (longlong)iVar7 * 0x10) = 2;
        *(ulonglong *)(lVar16 + 8 + (longlong)iVar7 * 0x10) = local_490;
        LOCK();
        cVar6 = *pcVar2;
        if (cVar6 == '\x01') {
          *pcVar2 = '\0';
        }
        UNLOCK();
        if (cVar6 != '\x01') {
          FUN_14008cdb0(pcVar2);
        }
      }
      plVar17 = local_508;
      uVar22 = local_510;
      if ((int)local_4c8 != 0) {
        plVar17 = (longlong *)*local_4a0;
        if (plVar17 != (longlong *)0x0) {
          *local_4a0 = 0;
          (**(code **)(*plVar17 + 0x38))();
        }
        bVar3 = *(byte *)(uVar23 + 0x24);
        *(byte *)(uVar23 + 0x24) = bVar3 | 2;
        *(undefined1 *)(uVar23 + 0x26) = 1;
        iVar7 = *(int *)(local_528 + 0x1c0);
        *(uint *)(local_528 + 0x1c0) = iVar7 + 1U;
        if (*(uint *)(local_528 + 0x1c4) < iVar7 + 1U) {
          FUN_14017e38e(local_520,iVar7);
        }
        lVar13 = local_528;
        lVar16 = *local_520;
        *(ulonglong *)(lVar16 + (longlong)iVar7 * 0x10) = uVar23;
        *(longlong **)(lVar16 + 8 + (longlong)iVar7 * 0x10) = local_4a0;
        plVar17 = local_508;
        uVar22 = local_510;
        if ((bVar3 & 2) == 0) {
          pcVar2 = (char *)(local_528 + 0x4a8);
          LOCK();
          bVar37 = *(char *)(local_528 + 0x4a8) == '\0';
          if (bVar37) {
            *(char *)(local_528 + 0x4a8) = '\x01';
          }
          UNLOCK();
          if (!bVar37) {
            FUN_1447d2058();
          }
          iVar7 = *(int *)(lVar13 + 0x4b8);
          *(uint *)(lVar13 + 0x4b8) = iVar7 + 1U;
          if (*(uint *)(lVar13 + 0x4bc) < iVar7 + 1U) {
            FUN_1447f2dbc((longlong *)(lVar13 + 0x4b0),iVar7);
          }
          uVar14 = local_4d8;
          lVar16 = *(longlong *)(lVar13 + 0x4b0);
          *(undefined8 *)(lVar16 + (longlong)iVar7 * 0x10) = 2;
          *(ulonglong *)(lVar16 + 8 + (longlong)iVar7 * 0x10) = uVar23;
          LOCK();
          cVar6 = *pcVar2;
          if (cVar6 == '\x01') {
            *pcVar2 = '\0';
          }
          UNLOCK();
          plVar17 = local_508;
          uVar22 = local_510;
          if (cVar6 != '\x01') {
            FUN_14008cdb0(pcVar2);
            plVar17 = local_508;
            uVar22 = local_510;
          }
        }
      }
    }
  }
  else {
LAB_142d4dbf8:
    if ((*(uint *)(param_7 + 0x125b0) & 1) == 0) {
      *plVar12 = 0;
      local_4c0 = plVar12;
      (**(code **)(*plVar29 + 0x38))();
      goto LAB_142d4dc2d;
    }
  }
  if ((*(byte *)(param_7 + 0x125b0) & 1) == 0) {
    *(undefined8 *)(local_4f8 + 0x19a0) = uVar14;
    *(undefined8 *)(local_4f8 + 0x19a8) = local_430;
    fVar39 = 1.0 / (float)(int)local_500[4];
    fVar38 = 1.0 / (float)*(int *)((longlong)local_500 + 0x24);
    iVar7 = *(int *)(param_7 + 0x30f8);
    iVar19 = *(int *)(param_7 + 0x30fc);
    fVar40 = (float)(*(int *)(param_7 + 0x3100) - iVar7);
    fVar41 = (float)(*(int *)(param_7 + 0x3104) - iVar19);
    *(float *)(local_4f8 + 0x19b0) = fVar39 * fVar40 * 0.5;
    *(float *)(local_4f8 + 0x19b4) = fVar38 * fVar41 * -0.5;
    *(float *)(local_4f8 + 0x19b8) = ((float)iVar19 + fVar41 * 0.5) * fVar38;
    *(float *)(local_4f8 + 0x19bc) = ((float)iVar7 + fVar40 * 0.5) * fVar39;
    *(undefined8 *)(local_4f8 + 0x19e8) = local_378;
    *(longlong *)(local_4f8 + 0x19e0) = local_500[4];
  }
LAB_142d4e04c:
  puVar1 = local_518;
  lVar16 = local_528;
  if ((int)local_4c8 != 0) {
    local_a6 = 0xff000900;
    local_d8 = (undefined8 *)&DAT_00020008;
    local_ac = 0x10001;
    local_a8 = 0x101;
    uStack_b4 = DAT_14ca84e40;
    if ((int)(uint)local_420 < (int)DAT_14ca84e40) {
      uStack_b4 = (uint)local_420;
    }
    if ((int)uStack_b4 < 2) {
      uStack_b4 = 1;
    }
    uVar31 = (uint)((ulonglong)local_420 >> 0x20);
    local_b0 = DAT_14ca84e40;
    if ((int)uVar31 < (int)DAT_14ca84e40) {
      local_b0 = uVar31;
    }
    uStack_c0 = local_2f8;
    uStack_d0 = local_308;
    local_c8 = (undefined *)lStack_300;
    local_b8 = 0;
    uStack_bc = (int)local_4e8;
    if ((int)local_b0 < 2) {
      local_b0 = 1;
    }
    plVar29 = (longlong *)(*(longlong *)(local_528 + 0x70) + 7U & 0xfffffffffffffff8);
    plVar12 = plVar29 + 0x24;
    local_510 = uVar22;
    local_508 = plVar17;
    if (*(longlong **)(local_528 + 0x78) < plVar12) {
      FUN_140023dd8(local_518,0x128);
      plVar29 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
      plVar12 = plVar29 + 0x24;
    }
    *(longlong **)(lVar16 + 0x70) = plVar12;
    FUN_1456bbb8c(plVar29,L"Lumen.ReSTIRGather.FilteredDiffuseIndirect",&local_d8,0);
    uVar31 = local_494;
    iVar7 = *(int *)(lVar16 + 0x180);
    *(uint *)(lVar16 + 0x180) = iVar7 + 1U;
    if (*(uint *)(lVar16 + 0x184) < iVar7 + 1U) {
      FUN_14472c0f6(lVar16 + 0x178,iVar7);
    }
    puVar1 = local_518;
    *(longlong **)(*(longlong *)(lVar16 + 0x178) + (longlong)iVar7 * 8) = plVar29;
    *(int *)((longlong)plVar29 + 0x9c) = *(int *)(lVar16 + 0x180) + -1;
    local_a6 = 0xff000900;
    local_d8 = (undefined8 *)&DAT_00020008;
    local_ac = 0x10001;
    local_a8 = 0x101;
    uStack_b4 = DAT_14ca84e40;
    if ((int)(uint)local_428 < (int)DAT_14ca84e40) {
      uStack_b4 = (uint)local_428;
    }
    if ((int)uStack_b4 < 2) {
      uStack_b4 = 1;
    }
    uVar34 = (uint)((ulonglong)local_428 >> 0x20);
    local_b0 = DAT_14ca84e40;
    if ((int)uVar34 < (int)DAT_14ca84e40) {
      local_b0 = uVar34;
    }
    uStack_c0 = local_318;
    uStack_d0 = (undefined8 *)CONCAT44(uStack_324,local_328);
    local_c8 = (undefined *)CONCAT44(uStack_31c,uStack_320);
    local_b8 = 0;
    uStack_bc = uVar31;
    if ((int)local_b0 < 2) {
      local_b0 = 1;
    }
    uVar22 = *(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar20 = uVar22 + 0x120;
    local_4b0 = uVar23;
    if (*(ulonglong *)(lVar16 + 0x78) < uVar20) {
      FUN_140023dd8(local_518,0x128);
      uVar22 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar20 = uVar22 + 0x120;
    }
    *(ulonglong *)(lVar16 + 0x70) = uVar20;
    FUN_1456bbb8c(uVar22,L"Lumen.ReSTIRGather.FilteredRoughSpecularIndirect",&local_d8,0);
    iVar7 = *(int *)(lVar16 + 0x180);
    *(uint *)(lVar16 + 0x180) = iVar7 + 1U;
    if (*(uint *)(lVar16 + 0x184) < iVar7 + 1U) {
      FUN_14472c0f6(lVar16 + 0x178,iVar7);
    }
    puVar1 = local_518;
    *(ulonglong *)(*(longlong *)(lVar16 + 0x178) + (longlong)iVar7 * 8) = uVar22;
    *(int *)(uVar22 + 0x9c) = *(int *)(lVar16 + 0x180) + -1;
    puVar27 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar18 = puVar27 + 0x26;
    if (*(undefined8 **)(lVar16 + 0x78) < puVar18) {
      FUN_140023dd8(local_518,0x140);
      puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar18 = puVar27 + 0x26;
    }
    *(undefined8 **)(local_528 + 0x70) = puVar18;
    *puVar27 = &PTR_FUN_14a266878;
    puVar27[0x18] = 0;
    puVar27[2] = 0;
    puVar27[3] = 0;
    puVar27[4] = 0;
    puVar27[5] = 0;
    puVar27[0xc] = 0;
    puVar27[0xd] = 0;
    puVar27[0xe] = 0;
    puVar27[0xf] = 0;
    puVar27[0x10] = 0;
    puVar27[0x12] = 0;
    puVar27[0x13] = 0;
    puVar27[0x14] = 0;
    puVar27[0x15] = 0;
    puVar27[0x16] = 0;
    *(undefined1 *)(puVar27 + 0x19) = 1;
    puVar27[0x1a] = 0;
    *(undefined1 *)(puVar27 + 0x1b) = 1;
    puVar27[0x1c] = 0;
    *(undefined1 *)(puVar27 + 0x1d) = 1;
    puVar27[0x1e] = 0;
    *(undefined1 *)(puVar27 + 0x1f) = 1;
    puVar27[0x20] = 0;
    puVar27[0x21] = 0;
    puVar27[0x22] = 0;
    iVar7 = *(int *)(local_528 + 0xa0);
    *(uint *)(local_528 + 0xa0) = iVar7 + 1U;
    if (*(uint *)(local_528 + 0xa4) < iVar7 + 1U) {
      FUN_1448cfae8(local_4b8,iVar7);
    }
    puVar1 = local_518;
    lVar16 = local_528;
    *(undefined8 **)(*(longlong *)(local_528 + 0x98) + (longlong)iVar7 * 8) = puVar27;
    uVar4 = *(undefined1 *)((longlong)plVar29 + 0x94);
    puVar30 = (undefined8 *)(*(longlong *)(local_528 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar30 + 9;
    if (*(undefined8 **)(local_528 + 0x78) < puVar18) {
      FUN_140023dd8(local_518,0x50);
      puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar30 + 9;
    }
    plVar17 = puVar27 + 2;
    *(undefined8 **)(lVar16 + 0x70) = puVar18;
    puVar30[1] = plVar29[1];
    puVar30[2] = 0;
    *(undefined1 *)(puVar30 + 3) = 0;
    *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar30 + 5) = 0;
    *puVar30 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar30 + 6) = uVar4;
    *(undefined1 *)(puVar30 + 7) = 0;
    *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
    puVar30[8] = plVar29;
    iVar7 = *(int *)(lVar16 + 0x1a0);
    *(uint *)(lVar16 + 0x1a0) = iVar7 + 1U;
    if (*(uint *)(lVar16 + 0x1a4) < iVar7 + 1U) {
      FUN_1447568fc(local_4e0,iVar7);
    }
    puVar1 = local_518;
    *(undefined8 **)(*(longlong *)(lVar16 + 0x198) + (longlong)iVar7 * 8) = puVar30;
    *(int *)((longlong)puVar30 + 0x1c) = *(int *)(lVar16 + 0x1a0) + -1;
    *plVar17 = (longlong)puVar30;
    uVar4 = *(undefined1 *)(uVar22 + 0x94);
    puVar30 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar30 + 9;
    local_520 = plVar17;
    if (*(undefined8 **)(lVar16 + 0x78) < puVar18) {
      FUN_140023dd8(local_518,0x50);
      puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar30 + 9;
    }
    *(undefined8 **)(lVar16 + 0x70) = puVar18;
    puVar30[1] = *(undefined8 *)(uVar22 + 8);
    puVar30[2] = 0;
    *(undefined1 *)(puVar30 + 3) = 0;
    *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar30 + 5) = 0;
    *puVar30 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar30 + 6) = uVar4;
    *(undefined1 *)(puVar30 + 7) = 0;
    *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
    puVar30[8] = uVar22;
    iVar7 = *(int *)(lVar16 + 0x1a0);
    *(uint *)(lVar16 + 0x1a0) = iVar7 + 1U;
    if (*(uint *)(lVar16 + 0x1a4) < iVar7 + 1U) {
      FUN_1447568fc(local_4e0,iVar7);
    }
    *(undefined8 **)(*(longlong *)(lVar16 + 0x198) + (longlong)iVar7 * 8) = puVar30;
    *(int *)((longlong)puVar30 + 0x1c) = *(int *)(lVar16 + 0x1a0) + -1;
    puVar27[3] = puVar30;
    puVar27[0x20] = local_508;
    puVar27[0x21] = local_510;
    puVar27[0x22] = local_4b0;
    *(undefined4 *)(puVar27 + 0x23) = DAT_14c760650;
    *(undefined4 *)((longlong)puVar27 + 0x11c) = DAT_14c760654;
    *(undefined4 *)(puVar27 + 0x24) = DAT_14c760658;
    *(undefined4 *)((longlong)puVar27 + 0x124) = DAT_14c76065c;
    *(undefined4 *)(puVar27 + 0x25) = DAT_14c760660;
    lVar11 = FUN_1447e4f80();
    cVar6 = *(char *)(lVar11 + 0x41);
    if (*(char *)(lVar11 + 0x41) == '\x03') {
      cVar6 = '\x02';
    }
    puVar27[0x1a] = *(undefined8 *)(param_7 + 0x18);
    *(char *)(puVar27 + 0x1b) = cVar6;
    lVar11 = local_500[0x33];
    lVar13 = FUN_14482e3b2();
    cVar6 = *(char *)(lVar13 + 0x41);
    if (cVar6 == '\x03') {
      cVar6 = '\x02';
    }
    puVar27[0x1c] = lVar11;
    *(char *)(puVar27 + 0x1d) = cVar6;
    uVar14 = *(undefined8 *)(param_7 + 0x118d0);
    lVar11 = FUN_144a2c9be();
    cVar6 = *(char *)(lVar11 + 0x41);
    if (cVar6 == '\x03') {
      cVar6 = '\x02';
    }
    puVar27[0x1e] = uVar14;
    *(char *)(puVar27 + 0x1f) = cVar6;
    uVar14 = *(undefined8 *)(param_7 + 0x13818);
    FUN_145f72fe4();
    FUN_1448e935e(uVar14,&local_d8,&DAT_14c9f5b80,0);
    FUN_145f72fe4();
    local_2b8._0_4_ = (int)local_d8;
    local_2b8._4_4_ = local_d8._4_4_;
    uStack_2b0._0_4_ = SUB84(uStack_d0,0);
    uStack_2b0._4_4_ = uStack_d0._4_4_;
    iVar19 = *(int *)(param_7 + 0x3104) - *(int *)(param_7 + 0x30fc);
    iVar7 = iVar19 + 7;
    local_410 = iVar19 + 0xe;
    if (-1 < iVar7) {
      local_410 = iVar7;
    }
    local_410 = local_410 >> 3;
    iVar19 = *(int *)(param_7 + 0x3100) - *(int *)(param_7 + 0x30f8);
    iVar7 = iVar19 + 7;
    local_414 = iVar19 + 0xe;
    if (-1 < iVar7) {
      local_414 = iVar7;
    }
    local_414 = local_414 >> 3;
    local_550 = &local_414;
    local_40c = 1;
    local_558 = local_520;
    FUN_1471f13ee(lVar16,&local_d8,param_9);
    plVar17 = plVar29;
    lVar11 = local_4a8;
  }
  plVar25[2] = 0;
  plVar25[3] = 0;
  *plVar25 = (longlong)plVar17;
  plVar25[1] = *(longlong *)(local_480 + 8);
  plVar25[2] = uVar22;
  if ((DAT_14c760664 != 0) && ((*(byte *)(lVar11 + 0xfa) & 0x20) != 0)) {
    local_530 = param_9;
    local_540 = DAT_14c760668;
    local_548 = local_358;
    local_550 = param_6;
    local_558 = local_500;
    local_538 = 0x3f800000;
    FUN_140304803(&local_d8,local_528,*(undefined8 *)(lVar11 + 8),param_7);
    *param_10 = (int)local_d8;
    param_10[1] = local_d8._4_4_;
    param_10[2] = (int)uStack_d0;
    param_10[3] = uStack_d0._4_4_;
  }
  if ((local_70 ^ (ulonglong)auStack_578) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar25;
}


