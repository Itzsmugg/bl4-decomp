// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148e20814 FUN_148e20814 body=101 status=ok
// SIG undefined FUN_148e20814(void)

void FUN_148e20814(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a57f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e2087a FUN_148e2087a body=134 status=ok
// SIG undefined FUN_148e2087a(void)

void FUN_148e2087a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b412de0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a57f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e208f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e20900 FUN_148e20900 body=44 status=ok
// SIG undefined FUN_148e20900(void)

void FUN_148e20900(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e20929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e2092c FUN_148e2092c body=29 status=ok
// SIG undefined FUN_148e2092c(void)

undefined8 FUN_148e2092c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e20964 FUN_148e20964 body=29 status=ok
// SIG undefined FUN_148e20964(void)

bool FUN_148e20964(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e20982 FUN_148e20982 body=26 status=ok
// SIG undefined FUN_148e20982(void)

bool FUN_148e20982(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e2099c FUN_148e2099c body=24 status=ok
// SIG undefined FUN_148e2099c(void)

bool FUN_148e2099c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e209b4 FUN_148e209b4 body=101 status=ok
// SIG undefined FUN_148e209b4(void)

void FUN_148e209b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a5860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e20a1a FUN_148e20a1a body=101 status=ok
// SIG undefined FUN_148e20a1a(void)

void FUN_148e20a1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a5860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e20a80 FUN_148e20a80 body=134 status=ok
// SIG undefined FUN_148e20a80(void)

void FUN_148e20a80(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a5860;
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
                    /* WARNING: Could not recover jumptable at 0x000148e20af7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e20b06 FUN_148e20b06 body=44 status=ok
// SIG undefined FUN_148e20b06(void)

void FUN_148e20b06(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e20b2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e20b32 FUN_148e20b32 body=156 status=ok
// SIG undefined FUN_148e20b32(void)

bool FUN_148e20b32(longlong param_1,undefined8 param_2)

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



// FUNCTION 148e20bd0 FUN_148e20bd0 body=29 status=ok
// SIG undefined FUN_148e20bd0(void)

undefined8 FUN_148e20bd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e20c08 FUN_148e20c08 body=29 status=ok
// SIG undefined FUN_148e20c08(void)

bool FUN_148e20c08(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e20c26 FUN_148e20c26 body=26 status=ok
// SIG undefined FUN_148e20c26(void)

bool FUN_148e20c26(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e20c40 FUN_148e20c40 body=24 status=ok
// SIG undefined FUN_148e20c40(void)

bool FUN_148e20c40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e20c58 FUN_148e20c58 body=101 status=ok
// SIG undefined FUN_148e20c58(void)

void FUN_148e20c58(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a58d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e20cbe FUN_148e20cbe body=101 status=ok
// SIG undefined FUN_148e20cbe(void)

void FUN_148e20cbe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a58d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e20d24 FUN_148e20d24 body=134 status=ok
// SIG undefined FUN_148e20d24(void)

void FUN_148e20d24(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a58d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e20d9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e20daa FUN_148e20daa body=39 status=ok
// SIG undefined FUN_148e20daa(void)

void FUN_148e20daa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e20dcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e20dd2 FUN_148e20dd2 body=146 status=ok
// SIG undefined FUN_148e20dd2(void)

bool FUN_148e20dd2(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
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



// FUNCTION 148e20e66 FUN_148e20e66 body=29 status=ok
// SIG undefined FUN_148e20e66(void)

undefined8 FUN_148e20e66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e20e9e FUN_148e20e9e body=29 status=ok
// SIG undefined FUN_148e20e9e(void)

bool FUN_148e20e9e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e20ebc FUN_148e20ebc body=26 status=ok
// SIG undefined FUN_148e20ebc(void)

bool FUN_148e20ebc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e20ed6 FUN_148e20ed6 body=24 status=ok
// SIG undefined FUN_148e20ed6(void)

bool FUN_148e20ed6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e20eee FUN_148e20eee body=101 status=ok
// SIG undefined FUN_148e20eee(void)

void FUN_148e20eee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a5940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e20f54 FUN_148e20f54 body=101 status=ok
// SIG undefined FUN_148e20f54(void)

void FUN_148e20f54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a5940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e20fba FUN_148e20fba body=134 status=ok
// SIG undefined FUN_148e20fba(void)

void FUN_148e20fba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a5940;
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
                    /* WARNING: Could not recover jumptable at 0x000148e21031. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e21040 FUN_148e21040 body=68 status=ok
// SIG undefined FUN_148e21040(void)

void FUN_148e21040(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e21081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e21084 FUN_148e21084 body=183 status=ok
// SIG undefined FUN_148e21084(void)

bool FUN_148e21084(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e2113c FUN_148e2113c body=95 status=ok
// SIG undefined FUN_148e2113c(void)

void FUN_148e2113c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 148e2119c FUN_148e2119c body=31 status=ok
// SIG undefined FUN_148e2119c(void)

undefined8 FUN_148e2119c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e211d4 FUN_148e211d4 body=101 status=ok
// SIG undefined FUN_148e211d4(void)

void FUN_148e211d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a5a80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a5a10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e2123a FUN_148e2123a body=101 status=ok
// SIG undefined FUN_148e2123a(void)

void FUN_148e2123a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a5a80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a5a10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e212a0 FUN_148e212a0 body=134 status=ok
// SIG undefined FUN_148e212a0(void)

void FUN_148e212a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9a5a80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a5a10;
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
                    /* WARNING: Could not recover jumptable at 0x000148e21317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e2133a FUN_148e2133a body=114 status=ok
// SIG undefined FUN_148e2133a(void)

void FUN_148e2133a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
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



// FUNCTION 148e213ac FUN_148e213ac body=68 status=ok
// SIG undefined FUN_148e213ac(void)

undefined8 * FUN_148e213ac(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a5b30;
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



// FUNCTION 148e213f4 FUN_148e213f4 body=81 status=ok
// SIG undefined FUN_148e213f4(void)

undefined8 FUN_148e213f4(longlong param_1)

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



// FUNCTION 148e2144c FUN_148e2144c body=89 status=ok
// SIG undefined FUN_148e2144c(void)

bool FUN_148e2144c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148e21497;
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
LAB_148e21497:
  return lVar6 == param_2;
}



// FUNCTION 148e214c2 FUN_148e214c2 body=118 status=ok
// SIG undefined FUN_148e214c2(void)

void FUN_148e214c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a5b30;
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



// FUNCTION 148e21538 FUN_148e21538 body=118 status=ok
// SIG undefined FUN_148e21538(void)

void FUN_148e21538(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a5b30;
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



// FUNCTION 148e215ae FUN_148e215ae body=156 status=ok
// SIG undefined FUN_148e215ae(void)

void FUN_148e215ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972de0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a5b30;
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
                    /* WARNING: Could not recover jumptable at 0x000148e2163a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e2164a FUN_148e2164a body=104 status=ok
// SIG undefined FUN_148e2164a(void)

void FUN_148e2164a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148e21697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e216a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148e216b2 FUN_148e216b2 body=101 status=ok
// SIG undefined FUN_148e216b2(void)

ulonglong FUN_148e216b2(longlong param_1)

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
LAB_148e2170c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e2170c;
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



// FUNCTION 148e21718 FUN_148e21718 body=247 status=ok
// SIG undefined FUN_148e21718(void)

undefined8 * FUN_148e21718(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b9a5ba0;
  FUN_140724c88(param_1 + 2);
  param_1[2] = &PTR_FUN_14b9a42b0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = param_2;
  param_1[0x20] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8;
  param_1[0x1e] = DAT_14c8464e0;
  param_1[0x1f] = uVar3;
  param_1[0x23] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8;
  param_1[0x21] = DAT_14c8464e0;
  param_1[0x22] = uVar3;
  uVar3 = DAT_14c8464e8;
  param_1[0x24] = DAT_14c8464e0;
  param_1[0x25] = uVar3;
  param_1[0x26] = DAT_14c8464f0;
  uVar2 = DAT_14c8462d0;
  uVar1 = (undefined4)DAT_14c8462c8;
  uVar4 = DAT_14c8462c0._4_4_ ^ 0x80000000;
  uVar5 = DAT_14c8462c8._4_4_ ^ 0x80000000;
  *(undefined4 *)(param_1 + 0x27) = (undefined4)DAT_14c8462c0;
  *(uint *)((longlong)param_1 + 0x13c) = uVar4;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(uint *)((longlong)param_1 + 0x144) = uVar5;
  param_1[0x29] = uVar2 ^ 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x42480000;
  return param_1;
}



// FUNCTION 148e2181a FUN_148e2181a body=29 status=ok
// SIG undefined FUN_148e2181a(void)

undefined8 FUN_148e2181a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e21838 FUN_148e21838 body=66 status=ok
// SIG undefined FUN_148e21838(void)

void FUN_148e21838(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9a42b0;
  FUN_1402c741b(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_140333e92(param_1);
  return;
}



// FUNCTION 148e2187a FUN_148e2187a body=167 status=ok
// SIG undefined FUN_148e2187a(void)

void FUN_148e2187a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148e218f5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148e218f5;
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
LAB_148e218f5:
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
                    /* WARNING: Could not recover jumptable at 0x000148e21915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148e21922 FUN_148e21922 body=153 status=ok
// SIG undefined FUN_148e21922(void)

undefined8 * FUN_148e21922(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b9a5bc0;
  FUN_140724c88(param_1 + 2);
  param_1[2] = &PTR_FUN_14b9a0a70;
  *(undefined1 *)(param_1 + 0x1c) = 2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = param_2;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x32) = 1;
  return param_1;
}



// FUNCTION 148e219c6 FUN_148e219c6 body=29 status=ok
// SIG undefined FUN_148e219c6(void)

undefined8 FUN_148e219c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e219e4 FUN_148e219e4 body=167 status=ok
// SIG undefined FUN_148e219e4(void)

void FUN_148e219e4(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148e21a5f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148e21a5f;
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
LAB_148e21a5f:
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
                    /* WARNING: Could not recover jumptable at 0x000148e21a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148e21a8c FUN_148e21a8c body=48 status=ok
// SIG undefined FUN_148e21a8c(void)

void FUN_148e21a8c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,4);
  }
  return;
}



// FUNCTION 148e21abc FUN_148e21abc body=147 status=ok
// SIG undefined FUN_148e21abc(void)

void FUN_148e21abc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148e21b50 FUN_148e21b50 body=141 status=ok
// SIG undefined FUN_148e21b50(void)

void FUN_148e21b50(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = (uVar2 * 3 >> 3) + uVar2 + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 * 0x50,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 / 0x50)) {
    uVar3 = uVar2 / 0x50 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,0x50,8);
  return;
}



// FUNCTION 148e21bf8 FUN_148e21bf8 body=29 status=ok
// SIG undefined FUN_148e21bf8(void)

bool FUN_148e21bf8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 == param_2;
}



// FUNCTION 148e21c16 FUN_148e21c16 body=101 status=ok
// SIG undefined FUN_148e21c16(void)

void FUN_148e21c16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a5c70;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b9a5c00;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 148e21c7c FUN_148e21c7c body=101 status=ok
// SIG undefined FUN_148e21c7c(void)

void FUN_148e21c7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a5c70;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b9a5c00;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 148e21ce2 FUN_148e21ce2 body=134 status=ok
// SIG undefined FUN_148e21ce2(void)

void FUN_148e21ce2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 uVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9a5c70;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a5c00;
  DVar2 = *(DWORD *)(param_1 + 0x24);
  DVar3 = *(DWORD *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar2;
  p_Var1->Flags = DVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var1->SpareWORD = (short)((uint)uVar4 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e21d59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e21d68 FUN_148e21d68 body=46 status=ok
// SIG undefined FUN_148e21d68(void)

void FUN_148e21d68(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000148e21d93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))
            (uVar1,param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 148e21d9a FUN_148e21d9a body=49 status=ok
// SIG undefined FUN_148e21d9a(void)

void FUN_148e21d9a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148e21dcc FUN_148e21dcc body=73 status=ok
// SIG undefined FUN_148e21dcc(void)

undefined8 * FUN_148e21dcc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9a70e8;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140c69d40(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e21e16 FUN_148e21e16 body=48 status=ok
// SIG undefined FUN_148e21e16(void)

void FUN_148e21e16(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x1c8,8);
  }
  return;
}



// FUNCTION 148e21e46 FUN_148e21e46 body=38 status=ok
// SIG undefined FUN_148e21e46(void)

undefined8 FUN_148e21e46(undefined8 param_1,int param_2)

{
  FUN_145abb798();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e21e70 FUN_148e21e70 body=85 status=ok
// SIG undefined FUN_148e21e70(void)

void FUN_148e21e70(longlong *param_1)

{
  FUN_1447a1747(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148e21ec6 FUN_148e21ec6 body=97 status=ok
// SIG undefined FUN_148e21ec6(void)

void FUN_148e21ec6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x78);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148e21f3e FUN_148e21f3e body=63 status=ok
// SIG undefined FUN_148e21f3e(void)

void FUN_148e21f3e(longlong *param_1)

{
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e21f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148e21f7e FUN_148e21f7e body=59 status=ok
// SIG undefined FUN_148e21f7e(void)

void FUN_148e21f7e(longlong *param_1)

{
  FUN_148e21fb9(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148e21fb9 FUN_148e21fb9 body=61 status=ok
// SIG undefined FUN_148e21fb9(void)

void FUN_148e21fb9(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148e2200a FUN_148e2200a body=269 status=ok
// SIG undefined FUN_148e2200a(void)

int * FUN_148e2200a(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbd5658;
  iVar3 = DAT_14cbd5630;
  if (DAT_14cbd565c == 0) {
    iVar2 = DAT_14cbd5630 + 1;
    bVar7 = DAT_14cbd5634 == DAT_14cbd5630;
    DAT_14cbd5630 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cbd5628,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbd5638,1);
    puVar4 = DAT_14cbd5648;
    if (DAT_14cbd5648 == (undefined4 *)0x0) {
      puVar4 = &DAT_14cbd5638;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar4[iVar5 >> 5] = puVar4[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cbd5658;
    DAT_14cbd5658 = *(int *)(DAT_14cbd5628 + 4 + lVar6 * 0x20);
    DAT_14cbd565c = DAT_14cbd565c + -1;
    if (DAT_14cbd565c != 0) {
      *(undefined4 *)(DAT_14cbd5628 + (longlong)DAT_14cbd5658 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbd5638;
  if (DAT_14cbd5648 != (undefined4 *)0x0) {
    puVar4 = DAT_14cbd5648;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cbd5628;
  return param_1;
}



// FUNCTION 148e22118 FUN_148e22118 body=200 status=ok
// SIG undefined FUN_148e22118(void)

undefined8 FUN_148e22118(uint param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  
  if (1 < (uint)(DAT_14cbd5630 - DAT_14cbd565c)) {
    puVar9 = &DAT_14cbd5660;
    if (DAT_14cbd5668 != (undefined *)0x0) {
      puVar9 = DAT_14cbd5668;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(DAT_14cbd5670 - 1U & param_1) * 4);
    if (iVar10 != -1) {
      do {
        piVar3 = (int *)(DAT_14cbd5628 + (longlong)iVar10 * 0x20);
        if (*(int *)(DAT_14cbd5628 + (longlong)iVar10 * 0x20) == *param_2) {
          plVar4 = *(longlong **)(piVar3 + 4);
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
          iVar5 = *param_2;
          iVar6 = param_2[1];
          iVar7 = param_2[2];
          iVar8 = param_2[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_2 + 4);
          *piVar3 = iVar5;
          piVar3[1] = iVar6;
          piVar3[2] = iVar7;
          piVar3[3] = iVar8;
          FUN_148e221e0(*param_3);
          *param_3 = iVar10;
          return 1;
        }
        iVar10 = piVar3[6];
      } while (iVar10 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 148e221e0 FUN_148e221e0 body=128 status=ok
// SIG undefined FUN_148e221e0(void)

void FUN_148e221e0(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cbd5628;
  if (DAT_14cbd565c != 0) {
    *(int *)(DAT_14cbd5628 + (longlong)DAT_14cbd5658 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbd565c) {
    iVar4 = DAT_14cbd5658;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cbd565c = DAT_14cbd565c + 1;
  puVar3 = &DAT_14cbd5638;
  if (DAT_14cbd5648 != (undefined4 *)0x0) {
    puVar3 = DAT_14cbd5648;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cbd5658 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148e22260 FUN_148e22260 body=476 status=ok
// SIG undefined FUN_148e22260(void)

void FUN_148e22260(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbd5668 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbd5668,0,0,4);
  }
  uVar2 = DAT_14cbd5670;
  uVar3 = local_50;
  if (DAT_14cbd5670 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbd5660,0,DAT_14cbd5670,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cbd5668;
        if (DAT_14cbd5668 == (undefined *)0x0) {
          puVar5 = &DAT_14cbd5660;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cbd5670 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbd5638;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbd5650 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbd5628;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)(int)DAT_14cbd5670 - 1U & (longlong)*(int *)(lVar1 + lVar6);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cbd5668;
        if (DAT_14cbd5668 == (undefined *)0x0) {
          puVar5 = &DAT_14cbd5660;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cbd5670 - 1U & uVar9) * 4);
        puVar5 = DAT_14cbd5668;
        if (DAT_14cbd5668 == (undefined *)0x0) {
          puVar5 = &DAT_14cbd5660;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cbd5670 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e2243e FUN_148e2243e body=141 status=ok
// SIG undefined FUN_148e2243e(void)

longlong FUN_148e2243e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1459172b8();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x50;
    if (lVar3 + lVar2 != 0) goto LAB_148e2247b;
  }
  local_30 = param_3;
  FUN_148e224cc(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x50;
LAB_148e2247b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e224cc FUN_148e224cc body=272 status=ok
// SIG undefined FUN_148e224cc(void)

undefined4 * FUN_148e224cc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148e225de(param_1,local_48);
  FUN_148e22758(param_4,local_40);
  *(undefined4 *)(local_40 + 0x48) = 0xffffffff;
  cVar1 = FUN_148e226cc(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x4c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x48) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_148e22946(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e225de FUN_148e225de body=238 status=ok
// SIG undefined FUN_148e225de(void)

int * FUN_148e225de(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 148e226cc FUN_148e226cc body=140 status=ok
// SIG undefined FUN_148e226cc(void)

undefined8 FUN_148e226cc(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_1459172b8(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0x50);
    FUN_148e21e70(plVar1 + 2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0x50),param_3,0x48);
    FUN_148e228cc(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 148e22758 FUN_148e22758 body=252 status=ok
// SIG undefined FUN_148e22758(void)

undefined8 * FUN_148e22758(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_140056680(&local_78,&DAT_149dfb77a);
  local_68 = local_68 & 0xffffffffffffff00;
  param_1 = (undefined8 *)*param_1;
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  param_2[2] = local_78;
  local_78 = 0;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_70._4_4_;
  uStack_70 = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  uStack_60 = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  local_58 = 0;
  param_2[7] = 0;
  uStack_50 = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  local_48 = 0;
  FUN_148e21e70(&local_78);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e22856 FUN_148e22856 body=118 status=ok
// SIG undefined FUN_148e22856(void)

void FUN_148e22856(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = 0;
  param_1[3] = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  param_1[5] = 0;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0;
  return;
}



// FUNCTION 148e228cc FUN_148e228cc body=122 status=ok
// SIG undefined FUN_148e228cc(void)

void FUN_148e228cc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 148e22946 FUN_148e22946 body=480 status=ok
// SIG undefined FUN_148e22946(void)

void FUN_148e22946(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x50;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x4c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e22b28 FUN_148e22b28 body=141 status=ok
// SIG undefined FUN_148e22b28(void)

longlong FUN_148e22b28(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1459172b8();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x50;
    if (lVar3 + lVar2 != 0) goto LAB_148e22b65;
  }
  local_30 = param_3;
  FUN_148e22bb6(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x50;
LAB_148e22b65:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e22bb6 FUN_148e22bb6 body=272 status=ok
// SIG undefined FUN_148e22bb6(void)

undefined4 * FUN_148e22bb6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148e225de(param_1,local_48);
  FUN_148e22cc8(param_4,local_40);
  *(undefined4 *)(local_40 + 0x48) = 0xffffffff;
  cVar1 = FUN_148e226cc(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x4c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x48) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_148e22946(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e22cc8 FUN_148e22cc8 body=147 status=ok
// SIG undefined FUN_148e22cc8(void)

undefined8 FUN_148e22cc8(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_38 = 0;
  FUN_140056680(&local_68,&DAT_149dfb77a);
  local_58 = local_58 & 0xffffffffffffff00;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_148e22d5c(param_2,*param_1,&local_68);
  FUN_148e21e70(&local_68);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e22d5c FUN_148e22d5c body=101 status=ok
// SIG undefined FUN_148e22d5c(void)

undefined8 * FUN_148e22d5c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_148e22856(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 148e22dc2 FUN_148e22dc2 body=249 status=ok
// SIG undefined FUN_148e22dc2(void)

undefined8 * FUN_148e22dc2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_148c56594(param_1 + 1,iVar1,0);
    FUN_148c5660a(param_1[1],uVar2,iVar1);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar3 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar3 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 148e22ebc FUN_148e22ebc body=132 status=ok
// SIG undefined FUN_148e22ebc(void)

void FUN_148e22ebc(longlong param_1,int param_2)

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



// FUNCTION 148e22f42 FUN_148e22f42 body=150 status=ok
// SIG undefined FUN_148e22f42(void)

void FUN_148e22f42(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148e22fda FUN_148e22fda body=57 status=ok
// SIG undefined FUN_148e22fda(void)

void FUN_148e22fda(undefined8 *param_1,int param_2)

{
  FUN_14594221d(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148e23014(param_1,param_2);
  return;
}



// FUNCTION 148e23014 FUN_148e23014 body=112 status=ok
// SIG undefined FUN_148e23014(void)

void FUN_148e23014(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 148e23084 FUN_148e23084 body=30 status=ok
// SIG undefined FUN_148e23084(void)

void FUN_148e23084(longlong param_1)

{
  FUN_1400b22c2(param_1,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 148e230a2 FUN_148e230a2 body=147 status=ok
// SIG undefined FUN_148e230a2(void)

void FUN_148e230a2(longlong param_1,int param_2)

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



// FUNCTION 148e23136 FUN_148e23136 body=143 status=ok
// SIG undefined FUN_148e23136(void)

void FUN_148e23136(longlong param_1,int param_2)

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



// FUNCTION 148e231c6 FUN_148e231c6 body=143 status=ok
// SIG undefined FUN_148e231c6(void)

void FUN_148e231c6(longlong param_1,int param_2)

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



// FUNCTION 148e23256 FUN_148e23256 body=203 status=ok
// SIG undefined FUN_148e23256(void)

int FUN_148e23256(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_148e232a0:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_148e23316;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_148e23316;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_148e23307;
    }
  }
  return -1;
LAB_148e23316:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_148e23307:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_148e232a0;
}



// FUNCTION 148e23322 FUN_148e23322 body=80 status=ok
// SIG undefined FUN_148e23322(void)

longlong * FUN_148e23322(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1461edd49(*param_1,(int)param_1[1]);
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



// FUNCTION 148e23372 FUN_148e23372 body=48 status=ok
// SIG undefined FUN_148e23372(void)

void FUN_148e23372(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 148e233a2 FUN_148e233a2 body=48 status=ok
// SIG undefined FUN_148e233a2(void)

void FUN_148e233a2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xe0,8);
  }
  return;
}



// FUNCTION 148e233d2 FUN_148e233d2 body=115 status=ok
// SIG undefined FUN_148e233d2(void)

void FUN_148e233d2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x120,8);
    iVar2 = (int)(uVar1 / 0x120);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x120,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148e23446 FUN_148e23446 body=114 status=ok
// SIG undefined FUN_148e23446(void)

void FUN_148e23446(longlong *param_1,int param_2)

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



// FUNCTION 148e234b8 FUN_148e234b8 body=122 status=ok
// SIG undefined FUN_148e234b8(void)

int FUN_148e234b8(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140989f8a(param_1,iVar1);
  }
  lVar2 = (longlong)param_3 * 0x120;
  memmove((void *)(*param_1 + lVar2 + 0x120),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) * 0x120);
  FUN_141209be0(lVar2 + *param_1,param_2);
  return param_3;
}



// FUNCTION 148e23532 FUN_148e23532 body=134 status=ok
// SIG undefined FUN_148e23532(void)

longlong FUN_148e23532(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = *param_1;
    lVar6 = (longlong)(int)param_1[1] * 0x120;
    do {
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,lVar5);
      if (cVar2 != '\0') goto LAB_148e2358b;
      lVar5 = lVar5 + 0x120;
      lVar6 = lVar6 + -0x120;
    } while (lVar6 != 0);
  }
  lVar5 = 0;
LAB_148e2358b:
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return lVar5;
}



// FUNCTION 148e235b8 FUN_148e235b8 body=328 status=ok
// SIG undefined FUN_148e235b8(void)

void FUN_148e235b8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c4 + (longlong)iVar4 * 0x1c8) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e23702 FUN_148e23702 body=285 status=ok
// SIG undefined FUN_148e23702(void)

void FUN_148e23702(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_140e9119a(*local_60 + (longlong)iStack_44 * 0x1c8 + 0x10);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_148e21e16(param_1);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e23820 FUN_148e23820 body=96 status=ok
// SIG undefined FUN_148e23820(void)

void FUN_148e23820(longlong param_1,int param_2)

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



// FUNCTION 148e23880 FUN_148e23880 body=48 status=ok
// SIG undefined FUN_148e23880(void)

void FUN_148e23880(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x430,8);
  }
  return;
}



// FUNCTION 148e238b0 FUN_148e238b0 body=66 status=ok
// SIG undefined FUN_148e238b0(void)

undefined8 FUN_148e238b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_148e238f2(param_2,param_1);
  if ((cVar1 == '\0') || (*(int *)(param_1 + 0xd8) == 0)) {
    FUN_1413511f6(param_1,param_2);
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148e238f2 FUN_148e238f2 body=748 status=ok
// SIG undefined FUN_148e238f2(void)

undefined8 FUN_148e238f2(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  
  iVar2 = (int)param_1[1];
  if (iVar2 == (int)param_2[1]) {
    if (1 < iVar2) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_1 + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(*param_2 + lVar4);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_148e2396e;
LAB_148e23931:
        lVar4 = lVar4 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148e23931;
      }
      if (uVar5 != uVar7) {
        return 0;
      }
    }
  }
  else if ((int)param_2[1] + iVar2 != 1) {
    return 0;
  }
LAB_148e2396e:
  iVar2 = (int)param_1[3];
  if (iVar2 == (int)param_2[3]) {
    if (1 < iVar2) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(param_1[2] + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(param_2[2] + lVar4);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_148e239e0;
LAB_148e239a3:
        lVar4 = lVar4 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148e239a3;
      }
      if (uVar5 != uVar7) {
        return 0;
      }
    }
  }
  else if ((int)param_2[3] + iVar2 != 1) {
    return 0;
  }
LAB_148e239e0:
  iVar2 = (int)param_1[5];
  if (iVar2 == (int)param_2[5]) {
    if (1 < iVar2) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(param_1[4] + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(param_2[4] + lVar4);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_148e23a52;
LAB_148e23a15:
        lVar4 = lVar4 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148e23a15;
      }
      if (uVar5 != uVar7) {
        return 0;
      }
    }
  }
  else if ((int)param_2[5] + iVar2 != 1) {
    return 0;
  }
LAB_148e23a52:
  if ((char)param_1[6] == (char)param_2[6]) {
    iVar2 = (int)param_1[8];
    if (iVar2 == (int)param_2[8]) {
      if (1 < iVar2) {
        lVar4 = 0;
        while( true ) {
          uVar5 = *(ushort *)(param_1[7] + lVar4);
          uVar6 = (ulonglong)uVar5;
          uVar7 = *(ushort *)(param_2[7] + lVar4);
          if (uVar5 != uVar7) break;
          if (uVar5 == 0) goto LAB_148e23ad0;
LAB_148e23a93:
          lVar4 = lVar4 + 2;
        }
        if ((uVar7 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148e23a93;
        }
        if (uVar5 != uVar7) {
          return 0;
        }
      }
    }
    else if ((int)param_2[8] + iVar2 != 1) {
      return 0;
    }
LAB_148e23ad0:
    iVar2 = (int)param_1[10];
    if (iVar2 == (int)param_2[10]) {
      if (1 < iVar2) {
        lVar4 = 0;
        while( true ) {
          uVar5 = *(ushort *)(param_1[9] + lVar4);
          uVar6 = (ulonglong)uVar5;
          uVar7 = *(ushort *)(param_2[9] + lVar4);
          if (uVar5 != uVar7) break;
          if (uVar5 == 0) goto LAB_148e23b3a;
LAB_148e23b05:
          lVar4 = lVar4 + 2;
        }
        if ((uVar7 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148e23b05;
        }
        if (uVar5 != uVar7) {
          return 0;
        }
      }
    }
    else if ((int)param_2[10] + iVar2 != 1) {
      return 0;
    }
LAB_148e23b3a:
    if (((((int)param_1[0xc] == (int)param_2[0xc]) &&
         (cVar1 = FUN_14000b9e1(param_1[0xb],param_2[0xb]), cVar1 != '\0')) &&
        ((int)param_1[0xd] == (int)param_2[0xd])) &&
       (((iVar2 = FUN_1467d15c4(param_1 + 0xe,param_2 + 0xe,0), iVar2 == 0 &&
         (iVar2 = FUN_1467d15c4(param_1 + 0x10,param_2 + 0x10,0), iVar2 == 0)) &&
        ((iVar2 = FUN_1467d15c4(param_1 + 0x12,param_2 + 0x12,0), iVar2 == 0 &&
         (iVar2 = FUN_1467d15c4(param_1 + 0x14,param_2 + 0x14,0), iVar2 == 0)))))) {
      uVar3 = FUN_144a7afa6(param_1 + 0x17,param_2 + 0x17);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 148e23bde FUN_148e23bde body=83 status=ok
// SIG undefined FUN_148e23bde(void)

longlong * FUN_148e23bde(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14185600a();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148e23c32 FUN_148e23c32 body=107 status=ok
// SIG undefined FUN_148e23c32(void)

void FUN_148e23c32(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148949e02(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 148e23c9e FUN_148e23c9e body=96 status=ok
// SIG undefined FUN_148e23c9e(void)

void FUN_148e23c9e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 148e23cfe FUN_148e23cfe body=60 status=ok
// SIG undefined FUN_148e23cfe(void)

void FUN_148e23cfe(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_148e23d3a(param_2,param_1);
  if ((cVar1 == '\0') || (*(int *)(param_1 + 0x268) == 0)) {
    FUN_14135191a(param_1,param_2);
    *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + 1;
  }
  return;
}



// FUNCTION 148e23d3a FUN_148e23d3a body=192 status=ok
// SIG undefined FUN_148e23d3a(void)

undefined8 FUN_148e23d3a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte bVar6;
  
  lVar2 = *(longlong *)(param_2 + 0x25c);
  lVar3 = *(longlong *)(param_1 + 0x25c);
  if (*(int *)(param_1 + 0x254) != -1) {
    uVar4 = FUN_148ee08fc(param_2);
    if (((char)uVar4 != '\0') &&
       (uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1),
       *(int *)(param_1 + 0x254) == *(int *)(param_2 + 0x254))) goto LAB_148e23d8f;
  }
  iVar1 = *(int *)(param_1 + 600);
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == *(int *)(param_2 + 600));
  }
LAB_148e23d8f:
  if (((((*(byte *)(param_1 + 0x9c) & 1) == 0) || ((*(byte *)(param_2 + 0x9c) & 1) == 0)) ||
      ((*(byte *)(param_1 + 0x9d) & 4) == 0)) || ((*(byte *)(param_2 + 0x9d) & 4) == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 0;
    if (((*(byte *)(param_1 + 0x9d) & 8) != 0) &&
       (((*(byte *)(param_2 + 0x9e) ^ *(byte *)(param_1 + 0x9e)) & 0x40) == 0)) {
      bVar6 = (*(byte *)(param_2 + 0x9d) & 8) >> 3;
    }
  }
  if (lVar3 == lVar2) {
    uVar4 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 | bVar6);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 148e23dfa FUN_148e23dfa body=111 status=ok
// SIG undefined FUN_148e23dfa(void)

void FUN_148e23dfa(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148e23e69 FUN_148e23e69 body=52 status=ok
// SIG undefined FUN_148e23e69(void)

void FUN_148e23e69(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148e23e9e(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 148e23e9e FUN_148e23e9e body=138 status=ok
// SIG undefined FUN_148e23e9e(void)

longlong * FUN_148e23e9e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  param_1[2] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  plVar1 = (longlong *)param_2[4];
  param_1[4] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(int *)(param_1 + 6) = (int)param_2[6];
  plVar1 = (longlong *)param_2[7];
  param_1[7] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 8) = (int)param_2[8];
  lVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = lVar2;
  return param_1;
}



// FUNCTION 148e23f28 FUN_148e23f28 body=118 status=ok
// SIG undefined FUN_148e23f28(void)

void FUN_148e23f28(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x208,8);
    iVar2 = (int)(uVar1 / 0x208);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x208,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148e23f9e FUN_148e23f9e body=60 status=ok
// SIG undefined FUN_148e23f9e(void)

void FUN_148e23f9e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148e23fda(param_1,param_2);
    param_1 = param_1 + 0x208;
    param_2 = param_2 + 0x208;
  }
  return;
}



// FUNCTION 148e23fda FUN_148e23fda body=176 status=ok
// SIG undefined FUN_148e23fda(void)

undefined4 * FUN_148e23fda(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  _Src = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  FUN_1418f4806(param_1 + 0xc,param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  FUN_14106b1d2(param_1 + 0x16,param_2 + 0x16);
  FUN_1406fd608(param_1 + 0x4c,param_2 + 0x4c);
  return param_1;
}



// FUNCTION 148e2408a FUN_148e2408a body=59 status=ok
// SIG undefined FUN_148e2408a(void)

longlong FUN_148e2408a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148e240ca(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x58 + *param_1;
  thunk_FUN_148c569e4(lVar2);
  return lVar2;
}



// FUNCTION 148e240c5 thunk_FUN_148c569e4 body=5 status=ok
// SIG undefined thunk_FUN_148c569e4(void)

longlong thunk_FUN_148c569e4(longlong param_1)

{
  FUN_144a5dc74();
  FUN_144a5dc74(param_1 + 0x10);
  FUN_144a5dc74(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_144a5dc74(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x48) = 0;
  return param_1;
}



// FUNCTION 148e240ca FUN_148e240ca body=143 status=ok
// SIG undefined FUN_148e240ca(void)

void FUN_148e240ca(longlong param_1,int param_2)

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



// FUNCTION 148e2415a FUN_148e2415a body=48 status=ok
// SIG undefined FUN_148e2415a(void)

void FUN_148e2415a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x58,8);
  }
  return;
}



// FUNCTION 148e2418a FUN_148e2418a body=88 status=ok
// SIG undefined FUN_148e2418a(void)

void FUN_148e2418a(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + 0x1e0);
  FUN_1459e0c76(_Dst);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + 6);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_2 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar1 - param_2;
  return;
}



// FUNCTION 148e241e2 FUN_148e241e2 body=62 status=ok
// SIG undefined FUN_148e241e2(void)

void FUN_148e241e2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148e24220(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 148e24220 FUN_148e24220 body=112 status=ok
// SIG undefined FUN_148e24220(void)

ulonglong FUN_148e24220(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148e2425a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_148e2425a:
  return param_2 & 0xffffffff;
}



// FUNCTION 148e24290 FUN_148e24290 body=62 status=ok
// SIG undefined FUN_148e24290(void)

void FUN_148e24290(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148e242ce(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148e242ce FUN_148e242ce body=93 status=ok
// SIG undefined FUN_148e242ce(void)

ulonglong FUN_148e242ce(uint param_1,uint param_2)

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



// FUNCTION 148e2432c FUN_148e2432c body=31 status=ok
// SIG undefined FUN_148e2432c(void)

undefined8 FUN_148e2432c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e24366 FUN_148e24366 body=101 status=ok
// SIG undefined FUN_148e24366(void)

void FUN_148e24366(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b422d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a6c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e243cc FUN_148e243cc body=134 status=ok
// SIG undefined FUN_148e243cc(void)

void FUN_148e243cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b422d40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6c30;
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
                    /* WARNING: Could not recover jumptable at 0x000148e24443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e24452 FUN_148e24452 body=44 status=ok
// SIG undefined FUN_148e24452(void)

void FUN_148e24452(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e2447b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e2447e FUN_148e2447e body=31 status=ok
// SIG undefined FUN_148e2447e(void)

undefined8 FUN_148e2447e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e244b8 FUN_148e244b8 body=26 status=ok
// SIG undefined FUN_148e244b8(void)

bool FUN_148e244b8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e244d2 FUN_148e244d2 body=101 status=ok
// SIG undefined FUN_148e244d2(void)

void FUN_148e244d2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e24538 FUN_148e24538 body=101 status=ok
// SIG undefined FUN_148e24538(void)

void FUN_148e24538(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e2459e FUN_148e2459e body=134 status=ok
// SIG undefined FUN_148e2459e(void)

void FUN_148e2459e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6ca0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e24615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e24624 FUN_148e24624 body=42 status=ok
// SIG undefined FUN_148e24624(void)

void FUN_148e24624(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e2464b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e2464e FUN_148e2464e body=31 status=ok
// SIG undefined FUN_148e2464e(void)

undefined8 FUN_148e2464e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e24688 FUN_148e24688 body=101 status=ok
// SIG undefined FUN_148e24688(void)

void FUN_148e24688(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9955b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a6d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e246ee FUN_148e246ee body=101 status=ok
// SIG undefined FUN_148e246ee(void)

void FUN_148e246ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9955b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a6d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e24754 FUN_148e24754 body=134 status=ok
// SIG undefined FUN_148e24754(void)

void FUN_148e24754(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9955b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6d10;
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
                    /* WARNING: Could not recover jumptable at 0x000148e247cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e247da FUN_148e247da body=44 status=ok
// SIG undefined FUN_148e247da(void)

void FUN_148e247da(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e24803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e24808 FUN_148e24808 body=31 status=ok
// SIG undefined FUN_148e24808(void)

undefined8 FUN_148e24808(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e24842 FUN_148e24842 body=101 status=ok
// SIG undefined FUN_148e24842(void)

void FUN_148e24842(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a7080;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a6ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e248a8 FUN_148e248a8 body=101 status=ok
// SIG undefined FUN_148e248a8(void)

void FUN_148e248a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a7080;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a6ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e2490e FUN_148e2490e body=134 status=ok
// SIG undefined FUN_148e2490e(void)

void FUN_148e2490e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9a7080;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6ed0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e24985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e24994 FUN_148e24994 body=52 status=ok
// SIG undefined FUN_148e24994(void)

void FUN_148e24994(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e249c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e249ca FUN_148e249ca body=31 status=ok
// SIG undefined FUN_148e249ca(void)

undefined8 FUN_148e249ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e24a04 FUN_148e24a04 body=101 status=ok
// SIG undefined FUN_148e24a04(void)

void FUN_148e24a04(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e24a6a FUN_148e24a6a body=101 status=ok
// SIG undefined FUN_148e24a6a(void)

void FUN_148e24a6a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e24ad0 FUN_148e24ad0 body=134 status=ok
// SIG undefined FUN_148e24ad0(void)

void FUN_148e24ad0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6f40;
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
                    /* WARNING: Could not recover jumptable at 0x000148e24b47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e24b56 FUN_148e24b56 body=39 status=ok
// SIG undefined FUN_148e24b56(void)

void FUN_148e24b56(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e24b79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e24b7e FUN_148e24b7e body=157 status=ok
// SIG undefined FUN_148e24b7e(void)

void FUN_148e24b7e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148e24c1c FUN_148e24c1c body=48 status=ok
// SIG undefined FUN_148e24c1c(void)

void FUN_148e24c1c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140495e96(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_140cee904(lVar1);
    if (lVar1 != 0) {
      FUN_148e25c92(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148e24c4c FUN_148e24c4c body=694 status=ok
// SIG undefined FUN_148e24c4c(void)

undefined8 * FUN_148e24c4c(undefined8 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  bVar4 = *(byte *)(param_2 + 2);
  if (bVar4 == 1) {
    fVar7 = (float)*param_2;
    fVar9 = (float)param_2[1];
    fVar8 = (float)(~-(uint)(fVar7 != 0.0) & 0x7f7fc99e |
                   -(uint)(fVar7 != 0.0) & (uint)(fVar9 / fVar7));
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    if ((fVar7 != 0.0) || (NAN(fVar7))) {
      if (ABS(fVar9 / fVar7) <= 1.0) {
        uStack_80._0_4_ = 1;
        uStack_80._4_4_ = 0;
        FUN_14489624a(&local_88);
        *local_88 = 0xbff0000000000000;
        local_88[1] = (double)-fVar8;
        lVar6 = (longlong)(int)uStack_80;
        uVar5 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
        if (uStack_80._4_4_ < uVar5) {
          FUN_14489624a(&local_88);
        }
        local_88[lVar6 * 2] = 0x3ff0000000000000;
        local_88[lVar6 * 2 + 1] = (double)fVar8;
      }
    }
    if ((fVar9 != 0.0) || (NAN(fVar9))) {
      if (ABS(1.0 / fVar8) <= 1.0) {
        lVar6 = (longlong)(int)uStack_80;
        uVar5 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
        if (uStack_80._4_4_ < uVar5) {
          FUN_14489624a(&local_88);
        }
        local_88[lVar6 * 2] = (double)(1.0 / fVar8);
        local_88[lVar6 * 2 + 1] = 0x3ff0000000000000;
      }
      if (ABS(-1.0 / fVar8) <= 1.0) {
        lVar6 = (longlong)(int)uStack_80;
        uVar5 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
        if (uStack_80._4_4_ < uVar5) {
          FUN_14489624a(&local_88);
        }
        local_88[lVar6 * 2] = (double)(-1.0 / fVar8);
        local_88[lVar6 * 2 + 1] = 0xbff0000000000000;
      }
    }
    if ((longlong)(int)uStack_80 != 0) {
      dVar1 = *param_2;
      dVar2 = param_2[1];
      fVar7 = 3.4e+38;
      lVar6 = 0;
      do {
        fVar8 = (float)(ABS(*(double *)((longlong)local_88 + lVar6 + 8) - dVar2) +
                       ABS(*(double *)((longlong)local_88 + lVar6) - dVar1));
        if (fVar8 < fVar7) {
          uVar3 = ((undefined8 *)((longlong)local_88 + lVar6))[1];
          *param_1 = *(undefined8 *)((longlong)local_88 + lVar6);
          param_1[1] = uVar3;
          fVar7 = fVar8;
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)(int)uStack_80 * 0x10 != lVar6);
    }
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    bVar4 = *(byte *)(param_2 + 2);
  }
  if ((bVar4 & 1) != 0) {
    *(undefined1 *)(param_2 + 2) = 0;
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e24f04 FUN_148e24f04 body=61 status=ok
// SIG undefined FUN_148e24f04(void)

void FUN_148e24f04(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_148e2ab6c(param_1);
    return;
  }
  FUN_14580f9a5(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 148e24f42 FUN_148e24f42 body=250 status=ok
// SIG undefined FUN_148e24f42(void)

undefined8 *
FUN_148e24f42(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined4 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = (void *)0x0;
  local_48 = (int)param_3[1];
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  local_60 = (longlong *)*param_2;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  local_58 = (undefined4)param_2[1];
  FUN_145976f8e(param_1,&local_60,&local_50);
  *param_1 = &PTR_FUN_14b748bf0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_4 + 1);
  param_1[5] = *param_4;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e2503e FUN_148e2503e body=74 status=ok
// SIG undefined FUN_148e2503e(void)

void FUN_148e2503e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148e2ac4c(param_1,iVar1);
  }
  FUN_14106add8((longlong)iVar1 * 0x150 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 148e25088 FUN_148e25088 body=244 status=ok
// SIG undefined FUN_148e25088(void)

void FUN_148e25088(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_140d1d7e4();
  cVar3 = FUN_14493b798(param_2,lVar4 + 0x58);
  if (cVar3 != '\0') {
    if (*(char *)(param_2 + 0x38) == '\x01') {
      uVar5 = *(int *)(param_2 + 0x44) != 0;
    }
    else {
      uVar5 = FUN_140321d1a(param_2 + 0x38);
    }
    *(undefined1 *)(param_1 + 500) = uVar5;
    FUN_1449027d0(param_1,&local_38);
    lVar4 = *(longlong *)(local_38 + 0x410);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1b0));
    *(int *)(lVar4 + 0x1a8) = *(int *)(lVar4 + 0x1a8) + 1;
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
    *(undefined1 *)(lVar4 + 0x158) = *(undefined1 *)(param_1 + 500);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1b0));
  }
  FUN_14625d764(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e2517e FUN_148e2517e body=158 status=ok
// SIG undefined FUN_148e2517e(void)

void FUN_148e2517e(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x410);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b0));
  *(int *)(lVar3 + 0x1a8) = *(int *)(lVar3 + 0x1a8) + 1;
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
  *(undefined1 *)(lVar3 + 0x138) = param_2;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b0));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e25220 FUN_148e25220 body=268 status=ok
// SIG undefined FUN_148e25220(void)

void FUN_148e25220(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_141169abc();
  if (lVar3 != 0) {
    local_40 = 0;
    FUN_141219424(lVar3,&local_50);
    lVar2 = local_50;
    if ((longlong)local_48 != 0) {
      lVar6 = 0;
      do {
        local_58 = *(undefined8 *)(lVar2 + 0x10 + lVar6);
        puVar1 = (undefined4 *)(lVar2 + lVar6);
        local_68 = *puVar1;
        uStack_64 = puVar1[1];
        uStack_60 = puVar1[2];
        uStack_5c = puVar1[3];
        lVar4 = FUN_14479d2ce(&uStack_60);
        if (lVar4 != 0) {
          lVar5 = FUN_1414ba9b4();
          if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
             (*(char *)(lVar4 + 0xd0) == '\x01')) {
            local_40 = *(undefined8 *)(lVar4 + 0x30);
          }
        }
        lVar6 = lVar6 + 0x18;
      } while ((longlong)local_48 * 0x18 != lVar6);
    }
    if (local_50 != 0) {
      FUN_1400020a8(local_50);
    }
    FUN_145cf5c1e(lVar3,&local_40,0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e2532e FUN_148e2532e body=60 status=ok
// SIG undefined FUN_148e2532e(void)

void FUN_148e2532e(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141169abc();
  if (lVar1 != 0) {
    FUN_148d6daac(lVar1);
    FUN_148d6db8a(lVar1);
    FUN_14418f656(lVar1);
  }
  FUN_14624e09a(param_1);
  return;
}



// FUNCTION 148e2536a FUN_148e2536a body=88 status=ok
// SIG undefined FUN_148e2536a(void)

void FUN_148e2536a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_141169abc();
  if (param_2 != 0 && lVar1 != 0) {
    if (*(int *)(param_2 + 0x20) == -1) {
      FUN_148d6daac(lVar1);
      FUN_148d6db8a(lVar1);
    }
    else {
      FUN_148d6da3e(lVar1);
    }
  }
  FUN_14624e09a(param_1);
  return;
}



// FUNCTION 148e253c4 FUN_148e253c4 body=39 status=ok
// SIG undefined FUN_148e253c4(void)

void FUN_148e253c4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_141169abc();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x6e0) = 0;
    *(undefined8 *)(lVar1 + 0x6e8) = 0;
    *(undefined4 *)(lVar1 + 0x710) = 0;
  }
  return;
}



// FUNCTION 148e253ec FUN_148e253ec body=222 status=ok
// SIG undefined FUN_148e253ec(void)

void FUN_148e253ec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_2 + 8) != 0) {
    lVar1 = FUN_1400d7050(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        uVar3 = FUN_144a7ba4c(lVar1);
        lVar1 = FUN_140ade8e4(uVar3);
        if (lVar1 != 0) {
          local_58 = *(undefined8 *)(param_2 + 8);
          local_50 = *(undefined4 *)(param_2 + 0x10);
          FUN_1448075d0(local_48);
          uVar3 = FUN_14060eaf6(local_48);
          *(undefined8 *)(param_1 + 0x178) = uVar3;
          if (local_30 != 0) {
            FUN_1400020a8();
          }
          FUN_14129c610(lVar1,&DAT_14cbd9388);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e254ce FUN_148e254ce body=55 status=ok
// SIG undefined FUN_148e254ce(void)

void FUN_148e254ce(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    lVar1 = FUN_141169abc();
    if (lVar1 != 0) {
      FUN_145cf5c1e(lVar1,param_2 + 8,0);
      return;
    }
  }
  return;
}



// FUNCTION 148e25506 FUN_148e25506 body=118 status=ok
// SIG undefined FUN_148e25506(void)

void FUN_148e25506(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1400d7050(param_1 + 6);
      if (lVar1 != 0) {
        lVar2 = FUN_144a5dd5e();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148e25579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)(param_2 + 8) + 0x2f0))(*(longlong **)(param_2 + 8),lVar1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148e2557c FUN_148e2557c body=148 status=ok
// SIG undefined FUN_148e2557c(void)

void FUN_148e2557c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 8) != 0) {
    lVar2 = FUN_1400d7050(param_1 + 0x30);
    if (lVar2 != 0) {
      lVar3 = FUN_144a5dd5e();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar1 = FUN_1487c502a(lVar2);
        local_28 = *(undefined8 *)(param_2 + 8);
        local_20 = *(undefined4 *)(param_2 + 0x10);
        FUN_148c39570(lVar2,&local_28,uVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e25614 FUN_148e25614 body=66 status=ok
// SIG undefined FUN_148e25614(void)

void FUN_148e25614(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_141169abc();
  if ((param_2 != 0 && lVar1 != 0) && (*(longlong *)(param_2 + 8) != 0)) {
    FUN_148d6e530(lVar1,param_2 + 8,*(undefined1 *)(param_2 + 0x10));
    return;
  }
  return;
}



// FUNCTION 148e25656 FUN_148e25656 body=109 status=ok
// SIG undefined FUN_148e25656(void)

void FUN_148e25656(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar1 = FUN_141169abc();
    if (lVar1 != 0) {
      if ((longlong)*(int *)(param_2 + 0x10) != 0) {
        lVar2 = *(longlong *)(param_2 + 8);
        lVar3 = (longlong)*(int *)(param_2 + 0x10) << 3;
        do {
          FUN_148d6d338(lVar1,lVar2,*(undefined1 *)(param_2 + 0x18));
          lVar2 = lVar2 + 8;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
      FUN_1416afcd8(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148e256c4 FUN_148e256c4 body=534 status=ok
// SIG undefined FUN_148e256c4(void)

void FUN_148e256c4(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Dst;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_f8 [32];
  int local_d8;
  undefined4 uStack_d4;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = FUN_141169abc();
  if (lVar3 == 0) goto LAB_148e25823;
  FUN_1449027d0(param_1,&local_d8);
  lVar5 = *(longlong *)(CONCAT44(uStack_d4,local_d8) + 0x410);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x1b0));
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_d0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
  plVar2 = (longlong *)(lVar5 + 0x120);
  lVar4 = *(longlong *)(lVar5 + 0x120);
  uVar12 = *(uint *)(lVar5 + 0x128);
  uVar11 = (ulonglong)(int)uVar12;
  if (uVar11 != 0) {
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar9) == *(longlong *)(param_2 + 8)) {
        if ((int)uVar12 < 1) goto LAB_148e257b7;
        uVar6 = ~uVar12;
        goto LAB_148e25862;
      }
      lVar9 = lVar9 + 8;
    } while (uVar11 * 8 - lVar9 != 0);
  }
  *(uint *)(lVar5 + 0x128) = uVar12 + 1;
  if (*(uint *)(lVar5 + 300) < uVar12 + 1) {
    FUN_14188192c(plVar2,uVar12);
    lVar4 = *plVar2;
  }
  *(undefined8 *)(lVar4 + uVar11 * 8) = *(undefined8 *)(param_2 + 8);
  goto LAB_148e257b7;
LAB_148e25862:
  do {
    uVar10 = (uint)uVar11;
    if (uVar12 < uVar10) {
      if (*(longlong *)(*plVar2 + (ulonglong)uVar12 * 8) == *(longlong *)(param_2 + 8)) break;
      if (uVar10 + uVar6 != 0) {
        _Dst = (void *)(*plVar2 + (ulonglong)uVar12 * 8);
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(uVar10 + uVar6) << 3);
        uVar10 = *(uint *)(lVar5 + 0x128);
      }
      *(uint *)(lVar5 + 0x128) = uVar10 - 1;
      FUN_148e2bfa6(plVar2);
      uVar11 = (ulonglong)*(uint *)(lVar5 + 0x128);
    }
    uVar12 = uVar12 - 1;
    uVar6 = uVar6 + 1;
  } while (0 < (int)uVar11);
LAB_148e257b7:
  if (*(int *)(lVar5 + 8) != *(int *)(lVar5 + 0x34)) {
    FUN_148e2bbb6(lVar5);
    FUN_14598a6b4(lVar5);
  }
  *(int *)(lVar5 + 0x1a8) = *(int *)(lVar5 + 0x1a8) + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x1b0));
  local_d0 = *(longlong **)(param_2 + 0x10);
  puVar7 = &DAT_14c846480;
  puVar8 = local_a8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_d8 = (local_d0 == (longlong *)0x0) + 2 + (uint)(local_d0 == (longlong *)0x0);
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  FUN_144190356(lVar3,*(undefined8 *)(param_2 + 8),&local_d8);
LAB_148e25823:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e258dc FUN_148e258dc body=243 status=ok
// SIG undefined FUN_148e258dc(void)

void FUN_148e258dc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_141169abc();
  if (lVar5 != 0) {
    FUN_144194fa2(lVar5,*(undefined8 *)(param_2 + 8),0);
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    FUN_14103b374(lVar5,&local_38);
    uVar6 = 0;
    if ((longlong)(int)uStack_30 != 0) {
      puVar8 = local_38 + (longlong)(int)uStack_30 * 2;
      puVar7 = local_38;
      do {
        uVar3 = *puVar7;
        plVar4 = (longlong *)puVar7[1];
        if (plVar4 == (longlong *)0x0) {
          FUN_148d7064e(uVar3,*(undefined8 *)(param_2 + 8));
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          FUN_148d7064e(uVar3,*(undefined8 *)(param_2 + 8));
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
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar8);
      uVar6 = (int)uStack_30;
    }
    FUN_14425cf20(local_38,uVar6);
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e259d0 FUN_148e259d0 body=349 status=ok
// SIG undefined FUN_148e259d0(void)

void FUN_148e259d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 8) != 0) {
    lVar1 = FUN_1400d7050(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        lVar1 = FUN_144a7ba4c(lVar1);
        if (lVar1 != 0) {
          lVar1 = FUN_145da44aa(lVar1);
          if (lVar1 != 0) {
            *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x10);
            *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 8);
            local_38 = (undefined8 *)0x0;
            local_30 = 0;
            FUN_1446efa72(&local_38,0,2,0x10);
            local_30 = 2;
            *local_38 = &PTR_LAB_14b972ed0;
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
            local_38[2] = lVar3;
            *local_38 = &PTR_FUN_14b9a8410;
            local_38[3] = param_1;
            FUN_140e3418c(param_2 + 0x14,local_40,1);
            FUN_144268f62(lVar1,local_40,&local_38,0);
            FUN_1449db362(&local_38);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e25b2e FUN_148e25b2e body=60 status=ok
// SIG undefined FUN_148e25b2e(void)

void FUN_148e25b2e(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x15a) == '\0') {
    lVar1 = FUN_141169abc();
    if (lVar1 != 0) {
      FUN_148e25bae(param_1);
      FUN_148d6e3dc(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148e25b6a FUN_148e25b6a body=68 status=ok
// SIG undefined FUN_148e25b6a(void)

void FUN_148e25b6a(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x15a) == '\0') {
    lVar1 = FUN_141169abc();
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x808) == '\x01') {
        FUN_148e25bae(param_1);
        return;
      }
      FUN_148e25b2e(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148e25bae FUN_148e25bae body=226 status=ok
// SIG undefined FUN_148e25bae(void)

void FUN_148e25bae(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x15a) != '\0') goto LAB_148e25c70;
  lVar1 = FUN_141169abc();
  if (lVar1 == 0) goto LAB_148e25c70;
  lVar2 = FUN_1400d7050(param_1 + 0x30);
  if (lVar2 == 0) {
LAB_148e25c18:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_148e25c18;
  }
  FUN_1477a759e(&local_38,lVar2);
  fVar4 = (float)FUN_140e35aec(param_1);
  local_40 = local_30 * (double)fVar4;
  local_48 = (double)fVar4 * local_38;
  FUN_1418eaa16(lVar1,local_58);
  FUN_144190306(lVar1,local_58);
LAB_148e25c70:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e25c92 FUN_148e25c92 body=66 status=ok
// SIG undefined FUN_148e25c92(void)

void FUN_148e25c92(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1409801a0();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x28));
  *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
  FUN_148e2c4b2(lVar1);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x28));
  FUN_140ceeb80(param_1);
  return;
}



// FUNCTION 148e25cd4 thunk_FUN_144253548 body=5 status=ok
// SIG undefined thunk_FUN_144253548(void)

void thunk_FUN_144253548(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  code *pcVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  PSRWLOCK SRWLock;
  bool bVar24;
  undefined1 auStack_278 [32];
  undefined4 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_248;
  undefined8 uStack_240;
  undefined2 *puStack_238;
  undefined1 *puStack_230;
  undefined1 *puStack_228;
  undefined8 *puStack_220;
  undefined1 *puStack_218;
  code *pcStack_210;
  longlong *plStack_200;
  longlong *plStack_1f8;
  longlong *plStack_1f0;
  longlong *plStack_1e8;
  ulonglong uStack_1e0;
  PSRWLOCK pRStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  longlong lStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  undefined8 uStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong *plStack_158;
  ulonglong uStack_150;
  undefined8 uStack_140;
  longlong lStack_138;
  longlong *plStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  undefined8 auStack_e8 [3];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char cStack_98;
  code *pcStack_78;
  ulonglong uStack_60;
  
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (0 < (int)param_2[1]) {
    lVar19 = 0;
    do {
      iVar6 = *(int *)(*param_2 + 4 + lVar19 * 8);
      if ((((((iVar6 != 0) && (uVar8 = *(uint *)(*param_2 + lVar19 * 8), -1 < (int)uVar8)) &&
            ((int)uVar8 < DAT_14c9647dc)) &&
           ((plVar18 = (longlong *)
                       ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
            plVar18 != (longlong *)0x0 && ((int)plVar18[2] == iVar6)))) &&
          ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) &&
         ((plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0 &&
          ((*(uint *)(plVar18 + 1) >> 0x1e & 1) == 0)))) {
        if (DAT_14cba8288 == 0) {
          uStack_a8 = FUN_141864c34;
          pcStack_210 = FUN_14081d0ea;
          puStack_218 = &LAB_1464cee30;
          puStack_220 = &uStack_a8;
          puStack_228 = &LAB_148bfac22;
          puStack_230 = &LAB_140f21842;
          puStack_238 = &DAT_149e063b2;
          uStack_240 = 0;
          uStack_248 = 0x10000004;
          uStack_250 = 0x10;
          uStack_258 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(plVar18[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar18[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
            DAT_14cba8288 + 0x30)) {
          uVar10 = FUN_140eaf18a();
          plVar11 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,uVar10);
          if (plVar11 != (longlong *)0x0) {
            uVar10 = FUN_140eaf18a();
            plVar12 = (longlong *)FUN_144718840(plVar11,uVar10);
            if ((plVar12 != (longlong *)0x0 && plVar11 != plVar12) &&
               (plVar11 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12),
               plVar11 != (longlong *)0x0)) {
              FUN_1402815f4(param_1,&uStack_a8);
              pcVar17 = uStack_a8;
              uStack_f8 = *(undefined8 *)(uStack_a8 + 0x580);
              lStack_f0 = *(longlong *)(uStack_a8 + 0x588);
              if (lStack_f0 != 0) {
                LOCK();
                *(int *)(lStack_f0 + 0xc) = *(int *)(lStack_f0 + 0xc) + 1;
                UNLOCK();
              }
              (**(code **)(*plVar11 + 0x18))(plVar11,&uStack_f8);
              uStack_108 = *(undefined8 *)(pcVar17 + 0x590);
              lStack_100 = *(longlong *)(pcVar17 + 0x598);
              if (lStack_100 != 0) {
                LOCK();
                *(int *)(lStack_100 + 0xc) = *(int *)(lStack_100 + 0xc) + 1;
                UNLOCK();
                pcVar17 = uStack_a8;
              }
              (**(code **)(*plVar11 + 0x18))(plVar11,&uStack_108);
              uStack_118 = *(undefined8 *)(pcVar17 + 0x5a0);
              lStack_110 = *(longlong *)(pcVar17 + 0x5a8);
              if (lStack_110 != 0) {
                LOCK();
                *(int *)(lStack_110 + 0xc) = *(int *)(lStack_110 + 0xc) + 1;
                UNLOCK();
                pcVar17 = uStack_a8;
              }
              (**(code **)(*plVar11 + 0x18))(plVar11,&uStack_118);
              uStack_128 = *(undefined8 *)(pcVar17 + 0x5b0);
              lStack_120 = *(longlong *)(pcVar17 + 0x5b8);
              if (lStack_120 != 0) {
                LOCK();
                *(int *)(lStack_120 + 0xc) = *(int *)(lStack_120 + 0xc) + 1;
                UNLOCK();
              }
              (**(code **)(*plVar11 + 0x18))(plVar11,&uStack_128);
              plVar11 = uStack_a0;
              if (uStack_a0 != (longlong *)0x0) {
                LOCK();
                plVar12 = uStack_a0 + 1;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)*plVar12 == 0) {
                  (**(code **)*uStack_a0)(uStack_a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar11 + 0x10))(plVar11);
                  }
                }
              }
            }
          }
          lVar13 = (**(code **)(plVar18[0x764] + 0x30))(plVar18 + 0x764);
          if (lVar13 != 0) {
            FUN_1401073f6(lVar13,param_1);
          }
          lVar13 = (**(code **)(*plVar18 + 0xbc8))(plVar18);
          if (lVar13 != 0) {
            FUN_140457ffc(lVar13,param_1);
          }
          FUN_140457ffc(plVar18 + 0x7f0,param_1);
          uVar10 = (**(code **)(plVar18[0x783] + 0x10))(plVar18 + 0x783);
          FUN_140457ffc(uVar10,param_1);
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)param_2[1]);
  }
  lVar19 = (longlong)param_1 + 0x44;
  lVar13 = FUN_1400f3ad8(lVar19);
  if (lVar13 == 0) goto LAB_144253a09;
  if (DAT_14cbadd90 == 0) {
    puStack_220 = &uStack_a8;
    uStack_a8 = FUN_141030f22;
    pcStack_210 = FUN_14081d0ea;
    puStack_218 = &LAB_1459f2e4c;
    puStack_228 = &LAB_148c39de3;
    puStack_230 = &LAB_1457a9eb2;
    puStack_238 = &DAT_149e063b2;
    uStack_240 = 0;
    uStack_248 = 0x10000004;
    uStack_250 = 0x10;
    uStack_258 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_144253a09;
  FUN_1402815f4(param_1,&uStack_a8);
  pcVar4 = *(char **)(uStack_a8 + 0x1d0);
  SRWLock = (PSRWLOCK)(pcVar4 + 0x38);
  AcquireSRWLockExclusive(SRWLock);
  plVar18 = uStack_a0;
  *(int *)(pcVar4 + 0x30) = *(int *)(pcVar4 + 0x30) + 1;
  if (uStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar11 = uStack_a0 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*uStack_a0)(uStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  uVar8 = *(uint *)(lVar13 + 0x3d28);
  if (uVar8 == 0) {
    if (*pcVar4 == '\0') {
      if (*(int *)(pcVar4 + 4) == 0) {
        iVar6 = 1;
        goto LAB_1442539be;
      }
    }
    else {
      iVar6 = *(int *)(pcVar4 + 4) + 1;
LAB_1442539be:
      *pcVar4 = '\0';
      *(int *)(pcVar4 + 4) = iVar6;
    }
    iVar6 = *(int *)(pcVar4 + 0x1c);
    FUN_1412c5aa4(*(undefined8 *)(pcVar4 + 0x10),*(undefined4 *)(pcVar4 + 0x18));
    pcVar4[0x18] = '\0';
    pcVar4[0x19] = '\0';
    pcVar4[0x1a] = '\0';
    pcVar4[0x1b] = '\0';
    if ((iVar6 < 0) && (*(int *)(pcVar4 + 0x1c) != 0)) {
      FUN_148e2ceec(pcVar4 + 0x10);
    }
    *(int *)(pcVar4 + 0x20) = *(int *)(pcVar4 + 0x20) + 1;
    FUN_1412c5c68(param_1);
  }
  else {
    pRStack_1d8 = SRWLock;
    if ((((*(int *)((longlong)param_1 + 0x5c) == 0) ||
         (uVar3 = *(uint *)(param_1 + 0xb), (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)) ||
       (((plVar18 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar18 == (longlong *)0x0 || ((int)plVar18[2] != *(int *)((longlong)param_1 + 0x5c))) ||
        ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) {
      lStack_138 = 0;
      plStack_130 = (longlong *)0x0;
    }
    else {
      if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
        lVar14 = *plVar18;
      }
      else {
        lVar14 = 0;
      }
      FUN_14150ea58(lVar14 + 0x6c48,&lStack_138);
      uVar8 = *(uint *)(lVar13 + 0x3d28);
    }
    uVar20 = 4;
    if ((int)uVar8 < 4) {
      uVar20 = (ulonglong)uVar8;
    }
    if ((bool)pcVar4[0x28] == 1 < (int)uVar8) {
      iVar6 = 1;
      if (*(int *)(pcVar4 + 0x2c) == 0) goto LAB_144253af3;
    }
    else {
      iVar6 = *(int *)(pcVar4 + 0x2c) + 1;
LAB_144253af3:
      pcVar4[0x28] = 1 < (int)uVar8;
      *(int *)(pcVar4 + 0x2c) = iVar6;
    }
    FUN_148e2cf1c(pcVar4 + 0x10,uVar20);
    *(int *)(pcVar4 + 0x20) = *(int *)(pcVar4 + 0x20) + 1;
    if (0 < (int)uVar8) {
      uVar21 = 0;
      uStack_1e0 = uVar20;
      do {
        iVar6 = *(int *)(*(longlong *)(lVar13 + 0x3d20) + 4 + uVar21 * 8);
        if ((((iVar6 != 0) &&
             (uVar8 = *(uint *)(*(longlong *)(lVar13 + 0x3d20) + uVar21 * 8), -1 < (int)uVar8)) &&
            (((int)uVar8 < DAT_14c9647dc &&
             (((plVar18 = (longlong *)
                          ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
               plVar18 != (longlong *)0x0 && ((int)plVar18[2] == iVar6)) &&
              ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)))))) &&
           ((plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0 &&
            ((*(uint *)(plVar18 + 1) >> 0x1e & 1) == 0)))) {
          if (DAT_14cba8288 == 0) {
            uStack_a8 = FUN_141864c34;
            pcStack_210 = FUN_14081d0ea;
            puStack_218 = &LAB_1464cee30;
            puStack_220 = &uStack_a8;
            puStack_228 = &LAB_148bfac22;
            puStack_230 = &LAB_140f21842;
            puStack_238 = &DAT_149e063b2;
            uStack_240 = 0;
            uStack_248 = 0x10000004;
            uStack_250 = 0x10;
            uStack_258 = 0x9cd0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
          }
          if ((*(int *)(plVar18[2] + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar18[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) !=
              DAT_14cba8288 + 0x30)) goto LAB_144254737;
          *(int *)(pcVar4 + 0x20) = *(int *)(pcVar4 + 0x20) + 1;
          plStack_200 = (longlong *)(*(longlong *)(pcVar4 + 0x10) + uVar21 * 0x80);
          puVar2 = (ulonglong *)(*(longlong *)(pcVar4 + 0x10) + uVar21 * 0x80);
          *puVar2 = (ulonglong)*(uint *)((longlong)plVar18 + 0xc);
          *(undefined1 *)(puVar2 + 1) = 1;
          plVar11 = plVar18 + 0x764;
          (**(code **)(plVar18[0x764] + 0x10))(plVar11);
          uVar10 = FUN_14018b740();
          lVar14 = (**(code **)(*plVar18 + 0x288))(plVar18,uVar10);
          plStack_1f8 = plVar18;
          if (lVar14 != 0) {
            uVar10 = FUN_14018b740();
            lVar15 = FUN_144718840(lVar14,uVar10);
            if (lVar15 != 0 && lVar14 != lVar15) {
              uVar9 = FUN_148e25f06(param_1,lVar15);
              *(undefined4 *)(plStack_200 + 4) = uVar9;
              plVar18 = plVar18 + 0x7f0;
              FUN_140457ffc(plVar18,param_1);
              uStack_a8 = (code *)0x0;
              uStack_a0 = (longlong *)((ulonglong)uStack_a0 & 0xffffffff00000000);
              FUN_1446efa72(&uStack_a8,0,3,0x10);
              pcVar17 = uStack_a8;
              uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,3);
              *(undefined ***)uStack_a8 = &PTR_LAB_149e020b0;
              LOCK();
              UNLOCK();
              lVar15 = DAT_14c758608 + 1;
              lVar14 = DAT_14c758608 + 1;
              if (lVar15 == 0) {
                LOCK();
                UNLOCK();
                lVar15 = DAT_14c758608 + 2;
                lVar14 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar14;
              *(longlong *)(uStack_a8 + 0x10) = lVar15;
              *(undefined ***)uStack_a8 = &PTR_FUN_14b9a8720;
              *(undefined8 *)(uStack_a8 + 0x18) = 0;
              plStack_1f0 = plVar18;
              if (param_1 == (longlong *)0x0) {
                iVar6 = 0;
              }
              else {
                uVar8 = *(uint *)((longlong)param_1 + 0xc);
                *(uint *)(uStack_a8 + 0x18) = uVar8;
                if ((int)uVar8 < DAT_14c9647dc) {
                  lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                }
                else {
                  lVar14 = 0;
                }
                iVar6 = *(int *)(lVar14 + 0x10);
                if (*(int *)(lVar14 + 0x10) == 0) {
                  LOCK();
                  iVar6 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar7 = DAT_14c964868 + 1;
                  bVar24 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar6;
                  plStack_1e8 = param_1;
                  if (bVar24) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar7);
                  }
                  LOCK();
                  iVar6 = *(int *)(lVar14 + 0x10);
                  bVar24 = iVar6 == 0;
                  if (bVar24) {
                    *(int *)(lVar14 + 0x10) = iVar7;
                    iVar6 = 0;
                  }
                  UNLOCK();
                  param_1 = plStack_1e8;
                  if (bVar24) {
                    iVar6 = iVar7;
                  }
                }
              }
              *(int *)(pcVar17 + 0x1c) = iVar6;
              *(code **)(pcVar17 + 0x20) = FUN_144254f10;
              *(undefined4 *)(pcVar17 + 0x28) = 0;
              FUN_1448b6402(plStack_1f0,auStack_e8,&uStack_a8);
              plVar18 = plStack_1f8;
              if ((int)uStack_a0 != 0) {
                if (uStack_a8 == (code *)0x0) goto LAB_144253c58;
                (*(code *)**(undefined8 **)uStack_a8)(uStack_a8,0);
                FUN_1446efa72(&uStack_a8,0,0,0x10);
                uStack_a0 = (longlong *)((ulonglong)uStack_a0 & 0xffffffff00000000);
              }
              if (uStack_a8 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
          }
LAB_144253c58:
          lVar14 = (**(code **)(*plVar11 + 0x30))(plVar11);
          if (lVar14 != 0) {
            FUN_1401073f6(lVar14,param_1);
            FUN_1418f49d6(&uStack_140);
            FUN_148e25fb2(lVar14,param_1,uStack_140);
          }
          *(undefined1 *)((longlong)plStack_200 + 0x6a) =
               *(undefined1 *)((longlong)plVar18 + 0x99c1);
          *(char *)((longlong)plStack_200 + 0x69) = (char)plVar18[0x1338];
          plVar11 = (longlong *)(**(code **)(plVar18[0x783] + 0x10))(plVar18 + 0x783);
          FUN_140457ffc(plVar11);
          uStack_a8 = (code *)0x0;
          uStack_a0 = (longlong *)((ulonglong)uStack_a0 & 0xffffffff00000000);
          FUN_1446efa72(&uStack_a8,0,3,0x10);
          plVar18 = (longlong *)uStack_a8;
          uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,3);
          *(undefined ***)uStack_a8 = &PTR_LAB_14b9abc10;
          LOCK();
          UNLOCK();
          lVar15 = DAT_14c758608 + 1;
          lVar14 = DAT_14c758608 + 1;
          if (lVar15 == 0) {
            LOCK();
            UNLOCK();
            lVar15 = DAT_14c758608 + 2;
            lVar14 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar14;
          *(longlong *)((longlong)uStack_a8 + 0x10) = lVar15;
          *(undefined ***)uStack_a8 = &PTR_FUN_14b9a87c0;
          *(longlong *)((longlong)uStack_a8 + 0x18) = 0;
          if (param_1 == (longlong *)0x0) {
            iVar6 = 0;
          }
          else {
            uVar8 = *(uint *)((longlong)param_1 + 0xc);
            *(uint *)((longlong)uStack_a8 + 0x18) = uVar8;
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            iVar6 = *(int *)(lVar14 + 0x10);
            if (*(int *)(lVar14 + 0x10) == 0) {
              LOCK();
              iVar6 = DAT_14c964868 + 1;
              UNLOCK();
              iVar7 = DAT_14c964868 + 1;
              bVar24 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar6;
              plStack_1e8 = param_1;
              if (bVar24) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar7);
              }
              LOCK();
              iVar6 = *(int *)(lVar14 + 0x10);
              bVar24 = iVar6 == 0;
              if (bVar24) {
                *(int *)(lVar14 + 0x10) = iVar7;
                iVar6 = 0;
              }
              UNLOCK();
              param_1 = plStack_1e8;
              if (bVar24) {
                iVar6 = iVar7;
              }
            }
          }
          *(int *)((longlong)plVar18 + 0x1c) = iVar6;
          plVar18[4] = (longlong)FUN_144255502;
          *(undefined4 *)(plVar18 + 5) = 0;
          if (((int)uStack_a0 == 0) || (uStack_a8 == (code *)0x0)) {
LAB_144254b3a:
            if ((int)uStack_a0 == 0) goto LAB_144253ebd;
            if (uStack_a8 != (code *)0x0) {
              (*(code *)**(undefined8 **)uStack_a8)(uStack_a8,0);
              FUN_1446efa72(&uStack_a8,0,0,0x10);
              goto LAB_144253eaa;
            }
          }
          else {
            cVar5 = (**(code **)(*(longlong *)uStack_a8 + 0x30))();
            if (cVar5 == '\0') {
              goto LAB_144254b3a;
            }
            if (*(int *)((longlong)plVar11 + 0x14) < 1) {
              iVar6 = (int)plVar11[1];
              iVar7 = (int)plVar11[2] + -1;
              *(int *)(plVar11 + 2) = iVar7;
              if (iVar7 <= iVar6) {
                iVar7 = iVar6;
                if (0 < iVar6) {
                  iVar22 = 0;
                  do {
                    if (((*(int *)(*plVar11 + 8 + (longlong)iVar22 * 0x10) == 0) ||
                        (plVar18 = *(longlong **)(*plVar11 + (longlong)iVar22 * 0x10),
                        plVar18 == (longlong *)0x0)) ||
                       (cVar5 = (**(code **)(*plVar18 + 0x28))(), cVar5 != '\0')) {
                      FUN_14005b288(plVar11,iVar22);
                      FUN_14005b248(plVar11);
                    }
                    else {
                      iVar22 = iVar22 + 1;
                    }
                    iVar7 = (int)plVar11[1];
                  } while (iVar22 < iVar7);
                }
                iVar22 = iVar7 * 2;
                if (iVar22 < 3) {
                  iVar22 = 2;
                }
                *(int *)(plVar11 + 2) = iVar22;
                if ((iVar22 < iVar6) && (*(int *)((longlong)plVar11 + 0xc) != iVar7)) {
                  FUN_14045812c(plVar11);
                }
              }
            }
            if (((int)uStack_a0 != 0) && (uStack_a8 != (code *)0x0)) {
              (**(code **)(*(longlong *)uStack_a8 + 0x38))();
            }
            lVar14 = plVar11[1];
            uVar8 = (int)lVar14 + 1;
            *(uint *)(plVar11 + 1) = uVar8;
            if (*(uint *)((longlong)plVar11 + 0xc) < uVar8) {
              FUN_1447a71f6(plVar11);
            }
            lVar15 = *plVar11;
            lVar14 = (longlong)(int)lVar14 * 0x10;
            *(undefined8 *)(lVar15 + lVar14) = 0;
            *(undefined4 *)(lVar15 + 8 + lVar14) = 0;
            *(code **)(lVar15 + lVar14) = uStack_a8;
            uStack_a8 = (code *)0x0;
            *(int *)(lVar15 + 8 + lVar14) = (int)uStack_a0;
LAB_144253eaa:
            uStack_a0 = (longlong *)((ulonglong)uStack_a0 & 0xffffffff00000000);
LAB_144253ebd:
            if (uStack_a8 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          plStack_158 = (longlong *)0x0;
          uStack_150 = 0;
          FUN_1418f2110(plVar11,&plStack_158);
          plVar18 = plStack_200 + 5;
          *(undefined4 *)(plStack_200 + 6) = 0;
          if (*(int *)((longlong)plStack_200 + 0x34) < 0) {
            FUN_1446f8c06(plVar18,0);
          }
          if ((undefined2 *)*plVar18 != (undefined2 *)0x0) {
            *(undefined2 *)*plVar18 = 0;
          }
          uStack_a8 = (code *)0x0;
          uStack_a0 = (longlong *)0x0;
          lVar14 = (longlong)(int)uStack_150;
          plStack_1e8 = plVar18;
          if (lVar14 != 0) {
            plStack_1f0 = plStack_158;
            iVar6 = 1;
            lVar15 = 0;
            do {
              if ((char)iVar6 == '\0') {
                FUN_1400020e8(&uStack_a8,&DAT_149e19f34,2);
              }
              iVar7 = *(int *)((longlong)plStack_1f0 + lVar15 + 8);
              iVar6 = 0;
              iVar22 = iVar7 + -1;
              if (iVar7 == 0) {
                iVar22 = iVar6;
              }
              FUN_1400020e8(&uStack_a8,*(undefined8 *)((longlong)plStack_1f0 + lVar15),iVar22);
              lVar15 = lVar15 + 0x10;
            } while (lVar14 * 0x10 != lVar15);
          }
          plVar18 = plStack_1f8;
          if (plStack_1e8 != &uStack_a8) {
            if (*plStack_1e8 != 0) {
              FUN_1400020a8();
            }
            plStack_200[5] = (longlong)uStack_a8;
            uStack_a8 = (code *)0x0;
            *(int *)(plStack_200 + 6) = (int)uStack_a0;
            *(undefined4 *)((longlong)plStack_200 + 0x34) = uStack_a0._4_4_;
            uStack_a0 = (longlong *)0x0;
          }
          if (uStack_a8 != (code *)0x0) {
            FUN_1400020a8();
          }
          uVar10 = FUN_140eaf18a();
          plVar11 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,uVar10);
          if (plVar11 != (longlong *)0x0) {
            uVar10 = FUN_140eaf18a();
            plVar12 = (longlong *)FUN_144718840(plVar11,uVar10);
            if ((plVar12 == (longlong *)0x0 || plVar11 == plVar12) ||
               (plVar11 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12),
               plVar11 == (longlong *)0x0)) goto LAB_1442542f6;
            lStack_168 = plStack_200[0xe];
            lStack_160 = plStack_200[0xf];
            if (lStack_160 != 0) {
              LOCK();
              *(int *)(lStack_160 + 0xc) = *(int *)(lStack_160 + 0xc) + 1;
              UNLOCK();
            }
            (**(code **)(*plVar11 + 0x18))(plVar11,&lStack_168);
            FUN_1402815f4(param_1,&uStack_a8);
            pcVar17 = uStack_a8;
            switch(uVar21 & 0xffffffff) {
            case 0:
              uStack_178 = *(undefined8 *)(uStack_a8 + 0x580);
              lStack_170 = *(longlong *)(uStack_a8 + 0x588);
              if (lStack_170 != 0) {
                LOCK();
                *(int *)(lStack_170 + 0xc) = *(int *)(lStack_170 + 0xc) + 1;
                UNLOCK();
              }
              (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_178);
              plStack_200[0xe] = *(longlong *)(pcVar17 + 0x580);
              plVar11 = *(longlong **)(pcVar17 + 0x588);
              break;
            case 1:
              uStack_188 = *(undefined8 *)(uStack_a8 + 0x590);
              lStack_180 = *(longlong *)(uStack_a8 + 0x598);
              if (lStack_180 != 0) {
                LOCK();
                *(int *)(lStack_180 + 0xc) = *(int *)(lStack_180 + 0xc) + 1;
                UNLOCK();
              }
              (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_188);
              plStack_200[0xe] = *(longlong *)(pcVar17 + 0x590);
              plVar11 = *(longlong **)(pcVar17 + 0x598);
              break;
            case 2:
              uStack_198 = *(undefined8 *)(uStack_a8 + 0x5a0);
              lStack_190 = *(longlong *)(uStack_a8 + 0x5a8);
              if (lStack_190 != 0) {
                LOCK();
                *(int *)(lStack_190 + 0xc) = *(int *)(lStack_190 + 0xc) + 1;
                UNLOCK();
              }
              (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_198);
              plStack_200[0xe] = *(longlong *)(pcVar17 + 0x5a0);
              plVar11 = *(longlong **)(pcVar17 + 0x5a8);
              break;
            case 3:
              uStack_1a8 = *(undefined8 *)(uStack_a8 + 0x5b0);
              lStack_1a0 = *(longlong *)(uStack_a8 + 0x5b8);
              if (lStack_1a0 != 0) {
                LOCK();
                *(int *)(lStack_1a0 + 0xc) = *(int *)(lStack_1a0 + 0xc) + 1;
                UNLOCK();
              }
              (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_1a8);
              plStack_200[0xe] = *(longlong *)(pcVar17 + 0x5b0);
              plVar11 = *(longlong **)(pcVar17 + 0x5b8);
              break;
            default:
              plVar11 = (longlong *)plStack_200[0xf];
              plStack_200[0xe] = 0;
              plStack_200[0xf] = 0;
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 0x10))();
                }
              }
              goto LAB_1442542c6;
            }
            plVar18 = plStack_1f8;
            plVar12 = (longlong *)plStack_200[0xf];
            if (plVar12 != plVar11) {
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
                UNLOCK();
                plVar12 = (longlong *)plStack_200[0xf];
              }
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))();
                }
              }
              plStack_200[0xf] = (longlong)plVar11;
            }
LAB_1442542c6:
            plVar11 = uStack_a0;
            if (uStack_a0 != (longlong *)0x0) {
              LOCK();
              plVar12 = uStack_a0 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                (**(code **)*uStack_a0)(uStack_a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
            }
          }
LAB_1442542f6:
          plVar11 = plStack_200;
          if (lStack_138 == 0) {
            *(undefined1 *)(plStack_200 + 10) = 0;
            plStack_200[9] = 0;
            FUN_1400b22c2(&uStack_a8,&DAT_149e02088);
            pcVar17 = uStack_a8;
            if (plVar11 + 7 != &uStack_a8) {
              if (plVar11[7] != 0) {
                FUN_1400020a8();
              }
              plVar11[7] = (longlong)uStack_a8;
              uStack_a8 = (code *)0x0;
              *(int *)(plVar11 + 8) = (int)uStack_a0;
              *(undefined4 *)((longlong)plVar11 + 0x44) = uStack_a0._4_4_;
              uStack_a0 = (longlong *)0x0;
              pcVar17 = uStack_a8;
            }
          }
          else {
            FUN_140e8a3fc(lStack_138,plVar18);
            FUN_1442234fa(lStack_138,&uStack_a8);
            plVar11 = plStack_200;
            *(undefined1 *)(plStack_200 + 10) = (undefined1)uStack_a8;
            uVar9 = 0;
            if ((char)uStack_a0 != '\0') {
              uVar9 = uStack_a8._4_4_;
            }
            *(undefined4 *)(plStack_200 + 9) = uVar9;
            if (cStack_98 == '\0') {
              uVar9 = 0;
            }
            else {
              uVar9 = uStack_a0._4_4_;
            }
            *(undefined4 *)((longlong)plStack_200 + 0x4c) = uVar9;
            FUN_1442234fa(lStack_138,auStack_e8);
            uStack_1d0 = uStack_d0;
            uStack_1c8 = uStack_c8;
            uStack_1c0 = uStack_c0;
            uStack_1b8 = uStack_b8;
            uStack_1b4 = uStack_b4;
            uStack_1b0 = uStack_b0;
            uStack_1ac = uStack_ac;
            lVar14 = FUN_14090ae24(&uStack_1d0);
            if (lVar14 != 0) {
              FUN_140390f7a(&uStack_1d0,plVar11 + 7);
            }
            pcVar17 = pcStack_78;
            if (CONCAT44(uStack_1b4,uStack_1b8) != 0) {
              FUN_1400020a8();
              pcVar17 = pcStack_78;
            }
          }
          if (pcVar17 != (code *)0x0) {
            FUN_1400020a8();
          }
          uVar10 = FUN_140da3b08();
          plVar12 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,uVar10);
          if (plVar12 != (longlong *)0x0) {
            uVar10 = FUN_140da3b08();
            plVar16 = (longlong *)FUN_144718840(plVar12,uVar10);
            if (plVar16 != (longlong *)0x0 && plVar12 != plVar16) {
              lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
              plVar12 = (longlong *)(ulonglong)*(byte *)(lVar14 + 0x57);
              plStack_1f0 = plVar12;
              if (plVar12 == (longlong *)&DAT_00000004) {
                FUN_1400b22c2(&uStack_a8,"electric");
                if (plVar11 + 0xb != &uStack_a8) {
                  if (plVar11[0xb] != 0) {
                    FUN_1400020a8();
                  }
                  plVar11[0xb] = (longlong)uStack_a8;
                  uStack_a8 = (code *)0x0;
                  *(int *)(plVar11 + 0xc) = (int)uStack_a0;
                  *(undefined4 *)((longlong)plVar11 + 100) = uStack_a0._4_4_;
                  uStack_a0 = (longlong *)0x0;
                }
                if (uStack_a8 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                FUN_140e96cb2();
                auStack_e8[0] = (&DAT_14cbc82a0)[(longlong)plVar12];
                FUN_1400021e4(auStack_e8,&uStack_a8);
                pcVar17 = uStack_a8;
                iVar6 = (int)uStack_a0;
                uVar8 = (int)uStack_a0 - 1;
                if ((int)uStack_a0 == 0) {
                  uVar8 = 0;
                }
                if (0 < (int)uVar8) {
                  uVar20 = 0;
                  do {
                    *(ushort *)(uStack_a8 + uVar20 * 2) =
                         (ushort)(*(ushort *)(uStack_a8 + uVar20 * 2) - 0x41 < 0x1a) * 0x20 +
                         *(ushort *)(uStack_a8 + uVar20 * 2);
                    uVar20 = uVar20 + 1;
                  } while (uVar8 != uVar20);
                }
                uVar9 = uStack_a0._4_4_;
                uStack_a8 = (code *)0x0;
                uStack_a0 = (longlong *)0x0;
                if (plStack_200[0xb] != 0) {
                  FUN_1400020a8();
                }
                plVar11 = plStack_200;
                plStack_200[0xb] = (longlong)pcVar17;
                *(int *)(plStack_200 + 0xc) = iVar6;
                *(undefined4 *)((longlong)plStack_200 + 100) = uVar9;
                plVar18 = plStack_1f8;
                if (uStack_a8 != (code *)0x0) {
                  FUN_1400020a8();
                  plVar18 = plStack_1f8;
                }
              }
              *(bool *)(plVar11 + 0xd) = plStack_1f0 != (longlong *)0x0;
              plStack_200 = (longlong *)(**(code **)(*plVar18 + 0xbc8))(plVar18);
              if (plStack_200 != (longlong *)0x0) {
                lVar14 = plStack_200[1];
                if ((longlong)(int)lVar14 != 0) {
                  lVar15 = *plStack_200;
                  lVar23 = 0;
                  do {
                    if (((*(int *)(lVar15 + 8 + lVar23) != 0) &&
                        (plVar18 = *(longlong **)(lVar15 + lVar23), plVar18 != (longlong *)0x0)) &&
                       (cVar5 = (**(code **)(*plVar18 + 0x20))(plVar18,param_1), cVar5 != '\0'))
                    goto LAB_1442546cd;
                    lVar23 = lVar23 + 0x10;
                  } while ((longlong)(int)lVar14 * 0x10 != lVar23);
                }
                uStack_a8 = FUN_1442559b6;
                uStack_a0 = (longlong *)((ulonglong)uStack_a0 & 0xffffffff00000000);
                FUN_148e26030(plStack_200,auStack_e8,param_1,&uStack_a8);
              }
            }
          }
LAB_1442546cd:
          lVar14 = FUN_1400f3ad8(lVar19);
          if (lVar14 != 0) {
            if (DAT_14cbadd90 == 0) {
              uStack_a8 = FUN_141030f22;
              pcStack_210 = FUN_14081d0ea;
              puStack_218 = &LAB_1459f2e4c;
              puStack_220 = &uStack_a8;
              puStack_228 = &LAB_148c39de3;
              puStack_230 = &LAB_1457a9eb2;
              puStack_238 = &DAT_149e063b2;
              uStack_240 = 0;
              uStack_248 = 0x10000004;
              uStack_250 = 0x10;
              uStack_258 = 0x3de0;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
            if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38))
                && (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                     (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
               ((*(int *)(lVar14 + 0xd98) != 0 && (*(longlong *)(lVar14 + 0xda0) != 0)))) {
              *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
              FUN_1403ca8ec(lVar14 + 0xd98,&DAT_14cbd95b0);
            }
          }
          FUN_1447a1747(plStack_158,uStack_150 & 0xffffffff);
          uVar20 = uStack_1e0;
          if (plStack_158 != (longlong *)0x0) {
            FUN_1400020a8();
            uVar20 = uStack_1e0;
          }
        }
LAB_144254737:
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar20);
    }
    plVar18 = plStack_130;
    SRWLock = pRStack_1d8;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_130 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plStack_130)(plStack_130);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        SRWLock = pRStack_1d8;
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          SRWLock = pRStack_1d8;
        }
      }
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
LAB_144253a09:
  if ((uStack_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e25cda FUN_148e25cda body=555 status=ok
// SIG undefined FUN_148e25cda(void)

void FUN_148e25cda(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar7 == 0) goto LAB_148e25d38;
  lVar8 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) goto LAB_148e25d38;
  FUN_1402815f4(param_1,&local_a8);
  lVar8 = *(longlong *)(local_a8 + 0x1d0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x38));
  *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
  plVar4 = (longlong *)CONCAT44(uStack_9c,local_a0);
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
  if (*(char *)(lVar8 + 8) == '\0') {
    iVar6 = *(int *)(lVar8 + 0xc) + 1;
LAB_148e25dd6:
    *(undefined1 *)(lVar8 + 8) = 1;
    *(int *)(lVar8 + 0xc) = iVar6;
  }
  else if (*(int *)(lVar8 + 0xc) == 0) {
    iVar6 = 1;
    goto LAB_148e25dd6;
  }
  uVar9 = FUN_1401b4c98(lVar7);
  uVar3 = *(undefined4 *)(param_1 + 0xb0);
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  FUN_1446efa72(&local_c0,0,3,0x10);
  puVar5 = local_c0;
  local_b8 = 3;
  *local_c0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_c0[2] = lVar10;
  *local_c0 = &PTR_FUN_14b9a88a0;
  local_c0[3] = 0;
  FUN_14485c47a(local_c0 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = FUN_148e26130;
  local_a8 = 0;
  local_a0 = 0;
  FUN_14487d8d8(&local_a8,&local_c0);
  local_68 = 1;
  local_c8 = local_b0;
  local_b0[0] = 0;
  local_ac = 0xbf800000;
  FUN_1406f4044(uVar9,param_1 + 0xa8,&local_a8,uVar3);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
  FUN_1449db362(&local_c0);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x38));
LAB_148e25d38:
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e25f06 FUN_148e25f06 body=171 status=ok
// SIG undefined FUN_148e25f06(void)

ulonglong FUN_148e25f06(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [40];
  uint local_20;
  char local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1400f3ad8(param_1 + 0x44);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14018b740();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_14018b740();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar4 != 0 && lVar3 != lVar4) {
        FUN_140c4ebe4(&local_20,lVar4,param_2);
        if (local_1c != '\0') {
          uVar5 = (ulonglong)local_20;
          goto LAB_148e25f94;
        }
      }
    }
  }
  uVar5 = (**(code **)(*param_2 + 0x28))(param_2);
LAB_148e25f94:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e25fb2 FUN_148e25fb2 body=125 status=ok
// SIG undefined FUN_148e25fb2(void)

void FUN_148e25fb2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e26030 FUN_148e26030 body=254 status=ok
// SIG undefined FUN_148e26030(void)

undefined8
FUN_148e26030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b95ff40;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a8830;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14094eacc(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e26130 FUN_148e26130 body=167 status=ok
// SIG undefined FUN_148e26130(void)

void FUN_148e26130(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x1d0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x38));
  *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
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
  if (*(char *)(lVar3 + 8) == '\0') {
    if (*(int *)(lVar3 + 0xc) != 0) goto LAB_148e261a5;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0xc) + 1;
  }
  *(undefined1 *)(lVar3 + 8) = 0;
  *(int *)(lVar3 + 0xc) = iVar4;
LAB_148e261a5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000148e261c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e261d8 FUN_148e261d8 body=2099 status=ok
// SIG undefined FUN_148e261d8(void)

undefined4 * FUN_148e261d8(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined4 *local_1e0;
  undefined8 local_1d8;
  int local_1cc [2];
  int local_1c4;
  int local_1c0 [2];
  int local_1b8;
  int local_1b4 [2];
  int local_1ac;
  int local_1a8 [2];
  int local_1a0;
  int local_19c [2];
  int local_194;
  char local_190 [4];
  undefined8 local_18c;
  undefined1 local_184;
  longlong *local_180;
  undefined4 local_178;
  longlong *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  longlong *local_160;
  undefined4 local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined4 local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined4 local_118;
  undefined1 local_114;
  undefined8 local_104;
  undefined1 local_c0 [16];
  longlong local_b0;
  undefined4 local_70;
  int local_6c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar4 = FUN_1402735c8();
  plVar8 = (longlong *)(lVar4 + 0x780);
  FUN_148cfce14(param_3,local_190);
  if (local_190[0] == '\x01') {
    local_1e8 = param_1;
    local_1e0 = param_2;
    local_1d8 = param_3;
    FUN_1447a97f4(&local_70,&local_180);
    if (0 < local_6c) {
      iVar10 = 0;
      do {
        FUN_144a7c8fe(&local_70,local_19c,iVar10,1);
        if (((((local_19c[0] == DAT_14cb7beb0) && (local_194 == DAT_14cb7beb8)) ||
             ((FUN_144a7c8fe(&local_70,local_1a8,iVar10,1), local_1a8[0] == DAT_14cb7bec8 &&
              (local_1a0 == DAT_14cb7bed0)))) ||
            ((FUN_144a7c8fe(&local_70,local_1b4,iVar10,1), local_1b4[0] == DAT_14cb7bee0 &&
             (local_1ac == DAT_14cb7bee8)))) ||
           (((FUN_144a7c8fe(&local_70,local_1c0,iVar10,1), local_1c0[0] == DAT_14cb7bef8 &&
             (local_1b8 == DAT_14cb7bf00)) ||
            ((FUN_144a7c8fe(&local_70,local_1cc,iVar10,1), local_1cc[0] == DAT_14cb7bf10 &&
             (local_1c4 == DAT_14cb7bf18)))))) {
          FUN_1402b5374(&local_70,iVar10,0);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_6c);
    }
    uVar9 = local_70;
    param_1 = local_1e8;
    param_3 = local_1d8;
    param_2 = local_1e0;
    if (local_58 != 0) {
      FUN_1400020a8();
      param_1 = local_1e8;
      param_3 = local_1d8;
      param_2 = local_1e0;
    }
  }
  else {
    uVar9 = local_180._0_4_;
  }
  iVar10 = FUN_148e2da8a(plVar8,uVar9,local_190);
  lVar4 = *plVar8;
  if (CONCAT44(uStack_164,local_168) != 0) {
    FUN_1400020a8();
  }
  if ((longlong)iVar10 * 0x58 + lVar4 != 0 && iVar10 != -1) {
    FUN_148cfce14(param_3,local_190);
    if (local_190[0] == '\x01') {
      local_1e8 = param_1;
      local_1e0 = param_2;
      FUN_1447a97f4(&local_70,&local_180);
      if (0 < local_6c) {
        iVar10 = 0;
        do {
          FUN_144a7c8fe(&local_70,local_19c,iVar10,1);
          if (((((local_19c[0] == DAT_14cb7beb0) && (local_194 == DAT_14cb7beb8)) ||
               ((FUN_144a7c8fe(&local_70,local_1a8,iVar10,1), local_1a8[0] == DAT_14cb7bec8 &&
                (local_1a0 == DAT_14cb7bed0)))) ||
              (((FUN_144a7c8fe(&local_70,local_1b4,iVar10,1), local_1b4[0] == DAT_14cb7bee0 &&
                (local_1ac == DAT_14cb7bee8)) ||
               ((FUN_144a7c8fe(&local_70,local_1c0,iVar10,1), local_1c0[0] == DAT_14cb7bef8 &&
                (local_1b8 == DAT_14cb7bf00)))))) ||
             ((FUN_144a7c8fe(&local_70,local_1cc,iVar10,1), local_1cc[0] == DAT_14cb7bf10 &&
              (local_1c4 == DAT_14cb7bf18)))) {
            FUN_1402b5374(&local_70,iVar10,0);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_6c);
      }
      param_1 = local_1e8;
      param_2 = local_1e0;
      if (local_58 != 0) {
        FUN_1400020a8();
        param_1 = local_1e8;
        param_2 = local_1e0;
      }
    }
    else {
      local_70 = local_180._0_4_;
    }
    iVar10 = FUN_148e2da8a(plVar8,local_70,local_190);
    lVar4 = 0;
    if (iVar10 != -1) {
      lVar4 = (longlong)iVar10 * 0x58 + *plVar8;
    }
    lVar6 = *(longlong *)(lVar4 + 0x40);
    if (lVar6 == 0) {
      uVar5 = FUN_141209660();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(lVar4 + 0x40) = lVar6;
    }
    lVar7 = *(longlong *)(lVar4 + 0x48);
    if (lVar7 != 0) {
      if (CONCAT44(uStack_164,local_168) != 0) {
        FUN_1400020a8();
      }
LAB_148e26667:
      FUN_1412099d2(param_1,&DAT_14cbd5aa8);
      FUN_14125b7f0(local_190);
      plVar1 = local_180;
      local_18c = *(undefined8 *)(lVar7 + 100);
      plVar8 = *(longlong **)(lVar7 + 0x28);
      if (local_180 != plVar8) {
        local_180 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      plVar1 = local_170;
      local_178 = *(undefined4 *)(lVar7 + 0x30);
      plVar8 = *(longlong **)(lVar7 + 0x18);
      if (local_170 != plVar8) {
        local_170 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      local_168 = *(undefined4 *)(lVar7 + 0x20);
      local_104 = *(undefined8 *)(lVar7 + 0xe4);
      local_150 = *(undefined8 *)(lVar7 + 0x98);
      FUN_144a787a6(local_138,lVar7 + 0xb8);
      lVar4 = *(longlong *)(lVar7 + 0xa8);
      if (lVar4 == 0) {
        uVar5 = FUN_14036a63e();
        lVar4 = FUN_14477b664(uVar5);
        *(longlong *)(lVar7 + 0xa8) = lVar4;
      }
      plVar8 = (longlong *)(lVar7 + 0xa0);
      lVar6 = *(longlong *)(lVar7 + 0xb0);
      if (lVar6 == 0) {
        if ((lVar4 != 0) && (*plVar8 != 0)) {
          plVar1 = *(longlong **)(lVar4 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
            *(undefined8 *)(lVar7 + 0xb0) = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar6 = FUN_144aff482(uVar5,plVar8);
            *(longlong *)(lVar7 + 0xb0) = lVar6;
            if (lVar6 != 0) {
              lVar4 = *(longlong *)(lVar7 + 0xa8);
              goto LAB_148e2675c;
            }
          }
        }
        plVar8 = (longlong *)FUN_140e82300();
      }
      else {
LAB_148e2675c:
        if (lVar4 == 0) {
          uVar5 = FUN_14036a63e();
          lVar4 = FUN_14477b664(uVar5);
          *(longlong *)(lVar7 + 0xa8) = lVar4;
          lVar6 = *(longlong *)(lVar7 + 0xb0);
          if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*plVar8 != 0)) {
            plVar1 = *(longlong **)(lVar4 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
              lVar6 = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar6 = FUN_144aff482(uVar5,plVar8);
            }
            *(longlong *)(lVar7 + 0xb0) = lVar6;
          }
        }
        plVar8 = (longlong *)(lVar6 + 0x18);
      }
      plVar2 = local_148;
      plVar1 = (longlong *)*plVar8;
      if (local_148 != plVar1) {
        local_148 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      local_140 = (undefined4)plVar8[1];
      local_114 = *(undefined1 *)(lVar7 + 0xd8);
      local_118 = *(undefined4 *)(lVar7 + 0xdc);
      local_184 = *(undefined1 *)(lVar7 + 0x60);
      FUN_144a787a6(local_128,lVar7 + 200);
      plVar1 = local_160;
      plVar8 = *(longlong **)(lVar7 + 0x38);
      if (local_160 != plVar8) {
        local_160 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      local_158 = *(undefined4 *)(lVar7 + 0x40);
      local_b0 = (longlong)*(int *)(lVar7 + 0x48);
      FUN_144a787a6(local_c0,lVar7 + 0x50);
      FUN_14120969a(param_1,param_2,local_190);
      FUN_140989dc4(local_190);
      goto LAB_148e26419;
    }
    if ((*(longlong *)(lVar4 + 0x38) == 0) || (lVar6 == 0)) {
      if (CONCAT44(uStack_164,local_168) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      plVar8 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar7 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x38));
      }
      *(longlong *)(lVar4 + 0x48) = lVar7;
      if (CONCAT44(uStack_164,local_168) != 0) {
        FUN_1400020a8();
      }
      if (lVar7 != 0) goto LAB_148e26667;
    }
  }
  *param_2 = 0xffffffff;
LAB_148e26419:
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148e26a0c FUN_148e26a0c body=586 status=ok
// SIG undefined FUN_148e26a0c(void)

void FUN_148e26a0c(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_1b8 [40];
  undefined1 local_190 [8];
  longlong local_188;
  undefined8 uStack_180;
  undefined1 local_170 [8];
  longlong local_168;
  undefined8 uStack_160;
  undefined2 *local_150;
  undefined2 *local_148;
  ulonglong *local_140;
  char local_138;
  undefined2 local_130 [128];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar5 = FUN_140495e96(param_1 + 0x30);
  if (lVar5 != 0) {
    lVar5 = FUN_140cee904(lVar5);
    if (lVar5 != 0) {
      local_150 = local_130;
      local_138 = '\0';
      local_140 = &local_30;
      local_148 = local_150;
      uVar6 = FUN_1473727b4(&local_150,"challenges.");
      FUN_1458d35be(param_2,local_170);
      FUN_1400021e4(local_170,&local_168);
      lVar4 = local_168;
      uVar2 = (int)uStack_160 - 1;
      if ((int)uStack_160 == 0) {
        uVar2 = 0;
      }
      uVar10 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        uVar9 = 0;
        do {
          uVar1 = *(ushort *)(local_168 + uVar9 * 2);
          *(ushort *)(local_168 + uVar9 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
        uVar10 = (ulonglong)((int)uStack_160 - 1);
        if ((int)uStack_160 == 0) {
          uVar10 = 0;
        }
      }
      local_168 = 0;
      uStack_160 = 0;
      lVar7 = FUN_1449668a2(uVar6,lVar4,uVar10);
      puVar8 = *(undefined2 **)(lVar7 + 8);
      if (*(undefined2 **)(lVar7 + 0x10) <= puVar8 + 1) {
        FUN_140213274(lVar7,1);
        puVar8 = *(undefined2 **)(lVar7 + 8);
      }
      *(undefined2 **)(lVar7 + 8) = puVar8 + 1;
      *puVar8 = 0x2e;
      FUN_140ff3baa(param_2,local_190);
      FUN_1400021e4(local_190,&local_188);
      lVar3 = local_188;
      uVar2 = (int)uStack_180 - 1;
      if ((int)uStack_180 == 0) {
        uVar2 = 0;
      }
      uVar10 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        uVar9 = 0;
        do {
          uVar1 = *(ushort *)(local_188 + uVar9 * 2);
          *(ushort *)(local_188 + uVar9 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
        uVar10 = (ulonglong)((int)uStack_180 - 1);
        if ((int)uStack_180 == 0) {
          uVar10 = 0;
        }
      }
      local_188 = 0;
      uStack_180 = 0;
      FUN_1449668a2(lVar7,lVar3,uVar10);
      if (lVar3 != 0) {
        FUN_1400020a8(lVar3);
      }
      if (local_188 != 0) {
        FUN_1400020a8();
      }
      if (lVar4 != 0) {
        FUN_1400020a8(lVar4);
      }
      if (local_168 != 0) {
        FUN_1400020a8();
      }
      *local_148 = 0;
      FUN_145a4750c(lVar5,local_150);
      if (local_138 == '\x01') {
        FUN_1400020a8(local_150);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e26c58 FUN_148e26c58 body=399 status=ok
// SIG undefined FUN_148e26c58(void)

void FUN_148e26c58(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_58 [32];
  double local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_14011be0c(param_1 + 0x30);
  if (lVar4 != 0) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_148e26ca6;
  }
  lVar4 = 0;
LAB_148e26ca6:
  cVar3 = FUN_14011bf50(lVar4);
  if ((cVar3 != '\0') && (plVar7 = *(longlong **)(param_1 + 0x20), plVar7 != (longlong *)0x0)) {
    lVar5 = FUN_144a2f878();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      uVar6 = FUN_14143feb4();
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar6);
      if (plVar7 != (longlong *)0x0) {
        uVar6 = FUN_14143feb4();
        plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
        if (plVar8 != (longlong *)0x0 && plVar7 != plVar8) {
          FUN_1403adc5e(&local_38,lVar4);
          lVar4 = *(longlong *)((longlong)local_38 + 0x60);
          AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
          plVar7 = plStack_30;
          *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
          if (plStack_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_30 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_30)(plStack_30);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_38);
          if ((((local_38 != *(double *)(lVar4 + 0x58)) ||
               (NAN(local_38) || NAN(*(double *)(lVar4 + 0x58)))) ||
              ((double)plStack_30 != *(double *)(lVar4 + 0x60))) ||
             ((NAN((double)plStack_30) || NAN(*(double *)(lVar4 + 0x60)) ||
              (*(int *)(lVar4 + 0x68) == 0)))) {
            *(double *)(lVar4 + 0x58) = local_38;
            *(longlong **)(lVar4 + 0x60) = plStack_30;
            *(int *)(lVar4 + 0x68) = *(int *)(lVar4 + 0x68) + 1;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e26de8 FUN_148e26de8 body=43 status=ok
// SIG undefined FUN_148e26de8(void)

void FUN_148e26de8(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return;
  }
  FUN_14663b402(param_1,*(undefined8 *)(param_2 + 8));
  FUN_148e2736a(param_1,1);
  return;
}



// FUNCTION 148e26e14 FUN_148e26e14 body=119 status=ok
// SIG undefined FUN_148e26e14(void)

void FUN_148e26e14(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    return;
  }
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_140d27aa0(lVar1);
      FUN_148db7a82(uVar3,1);
      goto LAB_148e26e70;
    }
  }
  lVar1 = 0;
LAB_148e26e70:
  FUN_14663b402(param_1,0);
  FUN_148e272b0(param_1,lVar1);
  return;
}



// FUNCTION 148e26e8c FUN_148e26e8c body=189 status=ok
// SIG undefined FUN_148e26e8c(void)

void FUN_148e26e8c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_1400d7050(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        uVar3 = FUN_140d27aa0(lVar1);
        if (*(char *)(param_2 + 8) == '\x01') {
          FUN_148db7c98(uVar3);
        }
        else {
          FUN_148db7c62(uVar3);
        }
        FUN_148db7d38(uVar3,&local_28);
        FUN_14663b402(param_1,local_28);
      }
    }
    FUN_148e2736a(param_1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e26f4a FUN_148e26f4a body=180 status=ok
// SIG undefined FUN_148e26f4a(void)

void FUN_148e26f4a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_1400d7050(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        uVar3 = FUN_140d27aa0(lVar1);
        FUN_148db7cce(uVar3,param_2 + 8);
        FUN_148db7d38(uVar3,&local_28);
        FUN_14663b402(param_1,local_28);
      }
    }
    FUN_148e2736a(param_1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e2700a FUN_148e2700a body=308 status=ok
// SIG undefined FUN_148e2700a(void)

void FUN_148e2700a(longlong param_1,longlong param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1400d7050(param_1 + 0x30);
  if (lVar3 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      local_48 = 0;
      uVar5 = FUN_140d27aa0(lVar3);
      FUN_1449027d0(param_1,&local_58);
      lVar4 = *(longlong *)(local_58 + 0x470);
      SRWLock = (PSRWLOCK)(lVar4 + 0x98);
      AcquireSRWLockShared(SRWLock);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
          }
        }
      }
      local_48 = *(undefined8 *)(lVar4 + 0x38);
      ReleaseSRWLockShared(SRWLock);
      FUN_148db7782(uVar5,&local_48,*(undefined1 *)(param_2 + 8));
      if (*(char *)(param_2 + 8) == '\0') {
        FUN_1415ce38e(lVar3,param_2 + 0xc,0);
      }
      FUN_148e272b0(param_1,lVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e27140 FUN_148e27140 body=179 status=ok
// SIG undefined FUN_148e27140(void)

void FUN_148e27140(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x470);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x98));
  *(int *)(lVar3 + 0x90) = *(int *)(lVar3 + 0x90) + 1;
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
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  uVar5 = FUN_1400d7050(param_1 + 0x30);
  FUN_148d11aae(uVar5,uVar4);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x98));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e271f4 FUN_148e271f4 body=186 status=ok
// SIG undefined FUN_148e271f4(void)

void FUN_148e271f4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [45];
  undefined1 local_1b;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_1400d7050(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        lVar2 = FUN_140d27aa0(lVar1);
        FUN_148db7b8a(lVar2);
        if ((*(char *)(lVar2 + 0x46) == '\x01') && ((*(byte *)(lVar2 + 0x45) & 1) != 0)) {
          FUN_148dbb484(lVar1,0);
        }
        else {
          FUN_1441f1d34(lVar1,1);
        }
        local_19 = 0;
        local_1b = 0;
        FUN_14572e6ac(lVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e272b0 FUN_148e272b0 body=184 status=ok
// SIG undefined FUN_148e272b0(void)

void FUN_148e272b0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0xd8) != 0)) {
    lVar2 = (**(code **)(*param_2 + 0x14d0))(param_2);
    if (lVar2 != 0) {
      local_28 = 0;
      bVar1 = FUN_148e2814e(param_1,&local_28);
      lVar2 = local_28;
      if ((local_28 != 0 & bVar1) == 1) {
        plVar3 = (longlong *)(**(code **)(*param_2 + 0x14d0))(param_2);
        (**(code **)(*plVar3 + 0x30))(plVar3,lVar2 + 0x90,*(undefined8 *)(param_1 + 0xd8));
        *(undefined8 *)(param_1 + 0xd8) = 0;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e2736a FUN_148e2736a body=447 status=ok
// SIG undefined FUN_148e2736a(void)

void FUN_148e2736a(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_1400d7050(param_1 + 0x30);
  if (lVar4 == 0) goto LAB_148e273bd;
  lVar5 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_148e273bd;
  FUN_1449027d0(param_1,&local_50);
  lVar5 = *(longlong *)(local_50 + 0x470);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x98));
  *(int *)(lVar5 + 0x90) = *(int *)(lVar5 + 0x90) + 1;
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
  if (*(char *)(lVar5 + 0x30) == '\0') {
    iVar8 = *(int *)(lVar5 + 0x34) + 1;
LAB_148e27458:
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(int *)(lVar5 + 0x34) = iVar8;
  }
  else if (*(int *)(lVar5 + 0x34) == 0) {
    iVar8 = 1;
    goto LAB_148e27458;
  }
  uVar6 = FUN_140d27aa0(lVar4);
  lVar7 = FUN_148db7d68(uVar6);
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10aa) == '\x01')) {
    uVar6 = FUN_141563480(lVar7 + 0x10b0);
    if (param_2 == '\0') {
      cVar3 = FUN_148cd0530(lVar7,lVar4);
      if (*(char *)(lVar5 + 0x30) == cVar3) {
        if (*(int *)(lVar5 + 0x34) != 0) goto LAB_148e27484;
        iVar8 = 1;
      }
      else {
        iVar8 = *(int *)(lVar5 + 0x34) + 1;
      }
      *(char *)(lVar5 + 0x30) = cVar3;
      *(int *)(lVar5 + 0x34) = iVar8;
    }
    else {
      FUN_148e272b0(param_1,lVar4);
      cVar3 = FUN_148cd0530(lVar7,lVar4);
      if (*(char *)(lVar5 + 0x30) == cVar3) {
        iVar8 = 1;
        if (*(int *)(lVar5 + 0x34) == 0) goto LAB_148e274fc;
      }
      else {
        iVar8 = *(int *)(lVar5 + 0x34) + 1;
LAB_148e274fc:
        *(char *)(lVar5 + 0x30) = cVar3;
        *(int *)(lVar5 + 0x34) = iVar8;
      }
      FUN_148e27f7e(param_1,lVar4,uVar6);
    }
  }
LAB_148e27484:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x98));
LAB_148e273bd:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e2752a FUN_148e2752a body=254 status=ok
// SIG undefined FUN_148e2752a(void)

undefined8
FUN_148e2752a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9a83a0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a9ef0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145dc35b6(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e2762a FUN_148e2762a body=573 status=ok
// SIG undefined FUN_148e2762a(void)

void FUN_148e2762a(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(DAT_14c98e618 + 0x318) < 1) ||
     (plVar6 = *(longlong **)(*(longlong *)(DAT_14c98e618 + 0x310) + 8), plVar6 == (longlong *)0x0))
  {
    plVar6 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  lVar3 = FUN_1400d7050(param_1 + 0x30);
  if (lVar3 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      uVar5 = FUN_140d27aa0(lVar3);
      fVar7 = (float)FUN_148e27db0(param_1);
      if ((param_4 == 0) &&
         (1e-08 < ABS(SQRT(*(float *)(param_3 + 0x30) * *(float *)(param_3 + 0x30) +
                           *(float *)(param_3 + 0x34) * *(float *)(param_3 + 0x34))))) {
        fVar10 = 1.0 / (*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x28) -
                       *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x20));
        fVar11 = *(float *)(param_2 + 0x1c) * fVar10;
        fVar9 = -*(float *)(param_2 + 0x24) * fVar10;
        fVar8 = -*(float *)(param_2 + 0x20) * fVar10;
        fVar10 = fVar10 * *(float *)(param_2 + 0x28);
        local_98 = (double)((fVar8 * *(float *)(param_3 + 0x20) +
                             fVar11 * *(float *)(param_3 + 0x24) +
                            (-*(float *)(param_2 + 0x2c) * fVar8 -
                            fVar11 * *(float *)(param_2 + 0x30))) * fVar7);
        local_a0 = (double)((fVar10 * *(float *)(param_3 + 0x20) +
                             fVar9 * *(float *)(param_3 + 0x24) +
                            (-*(float *)(param_2 + 0x2c) * fVar10 -
                            *(float *)(param_2 + 0x30) * fVar9)) * fVar7);
        FUN_148db7084(uVar5);
      }
    }
  }
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
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e27868 FUN_148e27868 body=254 status=ok
// SIG undefined FUN_148e27868(void)

undefined8
FUN_148e27868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9a9fd0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a9f60;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148e30a94(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e27968 FUN_148e27968 body=628 status=ok
// SIG undefined FUN_148e27968(void)

void FUN_148e27968(longlong param_1,longlong param_2,longlong param_3,int param_4,char param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(int *)(DAT_14c98e618 + 0x318) < 1) ||
     (plVar7 = *(longlong **)(*(longlong *)(DAT_14c98e618 + 0x310) + 8), plVar7 == (longlong *)0x0))
  {
    plVar7 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  lVar4 = FUN_1400d7050(param_1 + 0x30);
  if (lVar4 != 0) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      uVar6 = FUN_140d27aa0(lVar4);
      fVar8 = (float)FUN_148e27db0(param_1);
      if (param_4 == 1 && param_5 == '\0') {
        lVar4 = *(longlong *)(param_3 + 0x40);
        plVar3 = *(longlong **)(param_3 + 0x50);
        lVar5 = DAT_14c966e98;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          lVar5 = DAT_14c966e98;
          UNLOCK();
          LOCK();
          plVar2 = plVar3 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
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
        if (lVar4 == lVar5) {
          fVar11 = 1.0 / (*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x28) -
                         *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x20));
          fVar12 = *(float *)(param_2 + 0x1c) * fVar11;
          fVar10 = -*(float *)(param_2 + 0x24) * fVar11;
          fVar9 = -*(float *)(param_2 + 0x20) * fVar11;
          fVar11 = fVar11 * *(float *)(param_2 + 0x28);
          local_a8 = (double)((fVar9 * *(float *)(param_3 + 0x20) +
                               fVar12 * *(float *)(param_3 + 0x24) +
                              (-*(float *)(param_2 + 0x2c) * fVar9 -
                              fVar12 * *(float *)(param_2 + 0x30))) * fVar8);
          local_b0 = (double)((fVar11 * *(float *)(param_3 + 0x20) +
                               fVar10 * *(float *)(param_3 + 0x24) +
                              (-*(float *)(param_2 + 0x2c) * fVar11 -
                              *(float *)(param_2 + 0x30) * fVar10)) * fVar8);
          FUN_148db7382(uVar6);
        }
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_a0 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e27bde FUN_148e27bde body=254 status=ok
// SIG undefined FUN_148e27bde(void)

undefined8
FUN_148e27bde(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9aa0b0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9aa040;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148e30f60(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e27cde FUN_148e27cde body=208 status=ok
// SIG undefined FUN_148e27cde(void)

void FUN_148e27cde(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449027d0(param_1,&local_40);
  lVar3 = *(longlong *)(local_40 + 0x470);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x98));
  *(int *)(lVar3 + 0x90) = *(int *)(lVar3 + 0x90) + 1;
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
  if (*(char *)(lVar3 + 0x78) == param_2) {
    if (*(int *)(lVar3 + 0x7c) != 0) goto LAB_148e27d72;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x7c) + 1;
  }
  *(char *)(lVar3 + 0x78) = param_2;
  *(int *)(lVar3 + 0x7c) = iVar4;
LAB_148e27d72:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x98));
  if (param_2 != '\x02') {
    FUN_14663b402(param_1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e27db0 FUN_148e27db0 body=188 status=ok
// SIG undefined FUN_148e27db0(void)

void FUN_148e27db0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14039bfee(lVar1,local_1c,local_20);
      lVar1 = FUN_1401e2c50();
      if (*(longlong *)(lVar1 + 0x110) == 0) {
        FUN_140aa6c08(lVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(0x3f800000);
}



// FUNCTION 148e27e7e FUN_148e27e7e body=254 status=ok
// SIG undefined FUN_148e27e7e(void)

undefined8
FUN_148e27e7e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e35290;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9aa120;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140feff30(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e27f7e FUN_148e27f7e body=455 status=ok
// SIG undefined FUN_148e27f7e(void)

void FUN_148e27f7e(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [4];
  undefined8 local_c4;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined4 local_98;
  undefined8 local_90;
  longlong *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = (**(code **)(*param_2 + 0x14d0))(param_2);
  if ((param_3 != 0) && (lVar2 != 0)) {
    local_c8[0] = 0;
    local_c4 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    uStack_ac = 0;
    local_a4 = 0;
    local_98 = 0xc69c4000;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_90 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_37 = 1;
    local_35 = 0;
    local_34 = 0;
    local_d8 = (undefined8 *)0x0;
    local_d0 = 0;
    plStack_88 = param_2;
    FUN_1446efa72(&local_d8,0,3,0x10);
    puVar1 = local_d8;
    local_d0 = 3;
    *local_d8 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_d8[2] = lVar4;
    *local_d8 = &PTR_FUN_14b9aa190;
    local_d8[3] = 0;
    FUN_14485c47a(local_d8 + 3,param_1);
    puVar1[4] = &LAB_148e28146;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_144a450dc((longlong)&uStack_ac + 4,&local_d8);
    FUN_1449db362(&local_d8);
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x14d0))(param_2);
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_d8,param_3 + 0x90,local_c8);
    *(undefined8 **)(param_1 + 0xd8) = local_d8;
    FUN_1409838b8(local_c8);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e2814e FUN_148e2814e body=118 status=ok
// SIG undefined FUN_148e2814e(void)

undefined8 FUN_148e2814e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_140d27aa0(lVar1);
      lVar1 = FUN_148db7d68(uVar3);
      if ((lVar1 != 0) && (*(char *)(lVar1 + 0x10aa) == '\x01')) {
        uVar3 = FUN_141563480(lVar1 + 0x10b0);
        *param_2 = uVar3;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 148e281d4 FUN_148e281d4 body=429 status=ok
// SIG undefined FUN_148e281d4(void)

void FUN_148e281d4(longlong param_1,undefined8 param_2,float param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((0.0 < param_3) && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) {
    lVar3 = FUN_144a2f878();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar4 = FUN_1401b4c98(lVar1);
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      FUN_1446efa72(&local_b0,0,3,0x10);
      puVar2 = local_b0;
      local_a8 = 3;
      *local_b0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_b0[2] = lVar3;
      *local_b0 = &PTR_FUN_14b9aa740;
      local_b0[3] = 0;
      FUN_14485c47a(local_b0 + 3,param_1);
      *(undefined4 *)(puVar2 + 5) = 0;
      puVar2[4] = FUN_1458ba4c4;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_b0);
      local_58 = 1;
      local_b8 = local_a0;
      local_a0[0] = 0;
      local_9c = 0xbf800000;
      FUN_1406f4044(uVar4,param_1 + 0x178,&local_98,param_3 * 0.7);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_b0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e28382 FUN_148e28382 body=309 status=ok
// SIG undefined FUN_148e28382(void)

void FUN_148e28382(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  if ((param_1 != 0) && (lVar6 = FUN_14086c98e(), lVar6 != 0)) {
    lVar6 = *(longlong *)(lVar6 + 0x180);
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    else if (lVar6 == 0) {
      return;
    }
    if ((longlong)*(int *)(lVar6 + 0x128) != 0) {
      plVar8 = *(longlong **)(lVar6 + 0x120);
      plVar7 = plVar8 + (longlong)*(int *)(lVar6 + 0x128) * 2;
      do {
        plVar3 = (longlong *)plVar8[1];
        if (plVar3 != (longlong *)0x0) {
          lVar6 = *plVar8;
          LOCK();
          *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
          UNLOCK();
          iVar5 = (int)plVar3[1];
          do {
            if (iVar5 == 0) goto LAB_148e2847d;
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar9 = iVar5 == iVar4;
            if (bVar9) {
              *(int *)(plVar3 + 1) = iVar5 + 1;
              iVar4 = iVar5;
            }
            iVar5 = iVar4;
            UNLOCK();
          } while (!bVar9);
          if (lVar6 != 0) {
            AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x168));
            *(int *)(lVar6 + 0x160) = *(int *)(lVar6 + 0x160) + 1;
            iVar5 = *(int *)(lVar6 + 0x148);
            if (*(char *)(lVar6 + 0x144) == param_2) {
              if (iVar5 == 0) {
                iVar5 = 0;
                goto LAB_148e2844c;
              }
            }
            else {
LAB_148e2844c:
              *(char *)(lVar6 + 0x144) = param_2;
              *(int *)(lVar6 + 0x148) = iVar5 + 1;
            }
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x168));
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
LAB_148e2847d:
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        plVar8 = plVar8 + 2;
      } while (plVar8 != plVar7);
    }
  }
  return;
}



// FUNCTION 148e284b8 FUN_148e284b8 body=567 status=ok
// SIG undefined FUN_148e284b8(void)

void FUN_148e284b8(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong *local_68 [2];
  longlong *local_58;
  longlong *plStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
    lVar4 = *param_2;
    lVar9 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x1e0);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x1e8) - 1U &
                             (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x1a0);
      do {
        if (*(longlong *)(lVar9 + (longlong)iVar8 * 0x20) == lVar4) goto LAB_148e28600;
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + lVar9 + 0x18);
      } while (iVar8 != -1);
    }
  }
  local_58 = param_2;
  plStack_50 = param_3;
  FUN_148e3403e((longlong *)(param_1 + 0x1a0),local_68,&local_58);
  FUN_1449027d0(param_1,&local_58);
  lVar4 = local_58[0x48];
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa0));
  plVar5 = plStack_50;
  *(int *)(lVar4 + 0x98) = *(int *)(lVar4 + 0x98) + 1;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  iVar8 = *(int *)(param_1 + 0x1a8);
  iVar3 = *(int *)(param_1 + 0x1d4);
  if ((bool)*(char *)(lVar4 + 0x28) == iVar3 < iVar8) {
    if (*(int *)(lVar4 + 0x2c) != 0) goto LAB_148e285f3;
    iVar7 = 1;
  }
  else {
    iVar7 = *(int *)(lVar4 + 0x2c) + 1;
  }
  *(bool *)(lVar4 + 0x28) = iVar3 < iVar8;
  *(int *)(lVar4 + 0x2c) = iVar7;
LAB_148e285f3:
  if (iVar3 < iVar8) {
    FUN_1449027d0(param_1,&local_58);
    lVar9 = local_58[0x4a];
    AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x20));
    plVar5 = plStack_50;
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_1446ddda2(&local_58,"entering_waypoint_text",0);
    FUN_1410d1eba(local_68,&local_58);
    uVar6 = FUN_1447a1f4a(local_68);
    FUN_148e28a10(lVar9,uVar6);
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x20));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa0));
LAB_148e28600:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e286f0 FUN_148e286f0 body=548 status=ok
// SIG undefined FUN_148e286f0(void)

void FUN_148e286f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  longlong *local_68 [2];
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
    lVar5 = *param_2;
    lVar8 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x1e0);
    }
    iVar9 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(param_1 + 0x1e8) - 1U &
                             (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar9 * 0x20) == lVar5) {
          FUN_148e34544();
          FUN_1449027d0(param_1,&local_58);
          lVar5 = *(longlong *)(local_58 + 0x240);
          AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0xa0));
          plVar3 = plStack_50;
          *(int *)(lVar5 + 0x98) = *(int *)(lVar5 + 0x98) + 1;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_50)(plStack_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          iVar9 = *(int *)(param_1 + 0x1a8);
          iVar4 = *(int *)(param_1 + 0x1d4);
          if ((bool)*(char *)(lVar5 + 0x28) == iVar4 < iVar9) {
            if (*(int *)(lVar5 + 0x2c) == 0) {
              iVar7 = 1;
              goto LAB_148e2882e;
            }
          }
          else {
            iVar7 = *(int *)(lVar5 + 0x2c) + 1;
LAB_148e2882e:
            *(bool *)(lVar5 + 0x28) = iVar4 < iVar9;
            *(int *)(lVar5 + 0x2c) = iVar7;
          }
          if (iVar4 < iVar9) {
            FUN_1449027d0(param_1,&local_58);
            lVar8 = *(longlong *)(local_58 + 0x250);
            AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x20));
            *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
            if (plStack_50 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_50 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plStack_50)(plStack_50);
                LOCK();
                piVar2 = (int *)((longlong)plStack_50 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plStack_50 + 0x10))(plStack_50);
                }
              }
            }
            local_58 = 0;
            plStack_50 = (longlong *)0x0;
            local_48 = 0;
            local_40 = 0;
            uStack_38 = 0;
            FUN_1446ddda2(&local_58,"entering_waypoint_text",0);
            FUN_1410d1eba(local_68,&local_58);
            uVar6 = FUN_1447a1f4a(local_68);
            FUN_148e28a10(lVar8,uVar6);
            if (local_68[0] != (longlong *)0x0) {
              (**(code **)(*local_68[0] + 0x10))();
            }
            if (local_40 != 0) {
              FUN_1400020a8();
            }
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x20));
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0xa0));
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x1a0) + 0x18);
      } while (iVar9 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e28916 FUN_148e28916 body=248 status=ok
// SIG undefined FUN_148e28916(void)

void FUN_148e28916(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  longlong *local_68 [2];
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1449027d0(param_1,&local_58);
  lVar3 = *(longlong *)(local_58 + 0x250);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x20));
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plStack_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
      }
    }
  }
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1446ddda2(&local_58,"location_reached_text",0);
  FUN_1410d1eba(local_68,&local_58);
  uVar4 = FUN_1447a1f4a(local_68);
  FUN_148e28a10(lVar3,uVar4);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x20));
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e28a10 FUN_148e28a10 body=142 status=ok
// SIG undefined FUN_148e28a10(void)

void FUN_148e28a10(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1447a1bd6(param_1,iVar2);
  }
  lVar4 = *param_1;
  lVar5 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar4 + lVar5);
  *(undefined8 *)(lVar4 + lVar5) = 0;
  iVar3 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(lVar4 + 8 + lVar5) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar3,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 2);
  }
  if (iVar2 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 148e28a9e FUN_148e28a9e body=109 status=ok
// SIG undefined FUN_148e28a9e(void)

void FUN_148e28a9e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1402735c8();
  lVar2 = FUN_1402d1dc0(lVar1 + 0x9c0);
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar2 == 0) {
    if (lVar1 == 0) goto LAB_148e28afd;
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
  }
  else {
    if (lVar1 == lVar2) goto LAB_148e28afd;
    if ((lVar1 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar2);
  }
  *(longlong *)(param_1 + 0x60) = lVar2;
LAB_148e28afd:
  FUN_148e28b0c(param_1);
  return;
}



// FUNCTION 148e28b0c FUN_148e28b0c body=399 status=ok
// SIG undefined FUN_148e28b0c(void)

void FUN_148e28b0c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60;
  undefined2 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_1400d7050(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar3 = FUN_1449f3324();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) && (*(longlong *)(param_1 + 0x60) != 0)) &&
       (lVar2 = *(longlong *)(lVar2 + 0xa70), lVar2 != 0)) {
      local_50 = &DAT_4030000000000000;
      local_48 = 0x4022000000000000;
      local_3c = 4;
      local_38 = 0;
      uStack_30 = 0;
      FUN_140691b73();
      FUN_140691bc1();
      local_60 = *(longlong *)(param_1 + 0x60);
      if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_60);
      }
      lVar3 = FUN_1402735c8();
      local_40 = *(undefined4 *)(lVar3 + 0x9e8);
      local_58 = 0x28e;
      plVar4 = (longlong *)FUN_1412bdaf0(param_1 + 0x30);
      if (plVar4 != (longlong *)0x0) {
        lVar3 = FUN_144a79464();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          cVar1 = (**(code **)(*plVar4 + 0x490))(plVar4);
          if (cVar1 != '\0') {
            local_58 = CONCAT11(local_58._1_1_,0x8a);
          }
        }
      }
      FUN_1446f470e(&local_38,L"CREDITS_MENU_PARTICLE",1);
      local_78[0] = 0;
      local_78[1] = 0;
      FUN_140e99050(lVar2 + 0x110,&local_60,local_78);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e28c9c FUN_148e28c9c body=185 status=ok
// SIG undefined FUN_148e28c9c(void)

undefined8 FUN_148e28c9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
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
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
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



// FUNCTION 148e28d56 FUN_148e28d56 body=436 status=ok
// SIG undefined FUN_148e28d56(void)

void FUN_148e28d56(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined2 local_80 [2];
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[0xf] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
  }
  if (param_1[0x10] != 0) {
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        puVar3 = (undefined8 *)(lVar2 + 0x458);
      }
      else {
        puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar3;
      local_90 = (undefined8 *)0x0;
      local_88 = 0;
      FUN_1446efa72(&local_90,0,3,0x10);
      puVar3 = local_90;
      local_88 = 3;
      *local_90 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_90[2] = lVar4;
      *local_90 = &PTR_FUN_14b9aad60;
      local_90[3] = 0;
      FUN_14485c47a(local_90 + 3,param_1);
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[4] = FUN_148e28d56;
      local_78 = 0;
      local_70 = 0;
      FUN_14487d8d8(&local_78,&local_90);
      local_38 = 1;
      local_98 = local_80;
      local_80[0] = 0;
      local_7c = 0xbf800000;
      FUN_1406f4044(uVar1,param_1 + 0x13,&local_78,0x3f800000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
      FUN_1449db362(&local_90);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e28f20 FUN_148e28f20 body=179 status=ok
// SIG undefined FUN_148e28f20(void)

void FUN_148e28f20(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar1 = FUN_1400d7050(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar2 = FUN_1449f3324();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (lVar1 = *(longlong *)(lVar1 + 0xa70), lVar1 != 0)) {
        FUN_1446f470e(&local_28,L"CREDITS_MENU_PARTICLE",1);
        FUN_14107e4c6(lVar1 + 0x110,*(undefined8 *)(param_1 + 0x60),local_28,0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e28fd4 FUN_148e28fd4 body=158 status=ok
// SIG undefined FUN_148e28fd4(void)

void FUN_148e28fd4(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x4e0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x40));
  *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + 1;
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
  FUN_148e34d8e(lVar3,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000148e29066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e29074 FUN_148e29074 body=162 status=ok
// SIG undefined FUN_148e29074(void)

void FUN_148e29074(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x4e0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x40));
  *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + 1;
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
  FUN_148e34d8e(lVar3 + 0x14,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000148e2910a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e29118 FUN_148e29118 body=162 status=ok
// SIG undefined FUN_148e29118(void)

void FUN_148e29118(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x4e0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x40));
  *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + 1;
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
  FUN_148e34d8e(lVar3 + 0x28,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000148e291ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e291bc FUN_148e291bc body=212 status=ok
// SIG undefined FUN_148e291bc(void)

void FUN_148e291bc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_14479d2ce(param_1 + 0x98);
    if (lVar2 != 0) {
      if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_14480f766(&DAT_14cb0ca98);
      }
      if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_14480f766(lVar2 + 0x410);
      }
    }
    lVar1 = FUN_1404960a8(lVar1);
    if (lVar1 != 0) {
      FUN_1446ddc76(&local_28,"FGbxUIEvent_AnalogCursor",1);
      FUN_1401cd85c(lVar1,local_28,param_1 + 0x88);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e29292 FUN_148e29292 body=73 status=ok
// SIG undefined FUN_148e29292(void)

void FUN_148e29292(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_2 + 4);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_144259b58(local_28,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e292e2 FUN_148e292e2 body=97 status=ok
// SIG undefined FUN_148e292e2(void)

longlong * FUN_148e292e2(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((DAT_14cb8d378 != 0) &&
     (plVar1 = (longlong *)FUN_144837462(DAT_14cb8d378,param_1), plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1465f4d3c();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 148e2934a FUN_148e2934a body=881 status=ok
// SIG undefined FUN_148e2934a(void)

void FUN_148e2934a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *_Src;
  int iVar7;
  undefined1 auStack_258 [32];
  void *local_238;
  int local_230;
  undefined4 local_22c;
  void *local_228;
  int local_220;
  undefined4 local_21c;
  undefined8 *local_218;
  undefined4 local_210;
  undefined1 local_204 [4];
  undefined1 local_200 [192];
  void *local_140;
  int local_138;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (param_2 == 0) goto LAB_148e293a9;
  lVar2 = FUN_1400d7050(param_1 + 0x30);
  if (lVar2 == 0) goto LAB_148e293a9;
  lVar3 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_148e293a9;
  lVar3 = FUN_1412bdaf0(param_1 + 0x30);
  if (lVar3 == 0) goto LAB_148e293a9;
  lVar4 = FUN_1403ca142();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_148e293a9;
  if (*(longlong *)(lVar3 + 0x1e0) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1e0) + 0x68);
  }
  lVar3 = FUN_141285870(lVar3);
  if (lVar3 == 0) goto LAB_148e293a9;
  lVar5 = FUN_14130c5c8();
  if (((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) || (lVar4 == 0)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_148e293a9;
  FUN_140d27df6(lVar4,local_204,lVar2);
  FUN_14596ffb6(lVar3,local_200,local_204);
  uVar6 = FUN_144a7ba4c(lVar2);
  lVar2 = FUN_145da44aa(uVar6);
  if (lVar2 != 0) {
    local_218 = (undefined8 *)0x0;
    local_210 = 0;
    FUN_1446efa72(&local_218,0,3,0x10);
    puVar1 = local_218;
    local_210 = 3;
    *local_218 = &PTR_LAB_14b9abc80;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_218[2] = lVar4;
    *local_218 = &PTR_FUN_14b9ab620;
    local_218[3] = 0;
    FUN_14485c47a(local_218 + 3,param_1);
    puVar1[4] = FUN_148e2a170;
    *(undefined4 *)(puVar1 + 5) = 0;
    iVar7 = *(int *)(param_1 + 0x88);
    if (iVar7 < 2) {
      if (local_48 == '\x01') {
        local_228 = (void *)0x0;
        local_220 = local_138;
        if ((longlong)local_138 == 0) {
          local_21c = 0;
        }
        else {
          FUN_1446dd670(&local_228,local_138,0);
          memcpy(local_228,local_140,(longlong)local_138 * 2);
        }
      }
      else {
        FUN_1400b22c2(&local_228,"Character Name");
      }
      if ((void **)(param_1 + 0x80) == &local_228) {
        if (local_228 != (void *)0x0) {
          FUN_1400020a8();
        }
        iVar7 = *(int *)(param_1 + 0x88);
        _Src = *(void **)(param_1 + 0x80);
      }
      else {
        if (*(longlong *)(param_1 + 0x80) != 0) {
          FUN_1400020a8();
        }
        _Src = local_228;
        *(void **)(param_1 + 0x80) = local_228;
        local_228 = (void *)0x0;
        *(int *)(param_1 + 0x88) = local_220;
        *(undefined4 *)(param_1 + 0x8c) = local_21c;
        iVar7 = local_220;
      }
      local_238 = (void *)0x0;
      if (iVar7 != 0) goto LAB_148e295a2;
      local_22c = 0;
      local_230 = iVar7;
    }
    else {
      _Src = *(void **)(param_1 + 0x80);
LAB_148e295a2:
      local_238 = (void *)0x0;
      local_230 = iVar7;
      FUN_1446dd670(&local_238,iVar7,0);
      memcpy(local_238,_Src,(longlong)iVar7 * 2);
    }
    FUN_1442694d2(lVar2,&local_238,&local_218);
    FUN_1449db362(&local_218);
  }
  if (local_48 == '\x01') {
    FUN_141072d6a(local_200);
  }
LAB_148e293a9:
  if ((local_40 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e296c8 FUN_148e296c8 body=267 status=ok
// SIG undefined FUN_148e296c8(void)

undefined8 * FUN_148e296c8(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined2 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [24];
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = &PTR_FUN_14b81be08;
  FUN_1400b22c2(param_1 + 1,&DAT_149e02088);
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_b8 = *param_2;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_ac = param_2[3];
  local_c0 = 0;
  local_a0 = 0x10;
  local_98 = 0x18;
  local_90 = 0x18;
  if ((DAT_14c9aa014 & 0x20) != 0) {
    local_90 = 0;
  }
  FUN_1487ba422(local_88,&local_c0);
  *(undefined1 *)(param_1 + 4) = local_88[0];
  FUN_145856b94(param_1 + 5,local_80);
  FUN_1403719a4(param_1 + 8,local_68);
  FUN_144a2da94(local_68);
  FUN_144a2da94(&local_c0);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e297d4 FUN_148e297d4 body=308 status=ok
// SIG undefined FUN_148e297d4(void)

longlong FUN_148e297d4(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0xf0);
  if (lVar5 == 0) {
    uVar4 = FUN_14660cf6c();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0xf0) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0xe8);
  lVar6 = *(longlong *)(param_1 + 0xf8);
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar4,plVar1);
      *(longlong *)(param_1 + 0xf8) = lVar6;
      if (lVar6 == 0) {
        return 0;
      }
      lVar5 = *(longlong *)(param_1 + 0xf0);
      goto LAB_148e29814;
    }
  }
  else {
LAB_148e29814:
    if (lVar5 != 0) {
      return lVar6;
    }
    uVar4 = FUN_14660cf6c();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0xf0) = lVar5;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      return *(longlong *)(param_1 + 0xf8);
    }
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,plVar1);
      goto LAB_148e298f1;
    }
  }
  lVar5 = 0;
LAB_148e298f1:
  *(longlong *)(param_1 + 0xf8) = lVar5;
  return lVar5;
}



// FUNCTION 148e29908 FUN_148e29908 body=375 status=ok
// SIG undefined FUN_148e29908(void)

longlong * FUN_148e29908(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x98);
  if (lVar5 == 0) {
    uVar4 = FUN_1406ef318();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x98) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x90);
  lVar6 = *(longlong *)(param_1 + 0xa0);
  if (lVar6 != 0) {
LAB_148e2994a:
    if (lVar5 == 0) {
      uVar4 = FUN_1406ef318();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x98) = lVar5;
      lVar6 = *(longlong *)(param_1 + 0xa0);
      if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
        }
        *(longlong *)(param_1 + 0xa0) = lVar6;
      }
    }
    plVar1 = *(longlong **)(lVar6 + 0x30);
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar6 + 0x38);
    return param_2;
  }
  if ((lVar5 != 0) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar4,plVar1);
      *(longlong *)(param_1 + 0xa0) = lVar6;
      if (lVar6 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x98);
        goto LAB_148e2994a;
      }
    }
  }
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 148e29a80 FUN_148e29a80 body=265 status=ok
// SIG undefined FUN_148e29a80(void)

undefined8 * FUN_148e29a80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b9a7dc0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = FUN_141340f56();
  uVar1 = FUN_14477b664(uVar1);
  param_1[2] = uVar1;
  lVar2 = FUN_141340f56();
  uVar1 = FUN_141340f56();
  FUN_1402d1bfa(&local_38,uVar1,param_2);
  if (param_1[1] != local_38) {
    param_1[3] = 0;
  }
  param_1[1] = local_38;
  lVar3 = FUN_141340f56();
  if (lVar2 != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_148e29b2e;
    }
    if ((*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_148e29b2e;
  }
  lVar3 = lVar2;
LAB_148e29b2e:
  if (param_1[2] != lVar3) {
    param_1[3] = 0;
  }
  uVar1 = FUN_14477b664(lVar3);
  lVar2 = FUN_14477b664(uVar1);
  param_1[2] = lVar2;
  if ((lVar2 != 0) && (param_1[1] != 0)) {
    param_1[3] = param_2;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e29b8a FUN_148e29b8a body=1509 status=ok
// SIG undefined FUN_148e29b8a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148e29b8a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e0 [4];
  longlong *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = param_1 + 0x30;
  local_118 = FUN_140495e96();
  if (local_118 != 0) {
    plVar12 = (longlong *)(param_1 + 0x90);
    lVar10 = param_1 + 0xa0;
    local_98 = (longlong *)&DAT_100000000;
    local_88 = 0xffffffff;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    uStack_90 = lVar10;
    if (*(int *)(param_1 + 0xb8) == 0) {
      iVar13 = 0;
    }
    else {
      FUN_1449c0562(&local_98);
      iVar13 = *(int *)(param_1 + 0xb8);
    }
    local_a8 = local_88;
    uVar3 = local_a8;
    uStack_a0 = uStack_80;
    local_b8 = (undefined4)local_98;
    uStack_b4 = local_98._4_4_;
    uStack_b0 = (int)uStack_90;
    uStack_ac = uStack_90._4_4_;
    local_a8._4_4_ = (int)(local_88 >> 0x20);
    local_c0 = plVar12;
    if ((local_a8._4_4_ != iVar13) || (uStack_90 != lVar10)) {
      iVar5 = local_a8._4_4_;
      local_a8 = uVar3;
      do {
        local_98 = *(longlong **)(*local_c0 + (longlong)iVar5 * 0x38);
        FUN_1447a97f4(&uStack_90);
        plVar1 = local_98;
        if (local_98 != (longlong *)0x0) {
          uVar6 = FUN_1400d7050(local_110);
          cVar4 = FUN_14094f966(plVar1,uVar6);
          plVar1 = local_98;
          if (cVar4 != '\0') {
            lVar10 = FUN_140cee904(local_118);
            if (lVar10 != 0) {
              if ((((int)uStack_90 == 0) || (uStack_90._4_4_ == 0)) ||
                 ((int)uStack_90 == DAT_14c948000)) {
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
                goto LAB_148e29f90;
              }
              local_e0[1] = 0;
              local_e0[2] = 0;
              FUN_1400b2348(&uStack_90,local_e0 + 1,1);
              FUN_148e2a2e0(lVar10,local_e0 + 1);
            }
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            uVar3 = local_a8;
            if (plVar1 != (longlong *)0x0) {
              FUN_148e36ef4(plVar12,plVar1);
              FUN_141340f90(param_1,param_1 + 0x168,1);
              goto LAB_148e29f90;
            }
            break;
          }
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~uStack_b4);
        FUN_1449c0562(&local_b8);
        iVar5 = local_a8._4_4_;
        uVar3 = local_a8;
      } while (local_c0 != plVar12 ||
               (CONCAT44(uStack_ac,uStack_b0) != lVar10 || local_a8._4_4_ != iVar13));
    }
    local_a8 = uVar3;
    local_e0[0] = 0;
    if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
      plVar12 = *(longlong **)(param_1 + 0xe0);
      local_108 = param_1 + 0xe0;
      local_100 = plVar12 + *(int *)(param_1 + 0xe8);
      do {
        lVar10 = *plVar12;
        uVar6 = FUN_1400d7050(local_110);
        lVar8 = *(longlong *)(lVar10 + 0x40);
        if (lVar8 == 0) {
          uVar7 = FUN_1406ef318();
          lVar8 = FUN_14477b664(uVar7);
          *(longlong *)(lVar10 + 0x40) = lVar8;
        }
        plVar1 = (longlong *)(lVar10 + 0x38);
        lVar9 = *(longlong *)(lVar10 + 0x48);
        if (lVar9 == 0) {
          if (lVar8 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = 0;
            if (*plVar1 != 0) {
              plVar2 = *(longlong **)(lVar8 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x108))(), cVar4 == '\0')) {
                lVar9 = 0;
              }
              else {
                uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar9 = FUN_144aff482(uVar7,plVar1);
              }
              *(longlong *)(lVar10 + 0x48) = lVar9;
            }
          }
        }
        cVar4 = FUN_1409500c0(lVar9,uVar6);
        if (cVar4 != '\0') {
          local_98 = (longlong *)0x0;
          uStack_90 = 0;
          local_88 = local_88 & 0xffffffff00000000;
          uStack_80 = 0;
          local_78 = 0;
          FUN_1446ddda2(&local_98,"weaponcustomization",0);
          iVar13 = 1;
          while( true ) {
            lVar8 = *(longlong *)(lVar10 + 0x40);
            if (lVar8 == 0) {
              uVar6 = FUN_1406ef318();
              lVar8 = FUN_14477b664(uVar6);
              *(longlong *)(lVar10 + 0x40) = lVar8;
            }
            lVar9 = *(longlong *)(lVar10 + 0x48);
            if (lVar9 == 0) {
              if (lVar8 == 0) {
                lVar9 = 0;
              }
              else {
                lVar9 = 0;
                if (*plVar1 != 0) {
                  plVar2 = *(longlong **)(lVar8 + 0xb8);
                  if ((plVar2 == (longlong *)0x0) ||
                     (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                    lVar9 = 0;
                  }
                  else {
                    uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                    lVar9 = FUN_144aff482(uVar6,plVar1);
                  }
                  *(longlong *)(lVar10 + 0x48) = lVar9;
                }
              }
            }
            puVar11 = &DAT_14c9485f0;
            if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
              puVar11 = *(undefined4 **)(lVar9 + 8);
            }
            if ((int)puVar11[1] < iVar13) break;
            lVar8 = *(longlong *)(lVar10 + 0x40);
            if (lVar8 == 0) {
              uVar6 = FUN_1406ef318();
              lVar8 = FUN_14477b664(uVar6);
              *(longlong *)(lVar10 + 0x40) = lVar8;
              lVar9 = *(longlong *)(lVar10 + 0x48);
            }
            if (lVar9 == 0) {
              if (lVar8 == 0) {
                lVar9 = 0;
              }
              else {
                lVar9 = 0;
                if (*plVar1 != 0) {
                  plVar2 = *(longlong **)(lVar8 + 0xb8);
                  if ((plVar2 == (longlong *)0x0) ||
                     (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                    lVar9 = 0;
                  }
                  else {
                    uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                    lVar9 = FUN_144aff482(uVar6,plVar1);
                  }
                  *(longlong *)(lVar10 + 0x48) = lVar9;
                }
              }
            }
            puVar11 = &DAT_14c9485f0;
            if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
              puVar11 = *(undefined4 **)(lVar9 + 8);
            }
            FUN_144a7c8fe(puVar11,&local_c0,iVar13 + -1,1);
            FUN_144928d62(&local_98,iVar13);
            iVar13 = iVar13 + 1;
          }
          lVar8 = FUN_140cee904(local_118);
          if (lVar8 != 0) {
            local_f8 = 0;
            uStack_f0 = 0;
            FUN_1400b2348(&local_98,&local_f8);
            FUN_148e2a2e0(lVar8,&local_f8);
          }
          local_e0[0] = lVar10;
          if (uStack_80 != 0) {
            FUN_1400020a8();
          }
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != local_100);
      if (local_e0[0] != 0) {
        local_98 = local_e0;
        FUN_1488d2006(local_108);
      }
    }
  }
LAB_148e29f90:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e2a170 FUN_148e2a170 body=367 status=ok
// SIG undefined FUN_148e2a170(void)

void FUN_148e2a170(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == '\0') goto LAB_148e2a1d7;
  FUN_144a787a6(param_1 + 0x80);
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 == 0) goto LAB_148e2a1d7;
  lVar2 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) goto LAB_148e2a1d7;
  lVar2 = FUN_1412bdaf0(param_1 + 0x30);
  if (lVar2 == 0) goto LAB_148e2a1d7;
  lVar3 = FUN_1403ca142();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_148e2a1d7;
  if (*(longlong *)(lVar2 + 0x1e0) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x1e0) + 0x68);
  }
  lVar2 = FUN_141285870(lVar2);
  if (lVar2 == 0) {
LAB_148e2a270:
    lVar2 = 0;
  }
  else {
    lVar4 = FUN_14130c5c8();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_148e2a270;
  }
  lVar4 = FUN_1402a1246(lVar1);
  if (lVar4 != 0 && (lVar2 != 0 && lVar3 != 0)) {
    FUN_140d27df6(lVar3,local_3c,lVar1);
    FUN_148dc0cd2(lVar4,param_2);
    local_58 = 0;
    uStack_50 = 0;
    FUN_140ceec8e(lVar2,local_60,local_3c);
  }
LAB_148e2a1d7:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e2a2e0 FUN_148e2a2e0 body=164 status=ok
// SIG undefined FUN_148e2a2e0(void)

void FUN_148e2a2e0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_140defa54();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x28));
  *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
  local_38 = *param_2;
  *param_2 = 0;
  local_30 = (undefined4)param_2[1];
  local_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_145c31752(lVar1);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x28));
  FUN_140ceeb80(param_1);
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e2a396 FUN_148e2a396 body=31 status=ok
// SIG undefined FUN_148e2a396(void)

undefined8 FUN_148e2a396(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e2a3d0 FUN_148e2a3d0 body=26 status=ok
// SIG undefined FUN_148e2a3d0(void)

bool FUN_148e2a3d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e2a3ea FUN_148e2a3ea body=101 status=ok
// SIG undefined FUN_148e2a3ea(void)

void FUN_148e2a3ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a7b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e2a450 FUN_148e2a450 body=101 status=ok
// SIG undefined FUN_148e2a450(void)

void FUN_148e2a450(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a7b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e2a4b6 FUN_148e2a4b6 body=134 status=ok
// SIG undefined FUN_148e2a4b6(void)

void FUN_148e2a4b6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5afcc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a7b50;
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
                    /* WARNING: Could not recover jumptable at 0x000148e2a52d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e2a53c FUN_148e2a53c body=44 status=ok
// SIG undefined FUN_148e2a53c(void)

void FUN_148e2a53c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e2a565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e2a568 FUN_148e2a568 body=156 status=ok
// SIG undefined FUN_148e2a568(void)

bool FUN_148e2a568(longlong param_1,undefined8 param_2)

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



// FUNCTION 148e2a606 FUN_148e2a606 body=31 status=ok
// SIG undefined FUN_148e2a606(void)

undefined8 FUN_148e2a606(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e2a640 FUN_148e2a640 body=26 status=ok
// SIG undefined FUN_148e2a640(void)

bool FUN_148e2a640(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e2a65a FUN_148e2a65a body=101 status=ok
// SIG undefined FUN_148e2a65a(void)

void FUN_148e2a65a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a7bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e2a6c0 FUN_148e2a6c0 body=101 status=ok
// SIG undefined FUN_148e2a6c0(void)

void FUN_148e2a6c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a7bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e2a726 FUN_148e2a726 body=134 status=ok
// SIG undefined FUN_148e2a726(void)

void FUN_148e2a726(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a7bc0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e2a79d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e2a7ac FUN_148e2a7ac body=44 status=ok
// SIG undefined FUN_148e2a7ac(void)

void FUN_148e2a7ac(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e2a7d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e2a7d8 FUN_148e2a7d8 body=156 status=ok
// SIG undefined FUN_148e2a7d8(void)

bool FUN_148e2a7d8(longlong param_1,undefined8 param_2)

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



// FUNCTION 148e2a876 FUN_148e2a876 body=70 status=ok
// SIG undefined FUN_148e2a876(void)

undefined8 FUN_148e2a876(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  if (uVar1 == *(uint *)(param_2 + 1)) {
    if (1 < (int)uVar1) {
      iVar2 = wcscmp((wchar_t *)*param_1,(wchar_t *)*param_2);
      uVar3 = CONCAT44(extraout_var,iVar2);
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  else if (*(uint *)(param_2 + 1) + uVar1 != 1) {
    return 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),*(char *)(param_1 + 2) == *(char *)(param_2 + 2));
}



// FUNCTION 148e2a8bc FUN_148e2a8bc body=29 status=ok
// SIG undefined FUN_148e2a8bc(void)

undefined8 FUN_148e2a8bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e2a8da FUN_148e2a8da body=38 status=ok
// SIG undefined FUN_148e2a8da(void)

undefined8 FUN_148e2a8da(undefined8 param_1,int param_2)

{
  FUN_148e2a900();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e2a900 FUN_148e2a900 body=85 status=ok
// SIG undefined FUN_148e2a900(void)

void FUN_148e2a900(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9a7d90;
  FUN_148e2a955(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148e2a955 FUN_148e2a955 body=57 status=ok
// SIG undefined FUN_148e2a955(void)

void FUN_148e2a955(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 148e2a98e FUN_148e2a98e body=29 status=ok
// SIG undefined FUN_148e2a98e(void)

undefined8 FUN_148e2a98e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


