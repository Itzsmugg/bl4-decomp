// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148d6755c FUN_148d6755c body=134 status=ok
// SIG undefined FUN_148d6755c(void)

void FUN_148d6755c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b977c90;
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
                    /* WARNING: Could not recover jumptable at 0x000148d675d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d675e2 FUN_148d675e2 body=42 status=ok
// SIG undefined FUN_148d675e2(void)

void FUN_148d675e2(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d67609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148d6760c FUN_148d6760c body=356 status=ok
// SIG undefined FUN_148d6760c(void)

undefined8 *
FUN_148d6760c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 *param_11,undefined4 *param_12,
             undefined1 *param_13,undefined4 *param_14,undefined1 *param_15)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 *local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  char local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b977ec0;
  local_68 = *param_15;
  local_70 = *param_14;
  local_80 = *param_12;
  local_78 = *param_13;
  local_44 = *(char *)(param_11 + 1);
  if (local_44 == '\x01') {
    local_48 = *param_11;
  }
  local_a8 = *param_7;
  local_b0 = *param_6;
  local_b8 = *param_5;
  local_60 = *param_3;
  local_50 = 0;
  local_58 = 0x4000;
  local_88 = &local_48;
  local_90 = param_10;
  local_98 = param_9;
  local_a0 = param_8;
  FUN_148d67772(param_1 + 2,local_80,&local_60,*param_4);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d67772 FUN_148d67772 body=387 status=ok
// SIG undefined FUN_148d67772(void)

undefined8 *
FUN_148d67772(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
             undefined4 *param_9,undefined8 param_10,undefined4 *param_11,undefined4 param_12,
             undefined1 param_13,undefined4 param_14,undefined1 param_15)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_14b977ee0;
  param_1[1] = *param_2;
  lVar2 = param_2[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = *param_3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 1);
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_14485c47a(param_1 + 6,param_4);
  param_1[7] = 0;
  FUN_14485c47a(param_1 + 7,param_5);
  param_1[8] = 0;
  FUN_14485c47a(param_1 + 8,param_6);
  param_1[9] = 0;
  FUN_14485c47a(param_1 + 9,param_7);
  param_1[0xc] = param_8[2];
  uVar6 = param_8[1];
  param_1[10] = *param_8;
  param_1[0xb] = uVar6;
  uVar3 = param_9[1];
  uVar4 = param_9[2];
  uVar5 = param_9[3];
  *(undefined4 *)(param_1 + 0xd) = *param_9;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0xe) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar5;
  param_1[0xf] = *(undefined8 *)(param_9 + 4);
  FUN_1418a644c(param_1 + 0x11,param_10);
  cVar1 = *(char *)(param_11 + 1);
  *(char *)((longlong)param_1 + 0x15c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x2b) = *param_11;
  }
  *(undefined4 *)(param_1 + 0x2c) = param_12;
  *(undefined1 *)((longlong)param_1 + 0x164) = param_13;
  *(undefined1 *)((longlong)param_1 + 0x165) = param_15;
  *(undefined4 *)(param_1 + 0x2d) = param_14;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  if (*(char *)(param_11 + 1) == '\x01') {
    *(undefined1 *)(param_11 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 148d678f6 FUN_148d678f6 body=9 status=ok
// SIG undefined FUN_148d678f6(void)

void FUN_148d678f6(longlong param_1)

{
  FUN_148d6798e(param_1 + 0x10);
  return;
}



// FUNCTION 148d67900 FUN_148d67900 body=29 status=ok
// SIG undefined FUN_148d67900(void)

undefined8 FUN_148d67900(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d6791e FUN_148d6791e body=65 status=ok
// SIG undefined FUN_148d6791e(void)

void FUN_148d6791e(longlong param_1,longlong param_2)

{
  if ((0.0 <= *(float *)(param_1 + 0x160)) &&
     (*(double *)(param_2 + 0x6d0) < (double)*(float *)(param_1 + 0x160))) {
    return;
  }
  FUN_148d58034(param_1);
  *(undefined1 *)(param_1 + 0x16c) = 1;
  return;
}



// FUNCTION 148d67968 FUN_148d67968 body=38 status=ok
// SIG undefined FUN_148d67968(void)

undefined8 FUN_148d67968(undefined8 param_1,int param_2)

{
  FUN_148d6798e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d6798e FUN_148d6798e body=97 status=ok
// SIG undefined FUN_148d6798e(void)

void FUN_148d6798e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b977ee0;
  if (*(char *)((longlong)param_1 + 0x15c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  }
  FUN_1414dc478(param_1 + 0x11);
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
                    /* WARNING: Could not recover jumptable at 0x000148d679e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d679f0 FUN_148d679f0 body=29 status=ok
// SIG undefined FUN_148d679f0(void)

undefined8 FUN_148d679f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d67a28 FUN_148d67a28 body=29 status=ok
// SIG undefined FUN_148d67a28(void)

bool FUN_148d67a28(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d67a46 FUN_148d67a46 body=26 status=ok
// SIG undefined FUN_148d67a46(void)

bool FUN_148d67a46(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d67a60 FUN_148d67a60 body=24 status=ok
// SIG undefined FUN_148d67a60(void)

bool FUN_148d67a60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d67a84 FUN_148d67a84 body=101 status=ok
// SIG undefined FUN_148d67a84(void)

void FUN_148d67a84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b978070;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b978000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d67aea FUN_148d67aea body=101 status=ok
// SIG undefined FUN_148d67aea(void)

void FUN_148d67aea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b978070;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b978000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d67b50 FUN_148d67b50 body=134 status=ok
// SIG undefined FUN_148d67b50(void)

void FUN_148d67b50(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b978070;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b978000;
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
                    /* WARNING: Could not recover jumptable at 0x000148d67bc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d67bd6 FUN_148d67bd6 body=46 status=ok
// SIG undefined FUN_148d67bd6(void)

void FUN_148d67bd6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d67c01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined4 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 0xc));
  return;
}



// FUNCTION 148d67c04 FUN_148d67c04 body=156 status=ok
// SIG undefined FUN_148d67c04(void)

bool FUN_148d67c04(longlong param_1)

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
    (**(code **)(param_1 + 0x20))
              (*(int *)(param_1 + 0x28) + lVar2,*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc));
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



// FUNCTION 148d67ca4 FUN_148d67ca4 body=29 status=ok
// SIG undefined FUN_148d67ca4(void)

undefined8 FUN_148d67ca4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d67cdc FUN_148d67cdc body=29 status=ok
// SIG undefined FUN_148d67cdc(void)

bool FUN_148d67cdc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d67cfa FUN_148d67cfa body=26 status=ok
// SIG undefined FUN_148d67cfa(void)

bool FUN_148d67cfa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d67d14 FUN_148d67d14 body=24 status=ok
// SIG undefined FUN_148d67d14(void)

bool FUN_148d67d14(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d67d2c FUN_148d67d2c body=101 status=ok
// SIG undefined FUN_148d67d2c(void)

void FUN_148d67d2c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9780e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d67d92 FUN_148d67d92 body=101 status=ok
// SIG undefined FUN_148d67d92(void)

void FUN_148d67d92(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9780e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d67df8 FUN_148d67df8 body=134 status=ok
// SIG undefined FUN_148d67df8(void)

void FUN_148d67df8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9780e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d67e6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d67e7e FUN_148d67e7e body=39 status=ok
// SIG undefined FUN_148d67e7e(void)

void FUN_148d67e7e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d67ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148d67ea6 FUN_148d67ea6 body=146 status=ok
// SIG undefined FUN_148d67ea6(void)

bool FUN_148d67ea6(longlong param_1)

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



// FUNCTION 148d67f3a FUN_148d67f3a body=29 status=ok
// SIG undefined FUN_148d67f3a(void)

undefined8 FUN_148d67f3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d67f72 FUN_148d67f72 body=29 status=ok
// SIG undefined FUN_148d67f72(void)

bool FUN_148d67f72(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d67f90 FUN_148d67f90 body=26 status=ok
// SIG undefined FUN_148d67f90(void)

bool FUN_148d67f90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d67faa FUN_148d67faa body=24 status=ok
// SIG undefined FUN_148d67faa(void)

bool FUN_148d67faa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d67fc2 FUN_148d67fc2 body=101 status=ok
// SIG undefined FUN_148d67fc2(void)

void FUN_148d67fc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d68028 FUN_148d68028 body=101 status=ok
// SIG undefined FUN_148d68028(void)

void FUN_148d68028(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d6808e FUN_148d6808e body=134 status=ok
// SIG undefined FUN_148d6808e(void)

void FUN_148d6808e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b978150;
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
                    /* WARNING: Could not recover jumptable at 0x000148d68105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d68114 FUN_148d68114 body=44 status=ok
// SIG undefined FUN_148d68114(void)

void FUN_148d68114(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d6813d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148d68140 FUN_148d68140 body=156 status=ok
// SIG undefined FUN_148d68140(void)

bool FUN_148d68140(longlong param_1,undefined8 param_2)

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



// FUNCTION 148d681de FUN_148d681de body=124 status=ok
// SIG undefined FUN_148d681de(void)

void FUN_148d681de(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148d6825c FUN_148d6825c body=83 status=ok
// SIG undefined FUN_148d6825c(void)

longlong * FUN_148d6825c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1466169a2();
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



// FUNCTION 148d682b0 FUN_148d682b0 body=296 status=ok
// SIG undefined FUN_148d682b0(void)

undefined4 FUN_148d682b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  short local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140154c96(&local_48);
  lVar3 = *param_1;
  uVar6 = 1;
  if (((lVar3 != 0) && ((((short)param_1[1] < 0 || (param_1[2] != 0)) && (local_48 != 0)))) &&
     ((local_40 < 0 || (local_38 != 0)))) {
    plVar4 = *(longlong **)(lVar3 + 0x18);
    plVar5 = *(longlong **)(lVar3 + 0x20);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
    }
    if (plVar4 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,param_1,&local_48,param_3);
    }
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
    if (plVar4 == (longlong *)0x0) {
      uVar6 = FUN_1449029b8(*param_1,local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 148d683da FUN_148d683da body=185 status=ok
// SIG undefined FUN_148d683da(void)

int FUN_148d683da(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_140b865d4(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148d68403;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148d68403:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 148d68494 FUN_148d68494 body=319 status=ok
// SIG undefined FUN_148d68494(void)

undefined4 * FUN_148d68494(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148d685d4(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = 0;
  FUN_14485c47a(local_40,uVar1);
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_140368c45(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)*local_40 >> 0x20) ^ (uint)*local_40;
  cVar3 = FUN_148d686ba(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_148d687ea(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d685d4 FUN_148d685d4 body=229 status=ok
// SIG undefined FUN_148d685d4(void)

int * FUN_148d685d4(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 148d686ba FUN_148d686ba body=189 status=ok
// SIG undefined FUN_148d686ba(void)

undefined8 FUN_148d686ba(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    iVar7 = FUN_148d683da();
    if (iVar7 != -1) {
      lVar2 = *param_1;
      lVar9 = (longlong)iVar7 * 0x20;
      puVar1 = (undefined4 *)(lVar2 + lVar9);
      FUN_140368c45(*(undefined8 *)(lVar2 + 8 + lVar9),*(undefined4 *)(lVar2 + 0x10 + lVar9));
      if (*(longlong *)(lVar2 + 8 + lVar9) != 0) {
        FUN_1400020a8();
      }
      uVar3 = *(undefined4 *)param_3;
      uVar4 = *(undefined4 *)((longlong)param_3 + 4);
      uVar5 = *(undefined4 *)(param_3 + 1);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_3[2];
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_148d68778(param_1,*param_4);
      *param_4 = iVar7;
      uVar8 = 1;
      goto LAB_148d686e4;
    }
  }
  uVar8 = 0;
LAB_148d686e4:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d68778 FUN_148d68778 body=114 status=ok
// SIG undefined FUN_148d68778(void)

void FUN_148d68778(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 148d687ea FUN_148d687ea body=439 status=ok
// SIG undefined FUN_148d687ea(void)

void FUN_148d687ea(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 148d689a2 FUN_148d689a2 body=185 status=ok
// SIG undefined FUN_148d689a2(void)

int FUN_148d689a2(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x38);
        cVar1 = FUN_140b865d4(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148d689cb;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x30 + (longlong)iVar4 * 0x38);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148d689cb:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 148d68a5c FUN_148d68a5c body=262 status=ok
// SIG undefined FUN_148d68a5c(void)

void FUN_148d68a5c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar3 + uVar6 * 4);
    if (lVar4 != -1) {
      lVar7 = *param_1;
      lVar4 = lVar4 * 0x20;
      local_40 = *(undefined8 *)(lVar7 + lVar4);
      local_48 = param_2;
      cVar2 = FUN_140b865d4();
      if (cVar2 == '\0') {
        lVar4 = lVar7 + lVar4;
        do {
          lVar7 = lVar4;
          lVar4 = (longlong)*(int *)(lVar7 + 0x18);
          if (lVar4 == -1) goto LAB_148d68a80;
          lVar1 = *param_1;
          lVar4 = lVar4 * 0x20;
          local_40 = *(undefined8 *)(lVar1 + lVar4);
          local_48 = param_2;
          cVar2 = FUN_140b865d4(&local_40,&local_48);
          lVar4 = lVar1 + lVar4;
        } while (cVar2 == '\0');
        puVar5 = (undefined4 *)(lVar7 + 0x18);
      }
      else {
        puVar5 = (undefined4 *)((longlong)plVar3 + uVar6 * 4);
      }
      FUN_148d68b64(param_1,*puVar5);
    }
  }
LAB_148d68a80:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d68b64 FUN_148d68b64 body=90 status=ok
// SIG undefined FUN_148d68b64(void)

void FUN_148d68b64(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_148d68bbe();
  return;
}



// FUNCTION 148d68bbe FUN_148d68bbe body=73 status=ok
// SIG undefined FUN_148d68bbe(void)

void FUN_148d68bbe(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  FUN_140368c45(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
  if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_148d68778(param_1,param_2);
  return;
}



// FUNCTION 148d68c08 FUN_148d68c08 body=67 status=ok
// SIG undefined FUN_148d68c08(void)

void FUN_148d68c08(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1457a95d8(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_148d68d90(param_1);
    return;
  }
  FUN_148d68c4c(param_1);
  FUN_1457a95d8(param_1,0);
  return;
}



// FUNCTION 148d68c4c FUN_148d68c4c body=322 status=ok
// SIG undefined FUN_148d68c4c(void)

void FUN_148d68c4c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 148d68d90 FUN_148d68d90 body=436 status=ok
// SIG undefined FUN_148d68d90(void)

void FUN_148d68d90(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 148d68f46 FUN_148d68f46 body=67 status=ok
// SIG undefined FUN_148d68f46(void)

void FUN_148d68f46(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1457a9756(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_148d687ea(param_1);
    return;
  }
  FUN_148d68f8a(param_1);
  FUN_1457a9756(param_1,0);
  return;
}



// FUNCTION 148d68f8a FUN_148d68f8a body=322 status=ok
// SIG undefined FUN_148d68f8a(void)

void FUN_148d68f8a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 148d690ce FUN_148d690ce body=48 status=ok
// SIG undefined FUN_148d690ce(void)

void FUN_148d690ce(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,1,1);
  }
  return;
}



// FUNCTION 148d690fe FUN_148d690fe body=297 status=ok
// SIG undefined FUN_148d690fe(void)

undefined4 * FUN_148d690fe(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148d69228(param_1,local_48);
  FUN_148d693ba(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = (uint)((ulonglong)*local_40 >> 0x20) ^ (uint)*local_40;
  cVar2 = FUN_148d6930a(param_1,uVar7,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x34) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_148d68d90(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d69228 FUN_148d69228 body=226 status=ok
// SIG undefined FUN_148d69228(void)

int * FUN_148d69228(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 148d6930a FUN_148d6930a body=174 status=ok
// SIG undefined FUN_148d6930a(void)

undefined8 FUN_148d6930a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar13 = FUN_148d689a2();
    if (iVar13 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x38);
      FUN_148be5e2c(puVar1 + 2);
      uVar2 = *(undefined4 *)param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar6 = *(undefined4 *)(param_3 + 2);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar8 = *(undefined4 *)(param_3 + 3);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x1c);
      uVar10 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar11 = *(undefined4 *)(param_3 + 5);
      uVar12 = *(undefined4 *)((longlong)param_3 + 0x2c);
      puVar1[8] = *(undefined4 *)(param_3 + 4);
      puVar1[9] = uVar10;
      puVar1[10] = uVar11;
      puVar1[0xb] = uVar12;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_148d69424(param_1,*param_4);
      *param_4 = iVar13;
      uVar14 = 1;
      goto LAB_148d69330;
    }
  }
  uVar14 = 0;
LAB_148d69330:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d693ba FUN_148d693ba body=105 status=ok
// SIG undefined FUN_148d693ba(void)

undefined8 * FUN_148d693ba(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = 0;
  FUN_14485c47a(param_1,uVar1);
  param_1[1] = 0;
  param_1[1] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  param_1[3] = 0;
  param_1[3] = param_3[2];
  param_3[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 3);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x1c);
  param_3[3] = 0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_3 + 4);
  return param_1;
}



// FUNCTION 148d69424 FUN_148d69424 body=116 status=ok
// SIG undefined FUN_148d69424(void)

void FUN_148d69424(longlong *param_1,int param_2)

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



// FUNCTION 148d695a0 FUN_148d695a0 body=120 status=ok
// SIG undefined FUN_148d695a0(void)

void FUN_148d695a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x38;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x34 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x30 + lVar6 * 0x38);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x38 + 0x30);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x30);
  FUN_148be5e2c(*param_1 + lVar2 + 8);
  FUN_148d69424(param_1,param_2);
  return;
}



// FUNCTION 148d69618 FUN_148d69618 body=29 status=ok
// SIG undefined FUN_148d69618(void)

undefined8 FUN_148d69618(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d69650 FUN_148d69650 body=29 status=ok
// SIG undefined FUN_148d69650(void)

bool FUN_148d69650(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d6966e FUN_148d6966e body=26 status=ok
// SIG undefined FUN_148d6966e(void)

bool FUN_148d6966e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d69688 FUN_148d69688 body=24 status=ok
// SIG undefined FUN_148d69688(void)

bool FUN_148d69688(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d696a0 FUN_148d696a0 body=101 status=ok
// SIG undefined FUN_148d696a0(void)

void FUN_148d696a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d69706 FUN_148d69706 body=101 status=ok
// SIG undefined FUN_148d69706(void)

void FUN_148d69706(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d6976c FUN_148d6976c body=134 status=ok
// SIG undefined FUN_148d6976c(void)

void FUN_148d6976c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b978450;
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
                    /* WARNING: Could not recover jumptable at 0x000148d697e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d697f2 FUN_148d697f2 body=44 status=ok
// SIG undefined FUN_148d697f2(void)

void FUN_148d697f2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d6981b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148d6981e FUN_148d6981e body=156 status=ok
// SIG undefined FUN_148d6981e(void)

bool FUN_148d6981e(longlong param_1,undefined8 param_2)

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



// FUNCTION 148d698bc FUN_148d698bc body=130 status=ok
// SIG undefined FUN_148d698bc(void)

void FUN_148d698bc(longlong *param_1,longlong *param_2)

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



// FUNCTION 148d69940 FUN_148d69940 body=147 status=ok
// SIG undefined FUN_148d69940(void)

void FUN_148d69940(longlong param_1,int param_2)

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



// FUNCTION 148d699d4 FUN_148d699d4 body=132 status=ok
// SIG undefined FUN_148d699d4(void)

void FUN_148d699d4(longlong param_1,int param_2)

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



// FUNCTION 148d69a5a FUN_148d69a5a body=132 status=ok
// SIG undefined FUN_148d69a5a(void)

void FUN_148d69a5a(longlong param_1,int param_2)

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



// FUNCTION 148d69ae0 FUN_148d69ae0 body=31 status=ok
// SIG undefined FUN_148d69ae0(void)

undefined8 FUN_148d69ae0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d69b1a FUN_148d69b1a body=29 status=ok
// SIG undefined FUN_148d69b1a(void)

bool FUN_148d69b1a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d69b38 FUN_148d69b38 body=26 status=ok
// SIG undefined FUN_148d69b38(void)

bool FUN_148d69b38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d69b52 FUN_148d69b52 body=101 status=ok
// SIG undefined FUN_148d69b52(void)

void FUN_148d69b52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9785d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d69bb8 FUN_148d69bb8 body=101 status=ok
// SIG undefined FUN_148d69bb8(void)

void FUN_148d69bb8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9785d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d69c1e FUN_148d69c1e body=134 status=ok
// SIG undefined FUN_148d69c1e(void)

void FUN_148d69c1e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9785d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d69c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d69ca4 FUN_148d69ca4 body=42 status=ok
// SIG undefined FUN_148d69ca4(void)

void FUN_148d69ca4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d69ccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148d69cce FUN_148d69cce body=62 status=ok
// SIG undefined FUN_148d69cce(void)

void FUN_148d69cce(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148d69d0c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148d69d0c FUN_148d69d0c body=93 status=ok
// SIG undefined FUN_148d69d0c(void)

ulonglong FUN_148d69d0c(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148d69d6a FUN_148d69d6a body=31 status=ok
// SIG undefined FUN_148d69d6a(void)

undefined8 FUN_148d69d6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d69da4 FUN_148d69da4 body=29 status=ok
// SIG undefined FUN_148d69da4(void)

bool FUN_148d69da4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d69dc2 FUN_148d69dc2 body=101 status=ok
// SIG undefined FUN_148d69dc2(void)

void FUN_148d69dc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978640;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d69e28 FUN_148d69e28 body=101 status=ok
// SIG undefined FUN_148d69e28(void)

void FUN_148d69e28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978640;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d69e8e FUN_148d69e8e body=134 status=ok
// SIG undefined FUN_148d69e8e(void)

void FUN_148d69e8e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b978640;
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
                    /* WARNING: Could not recover jumptable at 0x000148d69f05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d69f14 FUN_148d69f14 body=44 status=ok
// SIG undefined FUN_148d69f14(void)

void FUN_148d69f14(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d69f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148d69f40 FUN_148d69f40 body=31 status=ok
// SIG undefined FUN_148d69f40(void)

undefined8 FUN_148d69f40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d69f7a FUN_148d69f7a body=101 status=ok
// SIG undefined FUN_148d69f7a(void)

void FUN_148d69f7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9788e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d69fe0 FUN_148d69fe0 body=101 status=ok
// SIG undefined FUN_148d69fe0(void)

void FUN_148d69fe0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9788e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d6a046 FUN_148d6a046 body=134 status=ok
// SIG undefined FUN_148d6a046(void)

void FUN_148d6a046(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9788e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d6a0bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d6a0cc FUN_148d6a0cc body=44 status=ok
// SIG undefined FUN_148d6a0cc(void)

void FUN_148d6a0cc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d6a0f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148d6a0f8 FUN_148d6a0f8 body=29 status=ok
// SIG undefined FUN_148d6a0f8(void)

undefined8 FUN_148d6a0f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d6a130 FUN_148d6a130 body=29 status=ok
// SIG undefined FUN_148d6a130(void)

bool FUN_148d6a130(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d6a14e FUN_148d6a14e body=26 status=ok
// SIG undefined FUN_148d6a14e(void)

bool FUN_148d6a14e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d6a168 FUN_148d6a168 body=24 status=ok
// SIG undefined FUN_148d6a168(void)

bool FUN_148d6a168(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d6a180 FUN_148d6a180 body=101 status=ok
// SIG undefined FUN_148d6a180(void)

void FUN_148d6a180(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9789c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d6a1e6 FUN_148d6a1e6 body=101 status=ok
// SIG undefined FUN_148d6a1e6(void)

void FUN_148d6a1e6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9789c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d6a24c FUN_148d6a24c body=134 status=ok
// SIG undefined FUN_148d6a24c(void)

void FUN_148d6a24c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9789c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d6a2c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d6a2d2 FUN_148d6a2d2 body=39 status=ok
// SIG undefined FUN_148d6a2d2(void)

void FUN_148d6a2d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d6a2f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148d6a2fa FUN_148d6a2fa body=146 status=ok
// SIG undefined FUN_148d6a2fa(void)

bool FUN_148d6a2fa(longlong param_1)

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



// FUNCTION 148d6a38e FUN_148d6a38e body=138 status=ok
// SIG undefined FUN_148d6a38e(void)

void FUN_148d6a38e(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*param_1 == '\x03') {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x03';
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x20] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 148d6a418 FUN_148d6a418 body=55 status=ok
// SIG undefined FUN_148d6a418(void)

void FUN_148d6a418(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b420330;
  puVar1 = *(undefined8 **)(param_1 + 0x358);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1488e5482(param_1 + 0x10);
  return;
}



// FUNCTION 148d6a450 FUN_148d6a450 body=29 status=ok
// SIG undefined FUN_148d6a450(void)

undefined8 FUN_148d6a450(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d6a46e FUN_148d6a46e body=91 status=ok
// SIG undefined FUN_148d6a46e(void)

undefined8 FUN_148d6a46e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 200);
  *(uint *)(lVar2 + 200) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xcc) < iVar1 + 1U) {
    FUN_1456b1fa2(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0xc0);
  if (*(longlong *)(lVar2 + 0xc0) == 0) {
    lVar3 = lVar2;
  }
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *param_2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 148d6a4ca FUN_148d6a4ca body=31 status=ok
// SIG undefined FUN_148d6a4ca(void)

undefined8 FUN_148d6a4ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d6a504 FUN_148d6a504 body=93 status=ok
// SIG undefined FUN_148d6a504(void)

void FUN_148d6a504(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b978e50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978a70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d6a562 FUN_148d6a562 body=93 status=ok
// SIG undefined FUN_148d6a562(void)

void FUN_148d6a562(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b978e50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b978a70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d6a5c0 FUN_148d6a5c0 body=126 status=ok
// SIG undefined FUN_148d6a5c0(void)

void FUN_148d6a5c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b978e50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b978a70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d6a62f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d6a63e FUN_148d6a63e body=48 status=ok
// SIG undefined FUN_148d6a63e(void)

void FUN_148d6a63e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d6a66b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d6a670 FUN_148d6a670 body=31 status=ok
// SIG undefined FUN_148d6a670(void)

undefined8 FUN_148d6a670(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d6a6aa FUN_148d6a6aa body=93 status=ok
// SIG undefined FUN_148d6a6aa(void)

void FUN_148d6a6aa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b978ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d6a708 FUN_148d6a708 body=93 status=ok
// SIG undefined FUN_148d6a708(void)

void FUN_148d6a708(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b978ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d6a766 FUN_148d6a766 body=126 status=ok
// SIG undefined FUN_148d6a766(void)

void FUN_148d6a766(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b978ae0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d6a7d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d6a7e4 FUN_148d6a7e4 body=35 status=ok
// SIG undefined FUN_148d6a7e4(void)

void FUN_148d6a7e4(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d6a803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148d6a808 FUN_148d6a808 body=38 status=ok
// SIG undefined FUN_148d6a808(void)

undefined8 FUN_148d6a808(undefined8 param_1,int param_2)

{
  FUN_146116206();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d6a82e FUN_148d6a82e body=147 status=ok
// SIG undefined FUN_148d6a82e(void)

void FUN_148d6a82e(longlong param_1,int param_2)

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



// FUNCTION 148d6a8c2 FUN_148d6a8c2 body=107 status=ok
// SIG undefined FUN_148d6a8c2(void)

/* WARNING: Removing unreachable block (ram,0x000148d6a8f4) */
/* WARNING: Removing unreachable block (ram,0x000148d6a8d0) */
/* WARNING: Removing unreachable block (ram,0x000148d6a8e6) */
/* WARNING: Removing unreachable block (ram,0x000148d6a8ff) */
/* WARNING: Removing unreachable block (ram,0x000148d6a8e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d6a8c2(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cbcca70;
  LOCK();
  UNLOCK();
  DAT_14cbcca70 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cbcca78 = _DAT_14cbcca78 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cbcca78 = _DAT_14cbcca78 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148d6a92e FUN_148d6a92e body=29 status=ok
// SIG undefined FUN_148d6a92e(void)

undefined8 FUN_148d6a92e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d6a966 FUN_148d6a966 body=29 status=ok
// SIG undefined FUN_148d6a966(void)

bool FUN_148d6a966(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d6a984 FUN_148d6a984 body=26 status=ok
// SIG undefined FUN_148d6a984(void)

bool FUN_148d6a984(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d6a99e FUN_148d6a99e body=24 status=ok
// SIG undefined FUN_148d6a99e(void)

bool FUN_148d6a99e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d6a9b6 FUN_148d6a9b6 body=101 status=ok
// SIG undefined FUN_148d6a9b6(void)

void FUN_148d6a9b6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b978db0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d6aa1c FUN_148d6aa1c body=101 status=ok
// SIG undefined FUN_148d6aa1c(void)

void FUN_148d6aa1c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b978db0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d6aa82 FUN_148d6aa82 body=134 status=ok
// SIG undefined FUN_148d6aa82(void)

void FUN_148d6aa82(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b978db0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d6aaf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d6ab08 FUN_148d6ab08 body=44 status=ok
// SIG undefined FUN_148d6ab08(void)

void FUN_148d6ab08(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d6ab31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148d6ab34 FUN_148d6ab34 body=156 status=ok
// SIG undefined FUN_148d6ab34(void)

bool FUN_148d6ab34(longlong param_1,undefined8 param_2)

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



// FUNCTION 148d6abd2 FUN_148d6abd2 body=131 status=ok
// SIG undefined FUN_148d6abd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_148d6abd2(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  LOCK();
  _DAT_14cbcca78 = _DAT_14cbcca78 + 1;
  UNLOCK();
  puVar3 = (undefined8 *)FUN_148d73d14(DAT_14cbcca70);
  LOCK();
  _DAT_14cbcca78 = _DAT_14cbcca78 + 1;
  UNLOCK();
  for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)FUN_148d73d14(*puVar3)) {
    uVar2 = puVar3[2];
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_148d73d96(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  }
  LOCK();
  UNLOCK();
  LOCK();
  _DAT_14cbcca78 = _DAT_14cbcca78 + -2;
  UNLOCK();
  return param_1;
}



// FUNCTION 148d6ac56 FUN_148d6ac56 body=146 status=ok
// SIG undefined FUN_148d6ac56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_148d6ac56(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  LOCK();
  _DAT_14cbcca78 = _DAT_14cbcca78 + 1;
  UNLOCK();
  puVar3 = (undefined8 *)FUN_148d73d14(DAT_14cbcca70);
  LOCK();
  _DAT_14cbcca78 = _DAT_14cbcca78 + 1;
  UNLOCK();
  for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)FUN_148d73d14(*puVar3)) {
    uVar2 = puVar3[2];
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_148d73d96(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
    if (param_2 <= (int)param_1[1]) break;
  }
  LOCK();
  UNLOCK();
  LOCK();
  _DAT_14cbcca78 = _DAT_14cbcca78 + -2;
  UNLOCK();
  return param_1;
}



// FUNCTION 148d6ace8 FUN_148d6ace8 body=56 status=ok
// SIG undefined FUN_148d6ace8(void)

undefined8 * FUN_148d6ace8(undefined8 *param_1)

{
  FUN_14125c8e6();
  *param_1 = &PTR_FUN_14b7aa460;
  *(undefined1 *)(param_1 + 0x1aa) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3e9) = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  return param_1;
}



// FUNCTION 148d6ad20 FUN_148d6ad20 body=47 status=ok
// SIG undefined FUN_148d6ad20(void)

undefined8 FUN_148d6ad20(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  
  pcVar1 = "Hide GiveTake Item";
  if (*(char *)(param_1 + 0x38) == '\0') {
    pcVar1 = "Show GiveTake Item";
  }
  FUN_1400b22c2(param_2,pcVar1);
  return param_2;
}



// FUNCTION 148d6ad50 FUN_148d6ad50 body=174 status=ok
// SIG undefined FUN_148d6ad50(void)

void FUN_148d6ad50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0xa8), plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_145a89d04();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_145a89d04();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar3 != lVar4 && lVar4 != 0) goto LAB_148d6add1;
    }
    lVar3 = FUN_144a5270a(plVar1);
    if (lVar3 != 0) {
      uVar2 = FUN_145a89d04();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar4 != 0) {
LAB_148d6add1:
        if (*(char *)(param_1 + 0x38) != '\0') {
          FUN_148cdf71c(lVar4);
          return;
        }
        FUN_148cdf72a(lVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d6adfe FUN_148d6adfe body=78 status=ok
// SIG undefined FUN_148d6adfe(void)

ulonglong FUN_148d6adfe(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_1400b1152(param_3);
  bVar2 = 0;
  if (lVar3 != 0) {
    param_3 = (longlong *)(lVar3 + 0x3c0);
    plVar4 = param_3;
    cVar1 = (**(code **)(*(longlong *)(lVar3 + 0x3c0) + 0x58))(param_3);
    if (cVar1 == '\0') {
      bVar2 = (**(code **)(*param_3 + 0x70))(param_3);
    }
    else {
      bVar2 = 0;
      param_3 = plVar4;
    }
  }
  return CONCAT71((int7)((ulonglong)param_3 >> 8),lVar3 != 0 & bVar2) & 0xffffffff;
}



// FUNCTION 148d6ae4c FUN_148d6ae4c body=277 status=ok
// SIG undefined FUN_148d6ae4c(void)

void FUN_148d6ae4c(undefined8 param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_1401cb356();
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar2 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e02020;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b97a650;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_1);
  puVar2[4] = param_1;
  local_48 = 0x40a00000;
  FUN_1405f67fc(uVar4,local_30,&local_40,L"ALootableObject.SetRestingNetDormancy");
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  FUN_1449db362(&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6af62 FUN_148d6af62 body=77 status=ok
// SIG undefined FUN_148d6af62(void)

void FUN_148d6af62(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  FUN_14103d96c();
  FUN_14081ae08(param_1,1);
  if (param_2 != 0) {
    uVar1 = FUN_144b1f448(param_2);
    FUN_1405e4918(param_1,uVar1);
    uVar1 = FUN_144b1f452(param_2);
    *(undefined4 *)(param_1 + 0x19c) = uVar1;
  }
  return;
}



// FUNCTION 148d6afb0 FUN_148d6afb0 body=13 status=ok
// SIG undefined FUN_148d6afb0(void)

void FUN_148d6afb0(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    return;
  }
  FUN_141460c68(param_1,1);
  return;
}



// FUNCTION 148d6afbe FUN_148d6afbe body=1339 status=ok
// SIG undefined FUN_148d6afbe(void)

void FUN_148d6afbe(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  double *param_5,longlong param_6)

{
  int *piVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  float *pfVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  longlong local_1a8;
  longlong *plStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  float local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar8 = FUN_1447210f0();
  if (lVar8 == 0) goto LAB_148d6b4aa;
  if (param_2 == (longlong *)0x0) {
LAB_148d6b049:
    param_2 = (longlong *)0x0;
  }
  else {
    lVar9 = FUN_144a78c84();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
        lVar9 + 0x30)) goto LAB_148d6b049;
  }
  lVar9 = (**(code **)(*param_2 + 0x7b8))(param_2,*(undefined8 *)(param_6 + 0xf8),1,0xffffffff);
  if (lVar9 == 0) goto LAB_148d6b4aa;
  local_1a8 = *(longlong *)(param_6 + 0xf8);
  plStack_1a0 = (longlong *)CONCAT44(plStack_1a0._4_4_,0xffffffff);
  uVar6 = FUN_142b51129();
  if ((int)param_2[0x2b5] != *(int *)((longlong)param_2 + 0x15d4)) {
    plVar13 = param_2 + 699;
    if ((longlong *)param_2[700] != (longlong *)0x0) {
      plVar13 = (longlong *)param_2[700];
    }
    iVar7 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_2[0x2bd] - 1U & uVar6) * 4);
    if (iVar7 != -1) {
      lVar3 = param_2[0x2b4];
      do {
        lVar15 = (longlong)iVar7 * 0x30;
        lVar11 = lVar3 + lVar15;
        if ((*(longlong *)(lVar3 + lVar15) == local_1a8) &&
           (*(int *)(lVar3 + 8 + lVar15) == (int)plStack_1a0)) goto LAB_148d6b0a5;
        iVar7 = *(int *)(lVar11 + 0x28);
      } while (iVar7 != -1);
    }
  }
  lVar11 = 0;
LAB_148d6b0a5:
  plVar13 = (longlong *)(lVar11 + 0x10);
  if (lVar11 == 0) {
    plVar13 = (longlong *)0x0;
  }
  plVar14 = param_2 + 0x2b1;
  if (plVar13 != (longlong *)0x0) {
    plVar14 = plVar13;
  }
  lStack_1c0 = 0;
  local_1b8 = 0;
  lVar3 = *plVar14;
  local_1c8 = lVar3;
  uVar10 = FUN_14477b664(plVar14[1]);
  lStack_1c0 = FUN_14477b664(uVar10);
  lVar11 = plVar14[2];
  local_1b8 = lVar11;
  if (lStack_1c0 == 0) {
    uVar10 = FUN_1405bb4b8();
    lStack_1c0 = FUN_14477b664(uVar10);
  }
  if (lVar11 == 0) {
    local_1b8 = 0;
    if ((((lVar3 == 0) || (lStack_1c0 == 0)) ||
        (plVar13 = *(longlong **)(lStack_1c0 + 0xb8), plVar13 == (longlong *)0x0)) ||
       (cVar5 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar5 == '\0')) goto LAB_148d6b4aa;
    uVar10 = (**(code **)(*plVar13 + 0x110))(plVar13);
    lVar11 = FUN_144aff482(uVar10,&local_1c8);
    local_1b8 = lVar11;
    if (lVar11 == 0) goto LAB_148d6b4aa;
  }
  plVar13 = param_2 + 0x2be;
  if ((int)param_2[0x2bf] != (int)param_2[0x1af]) {
    FUN_14005ea14(plVar13);
    uVar6 = *(uint *)(param_2 + 0x1af);
    iVar7 = (int)param_2[0x2bf];
    *(uint *)(param_2 + 0x2bf) = iVar7 + uVar6;
    if ((uint)(*(int *)((longlong)param_2 + 0x15fc) - iVar7) < uVar6) {
      FUN_14475e4ac(plVar13);
    }
    memset((void *)((longlong)iVar7 * 4 + *plVar13),0,(longlong)(int)uVar6 << 2);
  }
  iVar7 = *(int *)(lVar9 + 0xc);
  dVar2 = *(double *)(lVar8 + 0x6d0);
  fVar19 = (float)dVar2 - *(float *)(*plVar13 + (longlong)iVar7 * 4);
  fVar17 = (float)FUN_1401edbbc(lVar9);
  if (fVar17 <= 1e-08) {
    dVar18 = param_5[2] * param_5[2] + *param_5 * *param_5 + param_5[1] * param_5[1];
  }
  else {
    dVar18 = 1.0 / (double)fVar17;
    dVar18 = param_5[2] * dVar18 * param_5[2] * dVar18 +
             dVar18 * *param_5 * dVar18 * *param_5 + param_5[1] * dVar18 * param_5[1] * dVar18;
  }
  pfVar12 = (float *)FUN_143d1f50e(lVar11);
  fVar17 = *pfVar12;
  lVar8 = FUN_143d1f50e(lVar11);
  if ((*(float *)(lVar8 + 4) <= fVar19 && fVar19 != *(float *)(lVar8 + 4)) &&
     (fVar19 = (float)dVar18, fVar17 * fVar17 < fVar19)) {
    *(float *)(*plVar13 + (longlong)iVar7 * 4) = (float)dVar2;
    uVar10 = FUN_1447210f0(param_1);
    FUN_1407f7f84(&local_1a8,uVar10);
    if (plStack_1a0 != (longlong *)0x0) {
      iVar7 = (int)plStack_1a0[1];
      do {
        if (iVar7 == 0) {
          plVar13 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)plStack_1a0[1];
        bVar16 = iVar7 == iVar4;
        if (bVar16) {
          *(int *)(plStack_1a0 + 1) = iVar7 + 1;
          iVar4 = iVar7;
        }
        iVar7 = iVar4;
        UNLOCK();
        plVar13 = plStack_1a0;
      } while (!bVar16);
      LOCK();
      piVar1 = (int *)((longlong)plStack_1a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_1a0 + 0x10))();
      }
      lVar8 = local_1a8;
      if (plVar13 != (longlong *)0x0) {
        if (local_1a8 != 0) {
          lVar9 = *(longlong *)(param_1 + 0x168);
          if (*(longlong *)(param_1 + 0x168) == 0) {
            lVar9 = param_1;
          }
          local_178 = 0;
          uStack_170 = 0;
          local_188 = 0;
          uStack_180 = 0;
          local_198 = 0;
          uStack_190 = 0;
          local_1a8 = 0;
          plStack_1a0 = (longlong *)0x0;
          local_168 = 0xc0;
          local_158 = 0;
          local_148 = 0;
          local_118 = 0;
          local_108 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_c8 = 0;
          local_c0 = 0x3ff0000000000000;
          local_b8 = 0x3ff0000000000000;
          local_b0 = 0x3ff0000000000000;
          local_a8 = 0x3f80000000000000;
          if (fVar19 < 0.0) {
            local_a0 = sqrtf(fVar19);
          }
          else {
            local_a0 = SQRT(fVar19);
          }
          local_1d8 = 0;
          local_1d0 = &local_1a8;
          FUN_1408f24ec(lVar8,lVar11,lVar9,param_6);
          FUN_141466e9a(&local_1a8);
        }
        LOCK();
        plVar14 = plVar13 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
    }
  }
LAB_148d6b4aa:
  if ((local_90 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d6b4fa FUN_148d6b4fa body=263 status=ok
// SIG undefined FUN_148d6b4fa(void)

void FUN_148d6b4fa(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x2688) != 0) {
    lVar3 = FUN_144a78c84();
    plVar1 = *(longlong **)(param_1 + 0x2688);
    if ((((plVar1 != (longlong *)0x0) && (lVar3 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28c0) + 0x788);
      if (lVar3 != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28c0) + 0x780);
        lVar5 = 0;
        do {
          lVar4 = (**(code **)(*plVar1 + 0x7b8))(plVar1,*(undefined8 *)(lVar2 + lVar5),1,0xffffffff)
          ;
          if (lVar4 != 0) {
            FUN_1402ba50c(lVar4,0);
            FUN_14130b6da(lVar4);
          }
          lVar5 = lVar5 + 8;
        } while (lVar3 * 8 != lVar5);
      }
      FUN_140fe7c88(&local_40);
      FUN_14154d670(plVar1 + 0xb3,param_1,local_40);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6b602 FUN_148d6b602 body=12 status=ok
// SIG undefined FUN_148d6b602(void)

void FUN_148d6b602(longlong param_1)

{
  FUN_148727dd0(param_1 + 0x2938);
  return;
}



// FUNCTION 148d6b60e FUN_148d6b60e body=122 status=ok
// SIG undefined FUN_148d6b60e(void)

void FUN_148d6b60e(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = DAT_14cbcd1e8;
  local_28 = 0xffffffff;
  cVar1 = FUN_144a7a548(param_1 + 0x4d8);
  if (cVar1 != '\0') {
    local_1c = 0;
    FUN_141094e00(param_1 + 0x4d8,&local_30,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6b68a FUN_148d6b68a body=386 status=ok
// SIG undefined FUN_148d6b68a(void)

void FUN_148d6b68a(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar2 = *(longlong *)(param_1 + 0xe10);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + -0x18e8);
    if (lVar2 == 0) {
      *(undefined8 *)param_2[1] = DAT_14c8464f0;
      uVar8 = DAT_14c8464e8;
      *(undefined8 *)*param_2 = DAT_14c8464e0;
      *(undefined8 *)(*param_2 + 8) = uVar8;
    }
    else {
      uVar8 = *(undefined8 *)(lVar2 + 0x268);
      *(undefined8 *)*param_2 = *(undefined8 *)(lVar2 + 0x260);
      *(undefined8 *)(*param_2 + 8) = uVar8;
      *(undefined8 *)param_2[1] = *(undefined8 *)(lVar2 + 0x270);
    }
  }
  else {
    pdVar9 = (double *)&DAT_14c846480;
    if (*(longlong *)(param_1 + -0x18e8) != 0) {
      pdVar9 = (double *)(*(longlong *)(param_1 + -0x18e8) + 0x240);
    }
    dVar5 = *pdVar9;
    dVar6 = pdVar9[1];
    dVar7 = pdVar9[2];
    dVar11 = *(double *)(lVar2 + 0x3e0) * pdVar9[8];
    dVar12 = *(double *)(lVar2 + 1000) * pdVar9[9];
    dVar10 = *(double *)(lVar2 + 0x3f0) * pdVar9[10];
    dVar1 = pdVar9[3];
    dVar13 = dVar12 * dVar5 - dVar6 * dVar11;
    dVar14 = dVar10 * dVar6 - dVar7 * dVar12;
    dVar15 = dVar11 * dVar7 - dVar5 * dVar10;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    dVar4 = (dVar7 * dVar14 - dVar5 * dVar13) + pdVar9[3] * dVar15 + dVar12 + pdVar9[5];
    dVar12 = pdVar9[6];
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = (dVar13 * dVar6 - dVar15 * dVar7) + dVar1 * dVar14 + dVar11 + pdVar9[4];
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *param_2 = auVar3;
    *(double *)param_2[1] = dVar13 * dVar1 + dVar10 + (dVar15 * dVar5 - dVar14 * dVar6) + dVar12;
  }
  return;
}



// FUNCTION 148d6b826 FUN_148d6b826 body=108 status=ok
// SIG undefined FUN_148d6b826(void)

void FUN_148d6b826(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50 [3];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  (**(code **)(*(longlong *)(param_1 + -0x2600) + 800))(param_1 + -0x2600,1,local_38,local_50);
  *(undefined8 *)(param_3 + 0x10) = local_50[0];
  *(undefined1 *)(param_3 + 0x28) = 0;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6b894 FUN_148d6b894 body=1421 status=ok
// SIG undefined FUN_148d6b894(void)

void FUN_148d6b894(longlong param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  double *pdVar15;
  undefined4 uVar16;
  uint uVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  longlong *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  undefined1 local_d8 [24];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(longlong *)(param_1 + 0x2688) != 0) {
    lVar10 = FUN_144a78c84();
    plVar1 = *(longlong **)(param_1 + 0x2688);
    if ((((plVar1 != (longlong *)0x0) && (lVar10 != 0)) && (lVar14 = plVar1[2], lVar14 != 0)) &&
       (((*(int *)(lVar10 + 0x38) <= *(int *)(lVar14 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
          lVar10 + 0x30)) && (*(longlong *)(param_1 + 0x28c0) != 0)))) {
      lVar10 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
      if (lVar10 != 0) {
        *(byte *)(lVar10 + 8) = *(byte *)(lVar10 + 8) | 0x40;
      }
      if ((longlong)(int)plVar1[0x1af] == 0) {
        uVar20 = 0;
      }
      else {
        plVar21 = (longlong *)plVar1[0x1ae];
        plVar19 = plVar21 + (int)plVar1[0x1af];
        local_100 = plVar1 + 699;
        uVar20 = 0;
        do {
          lVar10 = *plVar21;
          if ((lVar10 != 0) && (lVar14 = FUN_140aa2aee(lVar10), lVar14 != 0)) {
            lVar22 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28c0) + 0x788);
            if (lVar22 != 0) {
              lVar13 = 0;
              do {
                if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28c0) + 0x780) + lVar13)
                    == *(longlong *)(lVar14 + 0x28)) {
                  *(byte *)(lVar10 + 8) = *(byte *)(lVar10 + 8) | 0x40;
                  break;
                }
                lVar13 = lVar13 + 8;
              } while (lVar22 * 8 != lVar13);
            }
            lVar22 = plVar1[0x2b2];
            if (lVar22 == 0) {
              uVar11 = FUN_1405bb4b8();
              lVar22 = FUN_14477b664(uVar11);
              plVar1[0x2b2] = lVar22;
            }
            if (plVar1[0x2b3] == 0) {
              if ((plVar1[0x2b1] != 0) && (lVar22 != 0)) {
                plVar18 = *(longlong **)(lVar22 + 0xb8);
                local_108 = uVar20;
                if ((plVar18 == (longlong *)0x0) ||
                   (cVar8 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar8 == '\0')) {
                  plVar1[0x2b3] = 0;
                  uVar20 = local_108;
                }
                else {
                  uVar11 = (**(code **)(*plVar18 + 0x110))(plVar18);
                  lVar22 = FUN_144aff482(uVar11,plVar1 + 0x2b1);
                  plVar1[0x2b3] = lVar22;
                  uVar20 = local_108;
                  if (lVar22 != 0) goto LAB_148d6bc53;
                }
              }
              local_a8 = *(double *)(lVar14 + 0x28);
              uStack_a0 = (double)CONCAT44(uStack_a0._4_4_,0xffffffff);
              uVar17 = FUN_142b51129(&local_a8);
              if ((int)plVar1[0x2b5] != *(int *)((longlong)plVar1 + 0x15d4)) {
                plVar18 = (longlong *)plVar1[700];
                if ((longlong *)plVar1[700] == (longlong *)0x0) {
                  plVar18 = local_100;
                }
                iVar9 = *(int *)((longlong)plVar18 +
                                (ulonglong)((int)plVar1[0x2bd] - 1U & uVar17) * 4);
                if (iVar9 != -1) {
                  lVar14 = plVar1[0x2b4];
                  do {
                    lVar22 = (longlong)iVar9 * 0x30;
                    if ((*(double *)(lVar14 + lVar22) == local_a8) &&
                       (*(int *)(lVar14 + 8 + lVar22) == (int)uStack_a0)) goto LAB_148d6bc53;
                    iVar9 = *(int *)(lVar22 + lVar14 + 0x28);
                  } while (iVar9 != -1);
                }
              }
            }
            else {
LAB_148d6bc53:
              uVar20 = CONCAT71((int7)(uVar20 >> 8),1);
              FUN_140690180(lVar10,1);
            }
          }
          plVar21 = plVar21 + 1;
        } while (plVar21 != plVar19);
      }
      lVar10 = FUN_148d6be22(param_1);
      if (lVar10 == 0) {
        uVar11 = FUN_140dea9c3(param_1);
        FUN_140b506a4(uVar11);
      }
      lVar10 = (longlong)plVar1 + 0x59c;
      FUN_140fe7d3a(&local_b0);
      dVar12 = (double)FUN_148d6be8a(lVar10,param_1,local_b0);
      uVar16 = (undefined4)lVar10;
      if ((uVar20 & 1) != 0) {
        plVar19 = plVar1 + 0xb3;
        FUN_140fe7c88(&local_b8);
        dVar12 = (double)FUN_148d6bf1c(plVar19,param_1,local_b8);
        uVar16 = SUB84(plVar19,0);
      }
      lVar10 = *(longlong *)(param_1 + 0x1c8);
      if (lVar10 == 0) {
        local_78 = DAT_14c846508;
        local_88 = (undefined4)DAT_14c8464f8;
        uStack_84 = DAT_14c8464f8._4_4_;
        uStack_80 = (undefined4)DAT_14c846500;
        uStack_7c = DAT_14c846500._4_4_;
      }
      else {
        dVar4 = *(double *)(lVar10 + 0x240);
        dVar5 = *(double *)(lVar10 + 0x248);
        dVar6 = *(double *)(lVar10 + 0x250);
        dVar7 = *(double *)(lVar10 + 600);
        pdVar15 = *(double **)(lVar10 + 0x228);
        local_a8 = dVar4;
        uStack_a0 = dVar5;
        local_98 = dVar6;
        uStack_90 = dVar7;
        if (pdVar15 == (double *)0x0) {
          uVar16 = 0x40;
          pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
          dVar12 = DAT_14c8463d8;
          *pdVar15 = DAT_14c8463d0;
          pdVar15[1] = dVar12;
          dVar12 = DAT_14c8463e8;
          pdVar15[2] = DAT_14c8463e0;
          pdVar15[3] = dVar12;
          dVar12 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
          pdVar15[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
          pdVar15[5] = dVar12;
          dVar12 = DAT_14c846508;
          pdVar15[6] = DAT_14c846508;
          *(double **)(lVar10 + 0x228) = pdVar15;
        }
        auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar15[1]);
        auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar15);
        auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar15[1]) >> 0x20);
        iVar9 = movmskpd(SUB84(dVar12,0),auVar2);
        auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar15[3]);
        auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar15[2]);
        auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar15[3]) >> 0x20);
        uVar17 = movmskpd(uVar16,auVar3);
        if ((uVar17 & 0x3fffffff) != 0 || iVar9 != 0) {
          *(undefined4 *)(pdVar15 + 2) = (undefined4)local_98;
          *(undefined4 *)((longlong)pdVar15 + 0x14) = local_98._4_4_;
          *(undefined4 *)(pdVar15 + 3) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)pdVar15 + 0x1c) = uStack_90._4_4_;
          *(undefined4 *)pdVar15 = (undefined4)local_a8;
          *(undefined4 *)((longlong)pdVar15 + 4) = local_a8._4_4_;
          *(int *)(pdVar15 + 1) = (int)uStack_a0;
          *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_a0._4_4_;
          FUN_1448052ee(&local_a8,&local_88);
          pdVar15[6] = local_78;
          pdVar15[4] = (double)CONCAT44(uStack_84,local_88);
          pdVar15[5] = (double)CONCAT44(uStack_7c,uStack_80);
        }
        local_78 = pdVar15[6];
        local_88 = *(undefined4 *)(pdVar15 + 4);
        uStack_84 = *(undefined4 *)((longlong)pdVar15 + 0x24);
        uStack_80 = *(undefined4 *)(pdVar15 + 5);
        uStack_7c = *(undefined4 *)((longlong)pdVar15 + 0x2c);
      }
      FUN_1401c9a0e(&local_88,&local_a8,*(longlong *)(param_1 + 0x28c0) + 0x798);
      lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28c0) + 0x788);
      if (lVar10 != 0) {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x28c0) + 0x780);
        lVar22 = 0;
        do {
          local_c0 = *(undefined8 *)(lVar14 + lVar22);
          lVar13 = (**(code **)(*plVar1 + 0x7b8))(plVar1,local_c0,1,0xffffffff);
          if (lVar13 != 0) {
            *(byte *)(lVar13 + 0x3d) = *(byte *)(lVar13 + 0x3d) | 6;
            FUN_1402b9d88(lVar13,2,0);
          }
          FUN_147d199f4(plVar1,&local_c0,1);
          uVar11 = local_c0;
          lVar13 = *(longlong *)(param_1 + 0x28c0);
          if (((((*(double *)(lVar13 + 0x798) != 0.0) || (NAN(*(double *)(lVar13 + 0x798)))) ||
               (*(double *)(lVar13 + 0x7a0) != 0.0)) ||
              ((NAN(*(double *)(lVar13 + 0x7a0)) || (*(double *)(lVar13 + 0x7a8) != 0.0)))) ||
             (NAN(*(double *)(lVar13 + 0x7a8)))) {
            (**(code **)(*plVar1 + 0x4b0))(plVar1,local_d8,*(undefined8 *)(lVar13 + 0x7b0));
            local_e8 = local_98;
            local_f8 = (undefined4)local_a8;
            uStack_f4 = local_a8._4_4_;
            uStack_f0 = (int)uStack_a0;
            uStack_ec = uStack_a0._4_4_;
            (**(code **)(*plVar1 + 0x6b8))(plVar1,&local_f8,local_d8,uVar11);
          }
          lVar22 = lVar22 + 8;
        } while (lVar10 * 8 != lVar22);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d6be22 FUN_148d6be22 body=102 status=ok
// SIG undefined FUN_148d6be22(void)

void FUN_148d6be22(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140deaa76();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6be8a FUN_148d6be8a body=145 status=ok
// SIG undefined FUN_148d6be8a(void)

void FUN_148d6be8a(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_1401892b6(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x59c,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6bf1c FUN_148d6bf1c body=145 status=ok
// SIG undefined FUN_148d6bf1c(void)

void FUN_148d6bf1c(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_1400dccb8(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x598,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6bfae FUN_148d6bfae body=145 status=ok
// SIG undefined FUN_148d6bfae(void)

void FUN_148d6bfae(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_14015716c(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x59e,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6c040 FUN_148d6c040 body=102 status=ok
// SIG undefined FUN_148d6c040(void)

void FUN_148d6c040(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458d4f12();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6c0aa FUN_148d6c0aa body=205 status=ok
// SIG undefined FUN_148d6c0aa(void)

void FUN_148d6c0aa(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  thunk_FUN_1401a0912();
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_144a7b040();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (lVar4 != 0) {
          local_30 = FUN_148d6c278;
          local_28 = 0;
          FUN_148d6c178(lVar4 + 400,&local_20,param_1);
          *(undefined8 *)(param_1 + 0x3a8) = local_20;
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6c178 FUN_148d6c178 body=254 status=ok
// SIG undefined FUN_148d6c178(void)

undefined8
FUN_148d6c178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e9ef0;
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
  *local_48 = &PTR_FUN_14b97a770;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1403524de(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6c278 FUN_148d6c278 body=185 status=ok
// SIG undefined FUN_148d6c278(void)

void FUN_148d6c278(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (((*(char *)((longlong)param_1 + 0x3c9) == '\x01') &&
      (*(char *)((longlong)param_1 + 0x3ca) == '\0')) && (param_1[0x59] != 0)) {
    lVar4 = FUN_1400b1372();
    plVar1 = (longlong *)param_1[0x59];
    if (((plVar1 != (longlong *)0x0) && (lVar4 != 0)) &&
       ((lVar2 = plVar1[2], lVar2 != 0 &&
        ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)))))) {
      (**(code **)(*plVar1 + 0x668))(plVar1,0);
    }
  }
  if (*(char *)((longlong)param_1 + 0x3ca) == '\x01') {
    if (param_2 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*param_2 + 0x108))(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x000148d6c2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x650))(param_1,0,uVar3);
    return;
  }
  return;
}



// FUNCTION 148d6c332 FUN_148d6c332 body=162 status=ok
// SIG undefined FUN_148d6c332(void)

void FUN_148d6c332(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_140cc8a2e();
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    plVar2 = *(longlong **)(param_1 + 0xa8);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_144a7b040();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
      if (plVar2 != (longlong *)0x0) {
        uVar1 = FUN_144a7b040();
        plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
        if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
          lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
          if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x3a8) != 0)) {
            FUN_14480f766(lVar4 + 400);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x3a8) = 0;
  }
  FUN_148d6c3d4(param_1);
  return;
}



// FUNCTION 148d6c3d4 FUN_148d6c3d4 body=126 status=ok
// SIG undefined FUN_148d6c3d4(void)

void FUN_148d6c3d4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x8c8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x8c8) + 0xc71) = 1;
    FUN_140457ffc(*(longlong *)(param_1 + 0x8c8) + 0x130,param_1);
  }
  *(undefined8 *)(param_1 + 0x8c8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x8d0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x8d0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d6c446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d6c452 FUN_148d6c452 body=419 status=ok
// SIG undefined FUN_148d6c452(void)

void FUN_148d6c452(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_2;
  if (*(longlong *)(param_1 + 0x3b0) == param_2) goto LAB_148d6c47a;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  FUN_1446dcdd4(local_58,&local_68);
  plVar2 = (longlong *)FUN_1400d6974(local_58);
  if (plVar2 == (longlong *)0x0) goto LAB_148d6c47a;
  lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  lVar4 = FUN_1406543da();
  if (((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_148d6c47a;
  plVar1 = (longlong *)(param_1 + 0x3b8);
  if (*plVar1 == 0) {
    uVar5 = FUN_1406543da();
    lVar3 = FUN_14477b664(uVar5);
    *plVar1 = lVar3;
  }
  lVar3 = FUN_1406543da();
  uVar5 = FUN_1406543da();
  FUN_1402d1bfa(&local_60,uVar5,plVar2);
  if (*(longlong *)(param_1 + 0x3b0) != local_60) {
    *(undefined8 *)(param_1 + 0x3c0) = 0;
  }
  *(longlong *)(param_1 + 0x3b0) = local_60;
  lVar4 = FUN_1406543da();
  if (lVar3 == 0) {
LAB_148d6c59a:
    lVar4 = lVar3;
  }
  else if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) goto LAB_148d6c59a;
  if (*plVar1 != lVar4) {
    *(undefined8 *)(param_1 + 0x3c0) = 0;
  }
  uVar5 = FUN_14477b664(lVar4);
  lVar3 = FUN_14477b664(uVar5);
  *(longlong *)(param_1 + 0x3b8) = lVar3;
  if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x3b0) != 0)) {
    *(longlong **)(param_1 + 0x3c0) = plVar2;
  }
  FUN_147f43246(param_1,local_68);
LAB_148d6c47a:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6c5f6 FUN_148d6c5f6 body=105 status=ok
// SIG undefined FUN_148d6c5f6(void)

void FUN_148d6c5f6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_140ee576a();
  if ((param_2 != (longlong *)0x0) && (*(char *)(param_1 + 0x3c8) != '\0')) {
    lVar2 = FUN_1400b1372();
    iVar1 = *(int *)(lVar2 + 0x38);
    if ((iVar1 <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)iVar1 * 8) == lVar2 + 0x30)) {
      (**(code **)(*param_2 + 0x668))(param_2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
      FUN_148d6af62(param_2,*(undefined8 *)(param_1 + 0xa8));
      return;
    }
  }
  return;
}



// FUNCTION 148d6c660 FUN_148d6c660 body=1319 status=ok
// SIG undefined FUN_148d6c660(void)

void FUN_148d6c660(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_348 [32];
  char *local_328;
  longlong *local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  char local_2e1;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  byte local_288;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_348;
  lVar3 = *(longlong *)(param_1 + 0x2c8);
  FUN_14133e7c4();
  if ((((lVar3 != 0) && ((*(byte *)(lVar3 + 0x65) & 2) == 0)) &&
      ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) &&
     (plVar4 = *(longlong **)(lVar3 + 0x1c8), plVar4 != (longlong *)0x0)) {
    lVar10 = FUN_144a3a302();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
        lVar10 + 0x30)) {
      lVar10 = (**(code **)(*plVar4 + 0x7b8))(plVar4,0,1,0xffffffff);
      if (lVar10 != 0) {
        *(byte *)(lVar10 + 8) = *(byte *)(lVar10 + 8) | 0x40;
      }
      FUN_148d6cc1a(&local_2d0);
      lVar10 = *(longlong *)(param_1 + 0x10);
      lVar13 = *(longlong *)(lVar10 + 0x110);
      if (lVar13 == 0) {
        FUN_140aa6c08(lVar10);
        lVar13 = *(longlong *)(lVar10 + 0x110);
      }
      FUN_148d6cb88((longlong)plVar4 + 0x59c,lVar13,local_2d0);
      (**(code **)(*plVar4 + 0x588))(plVar4,2);
      (**(code **)(*plVar4 + 0x720))(plVar4,3);
      (**(code **)(*plVar4 + 0x938))(plVar4,2,0);
      (**(code **)(*plVar4 + 0x690))(plVar4,1);
      if ((*(byte *)(lVar3 + 99) & 8) != 0) {
        FUN_1405ba932(lVar3,1);
      }
      lVar10 = *(longlong *)(param_1 + 0xb0);
      if ((lVar10 == 0) && (lVar10 = FUN_1448abda6(param_1), lVar10 == 0)) {
        lVar10 = 0;
      }
      else {
        local_2d8 = 0;
        FUN_14485c47a(&local_2d8,lVar3);
        uVar7 = DAT_14c763fe8;
        local_2e0 = 0;
        if (*(longlong *)(lVar10 + 0x1f0) == 0) {
          puVar11 = (undefined8 *)(lVar10 + 0x458);
        }
        else {
          puVar11 = (undefined8 *)(*(longlong *)(lVar10 + 0x1f0) + 0xf0);
        }
        uVar5 = *puVar11;
        local_308 = (undefined8 *)0x0;
        uStack_300._0_4_ = 0;
        FUN_1446efa72(&local_308,0,3,0x10);
        puVar11 = local_308;
        uStack_300 = (longlong *)CONCAT44(uStack_300._4_4_,3);
        *local_308 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar13 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar13 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar13;
        local_308[2] = lVar12;
        *local_308 = &PTR_FUN_14b97a810;
        local_308[3] = 0;
        FUN_14485c47a(local_308 + 3,lVar3);
        puVar11[4] = local_2d8;
        local_2c8 = 0;
        local_2c0 = 0;
        FUN_14487d8d8(&local_2c8,&local_308);
        local_288 = 1;
        local_328 = (char *)&local_318;
        local_318._0_4_ = (uint)local_318 & 0xffff0000;
        local_318 = (code *)CONCAT44(0xbf800000,(uint)local_318);
        FUN_1406f4044(uVar5,&local_2e0,&local_2c8,uVar7);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_288])(&local_2c8);
        FUN_1449db362(&local_308);
      }
      FUN_1409e0c66(&local_2c8,lVar10);
      plVar14 = (longlong *)CONCAT44(uStack_2bc,local_2c0);
      if (plVar14 != (longlong *)0x0) {
        iVar9 = (int)plVar14[1];
        do {
          if (iVar9 == 0) {
            plVar14 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar8 = (int)plVar14[1];
          bVar15 = iVar9 == iVar8;
          if (bVar15) {
            *(int *)(plVar14 + 1) = iVar9 + 1;
            iVar8 = iVar9;
          }
          iVar9 = iVar8;
          UNLOCK();
        } while (!bVar15);
        LOCK();
        piVar1 = (int *)((longlong)CONCAT44(uStack_2bc,local_2c0) + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_2bc,local_2c0) + 0x10))();
        }
        lVar10 = local_2c8;
        if (plVar14 != (longlong *)0x0) {
          if (local_2c8 != 0) {
            lVar13 = param_1 + 0x3d0;
            if (*(char *)(param_1 + 0x8c0) != '\0') {
              lVar13 = param_1 + 0x648;
            }
            FUN_140ff1a6a(&local_2c8,lVar13);
            local_328 = &local_2e1;
            local_2e1 = '\0';
            FUN_143881578(lVar10,&local_308,*(undefined8 *)(param_1 + 0xa8),&local_2c8);
            plVar2 = uStack_300;
            if ((longlong *)(param_1 + 0x8c8) != &local_308) {
              *(undefined8 **)(param_1 + 0x8c8) = local_308;
              local_308 = (undefined8 *)0x0;
              plVar6 = *(longlong **)(param_1 + 0x8d0);
              if (uStack_300 != plVar6) {
                uStack_300 = (longlong *)0x0;
                *(longlong **)(param_1 + 0x8d0) = plVar2;
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar6 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*plVar6)(plVar6);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar6 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar6 + 0x10))(plVar6);
                    }
                  }
                }
              }
            }
            plVar2 = uStack_300;
            if (uStack_300 != (longlong *)0x0) {
              LOCK();
              plVar6 = uStack_300 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*uStack_300)(uStack_300);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                }
              }
            }
            lVar10 = *(longlong *)(param_1 + 0x8c8);
            if (lVar10 != 0) {
              lVar3 = *(longlong *)(lVar3 + 0x1c8);
              if (lVar3 == 0) {
                local_2f8 = DAT_14c8464f0;
                local_308 = (undefined8 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_300 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              }
              else {
                local_308 = *(undefined8 **)(lVar3 + 0x260);
                uStack_300 = *(longlong **)(lVar3 + 0x268);
                local_2f8 = *(undefined8 *)(lVar3 + 0x270);
              }
              if (local_2e1 == '\x01') {
                FUN_148d6cd04(param_1,plVar4,&local_308);
              }
              else {
                local_2d8 = 0;
                FUN_14485c47a(&local_2d8,plVar4);
                local_318 = FUN_148d6cf18;
                local_310 = 0;
                local_328 = (char *)&local_2d8;
                local_320 = &local_308;
                FUN_148d6cde2(lVar10 + 0x130,&local_2e0,param_1);
              }
            }
            local_2c8 = 0;
            FUN_14076ba36();
          }
          LOCK();
          plVar4 = plVar14 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d6cb88 FUN_148d6cb88 body=145 status=ok
// SIG undefined FUN_148d6cb88(void)

void FUN_148d6cb88(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_1401892b6(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x59c,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6cc1a FUN_148d6cc1a body=190 status=ok
// SIG undefined FUN_148d6cc1a(void)

undefined8 * FUN_148d6cc1a(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbcd1c8) {
    FUN_144b3d300(&DAT_14cbcd1c8);
    if (DAT_14cbcd1c8 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"csSleep",8);
      builtin_wcsncpy(local_48 + 8,L"_OnPhysi",8);
      builtin_wcsncpy(local_48,L"Lootable",8);
      FUN_1446f470e(&DAT_14cbcd1c0,local_48,1);
      _Init_thread_footer(&DAT_14cbcd1c8);
    }
  }
  *param_1 = DAT_14cbcd1c0;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6ccda FUN_148d6ccda body=41 status=ok
// SIG undefined FUN_148d6ccda(void)

void FUN_148d6ccda(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_140fe7c26(param_2 + 0x59c,param_1);
  }
  FUN_148d6cf86(param_2);
  return;
}



// FUNCTION 148d6cd04 FUN_148d6cd04 body=220 status=ok
// SIG undefined FUN_148d6cd04(void)

void FUN_148d6cd04(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_14388064a(*(undefined8 *)(param_1 + 0x8c8));
    if (lVar2 != 0) {
      cVar1 = FUN_144a7b75a(*(undefined1 *)(lVar2 + 0x20),4);
      if (cVar1 != '\0') {
        FUN_144a7b7fe(lVar2,local_40);
        lVar2 = *(longlong *)(param_1 + 0xb0);
        if (lVar2 == 0) {
          lVar2 = FUN_1448abda6(param_1);
        }
        uVar3 = FUN_144a7c670(lVar2);
        FUN_1470e7224(local_78,param_3,local_40,uVar3);
        local_88 = local_50;
        local_98 = local_60;
        uStack_94 = uStack_5c;
        uStack_90 = uStack_58;
        uStack_8c = uStack_54;
        (**(code **)(*param_2 + 0x700))(param_2,&local_98,0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6cde2 FUN_148d6cde2 body=308 status=ok
// SIG undefined FUN_148d6cde2(void)

undefined8
FUN_148d6cde2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,5,0x10);
  puVar6 = local_58;
  local_50 = 5;
  *local_58 = &PTR_LAB_14b97a8f0;
  local_58[1] = *param_5;
  uVar3 = param_6[1];
  uVar4 = param_6[2];
  uVar5 = param_6[3];
  *(undefined4 *)(local_58 + 2) = *param_6;
  *(undefined4 *)((longlong)local_58 + 0x14) = uVar3;
  *(undefined4 *)(local_58 + 3) = uVar4;
  *(undefined4 *)((longlong)local_58 + 0x1c) = uVar5;
  local_58[4] = *(undefined8 *)(param_6 + 4);
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_58[5] = lVar8;
  *local_58 = &PTR_FUN_14b97a880;
  local_58[6] = 0;
  FUN_14485c47a(local_58 + 6,param_3);
  *(undefined4 *)(puVar6 + 8) = uVar1;
  puVar6[7] = uVar2;
  FUN_140e0aeb0(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6cf18 FUN_148d6cf18 body=109 status=ok
// SIG undefined FUN_148d6cf18(void)

void FUN_148d6cf18(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  if ((*param_2 != 0) && (*param_2 == *(longlong *)(param_1 + 0x8c8))) {
    uVar1 = FUN_14479d2ce(&local_20);
    FUN_148d6cd04(param_1,uVar1,param_4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148d6c3d4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6cf86 FUN_148d6cf86 body=124 status=ok
// SIG undefined FUN_148d6cf86(void)

void FUN_148d6cf86(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x690))(param_1,0);
    (**(code **)(*param_1 + 0x938))(param_1,2,2);
    plVar1 = (longlong *)param_1[0x15];
    if (plVar1 != (longlong *)0x0) {
      lVar2 = FUN_1400b1372();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        (**(code **)(*plVar1 + 0x668))(plVar1,0);
        FUN_148d6ae4c(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d6d012 FUN_148d6d012 body=316 status=ok
// SIG undefined FUN_148d6d012(void)

undefined4 *
FUN_148d6d012(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined1 local_68 [40];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    uVar3 = FUN_145d863b2();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x10) = lVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 == 0) {
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar3,(longlong *)(param_1 + 8));
        *(longlong *)(param_1 + 0x18) = lVar5;
        if (lVar5 != 0) goto LAB_148d6d0ea;
      }
    }
  }
  else {
LAB_148d6d0ea:
    local_6c = 0;
    uVar3 = FUN_144a815a6(param_4);
    local_68[0] = 0;
    local_40 = 0;
    FUN_1456bb102(local_68,uVar3);
    cVar2 = FUN_140af2cf8(lVar5,local_68,&local_6c);
    FUN_144a5ac3a(local_68);
    if (cVar2 != '\0') {
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = local_6c;
      goto LAB_148d6d0bc;
    }
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = 0;
LAB_148d6d0bc:
  *(undefined1 *)(param_2 + 8) = 3;
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d6d158 FUN_148d6d158 body=77 status=ok
// SIG undefined FUN_148d6d158(void)

undefined8
FUN_148d6d158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  lVar1 = FUN_148d6d1a6(param_1,param_4,1);
  if (lVar1 == 0) {
    FUN_14162be86(param_2,0);
  }
  else {
    FUN_1402a4426(lVar1,param_2,param_5,param_6,param_7);
  }
  return param_2;
}



// FUNCTION 148d6d1a6 FUN_148d6d1a6 body=192 status=ok
// SIG undefined FUN_148d6d1a6(void)

longlong FUN_148d6d1a6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = FUN_144a815a6(param_2);
  if (lVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_145d863b2();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x10) = lVar5;
    }
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar4,(longlong *)(param_1 + 8));
      }
      *(longlong *)(param_1 + 0x18) = lVar6;
    }
    lVar3 = FUN_14418dfb2(lVar3 + 0x2788,lVar6,param_3);
    if (lVar3 != 0) {
      return lVar3 + 0x18;
    }
  }
  return 0;
}



// FUNCTION 148d6d266 FUN_148d6d266 body=95 status=ok
// SIG undefined FUN_148d6d266(void)

undefined8 *
FUN_148d6d266(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  
  lVar1 = FUN_148d6d1a6(param_1,param_4,1);
  if (lVar1 == 0) {
    *param_2 = *param_5;
  }
  else {
    FUN_140cda184(lVar1,param_2,param_5,param_6,param_7,param_8);
  }
  return param_2;
}



// FUNCTION 148d6d2c6 FUN_148d6d2c6 body=58 status=ok
// SIG undefined FUN_148d6d2c6(void)

ulonglong FUN_148d6d2c6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_148d6d1a6(param_1,param_3,0);
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = thunk_FUN_1409d14a4(lVar2,param_4);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 148d6d338 FUN_148d6d338 body=409 status=ok
// SIG undefined FUN_148d6d338(void)

void FUN_148d6d338(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  void *_Src;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [40];
  void *local_50;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (void *)0x0;
  local_48 = *(uint *)(param_1 + 0x9d0);
  lVar3 = (longlong)(int)local_48;
  _Src = *(void **)(param_1 + 0x9c8);
  if (lVar3 == 0) {
    local_44 = 0;
    uVar7 = 0;
    if (param_3 != '\0') goto LAB_148d6d47e;
  }
  else {
    FUN_1401b309e(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar3 << 3);
    uVar7 = local_48;
    if (param_3 != '\0') {
      if (0 < (int)local_48) {
        lVar3 = 0;
        bVar2 = false;
        do {
          uVar7 = (uint)lVar3;
          lVar3 = (longlong)(int)uVar7;
          lVar6 = 0;
          while (*(longlong *)((longlong)local_50 + lVar6 * 8 + lVar3 * 8) != *param_2) {
            lVar1 = lVar3 + lVar6;
            lVar6 = lVar6 + 1;
            if ((longlong)(int)local_48 <= lVar1 + 1) {
              if (!bVar2) goto LAB_148d6d47e;
              goto LAB_148d6d4c6;
            }
          }
          iVar5 = (int)lVar6;
          if (~uVar7 + local_48 != iVar5) {
            iVar4 = (~uVar7 + local_48) - iVar5;
            if (0 < iVar4) {
              iVar4 = 1;
            }
            memmove((void *)((longlong)local_50 + lVar6 * 8 + lVar3 * 8),
                    (void *)((longlong)local_50 + (longlong)(int)(local_48 - iVar4) * 8),
                    (longlong)iVar4 << 3);
          }
          lVar3 = lVar3 + lVar6;
          local_48 = local_48 - 1;
          bVar2 = true;
        } while ((int)(uVar7 + iVar5) < (int)local_48);
LAB_148d6d4c6:
        FUN_1406ce816(&local_50);
      }
      goto LAB_148d6d47e;
    }
  }
  local_48 = uVar7 + 1;
  if (local_44 < local_48) {
    FUN_1446f84a2(&local_50,uVar7);
  }
  *(longlong *)((longlong)local_50 + (longlong)(int)uVar7 * 8) = *param_2;
LAB_148d6d47e:
  FUN_148d6d4d2(param_1,&local_50);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d6d4d2 FUN_148d6d4d2 body=89 status=ok
// SIG undefined FUN_148d6d4d2(void)

void FUN_148d6d4d2(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x9d0);
  if (uVar1 == *(uint *)(param_2 + 1)) {
    if (0 < (int)uVar1) {
      uVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x9c8) + uVar2 * 8) !=
            *(longlong *)(*param_2 + uVar2 * 8)) goto LAB_148d6d511;
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
    return;
  }
LAB_148d6d511:
  FUN_1406fa324();
  FUN_14418f34a(param_1);
  FUN_14418f43e(param_1);
  return;
}



// FUNCTION 148d6d52c FUN_148d6d52c body=328 status=ok
// SIG undefined FUN_148d6d52c(void)

void FUN_148d6d52c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar5 = FUN_144729dda(param_1 + 0x10);
  if (cVar5 != '\0') {
    plVar1 = (longlong *)(param_1 + 0x78);
    lVar2 = param_1 + 0x88;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar2;
    if (*(int *)(param_1 + 0xa0) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar8 = *(int *)(param_1 + 0xa0);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar4 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar6 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar8) || (local_78 = uVar4, uStack_60 != lVar2)) {
      do {
        local_78 = uVar4;
        lVar3 = *local_90;
        lVar7 = FUN_14479d2ce(param_1 + 0x10);
        FUN_1414c8d40(param_1,lVar3 + (longlong)iVar6 * 0x180 + 0x10,*(undefined4 *)(lVar7 + 0x410))
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar8));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6d676 FUN_148d6d676 body=968 status=ok
// SIG undefined FUN_148d6d676(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d6d676(longlong param_1,double *param_2,uint param_3,double *param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined4 in_R10D;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x9f8))) {
    lVar7 = (ulonglong)param_3 * 0x80;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x9f0) + lVar7);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x9f0) + lVar7;
      auVar2 = *(undefined1 (*) [16])(lVar5 + 0x60);
      auVar3 = *(undefined1 (*) [16])(lVar5 + 0x70);
      auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
      auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
      iVar6 = movmskpd((int)lVar7,auVar18);
      auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_));
      auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_));
      uVar8 = movmskpd(in_R10D,auVar23);
      dVar9 = DAT_14c8464c0;
      dVar11 = DAT_14c8464c8;
      dVar13 = DAT_14c846498;
      dVar15 = DAT_14c846480;
      dVar19 = DAT_14c8464d0;
      dVar17 = DAT_14c846488;
      dVar16 = DAT_14c846490;
      dVar12 = DAT_14c8464a0;
      dVar14 = DAT_14c8464a8;
      dVar10 = DAT_14c8464b0;
      if ((uVar8 & 0x3fffffff) != 0 || iVar6 != 0) {
        auVar23 = divpd(_DAT_149934d80,auVar2);
        auVar18 = divpd(ZEXT816(0x3ff0000000000000),auVar3);
        dVar9 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar23._0_8_);
        dVar11 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar23._8_8_);
        dVar19 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar18._0_8_);
        dVar15 = -*(double *)(lVar5 + 0x20);
        dVar17 = -*(double *)(lVar5 + 0x28);
        dVar16 = *(double *)(lVar5 + 0x30) * -1.0;
        dVar13 = *(double *)(lVar5 + 0x38) * 1.0;
        dVar12 = *(double *)(lVar5 + 0x40) * dVar9;
        dVar14 = *(double *)(lVar5 + 0x48) * dVar11;
        dVar21 = *(double *)(lVar5 + 0x50) * dVar19;
        dVar10 = dVar14 * dVar15 - dVar17 * dVar12;
        dVar22 = dVar21 * dVar17 - dVar16 * dVar14;
        dVar20 = dVar12 * dVar16 - dVar15 * dVar21;
        dVar22 = dVar22 + dVar22;
        dVar20 = dVar20 + dVar20;
        dVar10 = dVar10 + dVar10;
        dVar12 = 0.0 - ((dVar10 * dVar17 - dVar20 * dVar16) + dVar13 * dVar22 + dVar12);
        dVar14 = 0.0 - (dVar10 * *(double *)(lVar5 + 0x20) + dVar16 * dVar22 +
                       dVar13 * dVar20 + dVar14);
        dVar10 = 0.0 - (dVar13 * dVar10 + dVar21 + (dVar20 * dVar15 - dVar22 * dVar17));
      }
      dVar9 = *param_4 * dVar9;
      dVar11 = param_4[1] * dVar11;
      dVar19 = param_4[2] * dVar19;
      dVar20 = dVar11 * dVar15 - dVar17 * dVar9;
      dVar21 = dVar19 * dVar17 - dVar16 * dVar11;
      dVar22 = dVar9 * dVar16 - dVar15 * dVar19;
      dVar21 = dVar21 + dVar21;
      dVar22 = dVar22 + dVar22;
      dVar20 = dVar20 + dVar20;
      dVar12 = (dVar20 * dVar17 - dVar22 * dVar16) + dVar13 * dVar21 + dVar9 + dVar12;
      dVar14 = (dVar16 * dVar21 - dVar15 * dVar20) + dVar13 * dVar22 + dVar11 + dVar14;
      dVar10 = dVar20 * dVar13 + dVar19 + (dVar22 * dVar15 - dVar21 * dVar17) + dVar10;
      fVar1 = *(float *)(lVar4 + 0x140);
      if (fVar1 <= 1e-08) {
        *param_2 = dVar12;
        param_2[1] = dVar14;
      }
      else {
        dVar16 = 1.0 / (double)fVar1;
        dVar10 = dVar10 * dVar16;
        *param_2 = dVar16 * dVar12;
        param_2[1] = dVar14 * dVar16;
      }
      param_2[2] = dVar10;
      return;
    }
  }
  param_2[2] = param_4[2];
  dVar16 = param_4[1];
  *param_2 = *param_4;
  param_2[1] = dVar16;
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
  return;
}



// FUNCTION 148d6da3e FUN_148d6da3e body=109 status=ok
// SIG undefined FUN_148d6da3e(void)

void FUN_148d6da3e(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  param_1 = param_1 + 1000;
  uVar2 = FUN_14479d2ce(param_1);
  plVar3 = (longlong *)FUN_14041a931(uVar2);
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar4 = FUN_14479d2ce(param_1);
    uVar2 = *(undefined8 *)(lVar4 + 0x398);
  }
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d6da9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,uVar2,1,param_2);
    return;
  }
  return;
}



// FUNCTION 148d6daac FUN_148d6daac body=221 status=ok
// SIG undefined FUN_148d6daac(void)

void FUN_148d6daac(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1 = param_1 + 1000;
  uVar2 = FUN_14479d2ce(param_1);
  plVar3 = (longlong *)FUN_14041a931(uVar2);
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar4 = FUN_14479d2ce(param_1);
    uVar2 = *(undefined8 *)(lVar4 + 0x398);
  }
  if (plVar3 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_14882dce4(uVar5,&local_40,uVar2,1);
    lVar4 = local_40;
    if ((longlong)local_38 != 0) {
      lVar6 = 0;
      do {
        (**(code **)(*plVar3 + 0x20))(plVar3,uVar2,1,*(undefined4 *)(lVar4 + lVar6));
        lVar6 = lVar6 + 4;
      } while ((longlong)local_38 * 4 != lVar6);
    }
    if (local_40 != 0) {
      FUN_1400020a8(local_40);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d6db8a FUN_148d6db8a body=221 status=ok
// SIG undefined FUN_148d6db8a(void)

void FUN_148d6db8a(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1 = param_1 + 1000;
  uVar2 = FUN_14479d2ce(param_1);
  plVar3 = (longlong *)FUN_14041a931(uVar2);
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar4 = FUN_14479d2ce(param_1);
    uVar2 = *(undefined8 *)(lVar4 + 0x398);
  }
  if (plVar3 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_14882dce4(uVar5,&local_40,uVar2,2);
    lVar4 = local_40;
    if ((longlong)local_38 != 0) {
      lVar6 = 0;
      do {
        (**(code **)(*plVar3 + 0x20))(plVar3,uVar2,2,*(undefined4 *)(lVar4 + lVar6));
        lVar6 = lVar6 + 4;
      } while ((longlong)local_38 * 4 != lVar6);
    }
    if (local_40 != 0) {
      FUN_1400020a8(local_40);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d6dc68 FUN_148d6dc68 body=270 status=ok
// SIG undefined FUN_148d6dc68(void)

void FUN_148d6dc68(longlong param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x788) == '\x01') {
    if (*(char *)(param_1 + 0x784) == '\x01') {
      uVar3 = 0xffffffff;
      if (param_2 <= 0.0001) {
        uVar3 = (uint)(param_2 < -0.0001);
      }
      iVar6 = *(int *)(param_1 + 0x780 + (ulonglong)*(byte *)(param_1 + 0x794) * 0x10);
      iVar5 = 0;
      if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x818))) {
        iVar5 = *(int *)(param_1 + 0x818) + -1;
        iVar1 = iVar6 + uVar3;
        if (iVar5 <= (int)(iVar6 + uVar3)) {
          iVar1 = iVar5;
        }
        iVar5 = 0;
        if (0 < iVar1) {
          iVar5 = iVar1;
        }
      }
      *(int *)(param_1 + 0x790) = iVar5;
      *(bool *)(param_1 + 0x794) = iVar5 != *(int *)(param_1 + 0x780);
    }
  }
  else if ((*(char *)(param_1 + 0x808) == '\0') &&
          (uVar3 = *(uint *)(param_1 + 0x818), 1 < (int)uVar3)) {
    uVar2 = FUN_148d6dd76(param_1);
    iVar6 = 0;
    if (uVar2 < uVar3 && -1 < (int)uVar2) {
      uVar4 = 0xffffffff;
      if (param_2 <= 0.0001) {
        uVar4 = (uint)(param_2 < -0.0001);
      }
      iVar5 = uVar2 + uVar4;
      if ((int)(uVar3 - 1) <= (int)(uVar2 + uVar4)) {
        iVar5 = uVar3 - 1;
      }
      iVar6 = 0;
      if (0 < iVar5) {
        iVar6 = iVar5;
      }
    }
    FUN_148d6de5e(param_1,uVar2,iVar6);
    return;
  }
  return;
}



// FUNCTION 148d6dd76 FUN_148d6dd76 body=231 status=ok
// SIG undefined FUN_148d6dd76(void)

ulonglong FUN_148d6dd76(longlong param_1)

{
  longlong lVar1;
  double *pdVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x388) == '\x01') {
      if ((longlong)*(int *)(param_1 + 0x818) < 1) {
        return 0;
      }
      fVar5 = 3.4028235e+38;
      uVar4 = 0;
      uVar3 = 0;
      do {
        fVar6 = ABS(*(float *)(*(longlong *)(param_1 + 0x810) + uVar4 * 4) -
                    *(float *)(lVar1 + 0x390));
        if (fVar6 < fVar5) {
          uVar3 = uVar4 & 0xffffffff;
          fVar5 = fVar6;
        }
        uVar4 = uVar4 + 1;
      } while ((longlong)*(int *)(param_1 + 0x818) != uVar4);
      return uVar3;
    }
    if (*(char *)(lVar1 + 0x388) != '\0') {
      return 0xffffffff;
    }
  }
  pdVar2 = (double *)&DAT_14c8464f0;
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    pdVar2 = (double *)(*(longlong *)(param_1 + 0x4e0) + 0x1a8);
  }
  if ((longlong)*(int *)(param_1 + 0x818) < 1) {
    return 0;
  }
  uVar4 = 0;
  fVar5 = 3.4028235e+38;
  uVar3 = 0;
  do {
    fVar6 = ABS(*(float *)(*(longlong *)(param_1 + 0x810) + uVar4 * 4) - (float)*pdVar2);
    if (fVar6 < fVar5) {
      uVar3 = uVar4 & 0xffffffff;
      fVar5 = fVar6;
    }
    uVar4 = uVar4 + 1;
  } while ((longlong)*(int *)(param_1 + 0x818) != uVar4);
  return uVar3;
}



// FUNCTION 148d6de5e FUN_148d6de5e body=361 status=ok
// SIG undefined FUN_148d6de5e(void)

void FUN_148d6de5e(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_2 != param_3) && (-1 < (int)param_3)) && ((int)param_3 < *(int *)(param_1 + 0x818))) {
    *(undefined8 *)(param_1 + 0x770) = 0;
    *(undefined8 *)(param_1 + 0x778) = 0;
    *(undefined8 *)(param_1 + 0x760) = 0;
    *(undefined8 *)(param_1 + 0x768) = 0;
    *(undefined8 *)(param_1 + 0x750) = 0;
    *(undefined8 *)(param_1 + 0x758) = 0;
    *(undefined8 *)(param_1 + 0x780) = 0;
    uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *(ulonglong *)(param_1 + 0x738) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    *(undefined8 *)(param_1 + 0x740) = uVar2;
    *(undefined8 *)(param_1 + 0x748) = DAT_14c8464f0;
    uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *(ulonglong *)(param_1 + 0x758) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    *(undefined8 *)(param_1 + 0x760) = uVar2;
    *(undefined8 *)(param_1 + 0x768) = DAT_14c8464f0;
    *(undefined1 *)(param_1 + 0x788) = 1;
    lVar1 = *(longlong *)(param_1 + 0x4e0);
    if (lVar1 == 0) {
      local_38 = DAT_14c8464f0;
      local_48 = (undefined4)DAT_14c8464e0;
      uStack_44 = DAT_14c8464e0._4_4_;
      uStack_40 = (undefined4)DAT_14c8464e8;
      uStack_3c = DAT_14c8464e8._4_4_;
    }
    else {
      local_38 = *(undefined8 *)(lVar1 + 0x1a8);
      local_48 = *(undefined4 *)(lVar1 + 0x198);
      uStack_44 = *(undefined4 *)(lVar1 + 0x19c);
      uStack_40 = *(undefined4 *)(lVar1 + 0x1a0);
      uStack_3c = *(undefined4 *)(lVar1 + 0x1a4);
    }
    *(undefined8 *)(param_1 + 0x748) = local_38;
    *(ulonglong *)(param_1 + 0x738) = CONCAT44(uStack_44,local_48);
    *(ulonglong *)(param_1 + 0x740) = CONCAT44(uStack_3c,uStack_40);
    uVar3 = 0;
    if (*(longlong *)(param_1 + 0x3c0) != 0) {
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x3c0) + 0x390);
    }
    *(undefined4 *)(param_1 + 0x750) = uVar3;
    FUN_148d6e008(param_1,&local_48,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x810) + (ulonglong)param_3 * 4));
    *(undefined4 *)(param_1 + 0x768) = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x76c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x770) = uStack_30;
    *(undefined4 *)(param_1 + 0x774) = uStack_2c;
    *(undefined4 *)(param_1 + 0x758) = local_48;
    *(undefined4 *)(param_1 + 0x75c) = uStack_44;
    *(undefined4 *)(param_1 + 0x760) = uStack_40;
    *(undefined4 *)(param_1 + 0x764) = uStack_3c;
    *(uint *)(param_1 + 0x780) = param_3;
    *(undefined1 *)(param_1 + 0x784) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6dfc8 FUN_148d6dfc8 body=63 status=ok
// SIG undefined FUN_148d6dfc8(void)

void FUN_148d6dfc8(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x794) == '\x01') {
    uVar1 = FUN_148d6dd76();
    FUN_148d6de5e(param_1,uVar1,*(undefined4 *)(param_1 + 0x790));
    if (*(char *)(param_1 + 0x794) == '\x01') {
      *(undefined1 *)(param_1 + 0x794) = 0;
    }
  }
  return;
}



// FUNCTION 148d6e008 FUN_148d6e008 body=978 status=ok
// SIG undefined FUN_148d6e008(void)

double * FUN_148d6e008(longlong param_1,double *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  longlong lVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_168 [32];
  double local_148;
  double local_140;
  double local_130;
  double local_128;
  double local_110;
  double local_108;
  double local_100;
  char local_f8;
  byte local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  char local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1413ecb80(param_1,&local_148);
  fVar1 = *(float *)(param_1 + 0x658);
  fVar2 = *(float *)(param_1 + 0x660);
  if (*(longlong *)(param_1 + 0x3c0) == 0) {
    local_a8 = '\0';
    lVar11 = 0;
  }
  else {
    FUN_1489a9334(*(longlong *)(param_1 + 0x3c0),&local_d8,param_1 + 0x728);
    lVar11 = *(longlong *)(param_1 + 0x3c0);
  }
  lVar7 = *(longlong *)(param_1 + 0x4e0);
  bVar12 = lVar7 != 0;
  pdVar9 = &DAT_14c8464e0;
  if (bVar12) {
    pdVar9 = (double *)(lVar7 + 0x198);
  }
  pdVar10 = &DAT_14c8464e8;
  if (bVar12) {
    pdVar10 = (double *)(lVar7 + 0x1a0);
  }
  pdVar8 = &DAT_14c8464f0;
  if (bVar12) {
    pdVar8 = (double *)(lVar7 + 0x1a8);
  }
  dVar4 = *pdVar8;
  dVar5 = *pdVar10;
  dVar6 = *pdVar9;
  *(undefined4 *)(param_2 + 3) = 0;
  *param_2 = dVar6;
  param_2[1] = dVar5;
  param_2[2] = dVar4;
  if (lVar11 != 0) {
    uVar3 = *(undefined4 *)(lVar11 + 0x390);
    *(undefined4 *)(param_2 + 3) = uVar3;
    dVar13 = dVar4;
    if (*(char *)(lVar11 + 0x388) == '\x01') {
      *(float *)(param_2 + 3) = param_3;
      *(float *)(lVar11 + 0x390) = param_3;
      if (*(longlong *)(param_1 + 0x3c0) == 0) {
        local_e0 = 0;
      }
      else {
        FUN_1489a9334(*(longlong *)(param_1 + 0x3c0),&local_110,param_1 + 0x728);
      }
      if ((local_a8 == '\x01') && ((local_e0 & 1) != 0)) {
        dVar13 = (local_c8 - local_100) + dVar4;
        *param_2 = (local_d8 - local_110) + dVar6;
        param_2[1] = (local_d0 - local_108) + dVar5;
        param_2[2] = dVar13;
      }
      *(undefined4 *)(lVar11 + 0x390) = uVar3;
      goto LAB_148d6e290;
    }
    if (*(char *)(lVar11 + 0x388) != '\0') goto LAB_148d6e290;
  }
  FUN_148d6fcf0(&local_110,&local_d8);
  dVar13 = DAT_14c8462d0;
  dVar14 = DAT_14c8462c8;
  dVar15 = DAT_14c8462c0;
  if (local_f8 == '\x01') {
    local_100 = dVar4 - local_100;
    local_108 = dVar5 - local_108;
    local_110 = dVar6 - local_110;
    dVar16 = local_100 * local_100 + local_110 * local_110 + local_108 * local_108;
    if (((dVar16 != 1.0) ||
        (dVar13 = local_100, dVar14 = local_108, dVar15 = local_110, NAN(dVar16))) &&
       (dVar13 = DAT_14c8464f0, dVar14 = DAT_14c8464e8, dVar15 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar16)) {
      dVar15 = 1.0 / SQRT(dVar16);
      dVar13 = local_100 * dVar15;
      dVar14 = local_108 * dVar15;
      dVar15 = local_110 * dVar15;
    }
  }
  dVar16 = (double)(float)(((double)param_3 - dVar4) / dVar13);
  dVar13 = dVar13 * dVar16 + dVar4;
  if ((double)fVar2 <= dVar13) {
    dVar13 = (double)fVar2;
  }
  dVar14 = dVar14 * dVar16 + dVar5;
  dVar15 = dVar15 * dVar16 + dVar6;
  if (local_128 <= dVar14) {
    dVar14 = local_128;
  }
  if (dVar14 <= local_140) {
    dVar14 = local_140;
  }
  if (local_130 <= dVar15) {
    dVar15 = local_130;
  }
  if (dVar15 <= local_148) {
    dVar15 = local_148;
  }
  if (dVar13 <= (double)fVar1) {
    dVar13 = (double)fVar1;
  }
  *param_2 = dVar15;
  param_2[1] = dVar14;
  param_2[2] = dVar13;
LAB_148d6e290:
  if (ABS(dVar4 - dVar13) < 9.999999747378752e-05) {
    *param_2 = dVar6;
    param_2[1] = dVar5;
  }
  if ((local_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d6e3dc FUN_148d6e3dc body=339 status=ok
// SIG undefined FUN_148d6e3dc(void)

undefined8 FUN_148d6e3dc(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(char *)(param_1 + 0x788) == '\0') && (*(char *)(param_1 + 0x808) == '\0')) &&
      (*(char *)(param_1 + 0x878) == '\x01')) && (*(char *)(param_1 + 0x858) == '\x01')) {
    FUN_145cf5fc0(param_1 + 0xb88,param_1);
    *(undefined8 *)(param_1 + 0x7a8) = 0;
    *(undefined8 *)(param_1 + 0x7b0) = 0;
    *(undefined8 *)(param_1 + 0x7b8) = 0;
    uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *(ulonglong *)(param_1 + 0x7c0) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    *(undefined8 *)(param_1 + 0x7c8) = uVar2;
    *(undefined8 *)(param_1 + 2000) = DAT_14c8464f0;
    *(undefined1 *)(param_1 + 0x808) = 1;
    *(undefined8 *)(param_1 + 0x798) = *(undefined8 *)(param_1 + 0x728);
    *(undefined8 *)(param_1 + 0x7a0) = *(undefined8 *)(param_1 + 0x730);
    *(undefined8 *)(param_1 + 0x7d8) = *(undefined8 *)(param_1 + 0x828);
    *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(param_1 + 0x830);
    *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_1 + 0x838);
    *(undefined4 *)(param_1 + 0x7ec) = *(undefined4 *)(param_1 + 0x83c);
    *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_1 + 0x840);
    *(undefined4 *)(param_1 + 0x7f4) = *(undefined4 *)(param_1 + 0x844);
    *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(param_1 + 0x848);
    *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(param_1 + 0x84c);
    *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_1 + 0x850);
    *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(param_1 + 0x854);
    *(undefined8 *)(param_1 + 0x7a8) = *(undefined8 *)(param_1 + 0x860);
    *(undefined8 *)(param_1 + 0x7b0) = *(undefined8 *)(param_1 + 0x868);
    *(undefined8 *)(param_1 + 0x7b8) = *(undefined8 *)(param_1 + 0x870);
    lVar1 = *(longlong *)(param_1 + 0x4e0);
    if (lVar1 == 0) {
      local_28 = DAT_14c8464f0;
      local_38 = (undefined4)DAT_14c8464e0;
      uStack_34 = DAT_14c8464e0._4_4_;
      uStack_30 = (undefined4)DAT_14c8464e8;
      uStack_2c = DAT_14c8464e8._4_4_;
    }
    else {
      local_28 = *(undefined8 *)(lVar1 + 0x1a8);
      local_38 = *(undefined4 *)(lVar1 + 0x198);
      uStack_34 = *(undefined4 *)(lVar1 + 0x19c);
      uStack_30 = *(undefined4 *)(lVar1 + 0x1a0);
      uStack_2c = *(undefined4 *)(lVar1 + 0x1a4);
    }
    *(undefined8 *)(param_1 + 2000) = local_28;
    *(undefined4 *)(param_1 + 0x7c0) = local_38;
    *(undefined4 *)(param_1 + 0x7c4) = uStack_34;
    *(undefined4 *)(param_1 + 0x7c8) = uStack_30;
    *(undefined4 *)(param_1 + 0x7cc) = uStack_2c;
    uVar2 = CONCAT71((int7)((ulonglong)(param_1 + 0x7c0) >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6e530 FUN_148d6e530 body=89 status=ok
// SIG undefined FUN_148d6e530(void)

void FUN_148d6e530(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x9f8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x9f0);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar4);
      if (lVar3 != 0) {
        FUN_148d6e58a(lVar3,param_2,param_3);
      }
      lVar4 = lVar4 + 0x80;
    } while ((longlong)iVar1 * 0x80 != lVar4);
  }
  return;
}



// FUNCTION 148d6e58a FUN_148d6e58a body=172 status=ok
// SIG undefined FUN_148d6e58a(void)

void FUN_148d6e58a(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar1 = *param_2;
    lVar5 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xb8);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xc0) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x78);
      iVar2 = iVar4;
      do {
        if (*(longlong *)(lVar5 + (longlong)iVar2 * 0x180) == lVar1) goto LAB_148d6e611;
        iVar2 = *(int *)((longlong)iVar2 * 0x180 + lVar5 + 0x170);
      } while (iVar2 != -1);
    }
  }
  return;
  while (iVar4 = *(int *)(lVar3 + 0x170), iVar4 != -1) {
LAB_148d6e611:
    lVar3 = lVar5 + (longlong)iVar4 * 0x180;
    if (*(longlong *)(lVar5 + (longlong)iVar4 * 0x180) == lVar1) goto LAB_148d6e62a;
  }
  lVar3 = 0;
LAB_148d6e62a:
  FUN_148d705c0(lVar3 + 0x10,param_3);
  return;
}



// FUNCTION 148d6e636 FUN_148d6e636 body=514 status=ok
// SIG undefined FUN_148d6e636(void)

void FUN_148d6e636(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x4e0);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (*(char *)(param_1 + 0x808) == '\x01') {
    *(undefined1 *)(param_1 + 0x808) = 0;
  }
  *(undefined8 *)(param_1 + 0x770) = 0;
  *(undefined8 *)(param_1 + 0x778) = 0;
  *(undefined8 *)(param_1 + 0x760) = 0;
  *(undefined8 *)(param_1 + 0x768) = 0;
  *(undefined8 *)(param_1 + 0x750) = 0;
  *(undefined8 *)(param_1 + 0x758) = 0;
  *(undefined8 *)(param_1 + 0x780) = 0;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x738) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x740) = uVar4;
  *(undefined8 *)(param_1 + 0x748) = DAT_14c8464f0;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x758) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x760) = uVar4;
  *(undefined8 *)(param_1 + 0x768) = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x788) = 1;
  if (lVar3 == 0) {
    local_28 = DAT_14c8464f0;
    local_38 = (undefined4)DAT_14c8464e0;
    uStack_34 = DAT_14c8464e0._4_4_;
    uStack_30 = (undefined4)DAT_14c8464e8;
    uStack_2c = DAT_14c8464e8._4_4_;
  }
  else {
    local_28 = *(undefined8 *)(lVar3 + 0x1a8);
    local_38 = *(undefined4 *)(lVar3 + 0x198);
    uStack_34 = *(undefined4 *)(lVar3 + 0x19c);
    uStack_30 = *(undefined4 *)(lVar3 + 0x1a0);
    uStack_2c = *(undefined4 *)(lVar3 + 0x1a4);
  }
  *(undefined8 *)(param_1 + 0x748) = local_28;
  *(undefined8 *)(param_1 + 0x738) = CONCAT44(uStack_34,local_38);
  *(ulonglong *)(param_1 + 0x740) = CONCAT44(uStack_2c,uStack_30);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x3c0) + 0x390);
  }
  *(undefined4 *)(param_1 + 0x750) = uVar5;
  *(undefined8 *)(param_1 + 0x768) = *(undefined8 *)(param_1 + 0x748);
  *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_1 + 0x750);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_1 + 0x738);
  *(undefined4 *)(param_1 + 0x75c) = *(undefined4 *)(param_1 + 0x73c);
  *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(param_1 + 0x740);
  *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_1 + 0x744);
  *(undefined8 *)(param_1 + 0x758) = uVar1;
  *(undefined8 *)(param_1 + 0x760) = uVar2;
  *(undefined1 *)(param_1 + 0x77c) = 1;
  FUN_145cf6358(param_1);
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x3c0) + 0x390) = *(undefined4 *)(param_1 + 0x770);
  }
  FUN_14596238c(param_1,(undefined4 *)(param_1 + 0x758));
  if (*(char *)(param_1 + 0x788) == '\x01') {
    if (*(char *)(param_1 + 0x784) == '\x01') {
      *(undefined1 *)(param_1 + 0x784) = 0;
    }
    *(undefined1 *)(param_1 + 0x788) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x4e0);
  if (lVar3 != 0) {
    *(double *)(lVar3 + 800) = *(double *)(lVar3 + 0x260) + *(double *)(lVar3 + 0x2c8);
    *(double *)(lVar3 + 0x328) = *(double *)(lVar3 + 0x268) + *(double *)(lVar3 + 0x2d0);
    *(double *)(lVar3 + 0x330) = *(double *)(lVar3 + 0x270) + *(double *)(lVar3 + 0x2d8);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_145cf5f30(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6e83a FUN_148d6e83a body=648 status=ok
// SIG undefined FUN_148d6e83a(void)

void FUN_148d6e83a(longlong param_1)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  double dStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 local_68;
  double dStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)*(int *)(param_1 + 0x9f8) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x9f0);
    lVar4 = (longlong)*(int *)(param_1 + 0x9f8) * 0x80 + lVar10;
    local_a8 = 0;
    local_b0 = param_1;
    local_a0 = lVar4;
    do {
      lVar5 = *(longlong *)(lVar10 + 8);
      if (lVar5 != 0) {
        dVar1 = (double)(lVar5 + 0x88);
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        dStack_60 = dVar1;
        if (*(int *)(lVar5 + 0xa0) == 0) {
          iVar9 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar9 = *(int *)(lVar5 + 0xa0);
        }
        plVar8 = (longlong *)(lVar5 + 0x78);
        uStack_78 = CONCAT44(uStack_4c,uStack_50);
        local_80 = local_58;
        uVar2 = local_80;
        uStack_90 = (undefined4)local_68;
        uStack_8c = local_68._4_4_;
        dStack_88 = dStack_60;
        local_80._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar3 = local_80._4_4_;
        local_98 = plVar8;
        if ((local_80._4_4_ != iVar9) || (lVar4 = local_a0, local_80 = uVar2, dStack_60 != dVar1)) {
          do {
            local_80 = uVar2;
            lVar4 = *local_98;
            lVar5 = FUN_14479d2ce((longlong)iVar3 * 0x180 + lVar4 + 0x18);
            if (lVar5 != 0) {
              lVar6 = FUN_1414ba9b4();
              if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
                 (*(char *)(lVar5 + 0xd0) == '\x01')) {
                local_a8 = *(longlong *)(lVar4 + (longlong)iVar3 * 0x180);
              }
            }
            local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
            FUN_1449c0562(&uStack_90);
            lVar4 = local_a0;
            iVar3 = local_80._4_4_;
            uVar2 = local_80;
          } while (local_98 != plVar8 || (dStack_88 != dVar1 || local_80._4_4_ != iVar9));
        }
      }
      lVar5 = local_b0;
      lVar10 = lVar10 + 0x80;
    } while (lVar10 != lVar4);
    local_70 = local_a8;
    if (local_a8 == 0) {
      if (0 < *(int *)(local_b0 + 0x9f8)) {
        *(undefined1 *)(local_b0 + 0x920) = 0;
        puVar7 = &DAT_14c8463f0;
        if (**(longlong **)(local_b0 + 0x9f0) != 0) {
          puVar7 = (undefined8 *)(**(longlong **)(local_b0 + 0x9f0) + 0x28);
        }
        local_68 = *puVar7;
        dStack_60 = (double)puVar7[1];
        FUN_148d6e636(local_b0);
        if (*(char *)(lVar5 + 0x668) == '\x01') {
          lVar10 = *(longlong *)(lVar5 + 0x4e0);
          uVar11 = (undefined4)DAT_14c8464e0;
          uVar12 = DAT_14c8464e0._4_4_;
          uStack_90 = (undefined4)DAT_14c8464e8;
          uStack_8c = DAT_14c8464e8._4_4_;
          if (lVar10 != 0) {
            uVar11 = *(undefined4 *)(lVar10 + 0x198);
            uVar12 = *(undefined4 *)(lVar10 + 0x19c);
            uStack_90 = *(undefined4 *)(lVar10 + 0x1a0);
            uStack_8c = *(uint *)(lVar10 + 0x1a4);
          }
          local_98 = (longlong *)CONCAT44(uVar12,uVar11);
          dStack_88 = (double)*(float *)(lVar5 + 0x66c);
          FUN_14596238c(lVar5);
        }
      }
    }
    else {
      *(undefined1 *)(local_b0 + 0x920) = 0;
      FUN_145cf5c1e(local_b0,&local_70,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d6eac4 FUN_148d6eac4 body=274 status=ok
// SIG undefined FUN_148d6eac4(void)

void FUN_148d6eac4(longlong param_1,longlong param_2,undefined4 param_3)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    lVar6 = (longlong)*(int *)(param_1 + 0x18) << 3;
    do {
      lVar4 = FUN_145aaaf18(param_2,puVar5);
      if ((lVar4 != 0) &&
         (cVar2 = FUN_148d70264(lVar4,param_2,param_3), uVar1 = uStack_50, cVar2 == '\0')) {
        lVar4 = (longlong)(int)uStack_50;
        uVar3 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
        if (uStack_50._4_4_ < uVar3) {
          FUN_140279b48(&local_58,uVar1 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar4 * 8) = *puVar5;
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
    if ((longlong)(int)uStack_50 != 0) {
      lVar4 = (longlong)(int)uStack_50 << 3;
      lVar6 = local_58;
      do {
        FUN_140e8e0b8(param_2 + 0xb98,lVar6,1);
        lVar6 = lVar6 + 8;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d6ebd8 FUN_148d6ebd8 body=201 status=ok
// SIG undefined FUN_148d6ebd8(void)

undefined8 * FUN_148d6ebd8(longlong param_1,undefined8 *param_2,float param_3,float param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  double *pdVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x388) == '\x01') {
      fVar4 = *(float *)(lVar1 + 0x390);
      fVar5 = param_4 * *(float *)(param_1 + 0x670) * param_3 * fVar4 + fVar4;
      if (*(float *)(param_1 + 0x680) <= fVar5) {
        fVar5 = *(float *)(param_1 + 0x680);
      }
      if (fVar5 <= *(float *)(param_1 + 0x678)) {
        fVar5 = *(float *)(param_1 + 0x678);
      }
      goto LAB_148d6ec66;
    }
    if (*(char *)(lVar1 + 0x388) != '\0') {
      param_2[3] = 0;
      uVar2 = DAT_14c8464e8;
      *param_2 = DAT_14c8464e0;
      param_2[1] = uVar2;
      param_2[2] = DAT_14c8464f0;
      return param_2;
    }
  }
  pdVar3 = (double *)&DAT_14c8464f0;
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    pdVar3 = (double *)(*(longlong *)(param_1 + 0x4e0) + 0x1a8);
  }
  fVar4 = (float)*pdVar3;
  fVar5 = param_4 * *(float *)(param_1 + 0x650) * param_3 * fVar4 + fVar4;
  if (*(float *)(param_1 + 0x660) <= fVar5) {
    fVar5 = *(float *)(param_1 + 0x660);
  }
  if (fVar5 <= *(float *)(param_1 + 0x658)) {
    fVar5 = *(float *)(param_1 + 0x658);
  }
LAB_148d6ec66:
  FUN_148d6e008(fVar4,param_2,fVar5);
  return param_2;
}



// FUNCTION 148d6eca2 FUN_148d6eca2 body=303 status=ok
// SIG undefined FUN_148d6eca2(void)

void FUN_148d6eca2(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x78);
  lVar2 = param_1 + 0x88;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar3 = 0;
  local_58 = lVar2;
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0xa0);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (local_58 != lVar2)) {
    do {
      do {
        FUN_140f076f6(*local_88 + (longlong)iStack_6c * 0x180 + 0x10,param_2);
        local_70 = local_70 & ~local_80._4_4_;
        FUN_1449c0562(&local_80);
      } while (iStack_6c != iVar3);
    } while ((local_78 != lVar2) || (local_88 != plVar1));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d6edd2 FUN_148d6edd2 body=110 status=ok
// SIG undefined FUN_148d6edd2(void)

void FUN_148d6edd2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148d74a58(param_1,iVar1);
    }
    FUN_148d74a05((longlong)iVar1 * 0x50 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148d74aec(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148d6ee42 FUN_148d6ee42 body=99 status=ok
// SIG undefined FUN_148d6ee42(void)

void FUN_148d6ee42(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((char)param_1[4] == '\x01') {
    lVar2 = *param_1;
    iVar1 = (int)param_1[1];
    lVar3 = (longlong)iVar1;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar4) == *param_2) {
          return;
        }
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 - lVar4 != 0);
    }
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_140279b48(param_1,iVar1);
      lVar2 = *param_1;
    }
    *(longlong *)(lVar2 + lVar3 * 8) = *param_2;
  }
  return;
}



// FUNCTION 148d6eea6 FUN_148d6eea6 body=3657 status=ok
// SIG undefined FUN_148d6eea6(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148d6eea6(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 *puVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  double *pdVar30;
  double *pdVar31;
  int iVar32;
  undefined8 *puVar34;
  int iVar35;
  longlong lVar36;
  ulonglong uVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  double *pdVar40;
  int iVar41;
  undefined8 *puVar42;
  double *pdVar43;
  int iVar44;
  undefined8 *puVar45;
  longlong lVar46;
  longlong lVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  bool bVar50;
  float fVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  undefined1 auStack_478 [32];
  longlong local_458;
  longlong local_450;
  double *local_448;
  longlong local_440;
  double local_438;
  undefined8 uStack_430;
  longlong local_428;
  ulonglong uStack_420;
  double local_418;
  double local_410;
  double local_408 [2];
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  uint uVar33;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_478;
  uVar25 = *(uint *)(param_1 + 1);
  if (1 < (int)uVar25) {
    uVar33 = 9;
    if (9 < uVar25) {
      uVar33 = uVar25;
    }
    iVar32 = uVar33 - 1;
    *(float *)((longlong)param_1 + 0x54) =
         (*(float *)(param_2 + 0x504) / *(float *)(param_2 + 0x500)) * *(float *)(param_2 + 0x57c) *
         *(float *)(param_2 + 0x820);
    fVar51 = *(float *)(param_2 + 0x504);
    fVar4 = *(float *)(param_2 + 0x500);
    fVar5 = *(float *)(param_2 + 0x584);
    fVar6 = *(float *)(param_2 + 0x820);
    local_428 = 0;
    uStack_420 = (ulonglong)uVar25;
    FUN_14419d942(&local_428);
    FUN_14419d90c(local_428,uVar25);
    if (0 < (int)uStack_420) {
      lVar36 = 0;
      do {
        lVar46 = lVar36 * 0x38;
        *(undefined8 *)(local_428 + lVar46) = *(undefined8 *)(*param_1 + lVar36 * 8);
        lVar26 = FUN_145aaaf18(param_2,lVar36 * 8 + *param_1);
        if (lVar26 != 0) {
          FUN_1413d4d42(lVar26,&local_418,param_2);
          puVar38 = (undefined8 *)(local_428 + 8 + lVar46);
          *puVar38 = local_3f8;
          puVar38[1] = uStack_3f0;
          *(undefined8 *)(local_428 + 0x18 + lVar46) = local_3e8;
          dVar52 = (double)param_1[8];
          *(double *)(local_428 + 0x20 + lVar46) =
               *(double *)(local_428 + 8 + lVar46) - (double)param_1[7];
          *(double *)(local_428 + 0x28 + lVar46) = *(double *)(local_428 + 0x10 + lVar46) - dVar52;
        }
        lVar36 = lVar36 + 1;
      } while (lVar36 < (int)uStack_420);
    }
    local_438 = 0.0;
    uStack_430 = 0;
    local_450 = param_2;
    FUN_14419daa6(&local_438,iVar32);
    iVar35 = 0;
    do {
      uVar37 = uStack_430;
      lVar36 = (longlong)(int)uStack_430;
      uVar25 = (int)uStack_430 + 1;
      uStack_430 = CONCAT44(uStack_430._4_4_,uVar25);
      if (uStack_430._4_4_ < uVar25) {
        FUN_14419dc08(&local_438,uVar37 & 0xffffffff);
      }
      lVar36 = (longlong)local_438 + lVar36 * 0x28;
      FUN_14419dbe7(lVar36);
      uStack_110 = (double)((float)iVar35 * (360.0 / (float)iVar32) + -90.0);
      local_118 = 0;
      local_108 = 0;
      FUN_144a76660(&local_118,&local_418);
      dVar52 = (double)*(float *)((longlong)param_1 + 0x54);
      *(double *)(lVar36 + 8) = dVar52 * local_418;
      *(double *)(lVar36 + 0x10) = local_410 * dVar52;
      *(double *)(lVar36 + 0x18) = local_408[0] * dVar52;
      iVar35 = iVar35 + 1;
    } while (iVar32 != iVar35);
    uVar37 = uStack_420 & 0xffffffff;
    if (0 < (int)uStack_420) {
      dVar52 = (double)((fVar51 / fVar4) * fVar5 * fVar6);
      lVar36 = 0;
LAB_148d6f1fc:
      lVar26 = local_428;
      lVar47 = lVar36 * 0x38;
      plVar2 = (longlong *)(local_428 + lVar47);
      lVar46 = FUN_145aaaf18(local_450);
      uVar1 = uStack_430;
      dVar23 = local_438;
      dVar22 = DAT_14c8464f0;
      dVar21 = DAT_14c8464e8;
      dVar7 = DAT_14c8464e0;
      if (lVar46 != 0) {
        if (lVar36 == 0) {
          *(undefined1 *)(lVar26 + 0x30) = 1;
          dVar7 = (double)param_1[8];
          *(double *)(lVar26 + 0x20) = *(double *)(lVar26 + 8) - (double)param_1[7];
          *(double *)(lVar26 + 0x28) = *(double *)(lVar26 + 0x10) - dVar7;
        }
        else {
          iVar32 = (int)uStack_430;
          local_458 = lVar47;
          if ((int)uVar37 != 0) {
            lVar27 = 0;
            do {
              if (((*(char *)(lVar26 + 0x30 + lVar27) == '\x01') &&
                  (*(longlong *)(lVar26 + lVar27) != *plVar2)) &&
                 (dVar55 = *(double *)(lVar26 + 0x28 + lVar27) - (double)plVar2[5],
                 dVar53 = *(double *)(lVar26 + 0x20 + lVar27) - (double)plVar2[4],
                 SQRT(dVar53 * dVar53 + dVar55 * dVar55) < dVar52)) goto LAB_148d6fa70;
              lVar27 = lVar27 + 0x38;
            } while ((longlong)(int)uVar37 * 0x38 - lVar27 != 0);
          }
          if ((longlong)(int)uStack_430 != 0) {
            lVar27 = 0;
            do {
              dVar55 = *(double *)((longlong)local_438 + 8 + lVar27) - (double)plVar2[4];
              dVar53 = *(double *)((longlong)local_438 + 0x10 + lVar27) - (double)plVar2[5];
              if (SQRT(dVar55 * dVar55 + dVar53 * dVar53) < dVar52) goto LAB_148d6fa70;
              lVar27 = lVar27 + 0x28;
            } while ((longlong)(int)uStack_430 * 0x28 != lVar27);
          }
          *(undefined1 *)(lVar26 + 0x30 + lVar47) = 1;
        }
      }
      goto LAB_148d6f2fa;
    }
LAB_148d6fa46:
    if (local_438 != 0.0) {
      FUN_1400020a8();
    }
    if (local_428 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148d6fa70:
  lVar27 = (longlong)(int)uStack_430;
  lVar26 = lVar26 + lVar47;
  pdVar43 = (double *)(lVar26 + 8);
  pdVar31 = &DAT_14c8464f0;
  pdVar30 = &DAT_14c8464e8;
  pdVar40 = &DAT_14c8464e0;
  if ((int)uStack_430 != 0) {
    dVar55 = *pdVar43 - (double)param_1[7];
    dVar58 = *(double *)(lVar26 + 0x10) - (double)param_1[8];
    dVar12 = *(double *)(lVar26 + 0x18) - (double)param_1[9];
    dVar54 = dVar12 * dVar12 + dVar55 * dVar55 + dVar58 * dVar58;
    dVar53 = 1.0 / SQRT(dVar54);
    dVar56 = DAT_14c8464f0;
    dVar57 = DAT_14c8464e8;
    if (9.99999993922529e-09 <= dVar54) {
      dVar56 = dVar12 * dVar53;
      dVar57 = dVar58 * dVar53;
    }
    bVar50 = NAN(dVar54);
    bVar9 = dVar54 == 1.0;
    if ((bVar9) && (!bVar50)) {
      dVar56 = dVar12;
    }
    if ((bVar9) && (!bVar50)) {
      dVar57 = dVar58;
    }
    dVar53 = (double)(-(ulonglong)(dVar54 < 9.99999993922529e-09) & (ulonglong)DAT_14c8464e0 |
                     ~-(ulonglong)(dVar54 < 9.99999993922529e-09) & (ulonglong)(dVar53 * dVar55));
    if ((bVar9) && (!bVar50)) {
      dVar53 = dVar55;
    }
    lVar26 = 0;
    do {
      dVar55 = *(double *)((longlong)local_438 + 8 + lVar26);
      dVar12 = *(double *)((longlong)local_438 + 0x10 + lVar26);
      dVar54 = *(double *)((longlong)local_438 + 0x18 + lVar26);
      dVar58 = dVar54 * dVar54 + dVar55 * dVar55 + dVar12 * dVar12;
      if (((dVar58 != 1.0) || (dVar13 = dVar55, dVar10 = dVar12, dVar11 = dVar54, NAN(dVar58))) &&
         (dVar13 = dVar7, dVar10 = dVar21, dVar11 = dVar22, 9.99999993922529e-09 <= dVar58)) {
        dVar13 = 1.0 / SQRT(dVar58);
        dVar11 = dVar54 * dVar13;
        dVar10 = dVar12 * dVar13;
        dVar13 = dVar55 * dVar13;
      }
      *(float *)((longlong)local_438 + 0x20 + lVar26) =
           (float)(dVar10 * dVar57 + dVar13 * dVar53 + dVar11 * dVar56);
      lVar26 = lVar26 + 0x28;
    } while (lVar27 * 0x28 != lVar26);
    if (1 < (int)uStack_430) {
      local_448 = pdVar43;
      local_440 = lVar46;
      memset(local_408,0,0x2f0);
      local_418 = dVar23;
      local_410 = (double)((longlong)dVar23 + (uVar1 & 0xffffffff) * 0x28 + -0x28);
      fVar51 = logf((float)iVar32);
      local_408[0] = (double)CONCAT44(local_408[0]._4_4_,(int)(longlong)(fVar51 + fVar51));
      pdVar40 = &local_418;
      do {
        puVar29 = (undefined8 *)*pdVar40;
        puVar34 = (undefined8 *)pdVar40[1];
        iVar32 = *(int *)(pdVar40 + 2);
        iVar35 = (int)((ulonglong)((longlong)puVar34 - (longlong)puVar29) >> 3) * -0x33333333;
        uVar25 = iVar35 + 1;
        puVar38 = puVar34;
        puVar48 = puVar29;
        if (iVar32 != 0) {
LAB_148d6f40b:
          if (8 < (int)uVar25) {
            uVar37 = (ulonglong)(uVar25 >> 1);
            uVar8 = puVar29[uVar37 * 5 + 4];
            uVar14 = puVar29[uVar37 * 5];
            uVar15 = (puVar29 + uVar37 * 5)[1];
            uVar16 = puVar29[uVar37 * 5 + 2];
            uVar17 = (puVar29 + uVar37 * 5 + 2)[1];
            puVar29[uVar37 * 5 + 4] = puVar29[4];
            uVar18 = *puVar29;
            uVar19 = puVar29[1];
            uVar20 = puVar29[3];
            puVar29[uVar37 * 5 + 2] = puVar29[2];
            (puVar29 + uVar37 * 5 + 2)[1] = uVar20;
            puVar29[uVar37 * 5] = uVar18;
            (puVar29 + uVar37 * 5)[1] = uVar19;
            puVar29[4] = uVar8;
            puVar29[2] = uVar16;
            puVar29[3] = uVar17;
            *puVar29 = uVar14;
            puVar29[1] = uVar15;
            puVar42 = puVar38 + 5;
            puVar28 = puVar29;
            do {
              puVar24 = puVar28 + 5;
              puVar39 = puVar28 + 5;
              do {
                puVar28 = puVar39;
                puVar49 = puVar24;
                if (puVar38 < puVar28) break;
                puVar24 = puVar49 + 5;
                puVar39 = puVar28 + 5;
              } while (*(float *)(puVar29 + 4) < *(float *)(puVar28 + 4) ||
                       *(float *)(puVar29 + 4) == *(float *)(puVar28 + 4));
              puVar24 = puVar42 + -10;
              do {
                puVar39 = puVar42;
                puVar45 = puVar24;
                puVar42 = puVar39 + -5;
                if (puVar42 <= puVar29) break;
                puVar24 = puVar45 + -5;
              } while (*(float *)(puVar39 + -1) < *(float *)(puVar29 + 4) ||
                       *(float *)(puVar39 + -1) == *(float *)(puVar29 + 4));
              if (puVar42 < puVar28) goto LAB_148d6f547;
              uVar8 = puVar28[4];
              uVar14 = *puVar28;
              uVar15 = puVar28[1];
              uVar16 = puVar28[2];
              uVar17 = puVar28[3];
              puVar28[4] = puVar39[-1];
              uVar18 = *puVar42;
              uVar19 = puVar39[-4];
              uVar20 = puVar39[-2];
              puVar28[2] = puVar39[-3];
              puVar28[3] = uVar20;
              *puVar28 = uVar18;
              puVar28[1] = uVar19;
              puVar39[-1] = uVar8;
              puVar39[-3] = uVar16;
              puVar39[-2] = uVar17;
              *puVar42 = uVar14;
              puVar39[-4] = uVar15;
            } while( true );
          }
          for (; puVar48 = puVar29, puVar34 = puVar29, puVar29 < puVar38; puVar38 = puVar38 + -5) {
            while (puVar42 = puVar48, puVar34 = puVar34 + 5, puVar34 <= puVar38) {
              puVar48 = puVar34;
              if (*(float *)(puVar42 + 4) < *(float *)(puVar34 + 4) ||
                  *(float *)(puVar42 + 4) == *(float *)(puVar34 + 4)) {
                puVar48 = puVar42;
              }
            }
            local_f8 = puVar42[4];
            local_118 = *puVar42;
            uStack_110 = (double)puVar42[1];
            local_108 = puVar42[2];
            uStack_100 = puVar42[3];
            uVar16 = local_118;
            dVar7 = uStack_110;
            puVar42[4] = puVar38[4];
            uVar8 = *puVar38;
            uVar14 = puVar38[1];
            uVar15 = puVar38[3];
            puVar42[2] = puVar38[2];
            puVar42[3] = uVar15;
            *puVar42 = uVar8;
            puVar42[1] = uVar14;
            puVar38[4] = local_f8;
            local_118._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
            uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
            puVar38[2] = local_108;
            puVar38[3] = uStack_100;
            *(undefined4 *)puVar38 = (undefined4)local_118;
            *(undefined4 *)((longlong)puVar38 + 4) = local_118._4_4_;
            *(undefined4 *)(puVar38 + 1) = (undefined4)uStack_110;
            *(undefined4 *)((longlong)puVar38 + 0xc) = uStack_110._4_4_;
            local_118 = uVar16;
            uStack_110 = dVar7;
          }
          goto LAB_148d6f9dd;
        }
LAB_148d6f63a:
        if (uVar25 != 0) {
          iVar32 = (iVar35 - (iVar35 + -1 >> 0x1f)) + -1 >> 1;
          iVar35 = iVar32;
joined_r0x000148d6f65b:
          do {
            iVar41 = iVar32 * 2 + 1;
            if (iVar41 < (int)uVar25) {
              iVar44 = iVar32 * 2 + 2;
              if ((iVar44 < (int)uVar25) &&
                 (*(float *)(puVar29 + (longlong)iVar44 * 5 + 4) <
                  *(float *)(puVar29 + (longlong)iVar41 * 5 + 4) ||
                  *(float *)(puVar29 + (longlong)iVar44 * 5 + 4) ==
                  *(float *)(puVar29 + (longlong)iVar41 * 5 + 4))) {
                iVar41 = iVar44;
              }
              if (*(float *)(puVar29 + (longlong)iVar41 * 5 + 4) <=
                  *(float *)(puVar29 + (longlong)iVar32 * 5 + 4) &&
                  *(float *)(puVar29 + (longlong)iVar32 * 5 + 4) !=
                  *(float *)(puVar29 + (longlong)iVar41 * 5 + 4)) {
                puVar38 = puVar29 + (longlong)iVar32 * 5;
                puVar34 = puVar29 + (longlong)iVar41 * 5;
                local_f8 = puVar38[4];
                local_118 = *puVar38;
                uStack_110 = (double)puVar38[1];
                local_108 = puVar38[2];
                uStack_100 = puVar38[3];
                uVar16 = local_118;
                dVar7 = uStack_110;
                puVar38[4] = puVar34[4];
                uVar8 = *puVar34;
                uVar14 = puVar34[1];
                uVar15 = puVar34[3];
                puVar38[2] = puVar34[2];
                puVar38[3] = uVar15;
                *puVar38 = uVar8;
                puVar38[1] = uVar14;
                puVar34[4] = local_f8;
                local_118._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
                uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
                puVar34[2] = local_108;
                puVar34[3] = uStack_100;
                *(undefined4 *)puVar34 = (undefined4)local_118;
                *(undefined4 *)((longlong)puVar34 + 4) = local_118._4_4_;
                *(undefined4 *)(puVar34 + 1) = (undefined4)uStack_110;
                *(undefined4 *)((longlong)puVar34 + 0xc) = uStack_110._4_4_;
                iVar32 = iVar41;
                local_118 = uVar16;
                uStack_110 = dVar7;
                goto joined_r0x000148d6f65b;
              }
            }
            bVar50 = iVar35 != 0;
            iVar32 = iVar35 + -1;
            iVar35 = iVar32;
          } while (bVar50);
          if (1 < (int)uVar25) {
            uVar37 = (ulonglong)uVar25 - 1;
            local_f8 = puVar29[4];
            local_118 = *puVar29;
            uStack_110 = (double)puVar29[1];
            local_108 = puVar29[2];
            uStack_100 = puVar29[3];
            uVar16 = local_118;
            dVar7 = uStack_110;
            puVar29[4] = puVar29[uVar37 * 5 + 4];
            uVar8 = puVar29[uVar37 * 5];
            uVar14 = (puVar29 + uVar37 * 5)[1];
            uVar15 = (puVar29 + uVar37 * 5 + 2)[1];
            puVar29[2] = puVar29[uVar37 * 5 + 2];
            puVar29[3] = uVar15;
            *puVar29 = uVar8;
            puVar29[1] = uVar14;
            puVar29[uVar37 * 5 + 4] = local_f8;
            local_118._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
            uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
            puVar29[uVar37 * 5 + 2] = local_108;
            (puVar29 + uVar37 * 5 + 2)[1] = uStack_100;
            puVar38 = puVar29 + uVar37 * 5;
            *(undefined4 *)puVar38 = (undefined4)local_118;
            *(undefined4 *)((longlong)puVar38 + 4) = local_118._4_4_;
            *(undefined4 *)(puVar38 + 1) = (undefined4)uStack_110;
            *(undefined4 *)((longlong)puVar38 + 0xc) = uStack_110._4_4_;
            local_118 = uVar16;
            uStack_110 = dVar7;
            if (uVar25 != 2) {
              do {
                iVar32 = 0;
                iVar41 = 1;
                iVar35 = 0;
                do {
                  iVar32 = iVar32 + 2;
                  iVar44 = iVar41;
                  if (((longlong)iVar32 < (longlong)uVar37) &&
                     (*(float *)(puVar29 + (longlong)iVar32 * 5 + 4) <
                      *(float *)(puVar29 + (longlong)iVar41 * 5 + 4) ||
                      *(float *)(puVar29 + (longlong)iVar32 * 5 + 4) ==
                      *(float *)(puVar29 + (longlong)iVar41 * 5 + 4))) {
                    iVar44 = iVar32;
                  }
                  if (*(float *)(puVar29 + (longlong)iVar35 * 5 + 4) <
                      *(float *)(puVar29 + (longlong)iVar44 * 5 + 4) ||
                      *(float *)(puVar29 + (longlong)iVar35 * 5 + 4) ==
                      *(float *)(puVar29 + (longlong)iVar44 * 5 + 4)) break;
                  puVar38 = puVar29 + (longlong)iVar35 * 5;
                  puVar34 = puVar29 + (longlong)iVar44 * 5;
                  uVar8 = puVar38[4];
                  uVar14 = *puVar38;
                  uVar15 = puVar38[1];
                  uVar16 = puVar38[2];
                  uVar17 = puVar38[3];
                  puVar38[4] = puVar34[4];
                  uVar18 = *puVar34;
                  uVar19 = puVar34[1];
                  uVar20 = puVar34[3];
                  puVar38[2] = puVar34[2];
                  puVar38[3] = uVar20;
                  *puVar38 = uVar18;
                  puVar38[1] = uVar19;
                  puVar34[4] = uVar8;
                  puVar34[2] = uVar16;
                  puVar34[3] = uVar17;
                  *puVar34 = uVar14;
                  puVar34[1] = uVar15;
                  iVar32 = iVar44 * 2;
                  iVar41 = iVar44 * 2 + 1;
                  iVar35 = iVar44;
                } while ((longlong)iVar41 < (longlong)uVar37);
                uVar1 = uVar37 - 1;
                local_f8 = puVar29[4];
                local_118 = *puVar29;
                uStack_110 = (double)puVar29[1];
                local_108 = puVar29[2];
                uStack_100 = puVar29[3];
                uVar16 = local_118;
                dVar7 = uStack_110;
                puVar29[4] = puVar29[uVar1 * 5 + 4];
                uVar8 = puVar29[uVar1 * 5];
                uVar14 = (puVar29 + uVar1 * 5)[1];
                uVar15 = (puVar29 + uVar1 * 5 + 2)[1];
                puVar29[2] = puVar29[uVar1 * 5 + 2];
                puVar29[3] = uVar15;
                *puVar29 = uVar8;
                puVar29[1] = uVar14;
                puVar29[uVar1 * 5 + 4] = local_f8;
                local_118._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
                uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
                puVar29[uVar1 * 5 + 2] = local_108;
                (puVar29 + uVar1 * 5 + 2)[1] = uStack_100;
                puVar38 = puVar29 + uVar1 * 5;
                *(undefined4 *)puVar38 = (undefined4)local_118;
                *(undefined4 *)((longlong)puVar38 + 4) = local_118._4_4_;
                *(undefined4 *)(puVar38 + 1) = (undefined4)uStack_110;
                *(undefined4 *)((longlong)puVar38 + 0xc) = uStack_110._4_4_;
                bVar50 = 2 < uVar37;
                uVar37 = uVar1;
                local_118 = uVar16;
                uStack_110 = dVar7;
              } while (bVar50);
            }
          }
        }
LAB_148d6f9dd:
        pdVar40 = pdVar40 + -3;
      } while (&local_418 <= pdVar40);
      lVar27 = (longlong)(int)uStack_430;
      pdVar31 = &DAT_14c8464f0;
      pdVar30 = &DAT_14c8464e8;
      pdVar40 = &DAT_14c8464e0;
      lVar46 = local_440;
      pdVar43 = local_448;
      if (lVar27 == 0) goto LAB_148d6fa9b;
    }
    lVar47 = 0;
    lVar26 = 0;
    do {
      if (*(char *)((longlong)local_438 + lVar47) != '\x01') {
        *(undefined1 *)((longlong)local_438 + lVar47) = 1;
        lVar26 = (longlong)local_438 - lVar26;
        pdVar40 = (double *)(lVar26 + 8);
        pdVar30 = (double *)(lVar26 + 0x10);
        pdVar31 = (double *)(lVar26 + 0x18);
        goto LAB_148d6fa9b;
      }
      lVar26 = lVar26 + -0x28;
      lVar3 = (longlong)local_438 + lVar47;
      lVar47 = lVar47 + 0x28;
    } while (lVar3 + 0x28 != (longlong)local_438 + lVar27 * 0x28);
    pdVar31 = &DAT_14c8464f0;
    pdVar30 = &DAT_14c8464e8;
    pdVar40 = &DAT_14c8464e0;
  }
LAB_148d6fa9b:
  dVar7 = *pdVar30;
  local_408[0] = (*pdVar31 + (double)param_1[9]) - pdVar43[2];
  local_410 = ((double)param_1[8] + dVar7) - pdVar43[1];
  local_418 = ((double)param_1[7] + *pdVar40) - *pdVar43;
  *(double *)(local_428 + 0x20 + local_458) = *pdVar40;
  *(double *)(local_428 + 0x28 + local_458) = dVar7;
  *(undefined1 *)(local_428 + 0x30 + local_458) = 1;
  FUN_148d702d4(lVar46,local_450,&local_418,*(undefined4 *)(local_450 + 0x588));
LAB_148d6f2fa:
  lVar36 = lVar36 + 1;
  uVar37 = (ulonglong)(int)uStack_420;
  if ((longlong)uVar37 <= lVar36) goto LAB_148d6fa46;
  goto LAB_148d6f1fc;
LAB_148d6f547:
  local_f8 = puVar29[4];
  local_118 = *puVar29;
  uStack_110 = (double)puVar29[1];
  local_108 = puVar29[2];
  uStack_100 = puVar29[3];
  uVar16 = local_118;
  dVar7 = uStack_110;
  puVar29[4] = puVar39[-1];
  uVar8 = *puVar42;
  uVar14 = puVar39[-4];
  uVar15 = puVar39[-2];
  puVar29[2] = puVar39[-3];
  puVar29[3] = uVar15;
  *puVar29 = uVar8;
  puVar29[1] = uVar14;
  puVar39[-1] = local_f8;
  local_118._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
  puVar39[-3] = local_108;
  puVar39[-2] = uStack_100;
  *(undefined4 *)puVar42 = (undefined4)local_118;
  *(undefined4 *)((longlong)puVar39 + -0x24) = local_118._4_4_;
  *(undefined4 *)(puVar39 + -4) = (undefined4)uStack_110;
  *(undefined4 *)((longlong)puVar39 + -0x1c) = uStack_110._4_4_;
  iVar32 = iVar32 + -1;
  puVar39 = puVar39 + -10;
  local_118 = uVar16;
  uStack_110 = dVar7;
  if ((longlong)puVar45 - (longlong)puVar48 < (longlong)puVar34 - (longlong)puVar49) {
    if (puVar28 < puVar38) {
      *pdVar40 = (double)puVar28;
      pdVar40[1] = (double)puVar38;
      *(int *)(pdVar40 + 2) = iVar32;
      pdVar40 = pdVar40 + 3;
    }
    puVar34 = puVar45;
    puVar49 = puVar29;
    if (puVar42 <= puVar29 + 5) goto LAB_148d6f9dd;
  }
  else {
    if (puVar29 + 5 < puVar42) {
      *pdVar40 = (double)puVar29;
      pdVar40[1] = (double)puVar39;
      *(int *)(pdVar40 + 2) = iVar32;
      pdVar40 = pdVar40 + 3;
    }
    puVar29 = puVar28;
    puVar39 = puVar38;
    puVar34 = puVar38;
    if (puVar38 <= puVar28) goto LAB_148d6f9dd;
  }
  iVar35 = (int)((ulonglong)((longlong)puVar34 - (longlong)puVar49) >> 3) * -0x33333333;
  uVar25 = iVar35 + 1;
  puVar38 = puVar39;
  puVar48 = puVar49;
  if (iVar32 == 0) goto LAB_148d6f63a;
  goto LAB_148d6f40b;
}



// FUNCTION 148d6fcf0 FUN_148d6fcf0 body=328 status=ok
// SIG undefined FUN_148d6fcf0(void)

void FUN_148d6fcf0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  cVar4 = *(char *)(param_2 + 6);
  if (cVar4 == '\x01') {
    dVar1 = param_2[2];
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar8 = (param_2[5] + dVar1) - dVar1;
    dVar5 = (param_2[4] + dVar3) - dVar3;
    dVar6 = (param_2[3] + dVar2) - dVar2;
    dVar7 = ((DAT_14c8462d0 * 0.0 + DAT_14c8462c0 * 0.0 + DAT_14c8462c8 * 0.0) -
            (dVar1 * DAT_14c8462d0 + dVar2 * DAT_14c8462c0 + DAT_14c8462c8 * dVar3)) /
            (DAT_14c8462d0 * dVar8 + DAT_14c8462c0 * dVar6 + DAT_14c8462c8 * dVar5);
    *param_1 = dVar7 * dVar6 + dVar2;
    param_1[1] = dVar5 * dVar7 + dVar3;
    param_1[2] = dVar8 * dVar7 + dVar1;
  }
  *(bool *)(param_1 + 3) = cVar4 == '\x01';
  return;
}



// FUNCTION 148d6fe38 FUN_148d6fe38 body=566 status=ok
// SIG undefined FUN_148d6fe38(void)

longlong * FUN_148d6fe38(longlong param_1,double *param_2,float param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  double *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  uint local_90;
  int iStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  uint local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = (longlong *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x180) = 0;
  local_b0 = param_2;
  if (*(int *)(param_1 + 0x184) < 0) {
    FUN_148d74cd8(local_b8);
  }
  lVar5 = FUN_14571695d();
  param_3 = param_3 * *(float *)(lVar5 + 0xa0);
  plVar1 = (longlong *)(param_1 + 0x78);
  lVar5 = param_1 + 0x88;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  iStack_6c = 0;
  uStack_68 = 0;
  lStack_78 = lVar5;
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_80);
    iVar6 = *(int *)(param_1 + 0xa0);
  }
  uStack_88 = CONCAT44(uStack_64,uStack_68);
  local_90 = local_70;
  iStack_8c = iStack_6c;
  local_a0 = local_80;
  lStack_98 = lStack_78;
  local_a8 = plVar1;
  if ((iStack_6c != iVar6) || (lStack_78 != lVar5)) {
    do {
      lVar4 = *local_a8;
      lVar7 = (longlong)iStack_8c * 0x180;
      if (((*(char *)(lVar4 + 0xbc + lVar7) == '\x01') &&
          ((((lVar2 = lVar4 + lVar7, *(char *)(lVar2 + 0x95) != '\0' ||
             (*(char *)(lVar2 + 0x94) != '\0')) || (*(char *)(lVar2 + 0x92) != '\0')) ||
           ((*(char *)(lVar2 + 0xfc) != '\x01' || (*(int *)(lVar2 + 0xf8) == 0)))))) &&
         ((*(char *)(lVar2 + 0xd8) == '\0' ||
          (dVar8 = *(double *)(lVar2 + 200) - local_b0[1],
          dVar9 = *(double *)(lVar2 + 0xc0) - *local_b0,
          dVar9 * dVar9 + dVar8 * dVar8 < (double)(param_3 * param_3))))) {
        iVar3 = *(int *)(param_1 + 0x180);
        *(uint *)(param_1 + 0x180) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x184) < iVar3 + 1U) {
          FUN_148d74d08(local_b8,iVar3);
        }
        *(longlong *)(*local_b8 + (longlong)iVar3 * 8) = lVar4 + lVar7 + 0x10;
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (local_a8 != plVar1 || (lStack_98 != lVar5 || iStack_8c != iVar6));
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_b8;
}



// FUNCTION 148d70070 FUN_148d70070 body=83 status=ok
// SIG undefined FUN_148d70070(void)

undefined8 FUN_148d70070(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0xdc);
  if (cVar1 == '\0') {
    return 0x3d4ccccd;
  }
  uVar2 = FUN_14479d2ce(param_1 + 0xdc);
  uVar2 = FUN_148d713bc(uVar2,param_2);
  return uVar2;
}



// FUNCTION 148d700c4 FUN_148d700c4 body=68 status=ok
// SIG undefined FUN_148d700c4(void)

longlong FUN_148d700c4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d74a58(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_148d74a05(lVar2,1);
  return lVar2;
}



// FUNCTION 148d70108 FUN_148d70108 body=346 status=ok
// SIG undefined FUN_148d70108(void)

ulonglong FUN_148d70108(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = local_68;
  if (param_2 != 0) {
    lVar4 = FUN_14479d2ce(param_1 + 0x58);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((lVar4 == param_2) || (lVar4 = FUN_14479d2ce(param_1 + 0x70), lVar4 == param_2))
    goto LAB_148d701cd;
    plVar1 = (longlong *)(param_1 + 0x78);
    lVar4 = param_1 + 0x88;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = lVar4;
    if (*(int *)(param_1 + 0xa0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = *(int *)(param_1 + 0xa0);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar2 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar6) || (uStack_50 != lVar4)) {
      iVar3 = local_68._4_4_;
      local_68 = uVar2;
      do {
        lVar5 = FUN_14479d2ce(*local_80 + (longlong)iVar3 * 0x180 + 0xec);
        uVar7 = CONCAT71((int7)(uVar7 >> 8),lVar5 == param_2);
        if (lVar5 == param_2) break;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar3 = local_68._4_4_;
      } while (local_80 != plVar1 ||
               (CONCAT44(uStack_6c,uStack_70) != lVar4 || local_68._4_4_ != iVar6));
      goto LAB_148d701cd;
    }
  }
  local_68 = uVar2;
  uVar7 = 0;
LAB_148d701cd:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148d70264 FUN_148d70264 body=111 status=ok
// SIG undefined FUN_148d70264(void)

undefined1 FUN_148d70264(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0x148) == '\x01') {
    FUN_148d716cc(param_1 + 0xf0,param_3);
    if ((*(char *)(param_1 + 0x144) != '\0') || (*(char *)(param_1 + 0x150) != '\0')) {
      FUN_1413d3b4c(param_1,param_2);
      return *(undefined1 *)(param_1 + 0x144);
    }
    if (*(char *)(param_1 + 0x148) == '\x01') {
      *(undefined1 *)(param_1 + 0x148) = 0;
    }
    FUN_1413d3b4c(param_1,param_2);
  }
  return 0;
}



// FUNCTION 148d702d4 FUN_148d702d4 body=422 status=ok
// SIG undefined FUN_148d702d4(void)

void FUN_148d702d4(longlong param_1,longlong param_2,double *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(param_1 + 0xf0);
  if (*(char *)(param_1 + 0x148) == '\x01') {
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x130);
    *puVar5 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x128);
    uVar1 = *(undefined4 *)((longlong)param_3 + 4);
    uVar2 = *(undefined4 *)(param_3 + 1);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)param_3;
    *(undefined4 *)(param_1 + 0x10c) = uVar1;
    *(undefined4 *)(param_1 + 0x110) = uVar2;
    *(undefined4 *)(param_1 + 0x114) = uVar3;
    *(double *)(param_1 + 0x118) = param_3[2];
    *(undefined1 *)(param_1 + 0x144) = 1;
    *(undefined4 *)(param_1 + 0x138) = param_4;
    *(undefined8 *)(param_1 + 0x13c) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x148) = 1;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x100) = DAT_14c8464f0;
    uVar4 = DAT_14c8464e8;
    *puVar5 = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0xf8) = uVar4;
    *(undefined8 *)(param_1 + 0x118) = DAT_14c8464f0;
    uVar4 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x108) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x110) = uVar4;
    *(undefined8 *)(param_1 + 0x130) = DAT_14c8464f0;
    uVar4 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x120) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x128) = uVar4;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x13d) = 0;
    *(undefined1 *)(param_1 + 0x145) = 1;
    if (((ABS(*param_3) <= 9.999999747378752e-05) && (ABS(param_3[1]) <= 9.999999747378752e-05)) &&
       (ABS(param_3[2]) <= 9.999999747378752e-05)) goto LAB_148d7034e;
    *(undefined8 *)(param_1 + 0x100) = DAT_14c8464f0;
    uVar4 = DAT_14c8464e8;
    *puVar5 = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0xf8) = uVar4;
    *(double *)(param_1 + 0x118) = param_3[2];
    uVar1 = *(undefined4 *)((longlong)param_3 + 4);
    uVar2 = *(undefined4 *)(param_3 + 1);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)param_3;
    *(undefined4 *)(param_1 + 0x10c) = uVar1;
    *(undefined4 *)(param_1 + 0x110) = uVar2;
    *(undefined4 *)(param_1 + 0x114) = uVar3;
    *(undefined1 *)(param_1 + 0x144) = 1;
    *(undefined4 *)(param_1 + 0x138) = param_4;
    *(undefined8 *)(param_1 + 0x13c) = 1;
  }
  *(undefined1 *)(param_1 + 0x145) = 0;
  FUN_148d716cc(puVar5,0);
  *(undefined1 *)(param_1 + 0x145) = 1;
LAB_148d7034e:
  *(undefined1 *)(param_1 + 0x150) = 1;
  FUN_148d74bca(param_2 + 0xb98,param_1);
  return;
}



// FUNCTION 148d7047a FUN_148d7047a body=176 status=ok
// SIG undefined FUN_148d7047a(void)

void FUN_148d7047a(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0x150) = 0;
  if (*(char *)(param_1 + 0x148) != '\x01') {
    return;
  }
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x128);
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x108) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x10c) = uVar1;
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  *(undefined8 *)(param_1 + 0x118) = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x144) = 1;
  *(undefined4 *)(param_1 + 0x138) = param_3;
  *(undefined8 *)(param_1 + 0x13c) = 1;
  FUN_148d716cc(param_1 + 0xf0,0);
  *(undefined1 *)(param_1 + 0x145) = 1;
  FUN_1413d3b4c(param_1,param_2);
  FUN_148d74bca(param_2 + 0xb98,param_1);
  return;
}



// FUNCTION 148d7052a FUN_148d7052a body=149 status=ok
// SIG undefined FUN_148d7052a(void)

void FUN_148d7052a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x720);
  if (lVar4 == 0) {
    uVar3 = FUN_141030812();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x720) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x728) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x718) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x718));
    }
    *(undefined8 *)(param_1 + 0x728) = uVar3;
    return;
  }
  return;
}



// FUNCTION 148d705c0 FUN_148d705c0 body=142 status=ok
// SIG undefined FUN_148d705c0(void)

void FUN_148d705c0(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 0x84) = param_2;
  cVar1 = FUN_144729dda(param_1 + 0xdc);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xdc);
    *(undefined1 *)(lVar2 + 0x3ac) = *(undefined1 *)(param_1 + 0x84);
    FUN_1411e3072(lVar2);
    lVar2 = FUN_14479d2ce();
    uVar3 = 0;
    uVar4 = 0;
    if ((((*(char *)(param_1 + 0x85) == '\0') && (uVar4 = uVar3, *(char *)(param_1 + 0x84) == '\0'))
        && (*(char *)(param_1 + 0x82) == '\0')) && (*(char *)(param_1 + 0xec) == '\x01')) {
      uVar4 = *(undefined4 *)(param_1 + 0xe8);
    }
    *(undefined4 *)(lVar2 + 0x3b0) = uVar4;
    FUN_1411e3072(lVar2);
  }
  FUN_140f07a18(param_1);
  return;
}



// FUNCTION 148d7064e FUN_148d7064e body=587 status=ok
// SIG undefined FUN_148d7064e(void)

void FUN_148d7064e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(longlong *)(param_1 + 0x168) = param_2;
  iVar1 = *(int *)(param_1 + 0x160);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x158);
    lVar6 = 0;
    do {
      local_50 = *(undefined8 *)(lVar2 + lVar6);
      plVar3 = (longlong *)FUN_14479d2ce(&local_50);
      if (plVar3 != (longlong *)0x0) {
        if (param_2 == 0) {
          if (*(char *)((longlong)plVar3 + 0x742) == '\0') {
            *(undefined1 *)((longlong)plVar3 + 0x742) = 1;
            (**(code **)(*plVar3 + 0xaf8))(plVar3);
          }
          plVar4 = (longlong *)FUN_14479d2ce(&local_50);
          if (plVar4 != (longlong *)0x0) {
            lVar5 = FUN_145b903ae();
            if (((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                 lVar5 + 0x30)) && ((char)plVar4[0xeb] != '\0')) {
              *(undefined1 *)(plVar4 + 0xeb) = 0;
LAB_148d70780:
              (**(code **)(*plVar4 + 0xaf8))(plVar4);
            }
          }
LAB_148d7073e:
          if (*(char *)((longlong)plVar3 + 0x741) == '\0') goto LAB_148d7075c;
          *(undefined1 *)((longlong)plVar3 + 0x741) = 0;
        }
        else {
          lVar5 = FUN_148d7052a(plVar3);
          if (lVar5 != param_2) {
            if (*(char *)((longlong)plVar3 + 0x742) != '\0') {
              *(undefined1 *)((longlong)plVar3 + 0x742) = 0;
              (**(code **)(*plVar3 + 0xaf8))(plVar3);
            }
            plVar4 = (longlong *)FUN_14479d2ce(&local_50);
            if (plVar4 != (longlong *)0x0) {
              lVar5 = FUN_145b903ae();
              if (((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                   lVar5 + 0x30)) && ((char)plVar4[0xeb] == '\0')) {
                *(undefined1 *)(plVar4 + 0xeb) = 1;
                goto LAB_148d70780;
              }
            }
            goto LAB_148d7073e;
          }
          if (*(char *)((longlong)plVar3 + 0x742) == '\0') {
            *(undefined1 *)((longlong)plVar3 + 0x742) = 1;
            (**(code **)(*plVar3 + 0xaf8))(plVar3);
          }
          plVar4 = (longlong *)FUN_14479d2ce(&local_50);
          if (plVar4 != (longlong *)0x0) {
            lVar5 = FUN_145b903ae();
            if (((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                 lVar5 + 0x30)) && ((char)plVar4[0xeb] != '\0')) {
              *(undefined1 *)(plVar4 + 0xeb) = 0;
              (**(code **)(*plVar4 + 0xaf8))(plVar4);
            }
          }
          if (*(char *)((longlong)plVar3 + 0x741) != '\0') goto LAB_148d7075c;
          *(undefined1 *)((longlong)plVar3 + 0x741) = 1;
        }
        (**(code **)(*plVar3 + 0xaf8))(plVar3);
      }
LAB_148d7075c:
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  FUN_145cf621e(param_1);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_148d6d52c(param_1);
  return;
}



// FUNCTION 148d7089a FUN_148d7089a body=63 status=ok
// SIG undefined FUN_148d7089a(void)

void FUN_148d7089a(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x70);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x70);
    FUN_14164617e(uVar1);
  }
  FUN_145cf621e(param_1);
  FUN_148d6d52c(param_1);
  return;
}



// FUNCTION 148d708da FUN_148d708da body=273 status=ok
// SIG undefined FUN_148d708da(void)

void FUN_148d708da(longlong param_1,undefined8 *param_2,longlong param_3,ulonglong param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  
  cVar5 = FUN_144729dda(param_2);
  if (cVar5 != '\0') {
    uVar2 = FUN_14479d2ce(param_2);
    FUN_140aeefbc(uVar2,0,1);
    *param_2 = 0;
  }
  if ((1 < *(int *)(param_3 + 8)) && (*(longlong *)(param_1 + 0x18) != 0)) {
    lVar1 = param_1 + 0x10;
    cVar5 = FUN_144729dda(lVar1);
    if (cVar5 != '\0') {
      uVar2 = FUN_14479d2ce(lVar1);
      uVar2 = FUN_1447210f0(uVar2);
      uVar3 = FUN_145b90498();
      uVar2 = FUN_148d709ec(uVar2,uVar3,param_1 + 0xd0);
      FUN_14485c47a(param_2,uVar2);
      cVar5 = FUN_144729dda(param_2);
      if (cVar5 != '\0') {
        uVar3 = FUN_14479d2ce(param_2);
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        uVar4 = FUN_14479d2ce(lVar1);
        FUN_148d70ab4(uVar3,uVar4,param_3,uVar2,param_4,param_5);
        uVar2 = FUN_14479d2ce(param_2);
        FUN_14113775c(uVar2,param_1 + 0xd0,0,0,param_4 & 0xffffffffffffff00);
      }
    }
  }
  return;
}



// FUNCTION 148d709ec FUN_148d709ec body=198 status=ok
// SIG undefined FUN_148d709ec(void)

longlong FUN_148d709ec(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_58;
  longlong *local_48;
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  lVar1 = 0;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  local_68 = 0x800040100;
  if (param_2 != 0) {
    lVar1 = FUN_141037e38();
    if (lVar1 != 0) {
      lVar2 = FUN_145b90498();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_148d70a6c;
    }
    lVar1 = 0;
  }
LAB_148d70a6c:
  if (local_58 != 0) {
    plVar3 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar3 = local_38;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d70ab4 FUN_148d70ab4 body=923 status=ok
// SIG undefined FUN_148d70ab4(void)

void FUN_148d70ab4(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  undefined8 *param_5,undefined4 param_6)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  double *local_130;
  double *local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined1 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_14485c47a(param_1 + 0x390);
  *(longlong *)(param_1 + 0x398) = param_4;
  if ((undefined8 *)(param_1 + 0x3a0) != param_5) {
    if (*(char *)(param_5 + 2) == '\x01') {
      uVar7 = param_5[1];
      *(undefined8 *)(param_1 + 0x3a0) = *param_5;
      *(undefined8 *)(param_1 + 0x3a8) = uVar7;
      uVar8 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x3b0) != '\x01') goto LAB_148d70b49;
      uVar8 = 0;
    }
    *(undefined1 *)(param_1 + 0x3b0) = uVar8;
  }
LAB_148d70b49:
  *(undefined4 *)(param_1 + 0x3c0) = param_6;
  FUN_148d71806(param_1);
  lVar10 = FUN_1410ac07e(param_2);
  if (lVar10 != 0) {
    *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(lVar10 + 0x4c0);
    *(undefined8 *)(param_1 + 0x3c4) = *(undefined8 *)(lVar10 + 0x4b8);
    fVar1 = *(float *)(param_2 + 0x820);
    fVar2 = *(float *)(lVar10 + 0x458);
    fVar13 = fVar1 * *(float *)(lVar10 + 0x4b0);
    dVar4 = (double)*(float *)(param_4 + 0x140);
    dVar5 = (double)*(float *)(lVar10 + 0x4b4);
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    iVar9 = (int)param_3[1];
    if (1 < iVar9) {
      dVar6 = dVar4 * 0.0;
      lVar12 = 0;
      uVar11 = 0;
      do {
        lVar3 = *param_3;
        local_b8 = lVar12 != 0;
        if ((bool)local_b8) {
          local_c0 = *(double *)(lVar3 + -8 + lVar12) * dVar6 + dVar5;
          local_c8 = *(double *)(lVar3 + -0x10 + lVar12) * dVar4 + 0.0;
          local_d0 = *(double *)(lVar3 + -0x18 + lVar12) * dVar4 + 0.0;
        }
        local_f8 = *(double *)(lVar3 + 0x10 + lVar12) * dVar6 + dVar5;
        local_100 = *(double *)(lVar3 + 8 + lVar12) * dVar4 + 0.0;
        local_108 = *(double *)(lVar3 + lVar12) * dVar4 + 0.0;
        local_110 = *(double *)(lVar3 + 0x28 + lVar12) * dVar6 + dVar5;
        local_118 = *(double *)(lVar3 + 0x20 + lVar12) * dVar4 + 0.0;
        local_120 = *(double *)(lVar3 + 0x18 + lVar12) * dVar4 + 0.0;
        local_d8 = (longlong)(uVar11 + 2) < (longlong)iVar9;
        if ((bool)local_d8) {
          local_e0 = *(double *)(lVar3 + 0x40 + lVar12) * dVar6 + dVar5;
          local_e8 = *(double *)(lVar3 + 0x38 + lVar12) * dVar4 + 0.0;
          local_f0 = *(double *)(lVar3 + 0x30 + lVar12) * dVar4 + 0.0;
        }
        local_128 = &local_f0;
        local_138 = &local_108;
        local_130 = &local_120;
        FUN_148d718dc(param_1,lVar10,fVar2 * fVar1,&local_d0);
        FUN_148d71e5c(param_1,lVar10,fVar13,&local_108);
        iVar9 = (int)param_3[1];
        if (uVar11 == iVar9 - 2) {
          FUN_148d71e5c(param_1,lVar10,fVar13,&local_120);
          iVar9 = (int)param_3[1];
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x18;
      } while ((longlong)uVar11 < (longlong)(iVar9 + -1));
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_158);
  }
  if ((local_b0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d70ea0 FUN_148d70ea0 body=541 status=ok
// SIG undefined FUN_148d70ea0(void)

void FUN_148d70ea0(longlong param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90 [3];
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar10 = param_1 + 0x390;
  cVar7 = FUN_144729dda(lVar10);
  if (cVar7 == '\0') {
    FUN_144729dda(lVar10);
  }
  else {
    uVar8 = FUN_14479d2ce(lVar10);
    lVar9 = FUN_1410ac07e(uVar8);
    cVar7 = FUN_144729dda(lVar10);
    if ((lVar9 != 0 && cVar7 == '\x01') && (*(longlong *)(param_1 + 0x398) != 0)) {
      lVar10 = FUN_14479d2ce(lVar10);
      fVar1 = *(float *)(lVar10 + 0x820);
      fVar2 = *(float *)(lVar9 + 0x4b0);
      iVar3 = *(int *)(param_1 + 0x400);
      if ((longlong)iVar3 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x3f8);
        dVar6 = (double)(*(float *)(lVar9 + 0x458) * fVar1);
        lVar9 = 0;
        do {
          if (*(longlong *)(lVar10 + lVar9) != 0) {
            local_78 = 0x3ff0000000000000;
            local_90[2] = dVar6;
            FUN_147a282d0(*(longlong *)(lVar10 + lVar9),local_90 + 2,0);
            local_90[1] = 1.0;
            local_90[0] = dVar6;
            FUN_147a28314(*(undefined8 *)(lVar10 + lVar9),local_90);
            FUN_147a2842a(*(undefined8 *)(lVar10 + lVar9));
          }
          lVar4 = *(longlong *)(lVar10 + 8 + lVar9);
          if (lVar4 != 0) {
            FUN_14472da24(lVar4,DAT_14cbcd048,*(float *)(lVar10 + 0x10 + lVar9) / fVar1);
            FUN_14472da24(*(undefined8 *)(lVar10 + 8 + lVar9),DAT_14cbcd040,
                          *(float *)(lVar10 + 0x14 + lVar9) / fVar1);
          }
          lVar9 = lVar9 + 0x18;
        } while ((longlong)iVar3 * 0x18 != lVar9);
      }
      iVar3 = *(int *)(param_1 + 0x410);
      if ((longlong)iVar3 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x408);
        dVar6 = (double)(fVar2 * fVar1);
        lVar9 = 0;
        do {
          plVar5 = *(longlong **)(lVar10 + lVar9);
          if (plVar5 != (longlong *)0x0) {
            local_a8 = dVar6;
            local_a0 = dVar6;
            local_98 = dVar6;
            (**(code **)(*plVar5 + 0x478))(plVar5,&local_a8);
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)iVar3 * 8 != lVar9);
      }
    }
  }
  FUN_148d7209a(param_1);
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d710be FUN_148d710be body=55 status=ok
// SIG undefined FUN_148d710be(void)

void FUN_148d710be(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0xdc);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0xdc);
    FUN_1411e3072(uVar1);
    return;
  }
  return;
}



// FUNCTION 148d710f6 FUN_148d710f6 body=106 status=ok
// SIG undefined FUN_148d710f6(void)

void FUN_148d710f6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148d75c44(param_1,iVar1);
    }
    FUN_148d75cd4((longlong)iVar1 * 0x38 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148d75d1c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148d71162 FUN_148d71162 body=511 status=ok
// SIG undefined FUN_148d71162(void)

undefined8 FUN_148d71162(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  int local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = FUN_14479d2ce(param_1 + 0x10);
  lVar2 = FUN_14479d2ce(lVar2 + 1000);
  uVar6 = 0;
  if ((lVar2 != 0) && (lVar4 = *(longlong *)(lVar2 + 0xa08), lVar4 != 0)) {
    lVar3 = FUN_144a2f878();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (uVar6 = 0,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
       == lVar3 + 0x30)) {
      FUN_141313b0e(lVar4,&local_60,local_78);
      lVar4 = FUN_145dfa8bc(lVar2);
      if (lVar4 == 0) {
        uVar6 = 0;
      }
      else {
        local_e0 = FUN_1447210f0(lVar2);
        local_98 = local_60;
        uStack_90 = uStack_58;
        local_88 = local_50;
        local_b8 = *(undefined4 *)(param_2 + 0x28);
        uStack_b4 = *(undefined4 *)(param_2 + 0x2c);
        uStack_b0 = *(undefined4 *)(param_2 + 0x30);
        uStack_ac = *(undefined4 *)(param_2 + 0x34);
        local_a8 = *(undefined8 *)(param_2 + 0x38);
        local_e8 = local_78;
        FUN_143d3e936(lVar4,param_2);
        iVar5 = *(int *)(param_2 + 0x78);
        uVar6 = 1;
        if (((iVar5 != 0) && (cVar1 = *(char *)(param_2 + 0x48), cVar1 != '\0')) &&
           (cVar1 != '\x04')) {
          uVar7 = 3;
          if (cVar1 == '\x03') {
            FUN_14051b394((undefined8 *)(param_2 + 0x70),iVar5 + -1,1);
            iVar5 = *(int *)(param_2 + 0x78);
            uVar7 = 2;
          }
          if (1 < iVar5) {
            local_c0 = 0;
            local_d0 = *(undefined8 *)(param_2 + 0x70);
            local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,param_4);
            local_c8 = iVar5;
            FUN_148d708da(param_1,&local_c0,&local_d0,param_3);
            cVar1 = FUN_144729dda(&local_c0);
            uVar6 = uVar7;
            if (cVar1 != '\0') {
              iVar5 = *(int *)(param_1 + 0x1f8);
              *(uint *)(param_1 + 0x1f8) = iVar5 + 1U;
              if (*(uint *)(param_1 + 0x1fc) < iVar5 + 1U) {
                FUN_148d75ea6((longlong *)(param_1 + 0x1f0),iVar5);
              }
              *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + (longlong)iVar5 * 8) = local_c0;
            }
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 148d71362 FUN_148d71362 body=81 status=ok
// SIG undefined FUN_148d71362(void)

longlong FUN_148d71362(longlong param_1)

{
  longlong lVar1;
  
  if ((((*(longlong *)(param_1 + 0x3b0) == 0) ||
       (lVar1 = FUN_1402d20ea(param_1 + 0x3a8), lVar1 != 0)) &&
      (lVar1 = *(longlong *)(param_1 + 0x3f8), lVar1 != 0)) && (*(longlong *)(param_1 + 0x398) != 0)
     ) {
    if (*(longlong *)(param_1 + 0x3f0) == 0) {
      lVar1 = 0;
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 148d713bc FUN_148d713bc body=189 status=ok
// SIG undefined FUN_148d713bc(void)

float FUN_148d713bc(longlong param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  
  cVar1 = FUN_144729dda(param_1 + 0x3b8);
  if (cVar1 == '\0') {
    cVar1 = FUN_144729dda(param_1 + 0x3d8);
    if (cVar1 != '\0') {
      cVar1 = FUN_144729dda(param_1 + 0x3a0);
      if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x398) != 0)) {
        plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x3a0);
        fVar4 = (float)(**(code **)(*plVar3 + 0x2c0))(plVar3);
        fVar4 = fVar4 * *(float *)(*(longlong *)(param_1 + 0x398) + 0x140);
        if (0.0001 < fVar4) {
          return (fVar4 + fVar4) / (param_2 + param_2);
        }
      }
    }
    fVar4 = 0.05;
  }
  else {
    lVar2 = FUN_14479d2ce(param_1 + 0x3b8);
    fVar4 = (float)(*(double *)(lVar2 + 0x6e8) * 0.5);
  }
  return fVar4;
}



// FUNCTION 148d7147a FUN_148d7147a body=147 status=ok
// SIG undefined FUN_148d7147a(void)

void FUN_148d7147a(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = 0x6bc;
  if (*(char *)((longlong)param_1 + 0x77e) == '\0') {
    lVar2 = (ulonglong)*(byte *)((longlong)param_1 + 0x785) * 8 + 0x6b8;
  }
  uVar1 = *(undefined4 *)((longlong)param_1 + lVar2);
  *(undefined4 *)((longlong)param_1 + 0x6c4) = *(undefined4 *)((longlong)param_1 + 0x6cc);
  *(undefined4 *)(param_1 + 0xd9) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x6dc) = 1;
  *(int *)(param_1 + 0xda) = (int)param_1[0xcf];
  *(undefined8 *)((longlong)param_1 + 0x6d4) = 1;
  FUN_1407606b4((longlong)param_1 + 0x6c4,0);
  *(undefined1 *)((longlong)param_1 + 0x6dd) = 1;
                    /* WARNING: Could not recover jumptable at 0x000148d7150a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3b0))(param_1,1);
  return;
}



// FUNCTION 148d7150e FUN_148d7150e body=445 status=ok
// SIG undefined FUN_148d7150e(void)

void FUN_148d7150e(longlong *param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  if (param_1[0xe9] == 0) {
    return;
  }
  if ((*(uint *)(param_1[0xe9] + 8) >> 0x1e & 1) == 0) {
    iVar2 = (**(code **)(*param_1 + 0x618))(param_1,DAT_14cbcd028);
    if ((((iVar2 != -1) && (iVar2 < (int)param_1[0xc5])) &&
        ((lVar4 = param_1[0x16], lVar4 != 0 || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
      lVar4 = param_1[0xc4];
      if (*(longlong *)(lVar4 + (longlong)iVar2 * 8) != 0) {
        lVar3 = FUN_144a772c4();
        lVar4 = *(longlong *)(lVar4 + (longlong)iVar2 * 8);
        if ((((lVar4 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
           ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
             lVar3 + 0x30)))) {
          fVar5 = param_2;
          if (1.0 <= param_2) {
            fVar5 = 1.0;
          }
          FUN_14472da24(lVar4,DAT_14cbcd038,fVar5);
        }
      }
    }
    iVar2 = (**(code **)(*param_1 + 0x618))(param_1,DAT_14cbcd030);
    if ((((iVar2 != -1) && (iVar2 < (int)param_1[0xc5])) &&
        ((lVar4 = param_1[0x16], lVar4 != 0 || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
      lVar4 = param_1[0xc4];
      if (*(longlong *)(lVar4 + (longlong)iVar2 * 8) != 0) {
        lVar3 = FUN_144a772c4();
        lVar4 = *(longlong *)(lVar4 + (longlong)iVar2 * 8);
        if ((((lVar4 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
           ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
             lVar3 + 0x30)))) {
          fVar5 = param_2;
          if (0.3 <= param_2) {
            fVar5 = 0.3;
          }
          FUN_14472da24(lVar4,DAT_14cbcd038,fVar5);
        }
      }
    }
    FUN_1448215fa(param_1);
    if ((param_2 == 1.0) && (!NAN(param_2))) {
                    /* WARNING: Could not recover jumptable at 0x000148d716b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1[0xe9] + 0x2b0))();
      return;
    }
    return;
  }
  return;
}



// FUNCTION 148d716cc FUN_148d716cc body=313 status=ok
// SIG undefined FUN_148d716cc(void)

void FUN_148d716cc(double *param_1,float param_2)

{
  double dVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    param_2 = param_2 + *(float *)(param_1 + 10);
    *(float *)(param_1 + 10) = param_2;
    fVar2 = *(float *)(param_1 + 9);
    if ((fVar2 <= param_2) || (fVar2 <= 0.0)) {
      param_1[8] = param_1[5];
      param_1[6] = param_1[3];
      param_1[7] = param_1[4];
      *(undefined1 *)((longlong)param_1 + 0x54) = 0;
    }
    else {
      param_2 = param_2 / fVar2;
      if (*(int *)((longlong)param_1 + 0x4c) == 1) {
        fVar4 = param_2 * param_2;
        fVar2 = param_2 * fVar4;
        param_2 = (fVar4 * 3.0 - (fVar2 + fVar2)) +
                  (fVar2 - fVar4) * 0.0 +
                  (((fVar2 + fVar2) - fVar4 * 3.0) + 1.0) * 0.0 +
                  ((fVar2 - (fVar4 + fVar4)) + param_2) * 0.0;
      }
      dVar1 = (double)(1.0 - param_2);
      dVar3 = (double)param_2;
      param_1[6] = dVar3 * param_1[3] + dVar1 * *param_1;
      param_1[7] = param_1[4] * dVar3 + param_1[1] * dVar1;
      param_1[8] = param_1[5] * dVar3 + param_1[2] * dVar1;
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x56) = 0;
    if (*(char *)((longlong)param_1 + 0x55) != '\x01') {
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x55) = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x56) = 1;
  return;
}



// FUNCTION 148d71806 FUN_148d71806 body=214 status=ok
// SIG undefined FUN_148d71806(void)

void FUN_148d71806(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x400);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3f8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x420))(plVar3,0);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x400) = 0;
  if (*(int *)(param_1 + 0x404) < 0) {
    FUN_148d765bc(param_1 + 0x3f8);
  }
  iVar1 = *(int *)(param_1 + 0x410);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x408);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x420))(plVar3,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x410) = 0;
  if (-1 < *(int *)(param_1 + 0x414)) {
    return;
  }
  FUN_1474beb1a(param_1 + 0x408,0);
  return;
}



// FUNCTION 148d718dc FUN_148d718dc body=1406 status=ok
// SIG undefined FUN_148d718dc(void)

void FUN_148d718dc(longlong param_1,longlong param_2,float param_3,double *param_4,double *param_5,
                  double *param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118 [3];
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e0;
  longlong local_d8;
  float local_d0;
  float local_cc;
  longlong local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  fVar15 = (float)SQRT((*param_6 - *param_5) * (*param_6 - *param_5) +
                       (param_6[1] - param_5[1]) * (param_6[1] - param_5[1]));
  dVar1 = *(double *)(param_1 + 0x3b8);
  *(double *)(param_1 + 0x3b8) = (double)fVar15 + dVar1;
  lVar8 = FUN_1401ca522(param_2 + 0x400);
  if (lVar8 == 0) goto LAB_148d71a3b;
  local_c8 = FUN_141235872();
  if ((local_c8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_c8);
  }
  local_198 = 1;
  plVar9 = (longlong *)FUN_140fae5dc(param_1,&local_c8,0,&DAT_14c846480);
  if (plVar9 == (longlong *)0x0) goto LAB_148d71a3b;
  lVar8 = FUN_141235872();
  if ((*(int *)(lVar8 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
      lVar8 + 0x30)) {
    local_d8 = 0;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar9);
    }
    local_e0 = plVar9;
    local_d0 = (float)dVar1;
    local_cc = fVar15;
    lVar8 = FUN_1402d20ea(param_2 + 0x430);
    if (lVar8 == 0) {
LAB_148d71b08:
      lVar8 = 0;
    }
    else {
      local_190 = DAT_14c951640;
      uVar10 = FUN_1402d20ea(param_2 + 0x430);
      lVar8 = FUN_14090ceee(uVar10,local_190,0);
      if ((lVar8 == 0) || (DAT_14c950c29 == '\0')) {
        local_d8 = lVar8;
        if (lVar8 == 0) goto LAB_148d71b08;
      }
      else {
        FUN_1456cec3c(lVar8);
      }
      local_d8 = lVar8;
      if (*(char *)(param_1 + 0x3b0) == '\x01') {
        local_f8 = *(undefined4 *)(param_1 + 0x3a0);
        uStack_f4 = *(undefined4 *)(param_1 + 0x3a4);
        uStack_f0 = *(undefined4 *)(param_1 + 0x3a8);
        uStack_ec = *(undefined4 *)(param_1 + 0x3ac);
        FUN_144a9d3f0(lVar8,DAT_14cbcd058);
      }
    }
    dVar1 = param_5[1];
    if (*(char *)(param_4 + 3) == '\x01') {
      dVar2 = param_6[2];
      uVar11 = SUB84(dVar2,0);
      uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
      dVar13 = *param_6;
      dVar14 = param_6[1];
      dVar2 = (dVar2 - param_5[2]) * 0.25;
      dVar4 = (dVar14 - dVar1) * 0.25;
      dVar3 = (dVar13 - *param_5) * 0.25;
      dVar5 = (param_5[2] - param_4[2]) * 0.25 + dVar2;
      dVar1 = (dVar1 - param_4[1]) * 0.25 + dVar4;
      dVar6 = (*param_5 - *param_4) * 0.25 + dVar3;
    }
    else {
      dVar2 = param_6[2];
      uVar11 = SUB84(dVar2,0);
      uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
      dVar13 = *param_6;
      dVar14 = param_6[1];
      dVar2 = (dVar2 - param_5[2]) * 0.25;
      dVar4 = (dVar14 - dVar1) * 0.25;
      dVar3 = (dVar13 - *param_5) * 0.25;
      dVar5 = dVar2;
      dVar1 = dVar4;
      dVar6 = dVar3;
    }
    if (*(char *)(param_7 + 3) == '\x01') {
      dVar2 = dVar2 + (param_7[2] - (double)CONCAT44(uVar12,uVar11)) * 0.25;
      dVar4 = dVar4 + (param_7[1] - dVar14) * 0.25;
      dVar3 = dVar3 + (*param_7 - dVar13) * 0.25;
    }
    (**(code **)(*plVar9 + 0x588))(plVar9,2);
    uVar10 = FUN_1401ca522(param_2 + 0x400);
    (**(code **)(*plVar9 + 0xa78))(plVar9,uVar10);
    if (lVar8 != 0) {
      (**(code **)(*plVar9 + 0x638))(plVar9,0,lVar8);
    }
    local_100 = 0x3ff0000000000000;
    local_118[2] = (double)param_3;
    FUN_147a282d0(plVar9,local_118 + 2,0);
    local_118[1] = 1.0;
    local_118[0] = (double)param_3;
    FUN_147a28314(plVar9,local_118,0);
    local_130 = dVar6;
    local_128 = dVar1;
    local_120 = dVar5;
    FUN_147a28066(plVar9,&local_130,0);
    local_148 = dVar3;
    local_140 = dVar4;
    local_138 = dVar2;
    FUN_147a280ba(plVar9,&local_148,0);
    FUN_147a28358(plVar9,*(undefined1 *)(param_2 + 0x428),0);
    local_158 = param_5[2];
    local_168 = *(undefined4 *)param_5;
    uStack_164 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_160 = *(undefined4 *)(param_5 + 1);
    uStack_15c = *(undefined4 *)((longlong)param_5 + 0xc);
    FUN_147a2803c(plVar9,&local_168,0);
    local_178 = param_6[2];
    local_188 = *(undefined4 *)param_6;
    uStack_184 = *(undefined4 *)((longlong)param_6 + 4);
    uStack_180 = *(undefined4 *)(param_6 + 1);
    uStack_17c = *(undefined4 *)((longlong)param_6 + 0xc);
    FUN_147a28090(plVar9,&local_188,0);
    iVar7 = FUN_1457c5e5a(9);
    FUN_1412ff0e6(plVar9,-(iVar7 + *(int *)(param_1 + 0x3c0)));
    iVar7 = *(int *)(param_1 + 0x400);
    *(uint *)(param_1 + 0x400) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x404) < iVar7 + 1U) {
      FUN_148d76528((longlong *)(param_1 + 0x3f8),iVar7);
    }
    FUN_148d764c8((longlong)iVar7 * 0x18 + *(longlong *)(param_1 + 0x3f8),&local_e0);
  }
  FUN_141450f18(param_1,plVar9,0,&DAT_14c846480);
LAB_148d71a3b:
  if ((local_c0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d71e5c FUN_148d71e5c body=572 status=ok
// SIG undefined FUN_148d71e5c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148d71e5c(longlong param_1,longlong param_2,float param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  longlong local_b0 [3];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = FUN_1401ca522(param_2 + 0x460);
  if (lVar2 != 0) {
    local_b0[1] = 0;
    local_b0[2] = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0x3ff00000;
    local_88 = *param_4;
    uStack_84 = param_4[1];
    uStack_80 = (undefined4)*(undefined8 *)(param_4 + 2);
    uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 2) >> 0x20);
    local_78 = *(undefined8 *)(param_4 + 4);
    uStack_70 = 0;
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = 0;
    uStack_5c = 0x3ff00000;
    local_58 = 0x3ff0000000000000;
    uStack_50 = 0;
    local_b0[0] = FUN_144a7a726();
    if ((local_b0[0] != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_b0[0]);
    }
    local_d8 = 1;
    plVar3 = (longlong *)FUN_140fae5dc(param_1,local_b0,0,local_b0 + 1);
    if (plVar3 != (longlong *)0x0) {
      lVar2 = FUN_144a7a726();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        (**(code **)(*plVar3 + 0x588))(plVar3,2);
        uVar4 = FUN_1401ca522(param_2 + 0x460);
        (**(code **)(*plVar3 + 0xa78))(plVar3,uVar4);
        lVar2 = FUN_1402d20ea(param_2 + 0x488);
        if (lVar2 != 0) {
          uVar4 = FUN_1402d20ea(param_2 + 0x488);
          (**(code **)(*plVar3 + 0x638))(plVar3,0,uVar4);
        }
        local_c8 = (double)param_3;
        local_c0 = local_c8;
        local_b8 = local_c8;
        (**(code **)(*plVar3 + 0x478))(plVar3);
        iVar1 = FUN_1457c5e5a(9);
        FUN_1412ff0e6(plVar3,-(iVar1 + *(int *)(param_1 + 0x3c0)));
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(plVar3);
        }
        iVar1 = *(int *)(param_1 + 0x410);
        *(uint *)(param_1 + 0x410) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x414) < iVar1 + 1U) {
          FUN_1474beb7a((longlong *)(param_1 + 0x408),iVar1);
        }
        *(longlong **)(*(longlong *)(param_1 + 0x408) + (longlong)iVar1 * 8) = plVar3;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(plVar3);
        }
      }
      FUN_141450f18(param_1,plVar3,0,local_b0 + 1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7209a FUN_148d7209a body=145 status=ok
// SIG undefined FUN_148d7209a(void)

void FUN_148d7209a(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  if (1e-08 < ABS(*(float *)(param_1 + 0x3d4) + -1.0)) {
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(param_1 + 0x3d4) = 0x3f800000;
    *(undefined2 *)(param_1 + 1000) = 1;
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x3c4);
    *(undefined8 *)(param_1 + 0x3e0) = 0;
    FUN_1407606b4(param_1 + 0x3d0,0);
    *(undefined1 *)(param_1 + 0x3e9) = 1;
  }
  return;
}



// FUNCTION 148d7212c FUN_148d7212c body=336 status=ok
// SIG undefined FUN_148d7212c(void)

void FUN_148d7212c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  double dVar8;
  float fVar9;
  
  FUN_1448e423c();
  lVar1 = param_1 + 0x3d0;
  if (*(char *)(param_1 + 0x3ea) == '\x01') {
    FUN_1407606b4(lVar1,param_2);
  }
  else {
    cVar2 = *(char *)(param_1 + 0x3e9);
    cVar6 = FUN_1407606b4(lVar1,param_2);
    if ((cVar6 == '\0') && (cVar2 == '\0')) goto LAB_148d721ab;
  }
  iVar3 = *(int *)(param_1 + 0x400);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x3f8);
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + 8 + lVar7);
      if (lVar5 != 0) {
        FUN_14472da24(lVar5,DAT_14cbcd050,*(undefined4 *)(param_1 + 0x3d8));
      }
      lVar7 = lVar7 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar7);
  }
LAB_148d721ab:
  dVar8 = (double)(float)param_2 + *(double *)(param_1 + 0x3f0);
  *(double *)(param_1 + 0x3f0) = dVar8;
  fVar9 = *(float *)(param_1 + 0x3c4);
  if (*(float *)(param_1 + 0x3c4) <= *(float *)(param_1 + 0x3cc)) {
    fVar9 = *(float *)(param_1 + 0x3cc);
  }
  if (((double)fVar9 <= dVar8) && (1e-08 < ABS(*(float *)(param_1 + 0x3d4)))) {
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(param_1 + 0x3d4) = 0;
    *(undefined2 *)(param_1 + 1000) = 1;
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x3c8);
    *(undefined8 *)(param_1 + 0x3e0) = 0;
    FUN_1407606b4(lVar1,0);
    *(undefined1 *)(param_1 + 0x3e9) = 1;
  }
  return;
}



// FUNCTION 148d7227c FUN_148d7227c body=125 status=ok
// SIG undefined FUN_148d7227c(void)

undefined8 FUN_148d7227c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14404e428();
  FUN_1406f1d90(uVar1,local_28,*(undefined1 *)(param_1 + 0x38));
  uVar1 = FUN_1447a1f4a(local_28);
  FUN_140b1283a(param_2,L"Melee: ",uVar1);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7232c FUN_148d7232c body=167 status=ok
// SIG undefined FUN_148d7232c(void)

void FUN_148d7232c(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(param_1 + -0x3b28);
  if (*(longlong *)(param_1 + 0x2d28) != 0) {
    FUN_1400bc96c(*(longlong *)(param_1 + 0x2d28) + 0x1b70,&DAT_14cbcd0a0);
  }
  if (plVar4 != (longlong *)0x0) {
    uVar1 = FUN_14069ce7c();
    plVar2 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14069ce7c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_140a82c6c(uVar1,&DAT_14cbcd088,1,1);
      }
    }
  }
  FUN_141363d32(plVar4,DAT_14cbcd090,1);
  return;
}



// FUNCTION 148d72410 FUN_148d72410 body=115 status=ok
// SIG undefined FUN_148d72410(void)

void FUN_148d72410(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14069ce7c();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14069ce7c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_140a82c6c(uVar1,&DAT_14cbcd088,0,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d72484 FUN_148d72484 body=62 status=ok
// SIG undefined FUN_148d72484(void)

void FUN_148d72484(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x178) == '\x02') {
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x3b28) + 0x18))(param_1 + 0x3b28);
                    /* WARNING: Could not recover jumptable at 0x000148d724b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,*(code **)(*plVar1 + 0x30));
    return;
  }
  return;
}



// FUNCTION 148d724c2 FUN_148d724c2 body=79 status=ok
// SIG undefined FUN_148d724c2(void)

undefined8 FUN_148d724c2(longlong param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined7 uVar5;
  byte bVar6;
  longlong lVar7;
  
  param_1 = param_1 + 8;
  lVar7 = param_1;
  cVar1 = FUN_144729dda(param_1);
  bVar6 = (byte)lVar7;
  if (cVar1 != '\0') {
    uVar3 = FUN_14479d2ce(param_1);
    plVar4 = (longlong *)FUN_148d02e18(uVar3);
    bVar6 = (byte)uVar3;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0xe78))(plVar4,0x400000);
      bVar6 = (byte)uVar3;
      uVar5 = (undefined7)((ulonglong)uVar3 >> 8);
      bVar2 = 1;
      goto LAB_148d724dc;
    }
  }
  bVar2 = 0;
  uVar5 = 0;
LAB_148d724dc:
  return CONCAT71(uVar5,bVar2 & bVar6);
}



// FUNCTION 148d72512 FUN_148d72512 body=150 status=ok
// SIG undefined FUN_148d72512(void)

undefined8 *
FUN_148d72512(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14001cc68(0x150,0x10);
  local_48 = *param_4;
  local_40 = *(undefined4 *)(param_4 + 1);
  local_58 = param_6;
  FUN_148d76656(uVar1,param_3,&local_48,param_5);
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d725aa FUN_148d725aa body=270 status=ok
// SIG undefined FUN_148d725aa(void)

undefined8 *
FUN_148d725aa(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_38 = param_5;
  FUN_143dd931c(param_1,param_2,&local_28);
  *param_1 = &PTR_FUN_14b97a2a0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if (*(char *)(param_2 + 0x118) != '\x01') goto LAB_148d72628;
  lVar2 = FUN_148d726b9(param_2);
  lVar1 = param_1[0x25];
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
LAB_148d72695:
      param_1[0x25] = lVar2;
    }
  }
  else if (lVar1 != lVar2) {
    if ((lVar1 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar2);
    goto LAB_148d72695;
  }
  FUN_148d7276a(param_1);
  FUN_144198c30(param_1);
  FUN_148d72944(param_1);
LAB_148d72628:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d726b9 FUN_148d726b9 body=175 status=ok
// SIG undefined FUN_148d726b9(void)

undefined8 FUN_148d726b9(undefined8 param_1)

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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145a5671a();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7276a FUN_148d7276a body=473 status=ok
// SIG undefined FUN_148d7276a(void)

void FUN_148d7276a(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined1 local_f0 [24];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar2 = FUN_148d72ca4();
  lVar3 = (**(code **)(*(longlong *)param_1[3] + 0x180))();
  if (lVar3 != 0) {
    FUN_14419996e(param_1,local_f0);
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_a8 = 0x800000100;
    local_98 = 0;
    local_88 = (longlong *)0x0;
    uVar4 = FUN_1459274fc();
    local_f8 = &local_d8;
    uVar4 = FUN_141137228(lVar3,uVar4,local_f0,&DAT_14c8464f8);
    FUN_14485c47a(param_1 + 0x20,uVar4);
    if (local_98 != 0) {
      plVar5 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar5 = local_78;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    lVar3 = FUN_14479d2ce(param_1 + 0x20);
    if (lVar3 != 0) {
      uVar1 = *(undefined4 *)(lVar2 + 0x44);
      uVar4 = (**(code **)(*(longlong *)(lVar3 + 0x3a8) + 0x18))(lVar3 + 0x3a8);
      FUN_140f8e51a(uVar4,1);
      lVar2 = (**(code **)(*(longlong *)(lVar3 + 0x3a8) + 0x18))(lVar3 + 0x3a8);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      FUN_1478c162e(lVar3,&DAT_149e1e2dc);
      lVar2 = *(longlong *)(lVar3 + 0x390);
      if (lVar2 != 0) {
        lVar3 = FUN_140f974a4();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          FUN_140e259ca(lVar2,uVar1,1);
        }
      }
    }
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x20);
  if ((lVar2 != 0) && (param_1[0x25] != 0)) {
    FUN_148d72eb6(param_1[0x25],lVar2,param_1);
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d72944 FUN_148d72944 body=647 status=ok
// SIG undefined FUN_148d72944(void)

void FUN_148d72944(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulonglong uVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  undefined8 uStack_90;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((*(char *)(*(longlong *)(param_1 + 0x18) + 0x118) == '\x01') &&
      (lVar8 = FUN_14479d2ce(param_1 + 0x100), lVar8 != 0)) &&
     (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))(), lVar9 != 0)) {
    local_78 = 0;
    uStack_70 = 0;
    local_80 = FUN_144a78b9e();
    if ((local_80 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_80);
    }
    FUN_1434f53e8(lVar9,&local_80,&local_78);
    lVar9 = local_78;
    local_98 = (void *)0x0;
    uStack_90 = 0;
    lVar12 = (longlong)(int)uStack_70;
    if (lVar12 != 0) {
      lVar10 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar9 + lVar10);
        cVar5 = FUN_14064aef8(lVar8,uVar2);
        if ((cVar5 == '\0') && (uVar6 = FUN_14419980a(uVar2), uVar4 = uStack_90, -1 < (short)uVar6))
        {
          lVar11 = (longlong)(int)uStack_90;
          uVar7 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
          if (uStack_90._4_4_ < uVar7) {
            FUN_1446f48e2(&local_98,uVar4 & 0xffffffff);
          }
          *(uint *)((longlong)local_98 + lVar11 * 4) = (uint)uVar6;
        }
        lVar10 = lVar10 + 8;
      } while (lVar12 * 8 != lVar10);
    }
    iVar1 = *(int *)(param_1 + 0x120);
    if ((longlong)iVar1 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x118);
      lVar9 = 0;
      do {
        pvVar3 = local_98;
        lVar12 = *(longlong *)(lVar8 + lVar9);
        if (lVar12 != 0) {
          local_a8 = (void *)0x0;
          lVar10 = (longlong)(int)uStack_90;
          local_a0 = (int)uStack_90;
          if (lVar10 == 0) {
            local_9c = 0;
          }
          else {
            FUN_144a06ca8(&local_a8,uStack_90 & 0xffffffff,0);
            memcpy(local_a8,pvVar3,lVar10 << 2);
          }
          FUN_148d7ac4a(lVar12,&local_a8);
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar1 * 8 != lVar9);
    }
    iVar1 = *(int *)(param_1 + 0x110);
    if ((longlong)iVar1 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x108);
      lVar9 = 0;
      do {
        pvVar3 = local_98;
        lVar12 = *(longlong *)(lVar8 + lVar9);
        if (lVar12 != 0) {
          local_b8 = (void *)0x0;
          lVar10 = (longlong)(int)uStack_90;
          local_b0 = (int)uStack_90;
          if (lVar10 == 0) {
            local_ac = 0;
          }
          else {
            FUN_144a06ca8(&local_b8,uStack_90 & 0xffffffff,0);
            memcpy(local_b8,pvVar3,lVar10 << 2);
          }
          FUN_148d72d1a(lVar12,&local_b8);
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar1 * 8 != lVar9);
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d72bcc FUN_148d72bcc body=125 status=ok
// SIG undefined FUN_148d72bcc(void)

void FUN_148d72bcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b97a2a0;
  if (*(char *)(param_1[3] + 0x118) == '\x01') {
    FUN_148d72c4a(param_1);
  }
  if (param_1[0x25] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0x25] = 0;
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1488ec0c8(param_1);
  return;
}



// FUNCTION 148d72c4a FUN_148d72c4a body=89 status=ok
// SIG undefined FUN_148d72c4a(void)

void FUN_148d72c4a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x100);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x128) != 0) {
      FUN_148d72de6(*(longlong *)(param_1 + 0x128),lVar1);
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
    FUN_140aeefbc(lVar1,0,1);
    return;
  }
  return;
}



// FUNCTION 148d72ca4 FUN_148d72ca4 body=115 status=ok
// SIG undefined FUN_148d72ca4(void)

undefined8 FUN_148d72ca4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148d77ad8(*(longlong *)(param_1 + 0x38) + 0x18,&local_28);
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
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d72d1a FUN_148d72d1a body=203 status=ok
// SIG undefined FUN_148d72d1a(void)

void FUN_148d72d1a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar4 = *param_2;
    plVar1 = param_1 + 0x20;
    lVar9 = 0;
    do {
      uVar3 = *(uint *)(lVar4 + lVar9);
      if (-1 < (int)uVar3) {
        if (((int)param_1[0x23] <= (int)uVar3) && (iVar8 = uVar3 - (int)param_1[0x23], -2 < iVar8))
        {
          iVar8 = iVar8 + 1;
          uVar6 = FUN_144a54ea4(plVar1,iVar8);
          FUN_1447c6044(plVar1,uVar6,iVar8,0);
        }
        plVar7 = (longlong *)param_1[0x22];
        if ((longlong *)param_1[0x22] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar2 = (uint *)((longlong)plVar7 + (ulonglong)(uVar3 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
      }
      lVar9 = lVar9 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar9);
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148d72de6 FUN_148d72de6 body=207 status=ok
// SIG undefined FUN_148d72de6(void)

void FUN_148d72de6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar1 = FUN_1459274fc();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      == lVar1 + 0x30)) {
    FUN_148d730c0(&local_38);
    FUN_1409ca370(param_2 + 0x560,param_1,local_38);
    FUN_144a7b126(param_2 + 0x560,&local_29,1);
    FUN_148d731bc(&local_40);
    FUN_1409ca370(param_2 + 0x570,param_1,local_40);
    FUN_144a7b126(param_2 + 0x570,&local_29,1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d72eb6 FUN_148d72eb6 body=168 status=ok
// SIG undefined FUN_148d72eb6(void)

void FUN_148d72eb6(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  lVar1 = FUN_1459274fc();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      == lVar1 + 0x30)) {
    FUN_148d730c0(&local_30);
    FUN_148d73042(param_2 + 0x560,param_1,local_30);
    FUN_148d731bc(&local_38);
    FUN_148d73042(param_2 + 0x570,param_1,local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d72f60 FUN_148d72f60 body=70 status=ok
// SIG undefined FUN_148d72f60(void)

void FUN_148d72f60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_1488ec6b6();
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x118) == '\x01') {
    cVar1 = FUN_14883d960(param_2,L"Finished");
    if (cVar1 != '\0') {
      FUN_148d72c4a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148d72faa FUN_148d72faa body=150 status=ok
// SIG undefined FUN_148d72faa(void)

undefined8 *
FUN_148d72faa(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14001cc68(0x130,0x10);
  local_48 = *param_4;
  local_40 = *(undefined4 *)(param_4 + 1);
  local_58 = param_6;
  FUN_148d725aa(uVar1,param_3,&local_48,param_5);
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d73042 FUN_148d73042 body=125 status=ok
// SIG undefined FUN_148d73042(void)

void FUN_148d73042(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 148d730c0 FUN_148d730c0 body=176 status=ok
// SIG undefined FUN_148d730c0(void)

undefined8 * FUN_148d730c0(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbcd1f8) {
    FUN_144b3d300(&DAT_14cbcd1f8);
    if (DAT_14cbcd1f8 == -1) {
      builtin_wcsncpy(local_38,L"OnActorEntered",0xf);
      FUN_1446f470e(&DAT_14cbcd1f0,local_38,1);
      _Init_thread_footer(&DAT_14cbcd1f8);
    }
  }
  *param_1 = DAT_14cbcd1f0;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d73172 FUN_148d73172 body=73 status=ok
// SIG undefined FUN_148d73172(void)

void FUN_148d73172(longlong param_1,longlong param_2,byte param_3)

{
  if ((param_2 != 0 & param_3 & *(longlong **)(param_1 + 0x28) != (longlong *)0x0) == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))();
    FUN_144199440(*(undefined8 *)(param_1 + 0x28),param_2,0);
    return;
  }
  return;
}



// FUNCTION 148d731bc FUN_148d731bc body=179 status=ok
// SIG undefined FUN_148d731bc(void)

undefined8 * FUN_148d731bc(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbcd204) {
    FUN_144b3d300(&DAT_14cbcd204);
    if (DAT_14cbcd204 == -1) {
      builtin_wcsncpy(local_28,L"OnActorLeft",0xc);
      FUN_1446f470e(&DAT_14cbcd1fc,local_28,1);
      _Init_thread_footer(&DAT_14cbcd204);
    }
  }
  *param_1 = DAT_14cbcd1fc;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d73270 FUN_148d73270 body=73 status=ok
// SIG undefined FUN_148d73270(void)

void FUN_148d73270(longlong param_1,longlong param_2,byte param_3)

{
  if ((param_2 != 0 & param_3 & *(longlong **)(param_1 + 0x28) != (longlong *)0x0) == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))();
    FUN_144199440(*(undefined8 *)(param_1 + 0x28),param_2,1);
    return;
  }
  return;
}



// FUNCTION 148d732ba FUN_148d732ba body=150 status=ok
// SIG undefined FUN_148d732ba(void)

undefined8 *
FUN_148d732ba(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14001cc68(0xf8,0x10);
  local_48 = *param_4;
  local_40 = *(undefined4 *)(param_4 + 1);
  local_58 = param_6;
  FUN_148d77b2c(uVar1,param_3,&local_48,param_5);
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d73352 FUN_148d73352 body=150 status=ok
// SIG undefined FUN_148d73352(void)

undefined8 *
FUN_148d73352(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14001cc68(0x1a0,0x10);
  local_48 = *param_4;
  local_40 = *(undefined4 *)(param_4 + 1);
  local_58 = param_6;
  FUN_148d78160(uVar1,param_3,&local_48,param_5);
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d733e9 FUN_148d733e9 body=257 status=ok
// SIG undefined FUN_148d733e9(void)

longlong * FUN_148d733e9(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x158))();
  FUN_1410078ca(param_2 + 0x10,param_1);
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x18);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x18) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x18) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x1c),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1c) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1410078ca(param_2 + 0x20,param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d73530 FUN_148d73530 body=625 status=ok
// SIG undefined FUN_148d73530(void)

undefined8 *
FUN_148d73530(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0 [4];
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_3;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_a8 = param_5;
  FUN_143dd931c(param_1,param_2,&local_50);
  *param_1 = &PTR_FUN_14b97a310;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x8000000000;
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_148d737a2(param_1);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b97b250;
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
    local_60[2] = lVar3;
    *local_60 = &PTR_FUN_14b97b0f0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_2);
    puVar1[4] = param_1;
    local_68 = DAT_14cbcd0e8;
    local_70 = DAT_14cbcd0e0;
    FUN_1488ec3e0(param_1,&local_70,&local_60);
    local_80 = (undefined8 *)0x0;
    local_78 = 0;
    FUN_1446efa72(&local_80,0,3,0x10);
    puVar1 = local_80;
    local_78 = 3;
    *local_80 = &PTR_LAB_14b97b250;
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
    local_80[2] = lVar3;
    *local_80 = &PTR_FUN_14b97b160;
    local_80[3] = 0;
    FUN_14485c47a(local_80 + 3,param_2);
    puVar1[4] = param_1;
    local_88 = DAT_14cbcd100;
    local_90 = DAT_14cbcd0f8;
    FUN_1488ec3e0(param_1,&local_90,&local_80);
    local_a0[0] = 2;
    local_94 = 0xffffffff;
    local_9c = 0;
    FUN_1488ebe76(param_1,&DAT_14cbcd0e0,local_a0);
    local_a0[0] = 2;
    local_94 = 0xffffffff;
    local_9c = 0;
    FUN_1488ebe76(param_1,&DAT_14cbcd0f8,local_a0);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d737a2 FUN_148d737a2 body=315 status=ok
// SIG undefined FUN_148d737a2(void)

void FUN_148d737a2(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_14479d2ce(*(longlong *)(param_1 + 0x18) + 0x110);
  lVar3 = FUN_14040226a(uVar2,0);
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_14039ffc6(lVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x110))(plVar4);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      puVar1 = local_38;
      local_30 = 3;
      *local_38 = &PTR_LAB_14b41e020;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_38[2] = lVar6;
      *local_38 = &PTR_FUN_14b97b1d0;
      local_38[3] = 0;
      FUN_14485c47a(local_38 + 3,uVar2);
      puVar1[4] = param_1;
      FUN_141180640(uVar5,&local_40,&local_38);
      FUN_1449db362(&local_38);
      *(undefined8 *)(param_1 + 0xf8) = local_40;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


