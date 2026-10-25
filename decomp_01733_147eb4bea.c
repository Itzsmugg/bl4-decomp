// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147eb4bea FUN_147eb4bea body=147 status=ok
// SIG undefined FUN_147eb4bea(void)

void FUN_147eb4bea(longlong param_1,int param_2)

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



// FUNCTION 147eb4c7e FUN_147eb4c7e body=62 status=ok
// SIG undefined FUN_147eb4c7e(void)

void FUN_147eb4c7e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147eb4cbc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147eb4cbc FUN_147eb4cbc body=112 status=ok
// SIG undefined FUN_147eb4cbc(void)

ulonglong FUN_147eb4cbc(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147eb4cf6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_147eb4cf6:
  return param_2 & 0xffffffff;
}



// FUNCTION 147eb4d2c FUN_147eb4d2c body=48 status=ok
// SIG undefined FUN_147eb4d2c(void)

void FUN_147eb4d2c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147eb4d5c FUN_147eb4d5c body=34 status=ok
// SIG undefined FUN_147eb4d5c(void)

undefined8 FUN_147eb4d5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147eb4d98 FUN_147eb4d98 body=29 status=ok
// SIG undefined FUN_147eb4d98(void)

bool FUN_147eb4d98(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147eb4db6 FUN_147eb4db6 body=26 status=ok
// SIG undefined FUN_147eb4db6(void)

bool FUN_147eb4db6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147eb4dd0 FUN_147eb4dd0 body=24 status=ok
// SIG undefined FUN_147eb4dd0(void)

bool FUN_147eb4dd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147eb4df4 FUN_147eb4df4 body=93 status=ok
// SIG undefined FUN_147eb4df4(void)

void FUN_147eb4df4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abe5500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abe5490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147eb4e52 FUN_147eb4e52 body=93 status=ok
// SIG undefined FUN_147eb4e52(void)

void FUN_147eb4e52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abe5500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abe5490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147eb4eb0 FUN_147eb4eb0 body=126 status=ok
// SIG undefined FUN_147eb4eb0(void)

void FUN_147eb4eb0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14abe5500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abe5490;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147eb4f1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147eb4f2e FUN_147eb4f2e body=48 status=ok
// SIG undefined FUN_147eb4f2e(void)

void FUN_147eb4f2e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147eb4f5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147eb4f5e FUN_147eb4f5e body=151 status=ok
// SIG undefined FUN_147eb4f5e(void)

bool FUN_147eb4f5e(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 147eb4ff8 FUN_147eb4ff8 body=132 status=ok
// SIG undefined FUN_147eb4ff8(void)

void FUN_147eb4ff8(longlong param_1,int param_2)

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



// FUNCTION 147eb507e FUN_147eb507e body=48 status=ok
// SIG undefined FUN_147eb507e(void)

void FUN_147eb507e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 147eb50ae FUN_147eb50ae body=147 status=ok
// SIG undefined FUN_147eb50ae(void)

void FUN_147eb50ae(longlong param_1,int param_2)

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



// FUNCTION 147eb5142 FUN_147eb5142 body=34 status=ok
// SIG undefined FUN_147eb5142(void)

undefined8 FUN_147eb5142(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147eb517e FUN_147eb517e body=29 status=ok
// SIG undefined FUN_147eb517e(void)

bool FUN_147eb517e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147eb519c FUN_147eb519c body=26 status=ok
// SIG undefined FUN_147eb519c(void)

bool FUN_147eb519c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147eb51b6 FUN_147eb51b6 body=24 status=ok
// SIG undefined FUN_147eb51b6(void)

bool FUN_147eb51b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147eb51ce FUN_147eb51ce body=93 status=ok
// SIG undefined FUN_147eb51ce(void)

void FUN_147eb51ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14abe5570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147eb522c FUN_147eb522c body=93 status=ok
// SIG undefined FUN_147eb522c(void)

void FUN_147eb522c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14abe5570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147eb528a FUN_147eb528a body=126 status=ok
// SIG undefined FUN_147eb528a(void)

void FUN_147eb528a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14abe5570;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147eb52f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147eb5308 FUN_147eb5308 body=35 status=ok
// SIG undefined FUN_147eb5308(void)

void FUN_147eb5308(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147eb5327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 147eb532c FUN_147eb532c body=130 status=ok
// SIG undefined FUN_147eb532c(void)

bool FUN_147eb532c(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb53b0 FUN_147eb53b0 body=34 status=ok
// SIG undefined FUN_147eb53b0(void)

undefined8 FUN_147eb53b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147eb53ec FUN_147eb53ec body=29 status=ok
// SIG undefined FUN_147eb53ec(void)

bool FUN_147eb53ec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147eb540a FUN_147eb540a body=26 status=ok
// SIG undefined FUN_147eb540a(void)

bool FUN_147eb540a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147eb5424 FUN_147eb5424 body=24 status=ok
// SIG undefined FUN_147eb5424(void)

bool FUN_147eb5424(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147eb543c FUN_147eb543c body=93 status=ok
// SIG undefined FUN_147eb543c(void)

void FUN_147eb543c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14abe55e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147eb549a FUN_147eb549a body=93 status=ok
// SIG undefined FUN_147eb549a(void)

void FUN_147eb549a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14abe55e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147eb54f8 FUN_147eb54f8 body=126 status=ok
// SIG undefined FUN_147eb54f8(void)

void FUN_147eb54f8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14abe55e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147eb5567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147eb5576 FUN_147eb5576 body=35 status=ok
// SIG undefined FUN_147eb5576(void)

void FUN_147eb5576(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147eb5595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 147eb559a FUN_147eb559a body=130 status=ok
// SIG undefined FUN_147eb559a(void)

bool FUN_147eb559a(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb561e FUN_147eb561e body=36 status=ok
// SIG undefined FUN_147eb561e(void)

undefined8 FUN_147eb561e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147eb565c FUN_147eb565c body=29 status=ok
// SIG undefined FUN_147eb565c(void)

bool FUN_147eb565c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147eb567a FUN_147eb567a body=26 status=ok
// SIG undefined FUN_147eb567a(void)

bool FUN_147eb567a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147eb5694 FUN_147eb5694 body=101 status=ok
// SIG undefined FUN_147eb5694(void)

void FUN_147eb5694(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abe5a90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abe5650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147eb56fa FUN_147eb56fa body=101 status=ok
// SIG undefined FUN_147eb56fa(void)

void FUN_147eb56fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abe5a90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abe5650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147eb5760 FUN_147eb5760 body=134 status=ok
// SIG undefined FUN_147eb5760(void)

void FUN_147eb5760(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14abe5a90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abe5650;
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
                    /* WARNING: Could not recover jumptable at 0x000147eb57d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147eb57e6 FUN_147eb57e6 body=50 status=ok
// SIG undefined FUN_147eb57e6(void)

void FUN_147eb57e6(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147eb5815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147eb5818 FUN_147eb5818 body=153 status=ok
// SIG undefined FUN_147eb5818(void)

bool FUN_147eb5818(longlong param_1,undefined4 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 147eb58b4 FUN_147eb58b4 body=42 status=ok
// SIG undefined FUN_147eb58b4(void)

void FUN_147eb58b4(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    uVar1 = DAT_14cb1e7b8;
    param_1[1] = DAT_14cb1e7b0;
    param_1[2] = uVar1;
    param_1[3] = DAT_14cb1e7c0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 147eb58de FUN_147eb58de body=132 status=ok
// SIG undefined FUN_147eb58de(void)

void FUN_147eb58de(longlong param_1,int param_2)

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



// FUNCTION 147eb5964 FUN_147eb5964 body=62 status=ok
// SIG undefined FUN_147eb5964(void)

void FUN_147eb5964(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147eb59a2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 147eb59a2 FUN_147eb59a2 body=93 status=ok
// SIG undefined FUN_147eb59a2(void)

ulonglong FUN_147eb59a2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 147eb5a2c FUN_147eb5a2c body=36 status=ok
// SIG undefined FUN_147eb5a2c(void)

undefined8 FUN_147eb5a2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147eb5a6c FUN_147eb5a6c body=93 status=ok
// SIG undefined FUN_147eb5a6c(void)

void FUN_147eb5a6c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14abe5720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147eb5aca FUN_147eb5aca body=126 status=ok
// SIG undefined FUN_147eb5aca(void)

void FUN_147eb5aca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14abe5720;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147eb5b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147eb5b48 FUN_147eb5b48 body=21 status=ok
// SIG undefined FUN_147eb5b48(void)

undefined8 FUN_147eb5b48(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147eb5b5e FUN_147eb5b5e body=36 status=ok
// SIG undefined FUN_147eb5b5e(void)

undefined8 FUN_147eb5b5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147eb5b9c FUN_147eb5b9c body=29 status=ok
// SIG undefined FUN_147eb5b9c(void)

bool FUN_147eb5b9c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147eb5bba FUN_147eb5bba body=93 status=ok
// SIG undefined FUN_147eb5bba(void)

void FUN_147eb5bba(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14abe57e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147eb5c18 FUN_147eb5c18 body=126 status=ok
// SIG undefined FUN_147eb5c18(void)

void FUN_147eb5c18(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14abe57e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147eb5c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147eb5c96 FUN_147eb5c96 body=40 status=ok
// SIG undefined FUN_147eb5c96(void)

void FUN_147eb5c96(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147eb5cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147eb5cbe FUN_147eb5cbe body=36 status=ok
// SIG undefined FUN_147eb5cbe(void)

undefined8 FUN_147eb5cbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147eb5cfc FUN_147eb5cfc body=29 status=ok
// SIG undefined FUN_147eb5cfc(void)

bool FUN_147eb5cfc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147eb5d1a FUN_147eb5d1a body=26 status=ok
// SIG undefined FUN_147eb5d1a(void)

bool FUN_147eb5d1a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147eb5d34 FUN_147eb5d34 body=93 status=ok
// SIG undefined FUN_147eb5d34(void)

void FUN_147eb5d34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abe5a20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abe5850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147eb5d92 FUN_147eb5d92 body=93 status=ok
// SIG undefined FUN_147eb5d92(void)

void FUN_147eb5d92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abe5a20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abe5850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147eb5df0 FUN_147eb5df0 body=126 status=ok
// SIG undefined FUN_147eb5df0(void)

void FUN_147eb5df0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14abe5a20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abe5850;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147eb5e5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147eb5e6e FUN_147eb5e6e body=40 status=ok
// SIG undefined FUN_147eb5e6e(void)

void FUN_147eb5e6e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147eb5e93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147eb5e98 FUN_147eb5e98 body=89 status=ok
// SIG undefined FUN_147eb5e98(void)

void FUN_147eb5e98(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar2 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 147eb5ef2 FUN_147eb5ef2 body=132 status=ok
// SIG undefined FUN_147eb5ef2(void)

void FUN_147eb5ef2(longlong param_1,int param_2)

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



// FUNCTION 147eb5f78 FUN_147eb5f78 body=136 status=ok
// SIG undefined FUN_147eb5f78(void)

void FUN_147eb5f78(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_147eb6002(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147eb6002 FUN_147eb6002 body=149 status=ok
// SIG undefined FUN_147eb6002(void)

void FUN_147eb6002(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,0x18);
  return;
}



// FUNCTION 147eb6098 FUN_147eb6098 body=53 status=ok
// SIG undefined FUN_147eb6098(void)

ulonglong FUN_147eb6098(int *param_1,int *param_2)

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



// FUNCTION 147eb60ce FUN_147eb60ce body=260 status=ok
// SIG undefined FUN_147eb60ce(void)

undefined4 * FUN_147eb60ce(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147eb61d4(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_30 = uVar2;
  local_30[1] = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = *(int *)(param_1 + 0x48) - 1U & ((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2);
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_147eb62ba(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb61d4 FUN_147eb61d4 body=230 status=ok
// SIG undefined FUN_147eb61d4(void)

int * FUN_147eb61d4(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 147eb62ba FUN_147eb62ba body=436 status=ok
// SIG undefined FUN_147eb62ba(void)

void FUN_147eb62ba(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 147eb6470 FUN_147eb6470 body=201 status=ok
// SIG undefined FUN_147eb6470(void)

void FUN_147eb6470(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar1 = lVar3 + (longlong)param_2 * 0x18;
  lVar9 = (longlong)*(int *)(lVar1 + 0x14);
  iVar8 = *(int *)((longlong)plVar6 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar3 + 0x10 + lVar9 * 0x18);
    } while (iVar8 != param_2);
    puVar5 = (undefined4 *)(lVar3 + lVar9 * 0x18 + 0x10);
  }
  *puVar5 = *(undefined4 *)(lVar1 + 0x10);
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar5 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar5 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  puVar5[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147eb653a FUN_147eb653a body=132 status=ok
// SIG undefined FUN_147eb653a(void)

void FUN_147eb653a(longlong param_1,int param_2)

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



// FUNCTION 147eb65c0 FUN_147eb65c0 body=48 status=ok
// SIG undefined FUN_147eb65c0(void)

void FUN_147eb65c0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x58,8);
  }
  return;
}



// FUNCTION 147eb65f0 FUN_147eb65f0 body=322 status=ok
// SIG undefined FUN_147eb65f0(void)

void FUN_147eb65f0(longlong *param_1)

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



// FUNCTION 147eb6734 FUN_147eb6734 body=311 status=ok
// SIG undefined FUN_147eb6734(void)

void FUN_147eb6734(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
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
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb686c FUN_147eb686c body=48 status=ok
// SIG undefined FUN_147eb686c(void)

void FUN_147eb686c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 147eb689c FUN_147eb689c body=48 status=ok
// SIG undefined FUN_147eb689c(void)

void FUN_147eb689c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147eb68cc FUN_147eb68cc body=48 status=ok
// SIG undefined FUN_147eb68cc(void)

void FUN_147eb68cc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 147eb68fc FUN_147eb68fc body=48 status=ok
// SIG undefined FUN_147eb68fc(void)

void FUN_147eb68fc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,2);
  }
  return;
}



// FUNCTION 147eb692c FUN_147eb692c body=132 status=ok
// SIG undefined FUN_147eb692c(void)

void FUN_147eb692c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147eb69b1 FUN_147eb69b1 body=46 status=ok
// SIG undefined FUN_147eb69b1(void)

void FUN_147eb69b1(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -0xe) = 0;
      *(undefined8 *)(puVar1 + -0xc) = 0;
      *(undefined8 *)(puVar1 + -10) = 0;
      *(undefined8 *)(puVar1 + -8) = 0;
      *(undefined8 *)(puVar1 + -6) = 0;
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147eb69e0 FUN_147eb69e0 body=143 status=ok
// SIG undefined FUN_147eb69e0(void)

void FUN_147eb69e0(longlong param_1,int param_2)

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



// FUNCTION 147eb6a70 FUN_147eb6a70 body=89 status=ok
// SIG undefined FUN_147eb6a70(void)

void FUN_147eb6a70(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x58 + *param_1);
  FUN_145cde789(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x58 + (longlong)_Dst),(longlong)iVar2 * 0x58);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147eb6aca FUN_147eb6aca body=62 status=ok
// SIG undefined FUN_147eb6aca(void)

void FUN_147eb6aca(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147eb6b08(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 147eb6b08 FUN_147eb6b08 body=104 status=ok
// SIG undefined FUN_147eb6b08(void)

ulonglong FUN_147eb6b08(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147eb6b3e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_147eb6b3e:
  return param_2 & 0xffffffff;
}



// FUNCTION 147eb6b70 FUN_147eb6b70 body=115 status=ok
// SIG undefined FUN_147eb6b70(void)

void FUN_147eb6b70(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147eb6be4 FUN_147eb6be4 body=34 status=ok
// SIG undefined FUN_147eb6be4(void)

undefined8 FUN_147eb6be4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147eb6c20 FUN_147eb6c20 body=29 status=ok
// SIG undefined FUN_147eb6c20(void)

bool FUN_147eb6c20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147eb6c3e FUN_147eb6c3e body=26 status=ok
// SIG undefined FUN_147eb6c3e(void)

bool FUN_147eb6c3e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147eb6c58 FUN_147eb6c58 body=24 status=ok
// SIG undefined FUN_147eb6c58(void)

bool FUN_147eb6c58(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147eb6c70 FUN_147eb6c70 body=101 status=ok
// SIG undefined FUN_147eb6c70(void)

void FUN_147eb6c70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abe5500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abe58c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147eb6cd6 FUN_147eb6cd6 body=101 status=ok
// SIG undefined FUN_147eb6cd6(void)

void FUN_147eb6cd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abe5500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abe58c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147eb6d3c FUN_147eb6d3c body=134 status=ok
// SIG undefined FUN_147eb6d3c(void)

void FUN_147eb6d3c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14abe5500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abe58c0;
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
                    /* WARNING: Could not recover jumptable at 0x000147eb6db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147eb6dc2 FUN_147eb6dc2 body=52 status=ok
// SIG undefined FUN_147eb6dc2(void)

void FUN_147eb6dc2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147eb6df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147eb6df6 FUN_147eb6df6 body=155 status=ok
// SIG undefined FUN_147eb6df6(void)

bool FUN_147eb6df6(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 147eb6e92 FUN_147eb6e92 body=265 status=ok
// SIG undefined FUN_147eb6e92(void)

undefined4 * FUN_147eb6e92(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  ushort *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147eb6f9c(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  *(undefined4 *)local_30 = *(undefined4 *)*param_3;
  *(undefined8 *)(local_30 + 4) = *puVar1;
  *(undefined8 *)(local_30 + 8) = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  local_30[0xc] = 0xffff;
  local_30[0xd] = 0xffff;
  uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar5 = 1;
  if (3 < uVar4) {
    uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
    uVar4 = *(int *)(param_1 + 0x48) - 1U & (uint)(*local_30 ^ local_30[1]);
    *(uint *)(local_30 + 0xe) = uVar4;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 0xc) =
         *(undefined4 *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar4) * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar4) * 4) = local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar5;
    FUN_147eb7082(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb6f9c FUN_147eb6f9c body=229 status=ok
// SIG undefined FUN_147eb6f9c(void)

int * FUN_147eb6f9c(longlong *param_1,int *param_2)

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



// FUNCTION 147eb7082 FUN_147eb7082 body=431 status=ok
// SIG undefined FUN_147eb7082(void)

void FUN_147eb7082(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = (int)param_1[9] - 1U &
                (uint)(*(ushort *)(lVar2 + lVar6) ^ *(ushort *)(lVar2 + 2 + lVar6));
        *(uint *)(lVar2 + 0x1c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 147eb7232 FUN_147eb7232 body=145 status=ok
// SIG undefined FUN_147eb7232(void)

void FUN_147eb7232(longlong *param_1,ushort *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar5 = (ulonglong)((int)param_1[9] - 1U & (uint)(*param_2 ^ param_2[1]));
    iVar1 = *(int *)((longlong)plVar3 + uVar5 * 4);
    if (iVar1 != -1) {
      piVar4 = (int *)((longlong)plVar3 + uVar5 * 4);
      do {
        lVar2 = *param_1;
        lVar6 = (longlong)iVar1 * 0x20;
        if ((param_2[1] == *(ushort *)(lVar2 + 2 + lVar6)) &&
           (*param_2 == *(ushort *)(lVar2 + lVar6))) {
          FUN_147eb72c4(param_1);
        }
        else {
          piVar4 = (int *)(lVar2 + lVar6 + 0x18);
        }
        iVar1 = *piVar4;
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147eb72c4 FUN_147eb72c4 body=90 status=ok
// SIG undefined FUN_147eb72c4(void)

void FUN_147eb72c4(longlong *param_1,int param_2)

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
  FUN_147eb731e();
  return;
}



// FUNCTION 147eb731e FUN_147eb731e body=192 status=ok
// SIG undefined FUN_147eb731e(void)

void FUN_147eb731e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  
  plVar7 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
  if (plVar7 != (longlong *)0x0) {
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
  lVar4 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar4 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x20 + 4) = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar7 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar5 = (byte)param_2 & 0x1f;
  puVar3 = (uint *)((longlong)plVar7 + (longlong)(iVar8 >> 5) * 4);
  *puVar3 = *puVar3 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  return;
}



// FUNCTION 147eb73de FUN_147eb73de body=197 status=ok
// SIG undefined FUN_147eb73de(void)

void FUN_147eb73de(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb1eba8;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cb1ebb4 = DAT_14cb1ebb4 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb1eba0 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb1eba0 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb1ebb4 = DAT_14cb1ebb4 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_147eb7478;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cb1ebb4 = DAT_14cb1ebb4 + -1;
LAB_147eb7478:
  FUN_14474d06a(&DAT_14cb1eba0,0);
  return;
}



// FUNCTION 147eb74a4 FUN_147eb74a4 body=175 status=ok
// SIG undefined FUN_147eb74a4(void)

undefined4 * FUN_147eb74a4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  pvVar2 = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_140817052(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  pvVar2 = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1447a127e(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1);
  }
  param_1[0xc] = param_2[0xc];
  return param_1;
}



// FUNCTION 147eb7554 FUN_147eb7554 body=143 status=ok
// SIG undefined FUN_147eb7554(void)

void FUN_147eb7554(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147eb75e4 FUN_147eb75e4 body=337 status=ok
// SIG undefined FUN_147eb75e4(void)

undefined4 * FUN_147eb75e4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147eb7736(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_147eb781c(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147eb790c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb7736 FUN_147eb7736 body=230 status=ok
// SIG undefined FUN_147eb7736(void)

int * FUN_147eb7736(longlong *param_1,int *param_2)

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



// FUNCTION 147eb781c FUN_147eb781c body=125 status=ok
// SIG undefined FUN_147eb781c(void)

undefined8 FUN_147eb781c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147eb789a((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147eb789a FUN_147eb789a body=114 status=ok
// SIG undefined FUN_147eb789a(void)

void FUN_147eb789a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 147eb790c FUN_147eb790c body=473 status=ok
// SIG undefined FUN_147eb790c(void)

void FUN_147eb790c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 147eb7ae6 FUN_147eb7ae6 body=48 status=ok
// SIG undefined FUN_147eb7ae6(void)

void FUN_147eb7ae6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147eb7b16 FUN_147eb7b16 body=147 status=ok
// SIG undefined FUN_147eb7b16(void)

void FUN_147eb7b16(longlong param_1,int param_2)

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



// FUNCTION 147eb7baa FUN_147eb7baa body=800 status=ok
// SIG undefined FUN_147eb7baa(void)

void FUN_147eb7baa(longlong param_1,uint param_2)

{
  ushort *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0x18 + -0x18;
    local_358 = param_1;
    fVar21 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar21 + fVar21);
    plVar14 = &local_358;
    do {
      puVar7 = (undefined8 *)*plVar14;
      puVar15 = (undefined8 *)plVar14[1];
      iVar17 = (int)plVar14[2];
      iVar8 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar7) >> 3);
      puVar18 = puVar15;
      puVar19 = puVar7;
      if (iVar17 != 0) {
LAB_147eb7c75:
        uVar10 = iVar8 * -0x55555555 + 1;
        if (8 < (int)uVar10) {
          uVar11 = (ulonglong)(uVar10 >> 1);
          uVar2 = puVar7[uVar11 * 3 + 2];
          uVar3 = puVar7[uVar11 * 3];
          uVar4 = (puVar7 + uVar11 * 3)[1];
          puVar7[uVar11 * 3 + 2] = puVar7[2];
          uVar5 = puVar7[1];
          puVar7[uVar11 * 3] = *puVar7;
          (puVar7 + uVar11 * 3)[1] = uVar5;
          puVar7[2] = uVar2;
          *puVar7 = uVar3;
          puVar7[1] = uVar4;
          puVar12 = puVar15 + 3;
          puVar9 = puVar7;
          do {
            puVar6 = puVar9 + 3;
            puVar16 = puVar9 + 3;
            do {
              puVar9 = puVar16;
              puVar13 = puVar6;
              if (puVar15 < puVar9) break;
              puVar6 = puVar13 + 3;
              puVar16 = puVar9 + 3;
            } while (*(ushort *)((longlong)puVar7 + 0x12) <= *(ushort *)((longlong)puVar9 + 0x12));
            puVar6 = puVar12 + -6;
            do {
              puVar16 = puVar12;
              puVar20 = puVar6;
              puVar12 = puVar16 + -3;
              if (puVar12 <= puVar7) break;
              puVar6 = puVar20 + -3;
            } while (*(ushort *)((longlong)puVar16 + -6) <= *(ushort *)((longlong)puVar7 + 0x12));
            if (puVar12 < puVar9) goto LAB_147eb7d60;
            uVar2 = puVar9[2];
            uVar3 = *puVar9;
            uVar4 = puVar9[1];
            puVar9[2] = puVar16[-1];
            uVar5 = puVar16[-2];
            *puVar9 = *puVar12;
            puVar9[1] = uVar5;
            puVar16[-1] = uVar2;
            *puVar12 = uVar3;
            puVar16[-2] = uVar4;
          } while( true );
        }
        for (; puVar18 = puVar7, puVar19 = puVar7, puVar7 < puVar15; puVar15 = puVar15 + -3) {
          while (puVar12 = puVar18, puVar18 = puVar19 + 3, puVar18 <= puVar15) {
            puVar1 = (ushort *)((longlong)puVar19 + 0x2a);
            puVar19 = puVar18;
            if (*(ushort *)((longlong)puVar12 + 0x12) <= *puVar1) {
              puVar18 = puVar12;
            }
          }
          local_48 = puVar12[2];
          local_58 = *puVar12;
          uStack_50 = puVar12[1];
          uVar3 = local_58;
          uVar4 = uStack_50;
          puVar12[2] = puVar15[2];
          uVar2 = puVar15[1];
          *puVar12 = *puVar15;
          puVar12[1] = uVar2;
          puVar15[2] = local_48;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar15 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar15 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_50._4_4_;
          local_58 = uVar3;
          uStack_50 = uVar4;
        }
        goto LAB_147eb7ea9;
      }
LAB_147eb7ebe:
      FUN_147eb7ecb(puVar7);
LAB_147eb7ea9:
      plVar14 = plVar14 + -3;
    } while (&local_358 <= plVar14);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147eb7d60:
  local_48 = puVar7[2];
  local_58 = *puVar7;
  uStack_50 = puVar7[1];
  uVar3 = local_58;
  uVar4 = uStack_50;
  puVar7[2] = puVar16[-1];
  uVar2 = puVar16[-2];
  *puVar7 = *puVar12;
  puVar7[1] = uVar2;
  puVar16[-1] = local_48;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar12 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar16 + -0x14) = local_58._4_4_;
  *(undefined4 *)(puVar16 + -2) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar16 + -0xc) = uStack_50._4_4_;
  iVar17 = iVar17 + -1;
  puVar16 = puVar16 + -6;
  local_58 = uVar3;
  uStack_50 = uVar4;
  if ((longlong)puVar20 - (longlong)puVar19 < (longlong)puVar18 - (longlong)puVar13) {
    if (puVar9 < puVar15) {
      *plVar14 = (longlong)puVar9;
      plVar14[1] = (longlong)puVar15;
      *(int *)(plVar14 + 2) = iVar17;
      plVar14 = plVar14 + 3;
    }
    puVar13 = puVar7;
    if (puVar12 <= puVar7 + 3) goto LAB_147eb7ea9;
  }
  else {
    if (puVar7 + 3 < puVar12) {
      *plVar14 = (longlong)puVar7;
      plVar14[1] = (longlong)puVar16;
      *(int *)(plVar14 + 2) = iVar17;
      plVar14 = plVar14 + 3;
    }
    puVar7 = puVar9;
    puVar16 = puVar15;
    puVar20 = puVar15;
    if (puVar15 <= puVar9) goto LAB_147eb7ea9;
  }
  iVar8 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar13) >> 3);
  puVar15 = puVar16;
  puVar18 = puVar20;
  puVar19 = puVar13;
  if (iVar17 == 0) goto LAB_147eb7ebe;
  goto LAB_147eb7c75;
}



// FUNCTION 147eb7ecb FUN_147eb7ecb body=582 status=ok
// SIG undefined FUN_147eb7ecb(void)

void FUN_147eb7ecb(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar8;
joined_r0x000147eb7eff:
    do {
      iVar10 = iVar8 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar8 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           (*(ushort *)((longlong)param_1 + (longlong)iVar11 * 0x18 + 0x12) <=
            *(ushort *)((longlong)param_1 + (longlong)iVar10 * 0x18 + 0x12))) {
          iVar10 = iVar11;
        }
        if (*(ushort *)((longlong)param_1 + (longlong)iVar10 * 0x18 + 0x12) <
            *(ushort *)((longlong)param_1 + (longlong)iVar8 * 0x18 + 0x12)) {
          puVar2 = param_1 + (longlong)iVar8 * 3;
          puVar3 = param_1 + (longlong)iVar10 * 3;
          local_18 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_20._4_4_;
          iVar8 = iVar10;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x000147eb7eff;
        }
      }
      bVar13 = iVar12 != 0;
      iVar8 = iVar12 + -1;
      iVar12 = iVar8;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_18 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar9 * 3 + 2];
      uVar6 = (param_1 + uVar9 * 3)[1];
      *param_1 = param_1[uVar9 * 3];
      param_1[1] = uVar6;
      param_1[uVar9 * 3 + 2] = local_18;
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar9 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            iVar8 = iVar8 + 2;
            iVar11 = iVar10;
            if (((longlong)iVar8 < (longlong)uVar9) &&
               (*(ushort *)((longlong)param_1 + (longlong)iVar8 * 0x18 + 0x12) <=
                *(ushort *)((longlong)param_1 + (longlong)iVar10 * 0x18 + 0x12))) {
              iVar11 = iVar8;
            }
            if (*(ushort *)((longlong)param_1 + (longlong)iVar12 * 0x18 + 0x12) <=
                *(ushort *)((longlong)param_1 + (longlong)iVar11 * 0x18 + 0x12)) break;
            puVar2 = param_1 + (longlong)iVar12 * 3;
            puVar3 = param_1 + (longlong)iVar11 * 3;
            uVar4 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = uVar4;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar8 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_18 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          bVar13 = 2 < uVar9;
          uVar9 = uVar1;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar13);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eb8112 FUN_147eb8112 body=96 status=ok
// SIG undefined FUN_147eb8112(void)

longlong * FUN_147eb8112(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  *(short *)(param_1 + 2) = (short)param_2[2];
  return param_1;
}



// FUNCTION 147eb8172 FUN_147eb8172 body=147 status=ok
// SIG undefined FUN_147eb8172(void)

void FUN_147eb8172(longlong param_1,int param_2)

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



// FUNCTION 147eb8206 FUN_147eb8206 body=190 status=ok
// SIG undefined FUN_147eb8206(void)

void FUN_147eb8206(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147eb82c4(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 147eb82c4 FUN_147eb82c4 body=132 status=ok
// SIG undefined FUN_147eb82c4(void)

void FUN_147eb82c4(longlong param_1,int param_2)

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



// FUNCTION 147eb834a FUN_147eb834a body=303 status=ok
// SIG undefined FUN_147eb834a(void)

void FUN_147eb834a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar4 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar5;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar4 == (plVar2[lVar6] == lVar3));
      if (bVar4 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 147eb847a FUN_147eb847a body=132 status=ok
// SIG undefined FUN_147eb847a(void)

void FUN_147eb847a(longlong param_1,int param_2)

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



// FUNCTION 147eb8500 FUN_147eb8500 body=62 status=ok
// SIG undefined FUN_147eb8500(void)

void FUN_147eb8500(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147eb853e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147eb853e FUN_147eb853e body=93 status=ok
// SIG undefined FUN_147eb853e(void)

ulonglong FUN_147eb853e(uint param_1,uint param_2)

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



// FUNCTION 147eb859c FUN_147eb859c body=48 status=ok
// SIG undefined FUN_147eb859c(void)

void FUN_147eb859c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147eb85cc FUN_147eb85cc body=132 status=ok
// SIG undefined FUN_147eb85cc(void)

void FUN_147eb85cc(longlong param_1,int param_2)

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



// FUNCTION 147eb8652 FUN_147eb8652 body=147 status=ok
// SIG undefined FUN_147eb8652(void)

void FUN_147eb8652(longlong param_1,int param_2)

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



// FUNCTION 147eb86e6 FUN_147eb86e6 body=86 status=ok
// SIG undefined FUN_147eb86e6(void)

void FUN_147eb86e6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,2);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 2)) {
    uVar2 = uVar1 >> 2 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,2);
  }
  return;
}



// FUNCTION 147eb873c FUN_147eb873c body=132 status=ok
// SIG undefined FUN_147eb873c(void)

void FUN_147eb873c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147eb87c1 FUN_147eb87c1 body=566 status=ok
// SIG undefined FUN_147eb87c1(void)

void FUN_147eb87c1(longlong param_1,uint param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar10 = &local_348;
    do {
      puVar4 = (undefined4 *)*plVar10;
      puVar11 = (undefined4 *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar4) >> 2);
      puVar9 = puVar4;
      puVar14 = puVar11;
      if (iVar13 != 0) {
LAB_147eb8882:
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = iVar6 + 1U >> 1;
          uVar2 = puVar4[uVar7];
          puVar4[uVar7] = *puVar4;
          *puVar4 = uVar2;
          puVar8 = puVar11 + 1;
          puVar5 = puVar4;
          do {
            puVar3 = puVar5 + 1;
            puVar12 = puVar5 + 1;
            do {
              puVar5 = puVar12;
              puVar15 = puVar3;
              if (puVar11 < puVar5) break;
              puVar3 = puVar15 + 1;
              puVar12 = puVar5 + 1;
            } while (*(ushort *)((longlong)puVar4 + 2) <= *(ushort *)((longlong)puVar5 + 2));
            puVar3 = puVar8 + -2;
            do {
              puVar12 = puVar8;
              puVar16 = puVar3;
              puVar8 = puVar12 + -1;
              if (puVar8 <= puVar4) break;
              puVar3 = puVar16 + -1;
            } while (*(ushort *)((longlong)puVar12 + -2) <= *(ushort *)((longlong)puVar4 + 2));
            if (puVar8 < puVar5) goto LAB_147eb8900;
            uVar2 = *puVar5;
            *puVar5 = *puVar8;
            *puVar8 = uVar2;
          } while( true );
        }
        for (; puVar9 = puVar4, puVar14 = puVar4, puVar4 < puVar11; puVar11 = puVar11 + -1) {
          while (puVar8 = puVar9, puVar9 = puVar14 + 1, puVar9 <= puVar11) {
            puVar1 = (ushort *)((longlong)puVar14 + 6);
            puVar14 = puVar9;
            if (*(ushort *)((longlong)puVar8 + 2) <= *puVar1) {
              puVar9 = puVar8;
            }
          }
          uVar2 = *puVar8;
          *puVar8 = *puVar11;
          *puVar11 = uVar2;
        }
        goto LAB_147eb89d6;
      }
LAB_147eb89eb:
      FUN_147eb89f8(puVar4);
LAB_147eb89d6:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147eb8900:
  uVar2 = *puVar4;
  *puVar4 = *puVar8;
  *puVar8 = uVar2;
  iVar13 = iVar13 + -1;
  puVar12 = puVar12 + -2;
  if ((longlong)puVar16 - (longlong)puVar9 < (longlong)puVar14 - (longlong)puVar15) {
    if (puVar5 < puVar11) {
      *plVar10 = (longlong)puVar5;
      plVar10[1] = (longlong)puVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    puVar15 = puVar4;
    if (puVar8 <= puVar4 + 1) goto LAB_147eb89d6;
  }
  else {
    if (puVar4 + 1 < puVar8) {
      *plVar10 = (longlong)puVar4;
      plVar10[1] = (longlong)puVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    puVar4 = puVar5;
    puVar12 = puVar11;
    puVar16 = puVar11;
    if (puVar11 <= puVar5) goto LAB_147eb89d6;
  }
  iVar6 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar15) >> 2);
  puVar9 = puVar15;
  puVar11 = puVar12;
  puVar14 = puVar16;
  if (iVar13 == 0) goto LAB_147eb89eb;
  goto LAB_147eb8882;
}



// FUNCTION 147eb89f8 FUN_147eb89f8 body=313 status=ok
// SIG undefined FUN_147eb89f8(void)

void FUN_147eb89f8(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar2;
joined_r0x000147eb8a19:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar7 = iVar2 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           (*(ushort *)((longlong)param_1 + (longlong)iVar7 * 4 + 2) <=
            *(ushort *)((longlong)param_1 + (longlong)iVar5 * 4 + 2))) {
          iVar5 = iVar7;
        }
        lVar9 = (longlong)iVar2;
        lVar6 = (longlong)iVar5;
        if (*(ushort *)((longlong)param_1 + lVar6 * 4 + 2) <
            *(ushort *)((longlong)param_1 + lVar9 * 4 + 2)) {
          uVar1 = param_1[lVar9];
          param_1[lVar9] = param_1[lVar6];
          param_1[lVar6] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x000147eb8a19;
        }
      }
      bVar10 = iVar8 != 0;
      iVar2 = iVar8 + -1;
      iVar8 = iVar2;
    } while (bVar10);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar7 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(ushort *)((longlong)param_1 + (longlong)iVar2 * 4 + 2) <=
                *(ushort *)((longlong)param_1 + (longlong)iVar5 * 4 + 2))) {
              iVar7 = iVar2;
            }
            lVar6 = (longlong)iVar8;
            lVar9 = (longlong)iVar7;
            if (*(ushort *)((longlong)param_1 + lVar6 * 4 + 2) <=
                *(ushort *)((longlong)param_1 + lVar9 * 4 + 2)) break;
            uVar1 = param_1[lVar6];
            param_1[lVar6] = param_1[lVar9];
            param_1[lVar9] = uVar1;
            iVar2 = iVar7 * 2;
            iVar5 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 147eb8b32 FUN_147eb8b32 body=269 status=ok
// SIG undefined FUN_147eb8b32(void)

undefined4 * FUN_147eb8b32(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  ushort *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147eb8c40(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  *local_30 = *(ushort *)*param_3;
  *(undefined8 *)(local_30 + 4) = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_30 + 8) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)(local_30 + 0xc) = *(undefined1 *)(puVar1 + 2);
  local_30[0x10] = 0xffff;
  local_30[0x11] = 0xffff;
  uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar5 = 1;
  if (3 < uVar4) {
    uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
    uVar4 = *(int *)(param_1 + 0x48) - 1U & (uint)*local_30;
    *(uint *)(local_30 + 0x12) = uVar4;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 0x10) =
         *(undefined4 *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar4) * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar4) * 4) = local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar5;
    FUN_147eb8d6a(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb8c40 FUN_147eb8c40 body=230 status=ok
// SIG undefined FUN_147eb8c40(void)

int * FUN_147eb8c40(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 147eb8d26 FUN_147eb8d26 body=68 status=ok
// SIG undefined FUN_147eb8d26(void)

void FUN_147eb8d26(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147eb8d6a(param_1);
  return;
}



// FUNCTION 147eb8d6a FUN_147eb8d6a body=410 status=ok
// SIG undefined FUN_147eb8d6a(void)

void FUN_147eb8d6a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar5 * 0x28);
        *(uint *)(lVar2 + 0x24 + lVar5 * 0x28) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 147eb8f06 FUN_147eb8f06 body=302 status=ok
// SIG undefined FUN_147eb8f06(void)

undefined4 * FUN_147eb8f06(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  ulonglong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147eb9036(param_1,local_38);
  puVar1 = (ulonglong *)param_3[1];
  uVar2 = *(ulonglong *)*param_3;
  *local_30 = uVar2;
  local_30[1] = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = *(int *)(param_1 + 0x48) - 1U & (uVar5 >> 0x10 ^ uVar5);
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_147eb9160(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb9036 FUN_147eb9036 body=230 status=ok
// SIG undefined FUN_147eb9036(void)

int * FUN_147eb9036(longlong *param_1,int *param_2)

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



// FUNCTION 147eb911c FUN_147eb911c body=68 status=ok
// SIG undefined FUN_147eb911c(void)

void FUN_147eb911c(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147eb9160(param_1);
  return;
}



// FUNCTION 147eb9160 FUN_147eb9160 body=474 status=ok
// SIG undefined FUN_147eb9160(void)

void FUN_147eb9160(longlong *param_1)

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



// FUNCTION 147eb933c FUN_147eb933c body=201 status=ok
// SIG undefined FUN_147eb933c(void)

void FUN_147eb933c(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar1 = lVar3 + (longlong)param_2 * 0x18;
  lVar9 = (longlong)*(int *)(lVar1 + 0x14);
  iVar8 = *(int *)((longlong)plVar6 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar3 + 0x10 + lVar9 * 0x18);
    } while (iVar8 != param_2);
    puVar5 = (undefined4 *)(lVar3 + lVar9 * 0x18 + 0x10);
  }
  *puVar5 = *(undefined4 *)(lVar1 + 0x10);
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar5 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar5 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  puVar5[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147eb9406 FUN_147eb9406 body=235 status=ok
// SIG undefined FUN_147eb9406(void)

void FUN_147eb9406(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar3 + (longlong)param_2 * 0x28;
  lVar9 = (longlong)*(int *)(lVar1 + 0x24);
  iVar8 = *(int *)((longlong)plVar5 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar6 = (undefined4 *)((longlong)plVar5 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar3 + 0x20 + lVar9 * 0x28);
    } while (iVar8 != param_2);
    puVar6 = (undefined4 *)(lVar3 + lVar9 * 0x28 + 0x20);
  }
  *puVar6 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1449db362(*param_1 + (longlong)param_2 * 0x28 + 8);
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar6 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar6 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  puVar6[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147eb94f2 FUN_147eb94f2 body=48 status=ok
// SIG undefined FUN_147eb94f2(void)

void FUN_147eb94f2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,2,2);
  }
  return;
}



// FUNCTION 147eb9522 FUN_147eb9522 body=102 status=ok
// SIG undefined FUN_147eb9522(void)

void FUN_147eb9522(longlong *param_1,short *param_2)

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
      if (*(short *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 1) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 2;
    } while (lVar4 * 2 != uVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147eb9588(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(short *)(lVar2 + lVar4 * 2) = *param_2;
  return;
}



// FUNCTION 147eb9588 FUN_147eb9588 body=130 status=ok
// SIG undefined FUN_147eb9588(void)

void FUN_147eb9588(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 * 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,2,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147eb960b FUN_147eb960b body=69 status=ok
// SIG undefined FUN_147eb960b(void)

undefined8 FUN_147eb960b(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(param_1 + lVar3) != *(longlong *)(param_2 + lVar3)) {
        return 0;
      }
      lVar1 = *(longlong *)(param_1 + 8 + lVar3);
      lVar2 = *(longlong *)(param_2 + 8 + lVar3);
      if (lVar1 == 0) {
        if (lVar2 != 0) {
          return 0;
        }
      }
      else {
        if (lVar2 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar1 + 0x10) != *(longlong *)(lVar2 + 0x10)) {
          return 0;
        }
      }
      lVar3 = lVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 147eb9650 FUN_147eb9650 body=239 status=ok
// SIG undefined FUN_147eb9650(void)

undefined8 FUN_147eb9650(longlong param_1,ushort param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (param_2 == 0xffff || lVar5 == 0) {
LAB_147eb9685:
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      if (*(ushort *)(lVar5 + 0x4c) <= param_2) {
        lVar5 = ((ulonglong)param_2 - (ulonglong)*(ushort *)(lVar5 + 0x4c)) * 0x18 +
                *(longlong *)(lVar5 + 0x38);
        if (((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) ||
           (lVar4 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10), lVar1 = FUN_1412dbfa6(),
           lVar4 != lVar1)) goto LAB_147eb9685;
        if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(param_1 + 0x140) <= (int)(uint)param_2)) {
          lVar4 = 0;
        }
        else {
          lVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + (ulonglong)param_2 * 2) +
                  *(longlong *)(param_1 + 0x128);
        }
        puVar2 = (undefined8 *)
                 ((ulonglong)((uint)*(byte *)(*(longlong *)(lVar5 + 8) + 0x2b) * 2 & 4) + lVar4);
        if (puVar2 == (undefined8 *)0x0) goto LAB_147eb9685;
        local_30 = *puVar2;
        uVar3 = FUN_14479d2ce();
        break;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147eb9740 FUN_147eb9740 body=239 status=ok
// SIG undefined FUN_147eb9740(void)

undefined8 FUN_147eb9740(longlong param_1,ushort param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (param_2 == 0xffff || lVar5 == 0) {
LAB_147eb9775:
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      if (*(ushort *)(lVar5 + 0x4c) <= param_2) {
        lVar5 = ((ulonglong)param_2 - (ulonglong)*(ushort *)(lVar5 + 0x4c)) * 0x18 +
                *(longlong *)(lVar5 + 0x38);
        if (((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) ||
           (lVar4 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10), lVar1 = FUN_145b60a44(),
           lVar4 != lVar1)) goto LAB_147eb9775;
        if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(param_1 + 0x140) <= (int)(uint)param_2)) {
          lVar4 = 0;
        }
        else {
          lVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + (ulonglong)param_2 * 2) +
                  *(longlong *)(param_1 + 0x128);
        }
        puVar2 = (undefined8 *)
                 ((ulonglong)((uint)*(byte *)(*(longlong *)(lVar5 + 8) + 0x2b) * 2 & 4) + lVar4);
        if (puVar2 == (undefined8 *)0x0) goto LAB_147eb9775;
        local_30 = *puVar2;
        uVar3 = FUN_14479d2ce();
        break;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147eb9830 FUN_147eb9830 body=184 status=ok
// SIG undefined FUN_147eb9830(void)

undefined8 FUN_147eb9830(longlong param_1,ushort param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (param_2 != 0xffff && lVar4 != 0) {
    do {
      if (*(ushort *)(lVar4 + 0x4c) <= param_2) {
        lVar4 = ((ulonglong)param_2 - (ulonglong)*(ushort *)(lVar4 + 0x4c)) * 0x18 +
                *(longlong *)(lVar4 + 0x38);
        if (lVar4 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar4 + 8) == 0) {
          return 0;
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10);
        lVar1 = FUN_145b60b2e();
        if (lVar3 != lVar1) {
          return 0;
        }
        if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(param_1 + 0x140) <= (int)(uint)param_2)) {
          lVar3 = 0;
        }
        else {
          lVar3 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + (ulonglong)param_2 * 2) +
                  *(longlong *)(param_1 + 0x128);
        }
        puVar2 = (undefined1 *)
                 ((ulonglong)((uint)*(byte *)(*(longlong *)(lVar4 + 8) + 0x2b) * 2 & 4) + lVar3);
        if (puVar2 == (undefined1 *)0x0) {
          return 0;
        }
        return CONCAT71((int7)((ulonglong)puVar2 >> 8),*puVar2);
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 147eb98e8 FUN_147eb98e8 body=192 status=ok
// SIG undefined FUN_147eb98e8(void)

undefined4 FUN_147eb98e8(longlong param_1,ushort param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (param_2 != 0xffff && lVar4 != 0) {
    do {
      if (*(ushort *)(lVar4 + 0x4c) <= param_2) {
        lVar4 = ((ulonglong)param_2 - (ulonglong)*(ushort *)(lVar4 + 0x4c)) * 0x18 +
                *(longlong *)(lVar4 + 0x38);
        if (lVar4 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar4 + 8) == 0) {
          return 0;
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10);
        lVar1 = FUN_145b60dec();
        if (lVar3 != lVar1) {
          return 0;
        }
        if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(param_1 + 0x140) <= (int)(uint)param_2)) {
          lVar3 = 0;
        }
        else {
          lVar3 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + (ulonglong)param_2 * 2) +
                  *(longlong *)(param_1 + 0x128);
        }
        puVar2 = (undefined4 *)
                 ((ulonglong)((uint)*(byte *)(*(longlong *)(lVar4 + 8) + 0x2b) * 2 & 4) + lVar3);
        if (puVar2 == (undefined4 *)0x0) {
          return 0;
        }
        return *puVar2;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 147eb99a8 FUN_147eb99a8 body=200 status=ok
// SIG undefined FUN_147eb99a8(void)

undefined4 FUN_147eb99a8(longlong param_1,ushort param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (param_2 != 0xffff && lVar4 != 0) {
    do {
      if (*(ushort *)(lVar4 + 0x4c) <= param_2) {
        lVar4 = ((ulonglong)param_2 - (ulonglong)*(ushort *)(lVar4 + 0x4c)) * 0x18 +
                *(longlong *)(lVar4 + 0x38);
        if (lVar4 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar4 + 8) == 0) {
          return 0;
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10);
        lVar1 = FUN_145a751d4();
        if (lVar3 != lVar1) {
          return 0;
        }
        if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(param_1 + 0x140) <= (int)(uint)param_2)) {
          lVar3 = 0;
        }
        else {
          lVar3 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + (ulonglong)param_2 * 2) +
                  *(longlong *)(param_1 + 0x128);
        }
        puVar2 = (undefined4 *)
                 ((ulonglong)((uint)*(byte *)(*(longlong *)(lVar4 + 8) + 0x2b) * 2 & 4) + lVar3);
        if (puVar2 == (undefined4 *)0x0) {
          return 0;
        }
        return *puVar2;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 147eb9a70 FUN_147eb9a70 body=188 status=ok
// SIG undefined FUN_147eb9a70(void)

undefined8 FUN_147eb9a70(longlong param_1,ushort param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (param_2 != 0xffff && lVar4 != 0) {
    do {
      if (*(ushort *)(lVar4 + 0x4c) <= param_2) {
        lVar4 = ((ulonglong)param_2 - (ulonglong)*(ushort *)(lVar4 + 0x4c)) * 0x18 +
                *(longlong *)(lVar4 + 0x38);
        if (lVar4 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar4 + 8) == 0) {
          return 0;
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10);
        lVar1 = FUN_145b60d02();
        if (lVar3 != lVar1) {
          return 0;
        }
        if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(param_1 + 0x140) <= (int)(uint)param_2)) {
          lVar3 = 0;
        }
        else {
          lVar3 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + (ulonglong)param_2 * 2) +
                  *(longlong *)(param_1 + 0x128);
        }
        pcVar2 = (char *)((ulonglong)((uint)*(byte *)(*(longlong *)(lVar4 + 8) + 0x2b) * 2 & 4) +
                         lVar3);
        if (pcVar2 == (char *)0x0) {
          return 0;
        }
        return CONCAT71((int7)((ulonglong)pcVar2 >> 8),*pcVar2 != '\0');
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 147eb9b2c FUN_147eb9b2c body=298 status=ok
// SIG undefined FUN_147eb9b2c(void)

undefined8 * FUN_147eb9b2c(longlong param_1,undefined8 *param_2,ushort param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x120);
  if (param_3 != 0xffff && lVar6 != 0) {
    do {
      if (*(ushort *)(lVar6 + 0x4c) <= param_3) {
        uVar5 = (ulonglong)param_3;
        lVar6 = (uVar5 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38);
        if (((lVar6 != 0) && (*(longlong *)(lVar6 + 8) != 0)) &&
           (lVar4 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x10), lVar3 = FUN_145b60fc0(),
           lVar4 == lVar3)) {
          lVar6 = *(longlong *)(lVar6 + 8);
          pbVar1 = (byte *)(lVar6 + 0x2b);
          if ((*pbVar1 & 2) != 0) {
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x148) + uVar5 * 8);
          }
          if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(param_1 + 0x140) <= (int)(uint)param_3))
          {
            lVar4 = 0;
          }
          else {
            lVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + uVar5 * 2) +
                    *(longlong *)(param_1 + 0x128);
          }
          if ((ulonglong)((uint)*pbVar1 * 2 & 4) + lVar4 != 0) {
            *param_2 = 0;
            iVar2 = *(int *)(lVar6 + 0x38);
            _Src = *(void **)(lVar6 + 0x30);
            goto LAB_147eb9b6b;
          }
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  *param_2 = 0;
  _Src = DAT_14cb1efe8;
  iVar2 = DAT_14cb1eff0;
LAB_147eb9b6b:
  *(int *)(param_2 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar2,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar2 * 2);
  }
  return param_2;
}



// FUNCTION 147eb9c56 FUN_147eb9c56 body=217 status=ok
// SIG undefined FUN_147eb9c56(void)

undefined8 * FUN_147eb9c56(longlong param_1,undefined8 *param_2,ushort param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x120);
  puVar4 = &DAT_14cb1efe0;
  if (param_3 != 0xffff && lVar5 != 0) {
    do {
      if (*(ushort *)(lVar5 + 0x4c) <= param_3) {
        lVar5 = ((ulonglong)param_3 - (ulonglong)*(ushort *)(lVar5 + 0x4c)) * 0x18 +
                *(longlong *)(lVar5 + 0x38);
        if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
           (lVar3 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10), lVar2 = FUN_145b60ed6(),
           lVar3 == lVar2)) {
          if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(param_1 + 0x140) <= (int)(uint)param_3))
          {
            lVar3 = 0;
          }
          else {
            lVar3 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + (ulonglong)param_3 * 2)
                    + *(longlong *)(param_1 + 0x128);
          }
          puVar1 = (undefined8 *)
                   (lVar3 + (ulonglong)(*(byte *)(*(longlong *)(lVar5 + 8) + 0x2b) & 2) * 2);
          puVar4 = &DAT_14cb1efe0;
          if (puVar1 != (undefined8 *)0x0) {
            puVar4 = puVar1;
          }
        }
        break;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  *param_2 = *puVar4;
  return param_2;
}



// FUNCTION 147eb9d30 FUN_147eb9d30 body=225 status=ok
// SIG undefined FUN_147eb9d30(void)

undefined8 * FUN_147eb9d30(longlong param_1,undefined8 *param_2,ushort param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x120);
  puVar5 = (undefined8 *)&DAT_14cb1efc8;
  if (param_3 != 0xffff && lVar6 != 0) {
    do {
      if (*(ushort *)(lVar6 + 0x4c) <= param_3) {
        lVar6 = ((ulonglong)param_3 - (ulonglong)*(ushort *)(lVar6 + 0x4c)) * 0x18 +
                *(longlong *)(lVar6 + 0x38);
        if (((lVar6 != 0) && (*(longlong *)(lVar6 + 8) != 0)) &&
           (lVar4 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x10), lVar3 = FUN_145a752c0(),
           lVar4 == lVar3)) {
          if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(param_1 + 0x140) <= (int)(uint)param_3))
          {
            lVar4 = 0;
          }
          else {
            lVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + (ulonglong)param_3 * 2)
                    + *(longlong *)(param_1 + 0x128);
          }
          puVar1 = (undefined8 *)
                   (lVar4 + (ulonglong)(*(byte *)(*(longlong *)(lVar6 + 8) + 0x2b) & 2) * 2);
          puVar5 = (undefined8 *)&DAT_14cb1efc8;
          if (puVar1 != (undefined8 *)0x0) {
            puVar5 = puVar1;
          }
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  param_2[2] = puVar5[2];
  uVar2 = puVar5[1];
  *param_2 = *puVar5;
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 147eb9e12 FUN_147eb9e12 body=182 status=ok
// SIG undefined FUN_147eb9e12(void)

void FUN_147eb9e12(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb1ee58;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14cb1ee64 = DAT_14cb1ee64 + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb1ee50 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb1ee50 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb1ee64 = DAT_14cb1ee64 + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147eb9ea1;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14cb1ee64 = DAT_14cb1ee64 + -1;
LAB_147eb9ea1:
  FUN_14474d06a(&DAT_14cb1ee50,0);
  return;
}



// FUNCTION 147eb9ec8 FUN_147eb9ec8 body=53 status=ok
// SIG undefined FUN_147eb9ec8(void)

ulonglong FUN_147eb9ec8(int *param_1,int *param_2)

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



// FUNCTION 147eb9f02 FUN_147eb9f02 body=77 status=ok
// SIG undefined FUN_147eb9f02(void)

void FUN_147eb9f02(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
      param_1 = (longlong *)FUN_147eb9f50(param_1,param_2,param_3);
    }
    if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147eb9f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2f0))(param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 147eb9f50 FUN_147eb9f50 body=107 status=ok
// SIG undefined FUN_147eb9f50(void)

longlong FUN_147eb9f50(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  longlong lVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x2d8))();
  lVar4 = 0;
  if ((uVar2 != 0) &&
     (piVar3 = (int *)(param_3 - (ulonglong)(uVar2 + 3 & 0xfffffffc)), piVar3 != (int *)0x0)) {
    iVar1 = *piVar3;
    lVar4 = 0;
    if ((-1 < (longlong)iVar1) &&
       (((lVar4 = 0, iVar1 < *(int *)(param_2 + 400) &&
         (lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar1 * 8),
         DAT_14c950c29 == '\x01')) && (lVar4 != 0)))) {
      FUN_1456cec3c(lVar4);
    }
  }
  return lVar4;
}



// FUNCTION 147eb9fbc FUN_147eb9fbc body=77 status=ok
// SIG undefined FUN_147eb9fbc(void)

void FUN_147eb9fbc(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0xb) & 2) != 0) {
    if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
      param_1 = (longlong *)FUN_147eb9f50(param_1,param_2,param_3);
    }
    if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147eb9ff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2f8))(param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 147eba00a FUN_147eba00a body=290 status=ok
// SIG undefined FUN_147eba00a(void)

ulonglong FUN_147eba00a(longlong *param_1,undefined8 param_2,longlong param_3,float param_4,
                       float *param_5)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 unaff_RBP;
  undefined7 uVar4;
  ulonglong uVar3;
  longlong lVar5;
  float fVar6;
  
  if ((*(byte *)(param_1 + 0xb) & 4) == 0) {
    if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
LAB_147eba116:
      plVar2 = (longlong *)FUN_147eb9f50(param_1,param_2,param_3);
      goto LAB_147eba059;
    }
  }
  else {
    plVar2 = param_1;
    if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) goto LAB_147eba116;
LAB_147eba059:
    if ((plVar2 != (longlong *)0x0) && ((*(byte *)(plVar2 + 0xb) & 4) != 0)) {
      uVar4 = (undefined7)((ulonglong)unaff_RBP >> 8);
      if ((*(byte *)(plVar2 + 0xb) & 8) == 0) {
        (**(code **)(*plVar2 + 0x300))(plVar2,param_2,param_3,param_4);
        uVar3 = CONCAT71(uVar4,1);
        fVar6 = 0.0;
      }
      else {
        uVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
        lVar5 = 0;
        if (uVar1 != 0) {
          lVar5 = param_3 - (ulonglong)(uVar1 + 3 & 0xfffffffc);
        }
        fVar6 = *(float *)(lVar5 + 4) - param_4;
        *(float *)(lVar5 + 4) = fVar6;
        param_4 = param_4 + *(float *)(lVar5 + 8);
        *(float *)(lVar5 + 8) = param_4;
        uVar3 = CONCAT71(uVar4,fVar6 <= 0.0);
        if (fVar6 <= 0.0) {
          *(undefined8 *)(lVar5 + 4) = 0;
          (**(code **)(*plVar2 + 0x300))(plVar2,param_2,param_3,param_4);
          fVar6 = *(float *)(lVar5 + 4);
        }
        if (*param_5 <= fVar6) goto LAB_147eba03a;
      }
      *param_5 = fVar6;
      goto LAB_147eba03a;
    }
  }
  uVar3 = 0;
LAB_147eba03a:
  return uVar3 & 0xffffffff;
}



// FUNCTION 147eba12c FUN_147eba12c body=276 status=ok
// SIG undefined FUN_147eba12c(void)

/* WARNING: Removing unreachable block (ram,0x000147eba224) */

void FUN_147eba12c(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = local_28;
  uVar3 = local_20;
  if ((param_4 == 1) && ((*(byte *)(param_1 + 0xb) & 8) != 0)) {
    uVar4 = (**(code **)(*param_1 + 0x2d8))();
    lVar5 = 0;
    if (uVar4 != 0) {
      lVar5 = param_3 - (ulonglong)(uVar4 + 3 & 0xfffffffc);
    }
    FUN_1406112c4(&local_38,(double)*(float *)(lVar5 + 4),1);
    puVar7 = local_38;
    if (local_30 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_28,L"next tick: %ss",puVar7);
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_5,iVar1);
    }
    lVar5 = *param_5;
    lVar6 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar5 + lVar6) = 0;
    *(undefined8 *)(lVar5 + lVar6) = local_28;
    local_28 = 0;
    uVar2 = local_28;
    *(undefined4 *)(lVar5 + 8 + lVar6) = (undefined4)local_20;
    *(undefined4 *)(lVar5 + 0xc + lVar6) = local_20._4_4_;
    local_20 = 0;
    uVar3 = local_20;
    local_20 = 0;
    local_28 = 0;
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
      uVar2 = local_28;
      uVar3 = local_20;
    }
  }
  local_20 = uVar3;
  local_28 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eba264 FUN_147eba264 body=130 status=ok
// SIG undefined FUN_147eba264(void)

undefined4 FUN_147eba264(longlong *param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 0xb) & 4) == 0) {
    if ((*(byte *)((longlong)param_1 + 0x55) & 4) == 0) {
      return 0x7f7fffff;
    }
  }
  else {
    plVar2 = param_1;
    if ((*(byte *)((longlong)param_1 + 0x55) & 4) == 0) goto LAB_147eba295;
  }
  plVar2 = (longlong *)FUN_147eb9f50(param_1,param_2,param_3);
LAB_147eba295:
  uVar4 = 0x7f7fffff;
  if (((plVar2 != (longlong *)0x0) && ((*(byte *)(plVar2 + 0xb) & 4) != 0)) &&
     (uVar4 = 0, (*(byte *)(param_1 + 0xb) & 8) != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x2d8))(0);
    lVar3 = 0;
    if (uVar1 != 0) {
      lVar3 = param_3 - (ulonglong)(uVar1 + 3 & 0xfffffffc);
    }
    uVar4 = *(undefined4 *)(lVar3 + 4);
  }
  return uVar4;
}



// FUNCTION 147eba2f0 FUN_147eba2f0 body=229 status=ok
// SIG undefined FUN_147eba2f0(void)

int FUN_147eba2f0(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  
  if ((int)param_1[0xc] != 0) {
    iVar2 = FUN_147eba3d6(param_1,param_2,
                          (int)*(char *)(*(longlong *)
                                          (*(longlong *)(*param_2 + 0x168) + 0x30 +
                                          (ulonglong)*(ushort *)(*param_2 + 0x2d8) * 0x58) +
                                        (ulonglong)*(ushort *)((longlong)param_1 + 0x52)),*param_3);
    while (((-1 < iVar2 && (iVar2 < (int)param_1[0xc])) &&
           ((*(byte *)((longlong)param_2 + 0x4c) & 2) == 0))) {
      cVar1 = FUN_147eba4ca(param_1,*param_2,*(undefined2 *)(*param_2 + 0x2d8),iVar2);
      if (cVar1 != '\0') {
        FUN_147eba786(param_1,param_2,iVar2);
        return iVar2;
      }
      *param_3 = 1;
      if (((*(byte *)(param_1 + 0xf) & 0x40) == 0) ||
         (cVar1 = (**(code **)(*param_1 + 0x328))(param_1,param_2,iVar2,param_3), cVar1 != '\0')) {
        FUN_147eba81c(param_1,param_2,iVar2,param_3);
      }
      iVar2 = FUN_147eba3d6(param_1,param_2,iVar2,*param_3);
    }
  }
  return -2;
}



// FUNCTION 147eba3d6 FUN_147eba3d6 body=242 status=ok
// SIG undefined FUN_147eba3d6(void)

void FUN_147eba3d6(longlong *param_1,longlong *param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_78 [44];
  ushort local_4c;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(ushort *)(*param_2 + 0x2d8);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x168) + 0x30 + (ulonglong)uVar1 * 0x58);
  uVar2 = *(ushort *)((longlong)param_1 + 0x52);
  if ((param_3 == -1) && (*(short *)((longlong)param_2 + 0x2c) != -1)) {
    local_4a = (undefined2)param_1[10];
    local_4c = uVar1;
    cVar4 = FUN_147ea8026(&local_4c,(longlong)param_2 + 0x2c);
    if (cVar4 != '\0') {
      FUN_147ebb2d4(param_1,(ulonglong)uVar1,(longlong)param_2 + 0x2c);
      goto LAB_147eba45c;
    }
  }
  if ((*(char *)(lVar3 + 1 + (ulonglong)uVar2) == -1) ||
     ((*(longlong *)(*param_2 + 0x1f0) != 0 && ((*(byte *)(*param_2 + 0x1fb) & 1) == 0)))) {
    (**(code **)(*param_1 + 0x330))(param_1,param_2,param_3,param_4);
  }
  else {
    *(undefined1 *)(lVar3 + 1 + (ulonglong)uVar2) = 0xff;
  }
LAB_147eba45c:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eba4ca FUN_147eba4ca body=698 status=ok
// SIG undefined FUN_147eba4ca(void)

ulonglong FUN_147eba4ca(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  longlong lVar8;
  byte unaff_DIL;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  uint *local_98;
  char *local_90;
  longlong local_88;
  longlong local_80;
  char local_71;
  uint local_70;
  uint local_6c;
  longlong local_68 [3];
  undefined8 uStack_50;
  ulonglong local_48;
  undefined7 uVar7;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((int)param_4 < 0) || (*(int *)(param_1 + 0x60) <= (int)param_4)) {
    uVar6 = 0;
  }
  else {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x58) + 0x18 + (ulonglong)param_4 * 0x30);
    uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
    uVar6 = CONCAT71(uVar7,1);
    if (iVar3 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x58) + (ulonglong)param_4 * 0x30;
      local_88 = (longlong)param_3;
      local_80 = local_88 * 0x58 + *(longlong *)(param_2 + 0x168);
      if (*(int *)(lVar9 + 0x28) == 0) {
        if (0 < iVar3) {
          lVar10 = 0;
          while (lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + lVar10 * 8), lVar8 != 0) {
            uVar4 = FUN_147ebb282(lVar8,param_2,
                                  (ulonglong)*(ushort *)(lVar8 + 0x52) +
                                  *(longlong *)(local_80 + 0x30));
            uVar6 = (ulonglong)uVar4;
            FUN_147ea9c90(param_2,lVar8,local_88,uVar4);
            if (((char)uVar4 == '\0') || (lVar10 = lVar10 + 1, *(int *)(lVar9 + 0x18) <= lVar10))
            goto LAB_147eba6a2;
          }
          uVar6 = 0;
          FUN_147ea9c90(param_2,0,local_88,0);
        }
      }
      else {
        local_68[2] = 0;
        uStack_50 = 0;
        local_68[0] = 0;
        local_68[1] = 0;
        local_6c = 0xffffffff;
        local_70 = 0xffffffff;
        local_71 = '\x01';
        uVar6 = CONCAT71(uVar7,1);
        if (0 < *(int *)(lVar9 + 0x28)) {
          lVar10 = 0;
          do {
            uVar5 = uStack_50;
            lVar8 = *(longlong *)(lVar9 + 0x20);
            bVar1 = *(byte *)(lVar8 + lVar10 * 4);
            if (bVar1 < 2) {
              if (bVar1 == 1) {
                if ((int)uStack_50 == 0) {
                  uVar4 = 0;
                  bVar11 = true;
                }
                else {
                  bVar1 = *(byte *)(local_68[2] + 3 + (longlong)((int)uStack_50 + -1) * 4);
                  bVar11 = (bVar1 & 1) == 0;
                  uVar4 = bVar1 >> 1 & 1;
                }
                if (local_71 == '\x01') {
                  local_71 = '\0';
                  local_6c = (uint)*(ushort *)(lVar8 + 2 + lVar10 * 4);
                }
                if (bVar11) {
                  lVar8 = *(longlong *)
                           (*(longlong *)(lVar9 + 0x10) +
                           (ulonglong)*(ushort *)(lVar8 + 2 + lVar10 * 4) * 8);
                  uVar4 = FUN_147ebb282(lVar8,param_2,
                                        (ulonglong)*(ushort *)(lVar8 + 0x52) +
                                        *(longlong *)(local_80 + 0x30));
                }
                local_90 = &local_71;
                local_98 = &local_6c;
                uVar4 = FUN_14384abc6(local_68,local_68 + 2,uVar4,&local_70);
                uVar6 = (ulonglong)uVar4;
                if ((int)uStack_50 == 0) {
                  uVar5 = 0;
                  if (0 < (int)local_70) {
                    uVar5 = (ulonglong)local_70;
                  }
                  FUN_147ea9c90(param_2,*(undefined8 *)(*(longlong *)(lVar9 + 0x10) + uVar5 * 8),
                                local_88,uVar4);
                  break;
                }
              }
            }
            else {
              uVar2 = *(ushort *)(lVar8 + 2 + lVar10 * 4);
              lVar8 = (longlong)(int)uStack_50;
              uVar4 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
              if (uStack_50._4_4_ < uVar4) {
                FUN_147ed3850(local_68 + 2,uVar5 & 0xffffffff);
              }
              unaff_DIL = unaff_DIL & 0xfe;
              *(uint *)(local_68[2] + lVar8 * 4) =
                   (uint)bVar1 << 0x10 | (uint)unaff_DIL << 0x18 | (uint)uVar2;
              FUN_1400020e8(local_68,&DAT_149e16f6c);
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(int *)(lVar9 + 0x28));
        }
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        if (local_68[2] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_147eba6a2:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffff01;
}



// FUNCTION 147eba786 FUN_147eba786 body=149 status=ok
// SIG undefined FUN_147eba786(void)

void FUN_147eba786(longlong *param_1,longlong *param_2,int param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  
  lVar2 = *(longlong *)
           (*(longlong *)(*param_2 + 0x168) + 0x30 + (ulonglong)*(ushort *)(*param_2 + 0x2d8) * 0x58
           );
  uVar1 = *(ushort *)((longlong)param_1 + 0x52);
  lVar3 = param_1[0xb];
  if ((*(byte *)(param_1 + 0xf) & 0x10) != 0) {
    cVar4 = (**(code **)(*param_1 + 0x318))(param_1,param_2,param_3);
    if (cVar4 == '\0') goto LAB_147eba7e6;
  }
  FUN_147eba98a(param_1,param_2,param_3);
LAB_147eba7e6:
  lVar3 = *(longlong *)((longlong)param_3 * 0x30 + lVar3);
  if (lVar3 != 0) {
    FUN_147ebaa7c(lVar3,param_2);
  }
  *(char *)(lVar2 + (ulonglong)uVar1) = (char)param_3;
  return;
}



// FUNCTION 147eba81c FUN_147eba81c body=271 status=ok
// SIG undefined FUN_147eba81c(void)

void FUN_147eba81c(longlong param_1,longlong *param_2,uint param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined2 local_50;
  undefined1 local_4e;
  byte local_4d;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_2;
  uVar1 = *(undefined2 *)(lVar3 + 0x2d8);
  if (0 < *(int *)(*(longlong *)(param_1 + 0x58) + 0x18 + (longlong)(int)param_3 * 0x30)) {
    lVar3 = *(longlong *)(param_1 + 0x58) + (longlong)(int)param_3 * 0x30;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar4 * 8);
      FUN_147ebb1d2(lVar2,param_2,param_4);
      if ((*(byte *)(lVar2 + 100) | 2) == 3) {
        local_60[1] = 0;
        local_4e = 1;
        local_4d = local_4d & 0xfc;
        local_60[0] = lVar2;
        local_50 = uVar1;
        FUN_147ea881a(param_2,local_60);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(lVar3 + 0x18));
    lVar3 = *param_2;
  }
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x60) <= (int)param_3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)param_3 * 0x30);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)param_3 * 0x30 + 8);
    }
  }
  FUN_147ea7368(lVar3,lVar4,uVar1,*param_4);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eba92c FUN_147eba92c body=93 status=ok
// SIG undefined FUN_147eba92c(void)

ulonglong FUN_147eba92c(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_3 + 0x48) != param_1) {
    return (ulonglong)
           (uint)(int)*(char *)(*(longlong *)
                                 (*(longlong *)(*param_2 + 0x168) + 0x30 +
                                 (ulonglong)*(ushort *)(*param_2 + 0x2d8) * 0x58) +
                               (ulonglong)*(ushort *)(param_1 + 0x52));
  }
  if (0 < (longlong)*(int *)(param_1 + 0x60)) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x58) + 8);
    uVar1 = 0;
    do {
      if ((plVar2[-1] == param_3) || (*plVar2 == param_3)) {
        return uVar1 & 0xffffffff;
      }
      uVar1 = uVar1 + 1;
      plVar2 = plVar2 + 6;
    } while ((longlong)*(int *)(param_1 + 0x60) != uVar1);
  }
  return 0xfffffffe;
}



// FUNCTION 147eba98a FUN_147eba98a body=240 status=ok
// SIG undefined FUN_147eba98a(void)

void FUN_147eba98a(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined2 local_38;
  undefined1 local_36;
  byte local_35;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x58) + 0x18 + (longlong)param_3 * 0x30)) {
    lVar1 = *(longlong *)(param_1 + 0x58) + (longlong)param_3 * 0x30;
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar3 * 8);
      FUN_147ebb10e(lVar2,param_2);
      if (*(byte *)(lVar2 + 100) - 2 < 2) {
        local_38 = *(undefined2 *)(*param_2 + 0x2d8);
        local_36 = 1;
LAB_147ebaa11:
        local_48[1] = 0;
        local_35 = local_35 & 0xfc;
        local_48[0] = lVar2;
        FUN_147ea881a(param_2,local_48);
      }
      else if (*(byte *)(lVar2 + 100) == 1) {
        local_38 = *(undefined2 *)(*param_2 + 0x2d8);
        local_36 = 2;
        goto LAB_147ebaa11;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(lVar1 + 0x18));
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ebaa7c FUN_147ebaa7c body=219 status=ok
// SIG undefined FUN_147ebaa7c(void)

void FUN_147ebaa7c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  byte local_2d;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined2 *)
   (*(longlong *)
     (*(longlong *)(*param_2 + 0x168) + 0x30 + (ulonglong)*(ushort *)(*param_2 + 0x2d8) * 0x58) +
   (ulonglong)*(ushort *)((longlong)param_1 + 0x52)) = 0xffff;
  if ((*(byte *)(param_1 + 0xf) & 4) != 0) {
    (**(code **)(*param_1 + 0x308))(param_1,param_2);
  }
  if (0 < (int)param_1[0xe]) {
    lVar1 = 0;
    do {
      local_30 = *(undefined2 *)(*param_2 + 0x2d8);
      local_40 = *(undefined8 *)(param_1[0xd] + lVar1 * 8);
      local_38 = 0;
      local_2e = 1;
      local_2d = local_2d & 0xfc;
      FUN_147ea881a(param_2,&local_40);
      FUN_147ebafee(*(undefined8 *)(param_1[0xd] + lVar1 * 8),param_2);
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[0xe]);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebab58 FUN_147ebab58 body=109 status=ok
// SIG undefined FUN_147ebab58(void)

void FUN_147ebab58(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_3 + 0x48) == param_1) {
    uVar2 = 0xfffffffe;
    if (0 < (longlong)*(int *)(param_1 + 0x60)) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x58) + 8);
      uVar3 = 0;
      do {
        if ((plVar1[-1] == param_3) || (*plVar1 == param_3)) {
          uVar2 = uVar3 & 0xffffffff;
          break;
        }
        uVar3 = uVar3 + 1;
        plVar1 = plVar1 + 6;
      } while ((longlong)*(int *)(param_1 + 0x60) != uVar3);
    }
  }
  else {
    uVar2 = (ulonglong)
            (uint)(int)*(char *)(*(longlong *)
                                  (*(longlong *)(*param_2 + 0x168) + 0x30 +
                                  (ulonglong)*(ushort *)(*param_2 + 0x2d8) * 0x58) +
                                (ulonglong)*(ushort *)(param_1 + 0x52));
  }
  FUN_147ebabc6(param_1,param_2,uVar2);
  return;
}



// FUNCTION 147ebabc6 FUN_147ebabc6 body=284 status=ok
// SIG undefined FUN_147ebabc6(void)

void FUN_147ebabc6(longlong *param_1,longlong *param_2,int param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  byte local_45;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1[0xb] + (longlong)param_3 * 0x30);
  lVar3 = *(longlong *)(param_1[0xb] + 8 + (longlong)param_3 * 0x30);
  if (lVar3 == 0) {
    lVar3 = *plVar1;
    if (lVar3 != 0) {
      FUN_147ebace4(lVar3,param_2,param_4);
    }
  }
  else if (0 < *(int *)(lVar3 + 0x60)) {
    lVar4 = 0;
    do {
      local_48 = *(undefined2 *)(*param_2 + 0x2d8);
      local_58 = *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + lVar4 * 8);
      local_50 = 0;
      local_46 = 2;
      local_45 = local_45 & 0xfc;
      FUN_147ea881a(param_2,&local_58);
      lVar4 = lVar4 + 1;
      lVar3 = plVar1[1];
    } while (lVar4 < *(int *)(lVar3 + 0x60));
  }
  if (((*(byte *)(param_1 + 0xf) & 0x20) == 0) ||
     (cVar2 = (**(code **)(*param_1 + 800))(param_1,param_2,param_3,param_4), cVar2 != '\0')) {
    local_68 = param_5;
    FUN_147ebaea6(param_1,param_2,param_3,param_4);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ebace4 FUN_147ebace4 body=448 status=ok
// SIG undefined FUN_147ebace4(void)

void FUN_147ebace4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  byte local_4d;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0xf) & 8) != 0) {
    (**(code **)(*param_1 + 0x310))(param_1,param_2);
  }
  if (0 < (int)param_1[0xe]) {
    lVar8 = 0;
    do {
      local_50 = *(undefined2 *)(*param_2 + 0x2d8);
      local_60 = *(undefined8 *)(param_1[0xd] + lVar8 * 8);
      local_58 = 0;
      local_4e = 2;
      local_4d = local_4d & 0xfc;
      FUN_147ea881a(param_2,&local_60);
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[0xe]);
  }
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    local_64 = *(undefined2 *)(*param_2 + 0x2d8);
    local_60._0_4_ = CONCAT22((short)param_1[10],local_64);
    local_62 = *(undefined2 *)((longlong)param_1 + 0x7c);
    FUN_147ea89ba();
    uVar6 = (ulonglong)(int)param_2[2];
    if (0 < (longlong)uVar6) {
      iVar7 = -(int)param_2[2];
      lVar8 = uVar6 * 0x18;
      do {
        lVar1 = param_2[1];
        if (*(char *)(lVar1 + -6 + lVar8) == '\x01') {
          lVar5 = *(longlong *)(lVar1 + -0x18 + lVar8);
          if (lVar5 == 0) {
            lVar5 = *(longlong *)(lVar1 + -0x10 + lVar8);
          }
          local_66 = *(undefined2 *)(lVar5 + 0x50);
          local_68 = *(undefined2 *)(lVar1 + -8 + lVar8);
          cVar3 = FUN_147ea8026(&local_60,&local_68);
          if ((cVar3 != '\0') && (cVar3 = FUN_147ea8026(&local_68,&local_64), cVar3 != '\0')) {
            uVar4 = *(uint *)(param_2 + 2);
            if (uVar6 != uVar4) {
              memmove((void *)(param_2[1] + lVar8 + -0x18),(void *)(param_2[1] + lVar8),
                      (longlong)(int)(uVar4 + iVar7) * 0x18);
              uVar4 = *(uint *)(param_2 + 2);
            }
            *(uint *)(param_2 + 2) = uVar4 - 1;
            FUN_147ed37a2(param_2 + 1);
          }
        }
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + -0x18;
        bVar2 = 1 < uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ebaea6 FUN_147ebaea6 body=327 status=ok
// SIG undefined FUN_147ebaea6(void)

void FUN_147ebaea6(longlong param_1,longlong *param_2,int param_3,int *param_4,char param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined2 local_48;
  undefined1 local_46;
  byte local_45;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x58) + (longlong)param_3 * 0x30;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x58) + 0x18 + (longlong)param_3 * 0x30);
  if (*param_4 == 2) {
    if (0 < iVar2) {
      lVar4 = 0;
      do {
        FUN_147ebb16c(*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar4 * 8),param_2,*param_4);
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar1 + 0x18));
    }
  }
  else if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar4 * 8);
      FUN_147ebb1d2(lVar3,param_2,param_4);
      FUN_147ebb16c(lVar3,param_2,*param_4);
      if (param_5 == '\0') {
LAB_147ebaf64:
        local_48 = *(undefined2 *)(*param_2 + 0x2d8);
        local_46 = 2;
LAB_147ebaf86:
        local_58[1] = 0;
        local_45 = local_45 & 0xfc;
        local_58[0] = lVar3;
        FUN_147ea881a(param_2,local_58);
      }
      else {
        if (*(char *)(lVar3 + 100) == '\x01') {
          local_48 = *(undefined2 *)(*param_2 + 0x2d8);
          local_46 = 1;
          goto LAB_147ebaf86;
        }
        if (*(char *)(lVar3 + 100) == '\x02') goto LAB_147ebaf64;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(lVar1 + 0x18));
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ebafee FUN_147ebafee body=287 status=ok
// SIG undefined FUN_147ebafee(void)

void FUN_147ebafee(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  if (((*(byte *)(param_1 + 0xd) & 4) == 0) && ((*(byte *)(param_1 + 0xb) & 4) == 0)) {
    return;
  }
  plVar3 = param_1;
  if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
    lVar4 = *param_2;
    plVar3 = (longlong *)
             FUN_147eb9f50(param_1,lVar4,
                           (ulonglong)*(ushort *)((longlong)param_1 + 0x52) +
                           *(longlong *)
                            (*(longlong *)(lVar4 + 0x168) + 0x30 +
                            (ulonglong)*(ushort *)(lVar4 + 0x2d8) * 0x58));
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar4 = *param_2;
  lVar5 = (ulonglong)*(ushort *)((longlong)param_1 + 0x52) +
          *(longlong *)
           (*(longlong *)(lVar4 + 0x168) + 0x30 + (ulonglong)*(ushort *)(lVar4 + 0x2d8) * 0x58);
  if ((*(byte *)(param_1 + 0xb) & 4) != 0) {
    if (((*(byte *)(param_1 + 0xb) & 8) != 0) && ((*(uint *)(param_1 + 0xd) & 2) == 0)) {
      uVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
      lVar4 = 0;
      if (uVar1 != 0) {
        lVar4 = lVar5 - (ulonglong)(uVar1 + 3 & 0xfffffffc);
      }
      fVar6 = 0.0;
      if (0.0 <= *(float *)(lVar4 + 4)) {
        fVar6 = *(float *)(lVar4 + 4);
      }
      if (0.0 < fVar6) goto LAB_147ebb041;
      lVar4 = *param_2;
    }
    (**(code **)(*plVar3 + 0x318))(plVar3,lVar4,lVar5);
  }
LAB_147ebb041:
  uVar2 = *(uint *)(param_1 + 0xd);
  if ((uVar2 & 4) != 0) {
    (**(code **)(*plVar3 + 0x310))(plVar3,param_2);
    uVar2 = *(uint *)(param_1 + 0xd);
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147ebb0db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x300))(plVar3,*param_2,lVar5,0);
  return;
}



// FUNCTION 147ebb10e FUN_147ebb10e body=93 status=ok
// SIG undefined FUN_147ebb10e(void)

void FUN_147ebb10e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
    if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
      lVar1 = *param_2;
      param_1 = (longlong *)
                FUN_147eb9f50(param_1,lVar1,
                              (ulonglong)*(ushort *)((longlong)param_1 + 0x52) +
                              *(longlong *)
                               (*(longlong *)(lVar1 + 0x168) + 0x30 +
                               (ulonglong)*(ushort *)(lVar1 + 0x2d8) * 0x58));
    }
    if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ebb13f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x308))(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 147ebb16c FUN_147ebb16c body=102 status=ok
// SIG undefined FUN_147ebb16c(void)

void FUN_147ebb16c(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0xc) & 0x10) != 0) {
    if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
      lVar1 = *param_2;
      param_1 = (longlong *)
                FUN_147eb9f50(param_1,lVar1,
                              (ulonglong)*(ushort *)((longlong)param_1 + 0x52) +
                              *(longlong *)
                               (*(longlong *)(lVar1 + 0x168) + 0x30 +
                               (ulonglong)*(ushort *)(lVar1 + 0x2d8) * 0x58));
    }
    if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ebb1a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x310))(param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 147ebb1d2 FUN_147ebb1d2 body=102 status=ok
// SIG undefined FUN_147ebb1d2(void)

void FUN_147ebb1d2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0xc) & 0x20) != 0) {
    if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
      lVar1 = *param_2;
      param_1 = (longlong *)
                FUN_147eb9f50(param_1,lVar1,
                              (ulonglong)*(ushort *)((longlong)param_1 + 0x52) +
                              *(longlong *)
                               (*(longlong *)(lVar1 + 0x168) + 0x30 +
                               (ulonglong)*(ushort *)(lVar1 + 0x2d8) * 0x58));
    }
    if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ebb20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x318))(param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 147ebb23e FUN_147ebb23e body=67 status=ok
// SIG undefined FUN_147ebb23e(void)

void FUN_147ebb23e(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (((*(byte *)(param_1 + 0xf) & 2) != 0) && (0 < (longlong)(int)param_1[0xc])) {
    plVar2 = (longlong *)(param_1[0xb] + 8);
    lVar1 = 0;
    do {
      if ((plVar2[-1] == param_4) || (*plVar2 == param_4)) {
                    /* WARNING: Could not recover jumptable at 0x000147ebb27e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x300))();
        return;
      }
      lVar1 = lVar1 + 1;
      plVar2 = plVar2 + 6;
    } while ((int)param_1[0xc] != lVar1);
  }
  return;
}



// FUNCTION 147ebb282 FUN_147ebb282 body=82 status=ok
// SIG undefined FUN_147ebb282(void)

byte FUN_147ebb282(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  
  plVar3 = param_1;
  if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
    plVar3 = (longlong *)FUN_147eb9f50(param_1,param_2,param_3);
  }
  if (plVar3 == (longlong *)0x0) {
    bVar2 = 0;
  }
  else {
    lVar1 = param_1[0xc];
    bVar2 = (**(code **)(*plVar3 + 800))(plVar3,param_2,param_3);
    bVar2 = bVar2 ^ (char)lVar1 < '\0';
  }
  return bVar2;
}



// FUNCTION 147ebb2d4 FUN_147ebb2d4 body=112 status=ok
// SIG undefined FUN_147ebb2d4(void)

int FUN_147ebb2d4(longlong param_1,uint param_2,ushort *param_3)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x60);
  iVar1 = iVar3 + -1;
  if (*param_3 == param_2) {
    uVar2 = param_3[1];
    iVar6 = -2;
    if ((*(ushort *)(param_1 + 0x50) <= uVar2) && (iVar6 = iVar1, 0 < iVar3)) {
      iVar5 = 0;
      do {
        uVar4 = FUN_147ebb344(param_1,iVar5,0);
        if (uVar2 < uVar4) {
          if (iVar5 != 0) {
            return iVar5 + -1;
          }
          return 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar3 != iVar5);
    }
  }
  else {
    iVar6 = -2;
    if ((int)(uint)*param_3 < (int)param_2) {
      iVar6 = iVar1;
    }
  }
  return iVar6;
}



// FUNCTION 147ebb344 FUN_147ebb344 body=82 status=ok
// SIG undefined FUN_147ebb344(void)

int FUN_147ebb344(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x60))) {
    lVar1 = *(longlong *)(param_1 + 0x58) + (ulonglong)param_2 * 0x30;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)param_2 * 0x30);
    if ((lVar2 != 0) || (lVar2 = *(longlong *)(lVar1 + 8), lVar2 != 0)) {
      iVar3 = 0;
      if (param_3 == '\0') {
        iVar3 = *(int *)(lVar1 + 0x18);
        if (*(longlong *)(lVar1 + 8) != 0) {
          iVar3 = iVar3 + *(int *)(*(longlong *)(lVar1 + 8) + 0x60);
        }
      }
      return *(int *)(lVar2 + 0x50) - iVar3;
    }
  }
  return *(int *)(param_1 + 0x7c) + 1;
}



// FUNCTION 147ebb3ea FUN_147ebb3ea body=292 status=ok
// SIG undefined FUN_147ebb3ea(void)

/* WARNING: Removing unreachable block (ram,0x000147ebb47d) */
/* WARNING: Removing unreachable block (ram,0x000147ebb4eb) */

void FUN_147ebb3ea(undefined8 param_1,undefined8 param_2,char *param_3,int param_4,longlong *param_5
                  )

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == 1) {
    FUN_140002266(&local_30,L"current child: %d",(int)*param_3);
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_5,iVar1);
    }
    lVar2 = *param_5;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_30;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_28;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_28._4_4_;
    local_28 = 0;
    local_30 = 0;
    FUN_140002266(&local_30,L"override child: %d",(int)param_3[1]);
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_5,iVar1);
    }
    lVar2 = *param_5;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_30;
    local_30 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_28;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_28._4_4_;
    local_28 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ebb53a FUN_147ebb53a body=143 status=ok
// SIG undefined FUN_147ebb53a(void)

void FUN_147ebb53a(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 100) != '\0') {
    uVar2 = FUN_147ea72f6(param_2,*(undefined8 *)(param_1 + 0x48));
    if (uVar2 != 0xffffffff) {
      lVar3 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_2 + 0x170))) {
        lVar3 = (ulonglong)*(ushort *)(param_1 + 0x52) +
                *(longlong *)(*(longlong *)(param_2 + 0x168) + 0x30 + (ulonglong)uVar2 * 0x58);
      }
      cVar1 = FUN_147ebb282(param_1,param_2,lVar3);
      if (cVar1 != '\0') {
        FUN_147ea7f0a(param_2,param_1,param_3 == '\x01');
        return;
      }
      FUN_147ea7a74(param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147ebb5ca FUN_147ebb5ca body=508 status=ok
// SIG undefined FUN_147ebb5ca(void)

undefined8 FUN_147ebb5ca(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  longlong local_68 [2];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 100) == '\0') {
    uVar5 = 0;
    puVar1 = (undefined2 *)0x0;
  }
  else {
    FUN_147eaa406(local_68);
    FUN_144a6c01e(local_68,&local_58);
    puVar1 = local_58;
    if (local_50 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_48,L"aborts %s",puVar1);
    uVar5 = (uint)uStack_40;
    puVar1 = local_48;
    local_48 = (undefined2 *)0x0;
    uStack_40 = 0;
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  if ((~*(uint *)(param_1 + 0x60) & 0xc0) == 0) {
    FUN_14020fad6(&local_48,L"inversed");
  }
  if (uVar5 < 2) {
    if ((uint)uStack_40 < 2) {
      puVar3 = (undefined2 *)0x0;
      puVar2 = &DAT_149dfb77a;
      goto LAB_147ebb72f;
    }
    puVar3 = &DAT_149dfb77a;
    local_78 = local_48;
  }
  else {
    puVar3 = &DAT_149dfb77a;
    local_78 = &DAT_149dfb77a;
    if ((uint)uStack_40 != 0) {
      local_78 = local_48;
    }
    if ((uVar5 - 2 < 0x7fffffff) && (puVar3 = &DAT_149dfb77a, (uint)uStack_40 - 2 < 0x7fffffff)) {
      puVar3 = &DAT_149e19f34;
    }
  }
  puVar2 = puVar1;
  if (uVar5 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_58,L"( %s%s%s )\n",puVar2,puVar3);
  puVar3 = local_58;
  puVar2 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar2 = local_58;
  }
LAB_147ebb72f:
  FUN_147eaa516(&local_58,param_1);
  puVar4 = local_58;
  if (local_50 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%s%s",puVar2,puVar4);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar3 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar3);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar1 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ebb7c8 FUN_147ebb7c8 body=281 status=ok
// SIG undefined FUN_147ebb7c8(void)

void FUN_147ebb7c8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [7];
  
  local_48[6] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 5);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147ebc90e(local_48[5]);
  if (lVar2 != 0) {
    plVar3 = local_48;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    FUN_147eaa7de(lVar2,plVar3 + 2);
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[6] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebb8e2 FUN_147ebb8e2 body=281 status=ok
// SIG undefined FUN_147ebb8e2(void)

void FUN_147ebb8e2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [7];
  
  local_48[6] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 5);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147ebc90e(local_48[5]);
  if (lVar2 != 0) {
    plVar3 = local_48;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    FUN_147eaa7de(lVar2,plVar3 + 2);
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[6] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebb9fc FUN_147ebb9fc body=270 status=ok
// SIG undefined FUN_147ebb9fc(void)

void FUN_147ebb9fc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [6];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ebbb0c(local_28,plVar2);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebbb0c FUN_147ebbb0c body=84 status=ok
// SIG undefined FUN_147ebbb0c(void)

longlong FUN_147ebbb0c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_147ebc90e();
  if ((lVar1 != 0) && (lVar1 = thunk_FUN_147eaddde(lVar1,param_2 + 0x10), lVar1 != 0)) {
    lVar2 = FUN_144a6c4d8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147ebbb66 FUN_147ebbb66 body=292 status=ok
// SIG undefined FUN_147ebbb66(void)

void FUN_147ebbb66(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [6];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147ebc90e(local_28);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    plVar4 = local_58;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar2 = thunk_FUN_147eadf78(lVar3,plVar4 + 2);
  }
  *param_3 = uVar2;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebbc8c FUN_147ebbc8c body=293 status=ok
// SIG undefined FUN_147ebbc8c(void)

void FUN_147ebbc8c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [6];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147ebc90e(local_28);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    plVar4 = local_58;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar3 = thunk_FUN_147eade30(lVar2,plVar4 + 2);
  }
  *param_3 = uVar3;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebbdb2 FUN_147ebbdb2 body=292 status=ok
// SIG undefined FUN_147ebbdb2(void)

void FUN_147ebbdb2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [6];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147ebc90e(local_28);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    plVar4 = local_58;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar2 = thunk_FUN_147eade82(lVar3,plVar4 + 2);
  }
  *param_3 = uVar2;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebbed8 FUN_147ebbed8 body=295 status=ok
// SIG undefined FUN_147ebbed8(void)

void FUN_147ebbed8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [6];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147ebc90e(local_28);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    plVar3 = local_58;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    uVar4 = thunk_FUN_147eadf26(lVar2,plVar3 + 2);
  }
  *param_3 = uVar4;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebc000 FUN_147ebc000 body=292 status=ok
// SIG undefined FUN_147ebc000(void)

void FUN_147ebc000(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [6];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147ebc90e(local_28);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    plVar4 = local_58;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar2 = thunk_FUN_147eaded4(lVar3,plVar4 + 2);
  }
  *param_3 = uVar2;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebc126 FUN_147ebc126 body=304 status=ok
// SIG undefined FUN_147ebc126(void)

void FUN_147ebc126(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58 [6];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147ebc90e(local_28);
  if (lVar2 == 0) {
    local_60 = 0;
  }
  else {
    plVar3 = local_58;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    FUN_147eaaf5a(lVar2,&local_60,plVar3 + 2);
  }
  *param_3 = local_60;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebc258 FUN_147ebc258 body=293 status=ok
// SIG undefined FUN_147ebc258(void)

void FUN_147ebc258(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [6];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147ebc90e(local_28);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    plVar4 = local_58;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar3 = thunk_FUN_147eaddde(lVar2,plVar4 + 2);
  }
  *param_3 = uVar3;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebc37e FUN_147ebc37e body=340 status=ok
// SIG undefined FUN_147ebc37e(void)

void FUN_147ebc37e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_58 [6];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147ebc90e(local_28);
  if (lVar2 == 0) {
    local_68 = DAT_14c846508;
    local_78 = DAT_14c8464f8;
    uStack_70 = DAT_14c846500;
  }
  else {
    plVar3 = local_58;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    FUN_147eab0ee(lVar2,&local_78,plVar3 + 2);
  }
  *(undefined8 *)(param_3 + 4) = local_68;
  *param_3 = (undefined4)local_78;
  param_3[1] = local_78._4_4_;
  param_3[2] = (undefined4)uStack_70;
  param_3[3] = uStack_70._4_4_;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebc4d4 FUN_147ebc4d4 body=376 status=ok
// SIG undefined FUN_147ebc4d4(void)

void FUN_147ebc4d4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58 [6];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147ebc90e(local_28);
  if (lVar2 == 0) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    plVar3 = local_58;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    FUN_147eab1f4(lVar2,&local_68,plVar3 + 2);
  }
  if (&local_68 == param_3) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_60._4_4_;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebc64e FUN_147ebc64e body=340 status=ok
// SIG undefined FUN_147ebc64e(void)

void FUN_147ebc64e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_58 [6];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147ebc90e(local_28);
  if (lVar2 == 0) {
    local_68 = DAT_14c8464f0;
    local_78 = DAT_14c8464e0;
    uStack_70 = DAT_14c8464e8;
  }
  else {
    plVar3 = local_58;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    FUN_147eab2d0(lVar2,&local_78,plVar3 + 2);
  }
  *(undefined8 *)(param_3 + 4) = local_68;
  *param_3 = (undefined4)local_78;
  param_3[1] = local_78._4_4_;
  param_3[2] = (undefined4)uStack_70;
  param_3[3] = uStack_70._4_4_;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebc7a4 FUN_147ebc7a4 body=202 status=ok
// SIG undefined FUN_147ebc7a4(void)

void FUN_147ebc7a4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (lVar2 = *(longlong *)(local_20 + 0x20), lVar2 != 0)) {
    lVar1 = FUN_14113c790();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147ebc82a;
  }
  lVar2 = 0;
LAB_147ebc82a:
  *param_3 = lVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebc870 FUN_147ebc870 body=156 status=ok
// SIG undefined FUN_147ebc870(void)

void FUN_147ebc870(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ebc90e(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebc90e FUN_147ebc90e body=68 status=ok
// SIG undefined FUN_147ebc90e(void)

undefined8 FUN_147ebc90e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) {
    lVar2 = FUN_14113c790();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return *(undefined8 *)(lVar1 + 0x118);
    }
  }
  return 0;
}



// FUNCTION 147ebc958 FUN_147ebc958 body=346 status=ok
// SIG undefined FUN_147ebc958(void)

void FUN_147ebc958(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48 [7];
  
  local_48[6] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 5);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ebcab4(local_48[5],plVar1,local_4c != 0);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[6] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebcab4 FUN_147ebcab4 body=115 status=ok
// SIG undefined FUN_147ebcab4(void)

void FUN_147ebcab4(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [46];
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147ebc90e();
  if (lVar1 != 0) {
    FUN_147eacaa8(lVar1,&local_2a,param_2 + 0x10);
    FUN_147eaf024(lVar1,local_2a,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebcb28 FUN_147ebcb28 body=343 status=ok
// SIG undefined FUN_147ebcb28(void)

void FUN_147ebcb28(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [7];
  
  local_48[6] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 5);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ebcc80(local_48[5],plVar1,local_50);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[6] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebcc80 FUN_147ebcc80 body=115 status=ok
// SIG undefined FUN_147ebcc80(void)

void FUN_147ebcc80(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [46];
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147ebc90e();
  if (lVar1 != 0) {
    FUN_147eacaa8(lVar1,&local_2a,param_2 + 0x10);
    FUN_147eae16a(lVar1,local_2a,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebccf4 FUN_147ebccf4 body=339 status=ok
// SIG undefined FUN_147ebccf4(void)

void FUN_147ebccf4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  longlong local_48 [7];
  
  local_48[6] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 5);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_49 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ebce48(local_48[5],plVar1,local_49);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[6] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebce48 FUN_147ebce48 body=115 status=ok
// SIG undefined FUN_147ebce48(void)

void FUN_147ebce48(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [46];
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147ebc90e();
  if (lVar1 != 0) {
    FUN_147eacaa8(lVar1,&local_2a,param_2 + 0x10);
    FUN_147eae55a(lVar1,local_2a,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebcebc FUN_147ebcebc body=343 status=ok
// SIG undefined FUN_147ebcebc(void)

void FUN_147ebcebc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  longlong local_48 [7];
  
  local_48[6] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 5);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ebd014(local_48[5],plVar1,local_4c);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[6] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebd014 FUN_147ebd014 body=120 status=ok
// SIG undefined FUN_147ebd014(void)

void FUN_147ebd014(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [38];
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147ebc90e();
  if (lVar1 != 0) {
    FUN_147eacaa8(lVar1,&local_32,param_2 + 0x10);
    FUN_147eaec78(lVar1,local_32,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebd08e FUN_147ebd08e body=342 status=ok
// SIG undefined FUN_147ebd08e(void)

void FUN_147ebd08e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  longlong local_48 [7];
  
  local_48[6] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 5);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ebd1e6(local_48[5],plVar1,local_4c);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[6] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebd1e6 FUN_147ebd1e6 body=115 status=ok
// SIG undefined FUN_147ebd1e6(void)

void FUN_147ebd1e6(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [46];
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147ebc90e();
  if (lVar1 != 0) {
    FUN_147eacaa8(lVar1,&local_2a,param_2 + 0x10);
    FUN_147eae8ea(lVar1,local_2a,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebd25a FUN_147ebd25a body=343 status=ok
// SIG undefined FUN_147ebd25a(void)

void FUN_147ebd25a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [7];
  
  local_48[6] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 5);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ebd3b2(local_48[5],plVar1,local_50);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[6] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebd3b2 FUN_147ebd3b2 body=115 status=ok
// SIG undefined FUN_147ebd3b2(void)

void FUN_147ebd3b2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [46];
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147ebc90e();
  if (lVar1 != 0) {
    FUN_147eacaa8(lVar1,&local_2a,param_2 + 0x10);
    FUN_147eaf75c(lVar1,local_2a,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebd426 FUN_147ebd426 body=343 status=ok
// SIG undefined FUN_147ebd426(void)

void FUN_147ebd426(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [7];
  
  local_48[6] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 5);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ebd57e(local_48[5],plVar1,local_50);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[6] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebd57e FUN_147ebd57e body=115 status=ok
// SIG undefined FUN_147ebd57e(void)

void FUN_147ebd57e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [46];
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147ebc90e();
  if (lVar1 != 0) {
    FUN_147eacaa8(lVar1,&local_2a,param_2 + 0x10);
    FUN_147ea3f44(lVar1,local_2a,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebd5f2 FUN_147ebd5f2 body=364 status=ok
// SIG undefined FUN_147ebd5f2(void)

void FUN_147ebd5f2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  longlong local_48 [7];
  
  local_48[6] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 5);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_50;
  local_78 = local_60;
  uStack_74 = uStack_5c;
  uStack_70 = uStack_58;
  uStack_6c = uStack_54;
  FUN_147ebd760(local_48[5],plVar1);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[6] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebd760 FUN_147ebd760 body=147 status=ok
// SIG undefined FUN_147ebd760(void)

void FUN_147ebd760(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_147ebc90e();
  if (lVar1 != 0) {
    local_58 = *(undefined8 *)(param_3 + 4);
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    FUN_147eacaa8(lVar1,&local_22,param_2 + 0x10);
    local_38 = local_58;
    local_48 = local_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    FUN_147eafeca(lVar1,local_22);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebd7f4 FUN_147ebd7f4 body=436 status=ok
// SIG undefined FUN_147ebd7f4(void)

void FUN_147ebd7f4(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  ulonglong uStack_60;
  longlong local_58 [7];
  
  local_58[6] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 5);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68 = (void *)0x0;
  uStack_60 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  _Src = local_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_60;
  local_70 = (int)uStack_60;
  if (lVar1 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,uStack_60 & 0xffffffff,0);
    memcpy(local_78,_Src,lVar1 * 2);
  }
  FUN_147ebd9aa(local_58[5],plVar2,&local_78);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[6] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebd9aa FUN_147ebd9aa body=194 status=ok
// SIG undefined FUN_147ebd9aa(void)

void FUN_147ebd9aa(undefined8 param_1,longlong param_2,longlong *param_3)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_147ebc90e();
  if (lVar1 != 0) {
    local_48 = (void *)0x0;
    local_40 = (int)param_3[1];
    lVar2 = (longlong)local_40;
    _Src = (void *)*param_3;
    if (lVar2 == 0) {
      local_3c = 0;
    }
    else {
      FUN_1446dd670(&local_48,local_40,0);
      memcpy(local_48,_Src,lVar2 * 2);
    }
    FUN_147ebddd0(lVar1,param_2 + 0x10,&local_48);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebda6e FUN_147ebda6e body=364 status=ok
// SIG undefined FUN_147ebda6e(void)

void FUN_147ebda6e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  longlong local_48 [7];
  
  local_48[6] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 5);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[4] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_50;
  local_78 = local_60;
  uStack_74 = uStack_5c;
  uStack_70 = uStack_58;
  uStack_6c = uStack_54;
  FUN_147ebdbdc(local_48[5],plVar1);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[6] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebdbdc FUN_147ebdbdc body=147 status=ok
// SIG undefined FUN_147ebdbdc(void)

void FUN_147ebdbdc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_147ebc90e();
  if (lVar1 != 0) {
    local_58 = *(undefined8 *)(param_3 + 4);
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    FUN_147eacaa8(lVar1,&local_22,param_2 + 0x10);
    local_38 = local_58;
    local_48 = local_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    FUN_147eafaec(lVar1,local_22);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebdc70 FUN_147ebdc70 body=209 status=ok
// SIG undefined FUN_147ebdc70(void)

void FUN_147ebdc70(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebdd42 FUN_147ebdd42 body=138 status=ok
// SIG undefined FUN_147ebdd42(void)

void FUN_147ebdd42(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebddd0 FUN_147ebddd0 body=180 status=ok
// SIG undefined FUN_147ebddd0(void)

void FUN_147ebddd0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147eacaa8(param_1,&local_32,param_2);
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
  FUN_147eaf3b4(param_1,local_32,&local_48);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebde8a FUN_147ebde8a body=127 status=ok
// SIG undefined FUN_147ebde8a(void)

longlong FUN_147ebde8a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_144a7a812();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000147ebdec9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
      return lVar2;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
    if (lVar2 != 0) {
      lVar1 = FUN_144a7757c();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 147ebdf12 FUN_147ebdf12 body=560 status=ok
// SIG undefined FUN_147ebdf12(void)

void FUN_147ebdf12(longlong *param_1,longlong param_2,longlong param_3,int *param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  ushort uVar8;
  longlong *plVar9;
  int *piVar10;
  
  uVar8 = (**(code **)(*param_1 + 0x2d8))();
  piVar10 = (int *)0x0;
  if (uVar8 != 0) {
    piVar10 = (int *)(param_3 - (ulonglong)(uVar8 + 3 & 0xfffffffc));
  }
  if (piVar10 != (int *)0x0) {
    *piVar10 = -1;
  }
  if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
    plVar1 = (longlong *)(param_2 + 0x188);
    iVar4 = *param_4;
    if ((((longlong)iVar4 < 0) || (*(int *)(param_2 + 400) <= iVar4)) ||
       (plVar9 = *(longlong **)(*plVar1 + (longlong)iVar4 * 8), plVar9 == (longlong *)0x0)) {
      plVar9 = (longlong *)FUN_14092e7b3(param_1,param_2,0,0xffffffff,0,0,0xfff00007);
      uVar2 = *(undefined1 *)((longlong)param_1 + 0x54);
      uVar3 = *(undefined2 *)((longlong)param_1 + 0x52);
      lVar6 = param_1[10];
      lVar5 = param_1[9];
      if (lVar5 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(lVar5);
      }
      bVar7 = DAT_14c950c29;
      plVar9[9] = lVar5;
      *(short *)(plVar9 + 10) = (short)lVar6;
      *(undefined2 *)((longlong)plVar9 + 0x52) = uVar3;
      *(undefined1 *)((longlong)plVar9 + 0x54) = uVar2;
      *(byte *)((longlong)plVar9 + 0x55) = *(byte *)((longlong)plVar9 + 0x55) | 1;
      if ((plVar9 != (longlong *)0x0) && ((bVar7 & 1) != 0)) {
        FUN_1456cec3c(plVar9);
      }
      iVar4 = *(int *)(param_2 + 400);
      *(uint *)(param_2 + 400) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0x194) < iVar4 + 1U) {
        FUN_147ed38d6(plVar1,iVar4);
      }
      *(longlong **)(*plVar1 + (longlong)iVar4 * 8) = plVar9;
      if ((plVar9 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(plVar9);
      }
    }
    *piVar10 = *param_4;
    (**(code **)(*plVar9 + 0x2e8))(plVar9,*(undefined8 *)(param_2 + 0xa8));
    (**(code **)(*plVar9 + 0x2a8))(plVar9,param_2,param_3,param_5);
    FUN_147eaa6b0(plVar9);
    (**(code **)(*plVar9 + 0x2a0))(plVar9,param_1[8]);
    (**(code **)(*plVar9 + 0x2c8))(plVar9,param_2);
    *param_4 = *param_4 + 1;
    FUN_147eaa6b0(0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147ebdf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))(param_1,param_2,param_3,param_5);
  return;
}



// FUNCTION 147ebe142 FUN_147ebe142 body=81 status=ok
// SIG undefined FUN_147ebe142(void)

void FUN_147ebe142(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
    param_1 = (longlong *)FUN_147eb9f50(param_1,param_2,param_3);
  }
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ebe177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2b0))(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 147ebe194 FUN_147ebe194 body=47 status=ok
// SIG undefined FUN_147ebe194(void)

void FUN_147ebe194(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  return;
}



// FUNCTION 147ebe1c8 FUN_147ebe1c8 body=88 status=ok
// SIG undefined FUN_147ebe1c8(void)

undefined8 * FUN_147ebe1c8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((ulonglong)(longlong)iVar1 < 2) {
    FUN_147eaa516(param_2);
  }
  else {
    *param_2 = 0;
    _Src = *(void **)(param_1 + 0x30);
    *(int *)(param_2 + 1) = iVar1;
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 147ebe220 FUN_147ebe220 body=411 status=ok
// SIG undefined FUN_147ebe220(void)

undefined8
FUN_147ebe220(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 ***local_58;
  undefined8 ***local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(uint *)(param_1 + 7) < 2) {
    (**(code **)(*param_1 + 0x2e0))(param_1,param_2);
  }
  else {
    (**(code **)(*param_1 + 0x2e0))(param_1,&local_48);
    puVar4 = &DAT_149dfb77a;
    local_58 = (undefined8 ***)&DAT_149dfb77a;
    if ((int)uStack_40 != 0) {
      local_58 = local_48;
    }
    if ((int)param_1[7] != 0) {
      puVar4 = (undefined2 *)param_1[6];
    }
    FUN_140002266(param_2,L"%d. %s [%s]",(short)param_1[10],puVar4);
    if ((undefined8 ****)local_48 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
  }
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
    param_1 = (longlong *)FUN_147eb9f50(param_1,param_3,param_4);
  }
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    local_58 = &local_48;
    (**(code **)(*param_1 + 0x2b8))(param_1,param_3,param_4,param_5);
    uVar1 = uStack_40 & 0xffffffff;
    if (0 < (int)uStack_40) {
      lVar2 = 8;
      lVar5 = 0;
      do {
        FUN_1400020e8(param_2,&DAT_149e19f34,2);
        iVar3 = *(int *)((longlong)local_48 + lVar2) + -1;
        if (*(int *)((longlong)local_48 + lVar2) == 0) {
          iVar3 = 0;
        }
        FUN_1400020e8(param_2,*(undefined8 *)((longlong)local_48 + lVar2 + -8),iVar3);
        lVar5 = lVar5 + 1;
        uVar1 = (ulonglong)(int)uStack_40;
        lVar2 = lVar2 + 0x10;
      } while (lVar5 < (longlong)uVar1);
    }
  }
  FUN_1447a1747(local_48,uVar1);
  if (local_48 != (undefined8 ***)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ebe3bc FUN_147ebe3bc body=28 status=ok
// SIG undefined FUN_147ebe3bc(void)

undefined8 FUN_147ebe3bc(undefined8 param_1,undefined8 param_2)

{
  FUN_147eaa516(param_2,param_1);
  return param_2;
}



// FUNCTION 147ebe3d8 FUN_147ebe3d8 body=100 status=ok
// SIG undefined FUN_147ebe3d8(void)

void FUN_147ebe3d8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145993f3e();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (lVar1 = *(longlong *)(param_2 + 0x68), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147ebe439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0x430) + 0x10))(lVar1 + 0x430,param_2);
      return;
    }
  }
  FUN_14479d2ce(param_2 + 0x58);
  return;
}



// FUNCTION 147ebe440 FUN_147ebe440 body=138 status=ok
// SIG undefined FUN_147ebe440(void)

longlong FUN_147ebe440(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar2 = FUN_145993f3e();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
        (lVar2 = *(longlong *)(param_1 + 0x68), lVar2 != 0)) && (*(longlong *)(lVar2 + 0x470) != 0))
    {
      lVar3 = FUN_14113c790();
      lVar2 = *(longlong *)(lVar2 + 0x470);
      if (lVar2 != 0) {
        if (lVar3 == 0) {
          return 0;
        }
        lVar1 = *(longlong *)(lVar2 + 0x10);
        if (lVar1 == 0) {
          return 0;
        }
        if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) {
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
              lVar3 + 0x30) {
            return 0;
          }
          return lVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 147ebe4ea FUN_147ebe4ea body=320 status=ok
// SIG undefined FUN_147ebe4ea(void)

undefined8 FUN_147ebe4ea(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined2 *puVar3;
  float fVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  undefined2 *local_28;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x58) & 4) != 0) {
    FUN_140056680(&local_28,L"frame");
    if ((*(byte *)(param_1 + 0x58) & 8) != 0) {
      fVar1 = *(float *)(param_1 + 0x60);
      fVar2 = *(float *)(param_1 + 100);
      if (fVar2 <= 0.0) {
        FUN_140002266(&local_38,L"%.2fs",(double)fVar1);
      }
      else {
        fVar4 = 0.0;
        if (0.0 <= fVar1 - fVar2) {
          fVar4 = fVar1 - fVar2;
        }
        FUN_140002266(&local_38,L"%.2fs..%.2fs",(double)fVar4,(double)(fVar2 + fVar1));
      }
      if (local_28 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_28 = local_38;
      local_20 = local_30;
      local_1c = local_2c;
    }
    puVar3 = &DAT_149dfb77a;
    if (local_20 != 0) {
      puVar3 = local_28;
    }
    FUN_140002266(param_2,L"tick every %s",puVar3);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  FUN_140056680(param_2,L"never ticks");
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebe62c FUN_147ebe62c body=22 status=ok
// SIG undefined FUN_147ebe62c(void)

undefined8 FUN_147ebe62c(undefined8 param_1,undefined8 param_2)

{
  FUN_147ebe4ea();
  return param_2;
}



// FUNCTION 147ebe642 FUN_147ebe642 body=186 status=ok
// SIG undefined FUN_147ebe642(void)

undefined8 FUN_147ebe642(longlong *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x308))(param_1,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_147eaa516(&local_50,param_1);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,L"%s: %s",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebe6fe FUN_147ebe6fe body=149 status=ok
// SIG undefined FUN_147ebe6fe(void)

void FUN_147ebe6fe(longlong *param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)(param_1 + 0xc);
  fVar2 = *(float *)((longlong)param_1 + 100);
  uVar4 = rand();
  if ((*(byte *)(param_1 + 0xb) & 8) != 0) {
    fVar7 = fVar1 - fVar2;
    fVar6 = 0.0;
    if (0.0 <= fVar7) {
      fVar6 = fVar7;
    }
    uVar3 = (**(code **)(*param_1 + 0x2d8))(param_1);
    lVar5 = 0;
    if (uVar3 != 0) {
      lVar5 = param_3 - (ulonglong)(uVar3 + 3 & 0xfffffffc);
    }
    *(float *)(lVar5 + 4) = ((float)(uVar4 & 0x7fff) / 32767.0) * ((fVar1 + fVar2) - fVar6) + fVar6;
  }
  return;
}



// FUNCTION 147ebe7a8 FUN_147ebe7a8 body=171 status=ok
// SIG undefined FUN_147ebe7a8(void)

undefined4 FUN_147ebe7a8(longlong *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = param_1;
  if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
    plVar4 = (longlong *)FUN_147eb9f50(param_1,param_2,param_3);
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x2f0))(plVar4,param_2,param_3);
    if ((*(byte *)((longlong)param_1 + 0x6c) & 1) != 0) {
      fVar1 = *(float *)(param_2 + 0x2f0);
      uVar2 = (**(code **)(*param_1 + 0x2d8))(param_1);
      lVar5 = 0;
      if (uVar2 != 0) {
        lVar5 = param_3 - (ulonglong)(uVar2 + 3 & 0xfffffffc);
      }
      *(float *)(lVar5 + 4) = *(float *)(lVar5 + 4) + fVar1;
      *(float *)(lVar5 + 8) = -fVar1;
    }
  }
  return uVar3;
}



// FUNCTION 147ebe854 FUN_147ebe854 body=76 status=ok
// SIG undefined FUN_147ebe854(void)

undefined8 FUN_147ebe854(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
    param_1 = (longlong *)FUN_147eb9f50(param_1,param_2,param_3);
  }
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ebe881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x2f8))(param_1,param_2,param_3);
    return uVar1;
  }
  return 2;
}



// FUNCTION 147ebe8a0 FUN_147ebe8a0 body=276 status=ok
// SIG undefined FUN_147ebe8a0(void)

ulonglong FUN_147ebe8a0(longlong *param_1,undefined8 param_2,longlong param_3,float param_4,
                       float *param_5)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 unaff_RBP;
  undefined7 uVar4;
  ulonglong uVar3;
  longlong lVar5;
  float fVar6;
  
  if ((*(byte *)(param_1 + 0xd) & 2) != 0) {
    plVar2 = param_1;
    if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
      plVar2 = (longlong *)FUN_147eb9f50(param_1,param_2,param_3);
    }
    if (plVar2 != (longlong *)0x0) {
      uVar4 = (undefined7)((ulonglong)unaff_RBP >> 8);
      if ((*(byte *)((longlong)plVar2 + 0x6c) & 1) == 0) {
        (**(code **)(*plVar2 + 0x300))(plVar2,param_2,param_3,param_4);
        uVar3 = CONCAT71(uVar4,1);
        fVar6 = 0.0;
      }
      else {
        uVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
        lVar5 = 0;
        if (uVar1 != 0) {
          lVar5 = param_3 - (ulonglong)(uVar1 + 3 & 0xfffffffc);
        }
        fVar6 = *(float *)(lVar5 + 4) - param_4;
        *(float *)(lVar5 + 4) = fVar6;
        param_4 = param_4 + *(float *)(lVar5 + 8);
        *(float *)(lVar5 + 8) = param_4;
        uVar3 = CONCAT71(uVar4,fVar6 <= 0.0);
        if (fVar6 <= 0.0) {
          *(undefined8 *)(lVar5 + 4) = 0;
          (**(code **)(*plVar2 + 0x300))(plVar2,param_2,param_3,param_4);
          fVar6 = *(float *)(lVar5 + 4);
        }
        if (*param_5 <= fVar6) goto LAB_147ebe8b9;
      }
      *param_5 = fVar6;
      goto LAB_147ebe8b9;
    }
  }
  uVar3 = 0;
LAB_147ebe8b9:
  return uVar3 & 0xffffffff;
}



// FUNCTION 147ebe9b4 FUN_147ebe9b4 body=139 status=ok
// SIG undefined FUN_147ebe9b4(void)

void FUN_147ebe9b4(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
    param_1 = (longlong *)FUN_147eb9f50(param_1,param_2,param_3);
  }
  if (param_1 != (longlong *)0x0) {
    if ((*(byte *)(param_1 + 0xd) & 4) != 0) {
      (**(code **)(*param_1 + 0x310))(param_1,param_2,param_3,param_4);
    }
    if ((((*(byte *)((longlong)param_1 + 0x55) & 8) != 0) && (*(longlong *)(param_2 + 0x120) != 0))
       && (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x120) + 0x490), lVar1 != 0)) {
      FUN_147e97858(lVar1,param_1 + 5);
      return;
    }
  }
  return;
}



// FUNCTION 147ebea40 FUN_147ebea40 body=105 status=ok
// SIG undefined FUN_147ebea40(void)

void FUN_147ebea40(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ushort uVar1;
  
  uVar1 = FUN_147ea72f6(param_2,param_1);
  if ((int)(uint)uVar1 < *(int *)(param_2 + 0x170)) {
    (**(code **)(*param_1 + 0x308))
              (param_1,param_2,
               (ulonglong)*(ushort *)((longlong)param_1 + 0x52) +
               *(longlong *)(*(longlong *)(param_2 + 0x168) + 0x30 + (ulonglong)uVar1 * 0x58),
               *param_3,*(undefined4 *)(param_3 + 2),*(char *)((longlong)param_3 + 0x14) == '\x01');
  }
  return;
}



// FUNCTION 147ebeaae FUN_147ebeaae body=91 status=ok
// SIG undefined FUN_147ebeaae(void)

void FUN_147ebeaae(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  byte in_stack_00000030;
  
  iVar2 = FUN_147ea768c(param_2,param_1);
  if (iVar2 == 1) {
    in_stack_00000030 = 2;
  }
  else {
    if (iVar2 != 0) {
      return;
    }
    in_stack_00000030 = in_stack_00000030 ^ 1;
  }
  uVar1 = FUN_147ea92c6(param_2,param_1);
  FUN_147ea6e12(param_2,uVar1,in_stack_00000030);
  return;
}



// FUNCTION 147ebeb1c FUN_147ebeb1c body=111 status=ok
// SIG undefined FUN_147ebeb1c(void)

void FUN_147ebeb1c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_144729dda(param_2 + 0x48);
  }
  lVar3 = FUN_147ebe440(param_2);
  if (lVar3 != 0) {
    iVar2 = FUN_147ea768c(lVar3,param_1 + -0x28);
    uVar1 = FUN_147ea92c6(lVar3,param_1 + -0x28);
    FUN_147ea6e12(lVar3,uVar1,(iVar2 == 1) * '\x02');
    return;
  }
  return;
}



// FUNCTION 147ebec78 FUN_147ebec78 body=416 status=ok
// SIG undefined FUN_147ebec78(void)

void FUN_147ebec78(longlong param_1,undefined8 param_2,longlong param_3,int param_4,int *param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 == 0) {
    *(char *)(param_3 + 8) = (char)*param_5;
    if (*param_5 == 3) {
      iVar2 = FUN_147ea768c(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
      if (iVar2 == 0) {
        *(byte *)(param_3 + 9) = (*(byte *)(param_3 + 9) & 0xfc) + 1;
        FUN_143848a76(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
LAB_147ebed12:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
      }
    }
    else {
      bVar1 = *(byte *)(param_3 + 9);
      if ((bVar1 & 1) == 0) {
        if ((*param_5 == 0) && (*(char *)(param_1 + 0x80) == '\x01')) {
          *(byte *)(param_3 + 9) = bVar1 | 2;
          goto LAB_147ebed12;
        }
      }
      else {
        *(byte *)(param_3 + 9) = bVar1 & 0xfe;
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_58 = 0xffffffffffffffff;
        local_50 = 0xffffffff;
        local_48 = 0xffffffff;
        uStack_44 = 0xffffffff;
        uStack_40 = 0xffffffff;
        uStack_3c = 0xffffffff;
        local_38 = 0xffffffff;
        local_98 = CONCAT31(local_98._1_3_,1);
        local_80 = param_2;
        FUN_147ebaea6(param_1,&local_80,0,param_5);
        uVar3 = FUN_147ea72f6(param_2,param_1);
        FUN_143848ae6(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8),uVar3);
        if (((*param_5 != 2) && ((*(byte *)(param_3 + 9) & 4) == 0)) &&
           (*(char *)(param_1 + 0x80) == '\0')) {
          local_88 = 1;
          local_98 = 0;
          local_90 = *param_5;
          FUN_143846b9a(param_2,param_1,uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
        }
        if (local_68._0_8_ != 0) {
          FUN_1400020a8();
        }
        if (local_78._0_8_ != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebee30 FUN_147ebee30 body=147 status=ok
// SIG undefined FUN_147ebee30(void)

void FUN_147ebee30(longlong param_1,longlong *param_2,uint *param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ushort local_10;
  undefined2 local_e;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(ushort *)(*param_2 + 0x2d8);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x168) + 0x30 + (ulonglong)uVar1 * 0x58);
  if ((*(byte *)(lVar2 + 9 + (ulonglong)*(ushort *)(param_1 + 0x52)) & 1) == 0) {
    *param_3 = (uint)*(byte *)(lVar2 + 8 + (ulonglong)*(ushort *)(param_1 + 0x52));
  }
  if (0 < *(int *)(param_1 + 0x60)) {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8);
    local_20 = 0;
    local_e = 2;
    local_10 = uVar1;
    FUN_147ea881a(param_2,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebef4a FUN_147ebef4a body=311 status=ok
// SIG undefined FUN_147ebef4a(void)

undefined8 FUN_147ebef4a(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1f320) {
    FUN_144b3d300(&DAT_14cb1f320);
    if (DAT_14cb1f320 == -1) {
      FUN_140056680(&DAT_14cb1f300,L"finish with main task");
      FUN_140056680(&DAT_14cb1f310,L"wait for subtree");
      atexit(FUN_14384af63);
      _Init_thread_footer(&DAT_14cb1f320);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x80);
  puVar3 = &DAT_149dfb77a;
  if (bVar1 < 2) {
    puVar3 = &DAT_149dfb77a;
    if (*(int *)(&DAT_14cb1f308 + (ulonglong)bVar1 * 0x10) != 0) {
      puVar3 = (undefined2 *)(&DAT_14cb1f300)[(ulonglong)bVar1 * 2];
    }
  }
  FUN_147eaa516(&local_40,param_1);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_140002266(param_2,L"%s: %s",puVar2,puVar3);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebf082 FUN_147ebf082 body=332 status=ok
// SIG undefined FUN_147ebf082(void)

/* WARNING: Removing unreachable block (ram,0x000147ebf133) */
/* WARNING: Removing unreachable block (ram,0x000147ebf1c5) */

void FUN_147ebf082(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_5;
  FUN_147ebb3ea();
  if (param_4 == 1) {
    pwVar4 = L"active";
    if ((*(byte *)(param_3 + 9) & 1) == 0) {
      pwVar4 = L"not active";
    }
    FUN_140002266(&local_30,L"main task: %s",pwVar4);
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_5,iVar1);
    }
    lVar2 = *param_5;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_30;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_28;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_28._4_4_;
    local_28 = 0;
    local_30 = 0;
    if ((*(byte *)(param_3 + 9) & 2) != 0) {
      FUN_140056680(&local_30,L"force background tree");
      iVar1 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(param_5,iVar1);
      }
      lVar2 = *param_5;
      lVar3 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar3) = 0;
      *(undefined8 *)(lVar2 + lVar3) = local_30;
      local_30 = 0;
      *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_28;
      *(undefined4 *)(lVar2 + 0xc + lVar3) = local_28._4_4_;
      local_28 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ebf1e8 FUN_147ebf1e8 body=339 status=ok
// SIG undefined FUN_147ebf1e8(void)

undefined8 FUN_147ebf1e8(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  lVar4 = *(longlong *)(param_1 + 0x80);
  if ((((lVar4 != 0) && (lVar2 = FUN_1411c53f8(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30 && (lVar4 = *(longlong *)(param_1 + 0x80), lVar4 != 0)))) {
    lVar2 = FUN_1411c53f8();
    if ((lVar2 == 0) ||
       ((*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x80);
    }
    lVar4 = plVar5[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      lVar4 = plVar5[0x22];
    }
    if ((((*(int *)(param_2 + 0x130) != 0) &&
         ((int)(uint)*(ushort *)(param_1 + 0x88) < *(int *)(param_2 + 0x140))) && (lVar4 != 0)) &&
       (lVar2 = (ulonglong)
                *(ushort *)
                 (*(longlong *)(param_2 + 0x138) + (ulonglong)*(ushort *)(param_1 + 0x88) * 2) +
                *(longlong *)(param_2 + 0x128), lVar2 != 0)) {
      cVar1 = *(char *)(lVar4 + 0x2a);
      if (cVar1 == '\x02') {
        uVar3 = FUN_147eb0e40(lVar4,param_2,lVar2,*(undefined1 *)(param_1 + 0xb8),param_1 + 0x98);
        return uVar3;
      }
      if (cVar1 == '\x01') {
        uVar3 = FUN_147eb0d86(*(undefined4 *)(param_1 + 0x94),param_2,lVar2,
                              *(undefined1 *)(param_1 + 0xb8),
                              CONCAT44(uVar6,*(undefined4 *)(param_1 + 0x90)),
                              *(undefined4 *)(param_1 + 0x94));
        return uVar3;
      }
      if (cVar1 == '\0') {
        uVar3 = FUN_147eb0cf8(lVar4,param_2,lVar2,*(undefined1 *)(param_1 + 0xb8));
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 147ebf33c FUN_147ebf33c body=74 status=ok
// SIG undefined FUN_147ebf33c(void)

ulonglong FUN_147ebf33c(longlong param_1,undefined8 param_2,short param_3)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  lVar1 = FUN_147eacaa0(param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(short *)(param_1 + 0x88) == param_3) {
      FUN_147ebb53a(param_1,lVar1,*(char *)(param_1 + 0xb9) == '\0');
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 147ebf386 FUN_147ebf386 body=330 status=ok
// SIG undefined FUN_147ebf386(void)

/* WARNING: Removing unreachable block (ram,0x000147ebf446) */

void FUN_147ebf386(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined2 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_5;
  FUN_147eba12c();
  lVar2 = *(longlong *)(param_2 + 0x118);
  if (lVar2 == 0) {
    pwVar6 = L"fail";
    puVar7 = &DAT_149dfb77a;
    puVar5 = (undefined2 *)0x0;
  }
  else {
    FUN_147ead8a4(lVar2,&local_50,*(undefined2 *)(param_1 + 0x88),0);
    puVar5 = local_50;
    pwVar6 = L"fail";
    puVar7 = &DAT_149dfb77a;
    if ((int)local_48 != 0) {
      puVar7 = local_50;
    }
    cVar3 = FUN_147ebf1e8(param_1,lVar2);
    if (cVar3 != '\0') {
      pwVar6 = L"pass";
    }
  }
  FUN_140002266(&local_50,L"value: %s (%s)",puVar7,pwVar6);
  iVar1 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_5,iVar1);
  }
  lVar2 = *param_5;
  lVar4 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined2 **)(lVar2 + lVar4) = local_50;
  *(int *)(lVar2 + 8 + lVar4) = (int)local_48;
  *(undefined4 *)(lVar2 + 0xc + lVar4) = local_48._4_4_;
  local_48 = 0;
  local_50 = (undefined2 *)0x0;
  if (puVar5 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebf4d2 FUN_147ebf4d2 body=149 status=ok
// SIG undefined FUN_147ebf4d2(void)

undefined8 FUN_147ebf4d2(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0xb0) != 0) {
    puVar1 = *(undefined2 **)(param_1 + 0xa8);
  }
  FUN_147ebb5ca(param_1,&local_38);
  puVar2 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  FUN_140002266(param_2,L"%s: %s",puVar2,puVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


