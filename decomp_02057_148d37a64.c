// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148d37a64 FUN_148d37a64 body=126 status=ok
// SIG undefined FUN_148d37a64(void)

void FUN_148d37a64(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b405fd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9720c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d37ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d37ae2 FUN_148d37ae2 body=40 status=ok
// SIG undefined FUN_148d37ae2(void)

void FUN_148d37ae2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d37b07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d37b0a FUN_148d37b0a body=114 status=ok
// SIG undefined FUN_148d37b0a(void)

void FUN_148d37b0a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 148d37b7c FUN_148d37b7c body=31 status=ok
// SIG undefined FUN_148d37b7c(void)

undefined8 FUN_148d37b7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d37bb6 FUN_148d37bb6 body=101 status=ok
// SIG undefined FUN_148d37bb6(void)

void FUN_148d37bb6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9721a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d37c1c FUN_148d37c1c body=101 status=ok
// SIG undefined FUN_148d37c1c(void)

void FUN_148d37c1c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9721a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d37c82 FUN_148d37c82 body=134 status=ok
// SIG undefined FUN_148d37c82(void)

void FUN_148d37c82(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9721a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d37cf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d37d08 FUN_148d37d08 body=42 status=ok
// SIG undefined FUN_148d37d08(void)

void FUN_148d37d08(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d37d2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148d37d32 FUN_148d37d32 body=154 status=ok
// SIG undefined FUN_148d37d32(void)

bool FUN_148d37d32(longlong param_1,undefined4 param_2)

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



// FUNCTION 148d37dce FUN_148d37dce body=31 status=ok
// SIG undefined FUN_148d37dce(void)

undefined8 FUN_148d37dce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d37e08 FUN_148d37e08 body=29 status=ok
// SIG undefined FUN_148d37e08(void)

bool FUN_148d37e08(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d37e26 FUN_148d37e26 body=26 status=ok
// SIG undefined FUN_148d37e26(void)

bool FUN_148d37e26(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d37e40 FUN_148d37e40 body=101 status=ok
// SIG undefined FUN_148d37e40(void)

void FUN_148d37e40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d37ea6 FUN_148d37ea6 body=101 status=ok
// SIG undefined FUN_148d37ea6(void)

void FUN_148d37ea6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d37f0c FUN_148d37f0c body=134 status=ok
// SIG undefined FUN_148d37f0c(void)

void FUN_148d37f0c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972280;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b972210;
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
                    /* WARNING: Could not recover jumptable at 0x000148d37f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d37f92 FUN_148d37f92 body=62 status=ok
// SIG undefined FUN_148d37f92(void)

void FUN_148d37f92(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d37fcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148d37fec FUN_148d37fec body=29 status=ok
// SIG undefined FUN_148d37fec(void)

bool FUN_148d37fec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d3800a FUN_148d3800a body=26 status=ok
// SIG undefined FUN_148d3800a(void)

bool FUN_148d3800a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d38024 FUN_148d38024 body=101 status=ok
// SIG undefined FUN_148d38024(void)

void FUN_148d38024(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9722f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d3808a FUN_148d3808a body=134 status=ok
// SIG undefined FUN_148d3808a(void)

void FUN_148d3808a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9722f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d38101. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d38110 FUN_148d38110 body=68 status=ok
// SIG undefined FUN_148d38110(void)

void FUN_148d38110(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d38151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148d38154 FUN_148d38154 body=31 status=ok
// SIG undefined FUN_148d38154(void)

undefined8 FUN_148d38154(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d3818e FUN_148d3818e body=26 status=ok
// SIG undefined FUN_148d3818e(void)

bool FUN_148d3818e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d381a8 FUN_148d381a8 body=101 status=ok
// SIG undefined FUN_148d381a8(void)

void FUN_148d381a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fdf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d3820e FUN_148d3820e body=101 status=ok
// SIG undefined FUN_148d3820e(void)

void FUN_148d3820e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fdf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d38274 FUN_148d38274 body=134 status=ok
// SIG undefined FUN_148d38274(void)

void FUN_148d38274(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fdf50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b972360;
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
                    /* WARNING: Could not recover jumptable at 0x000148d382eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d382fa FUN_148d382fa body=62 status=ok
// SIG undefined FUN_148d382fa(void)

void FUN_148d382fa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d38335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148d38340 FUN_148d38340 body=38 status=ok
// SIG undefined FUN_148d38340(void)

undefined8 FUN_148d38340(undefined8 param_1,int param_2)

{
  FUN_148d38366();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d38366 FUN_148d38366 body=59 status=ok
// SIG undefined FUN_148d38366(void)

void FUN_148d38366(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9723d0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1);
  return;
}



// FUNCTION 148d383a2 FUN_148d383a2 body=114 status=ok
// SIG undefined FUN_148d383a2(void)

void FUN_148d383a2(longlong *param_1,int param_2)

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



// FUNCTION 148d38414 FUN_148d38414 body=29 status=ok
// SIG undefined FUN_148d38414(void)

undefined8 FUN_148d38414(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d3844e FUN_148d3844e body=93 status=ok
// SIG undefined FUN_148d3844e(void)

void FUN_148d3844e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d384ac FUN_148d384ac body=93 status=ok
// SIG undefined FUN_148d384ac(void)

void FUN_148d384ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d3850a FUN_148d3850a body=126 status=ok
// SIG undefined FUN_148d3850a(void)

void FUN_148d3850a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b972540;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d38579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d38596 FUN_148d38596 body=31 status=ok
// SIG undefined FUN_148d38596(void)

undefined8 FUN_148d38596(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148d385b6 FUN_148d385b6 body=144 status=ok
// SIG undefined FUN_148d385b6(void)

longlong FUN_148d385b6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1457511aa();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_148d385f0;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_148d38648(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_148d385f0:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d38648 FUN_148d38648 body=318 status=ok
// SIG undefined FUN_148d38648(void)

undefined4 *
FUN_148d38648(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140ac5f02(param_1,local_58);
  param_4 = (undefined8 *)*param_4;
  *local_50 = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_50 + 1) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_50 + 0xc) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  *(undefined4 *)(local_50 + 4) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140ac5e66(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 4) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140b7fdd8(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d38788 FUN_148d38788 body=29 status=ok
// SIG undefined FUN_148d38788(void)

undefined8 FUN_148d38788(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d387c0 FUN_148d387c0 body=29 status=ok
// SIG undefined FUN_148d387c0(void)

bool FUN_148d387c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d387de FUN_148d387de body=26 status=ok
// SIG undefined FUN_148d387de(void)

bool FUN_148d387de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d387f8 FUN_148d387f8 body=24 status=ok
// SIG undefined FUN_148d387f8(void)

bool FUN_148d387f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d38810 FUN_148d38810 body=93 status=ok
// SIG undefined FUN_148d38810(void)

void FUN_148d38810(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d3886e FUN_148d3886e body=93 status=ok
// SIG undefined FUN_148d3886e(void)

void FUN_148d3886e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d388cc FUN_148d388cc body=126 status=ok
// SIG undefined FUN_148d388cc(void)

void FUN_148d388cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b972690;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d3893b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d3894a FUN_148d3894a body=40 status=ok
// SIG undefined FUN_148d3894a(void)

void FUN_148d3894a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d3896f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d38972 FUN_148d38972 body=152 status=ok
// SIG undefined FUN_148d38972(void)

bool FUN_148d38972(longlong param_1,undefined8 param_2)

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



// FUNCTION 148d38a0c FUN_148d38a0c body=180 status=ok
// SIG undefined FUN_148d38a0c(void)

void FUN_148d38a0c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  FUN_1414a725e(puVar2);
  *puVar2 = &PTR_LAB_14acd0ae0;
  puVar2[2] = 0;
  FUN_14485c47a(puVar2 + 2,param_2);
  *(undefined1 *)(puVar2 + 3) = 1;
  *puVar2 = &PTR_FUN_14b47b0e0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  FUN_148d38ac0(puVar2 + 4,param_3);
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x1c8);
  iVar1 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar1 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar1 * 8) = puVar2;
  return;
}



// FUNCTION 148d38ac0 FUN_148d38ac0 body=459 status=ok
// SIG undefined FUN_148d38ac0(void)

void FUN_148d38ac0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14063ef7a();
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar3 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_38[2] = lVar6;
  *local_38 = &PTR_FUN_14b972770;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_2);
  puVar3[4] = FUN_148d34050;
  plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a55ecf0;
  plVar5[2] = (longlong)local_38;
  local_38 = (undefined8 *)0x0;
  *(undefined4 *)(plVar5 + 3) = local_30;
  local_30 = 0;
  if (plVar5 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar7 = (longlong *)param_1[1];
    if (plVar7 == (longlong *)0x0) goto LAB_148d38c18;
    param_1[1] = 0;
LAB_148d38bd9:
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
    if (plVar5 == (longlong *)0x0) goto LAB_148d38c18;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar5 + 2);
    plVar7 = (longlong *)param_1[1];
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    else {
      param_1[1] = (longlong)plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_148d38bd9;
    }
  }
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_148d38c18:
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d38c8c FUN_148d38c8c body=29 status=ok
// SIG undefined FUN_148d38c8c(void)

undefined8 FUN_148d38c8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d38cc4 FUN_148d38cc4 body=29 status=ok
// SIG undefined FUN_148d38cc4(void)

bool FUN_148d38cc4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d38ce2 FUN_148d38ce2 body=26 status=ok
// SIG undefined FUN_148d38ce2(void)

bool FUN_148d38ce2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d38cfc FUN_148d38cfc body=24 status=ok
// SIG undefined FUN_148d38cfc(void)

bool FUN_148d38cfc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d38d14 FUN_148d38d14 body=93 status=ok
// SIG undefined FUN_148d38d14(void)

void FUN_148d38d14(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b972770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d38d72 FUN_148d38d72 body=93 status=ok
// SIG undefined FUN_148d38d72(void)

void FUN_148d38d72(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b972770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d38dd0 FUN_148d38dd0 body=126 status=ok
// SIG undefined FUN_148d38dd0(void)

void FUN_148d38dd0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b972770;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d38e3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d38e4e FUN_148d38e4e body=35 status=ok
// SIG undefined FUN_148d38e4e(void)

void FUN_148d38e4e(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d38e6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148d38e72 FUN_148d38e72 body=142 status=ok
// SIG undefined FUN_148d38e72(void)

bool FUN_148d38e72(longlong param_1)

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



// FUNCTION 148d38f02 FUN_148d38f02 body=31 status=ok
// SIG undefined FUN_148d38f02(void)

undefined8 FUN_148d38f02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d38f3c FUN_148d38f3c body=29 status=ok
// SIG undefined FUN_148d38f3c(void)

bool FUN_148d38f3c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d38f5a FUN_148d38f5a body=26 status=ok
// SIG undefined FUN_148d38f5a(void)

bool FUN_148d38f5a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d38f74 FUN_148d38f74 body=93 status=ok
// SIG undefined FUN_148d38f74(void)

void FUN_148d38f74(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9727e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d38fd2 FUN_148d38fd2 body=126 status=ok
// SIG undefined FUN_148d38fd2(void)

void FUN_148d38fd2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9727e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d39041. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d39050 FUN_148d39050 body=158 status=ok
// SIG undefined FUN_148d39050(void)

bool FUN_148d39050(longlong param_1,undefined4 param_2)

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



// FUNCTION 148d390f0 FUN_148d390f0 body=125 status=ok
// SIG undefined FUN_148d390f0(void)

void FUN_148d390f0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_148bf43c0(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148d3916e FUN_148d3916e body=73 status=ok
// SIG undefined FUN_148d3916e(void)

void FUN_148d3916e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148d391b8(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_148bf43c0(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,0x10);
  return;
}



// FUNCTION 148d391b8 FUN_148d391b8 body=108 status=ok
// SIG undefined FUN_148d391b8(void)

ulonglong FUN_148d391b8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148d39224 FUN_148d39224 body=68 status=ok
// SIG undefined FUN_148d39224(void)

undefined8 * FUN_148d39224(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b972850;
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



// FUNCTION 148d3926c FUN_148d3926c body=81 status=ok
// SIG undefined FUN_148d3926c(void)

undefined8 FUN_148d3926c(longlong param_1)

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



// FUNCTION 148d392c4 FUN_148d392c4 body=89 status=ok
// SIG undefined FUN_148d392c4(void)

bool FUN_148d392c4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148d3930f;
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
LAB_148d3930f:
  return lVar6 == param_2;
}



// FUNCTION 148d3931e FUN_148d3931e body=118 status=ok
// SIG undefined FUN_148d3931e(void)

void FUN_148d3931e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9728c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d39394 FUN_148d39394 body=118 status=ok
// SIG undefined FUN_148d39394(void)

void FUN_148d39394(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9728c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b972850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d3940a FUN_148d3940a body=156 status=ok
// SIG undefined FUN_148d3940a(void)

void FUN_148d3940a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9728c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b972850;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d39496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d394a6 FUN_148d394a6 body=98 status=ok
// SIG undefined FUN_148d394a6(void)

void FUN_148d394a6(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148d394ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d394fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148d39508 FUN_148d39508 body=94 status=ok
// SIG undefined FUN_148d39508(void)

ulonglong FUN_148d39508(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148d3955b:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148d3955b;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 148d39568 FUN_148d39568 body=125 status=ok
// SIG undefined FUN_148d39568(void)

void FUN_148d39568(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_148bf524c(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148d395e6 FUN_148d395e6 body=31 status=ok
// SIG undefined FUN_148d395e6(void)

undefined8 FUN_148d395e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d3961e FUN_148d3961e body=93 status=ok
// SIG undefined FUN_148d3961e(void)

void FUN_148d3961e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9729a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d3967c FUN_148d3967c body=93 status=ok
// SIG undefined FUN_148d3967c(void)

void FUN_148d3967c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9729a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d396da FUN_148d396da body=126 status=ok
// SIG undefined FUN_148d396da(void)

void FUN_148d396da(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972de0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9729a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d39749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d39768 FUN_148d39768 body=341 status=ok
// SIG undefined FUN_148d39768(void)

void FUN_148d39768(longlong param_1,longlong param_2)

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
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x50);
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
      if ((*(char *)(*local_88 + 0x40 + (longlong)iStack_6c * 0x58) == '\0') &&
         (lVar4 = FUN_14479d2ce(*local_88 + (longlong)iStack_6c * 0x58 + 0x30), lVar4 != 0)) {
        iVar3 = *(int *)(param_2 + 0x88);
        *(uint *)(param_2 + 0x88) = iVar3 + 1U;
        if (*(uint *)(param_2 + 0x8c) < iVar3 + 1U) {
          FUN_147e216c0(param_2,iVar3);
        }
        lVar5 = *(longlong *)(param_2 + 0x80);
        if (*(longlong *)(param_2 + 0x80) == 0) {
          lVar5 = param_2;
        }
        *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d398ce FUN_148d398ce body=206 status=ok
// SIG undefined FUN_148d398ce(void)

longlong FUN_148d398ce(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447c3578(param_1,local_40,param_2);
  plVar2 = (longlong *)FUN_14030a32e(local_40);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar5 = local_40;
    if (0x18 < local_28) {
      pppuVar5 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar5);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x5e0))(plVar2);
    if (lVar3 != 0) {
      lVar4 = FUN_144a2f878();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) goto LAB_148d3997c;
    }
  }
  lVar3 = 0;
LAB_148d3997c:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3999e FUN_148d3999e body=131 status=ok
// SIG undefined FUN_148d3999e(void)

void FUN_148d3999e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a7be76();
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_148d399d7;
  }
  lVar1 = 0;
LAB_148d399d7:
  lVar2 = FUN_14479d2ce(param_1 + 0xd8);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    lVar2 = FUN_14479d2ce(param_1 + 0xd8);
    FUN_141528b20(lVar2 + 0x71a8,lVar1 + 0x3ac8);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  return;
}



// FUNCTION 148d39a22 FUN_148d39a22 body=751 status=ok
// SIG undefined FUN_148d39a22(void)

void FUN_148d39a22(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  code *pcVar5;
  longlong lVar6;
  uint *puVar7;
  undefined8 *puVar8;
  
  FUN_14414d0c0();
  bVar4 = *(byte *)(param_1 + 0x3aa);
  lVar6 = FUN_1470e53c2(param_2,&DAT_14cbcaa58);
  puVar1 = (uint *)(lVar6 + 0x40);
  if (*(byte *)(lVar6 + 0x60) == 1) {
    *puVar1 = (uint)bVar4;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      puVar7 = puVar1;
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        puVar7 = *(uint **)(lVar6 + 0x40);
      }
      (*pcVar5)(puVar7);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x58)) {
      FUN_1400020a8(*(undefined8 *)puVar1);
    }
    *(undefined2 *)(lVar6 + 0x58) = 4;
    *(uint *)(lVar6 + 0x40) = (uint)bVar4;
    *(undefined1 *)(lVar6 + 0x60) = 1;
  }
  bVar4 = *(byte *)(param_1 + 0x418);
  lVar6 = FUN_1470e53c2(param_2,&DAT_14cbcaa60);
  puVar1 = (uint *)(lVar6 + 0x40);
  if (*(byte *)(lVar6 + 0x60) == 1) {
    *puVar1 = (uint)bVar4;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      puVar7 = puVar1;
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        puVar7 = *(uint **)(lVar6 + 0x40);
      }
      (*pcVar5)(puVar7);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x58)) {
      FUN_1400020a8(*(undefined8 *)puVar1);
    }
    *(undefined2 *)(lVar6 + 0x58) = 4;
    *(uint *)(lVar6 + 0x40) = (uint)bVar4;
    *(undefined1 *)(lVar6 + 0x60) = 1;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x398);
  lVar6 = FUN_1470e53c2(param_2,&DAT_14cbcaa68);
  puVar2 = (undefined8 *)(lVar6 + 0x40);
  if (*(byte *)(lVar6 + 0x60) == 3) {
    *(undefined4 *)puVar2 = uVar3;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      puVar8 = puVar2;
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        puVar8 = *(undefined8 **)(lVar6 + 0x40);
      }
      (*pcVar5)(puVar8);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x58)) {
      FUN_1400020a8(*puVar2);
    }
    *(undefined2 *)(lVar6 + 0x58) = 4;
    *(undefined4 *)(lVar6 + 0x40) = uVar3;
    *(undefined1 *)(lVar6 + 0x60) = 3;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x39c);
  lVar6 = FUN_1470e53c2(param_2,&DAT_14cbcaa70);
  puVar2 = (undefined8 *)(lVar6 + 0x40);
  if (*(byte *)(lVar6 + 0x60) == 3) {
    *(undefined4 *)puVar2 = uVar3;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      puVar8 = puVar2;
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        puVar8 = *(undefined8 **)(lVar6 + 0x40);
      }
      (*pcVar5)(puVar8);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x58)) {
      FUN_1400020a8(*puVar2);
    }
    *(undefined2 *)(lVar6 + 0x58) = 4;
    *(undefined4 *)(lVar6 + 0x40) = uVar3;
    *(undefined1 *)(lVar6 + 0x60) = 3;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x3a0);
  lVar6 = FUN_1470e53c2(param_2,&DAT_14cbcaa78);
  puVar2 = (undefined8 *)(lVar6 + 0x40);
  if (*(byte *)(lVar6 + 0x60) == 3) {
    *(undefined4 *)puVar2 = uVar3;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      puVar8 = puVar2;
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        puVar8 = *(undefined8 **)(lVar6 + 0x40);
      }
      (*pcVar5)(puVar8);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x58)) {
      FUN_1400020a8(*puVar2);
    }
    *(undefined2 *)(lVar6 + 0x58) = 4;
    *(undefined4 *)(lVar6 + 0x40) = uVar3;
    *(undefined1 *)(lVar6 + 0x60) = 3;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x3a4);
  lVar6 = FUN_1470e53c2(param_2,&DAT_14cbcaa80);
  puVar2 = (undefined8 *)(lVar6 + 0x40);
  if (*(byte *)(lVar6 + 0x60) == 3) {
    *(undefined4 *)puVar2 = uVar3;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      puVar8 = puVar2;
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        puVar8 = *(undefined8 **)(lVar6 + 0x40);
      }
      (*pcVar5)(puVar8);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x58)) {
      FUN_1400020a8(*puVar2);
    }
    *(undefined2 *)(lVar6 + 0x58) = 4;
    *(undefined4 *)(lVar6 + 0x40) = uVar3;
    *(undefined1 *)(lVar6 + 0x60) = 3;
  }
  return;
}



// FUNCTION 148d39d20 FUN_148d39d20 body=170 status=ok
// SIG undefined FUN_148d39d20(void)

undefined8 FUN_148d39d20(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar3 = FUN_144a7be76();
  if (lVar3 != 0) {
    lVar4 = FUN_144a2f878();
    if (((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         (uVar2 = FUN_1403ae46b(), -1 < (int)uVar2)) &&
        (((int)uVar2 < *(int *)(lVar3 + 0x78f0) &&
         (lVar3 = (ulonglong)uVar2 * 0x48 + *(longlong *)(lVar3 + 0x78e8), lVar3 != 0)))) &&
       ((*(longlong **)(lVar3 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar3 + 0x20) != 0 &&
        (lVar3 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 8))(), lVar3 != 0)))) {
      uVar5 = FUN_1403ae386();
      plVar6 = (longlong *)FUN_144718840(lVar3,uVar5);
      if ((plVar6 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar6 + 0x40))(plVar6), cVar1 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 148d39dca FUN_148d39dca body=89 status=ok
// SIG undefined FUN_148d39dca(void)

ulonglong FUN_148d39dca(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  
  lVar2 = FUN_144a7be76();
  if (lVar2 != 0) {
    lVar3 = FUN_144a2f878();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      cVar1 = FUN_1410eeaa6(lVar2);
      if (cVar1 != '\0') {
        uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        FUN_148ccdbf2(lVar2,1);
        goto LAB_148d39dff;
      }
    }
  }
  uVar4 = 0;
LAB_148d39dff:
  return uVar4 & 0xffffffff;
}



// FUNCTION 148d39e24 FUN_148d39e24 body=285 status=ok
// SIG undefined FUN_148d39e24(void)

ulonglong FUN_148d39e24(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  float fVar11;
  undefined7 uVar10;
  
  lVar5 = FUN_144a7be76();
  uVar10 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar9 = CONCAT71(uVar10,2);
  if (lVar5 != 0) {
    lVar6 = FUN_144a2f878();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      uVar4 = FUN_1403ae46b();
      if ((-1 < (int)uVar4) &&
         (((int)uVar4 < *(int *)(lVar5 + 0x78f0) &&
          (lVar6 = (ulonglong)uVar4 * 0x48 + *(longlong *)(lVar5 + 0x78e8), lVar6 != 0)))) {
        if (*(longlong **)(lVar6 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar6 + 0x20) != 0) {
          lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x28) + 8))();
          if (lVar6 != 0) {
            uVar7 = FUN_1403ae386();
            plVar8 = (longlong *)FUN_144718840(lVar6,uVar7);
            if (plVar8 != (longlong *)0x0) {
              cVar3 = FUN_14661cd1e(lVar5);
              if (cVar3 != '\0') {
                fVar1 = *(float *)(param_2 + 8);
                fVar2 = *(float *)(param_1 + 0xc4);
                cVar3 = (**(code **)(*plVar8 + 0x30))(plVar8);
                if (cVar3 == '\0') {
                  fVar11 = 2.0;
                }
                else {
                  fVar11 = 0.5;
                }
                if (fVar1 - fVar2 < fVar11) {
                  uVar9 = 0;
                  FUN_148ccdbf2(lVar5,0);
                  goto LAB_148d39e6a;
                }
              }
              FUN_1407afb5c(lVar5,0,0);
              uVar9 = CONCAT71(uVar10,1);
            }
          }
        }
      }
    }
  }
LAB_148d39e6a:
  return uVar9 & 0xffffffff;
}



// FUNCTION 148d39f42 FUN_148d39f42 body=26 status=ok
// SIG undefined FUN_148d39f42(void)

byte FUN_148d39f42(undefined8 param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  
  bVar1 = 1;
  if (param_3 != '\x04') {
    bVar1 = FUN_148d39d20();
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}



// FUNCTION 148d39f5c FUN_148d39f5c body=74 status=ok
// SIG undefined FUN_148d39f5c(void)

void FUN_148d39f5c(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a7be76();
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1407afb5c(lVar1,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 148d39fa6 FUN_148d39fa6 body=214 status=ok
// SIG undefined FUN_148d39fa6(void)

undefined8 * FUN_148d39fa6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = FUN_148beb528();
  if (lVar2 != 0) {
    FUN_1401cfad2(lVar2,&local_30,*(undefined1 *)(param_1 + 0xf8));
    if ((undefined8 *)&local_30 == param_2) {
      if (CONCAT44(uStack_2c,local_30) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *(undefined4 *)param_2 = local_30;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_2c;
      *(int *)(param_2 + 1) = iStack_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_24;
    }
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      FUN_140002266(&local_30,L"=%0.02fu",(double)*(float *)(param_1 + 0xfc));
      iVar1 = iStack_28 + -1;
      if (iStack_28 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_2,CONCAT44(uStack_2c,local_30),iVar1);
      if (CONCAT44(uStack_2c,local_30) != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3a080 FUN_148d3a080 body=197 status=ok
// SIG undefined FUN_148d3a080(void)

void FUN_148d3a080(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    FUN_140056680(&local_30,&DAT_149e01fe8);
  }
  else {
    local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x18);
    FUN_1400021e4(&local_20,&local_30);
  }
  if ((longlong *)(param_2 + 8) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 0x10) = local_28;
    *(undefined4 *)(param_2 + 0x14) = local_24;
  }
  thunk_FUN_147f573da(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3a146 FUN_148d3a146 body=248 status=ok
// SIG undefined FUN_148d3a146(void)

void FUN_148d3a146(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141432ebc();
  uVar3 = DAT_14cbcaaf0;
  uVar1 = FUN_140a48832();
  lVar2 = FUN_140c48046(param_1 + 0x80,uVar1,uVar3,0);
  if (lVar2 != 0) {
    local_28 = 0;
    uVar3 = FUN_146178446();
    lVar2 = FUN_140c47e50(lVar2,uVar3,&local_28);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x80) = 0;
      *(undefined1 *)(lVar2 + 0x81) = *(undefined1 *)(param_1 + 0x1b1);
      lVar4 = *(longlong *)(param_1 + 0x198);
      if (DAT_14c950c29 == '\x01') {
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar4 = *(longlong *)(param_1 + 0x198);
        }
      }
      *(longlong *)(lVar2 + 0x88) = lVar4;
      *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(param_1 + 0x1a0);
      *(undefined4 *)(lVar2 + 0x98) = *(undefined4 *)(param_1 + 0x1a8);
      *(undefined1 *)(lVar2 + 0xa0) = *(undefined1 *)(param_1 + 0x1b0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3a240 FUN_148d3a240 body=161 status=ok
// SIG undefined FUN_148d3a240(void)

void FUN_148d3a240(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1489a5ae0(param_1 + 0x1d8,&local_30);
  if ((longlong *)(param_2 + 8) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 0x10) = local_28;
    *(undefined4 *)(param_2 + 0x14) = local_24;
  }
  thunk_FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3a2ec FUN_148d3a2ec body=197 status=ok
// SIG undefined FUN_148d3a2ec(void)

void FUN_148d3a2ec(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    FUN_140056680(&local_30,&DAT_149e01fe8);
  }
  else {
    local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x18);
    FUN_1400021e4(&local_20,&local_30);
  }
  if ((longlong *)(param_2 + 8) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 0x10) = local_28;
    *(undefined4 *)(param_2 + 0x14) = local_24;
  }
  thunk_FUN_147f573da(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3a3b2 FUN_148d3a3b2 body=136 status=ok
// SIG undefined FUN_148d3a3b2(void)

undefined8 FUN_148d3a3b2(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140343d7a();
  if (lVar2 != 0) {
    lVar3 = FUN_144a2f878();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) && (uVar1 = FUN_1403ae46b(), -1 < (int)uVar1)) &&
       ((((int)uVar1 < *(int *)(lVar2 + 0x78f0) &&
         (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(lVar2 + 0x78e8), lVar2 != 0)) &&
        ((*(longlong **)(lVar2 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar2 + 0x20) != 0 &&
         (lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))(), lVar2 != 0)))))) {
      return *(undefined8 *)(lVar2 + 0x518);
    }
  }
  return 0;
}



// FUNCTION 148d3a43a FUN_148d3a43a body=1392 status=ok
// SIG undefined FUN_148d3a43a(void)

void FUN_148d3a43a(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  code *local_58;
  code *local_50;
  undefined4 local_44;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = param_3;
  lVar1 = FUN_14129cf48(*(undefined8 *)(param_1 + 0x18));
  local_50 = (code *)0x0;
  switch(param_3) {
  case 0:
    break;
  case 1:
    param_2 = param_2 + 0x20;
    break;
  case 2:
    param_2 = param_2 + 0x40;
    break;
  case 3:
    param_2 = param_2 + 0x60;
    break;
  case 4:
    param_2 = param_2 + 0x690;
    break;
  case 5:
    param_2 = param_2 + 0x3a8;
    break;
  case 6:
    param_2 = param_2 + 0x6b0;
    break;
  case 7:
    param_2 = param_2 + 0xe0;
    break;
  case 8:
    param_2 = param_2 + 0x80;
    break;
  case 9:
    param_2 = param_2 + 0xa0;
    break;
  case 10:
    param_2 = param_2 + 0xc0;
    break;
  case 0xb:
    param_2 = param_2 + 0x6d0;
    break;
  case 0xc:
    param_2 = param_2 + 0x6f0;
    break;
  case 0xd:
    param_2 = param_2 + 0x3c8;
    break;
  case 0xe:
    param_2 = param_2 + 1000;
    break;
  case 0xf:
    param_2 = param_2 + 0x750;
    break;
  case 0x10:
    param_2 = param_2 + 0x770;
    break;
  case 0x11:
    param_2 = param_2 + 0x790;
    break;
  case 0x12:
    param_2 = param_2 + 0x7b0;
    break;
  case 0x13:
    param_2 = param_2 + 2000;
    break;
  case 0x14:
    param_2 = param_2 + 0x7f0;
    break;
  case 0x15:
    param_2 = param_2 + 0x810;
    break;
  case 0x16:
    param_2 = param_2 + 0x830;
    break;
  case 0x17:
    param_2 = param_2 + 0x100;
    break;
  case 0x18:
    param_2 = param_2 + 0x120;
    break;
  case 0x19:
    param_2 = param_2 + 0x140;
    break;
  case 0x1a:
    param_2 = param_2 + 0x160;
    break;
  case 0x1b:
    param_2 = param_2 + 0x180;
    break;
  case 0x1c:
    param_2 = param_2 + 0x1a0;
    break;
  case 0x1d:
    param_2 = param_2 + 0x1c0;
    break;
  case 0x1e:
    param_2 = param_2 + 0x408;
    break;
  case 0x1f:
    param_2 = param_2 + 0x428;
    break;
  case 0x20:
    param_2 = param_2 + 0x448;
    break;
  case 0x21:
    param_2 = param_2 + 0x710;
    break;
  case 0x22:
    param_2 = param_2 + 0x730;
    break;
  case 0x23:
    param_2 = param_2 + 0x850;
    break;
  case 0x24:
    param_2 = param_2 + 0x870;
    break;
  case 0x25:
    param_2 = param_2 + 0x898;
    break;
  case 0x26:
    param_2 = param_2 + 0x8b8;
    break;
  case 0x27:
    param_2 = param_2 + 0x938;
    break;
  case 0x28:
    if (lVar1 != 0) {
      lVar2 = FUN_144a7d050();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_148d3aa28(param_1,&local_40,param_2 + 0x8d8,param_4);
        local_58 = local_40;
        goto LAB_148d3a890;
      }
    }
    param_2 = param_2 + 0x8d8;
    break;
  case 0x29:
    param_2 = param_2 + 0x1e0;
    break;
  case 0x2a:
    param_2 = param_2 + 0x8f8;
    break;
  case 0x2b:
    param_2 = param_2 + 0x918;
    break;
  case 0x2c:
    param_2 = param_2 + 0x9b8;
    break;
  case 0x2d:
    param_2 = param_2 + 0x958;
    break;
  case 0x2e:
    param_2 = param_2 + 0x970;
    break;
  case 0x2f:
    param_2 = param_2 + 0x988;
    break;
  case 0x30:
    param_2 = param_2 + 0x468;
    goto LAB_148d3a962;
  case 0x31:
    param_2 = param_2 + 0x4b0;
    goto LAB_148d3a962;
  case 0x32:
    param_2 = param_2 + 0x4d8;
    goto LAB_148d3a962;
  case 0x33:
    param_2 = param_2 + 0x4f8;
LAB_148d3a962:
    FUN_148d3aaa4(param_1,&local_40,param_2,param_4);
    local_58 = local_40;
    goto LAB_148d3a890;
  case 0x34:
    param_2 = param_2 + 0x518;
    goto LAB_148d3a858;
  case 0x35:
    param_2 = param_2 + 0x560;
    goto LAB_148d3a858;
  case 0x36:
    param_2 = param_2 + 0x580;
    goto LAB_148d3a858;
  case 0x37:
    param_2 = param_2 + 0x5a0;
    goto LAB_148d3a858;
  case 0x38:
    param_2 = param_2 + 0x5c0;
    goto LAB_148d3a858;
  case 0x39:
    param_2 = param_2 + 0x5e0;
    goto LAB_148d3a858;
  case 0x3a:
    param_2 = param_2 + 0x630;
LAB_148d3a858:
    FUN_148d3ab20(param_1,&local_40,param_2,param_4);
    local_58 = local_40;
    goto LAB_148d3a890;
  case 0x3b:
    param_2 = param_2 + 0x200;
    goto LAB_148d3a984;
  case 0x3c:
    param_2 = param_2 + 0x220;
    goto LAB_148d3a984;
  case 0x3d:
    param_2 = param_2 + 0x240;
    goto LAB_148d3a984;
  case 0x3e:
    param_2 = param_2 + 0x260;
    goto LAB_148d3a984;
  case 0x3f:
    param_2 = param_2 + 0x280;
    goto LAB_148d3a984;
  case 0x40:
    param_2 = param_2 + 0x2a0;
    goto LAB_148d3a984;
  case 0x41:
    param_2 = param_2 + 0x2c0;
    goto LAB_148d3a984;
  case 0x42:
    param_2 = param_2 + 0x2e0;
    goto LAB_148d3a984;
  case 0x43:
    param_2 = param_2 + 0x300;
    goto LAB_148d3a984;
  case 0x44:
    param_2 = param_2 + 800;
    goto LAB_148d3a984;
  case 0x45:
    param_2 = param_2 + 0x340;
LAB_148d3a984:
    FUN_148d3ab9c(param_1,&local_40,param_2,param_4);
    local_58 = local_40;
    goto LAB_148d3a890;
  case 0x46:
    param_2 = param_2 + 0x360;
    goto LAB_148d3a4d1;
  case 0x47:
    param_2 = param_2 + 0x388;
LAB_148d3a4d1:
    local_40 = FUN_148d3b63a;
    local_38 = (code **)((ulonglong)local_38._4_4_ << 0x20);
    local_68 = param_4;
    FUN_148d3ac18(param_2,&local_58,param_1);
    goto LAB_148d3a890;
  case 0x48:
    local_40 = FUN_148d3ad24;
    local_38 = (code **)((ulonglong)local_38._4_4_ << 0x20);
    local_68 = param_4;
    FUN_148d3ac9e(param_2 + 0x608,&local_58,param_1);
    goto LAB_148d3a890;
  case 0x49:
    local_40 = FUN_148d3ae6c;
    local_38 = (code **)((ulonglong)local_38._4_4_ << 0x20);
    local_68 = param_4;
    FUN_148d3ade6(param_2 + 0xa38,&local_58,param_1);
    goto LAB_148d3a890;
  case 0x4a:
    local_40 = FUN_148d3afb4;
    local_38 = (code **)((ulonglong)local_38._4_4_ << 0x20);
    local_68 = param_4;
    FUN_148d3af2e(param_2 + 0xa58,&local_58,param_1);
    goto LAB_148d3a890;
  default:
    goto switchD_148d3a492_default;
  }
  FUN_148d3a9ac(param_1,&local_40,param_2,param_4);
  local_58 = local_40;
LAB_148d3a890:
  local_50 = local_58;
  if (local_58 != (code *)0x0) {
    local_40 = (code *)&local_44;
    local_38 = &local_50;
    FUN_148d44098(param_1 + 0x20,&local_58);
  }
switchD_148d3a492_default:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3a9ac FUN_148d3a9ac body=122 status=ok
// SIG undefined FUN_148d3a9ac(void)

undefined8 FUN_148d3a9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = FUN_148d3b076;
  local_38 = 0;
  FUN_148d44390(local_30,param_1);
  FUN_1448b6402(param_3,param_2,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3aa28 FUN_148d3aa28 body=122 status=ok
// SIG undefined FUN_148d3aa28(void)

undefined8 FUN_148d3aa28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = FUN_148d3b138;
  local_38 = 0;
  FUN_148d44390(local_30,param_1);
  FUN_1448b6402(param_3,param_2,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3aaa4 FUN_148d3aaa4 body=122 status=ok
// SIG undefined FUN_148d3aaa4(void)

undefined8 FUN_148d3aaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = FUN_148d3b504;
  local_38 = 0;
  FUN_148d45002(local_30,param_1);
  FUN_145de1a10(param_3,param_2,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3ab20 FUN_148d3ab20 body=122 status=ok
// SIG undefined FUN_148d3ab20(void)

undefined8 FUN_148d3ab20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = FUN_148d3b442;
  local_38 = 0;
  FUN_148d449a0(local_30,param_1);
  FUN_145c9287e(param_3,param_2,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3ab9c FUN_148d3ab9c body=122 status=ok
// SIG undefined FUN_148d3ab9c(void)

undefined8 FUN_148d3ab9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = FUN_148d3b578;
  local_38 = 0;
  FUN_148d45686(local_30,param_1);
  FUN_145cda432(param_3,param_2,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3ac18 FUN_148d3ac18 body=132 status=ok
// SIG undefined FUN_148d3ac18(void)

undefined8
FUN_148d3ac18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = *param_4;
  FUN_148d426a6(local_30,param_3,&local_40,param_5);
  FUN_1461d4eec(param_1,param_2,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3ac9e FUN_148d3ac9e body=132 status=ok
// SIG undefined FUN_148d3ac9e(void)

undefined8
FUN_148d3ac9e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = *param_4;
  FUN_148d42ce2(local_30,param_3,&local_40,param_5);
  FUN_145dfcecc(param_1,param_2,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3ad24 FUN_148d3ad24 body=193 status=ok
// SIG undefined FUN_148d3ad24(void)

void FUN_148d3ad24(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_32 = 1;
  local_31 = 0;
  uVar1 = FUN_14129cf48(*(undefined8 *)(param_1 + 0x18));
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  local_b8 = local_b0;
  FUN_140bdce7c(uVar2,param_3,uVar1,0);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3ade6 FUN_148d3ade6 body=132 status=ok
// SIG undefined FUN_148d3ade6(void)

undefined8
FUN_148d3ade6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = *param_4;
  FUN_148d43406(local_30,param_3,&local_40,param_5);
  FUN_148d4331e(param_1,param_2,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3ae6c FUN_148d3ae6c body=193 status=ok
// SIG undefined FUN_148d3ae6c(void)

void FUN_148d3ae6c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_32 = 1;
  local_31 = 0;
  uVar1 = FUN_14129cf48(*(undefined8 *)(param_1 + 0x18));
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  local_b8 = local_b0;
  FUN_140bdce7c(uVar2,param_3,uVar1,0);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3af2e FUN_148d3af2e body=132 status=ok
// SIG undefined FUN_148d3af2e(void)

undefined8
FUN_148d3af2e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = *param_4;
  FUN_148d43a42(local_30,param_3,&local_40,param_5);
  FUN_1461d4d10(param_1,param_2,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3afb4 FUN_148d3afb4 body=193 status=ok
// SIG undefined FUN_148d3afb4(void)

void FUN_148d3afb4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_32 = 1;
  local_31 = 0;
  uVar1 = FUN_14129cf48(*(undefined8 *)(param_1 + 0x18));
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  local_b8 = local_b0;
  FUN_140bdce7c(uVar2,param_4,uVar1,0);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3b076 FUN_148d3b076 body=193 status=ok
// SIG undefined FUN_148d3b076(void)

void FUN_148d3b076(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_32 = 1;
  local_31 = 0;
  uVar1 = FUN_14129cf48(*(undefined8 *)(param_1 + 0x18));
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  local_b8 = local_b0;
  FUN_140bdce7c(uVar2,param_2,uVar1,0);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3b138 FUN_148d3b138 body=776 status=ok
// SIG undefined FUN_148d3b138(void)

void FUN_148d3b138(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *param_2;
  local_60 = param_1;
  uVar6 = FUN_14477b664(param_2[1]);
  local_50 = FUN_14477b664(uVar6);
  local_48 = param_2[2];
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,5,0x10);
  local_38 = 5;
  plVar10 = *(longlong **)(param_1 + 0x10);
  if (plVar10 == (longlong *)0x0) {
LAB_148d3b1c6:
    *local_40 = (longlong)&PTR_LAB_149e020b0;
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
    local_40[2] = lVar11;
    *local_40 = (longlong)&PTR_FUN_14b974290;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = local_60;
    FUN_145748442(local_40 + 6,&local_58);
  }
  else {
    iVar5 = (int)plVar10[1];
    do {
      if (iVar5 == 0) goto LAB_148d3b1c6;
      LOCK();
      iVar3 = (int)plVar10[1];
      bVar12 = iVar5 == iVar3;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar12);
    lVar7 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    *local_40 = (longlong)&PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_40[2] = lVar8;
    *local_40 = (longlong)&PTR_FUN_14b974290;
    local_40[3] = lVar7;
    local_40[4] = (longlong)plVar10;
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    local_40[5] = local_60;
    FUN_145748442(local_40 + 6,&local_58);
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
  lVar7 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  if ((lVar7 != 0) && (lVar7 = FUN_140115352(lVar7), lVar7 != 0)) {
    lVar11 = *(longlong *)(param_1 + 0x70);
    lVar8 = *(longlong *)(lVar11 + 0x38);
    if (lVar8 == 0) {
      uVar6 = FUN_14043db3a();
      lVar8 = FUN_14477b664(uVar6);
      *(longlong *)(lVar11 + 0x38) = lVar8;
    }
    lVar9 = *(longlong *)(lVar11 + 0x40);
    if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*(longlong *)(lVar11 + 0x30) != 0)) {
      plVar10 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar10 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar10 + 0x108))(), cVar4 == '\0')
         ) {
        lVar9 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar9 = FUN_144aff482(uVar6,(longlong *)(lVar11 + 0x30));
      }
      *(longlong *)(lVar11 + 0x40) = lVar9;
    }
    FUN_141162a1e(lVar9,&local_60,param_2);
    iVar5 = FUN_1410c0616(lVar7,&local_60,&local_40);
    if (iVar5 == 0) {
      plVar10 = local_40;
      if (local_38 == 0) {
        plVar10 = (longlong *)0x0;
      }
      (**(code **)(*plVar10 + 0x58))();
    }
  }
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3b442 FUN_148d3b442 body=193 status=ok
// SIG undefined FUN_148d3b442(void)

void FUN_148d3b442(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_32 = 1;
  local_31 = 0;
  uVar1 = FUN_14129cf48(*(undefined8 *)(param_1 + 0x18));
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  local_b8 = local_b0;
  FUN_140bdce7c(uVar2,param_4,uVar1,0);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3b504 FUN_148d3b504 body=114 status=ok
// SIG undefined FUN_148d3b504(void)

void FUN_148d3b504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_5;
  uVar1 = FUN_14477b664(param_5[1]);
  local_30 = FUN_14477b664(uVar1);
  local_28 = param_5[2];
  FUN_148d3b442(param_1,param_2,param_3,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3b578 FUN_148d3b578 body=193 status=ok
// SIG undefined FUN_148d3b578(void)

void FUN_148d3b578(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_32 = 1;
  local_31 = 0;
  uVar1 = FUN_14129cf48(*(undefined8 *)(param_1 + 0x18));
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  local_b8 = local_b0;
  FUN_140bdce7c(uVar2,param_3,uVar1,0);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3b63a FUN_148d3b63a body=193 status=ok
// SIG undefined FUN_148d3b63a(void)

void FUN_148d3b63a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_32 = 1;
  local_31 = 0;
  uVar1 = FUN_14129cf48(*(undefined8 *)(param_1 + 0x18));
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  local_b8 = local_b0;
  FUN_140bdce7c(uVar2,param_3,uVar1,0);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3b6fc FUN_148d3b6fc body=1524 status=ok
// SIG undefined FUN_148d3b6fc(void)

void FUN_148d3b6fc(longlong param_1,undefined4 param_2,longlong param_3)

{
  switch(param_2) {
  case 0:
    if (param_3 != 0) {
LAB_148d3bce7:
      FUN_14480f766(param_1,param_3);
      return;
    }
    break;
  case 1:
    if (param_3 != 0) {
      param_1 = param_1 + 0x20;
      goto LAB_148d3bce7;
    }
    break;
  case 2:
    if (param_3 != 0) {
      param_1 = param_1 + 0x40;
      goto LAB_148d3bce7;
    }
    break;
  case 3:
    if (param_3 != 0) {
      param_1 = param_1 + 0x60;
      goto LAB_148d3bce7;
    }
    break;
  case 4:
    if (param_3 != 0) {
      param_1 = param_1 + 0x690;
      goto LAB_148d3bce7;
    }
    break;
  case 5:
    if (param_3 != 0) {
      param_1 = param_1 + 0x3a8;
      goto LAB_148d3bce7;
    }
    break;
  case 6:
    if (param_3 != 0) {
      param_1 = param_1 + 0x6b0;
      goto LAB_148d3bce7;
    }
    break;
  case 7:
    if (param_3 != 0) {
      param_1 = param_1 + 0xe0;
      goto LAB_148d3bce7;
    }
    break;
  case 8:
    if (param_3 != 0) {
      param_1 = param_1 + 0x80;
      goto LAB_148d3bce7;
    }
    break;
  case 9:
    if (param_3 != 0) {
      param_1 = param_1 + 0xa0;
      goto LAB_148d3bce7;
    }
    break;
  case 10:
    if (param_3 != 0) {
      param_1 = param_1 + 0xc0;
      goto LAB_148d3bce7;
    }
    break;
  case 0xb:
    if (param_3 != 0) {
      param_1 = param_1 + 0x6d0;
      goto LAB_148d3bce7;
    }
    break;
  case 0xc:
    if (param_3 != 0) {
      param_1 = param_1 + 0x6f0;
      goto LAB_148d3bce7;
    }
    break;
  case 0xd:
    if (param_3 != 0) {
      param_1 = param_1 + 0x3c8;
      goto LAB_148d3bce7;
    }
    break;
  case 0xe:
    if (param_3 != 0) {
      param_1 = param_1 + 1000;
      goto LAB_148d3bce7;
    }
    break;
  case 0xf:
    if (param_3 != 0) {
      param_1 = param_1 + 0x750;
      goto LAB_148d3bce7;
    }
    break;
  case 0x10:
    if (param_3 != 0) {
      param_1 = param_1 + 0x770;
      goto LAB_148d3bce7;
    }
    break;
  case 0x11:
    if (param_3 != 0) {
      param_1 = param_1 + 0x790;
      goto LAB_148d3bce7;
    }
    break;
  case 0x12:
    if (param_3 != 0) {
      param_1 = param_1 + 0x7b0;
      goto LAB_148d3bce7;
    }
    break;
  case 0x13:
    if (param_3 != 0) {
      param_1 = param_1 + 2000;
      goto LAB_148d3bce7;
    }
    break;
  case 0x14:
    if (param_3 != 0) {
      param_1 = param_1 + 0x7f0;
      goto LAB_148d3bce7;
    }
    break;
  case 0x15:
    if (param_3 != 0) {
      param_1 = param_1 + 0x810;
      goto LAB_148d3bce7;
    }
    break;
  case 0x16:
    if (param_3 != 0) {
      param_1 = param_1 + 0x830;
      goto LAB_148d3bce7;
    }
    break;
  case 0x17:
    if (param_3 != 0) {
      param_1 = param_1 + 0x100;
      goto LAB_148d3bce7;
    }
    break;
  case 0x18:
    if (param_3 != 0) {
      param_1 = param_1 + 0x120;
      goto LAB_148d3bce7;
    }
    break;
  case 0x19:
    if (param_3 != 0) {
      param_1 = param_1 + 0x140;
      goto LAB_148d3bce7;
    }
    break;
  case 0x1a:
    if (param_3 != 0) {
      param_1 = param_1 + 0x160;
      goto LAB_148d3bce7;
    }
    break;
  case 0x1b:
    if (param_3 != 0) {
      param_1 = param_1 + 0x180;
      goto LAB_148d3bce7;
    }
    break;
  case 0x1c:
    if (param_3 != 0) {
      param_1 = param_1 + 0x1a0;
      goto LAB_148d3bce7;
    }
    break;
  case 0x1d:
    if (param_3 != 0) {
      param_1 = param_1 + 0x1c0;
      goto LAB_148d3bce7;
    }
    break;
  case 0x1e:
    if (param_3 != 0) {
      param_1 = param_1 + 0x408;
      goto LAB_148d3bce7;
    }
    break;
  case 0x1f:
    if (param_3 != 0) {
      param_1 = param_1 + 0x428;
      goto LAB_148d3bce7;
    }
    break;
  case 0x20:
    if (param_3 != 0) {
      param_1 = param_1 + 0x448;
      goto LAB_148d3bce7;
    }
    break;
  case 0x21:
    if (param_3 != 0) {
      param_1 = param_1 + 0x710;
      goto LAB_148d3bce7;
    }
    break;
  case 0x22:
    if (param_3 != 0) {
      param_1 = param_1 + 0x730;
      goto LAB_148d3bce7;
    }
    break;
  case 0x23:
    if (param_3 != 0) {
      param_1 = param_1 + 0x850;
      goto LAB_148d3bce7;
    }
    break;
  case 0x24:
    if (param_3 != 0) {
      param_1 = param_1 + 0x870;
      goto LAB_148d3bce7;
    }
    break;
  case 0x25:
    if (param_3 != 0) {
      param_1 = param_1 + 0x898;
      goto LAB_148d3bce7;
    }
    break;
  case 0x26:
    if (param_3 != 0) {
      param_1 = param_1 + 0x8b8;
      goto LAB_148d3bce7;
    }
    break;
  case 0x27:
    if (param_3 != 0) {
      param_1 = param_1 + 0x938;
      goto LAB_148d3bce7;
    }
    break;
  case 0x28:
    if (param_3 != 0) {
      param_1 = param_1 + 0x8d8;
      goto LAB_148d3bce7;
    }
    break;
  case 0x29:
    if (param_3 != 0) {
      param_1 = param_1 + 0x1e0;
      goto LAB_148d3bce7;
    }
    break;
  case 0x2a:
    if (param_3 != 0) {
      param_1 = param_1 + 0x8f8;
      goto LAB_148d3bce7;
    }
    break;
  case 0x2b:
    if (param_3 != 0) {
      param_1 = param_1 + 0x918;
      goto LAB_148d3bce7;
    }
    break;
  case 0x2c:
    if (param_3 != 0) {
      param_1 = param_1 + 0x9b8;
      goto LAB_148d3bce7;
    }
    break;
  case 0x2d:
    if (param_3 != 0) {
      param_1 = param_1 + 0x958;
      goto LAB_148d3bce7;
    }
    break;
  case 0x2e:
    if (param_3 != 0) {
      param_1 = param_1 + 0x970;
      goto LAB_148d3bce7;
    }
    break;
  case 0x2f:
    if (param_3 != 0) {
      param_1 = param_1 + 0x988;
      goto LAB_148d3bce7;
    }
    break;
  case 0x30:
    if (param_3 != 0) {
      param_1 = param_1 + 0x468;
      goto LAB_148d3bce7;
    }
    break;
  case 0x31:
    if (param_3 != 0) {
      param_1 = param_1 + 0x4b0;
      goto LAB_148d3bce7;
    }
    break;
  case 0x32:
    if (param_3 != 0) {
      param_1 = param_1 + 0x4d8;
      goto LAB_148d3bce7;
    }
    break;
  case 0x33:
    if (param_3 != 0) {
      param_1 = param_1 + 0x4f8;
      goto LAB_148d3bce7;
    }
    break;
  case 0x34:
    if (param_3 != 0) {
      param_1 = param_1 + 0x518;
      goto LAB_148d3bce7;
    }
    break;
  case 0x35:
    if (param_3 != 0) {
      param_1 = param_1 + 0x560;
      goto LAB_148d3bce7;
    }
    break;
  case 0x36:
    if (param_3 != 0) {
      param_1 = param_1 + 0x580;
      goto LAB_148d3bce7;
    }
    break;
  case 0x37:
    if (param_3 != 0) {
      param_1 = param_1 + 0x5a0;
      goto LAB_148d3bce7;
    }
    break;
  case 0x38:
    if (param_3 != 0) {
      param_1 = param_1 + 0x5c0;
      goto LAB_148d3bce7;
    }
    break;
  case 0x39:
    if (param_3 != 0) {
      param_1 = param_1 + 0x5e0;
      goto LAB_148d3bce7;
    }
    break;
  case 0x3a:
    if (param_3 != 0) {
      param_1 = param_1 + 0x630;
      goto LAB_148d3bce7;
    }
    break;
  case 0x3b:
    if (param_3 != 0) {
      param_1 = param_1 + 0x200;
      goto LAB_148d3bce7;
    }
    break;
  case 0x3c:
    if (param_3 != 0) {
      param_1 = param_1 + 0x220;
      goto LAB_148d3bce7;
    }
    break;
  case 0x3d:
    if (param_3 != 0) {
      param_1 = param_1 + 0x240;
      goto LAB_148d3bce7;
    }
    break;
  case 0x3e:
    if (param_3 != 0) {
      param_1 = param_1 + 0x260;
      goto LAB_148d3bce7;
    }
    break;
  case 0x3f:
    if (param_3 != 0) {
      param_1 = param_1 + 0x280;
      goto LAB_148d3bce7;
    }
    break;
  case 0x40:
    if (param_3 != 0) {
      param_1 = param_1 + 0x2a0;
      goto LAB_148d3bce7;
    }
    break;
  case 0x41:
    if (param_3 != 0) {
      param_1 = param_1 + 0x2c0;
      goto LAB_148d3bce7;
    }
    break;
  case 0x42:
    if (param_3 != 0) {
      param_1 = param_1 + 0x2e0;
      goto LAB_148d3bce7;
    }
    break;
  case 0x43:
    if (param_3 != 0) {
      param_1 = param_1 + 0x300;
      goto LAB_148d3bce7;
    }
    break;
  case 0x44:
    if (param_3 != 0) {
      param_1 = param_1 + 800;
      goto LAB_148d3bce7;
    }
    break;
  case 0x45:
    if (param_3 != 0) {
      param_1 = param_1 + 0x340;
      goto LAB_148d3bce7;
    }
    break;
  case 0x46:
    if (param_3 != 0) {
      param_1 = param_1 + 0x360;
      goto LAB_148d3bce7;
    }
    break;
  case 0x47:
    if (param_3 != 0) {
      param_1 = param_1 + 0x388;
      goto LAB_148d3bce7;
    }
    break;
  case 0x48:
    if (param_3 != 0) {
      param_1 = param_1 + 0x608;
      goto LAB_148d3bce7;
    }
    break;
  case 0x49:
    if (param_3 != 0) {
      param_1 = param_1 + 0xa38;
      goto LAB_148d3bce7;
    }
    break;
  case 0x4a:
    if (param_3 != 0) {
      param_1 = param_1 + 0xa58;
      goto LAB_148d3bce7;
    }
  }
  return;
}



// FUNCTION 148d3bcf6 FUN_148d3bcf6 body=999 status=ok
// SIG undefined FUN_148d3bcf6(void)

void FUN_148d3bcf6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  bool bVar8;
  undefined1 auStack_c8 [40];
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_68;
  undefined2 local_60;
  undefined1 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90 = *(undefined2 **)(param_1 + 0x88);
  FUN_1446dcdd4(&local_80);
  if (DAT_14cbc6508 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_144815d88(DAT_14cbc6508,&local_80);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_90 = *(undefined2 **)(param_1 + 0xa0);
  FUN_1446dcdd4(&local_80);
  if (DAT_14cbc6528 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_144815d88(DAT_14cbc6528,&local_80);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1 + 0xb8;
  lVar5 = FUN_1470e53c2(param_2,&DAT_14cbcaf10);
  FUN_144983130(lVar5 + 8,lVar1);
  if (lVar4 != 0) {
    lVar5 = FUN_1470e53c2(param_2,&DAT_14cbcaf18);
    FUN_144983130(lVar5 + 8,lVar4 + 0x18);
  }
  if (lVar3 != 0) {
    lVar4 = FUN_1470e53c2(param_2,&DAT_14cbcaf20);
    FUN_144983130(lVar4 + 8,lVar3 + 0x50);
    lVar4 = FUN_1470e53c2(param_2,&DAT_14cbcaf28);
    FUN_144983130(lVar4 + 8,lVar3 + 0x88);
    local_78 = *(undefined8 *)(lVar3 + 0xc0);
    local_80 = 0;
    local_60 = 8;
    local_58 = 0x12;
    local_50 = 0;
    if ((DAT_14c9a9954 & 0x20) == 0) {
      local_50 = 0x12;
    }
    lVar4 = FUN_1470e53c2(param_2,&DAT_14cbcaf30);
    FUN_1403719a4(lVar4 + 8,&local_80);
    FUN_144a2da94(&local_80);
    local_78 = *(undefined8 *)(lVar3 + 0xd8);
    local_80 = 0;
    local_60 = 8;
    local_58 = 0x12;
    local_50 = 0;
    if ((DAT_14c9a9954 & 0x20) == 0) {
      local_50 = 0x12;
    }
    lVar4 = FUN_1470e53c2(param_2,&DAT_14cbcaf38);
    FUN_1403719a4(lVar4 + 8,&local_80);
    FUN_144a2da94(&local_80);
  }
  FUN_14044066a(&local_80,0x11,7);
  cVar2 = FUN_144a43716(param_1 + 0xc0,&local_78);
  FUN_144a2da94(&local_80);
  if (cVar2 == '\0') {
    if (lVar3 == 0) {
      FUN_140592d14(lVar1,&local_a0);
      puVar7 = &DAT_149dfb77a;
      if (local_98 != 0) {
        puVar7 = local_a0;
      }
      FUN_140002266(&local_80,L"%s: %s unit radius",puVar7);
      if ((longlong *)(param_2 + 8) == &local_80) {
        if (local_80 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_2 + 8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_2 + 8) = local_80;
        local_80 = 0;
        *(undefined4 *)(param_2 + 0x10) = (undefined4)local_78;
        *(undefined4 *)(param_2 + 0x14) = local_78._4_4_;
        local_78 = 0;
      }
    }
    else {
      FUN_140592d14(lVar3 + 0x18,&local_90);
      puVar7 = &DAT_149dfb77a;
      if (local_88 != 0) {
        puVar7 = local_90;
      }
      FUN_140592d14(lVar1,&local_a0);
      puVar6 = &DAT_149dfb77a;
      if (local_98 != 0) {
        puVar6 = local_a0;
      }
      FUN_140002266(&local_80,L"%s: %s unit radius",puVar6,puVar7);
      if ((longlong *)(param_2 + 8) == &local_80) {
        if (local_80 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_2 + 8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_2 + 8) = local_80;
        local_80 = 0;
        *(undefined4 *)(param_2 + 0x10) = (undefined4)local_78;
        *(undefined4 *)(param_2 + 0x14) = local_78._4_4_;
        local_78 = 0;
      }
      bVar8 = local_a0 != (undefined2 *)0x0;
      local_a0 = local_90;
      if (bVar8) {
        FUN_1400020a8();
        local_a0 = local_90;
      }
    }
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3c150 FUN_148d3c150 body=442 status=ok
// SIG undefined FUN_148d3c150(void)

void FUN_148d3c150(longlong param_1,longlong param_2)

{
  int *piVar1;
  float *pfVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  float *pfVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14889661a();
  if (*(char *)(param_1 + 0x50) != '\0') {
    cVar6 = FUN_144729dda(param_1 + 0x9c);
    if (cVar6 != '\0') {
      uVar8 = FUN_14479d2ce(param_1 + 0x9c);
      uVar8 = FUN_1447210f0(uVar8);
      FUN_148d3c30c(&local_40,uVar8);
      plVar11 = (longlong *)CONCAT44(uStack_34,local_38);
      if (plVar11 != (longlong *)0x0) {
        iVar7 = (int)plVar11[1];
        do {
          if (iVar7 == 0) {
            plVar11 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar5 = (int)plVar11[1];
          bVar12 = iVar7 == iVar5;
          if (bVar12) {
            *(int *)(plVar11 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar12);
        LOCK();
        piVar1 = (int *)((longlong)CONCAT44(uStack_34,local_38) + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_34,local_38) + 0x10))();
        }
        if (plVar11 != (longlong *)0x0) {
          if (local_40 != 0) {
            fVar14 = *(float *)(param_1 + 0x90);
            fVar13 = (float)FUN_141236616(param_1);
            fVar14 = fVar14 - fVar13;
            if (fVar14 <= 0.0) {
              fVar14 = 0.0;
            }
            FUN_140002266(&local_40,L"\n%0.03f",(double)fVar14);
            iVar7 = local_38 + -1;
            if (local_38 == 0) {
              iVar7 = 0;
            }
            FUN_1400020e8(param_2 + 8,local_40,iVar7);
            if (local_40 != 0) {
              FUN_1400020a8();
            }
            lVar9 = FUN_1470e53c2(param_2,&DAT_14cbcaf18);
            pfVar2 = (float *)(lVar9 + 0x40);
            if (*(byte *)(lVar9 + 0x60) == 3) {
              *pfVar2 = fVar14;
            }
            else {
              pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                                 (ulonglong)((uint)*(byte *)(lVar9 + 0x60) * 0x120));
              if (pcVar4 != (code *)0x0) {
                pfVar10 = pfVar2;
                if (0x18 < *(ushort *)(lVar9 + 0x58)) {
                  pfVar10 = *(float **)(lVar9 + 0x40);
                }
                (*pcVar4)(pfVar10);
              }
              if (0x18 < *(ushort *)(lVar9 + 0x58)) {
                FUN_1400020a8(*(undefined8 *)pfVar2);
              }
              *(undefined2 *)(lVar9 + 0x58) = 4;
              *(float *)(lVar9 + 0x40) = fVar14;
              *(undefined1 *)(lVar9 + 0x60) = 3;
            }
          }
          LOCK();
          plVar3 = plVar11 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3c30c FUN_148d3c30c body=226 status=ok
// SIG undefined FUN_148d3c30c(void)

longlong * FUN_148d3c30c(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_144747626(&local_28,DAT_14cbcb308,param_2);
    plVar2 = local_20;
    if (local_28 != 0) {
      if (local_20 == (longlong *)0x0) {
        *param_1 = local_28;
      }
      else {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        *param_1 = local_28;
        if ((longlong *)param_1[1] != local_20) {
          LOCK();
          *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar2;
        }
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
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
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



// FUNCTION 148d3c3f0 FUN_148d3c3f0 body=65 status=ok
// SIG undefined FUN_148d3c3f0(void)

bool FUN_148d3c3f0(longlong param_1)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)FUN_141236616();
  if (((*(float *)(param_1 + 0x74 + (ulonglong)*(byte *)(param_1 + 0x98) * 4) <= fVar2) ||
      (*(char *)(param_1 + 0x68) != '\0')) ||
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\x01')) {
    bVar1 = *(byte *)(param_1 + 0x98) < 9;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 148d3c432 FUN_148d3c432 body=343 status=ok
// SIG undefined FUN_148d3c432(void)

void FUN_148d3c432(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  int local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = param_1 + 0x9c;
  cVar5 = FUN_144729dda(param_1);
  if (cVar5 != '\0') {
    uVar7 = FUN_14479d2ce(param_1);
    uVar7 = FUN_1447210f0(uVar7);
    FUN_148d3c30c(&local_48,uVar7);
    plVar8 = (longlong *)CONCAT44(uStack_3c,local_40);
    if (plVar8 != (longlong *)0x0) {
      iVar6 = (int)plVar8[1];
      do {
        if (iVar6 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)plVar8[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar8 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_3c,local_40) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_3c,local_40) + 0x10))();
      }
      lVar3 = local_48;
      if (plVar8 != (longlong *)0x0) {
        if (local_48 != 0) {
          uVar7 = FUN_14479d2ce(param_1);
          FUN_148d050ae(lVar3,&local_48,uVar7);
          lVar3 = local_48;
          if ((longlong)local_40 != 0) {
            lVar9 = 0;
            do {
              local_50 = *(undefined8 *)(lVar3 + lVar9);
              cVar5 = FUN_144729dda(&local_50);
              if (cVar5 != '\0') {
                uVar7 = FUN_14479d2ce(&local_50);
                FUN_14585d6a8(uVar7,param_2);
              }
              lVar9 = lVar9 + 8;
            } while ((longlong)local_40 * 8 != lVar9);
          }
          if (local_48 != 0) {
            FUN_1400020a8(local_48);
          }
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3c58a FUN_148d3c58a body=428 status=ok
// SIG undefined FUN_148d3c58a(void)

void FUN_148d3c58a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 0x68) != '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\x01')) {
    param_2 = 0;
  }
  param_1 = param_1 + 0x9c;
  cVar5 = FUN_144729dda(param_1);
  if (cVar5 != '\0') {
    uVar7 = FUN_14479d2ce(param_1);
    uVar7 = FUN_1447210f0(uVar7);
    FUN_148d3c30c(&local_50,uVar7);
    plVar10 = (longlong *)CONCAT44(uStack_44,local_48);
    if (plVar10 != (longlong *)0x0) {
      iVar6 = (int)plVar10[1];
      do {
        if (iVar6 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)plVar10[1];
        bVar12 = iVar6 == iVar4;
        if (bVar12) {
          *(int *)(plVar10 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar12);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_44,local_48) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_44,local_48) + 0x10))();
      }
      lVar3 = local_50;
      if (plVar10 != (longlong *)0x0) {
        if (local_50 != 0) {
          uVar7 = FUN_14479d2ce(param_1);
          FUN_148d050ae(lVar3,&local_50,uVar7);
          lVar3 = local_50;
          if ((longlong)local_48 != 0) {
            lVar11 = 0;
            do {
              local_58 = *(undefined8 *)(lVar3 + lVar11);
              cVar5 = FUN_144729dda(&local_58);
              if (cVar5 != '\0') {
                lVar8 = FUN_14479d2ce(&local_58);
                lVar8 = *(longlong *)(lVar8 + 0x3d0);
                if (lVar8 != 0) {
                  lVar9 = FUN_144a2f878();
                  if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
                    (**(code **)(*(longlong *)(lVar8 + 0x3bb8) + 0x10))(lVar8 + 0x3bb8,param_2);
                  }
                }
              }
              lVar11 = lVar11 + 8;
            } while ((longlong)local_48 * 8 != lVar11);
          }
          if (local_50 != 0) {
            FUN_1400020a8(local_50);
          }
        }
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3c738 FUN_148d3c738 body=485 status=ok
// SIG undefined FUN_148d3c738(void)

void FUN_148d3c738(longlong param_1,byte param_2,float param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  byte bVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined1 local_80;
  undefined8 local_78;
  longlong local_70;
  int local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar11 = 1;
  if (*(char *)(param_1 + 0x68) == '\0') {
    bVar11 = *(byte *)(*(longlong *)(param_1 + 0x40) + 0x180);
  }
  param_1 = param_1 + 0x9c;
  cVar5 = FUN_144729dda(param_1);
  if (cVar5 != '\0') {
    uVar7 = FUN_14479d2ce(param_1);
    uVar7 = FUN_1447210f0(uVar7);
    FUN_148d3c30c(&local_70,uVar7);
    plVar9 = (longlong *)CONCAT44(uStack_64,local_68);
    if (plVar9 != (longlong *)0x0) {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar12 = iVar6 == iVar4;
        if (bVar12) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar12);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_64,local_68) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
      }
      lVar3 = local_70;
      if (plVar9 != (longlong *)0x0) {
        if (local_70 != 0) {
          uVar7 = FUN_14479d2ce(param_1);
          FUN_148d050ae(lVar3,&local_70,uVar7);
          lVar3 = local_70;
          if ((longlong)local_68 != 0) {
            uVar10 = 0;
            uVar8 = (ulonglong)((int)param_3 & 0xff);
            if (bVar11 != 0) {
              uVar8 = uVar10;
            }
            do {
              local_78 = *(undefined8 *)(lVar3 + uVar10);
              cVar5 = FUN_144729dda(&local_78);
              if (cVar5 != '\0') {
                uVar7 = FUN_14479d2ce(&local_78);
                if ((~bVar11 & param_2) == 0) {
                  local_88 = &DAT_149e1e2f4;
                  local_80 = 0;
                  FUN_1461a0fa0(uVar7,&DAT_14cbcaf40,0x42480000,uVar8);
                }
                else {
                  local_88 = &DAT_149e1e2f4;
                  FUN_1461a0f26(uVar7,&DAT_14cbcaf40,0x42480000,uVar8);
                }
              }
              uVar10 = uVar10 + 8;
            } while ((longlong)local_68 * 8 != uVar10);
          }
          if (local_70 != 0) {
            FUN_1400020a8(local_70);
          }
        }
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
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3c91e FUN_148d3c91e body=360 status=ok
// SIG undefined FUN_148d3c91e(void)

void FUN_148d3c91e(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    param_1 = param_1 + 0x9c;
    cVar5 = FUN_144729dda(param_1);
    if (cVar5 != '\0') {
      uVar7 = FUN_14479d2ce(param_1);
      uVar7 = FUN_1447210f0(uVar7);
      FUN_148d3c30c(&local_50,uVar7);
      plVar8 = (longlong *)CONCAT44(uStack_44,local_48);
      if (plVar8 != (longlong *)0x0) {
        iVar6 = (int)plVar8[1];
        do {
          if (iVar6 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar4 = (int)plVar8[1];
          bVar10 = iVar6 == iVar4;
          if (bVar10) {
            *(int *)(plVar8 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar10);
        LOCK();
        piVar1 = (int *)((longlong)CONCAT44(uStack_44,local_48) + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_44,local_48) + 0x10))();
        }
        lVar3 = local_50;
        if (plVar8 != (longlong *)0x0) {
          if (local_50 != 0) {
            uVar7 = FUN_14479d2ce(param_1);
            FUN_148d050ae(lVar3,&local_50,uVar7);
            lVar3 = local_50;
            if ((longlong)local_48 != 0) {
              lVar9 = 0;
              do {
                local_58 = *(undefined8 *)(lVar3 + lVar9);
                cVar5 = FUN_144729dda(&local_58);
                if (cVar5 != '\0') {
                  uVar7 = FUN_14479d2ce(&local_58);
                  FUN_141306a06(uVar7,param_2,param_3);
                }
                lVar9 = lVar9 + 8;
              } while ((longlong)local_48 * 8 != lVar9);
            }
            if (local_50 != 0) {
              FUN_1400020a8(local_50);
            }
          }
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3ca88 FUN_148d3ca88 body=459 status=ok
// SIG undefined FUN_148d3ca88(void)

void FUN_148d3ca88(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)(param_1 + 0x68) != '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\x01')) {
    FUN_1446f470e(&local_58,L"FirstPerson",1);
    param_2 = local_58;
  }
  param_1 = param_1 + 0x9c;
  cVar5 = FUN_144729dda(param_1);
  if (cVar5 != '\0') {
    uVar7 = FUN_14479d2ce(param_1);
    uVar7 = FUN_1447210f0(uVar7);
    FUN_148d3c30c(&local_58,uVar7);
    plVar11 = (longlong *)CONCAT44(uStack_4c,local_50);
    if (plVar11 != (longlong *)0x0) {
      iVar6 = (int)plVar11[1];
      do {
        if (iVar6 == 0) {
          plVar11 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)plVar11[1];
        bVar12 = iVar6 == iVar4;
        if (bVar12) {
          *(int *)(plVar11 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar12);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_4c,local_50) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x10))();
      }
      lVar3 = local_58;
      if (plVar11 != (longlong *)0x0) {
        if (local_58 != 0) {
          uVar7 = FUN_14479d2ce(param_1);
          FUN_148d050ae(lVar3,&local_58,uVar7);
          lVar3 = local_58;
          if ((longlong)local_50 != 0) {
            lVar10 = 0;
            do {
              local_60 = *(undefined8 *)(lVar3 + lVar10);
              cVar5 = FUN_144729dda(&local_60);
              if ((cVar5 != '\0') && (lVar8 = FUN_14479d2ce(&local_60), lVar8 != 0)) {
                lVar9 = FUN_144a5dd5e();
                if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
                  local_70 = 0;
                  local_78 = 0;
                  thunk_FUN_1459a44de(lVar8,param_2,0,0);
                }
              }
              lVar10 = lVar10 + 8;
            } while ((longlong)local_50 * 8 != lVar10);
          }
          if (local_58 != 0) {
            FUN_1400020a8(local_58);
          }
        }
        LOCK();
        plVar2 = plVar11 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3cc5a FUN_148d3cc5a body=269 status=ok
// SIG undefined FUN_148d3cc5a(void)

void FUN_148d3cc5a(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14044066a(&local_68,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_60);
  FUN_144a2da94(&local_68);
  if (cVar1 == '\0') {
    FUN_140592d14(param_1 + 0x80,&local_78);
    puVar2 = local_78;
    if (local_70 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_68,&DAT_149e0625e,puVar2);
    if ((longlong *)(param_2 + 8) == &local_68) {
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_68;
      local_68 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_60;
      *(undefined4 *)(param_2 + 0x14) = local_60._4_4_;
      local_60 = 0;
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3cd72 FUN_148d3cd72 body=481 status=ok
// SIG undefined FUN_148d3cd72(void)

void FUN_148d3cd72(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  lVar7 = FUN_1405f939e();
  if (lVar7 == 0) goto LAB_148d3cf13;
  lVar1 = param_1 + 0x7c;
  cVar6 = FUN_144729dda(lVar1);
  if (cVar6 == '\0') {
LAB_148d3cdd1:
    pdVar9 = (double *)&DAT_14c8464e0;
    uVar15 = SUB84(DAT_14c8464f0,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    lVar8 = FUN_14479d2ce(lVar1);
    lVar8 = *(longlong *)(lVar8 + 0x1c8);
    if (lVar8 == 0) goto LAB_148d3cdd1;
    uVar15 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
    uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
    pdVar9 = (double *)(lVar8 + 0x260);
  }
  iVar12 = 0;
  if (*(int *)(lVar7 + 0x238) < 1) {
    lVar8 = 0;
  }
  else {
    dVar4 = *pdVar9;
    dVar5 = pdVar9[1];
    uVar17 = 0xffffffff;
    uVar18 = 0x7fefffff;
    lVar11 = 0;
    lVar13 = 0;
    do {
      lVar8 = FUN_14479d2ce(*(longlong *)(lVar7 + 0x230) + lVar11);
      if (lVar8 != 0) {
        lVar10 = FUN_144a5dd5e();
        if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
           (lVar8 = *(longlong *)(lVar8 + 0xa08), lVar8 != 0)) {
          lVar10 = FUN_144a2f878();
          if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
             (cVar6 = FUN_148cd4aba(lVar8), cVar6 != '\0')) {
            cVar6 = FUN_144729dda(lVar1);
            if (cVar6 == '\0') break;
            lVar10 = *(longlong *)(lVar8 + 0x1c8);
            pdVar9 = (double *)&DAT_14c8464e0;
            dVar14 = DAT_14c8464f0;
            if (lVar10 != 0) {
              pdVar9 = (double *)(lVar10 + 0x260);
              dVar14 = *(double *)(lVar10 + 0x270);
            }
            dVar14 = dVar14 - (double)CONCAT44(uVar16,uVar15);
            dVar14 = dVar14 * dVar14 +
                     (*pdVar9 - dVar4) * (*pdVar9 - dVar4) +
                     (pdVar9[1] - dVar5) * (pdVar9[1] - dVar5);
            bVar2 = (double)CONCAT44(uVar18,uVar17) != dVar14;
            bVar3 = dVar14 <= (double)CONCAT44(uVar18,uVar17);
            if ((double)CONCAT44(uVar18,uVar17) <= dVar14) {
              dVar14 = (double)CONCAT44(uVar18,uVar17);
            }
            if (bVar3 && bVar2) {
              lVar13 = lVar8;
            }
            uVar17 = SUB84(dVar14,0);
            uVar18 = (undefined4)((ulonglong)dVar14 >> 0x20);
          }
        }
      }
      lVar11 = lVar11 + 8;
      iVar12 = iVar12 + 1;
      lVar8 = lVar13;
    } while (iVar12 < *(int *)(lVar7 + 0x238));
  }
  FUN_14485c47a(param_1 + 0x74,lVar8);
LAB_148d3cf13:
  FUN_148d3cf54(param_1);
  return;
}



// FUNCTION 148d3cf54 FUN_148d3cf54 body=425 status=ok
// SIG undefined FUN_148d3cf54(void)

void FUN_148d3cf54(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 auStack_60 [3];
  undefined2 local_48;
  undefined1 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = FUN_1405f939e();
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x70) == '\x01') {
      lVar1 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(lVar1 + 0xb8) != 0) {
        uVar4 = FUN_1416a3972(param_1);
        uVar5 = FUN_14479d2ce(param_1 + 0x84);
        local_68 = 0;
        auStack_60[0] = 0;
        local_48 = 8;
        FUN_14485c47a(auStack_60,uVar5);
        local_40 = 7;
        local_38 = 7;
        if ((DAT_14c9a8cf4 & 0x20) != 0) {
          local_38 = 0;
        }
        FUN_1402b8456(uVar4,lVar1 + 0xb8,&local_68);
        FUN_144a2da94(&local_68);
      }
      *(undefined1 *)(param_1 + 0x70) = 2;
    }
    else if (*(char *)(param_1 + 0x70) == '\0') {
      *(undefined1 *)(param_1 + 0x70) = 1;
      cVar2 = FUN_144729dda(param_1 + 0x74);
      if (cVar2 != '\0') {
        uVar4 = FUN_14479d2ce(param_1 + 0x74);
        local_f8 = &local_88;
        local_88 = DAT_14c8464f8;
        uStack_80 = DAT_14c846500;
        local_78 = DAT_14c846508;
        local_d8 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_c0 = DAT_14c846508;
        uStack_d0 = DAT_14c8464f8;
        local_c8 = DAT_14c846500;
        local_a0 = (undefined4)DAT_14c8464e0;
        uStack_9c = DAT_14c8464e0._4_4_;
        uStack_98 = (undefined4)DAT_14c8464e8;
        uStack_94 = DAT_14c8464e8._4_4_;
        local_90 = DAT_14c8464f0;
        FUN_1461d9ef2(uVar4,&local_e8,0,0);
      }
    }
    *(float *)(param_1 + 0x8c) = (float)(*(double *)(lVar3 + 0x6d0) + 30.0);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3d100 FUN_148d3d100 body=171 status=ok
// SIG undefined FUN_148d3d100(void)

void FUN_148d3d100(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x74);
  lVar3 = FUN_1405f939e(param_1);
  if ((((lVar2 != 0) && (lVar3 != 0)) && (*(char *)(param_1 + 0x68) == '\0')) &&
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\0')) {
    cVar1 = *(char *)(param_1 + 0x70);
    if (cVar1 == '\x01') {
      uVar4 = FUN_148cd5674(lVar2);
      FUN_14485c47a(param_1 + 0x84,uVar4);
      cVar1 = FUN_144729dda(param_1 + 0x84);
      if (cVar1 != '\0') {
        FUN_148d3cf54(param_1);
      }
      cVar1 = *(char *)(param_1 + 0x70);
    }
    if (cVar1 != '\x02') {
      lVar2 = FUN_1405f939e(param_1);
      if (*(double *)(lVar2 + 0x6d0) <= (double)*(float *)(param_1 + 0x8c)) {
        return;
      }
    }
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 148d3d1b2 FUN_148d3d1b2 body=302 status=ok
// SIG undefined FUN_148d3d1b2(void)

void FUN_148d3d1b2(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cbcaf4c);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  FUN_14044066a(&local_68,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_60);
  FUN_144a2da94(&local_68);
  if (cVar1 == '\0') {
    FUN_140592d14(param_1 + 0x80,&local_78);
    puVar3 = local_78;
    if (local_70 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_68,&DAT_149e0625e,puVar3);
    if ((longlong *)(param_2 + 8) == &local_68) {
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_68;
      local_68 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_60;
      *(undefined4 *)(param_2 + 0x14) = local_60._4_4_;
      local_60 = 0;
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3d2e8 FUN_148d3d2e8 body=117 status=ok
// SIG undefined FUN_148d3d2e8(void)

void FUN_148d3d2e8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x68) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\0')) {
    lVar2 = FUN_14479d2ce(param_1 + 0x70);
    if (lVar2 != 0) {
      lVar3 = FUN_144a2f878();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        cVar1 = FUN_144168062(lVar2 + 0x7c78);
        if (cVar1 != '\0') {
          return;
        }
      }
    }
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 148d3d36e FUN_148d3d36e body=695 status=ok
// SIG undefined FUN_148d3d36e(void)

void FUN_148d3d36e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  double *pdVar12;
  undefined8 ****ppppuVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_b9;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined4 local_90;
  undefined8 ***local_88;
  longlong *local_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = *(longlong *)(param_1 + 0x48);
  cVar6 = FUN_144a8e0e6(lVar3 + 0x90);
  if (cVar6 == '\0') {
    local_b9 = 2;
    local_c8 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_88);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_144a7bf34(&local_b8,&local_88,&local_c8,&local_b9);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    FUN_1447c3578(lVar3 + 0x88,&local_88,&local_b8);
    lVar7 = FUN_14030a32e(&local_88);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar13 = &local_88;
      if (0x18 < local_70) {
        ppppuVar13 = (undefined8 ****)local_88;
      }
      (*pcVar4)(ppppuVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
    FUN_144a5ac3a(&local_b8);
  }
  else {
    lVar7 = 0;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  uVar8 = FUN_1416a3972(param_1);
  uVar8 = FUN_1462592ee(uVar8);
  FUN_1410d0284(uVar8,&local_b8);
  uVar5 = local_b8;
  lVar14 = (longlong)(int)uStack_b0;
  if (lVar14 != 0) {
    fVar16 = *(float *)(lVar3 + 0xc0) * *(float *)(lVar3 + 0xc0);
    lVar15 = 0;
    do {
      if ((*(longlong **)(uVar5 + lVar15) != (longlong *)0x0) &&
         (lVar9 = (**(code **)(**(longlong **)(uVar5 + lVar15) + 0x5f8))(), lVar9 != 0)) {
        lVar10 = FUN_1402095ca();
        iVar2 = *(int *)(lVar10 + 0x38);
        if ((iVar2 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar2 * 8)
            == lVar10 + 0x30)) {
          if (0.0 < fVar16 && lVar7 != 0) {
            lVar10 = *(longlong *)(lVar7 + 0x1c8);
            if (lVar10 == 0) {
              uVar17 = SUB84(DAT_14c8464f0,0);
              uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              pdVar11 = (double *)&DAT_14c8464e0;
            }
            else {
              uVar17 = (undefined4)*(undefined8 *)(lVar10 + 0x270);
              uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x270) >> 0x20);
              pdVar11 = (double *)(lVar10 + 0x260);
            }
            lVar10 = *(longlong *)(lVar9 + 0x1c8);
            pdVar12 = (double *)&DAT_14c8464e0;
            dVar19 = DAT_14c8464f0;
            if (lVar10 != 0) {
              pdVar12 = (double *)(lVar10 + 0x260);
              dVar19 = *(double *)(lVar10 + 0x270);
            }
            dVar19 = (double)CONCAT44(uVar18,uVar17) - dVar19;
            if ((double)fVar16 <
                dVar19 * dVar19 +
                (*pdVar11 - *pdVar12) * (*pdVar11 - *pdVar12) +
                (pdVar11[1] - pdVar12[1]) * (pdVar11[1] - pdVar12[1])) goto LAB_148d3d52f;
          }
          FUN_1458ae910(lVar9,CONCAT71((int7)(int3)((uint)iVar2 >> 8),*(undefined1 *)(lVar3 + 0x80))
                              | 2,0);
        }
      }
LAB_148d3d52f:
      lVar15 = lVar15 + 8;
    } while (lVar14 * 8 != lVar15);
  }
  if (local_b8 != 0) {
    FUN_1400020a8(local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3d638 FUN_148d3d638 body=111 status=ok
// SIG undefined FUN_148d3d638(void)

void FUN_148d3d638(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143d76184();
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xf0) == '\x01') {
    lVar2 = FUN_14479d2ce(param_1 + 0x98);
    if (lVar2 != 0) {
      lVar3 = FUN_144a2f878();
      iVar1 = *(int *)(lVar3 + 0x38);
      if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
          (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
           lVar3 + 0x30)) && (*(char *)(lVar2 + 0x73eb) == '\x01')) {
        FUN_145da254a(lVar2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d3d6a8 FUN_148d3d6a8 body=54 status=ok
// SIG undefined FUN_148d3d6a8(void)

void FUN_148d3d6a8(longlong param_1,undefined8 param_2)

{
  FUN_14889ac28();
  if (*(char *)(param_1 + 0x50) != '\x02') {
    return;
  }
  FUN_148d3d6de(param_1 + 0x1c0,param_2);
  return;
}



// FUNCTION 148d3d6de FUN_148d3d6de body=657 status=ok
// SIG undefined FUN_148d3d6de(void)

void FUN_148d3d6de(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar6 = FUN_14625921e();
  FUN_1410d53f0(&local_58,uVar6);
  if (plStack_50 != (longlong *)0x0) {
    iVar5 = (int)plStack_50[1];
    do {
      if (iVar5 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar2 = (int)plStack_50[1];
      bVar15 = iVar5 == iVar2;
      if (bVar15) {
        *(int *)(plStack_50 + 1) = iVar5 + 1;
        iVar2 = iVar5;
      }
      iVar5 = iVar2;
      UNLOCK();
      plVar10 = plStack_50;
    } while (!bVar15);
    LOCK();
    piVar1 = (int *)((longlong)plStack_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_50 + 0x10))();
    }
    lVar12 = local_58;
    if (plVar10 != (longlong *)0x0) {
      if (local_58 != 0) {
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
          lVar14 = *(longlong *)(param_1 + 0xf0);
          lVar11 = (longlong)*(int *)(param_1 + 0xf8) << 3;
          local_80 = param_2;
          do {
            plVar7 = (longlong *)FUN_14479d2ce(lVar14);
            if (plVar7 != (longlong *)0x0) {
              lVar8 = FUN_146226e28(lVar12,plVar7);
              if ((((*(byte *)(plVar7 + 0x84) & 2) == 0) ||
                  (cVar3 = (**(code **)(*plVar7 + 0x6c8))(plVar7), cVar3 == '\0')) ||
                 (cVar3 = FUN_141107632(plVar7), cVar3 == '\0')) {
                bVar4 = 0;
              }
              else {
                bVar4 = *(byte *)(param_1 + 0xe0);
              }
              if ((lVar8 == 0) ||
                 ((bVar4 | (*(int *)(lVar8 + 0x20) == *(int *)(param_1 + 0x18) &&
                           *(longlong *)(lVar8 + 0x18) == *(longlong *)(param_1 + 0x10))) != 1)) {
                local_68 = plVar7[3];
                FUN_1400021e4(&local_68,&local_78);
                puVar13 = &DAT_149dfb77a;
                if (local_70 != 0) {
                  puVar13 = local_78;
                }
                pwVar9 = L"%s finished loading";
              }
              else {
                if (1 < (int)plStack_50) {
                  FUN_1400020e8(&local_58,&DAT_149e01f72,1);
                }
                local_68 = plVar7[3];
                FUN_1400021e4(&local_68,&local_78);
                puVar13 = &DAT_149dfb77a;
                if (local_70 != 0) {
                  puVar13 = local_78;
                }
                pwVar9 = L"%s still loading";
              }
              FUN_140002266(&local_68,pwVar9,puVar13);
              iVar5 = local_60 + -1;
              if (local_60 == 0) {
                iVar5 = 0;
              }
              FUN_1400020e8(&local_58,local_68,iVar5);
              if (local_68 != 0) {
                FUN_1400020a8();
              }
              if (local_78 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            lVar14 = lVar14 + 8;
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
          if (1 < (int)plStack_50) {
            lVar12 = local_80 + 8;
            FUN_1400020e8(lVar12,&DAT_149e01f72,1);
            iVar5 = (int)plStack_50 + -1;
            if ((int)plStack_50 == 0) {
              iVar5 = 0;
            }
            FUN_1400020e8(lVar12,local_58,iVar5);
          }
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      LOCK();
      plVar7 = plVar10 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3d970 FUN_148d3d970 body=111 status=ok
// SIG undefined FUN_148d3d970(void)

void FUN_148d3d970(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1488a9ed8();
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xf0) == '\x01') {
    lVar2 = FUN_14479d2ce(param_1 + 0xa8);
    if (lVar2 != 0) {
      lVar3 = FUN_144a2f878();
      iVar1 = *(int *)(lVar3 + 0x38);
      if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
          (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
           lVar3 + 0x30)) && (*(char *)(lVar2 + 0x73eb) == '\x01')) {
        FUN_145da254a(lVar2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d3d9e6 FUN_148d3d9e6 body=41 status=ok
// SIG undefined FUN_148d3d9e6(void)

void FUN_148d3d9e6(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_148d3da10();
  if (lVar1 != 0) {
    FUN_14415d92e(param_1,lVar1);
    return;
  }
  return;
}



// FUNCTION 148d3da10 FUN_148d3da10 body=232 status=ok
// SIG undefined FUN_148d3da10(void)

longlong * FUN_148d3da10(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  uVar3 = FUN_1416a3972();
  uVar3 = FUN_1462592ee(uVar3);
  FUN_1410d0284(uVar3,&local_38);
  lVar1 = local_38;
  lVar5 = (longlong)(int)uStack_30;
  if (lVar5 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar7 = 0;
    do {
      plVar6 = *(longlong **)(lVar1 + lVar7);
      if (plVar6 != (longlong *)0x0) {
        lVar4 = FUN_144a5dd5e();
        if ((((*(int *)(lVar4 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
              == lVar4 + 0x30)) && ((*(byte *)(plVar6 + 0x84) & 2) != 0)) &&
           ((cVar2 = (**(code **)(*plVar6 + 0x6c8))(plVar6), cVar2 != '\0' &&
            (cVar2 = FUN_141107632(plVar6), cVar2 != '\0')))) goto LAB_148d3dac4;
      }
      lVar7 = lVar7 + 8;
    } while (lVar5 * 8 != lVar7);
    plVar6 = (longlong *)0x0;
  }
LAB_148d3dac4:
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6;
}



// FUNCTION 148d3dafa FUN_148d3dafa body=59 status=ok
// SIG undefined FUN_148d3dafa(void)

void FUN_148d3dafa(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x70);
  if (cVar2 != '\0') {
    lVar1 = FUN_14479d2ce(param_1 + 0x70);
    FUN_140457ffc(lVar1 + 0x48,param_1);
    return;
  }
  return;
}



// FUNCTION 148d3db36 FUN_148d3db36 body=103 status=ok
// SIG undefined FUN_148d3db36(void)

void FUN_148d3db36(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b93078();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148d45fe2(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3dbf6 FUN_148d3dbf6 body=546 status=ok
// SIG undefined FUN_148d3dbf6(void)

void FUN_148d3dbf6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x48);
  lVar6 = FUN_145d4f736();
  lVar8 = *(longlong *)(lVar6 + 0x88);
  if (lVar8 == 0) {
    uVar7 = FUN_145cd7928();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(lVar6 + 0x88) = lVar8;
  }
  lVar9 = *(longlong *)(lVar6 + 0x90);
  if (lVar9 == 0) {
    if ((lVar8 == 0) || (*(longlong *)(lVar6 + 0x80) == 0)) goto LAB_148d3dcc8;
    plVar4 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
      *(undefined8 *)(lVar6 + 0x90) = 0;
      goto LAB_148d3dcc8;
    }
    uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar9 = FUN_144aff482(uVar7,(longlong *)(lVar6 + 0x80));
    *(longlong *)(lVar6 + 0x90) = lVar9;
    if (lVar9 == 0) goto LAB_148d3dcc8;
  }
  uVar7 = FUN_1416a3972(param_1);
  lVar6 = FUN_1462592ee(uVar7);
  lVar8 = *(longlong *)(lVar6 + 0x158);
  plVar4 = *(longlong **)(lVar6 + 0x160);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar8 != 0) {
    FUN_14495448a(local_48,L"GbxMomentNodeState_PlayMovie",*(undefined4 *)(param_1 + 0x70));
    FUN_145d4f580(lVar8,lVar9,local_48);
  }
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
LAB_148d3dcc8:
  lVar8 = FUN_1405f939e(param_1);
  if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x178) != 0)) {
    lVar6 = FUN_14030d660();
    lVar8 = *(longlong *)(lVar8 + 0x178);
    if (((lVar8 != 0) &&
        (((lVar6 != 0 && (lVar9 = *(longlong *)(lVar8 + 0x10), lVar9 != 0)) &&
         (*(int *)(lVar6 + 0x38) <= *(int *)(lVar9 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      if (*(char *)(lVar3 + 0x90) == '\x01') {
        if (1 < *(int *)(lVar3 + 0xa0)) {
          FUN_14415e0a4(local_48,lVar3 + 0x98);
          FUN_148d2f8f4(lVar8,local_48);
          if (local_48[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      else {
        FUN_148d2f8f4(lVar8,lVar3 + 0x80);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3de1a FUN_148d3de1a body=555 status=ok
// SIG undefined FUN_148d3de1a(void)

void FUN_148d3de1a(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 0x68) != '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\x01')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  lVar6 = *(longlong *)(param_1 + 0x48);
  lVar4 = FUN_1405f939e(param_1);
  if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x178) == 0)) goto LAB_148d3debe;
  lVar5 = FUN_14030d660();
  lVar4 = *(longlong *)(lVar4 + 0x178);
  if (((lVar4 == 0) ||
      (((lVar5 == 0 || (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 == 0)) ||
       (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38))))) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_148d3debe;
  if (*(char *)(lVar6 + 0x90) == '\x01') {
    FUN_14415e0a4(&local_40,lVar6 + 0x98);
  }
  else {
    local_40 = (void *)0x0;
    local_38 = *(int *)(lVar6 + 0x88);
    lVar5 = (longlong)local_38;
    pvVar2 = *(void **)(lVar6 + 0x80);
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar2,lVar5 * 2);
    }
  }
  local_50 = (void *)0x0;
  local_48 = *(int *)(lVar4 + 0x630);
  lVar6 = (longlong)local_48;
  pvVar2 = *(void **)(lVar4 + 0x628);
  if (lVar6 == 0) {
    local_44 = 0;
    iVar3 = 0;
    if (local_38 != 0) goto LAB_148d3e016;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar2,lVar6 * 2);
    iVar3 = local_48;
    if (local_48 == local_38) {
      if (1 < local_48) {
        lVar6 = 0;
        while( true ) {
          uVar7 = *(ushort *)((longlong)local_50 + lVar6);
          uVar8 = (ulonglong)uVar7;
          uVar9 = *(ushort *)((longlong)local_40 + lVar6);
          if (uVar7 != uVar9) break;
          if (uVar7 == 0) goto LAB_148d3e02a;
LAB_148d3df8e:
          lVar6 = lVar6 + 2;
        }
        if ((uVar9 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar10 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_148d3df8e;
        }
        if (uVar7 != uVar9) goto LAB_148d3e01d;
      }
    }
    else {
LAB_148d3e016:
      if (local_38 + iVar3 != 1) {
LAB_148d3e01d:
        FUN_14097c15a(param_1);
      }
    }
LAB_148d3e02a:
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_148d3debe:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3e05a FUN_148d3e05a body=284 status=ok
// SIG undefined FUN_148d3e05a(void)

void FUN_148d3e05a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_1416a3972();
  lVar6 = FUN_1462592ee(uVar5);
  lVar7 = *(longlong *)(lVar6 + 0x158);
  plVar3 = *(longlong **)(lVar6 + 0x160);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (lVar7 != 0) {
    FUN_14495448a(local_38,L"GbxMomentNodeState_PlayMovie",*(undefined4 *)(param_1 + 0x70));
    FUN_14621c628(lVar7,local_38);
  }
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
  lVar7 = FUN_1405f939e(param_1);
  if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x178) != 0)) {
    lVar6 = FUN_14030d660();
    lVar7 = *(longlong *)(lVar7 + 0x178);
    if (((lVar7 != 0) &&
        (((lVar6 != 0 && (lVar4 = *(longlong *)(lVar7 + 0x10), lVar4 != 0)) &&
         (*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      local_38[0] = 0;
      local_38[1] = 0;
      FUN_148d2f8f4(lVar7,local_38);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3e17e FUN_148d3e17e body=362 status=ok
// SIG undefined FUN_148d3e17e(void)

void FUN_148d3e17e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cbcaf68);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cbcaf70);
  FUN_144983130(lVar2 + 8,param_1 + 0xb8);
  cVar1 = FUN_144a8e0e6(param_1 + 0x88);
  if (cVar1 == '\0') {
    FUN_140592d14(param_1 + 0xb8,&local_50);
    puVar3 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar3 = local_50;
    }
    FUN_140592d14(param_1 + 0x80,&local_60);
    puVar4 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar4 = local_60;
    }
    FUN_140002266(&local_40,L"%s Reviving %s",puVar4,puVar3);
    if ((longlong *)(param_2 + 8) == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_40;
      local_40 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_38;
      *(undefined4 *)(param_2 + 0x14) = local_38._4_4_;
      local_38 = 0;
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3e2ea FUN_148d3e2ea body=482 status=ok
// SIG undefined FUN_148d3e2ea(void)

void FUN_148d3e2ea(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  void **ppvVar5;
  void **ppvVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14889661a();
  if (*(char *)(param_1 + 0x50) != '\x02') goto LAB_148d3e4a1;
  uVar3 = FUN_147f22960();
  FUN_1401cfad2(uVar3,&local_50,*(undefined1 *)(param_1 + 0x90));
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cbcaf78);
  pvVar2 = local_50;
  ppvVar6 = (void **)(lVar4 + 0x40);
  if (*(byte *)(lVar4 + 0x60) == 8) {
    if (ppvVar6 != &local_50) {
      *(int *)(lVar4 + 0x48) = local_48;
      if (local_48 == 0 && *(int *)(lVar4 + 0x4c) == 0) {
        *(undefined4 *)(lVar4 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar6,local_48);
        if (local_48 != 0) {
          memcpy(*ppvVar6,pvVar2,(longlong)local_48 * 2);
        }
      }
    }
  }
  else {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppvVar5 = ppvVar6;
      if (0x18 < *(ushort *)(lVar4 + 0x58)) {
        ppvVar5 = *(void ***)(lVar4 + 0x40);
      }
      (*pcVar1)(ppvVar5);
    }
    if (0x18 < *(ushort *)(lVar4 + 0x58)) {
      FUN_1400020a8(*ppvVar6);
    }
    pvVar2 = local_50;
    local_40 = (void *)0x0;
    local_38 = local_48;
    if ((longlong)local_48 == 0) {
      local_34 = 0;
      *(undefined2 *)(lVar4 + 0x58) = 0x10;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined4 *)(lVar4 + 0x48) = 0;
LAB_148d3e47a:
      *(undefined4 *)(lVar4 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_48,0);
      memcpy(local_40,pvVar2,(longlong)local_48 * 2);
      pvVar2 = local_40;
      lVar7 = (longlong)local_38;
      *(undefined2 *)(lVar4 + 0x58) = 0x10;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(int *)(lVar4 + 0x48) = local_38;
      if (lVar7 == 0) goto LAB_148d3e47a;
      FUN_1446dd670(ppvVar6,local_38,0);
      memcpy(*ppvVar6,pvVar2,lVar7 * 2);
    }
    *(undefined1 *)(lVar4 + 0x60) = 8;
    if (local_40 != (void *)0x0) {
      FUN_1400020a8(local_40);
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_148d3e4a1:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3e4ce FUN_148d3e4ce body=437 status=ok
// SIG undefined FUN_148d3e4ce(void)

longlong * FUN_148d3e4ce(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar3 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14ac8c8d0;
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
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b9746b0;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = FUN_148d3e684;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14ac8c8d0;
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
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b9746b0;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = FUN_148d3e684;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3e684 FUN_148d3e684 body=299 status=ok
// SIG undefined FUN_148d3e684(void)

void FUN_148d3e684(longlong param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 auStack_60 [3];
  undefined2 local_48;
  undefined1 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar2 = (byte)*(undefined4 *)(param_1 + 0x90);
  if (bVar2 < param_4) {
    bVar2 = param_4;
  }
  *(byte *)(param_1 + 0x90) = bVar2;
  if (param_2 == 0 || param_4 != 0) {
    if (param_2 == 0) goto LAB_148d3e78d;
  }
  else {
    lVar3 = FUN_14479d2ce(param_1 + 0x78);
    if (lVar3 != 0) {
      uVar4 = FUN_1402b804a(param_2);
      local_68 = 0;
      auStack_60[0] = 0;
      local_48 = 8;
      FUN_14485c47a(auStack_60,lVar3);
      local_40 = 7;
      local_38 = 7;
      if ((DAT_14c9a8cf4 & 0x20) != 0) {
        local_38 = 0;
      }
      FUN_1402b8062(uVar4,&DAT_14cbcaf80,&local_68);
      FUN_144a2da94(&local_68);
    }
    bVar2 = *(byte *)(param_1 + 0x90);
  }
  if ((3 < bVar2) && (*(int *)(param_2 + 0x88) != 0)) {
    puVar1 = *(undefined8 **)(param_2 + 0x80);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_2 + 0x80),0,0,0x10);
      *(undefined4 *)(param_2 + 0x88) = 0;
    }
  }
LAB_148d3e78d:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3e7da FUN_148d3e7da body=106 status=ok
// SIG undefined FUN_148d3e7da(void)

void FUN_148d3e7da(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x90) < 4) && (*(longlong *)(param_1 + 0x88) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x80);
    if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x88) != (longlong *)0x0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x20))();
      if (lVar2 != 0) {
        FUN_140356f00(lVar2,2,3);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 148d3e84a FUN_148d3e84a body=237 status=ok
// SIG undefined FUN_148d3e84a(void)

void FUN_148d3e84a(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x80) != 0) && (*(int *)(param_1 + 0x88) - 1U < 0xfffffffe)) {
    local_40 = *(longlong *)(param_1 + 0x80);
    FUN_1400021e4(&local_40,&local_38);
    puVar1 = local_38;
    if (local_30 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_28,L"Set Respawn To \'%s\'",puVar1);
    if ((longlong *)(param_2 + 8) == &local_28) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_28;
      local_28 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_20;
      *(undefined4 *)(param_2 + 0x14) = local_20._4_4_;
      local_20 = 0;
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3e938 FUN_148d3e938 body=37 status=ok
// SIG undefined FUN_148d3e938(void)

void FUN_148d3e938(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x80);
  uVar2 = FUN_1405f939e();
  FUN_148e0a862(uVar2,uVar1);
  return;
}



// FUNCTION 148d3e97a FUN_148d3e97a body=78 status=ok
// SIG undefined FUN_148d3e97a(void)

void FUN_148d3e97a(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1405f939e();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x1f0), lVar1 != 0)) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14414427a(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148d3e9ce FUN_148d3e9ce body=237 status=ok
// SIG undefined FUN_148d3e9ce(void)

void FUN_148d3e9ce(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x80) != 0) && (*(int *)(param_1 + 0x88) - 1U < 0xfffffffe)) {
    local_40 = *(longlong *)(param_1 + 0x80);
    FUN_1400021e4(&local_40,&local_38);
    puVar1 = local_38;
    if (local_30 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_28,L"Teleport To \'%s\'",puVar1);
    if ((longlong *)(param_2 + 8) == &local_28) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_28;
      local_28 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_20;
      *(undefined4 *)(param_2 + 0x14) = local_20._4_4_;
      local_20 = 0;
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3eabc FUN_148d3eabc body=51 status=ok
// SIG undefined FUN_148d3eabc(void)

void FUN_148d3eabc(longlong param_1,undefined8 param_2)

{
  FUN_14889661a();
  if (*(char *)(param_1 + 0x50) != '\x02') {
    return;
  }
  FUN_148d3d6de(param_1 + 0x70,param_2);
  return;
}



// FUNCTION 148d3eaf0 FUN_148d3eaf0 body=435 status=ok
// SIG undefined FUN_148d3eaf0(void)

void FUN_148d3eaf0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  longlong local_118;
  int local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined1 local_ff;
  longlong local_f8 [6];
  undefined2 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  char local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if ((*(longlong *)(lVar3 + 0x80) != 0) && (*(int *)(lVar3 + 0x88) - 1U < 0xfffffffe)) {
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_48 = '\0';
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_f8[2] = 0;
    local_108 = 0;
    local_100 = *(undefined1 *)(lVar3 + 0xd0);
    local_ff = *(undefined1 *)(lVar3 + 0xd1);
    local_118 = *(longlong *)(lVar3 + 0x80);
    local_110 = *(int *)(lVar3 + 0x88);
    FUN_144a787a6(local_f8,lVar3 + 0xd8);
    FUN_144983130(local_f8 + 2,lVar3 + 0x98);
    FUN_14045cb56(param_1,&local_128);
    if (local_120 == (longlong *)0x0) {
      local_138 = local_128;
      local_130 = (longlong *)0x0;
      FUN_146258bba(param_1 + 0x70,&local_138,&local_118);
    }
    else {
      LOCK();
      *(int *)(local_120 + 1) = (int)local_120[1] + 1;
      UNLOCK();
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_120 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar2 = (int *)((longlong)local_120 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_120 + 0x10))(local_120);
          }
        }
      }
      local_138 = local_128;
      local_130 = local_120;
      LOCK();
      *(int *)((longlong)local_120 + 0xc) = *(int *)((longlong)local_120 + 0xc) + 1;
      UNLOCK();
      FUN_146258bba(param_1 + 0x70,&local_138,&local_118);
      LOCK();
      plVar1 = local_120 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)local_120 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_120 + 0x10))(local_120);
        }
      }
    }
    if (local_48 == '\x01') {
      local_48 = '\0';
    }
    FUN_144a2da94(local_f8 + 2);
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3eca4 FUN_148d3eca4 body=59 status=ok
// SIG undefined FUN_148d3eca4(void)

void FUN_148d3eca4(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x68) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\0')) {
    cVar1 = FUN_146226cb6(param_1 + 0x70);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 148d3ece6 FUN_148d3ece6 body=299 status=ok
// SIG undefined FUN_148d3ece6(void)

void FUN_148d3ece6(longlong param_1)

{
  longlong lVar1;
  void *_Src;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0x88);
  if (lVar5 == 0) {
    local_60 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x80);
    lVar7 = 0;
    do {
      uVar2 = uStack_50;
      uVar4 = *(undefined8 *)(lVar1 + lVar7);
      lVar6 = (longlong)(int)uStack_50;
      uVar3 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
      if (uStack_50._4_4_ < uVar3) {
        FUN_1446f84a2(&local_58,uVar2 & 0xffffffff);
      }
      _Src = local_58;
      *(undefined8 *)((longlong)local_58 + lVar6 * 8) = uVar4;
      lVar7 = lVar7 + 0x18;
    } while (lVar5 * 0x18 != lVar7);
    lVar5 = (longlong)(int)uStack_50;
    local_68 = (void *)0x0;
    local_60 = (int)uStack_50;
    if (lVar5 != 0) {
      FUN_1401b309e(&local_68,uStack_50 & 0xffffffff,0);
      memcpy(local_68,_Src,lVar5 << 3);
      goto LAB_148d3edc7;
    }
  }
  local_68 = (void *)0x0;
  local_5c = 0;
LAB_148d3edc7:
  uVar4 = FUN_1405f939e(param_1);
  FUN_148e0a500(uVar4,&local_68);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3ee18 FUN_148d3ee18 body=503 status=ok
// SIG undefined FUN_148d3ee18(void)

longlong FUN_148d3ee18(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88,param_3);
  FUN_1447c3578(param_2,local_58,local_88);
  FUN_1411a0e4c(local_58,&local_b8);
  local_a0 = local_b8;
  uVar3 = FUN_14477b664(local_b0);
  lVar4 = FUN_14477b664(uVar3);
  local_90 = local_a8;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  local_98 = lVar4;
  if (pcVar1 != (code *)0x0) {
    ppppuVar7 = local_58;
    if (0x18 < local_40) {
      ppppuVar7 = (undefined8 ****)local_58[0];
    }
    (*pcVar1)(ppppuVar7);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  if (lVar4 == 0) {
    uVar3 = FUN_14053bbb8();
    lVar4 = FUN_14477b664(uVar3);
    local_98 = lVar4;
  }
  if (local_a8 == (longlong *)0x0) {
    local_90 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
    if ((local_b8 == 0) || (lVar4 == 0)) goto LAB_148d3ef46;
    plVar6 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6,0), cVar2 == '\0')) {
      local_90 = (longlong *)0x0;
    }
    else {
      uVar3 = (**(code **)(*plVar6 + 0x110))(plVar6);
      local_a8 = (longlong *)FUN_144aff482(uVar3,&local_a0);
      local_90 = local_a8;
      if (local_a8 != (longlong *)0x0) goto LAB_148d3ef21;
    }
  }
  else {
LAB_148d3ef21:
    lVar4 = (**(code **)(*local_a8 + 8))(local_a8);
    lVar5 = FUN_140927942();
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      plVar6 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        plVar6 = local_a8;
      }
      goto LAB_148d3ef46;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_148d3ef46:
  FUN_144a79b68(param_1,plVar6);
  *(undefined4 *)(param_1 + 8) = 0x4000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148d3f010 FUN_148d3f010 body=503 status=ok
// SIG undefined FUN_148d3f010(void)

longlong FUN_148d3f010(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88,param_3);
  FUN_1447c3578(param_2,local_58,local_88);
  FUN_1411a0e4c(local_58,&local_b8);
  local_a0 = local_b8;
  uVar3 = FUN_14477b664(local_b0);
  lVar4 = FUN_14477b664(uVar3);
  local_90 = local_a8;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  local_98 = lVar4;
  if (pcVar1 != (code *)0x0) {
    ppppuVar7 = local_58;
    if (0x18 < local_40) {
      ppppuVar7 = (undefined8 ****)local_58[0];
    }
    (*pcVar1)(ppppuVar7);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  if (lVar4 == 0) {
    uVar3 = FUN_14053bbb8();
    lVar4 = FUN_14477b664(uVar3);
    local_98 = lVar4;
  }
  if (local_a8 == (longlong *)0x0) {
    local_90 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
    if ((local_b8 == 0) || (lVar4 == 0)) goto LAB_148d3f13e;
    plVar6 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6,0), cVar2 == '\0')) {
      local_90 = (longlong *)0x0;
    }
    else {
      uVar3 = (**(code **)(*plVar6 + 0x110))(plVar6);
      local_a8 = (longlong *)FUN_144aff482(uVar3,&local_a0);
      local_90 = local_a8;
      if (local_a8 != (longlong *)0x0) goto LAB_148d3f119;
    }
  }
  else {
LAB_148d3f119:
    lVar4 = (**(code **)(*local_a8 + 8))(local_a8);
    lVar5 = FUN_1405bb4b8();
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      plVar6 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        plVar6 = local_a8;
      }
      goto LAB_148d3f13e;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_148d3f13e:
  FUN_144a79b68(param_1,plVar6);
  *(undefined4 *)(param_1 + 8) = 0x4fc71eb4;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148d3f208 FUN_148d3f208 body=503 status=ok
// SIG undefined FUN_148d3f208(void)

longlong FUN_148d3f208(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88,param_3);
  FUN_1447c3578(param_2,local_58,local_88);
  FUN_1411a0e4c(local_58,&local_b8);
  local_a0 = local_b8;
  uVar3 = FUN_14477b664(local_b0);
  lVar4 = FUN_14477b664(uVar3);
  local_90 = local_a8;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  local_98 = lVar4;
  if (pcVar1 != (code *)0x0) {
    ppppuVar7 = local_58;
    if (0x18 < local_40) {
      ppppuVar7 = (undefined8 ****)local_58[0];
    }
    (*pcVar1)(ppppuVar7);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  if (lVar4 == 0) {
    uVar3 = FUN_14053bbb8();
    lVar4 = FUN_14477b664(uVar3);
    local_98 = lVar4;
  }
  if (local_a8 == (longlong *)0x0) {
    local_90 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
    if ((local_b8 == 0) || (lVar4 == 0)) goto LAB_148d3f336;
    plVar6 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6,0), cVar2 == '\0')) {
      local_90 = (longlong *)0x0;
    }
    else {
      uVar3 = (**(code **)(*plVar6 + 0x110))(plVar6);
      local_a8 = (longlong *)FUN_144aff482(uVar3,&local_a0);
      local_90 = local_a8;
      if (local_a8 != (longlong *)0x0) goto LAB_148d3f311;
    }
  }
  else {
LAB_148d3f311:
    lVar4 = (**(code **)(*local_a8 + 8))(local_a8);
    lVar5 = FUN_145c6ef2e();
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      plVar6 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        plVar6 = local_a8;
      }
      goto LAB_148d3f336;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_148d3f336:
  FUN_144a79b68(param_1,plVar6);
  *(undefined4 *)(param_1 + 8) = 0x3005;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148d3f400 FUN_148d3f400 body=198 status=ok
// SIG undefined FUN_148d3f400(void)

undefined8 * FUN_148d3f400(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x1c8);
  puVar6 = &DAT_14c846480;
  if (lVar3 != 0) {
    puVar6 = (undefined8 *)(lVar3 + 0x240);
  }
  puVar7 = param_2;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((((*(longlong *)(param_1 + 0xc20) != 0) && (*(longlong *)(param_1 + 0xc18) != 0)) &&
      (lVar3 != 0)) && (*(char *)(*(longlong *)(param_1 + 0xc20) + 0x1d8) != '\0')) {
    lVar5 = FUN_1400b5618();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      dVar2 = *(double *)(lVar3 + 0x290);
      fVar1 = *(float *)(lVar3 + 0x640);
      auVar4._8_4_ = SUB84((double)param_2[5] + 0.0,0);
      auVar4._0_8_ = (double)param_2[4] + 0.0;
      auVar4._12_4_ = (int)((ulonglong)((double)param_2[5] + 0.0) >> 0x20);
      *(undefined1 (*) [16])(param_2 + 4) = auVar4;
      param_2[6] = (double)(-fVar1 * (float)dVar2) + (double)param_2[6];
      param_2[7] = (double)param_2[7] + 0.0;
    }
  }
  return param_2;
}



// FUNCTION 148d3f4c6 FUN_148d3f4c6 body=37 status=ok
// SIG undefined FUN_148d3f4c6(void)

void FUN_148d3f4c6(undefined8 param_1,undefined8 param_2)

{
  FUN_1413d4c10(param_1,param_2,0,0,0);
  FUN_1458493f2(param_1);
  return;
}



// FUNCTION 148d3f4ec FUN_148d3f4ec body=244 status=ok
// SIG undefined FUN_148d3f4ec(void)

void FUN_148d3f4ec(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0xc20) != 0)) &&
     (*(char *)(param_1 + 0xbc8) == '\0')) {
    local_20 = 0;
    iVar1 = FUN_1403ae46b();
    if (iVar1 == param_3) {
      local_20 = *(longlong *)(*(longlong *)(param_1 + 0xc20) + 0x250);
    }
    else {
      iVar1 = FUN_1401902e2();
      if (iVar1 == param_3) {
        local_20 = *(longlong *)(*(longlong *)(param_1 + 0xc20) + 0x248);
      }
      else {
        iVar1 = FUN_141526213();
        if (iVar1 == param_3) {
          local_20 = *(longlong *)(*(longlong *)(param_1 + 0xc20) + 600);
        }
        else {
          iVar1 = FUN_140232fad();
          if (iVar1 == param_3) {
            local_20 = *(longlong *)(*(longlong *)(param_1 + 0xc20) + 0x260);
          }
          else {
            iVar1 = FUN_1415ef101();
            if (iVar1 == param_3) {
              local_20 = *(longlong *)(*(longlong *)(param_1 + 0xc20) + 0x268);
            }
          }
        }
      }
    }
    if (local_20 != 0) {
      FUN_1461a60e8(param_1,&local_20);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3f5e2 FUN_148d3f5e2 body=254 status=ok
// SIG undefined FUN_148d3f5e2(void)

undefined8
FUN_148d3f5e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e9c20;
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
  *local_48 = &PTR_FUN_14b974870;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140ebcfd8(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3f6e2 FUN_148d3f6e2 body=235 status=ok
// SIG undefined FUN_148d3f6e2(void)

void FUN_148d3f6e2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0xc30) != '\0') {
    *(undefined1 *)(param_1 + 0xc30) = 0;
    cVar1 = FUN_144729dda(param_1 + 0xc28);
    if (cVar1 != '\0') {
      uVar2 = FUN_14479d2ce(param_1 + 0xc28);
      FUN_140aeefbc(uVar2,0,1);
      cVar1 = FUN_144729dda(param_1 + 0xc00);
      if (cVar1 != '\0') {
        cVar1 = FUN_141696f8c(param_1 + 0x558);
        if (cVar1 != '\0') {
          uVar2 = FUN_14479d2ce(param_1 + 0xc00);
          FUN_14624e8f6(param_1,uVar2);
          return;
        }
      }
      lVar3 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x58))(param_1 + 0x3c0,&DAT_14cb71330);
      if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0xae8), lVar3 != 0)) {
        lVar4 = FUN_14016d2a8();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_140ef75a0(lVar3,0,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148d3f7ce FUN_148d3f7ce body=47 status=ok
// SIG undefined FUN_148d3f7ce(void)

void FUN_148d3f7ce(longlong param_1)

{
  FUN_1488adb70();
  if ((*(longlong *)(param_1 + 0x3f8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x3f8) + 0xa2) == '\x01')) {
    *(undefined1 *)(param_1 + 0x418) = 1;
  }
  return;
}



// FUNCTION 148d3f7fe FUN_148d3f7fe body=104 status=ok
// SIG undefined FUN_148d3f7fe(void)

void FUN_148d3f7fe(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    lVar3 = FUN_1458eaacc();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_148d3f837;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_148d3f837:
  *(longlong **)(param_1 + 0x838) = plVar4;
  FUN_141333d14(param_1,param_2);
  return;
}



// FUNCTION 148d3f866 FUN_148d3f866 body=152 status=ok
// SIG undefined FUN_148d3f866(void)

void FUN_148d3f866(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_1412260cc();
  if ((*(longlong *)(param_1 + 0x3f0) != 0) && (*(longlong *)(param_1 + 0xbc8) != 0)) {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x58))(param_1 + 0x3c0,&DAT_14cb998a8);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x7a0))(plVar1);
      lVar3 = FUN_148f00bb2(uVar2);
      uVar2 = *(undefined8 *)(lVar3 + 0x38);
      *(undefined8 *)(param_1 + 0xbd8) = *(undefined8 *)(lVar3 + 0x30);
      *(undefined8 *)(param_1 + 0xbe0) = uVar2;
      *(undefined8 *)(param_1 + 0xbe8) = *(undefined8 *)(lVar3 + 0x40);
      *(undefined4 *)(param_1 + 0xbd0) = *(undefined4 *)(lVar3 + 0x60);
    }
    FUN_148d3f8fe(param_1);
    FUN_148d3f97e(param_1);
    FUN_148d3fcc2(param_1);
    return;
  }
  return;
}



// FUNCTION 148d3f8fe FUN_148d3f8fe body=127 status=ok
// SIG undefined FUN_148d3f8fe(void)

void FUN_148d3f8fe(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xbc8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x160) == '\x01')) {
    if (1e-08 < *(float *)(param_1 + 0xbd0)) {
      local_20 = (double)(*(float *)(lVar1 + 0x164) / *(float *)(param_1 + 0xbd0));
      local_18 = local_20;
      local_10 = local_20;
      FUN_1412269c6();
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3f97e FUN_148d3f97e body=834 status=ok
// SIG undefined FUN_148d3f97e(void)

void FUN_148d3f97e(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  double dVar10;
  double *pdVar11;
  uint uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double local_60;
  
  dVar10 = (double)(DAT_14c707940 ^ (ulonglong)auStack_108);
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  local_60 = dVar10;
  if (lVar1 == 0) {
    local_68 = DAT_14c846508;
    local_78 = (undefined4)DAT_14c8464f8;
    uStack_74 = DAT_14c8464f8._4_4_;
    uStack_70 = (undefined4)DAT_14c846500;
    uStack_6c = DAT_14c846500._4_4_;
  }
  else {
    dVar5 = *(double *)(lVar1 + 0x240);
    dVar6 = *(double *)(lVar1 + 0x248);
    dVar7 = *(double *)(lVar1 + 0x250);
    dVar8 = *(double *)(lVar1 + 600);
    pdVar11 = *(double **)(lVar1 + 0x228);
    lVar14 = param_1;
    local_98 = dVar5;
    uStack_90 = dVar6;
    local_88 = dVar7;
    uStack_80 = dVar8;
    if (pdVar11 == (double *)0x0) {
      lVar14 = 0x40;
      pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
      dVar10 = DAT_14c8463d8;
      *pdVar11 = DAT_14c8463d0;
      pdVar11[1] = dVar10;
      dVar10 = DAT_14c8463e8;
      pdVar11[2] = DAT_14c8463e0;
      pdVar11[3] = dVar10;
      dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar11[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar11[5] = dVar10;
      dVar10 = DAT_14c846508;
      pdVar11[6] = DAT_14c846508;
      *(double **)(lVar1 + 0x228) = pdVar11;
    }
    auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar11[1]);
    auVar3._0_8_ = -(ulonglong)(dVar5 != *pdVar11);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar11[1]) >> 0x20);
    iVar9 = movmskpd(SUB84(dVar10,0),auVar3);
    auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar11[3]);
    auVar4._0_8_ = -(ulonglong)(dVar7 != pdVar11[2]);
    auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar11[3]) >> 0x20);
    uVar12 = movmskpd((int)lVar14,auVar4);
    if ((uVar12 & 0x3fffffff) != 0 || iVar9 != 0) {
      *(undefined4 *)(pdVar11 + 2) = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar11 + 0x14) = local_88._4_4_;
      *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_80._4_4_;
      *(undefined4 *)pdVar11 = (undefined4)local_98;
      *(undefined4 *)((longlong)pdVar11 + 4) = local_98._4_4_;
      *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_90._4_4_;
      FUN_1448052ee(&local_98,&local_78);
      pdVar11[6] = local_68;
      pdVar11[4] = (double)CONCAT44(uStack_74,local_78);
      pdVar11[5] = (double)CONCAT44(uStack_6c,uStack_70);
    }
    local_68 = pdVar11[6];
    local_78 = *(undefined4 *)(pdVar11 + 4);
    uStack_74 = *(undefined4 *)((longlong)pdVar11 + 0x24);
    uStack_70 = *(undefined4 *)(pdVar11 + 5);
    uStack_6c = *(undefined4 *)((longlong)pdVar11 + 0x2c);
  }
  FUN_144a7b71c(param_1,&local_c8);
  local_a0 = *(double *)(param_1 + 0xbe8) * local_b8;
  local_a8 = *(double *)(param_1 + 0xbe0) * local_c0;
  local_b0 = *(double *)(param_1 + 0xbd8) * local_c8;
  FUN_1401c9a0e(&local_78,&local_98);
  dVar5 = uStack_90;
  dVar10 = local_98;
  local_d8 = -uStack_90;
  local_e0 = -local_98;
  if (*(longlong *)(param_1 + 0xbc8) == 0) {
    local_d0 = 0.0;
  }
  else {
    puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0x3f0) + 8);
    puVar13 = &DAT_14c9485f0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar13 = puVar2;
    }
    FUN_1447325ac(puVar13,&local_98,1);
    lVar1 = *(longlong *)(param_1 + 0xbc8);
    local_d0 = 0.0;
    if (*(int *)(lVar1 + 0x170) != *(int *)(lVar1 + 0x19c)) {
      uVar12 = (uint)((ulonglong)local_98 >> 0x10);
      uVar15 = SUB84(local_98,0) & 0xffff;
      lVar14 = lVar1 + 0x1a0;
      if (*(longlong *)(lVar1 + 0x1a8) != 0) {
        lVar14 = *(longlong *)(lVar1 + 0x1a8);
      }
      iVar9 = *(int *)(lVar14 + (ulonglong)
                                (*(int *)(lVar1 + 0x1b0) - 1U &
                                (int)((ulonglong)local_98 >> 0x20) +
                                (SUB84(local_98,0) << 0x10 | uVar15) +
                                (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar15 >> 4)) * 4);
      local_d0 = 0.0;
      if (iVar9 != -1) {
        do {
          pdVar11 = (double *)(*(longlong *)(lVar1 + 0x168) + (longlong)iVar9 * 0x28);
          if (*pdVar11 == local_98) {
            local_d0 = 0.0;
            if (((ulonglong)(pdVar11 + 1) & 0xfffffffffffffff7) != 0) {
              local_e0 = pdVar11[1] - dVar10;
              local_d8 = pdVar11[2] - dVar5;
              local_d0 = pdVar11[3] + 0.0;
            }
            break;
          }
          iVar9 = *(int *)(pdVar11 + 4);
          local_d0 = 0.0;
        } while (iVar9 != -1);
      }
    }
  }
  local_e8 = 0;
  FUN_145849bf0(param_1,&local_e0,0,0);
  if (((ulonglong)local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3fcc2 FUN_148d3fcc2 body=157 status=ok
// SIG undefined FUN_148d3fcc2(void)

void FUN_148d3fcc2(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xbc8) != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x58))(param_1 + 0x3c0,&DAT_14cb998a8);
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x1238) + 0x10))(lVar1 + 0x1238);
      if (lVar1 != 0) {
        local_18 = &local_28;
        local_20 = &LAB_1441650d6;
        local_28 = param_1;
        FUN_1408d6bd2(lVar1,DAT_14c9abc00);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d3fd60 FUN_148d3fd60 body=345 status=ok
// SIG undefined FUN_148d3fd60(void)

void FUN_148d3fd60(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145addd5a();
  if (param_2 == 0) {
LAB_148d3fda6:
    param_2 = 0;
  }
  else {
    lVar3 = FUN_144a7b4ca();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) != lVar3 + 0x30)) goto LAB_148d3fda6;
  }
  FUN_14485c47a(param_1 + 0x178,param_2);
  lVar3 = FUN_14479d2ce(param_1 + 0x178);
  if ((lVar3 != 0) && (lVar3 = FUN_1401b2ade(lVar3), lVar3 != 0)) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      FUN_140a9b590(lVar3 + 0x3910,&local_38,1);
      if (local_30 == 0) {
        uVar5 = FUN_14037df6e();
        local_30 = FUN_14477b664(uVar5);
      }
      if (local_28 == 0) {
        if ((((local_38 == 0) || (local_30 == 0)) ||
            (plVar1 = *(longlong **)(local_30 + 0xb8), plVar1 == (longlong *)0x0)) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) goto LAB_148d3fdf7;
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        local_28 = FUN_144aff482(uVar5,&local_38);
        if (local_28 == 0) goto LAB_148d3fdf7;
      }
      (**(code **)(*param_1 + 0x640))(param_1,local_28);
    }
  }
LAB_148d3fdf7:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d3feba FUN_148d3feba body=5021 status=ok
// SIG undefined FUN_148d3feba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d3feba(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  double *pdVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar27;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar47;
  undefined1 auVar42 [16];
  double dVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar49;
  undefined1 auVar46 [16];
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auStack_3a8 [32];
  undefined1 local_388;
  undefined1 local_378 [16];
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  double *pdVar15;
  
  dVar4 = DAT_14c846520;
  dVar65 = DAT_14c846518;
  dVar60 = DAT_14c846510;
  auVar63 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  dVar41 = DAT_14c8463d0;
  dVar48 = DAT_14c8463d0._8_8_;
  local_348 = *(double *)(param_1 + 0xbd8);
  dStack_340 = *(double *)(param_1 + 0xbe0);
  local_338._8_8_ = 0;
  local_338._0_8_ = *(double *)(param_1 + 0xbe8);
  local_368 = -*(double *)(param_1 + 0xbe8);
  dStack_360 = 0.0;
  auVar20 = *(undefined1 (*) [16])(param_2 + 8);
  dVar1 = auVar20._0_8_;
  dVar2 = auVar20._8_8_;
  auVar30 = *(undefined1 (*) [16])(param_2 + 10);
  dVar49 = auVar30._0_8_;
  dVar40 = auVar30._8_8_;
  auVar37._8_8_ = DAT_14c846518;
  auVar37._0_8_ = DAT_14c846510;
  auVar20 = minpd(auVar37,auVar20);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = DAT_14c846520;
  auVar37 = minpd(auVar36,auVar30);
  auVar30._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
  auVar30._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
  iVar10 = movmskpd((int)local_c0,auVar30);
  auVar20._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
  auVar20._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
  uVar12 = movmskpd((int)param_1,auVar20);
  local_378._8_8_ = DAT_14c846518;
  local_378._0_8_ = DAT_14c846510;
  local_2f8 = DAT_14c846520;
  uStack_2f0 = 0;
  local_308 = DAT_14c8463e8;
  dStack_300 = DAT_14c8463e8;
  local_318 = DAT_14c8463e0;
  dStack_310 = DAT_14c8463e8;
  local_2d8 = DAT_14c846518;
  dStack_2d0 = DAT_14c846520;
  local_328._8_4_ = (int)DAT_14c8463d0;
  local_328._0_8_ = dVar41;
  local_328._12_4_ = DAT_14c8463d0._4_4_;
  if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
    dVar27 = *param_2;
    dVar33 = param_2[1];
    dVar34 = param_2[2];
    dVar38 = param_2[3];
    dVar18 = param_2[3];
    dVar47 = param_2[3];
    dVar51 = param_2[1];
    dVar59 = param_2[1];
    dVar19 = param_2[2];
    dVar17 = param_2[2];
    dVar35 = dVar48 * dVar19 * -1.0 +
             DAT_14c8463e0 * dVar51 + DAT_14c8463e8 * *param_2 * 1.0 + dVar41 * dVar18;
    dVar39 = dVar41 * dVar17 * 1.0 +
             DAT_14c8463e8 * dVar59 + DAT_14c8463e0 * *param_2 * -1.0 + dVar48 * dVar47;
    auVar63._0_8_ =
         DAT_14c8463e8 * dVar19 * 1.0 +
         ((*param_2 * dVar48 * 1.0 + DAT_14c8463e0 * dVar18) - dVar51 * dVar41);
    auVar63._8_8_ =
         DAT_14c8463e0 * dVar17 * -1.0 +
         ((*param_2 * dVar41 * -1.0 + DAT_14c8463e8 * dVar47) - dVar59 * dVar48);
    dVar19 = -local_348 * dVar1;
    dVar17 = -dStack_340 * dVar2;
    dVar57 = local_368 * dVar49;
    dVar58 = dVar40 * 0.0;
    dVar51 = dVar17 * dVar27 - dVar19 * dVar33;
    dVar50 = dVar57 * dVar33 - dVar17 * dVar34;
    dVar56 = dVar19 * dVar34 - dVar57 * dVar27;
    dVar59 = dVar58 * dVar38 - dVar58 * dVar38;
    dVar50 = dVar50 + dVar50;
    dVar56 = dVar56 + dVar56;
    dVar51 = dVar51 + dVar51;
    dVar59 = dVar59 + dVar59;
    dVar19 = (dVar51 * dVar33 - dVar34 * dVar56) + dVar18 * dVar50 + dVar19 + param_2[4];
    dVar17 = (dVar50 * dVar34 - dVar51 * dVar27) + dVar47 * dVar56 + dVar17 + param_2[5];
    dVar18 = (dVar56 * dVar27 - dVar33 * dVar50) + dVar18 * dVar51 + dVar57 + param_2[6];
    dVar47 = (dVar59 * dVar38 - dVar59 * dVar38) + dVar47 * dVar59 + dVar58 + param_2[7];
    uVar13 = 0;
  }
  else {
    dVar17 = DAT_14c846520 * dVar49;
    local_358._8_8_ = dVar40 * 0.0;
    local_358._0_8_ = dVar17;
    dVar51 = *param_2;
    dVar59 = param_2[1];
    dVar19 = param_2[2];
    dVar27 = dVar59 + dVar59;
    dVar33 = dVar19 + dVar19;
    local_2e8 = _DAT_14c8463d0;
    dVar47 = dVar51 * (dVar51 + dVar51);
    local_178 = (1.0 - (dVar47 + dVar59 * dVar27)) * dVar49;
    dVar18 = param_2[3];
    dVar34 = dVar33 * dVar18;
    dVar38 = (dVar51 + dVar51) * param_2[3];
    dVar18 = dVar27 * dVar18;
    local_188 = (dVar18 + *param_2 * dVar33) * dVar49;
    dStack_180 = (dVar33 * dVar59 - dVar38) * dVar49;
    dVar47 = (DAT_149934d80._8_8_ - (dVar19 * dVar33 + dVar47)) * dVar2;
    dVar50 = (dVar27 * dVar51 + dVar34) * dVar1;
    local_198 = (dVar33 * dVar59 + dVar38) * dVar2;
    local_1b8 = (*param_2 * dVar33 - dVar18) * dVar1;
    local_1c8._8_4_ = SUB84(dVar50,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar19 * dVar33 + dVar59 * dVar27)) * dVar1;
    local_1c8._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar47,0);
    local_1a8._0_8_ = (dVar27 * dVar51 - dVar34) * dVar2;
    local_1a8._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = param_2[4];
    dStack_160 = param_2[5];
    local_158 = param_2[6];
    uStack_150 = 0x3ff0000000000000;
    dVar59 = dVar48 + dVar48;
    dVar18 = DAT_14c8463e0 + DAT_14c8463e0;
    dVar51 = dVar41 * (dVar41 + dVar41);
    local_248 = ((double)DAT_149934d80 - (DAT_14c8463e0 * dVar18 + dVar48 * dVar59)) * DAT_14c846510
    ;
    dStack_220 = (DAT_149934d80._8_8_ - (DAT_14c8463e0 * dVar18 + dVar51)) * DAT_14c846518;
    dVar47 = (dVar41 + dVar41) * DAT_14c8463e8;
    local_208 = (dVar59 * DAT_14c8463e8 + dVar41 * dVar18) * DAT_14c846520;
    local_228 = (dVar59 * dVar41 - dVar18 * DAT_14c8463e8) * DAT_14c846518;
    dStack_200 = (dVar18 * dVar48 - dVar47) * DAT_14c846520;
    dStack_240 = (dVar59 * dVar41 + dVar18 * DAT_14c8463e8) * DAT_14c846510;
    local_218 = (dVar18 * dVar48 + dVar47) * DAT_14c846518;
    local_238 = (dVar41 * dVar18 - dVar59 * DAT_14c8463e8) * DAT_14c846510;
    uStack_230 = 0;
    uStack_210 = 0;
    local_1f8 = (1.0 - (dVar51 + dVar48 * dVar59)) * DAT_14c846520;
    uStack_1f0 = 0;
    uStack_1d0 = 0x3ff0000000000000;
    dVar18 = dVar1 * DAT_14c846510;
    dVar47 = dVar2 * DAT_14c846518;
    param_2 = &local_148;
    local_1e8 = -local_348;
    dStack_1e0 = -dStack_340;
    local_1d8 = local_368;
    FUN_1447fea8d(param_2);
    FUN_144a1c686(param_2,0x3e45798ee0000000);
    auVar21._8_8_ = -(ulonglong)(0.0 <= dVar47);
    auVar21._0_8_ = -(ulonglong)(0.0 <= dVar18);
    auVar20 = blendvpd(_DAT_149936790,auVar63,auVar21);
    uVar16 = -(ulonglong)(0.0 <= dVar17);
    dVar18 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
    dVar47 = auVar20._0_8_;
    local_138 = local_138 * dVar47;
    local_140 = local_140 * dVar47;
    local_148 = local_148 * dVar47;
    dVar47 = auVar20._8_8_;
    local_118 = local_118 * dVar47;
    local_120 = local_120 * dVar47;
    local_128 = dVar47 * local_128;
    local_f8 = local_f8 * dVar18;
    local_100 = local_100 * dVar18;
    local_108 = dVar18 * local_108;
    uVar13 = SUB84(&local_2c8,0);
    iVar10 = FUN_14481fd10();
    dVar18 = (double)local_2b8._0_8_ * (double)local_2b8._0_8_ + local_2c8 * local_2c8;
    dVar47 = (double)local_2b8._8_8_ * (double)local_2b8._8_8_ + dStack_2c0 * dStack_2c0;
    auVar42._0_8_ = dVar18 + dVar47;
    auVar42._8_8_ = dVar18 + dVar47;
    auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
    auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
    auVar20 = sqrtpd(auVar42,auVar42);
    auVar20 = divpd(auVar63,auVar20);
    auVar61._0_8_ = auVar20._0_8_ * (double)local_2b8._0_8_;
    auVar61._8_8_ = auVar20._8_8_ * (double)local_2b8._8_8_;
    dVar35 = (double)((ulonglong)(local_2c8 * auVar20._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
    dVar39 = (double)((ulonglong)(dStack_2c0 * auVar20._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
    auVar63 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar61,auVar22);
    dVar47 = 0.0;
    dVar19 = local_e8;
    dVar17 = dStack_e0;
    dVar18 = local_d8;
  }
  auVar20 = _DAT_149934d80;
  dVar40 = dVar40 * 0.0;
  dVar49 = dVar4 * dVar49;
  dVar2 = dVar2 * dVar65;
  dVar1 = dVar1 * dVar60;
  uVar14 = SUB84(param_2,0);
  auVar29._8_8_ = dVar2;
  auVar29._0_8_ = dVar1;
  auVar30 = minpd(auVar29,local_378);
  local_358._8_4_ = SUB84(dVar40,0);
  local_358._0_8_ = dVar49;
  local_358._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
  auVar52._8_8_ = dVar40;
  auVar52._0_8_ = dVar49;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar4;
  auVar37 = minpd(auVar52,auVar3);
  auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
  auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
  iVar10 = movmskpd(iVar10,auVar31);
  auVar53._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
  auVar53._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
  uVar12 = movmskpd(uVar13,auVar53);
  dVar40 = auVar63._0_8_;
  dVar60 = auVar63._8_8_;
  uVar7 = local_378._0_8_;
  uVar8 = local_378._8_8_;
  uVar9 = local_358._8_8_;
  if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
    dVar59 = dVar39 * local_318 * -1.0 +
             dVar40 * dVar48 + (double)local_328._0_8_ * dVar60 * 1.0 + local_308 * dVar35;
    dVar27 = dVar35 * local_318 * 1.0 +
             dVar60 * dVar48 + (double)local_328._8_8_ * dVar40 * -1.0 + dStack_300 * dVar39;
    auVar62._0_8_ =
         dVar60 * local_318 * 1.0 +
         (((double)local_328._0_8_ * dVar39 * 1.0 + local_308 * dVar40) - dVar48 * dVar35);
    auVar62._8_8_ =
         dVar40 * local_318 * -1.0 +
         (((double)local_328._8_8_ * dVar35 * -1.0 + dStack_300 * dVar60) - dVar48 * dVar39);
    dVar19 = dVar19 * (double)local_378._0_8_;
    dVar17 = dVar17 * (double)local_378._8_8_;
    dVar18 = dVar18 * dVar4;
    dVar47 = dVar47 * 0.0;
    dVar33 = dVar17 * dVar41 - dVar48 * dVar19;
    dVar34 = dVar18 * dVar48 - local_318 * dVar17;
    dVar40 = dVar19 * local_318 - dVar41 * dVar18;
    dVar60 = dVar47 * dStack_310 - dStack_310 * dVar47;
    dVar34 = dVar34 + dVar34;
    dVar40 = dVar40 + dVar40;
    dVar33 = dVar33 + dVar33;
    dVar60 = dVar60 + dVar60;
    dVar65 = local_348 + (dVar33 * dVar48 - local_318 * dVar40) + local_308 * dVar34 + dVar19;
    dVar51 = dStack_340 + (dVar34 * local_318 - dVar33 * dVar41) + dStack_300 * dVar40 + dVar17;
    dVar41 = (double)local_338._0_8_ +
             (dVar40 * dVar41 - dVar48 * dVar34) + local_308 * dVar33 + dVar18;
    dVar48 = (double)local_338._8_8_ +
             (dVar60 * dStack_310 - dVar60 * dStack_310) + dStack_300 * dVar60 + dVar47;
  }
  else {
    dVar51 = dVar48 + dVar48;
    dVar59 = local_318 + local_318;
    dVar33 = dVar41 * (dVar41 + dVar41);
    dVar27 = (dVar41 + dVar41) * dStack_300;
    dStack_180 = (dVar59 * dVar48 - dVar27) * dStack_2d0;
    local_188 = (dVar51 * local_308 + (double)local_328._0_8_ * dVar59) * dVar4;
    dVar65 = (dVar51 * dVar41 + dVar59 * local_308) * (double)local_378._0_8_;
    local_198 = (dVar59 * dVar48 + dVar27) * (double)local_378._8_8_;
    local_1c8._8_4_ = SUB84(dVar65,0);
    local_1c8._0_8_ =
         ((double)DAT_149934d80 - (local_318 * dVar59 + dVar48 * dVar51)) * (double)local_378._0_8_;
    local_1c8._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
    local_1b8 = ((double)local_328._0_8_ * dVar59 - dVar51 * local_308) * (double)local_378._0_8_;
    uStack_1b0 = 0;
    local_178 = (1.0 - (dVar33 + dVar48 * dVar51)) * dVar4;
    local_1a8._8_8_ =
         (DAT_149934d80._8_8_ - (local_318 * dVar59 + dVar33)) * (double)local_378._8_8_;
    local_1a8._0_8_ = (dVar51 * dVar41 - dVar59 * local_308) * local_2d8;
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = local_348;
    dStack_160 = dStack_340;
    local_158 = (double)local_338._0_8_;
    uStack_150 = 0x3ff0000000000000;
    dVar27 = dVar39 + dVar39;
    dVar65 = dVar40 + dVar40;
    dVar59 = dVar35 * (dVar35 + dVar35);
    local_1f8 = (1.0 - (dVar59 + dVar39 * dVar27)) * dVar49;
    dVar51 = (dVar35 + dVar35) * dVar60;
    local_208 = (dVar35 * dVar65 + dVar27 * dVar60) * dVar49;
    local_228 = (dVar27 * dVar35 - dVar65 * dVar60) * dVar2;
    dStack_200 = (dVar65 * dVar39 - dVar51) * dVar49;
    dVar41 = (double)local_378._0_8_ * dVar1;
    dVar48 = (double)local_378._8_8_ * dVar2;
    local_248 = ((double)DAT_149934d80 - (dVar40 * dVar65 + dVar39 * dVar27)) * dVar1;
    dStack_220 = (DAT_149934d80._8_8_ - (dVar40 * dVar65 + dVar59)) * dVar2;
    dStack_240 = (dVar27 * dVar35 + dVar65 * dVar60) * dVar1;
    local_218 = (dVar65 * dVar39 + dVar51) * dVar2;
    local_238 = (dVar35 * dVar65 - dVar27 * dVar60) * dVar1;
    uStack_230 = 0;
    uStack_210 = 0;
    uStack_1f0 = 0;
    uStack_1d0 = 0x3ff0000000000000;
    pdVar15 = &local_148;
    local_368 = dVar18;
    dStack_360 = dVar47;
    local_1e8 = dVar19;
    dStack_1e0 = dVar17;
    local_1d8 = dVar18;
    FUN_1447fea8d(pdVar15);
    FUN_144a1c686(pdVar15,0x3e45798ee0000000);
    auVar23._8_8_ = -(ulonglong)(0.0 <= dVar48);
    auVar23._0_8_ = -(ulonglong)(0.0 <= dVar41);
    auVar30 = blendvpd(_DAT_149936790,auVar20,auVar23);
    uVar16 = -(ulonglong)(0.0 <= dVar4 * dVar49);
    dVar41 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
    dVar48 = auVar30._0_8_;
    local_138 = local_138 * dVar48;
    local_140 = local_140 * dVar48;
    local_148 = local_148 * dVar48;
    dVar48 = auVar30._8_8_;
    local_118 = local_118 * dVar48;
    local_120 = local_120 * dVar48;
    local_128 = dVar48 * local_128;
    local_f8 = local_f8 * dVar41;
    local_100 = local_100 * dVar41;
    local_108 = dVar41 * local_108;
    FUN_14481fd10(&local_2c8);
    uVar14 = SUB84(pdVar15,0);
    dVar41 = (double)local_2b8._0_8_ * (double)local_2b8._0_8_ + local_2c8 * local_2c8;
    dVar48 = (double)local_2b8._8_8_ * (double)local_2b8._8_8_ + dStack_2c0 * dStack_2c0;
    auVar43._0_8_ = dVar41 + dVar48;
    auVar43._8_8_ = dVar41 + dVar48;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
    auVar30 = sqrtpd(auVar43,auVar43);
    auVar20 = divpd(auVar20,auVar30);
    auVar66._0_8_ = auVar20._0_8_ * (double)local_2b8._0_8_;
    auVar66._8_8_ = auVar20._8_8_ * (double)local_2b8._8_8_;
    dVar59 = (double)((ulonglong)(local_2c8 * auVar20._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_));
    dVar27 = (double)((ulonglong)(dStack_2c0 * auVar20._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_));
    auVar62 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar66,auVar24);
    dVar48 = 0.0;
    dVar41 = local_d8;
    dVar65 = local_e8;
    dVar51 = dStack_e0;
  }
  auVar20 = _DAT_149934d80;
  dVar4 = dVar4 * dVar49;
  dVar2 = (double)uVar8 * dVar2;
  dVar1 = (double)uVar7 * dVar1;
  dVar49 = (double)uVar9 * 0.0;
  pdVar15 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
  pdVar11 = (double *)&DAT_14c846480;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    pdVar11 = pdVar15;
  }
  local_298 = 0.0;
  dStack_290 = 0.0;
  local_2a8 = 0.0;
  dStack_2a0 = 0.0;
  auVar30 = *(undefined1 (*) [16])(pdVar11 + 8);
  dVar40 = auVar30._0_8_;
  dVar18 = auVar30._8_8_;
  auVar63 = *(undefined1 (*) [16])(pdVar11 + 10);
  dVar60 = auVar63._0_8_;
  dVar47 = auVar63._8_8_;
  auVar44._8_8_ = dVar2;
  auVar44._0_8_ = dVar1;
  auVar30 = minpd(auVar44,auVar30);
  auVar54._8_8_ = dVar49;
  auVar54._0_8_ = dVar4;
  auVar63 = minpd(auVar54,auVar63);
  auVar45._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
  auVar45._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
  iVar10 = movmskpd((int)pdVar15,auVar45);
  auVar55._8_8_ = -(ulonglong)(auVar63._8_8_ < 0.0);
  auVar55._0_8_ = -(ulonglong)(auVar63._0_8_ < 0.0);
  uVar12 = movmskpd(uVar14,auVar55);
  dVar19 = auVar62._0_8_;
  dVar17 = auVar62._8_8_;
  if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
    dVar35 = *pdVar11;
    dVar39 = pdVar11[1];
    dVar34 = pdVar11[3];
    dVar33 = pdVar11[3];
    local_378._8_4_ = SUB84(dVar49,0);
    local_378._0_8_ = dVar4;
    local_378._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
    dVar38 = pdVar11[1];
    dVar49 = pdVar11[1];
    dVar5 = pdVar11[2];
    dVar6 = pdVar11[3];
    dVar56 = pdVar11[2];
    dVar50 = pdVar11[2];
    local_2c8 = dVar27 * dVar56 * -1.0 + dVar19 * dVar38 + dVar17 * *pdVar11 * 1.0 + dVar59 * dVar34
    ;
    dStack_2c0 = dVar59 * dVar50 * 1.0 +
                 dVar17 * dVar49 + dVar19 * *pdVar11 * -1.0 + dVar27 * dVar33;
    dVar65 = dVar65 * dVar40;
    dVar51 = dVar51 * dVar18;
    dVar41 = dVar41 * dVar60;
    dVar48 = dVar48 * dVar47;
    dVar28 = dVar51 * dVar35 - dVar65 * dVar39;
    dVar32 = dVar41 * dVar39 - dVar51 * dVar5;
    dVar57 = dVar65 * dVar5 - dVar41 * dVar35;
    dVar58 = dVar48 * dVar6 - dVar48 * dVar6;
    dVar32 = dVar32 + dVar32;
    dVar57 = dVar57 + dVar57;
    dVar28 = dVar28 + dVar28;
    dVar58 = dVar58 + dVar58;
    local_2a8 = (dVar28 * dVar39 - dVar5 * dVar57) + dVar34 * dVar32 + dVar65 + pdVar11[4];
    dStack_2a0 = (dVar32 * dVar5 - dVar28 * dVar35) + dVar33 * dVar57 + dVar51 + pdVar11[5];
    local_298 = (dVar57 * dVar35 - dVar39 * dVar32) + dVar34 * dVar28 + dVar41 + pdVar11[6];
    dStack_290 = (dVar58 * dVar6 - dVar58 * dVar6) + dVar33 * dVar58 + dVar48 + pdVar11[7];
    local_2b8._8_8_ =
         dVar19 * dVar50 * -1.0 + ((*pdVar11 * dVar59 * -1.0 + dVar17 * dVar33) - dVar27 * dVar49);
    local_2b8._0_8_ =
         dVar17 * dVar56 * 1.0 + ((*pdVar11 * dVar27 * 1.0 + dVar19 * dVar34) - dVar59 * dVar38);
    dVar47 = (double)local_378._8_8_ * dVar47;
  }
  else {
    dVar34 = *pdVar11;
    dVar38 = pdVar11[1];
    dVar50 = pdVar11[2];
    dVar56 = dVar38 + dVar38;
    dVar57 = dVar50 + dVar50;
    dVar33 = dVar34 * (dVar34 + dVar34);
    local_338._8_4_ = SUB84(dVar48,0);
    local_338._0_8_ = dVar41;
    local_338._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    dVar48 = pdVar11[3];
    dVar58 = dVar57 * dVar48;
    dVar35 = (dVar34 + dVar34) * pdVar11[3];
    dVar48 = dVar56 * dVar48;
    local_378._8_4_ = SUB84(dVar49 * dVar47,0);
    local_378._0_8_ = dVar4 * dVar60;
    local_378._12_4_ = (int)((ulonglong)(dVar49 * dVar47) >> 0x20);
    local_178 = (1.0 - (dVar33 + dVar38 * dVar56)) * dVar60;
    local_188 = (dVar48 + *pdVar11 * dVar57) * dVar60;
    dStack_180 = (dVar57 * dVar38 - dVar35) * dVar60;
    dVar49 = (DAT_149934d80._8_8_ - (dVar50 * dVar57 + dVar33)) * dVar18;
    local_198 = (dVar57 * dVar38 + dVar35) * dVar18;
    local_1b8 = (*pdVar11 * dVar57 - dVar48) * dVar40;
    local_1c8._8_8_ = (dVar56 * dVar34 + dVar58) * dVar40;
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar50 * dVar57 + dVar38 * dVar56)) * dVar40;
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar49,0);
    local_1a8._0_8_ = (dVar56 * dVar34 - dVar58) * dVar18;
    local_1a8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = pdVar11[4];
    dStack_160 = pdVar11[5];
    local_158 = pdVar11[6];
    uStack_150 = 0x3ff0000000000000;
    dVar47 = dVar27 + dVar27;
    dVar49 = dVar19 + dVar19;
    dVar33 = dVar59 * (dVar59 + dVar59);
    local_1f8 = (1.0 - (dVar33 + dVar27 * dVar47)) * dVar4;
    dVar48 = (dVar59 + dVar59) * dVar17;
    local_208 = (dVar59 * dVar49 + dVar47 * dVar17) * dVar4;
    local_228 = (dVar47 * dVar59 - dVar49 * dVar17) * dVar2;
    dStack_200 = (dVar49 * dVar27 - dVar48) * dVar4;
    local_248 = ((double)DAT_149934d80 - (dVar19 * dVar49 + dVar27 * dVar47)) * dVar1;
    dStack_220 = (DAT_149934d80._8_8_ - (dVar19 * dVar49 + dVar33)) * dVar2;
    dStack_240 = (dVar47 * dVar59 + dVar49 * dVar17) * dVar1;
    local_218 = (dVar49 * dVar27 + dVar48) * dVar2;
    local_238 = (dVar59 * dVar49 - dVar47 * dVar17) * dVar1;
    dVar47 = (double)local_378._8_8_;
    uStack_230 = 0;
    uStack_210 = 0;
    uStack_1f0 = 0;
    uStack_1d0 = 0x3ff0000000000000;
    local_348 = dVar65;
    dStack_340 = dVar51;
    local_1e8 = dVar65;
    dStack_1e0 = dVar51;
    local_1d8 = dVar41;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar25._8_8_ = -(ulonglong)(0.0 <= dVar2 * dVar18);
    auVar25._0_8_ = -(ulonglong)(0.0 <= dVar1 * dVar40);
    auVar30 = blendvpd(_DAT_149936790,auVar20,auVar25);
    uVar16 = -(ulonglong)(0.0 <= dVar4 * dVar60);
    dVar41 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
    dVar49 = auVar30._0_8_;
    local_138 = local_138 * dVar49;
    local_140 = local_140 * dVar49;
    local_148 = local_148 * dVar49;
    dVar49 = auVar30._8_8_;
    local_118 = local_118 * dVar49;
    local_120 = local_120 * dVar49;
    local_128 = dVar49 * local_128;
    local_f8 = local_f8 * dVar41;
    local_100 = local_100 * dVar41;
    local_108 = dVar41 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar41 = local_258 * local_258 + local_268 * local_268;
    dVar49 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar46._0_8_ = dVar41 + dVar49;
    auVar46._8_8_ = dVar41 + dVar49;
    auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar46._8_8_);
    auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar46._0_8_);
    auVar30 = sqrtpd(auVar46,auVar46);
    auVar20 = divpd(auVar20,auVar30);
    auVar64._0_8_ = auVar20._0_8_ * local_258;
    auVar64._8_8_ = auVar20._8_8_ * dStack_250;
    local_2c8 = (double)((ulonglong)(local_268 * auVar20._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar46._0_8_));
    dStack_2c0 = (double)((ulonglong)(dStack_260 * auVar20._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar46._8_8_));
    local_2b8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar64,auVar26);
    local_2a8 = local_e8;
    dStack_2a0 = dStack_e0;
    local_298 = local_d8;
    dStack_290 = 0.0;
  }
  local_288._8_4_ = SUB84(dVar2 * dVar18,0);
  local_288._0_8_ = dVar1 * dVar40;
  local_288._12_4_ = (int)((ulonglong)(dVar2 * dVar18) >> 0x20);
  local_278._8_4_ = SUB84(dVar47,0);
  local_278._0_8_ = dVar4 * dVar60;
  local_278._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
  local_388 = 0;
  FUN_1413d4c10(param_1,&local_2c8,0,0);
  if ((local_c0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d41258 FUN_148d41258 body=154 status=ok
// SIG undefined FUN_148d41258(void)

longlong FUN_148d41258(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ec804e();
  if (*(int *)(param_2 + 0xc) == -1) {
    lVar1 = FUN_14479d2ce(param_1 + 0x7f0);
    if (lVar1 != 0) {
      FUN_1458ea720(lVar1 + 0xd50,&local_30,param_3);
      FUN_140bc2be4(param_2,&local_30);
      if ((local_24 != -1) && (local_30 != 0)) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d412f4 FUN_148d412f4 body=411 status=ok
// SIG undefined FUN_148d412f4(void)

void FUN_148d412f4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x3f0);
  if (((plVar2 != (longlong *)0x0) && (lVar5 = *(longlong *)(param_1 + 0xbc8), lVar5 != 0)) &&
     (*(longlong *)(param_1 + 0xba8) == 0)) {
    lVar8 = *(longlong *)(lVar5 + 0xa8);
    uVar7 = *(undefined4 *)(lVar5 + 0xb0);
    if (*(char *)(lVar5 + 0xa3) == '\0') {
      lVar5 = (**(code **)(*plVar2 + 8))(plVar2);
      lVar6 = FUN_14037df6e();
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        lVar8 = plVar2[0x2c];
        uVar7 = (undefined4)plVar2[0x2d];
      }
    }
    uVar4 = FUN_1447210f0(param_1);
    local_50 = 0;
    local_68 = 1;
    local_60 = lVar8;
    local_58 = uVar7;
    FUN_14078bff4(&local_48,&local_60,param_1 + 0x3d8,uVar4);
    plVar2 = local_40;
    if ((undefined8 *)(param_1 + 0xba8) != &local_48) {
      *(undefined8 *)(param_1 + 0xba8) = local_48;
      local_48 = 0;
      plVar3 = *(longlong **)(param_1 + 0xbb0);
      if (local_40 != plVar3) {
        local_40 = (longlong *)0x0;
        *(longlong **)(param_1 + 0xbb0) = plVar2;
        if (plVar3 != (longlong *)0x0) {
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
      }
    }
    plVar2 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d41490 FUN_148d41490 body=32 status=ok
// SIG undefined FUN_148d41490(void)

undefined8 FUN_148d41490(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"OakVehicleStandIn");
  return param_2;
}



// FUNCTION 148d414e4 FUN_148d414e4 body=334 status=ok
// SIG undefined FUN_148d414e4(void)

bool FUN_148d414e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x398) != 0)) {
    lVar5 = FUN_144a7b4ca();
    lVar1 = *(longlong *)(param_2 + 0x398);
    if (lVar1 != 0) {
      if (lVar5 == 0) {
        return false;
      }
      lVar7 = *(longlong *)(lVar1 + 0x10);
      if (lVar7 == 0) {
        return false;
      }
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        lVar5 = *(longlong *)(param_1 + 0x18);
        if (lVar5 == 0) {
          uVar6 = FUN_140b1c3dc();
          lVar5 = FUN_14477b664(uVar6);
          *(longlong *)(param_1 + 0x18) = lVar5;
        }
        lVar7 = *(longlong *)(param_1 + 0x20);
        if (lVar7 == 0) {
          if (lVar5 == 0) {
            return false;
          }
          if (*(longlong *)(param_1 + 0x10) == 0) {
            return false;
          }
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            *(undefined8 *)(param_1 + 0x20) = 0;
            return false;
          }
          uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar7 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x10));
          *(longlong *)(param_1 + 0x20) = lVar7;
          if (lVar7 == 0) {
            return false;
          }
        }
        iVar4 = FUN_1409e483c(lVar1,lVar7);
        switch(*(undefined1 *)(param_1 + 0x28)) {
        case 0:
          return iVar4 <= *(int *)(param_1 + 0x2c);
        case 1:
          return iVar4 < *(int *)(param_1 + 0x2c);
        case 2:
          return iVar4 == *(int *)(param_1 + 0x2c);
        case 3:
          return *(int *)(param_1 + 0x2c) < iVar4;
        case 4:
          return *(int *)(param_1 + 0x2c) <= iVar4;
        case 5:
          return iVar4 != *(int *)(param_1 + 0x2c);
        }
      }
    }
  }
  return false;
}



// FUNCTION 148d41632 FUN_148d41632 body=593 status=ok
// SIG undefined FUN_148d41632(void)

void FUN_148d41632(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *****pppppuVar11;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  undefined1 local_a8 [8];
  undefined8 *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 ****local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar5 = (longlong *)FUN_144a7be76();
  if (plVar5 != (longlong *)0x0) {
    uVar6 = FUN_1413dc03c();
    lVar7 = (**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
    if (lVar7 != 0) {
      uVar6 = FUN_1413dc03c();
      lVar8 = FUN_144718840(lVar7,uVar6);
      if (lVar8 != 0 && lVar7 != lVar8) {
        uVar6 = *(undefined8 *)(param_1 + 0x48);
        local_70[0] = (undefined8 ****)FUN_1405f939e(param_1);
        FUN_148d47146(local_a8);
        LOCK();
        *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
        UNLOCK();
        local_b8 = local_80;
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
        local_b0 = local_88;
        lVar7 = local_98;
        if (local_a0 != local_88) {
          local_c0 = local_98;
          local_c8 = local_90;
          puVar9 = local_a0;
          plVar5 = local_90;
          do {
            uVar2 = puVar9[2];
            cVar4 = FUN_148d41884(param_1,uVar6,uVar2,lVar8);
            if (cVar4 != '\0') {
              iVar1 = *(int *)(param_2 + 0x388);
              *(uint *)(param_2 + 0x388) = iVar1 + 1U;
              if (*(uint *)(param_2 + 0x38c) < iVar1 + 1U) {
                FUN_14052e0a0(param_2,iVar1);
              }
              lVar7 = *(longlong *)(param_2 + 0x380);
              if (*(longlong *)(param_2 + 0x380) == 0) {
                lVar7 = param_2;
              }
              local_58 = 8;
              local_70[0] = (undefined8 *****)0x0;
              FUN_14485c47a(local_70,uVar2);
              local_50 = 7;
              FUN_141814da4((longlong)iVar1 * 0x38 + lVar7,local_70,0);
              plVar5 = local_c8;
              pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
              if (pcVar3 != (code *)0x0) {
                pppppuVar11 = local_70;
                if (0x18 < local_58) {
                  pppppuVar11 = (undefined8 *****)local_70[0];
                }
                (*pcVar3)(pppppuVar11);
              }
              lVar7 = local_c0;
              if (0x18 < local_58) {
                FUN_1400020a8(local_70[0]);
              }
            }
            for (puVar9 = (undefined8 *)FUN_148d471d0(*puVar9); puVar9 != (undefined8 *)0x0;
                puVar9 = (undefined8 *)FUN_148d471d0(*puVar9)) {
              lVar10 = FUN_1447210f0(puVar9[2]);
              if (lVar10 == *plVar5) goto LAB_148d41854;
            }
            puVar9 = (undefined8 *)0x0;
LAB_148d41854:
          } while (puVar9 != local_b0);
        }
        LOCK();
        *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + -1;
        UNLOCK();
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + -1;
        UNLOCK();
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + -1;
        UNLOCK();
        LOCK();
        *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d41884 FUN_148d41884 body=134 status=ok
// SIG undefined FUN_148d41884(void)

undefined8 FUN_148d41884(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0x218) == '\x01') {
    FUN_1489af028(local_48,param_4);
    cVar1 = FUN_14656301e(param_3 + 0x3c0,local_48);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_148d418e4;
    }
  }
  uVar2 = FUN_1488b828c(param_1,param_2,param_3);
LAB_148d418e4:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d41912 FUN_148d41912 body=113 status=ok
// SIG undefined FUN_148d41912(void)

void FUN_148d41912(longlong param_1,undefined8 param_2)

{
  FUN_141815b16();
  FUN_140aa1618(param_1 + 0x60,param_2);
  FUN_140aa1618(param_1 + 0xf8,param_2);
  FUN_140aa1618(param_1 + 0x118,param_2);
  FUN_140aa1618(param_1 + 0x138,param_2);
  FUN_140aa1618(param_1 + 0x160,param_2);
  FUN_140aa1618(param_1 + 0x188,param_2);
  return;
}



// FUNCTION 148d41996 FUN_148d41996 body=125 status=ok
// SIG undefined FUN_148d41996(void)

undefined8 FUN_148d41996(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_148bc4f7a();
  FUN_1406f1d90(uVar1,local_28,*(undefined1 *)(param_1 + 0x38));
  uVar1 = FUN_1447a1f4a(local_28);
  FUN_140b1283a(param_2,L"Grapple: ",uVar1);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d41a14 FUN_148d41a14 body=28 status=ok
// SIG undefined FUN_148d41a14(void)

void FUN_148d41a14(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_14603922c(param_1);
  return;
}



// FUNCTION 148d41a30 FUN_148d41a30 body=61 status=ok
// SIG undefined FUN_148d41a30(void)

ulonglong FUN_148d41a30(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = (**(code **)(param_1[-0x35b] + 0x660))(param_1 + -0x35b);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}



// FUNCTION 148d41a6e FUN_148d41a6e body=139 status=ok
// SIG undefined FUN_148d41a6e(void)

void FUN_148d41a6e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  local_38 = DAT_14c9a6400;
  local_30 = 0xffffffff;
  local_48 = DAT_14cbcb0e0;
  local_40 = 0xffffffff;
  FUN_140f8b8f2(param_1 + -0x1600);
  FUN_14589c6ba(param_1,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d41afa FUN_148d41afa body=325 status=ok
// SIG undefined FUN_148d41afa(void)

longlong *
FUN_148d41afa(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong *param_5
             ,longlong param_6,longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar7 = &DAT_14c846480;
  plVar8 = param_1 + 4;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar8 = *plVar7;
    plVar7 = plVar7 + 1;
    plVar8 = plVar8 + 1;
  }
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar5 = DAT_14c950c29;
  *param_1 = param_2;
  if ((param_3 != 0) && ((bVar5 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  param_1[1] = param_3;
  param_1[2] = param_4;
  plVar7 = param_1 + 4;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar7 = *param_5;
    param_5 = param_5 + 1;
    plVar7 = plVar7 + 1;
  }
  param_1[0x10] = param_6;
  lVar6 = *param_7;
  lVar1 = param_7[1];
  lVar2 = param_7[2];
  lVar3 = param_7[3];
  uVar4 = *(undefined8 *)((longlong)param_7 + 0x24);
  *(undefined8 *)((longlong)param_1 + 0xa4) = *(undefined8 *)((longlong)param_7 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0xac) = uVar4;
  param_1[0x13] = lVar2;
  param_1[0x14] = lVar3;
  param_1[0x11] = lVar6;
  param_1[0x12] = lVar1;
  return param_1;
}



// FUNCTION 148d41c40 FUN_148d41c40 body=401 status=ok
// SIG undefined FUN_148d41c40(void)

ulonglong FUN_148d41c40(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  void *_Src;
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  void **ppvVar6;
  undefined1 auStack_c8 [32];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else if ((param_1[3] == param_3) ||
          (cVar2 = (**(code **)(*param_1 + 0x4c8))(param_1,param_3), cVar2 != '\0')) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_1);
    }
    *param_2 = param_1;
    cVar2 = (**(code **)(*param_1 + 0x4c8))(param_1,param_3);
    if (cVar2 == '\0') {
      ppvVar6 = (void **)(param_1 + 0x48);
      lVar4 = 0xc;
    }
    else {
      (**(code **)(*param_1 + 0x4a8))(param_1,&local_a8,param_3,0);
      lVar4 = 0xc;
      ppvVar6 = &local_a8;
    }
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      *param_4 = (longlong)*ppvVar6;
      ppvVar6 = ppvVar6 + 1;
      param_4 = param_4 + 1;
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  }
  else {
    local_a8 = (void *)0x0;
    local_a0 = (int)param_1[0x28];
    lVar4 = (longlong)local_a0;
    _Src = (void *)param_1[0x27];
    if (lVar4 == 0) {
      local_9c = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      FUN_14746828a(&local_a8,local_a0,0);
      memcpy(local_a8,_Src,lVar4 << 3);
      if (0 < local_a0) {
        lVar4 = 1;
        do {
          uVar3 = FUN_148d41c40(*(undefined8 *)((longlong)local_a8 + lVar4 * 8 + -8),param_2,param_3
                                ,param_4);
          uVar5 = (ulonglong)uVar3;
          if ((char)uVar3 != '\0') break;
          bVar1 = lVar4 < local_a0;
          lVar4 = lVar4 + 1;
        } while (bVar1);
      }
    }
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 148d41dd2 FUN_148d41dd2 body=128 status=ok
// SIG undefined FUN_148d41dd2(void)

void FUN_148d41dd2(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    return;
  }
  if (*param_3 == 0) {
    return;
  }
  lVar1 = FUN_1405837ac(param_2,*param_3,param_4,1,0,1);
  if (lVar1 != 0) {
    lVar2 = FUN_144a7e9aa();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
      goto LAB_148d41e34;
    }
  }
  lVar1 = 0;
LAB_148d41e34:
  *(longlong *)(param_1 + 0x40) = lVar1;
  return;
}



// FUNCTION 148d41e52 FUN_148d41e52 body=326 status=ok
// SIG undefined FUN_148d41e52(void)

void FUN_148d41e52(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  *(undefined8 *)param_2[1] = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)*param_2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(*param_2 + 8) = uVar8;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    dVar10 = *(double *)(param_1 + 0x28) * *(double *)(lVar2 + 0x280);
    dVar11 = *(double *)(param_1 + 0x30) * *(double *)(lVar2 + 0x288);
    dVar9 = *(double *)(param_1 + 0x38) * *(double *)(lVar2 + 0x290);
    dVar5 = *(double *)(lVar2 + 0x240);
    dVar6 = *(double *)(lVar2 + 0x248);
    dVar7 = *(double *)(lVar2 + 0x250);
    dVar1 = *(double *)(lVar2 + 600);
    dVar12 = dVar11 * dVar5 - dVar10 * dVar6;
    dVar13 = dVar9 * dVar6 - dVar11 * dVar7;
    dVar14 = dVar10 * dVar7 - dVar5 * dVar9;
    dVar13 = dVar13 + dVar13;
    dVar14 = dVar14 + dVar14;
    dVar12 = dVar12 + dVar12;
    dVar4 = (dVar7 * dVar13 - dVar5 * dVar12) + *(double *)(lVar2 + 600) * dVar14 + dVar11 +
            *(double *)(lVar2 + 0x268);
    dVar11 = *(double *)(lVar2 + 0x270);
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = (dVar12 * dVar6 - dVar14 * dVar7) + dVar1 * dVar13 + dVar10 +
                   *(double *)(lVar2 + 0x260);
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *param_2 = auVar3;
    *(double *)param_2[1] = dVar12 * dVar1 + dVar9 + (dVar14 * dVar5 - dVar13 * dVar6) + dVar11;
  }
  return;
}



// FUNCTION 148d41f98 FUN_148d41f98 body=322 status=ok
// SIG undefined FUN_148d41f98(void)

void FUN_148d41f98(undefined8 param_1,float param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  float local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 < 0.0001) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  if (30.0 <= param_2) {
    param_2 = 30.0;
  }
  uVar4 = FUN_1401cb356();
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar2 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_149e02020;
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
  *local_50 = &PTR_FUN_14b974970;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,param_1);
  puVar2[4] = param_1;
  local_58 = param_2;
  FUN_1405f67fc(uVar4,local_40,&local_50,L"AGrapplePoint.SetRestingNetDormancy");
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  FUN_1449db362(&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d420f0 FUN_148d420f0 body=58 status=ok
// SIG undefined FUN_148d420f0(void)

void FUN_148d420f0(longlong param_1)

{
  FUN_14103d96c();
  FUN_14081ae08(param_1,1);
  FUN_1405e4918(param_1,0x42c80000);
  *(undefined4 *)(param_1 + 0x19c) = 0x3f000000;
  return;
}



// FUNCTION 148d4216a FUN_148d4216a body=40 status=ok
// SIG undefined FUN_148d4216a(void)

undefined8 FUN_148d4216a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14597fce2(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148d4219e FUN_148d4219e body=135 status=ok
// SIG undefined FUN_148d4219e(void)

void FUN_148d4219e(longlong *param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  lVar1 = *param_1;
  if (param_1[0x56] != 0) {
    if (lVar1 == 0) {
      return;
    }
    if (*(longlong *)(&DAT_00006850 + lVar1) == 0) {
      return;
    }
    FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + lVar1),param_1 + 0x56);
    lVar1 = *param_1;
  }
  if ((((lVar1 != 0) && (*(longlong **)(&DAT_00006850 + lVar1) != (longlong *)0x0)) &&
      (fVar2 = (float)(**(code **)(**(longlong **)(&DAT_00006850 + lVar1) + 0x478))(), param_2 < 0.0
      )) && (fVar2 < 0.0)) {
    *(float *)((longlong)param_1 + 0x1bc) = param_2 / fVar2;
  }
  return;
}



// FUNCTION 148d42226 FUN_148d42226 body=177 status=ok
// SIG undefined FUN_148d42226(void)

void FUN_148d42226(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1409ca53e(&local_30);
  FUN_1409ca370(param_1 + 0x598,param_1,local_30);
  FUN_144a7b126(param_1 + 0x598,&local_21,1);
  lVar1 = *(longlong *)(param_1 + 0x430);
  if (lVar1 != 0) {
    cVar2 = FUN_1470e0b1a(*(undefined1 *)(lVar1 + 0x291),*(undefined1 *)(lVar1 + 0x292));
    if (cVar2 == '\x01') {
      FUN_14136a5f7(param_1 + 0x86f8,0,&DAT_14cbcb1e0);
    }
    FUN_1409c9c98(param_1 + 0x83b0,0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d422f2 FUN_148d422f2 body=85 status=ok
// SIG undefined FUN_148d422f2(void)

void FUN_148d422f2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412c3498(param_3);
  FUN_14136a5f7(param_1 + 0x4c00,param_2,uVar1);
  uVar1 = FUN_1412c3498(param_3);
  FUN_141123ce0(param_1 + 0x4c30,param_2,uVar1);
  return;
}



// FUNCTION 148d42348 FUN_148d42348 body=85 status=ok
// SIG undefined FUN_148d42348(void)

void FUN_148d42348(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412c3498(param_3);
  FUN_14136a5f7(param_1 + 0x4c10,param_2,uVar1);
  uVar1 = FUN_1412c3498(param_3);
  FUN_141123ce0(param_1 + 0x4c48,param_2,uVar1);
  return;
}



// FUNCTION 148d4239e FUN_148d4239e body=85 status=ok
// SIG undefined FUN_148d4239e(void)

void FUN_148d4239e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412c3498(param_3);
  FUN_14136a5f7(param_1 + 0x4c20,param_2,uVar1);
  uVar1 = FUN_1412c3498(param_3);
  FUN_141123ce0(param_1 + 0x4c60,param_2,uVar1);
  return;
}



// FUNCTION 148d423f4 FUN_148d423f4 body=114 status=ok
// SIG undefined FUN_148d423f4(void)

ulonglong FUN_148d423f4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x4208);
  if (lVar6 != 0) {
    puVar4 = (ulonglong *)(**(code **)(*(longlong *)(lVar6 + 0x3b38) + 0x18))(lVar6 + 0x3b38);
    if ((char)puVar4[0x5b] != '\0') {
      uVar5 = *puVar4;
      piVar1 = (int *)(uVar5 + 0x1550);
      if ((longlong)*piVar1 != 0) {
        plVar2 = (longlong *)(uVar5 + 0x1548);
        lVar6 = 0;
        do {
          lVar3 = *(longlong *)(*plVar2 + lVar6);
          if ((lVar3 != 0) &&
             (uVar5 = CONCAT71((int7)(uVar5 >> 8),1), *(char *)(lVar3 + 0x40) == (char)puVar4[0x5b])
             ) goto LAB_148d4245f;
          lVar6 = lVar6 + 0x10;
        } while ((longlong)*piVar1 * 0x10 != lVar6);
      }
      *(undefined1 *)(puVar4 + 0x5b) = 0;
    }
  }
  uVar5 = 0;
LAB_148d4245f:
  return uVar5 & 0xffffffff;
}



// FUNCTION 148d42466 FUN_148d42466 body=52 status=ok
// SIG undefined FUN_148d42466(void)

undefined8 FUN_148d42466(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4208);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x3b38) + 0x18))(lVar1 + 0x3b38);
    uVar2 = FUN_14025887a(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148d424a6 FUN_148d424a6 body=29 status=ok
// SIG undefined FUN_148d424a6(void)

undefined8 FUN_148d424a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d424dc FUN_148d424dc body=38 status=ok
// SIG undefined FUN_148d424dc(void)

undefined8 FUN_148d424dc(undefined8 param_1,int param_2)

{
  FUN_1457f4560();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d42502 FUN_148d42502 body=419 status=ok
// SIG undefined FUN_148d42502(void)

void FUN_148d42502(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
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



// FUNCTION 148d426a6 FUN_148d426a6 body=376 status=ok
// SIG undefined FUN_148d426a6(void)

longlong * FUN_148d426a6(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar5 = (undefined8 *)*param_1;
  plVar11 = *(longlong **)(param_2 + 0x10);
  bVar6 = true;
  if (plVar11 == (longlong *)0x0) {
LAB_148d42728:
    uVar12 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar11[1];
    do {
      if (iVar9 == 0) goto LAB_148d42728;
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar13 = iVar9 == iVar7;
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    bVar6 = false;
  }
  *puVar5 = &PTR_LAB_14b973ea0;
  FUN_140f746b6(puVar5 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  puVar5[4] = lVar10;
  *puVar5 = &PTR_FUN_14b973e30;
  puVar5[5] = uVar12;
  puVar5[6] = plVar11;
  if (bVar6) {
    puVar5[7] = uVar4;
    *(undefined4 *)(puVar5 + 8) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 8) = uVar3;
    puVar5[7] = uVar4;
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  return param_1;
}



// FUNCTION 148d4281e FUN_148d4281e body=64 status=ok
// SIG undefined FUN_148d4281e(void)

undefined8 * FUN_148d4281e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b973e30;
  plVar2 = (longlong *)param_1[6];
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



// FUNCTION 148d42862 FUN_148d42862 body=81 status=ok
// SIG undefined FUN_148d42862(void)

undefined8 FUN_148d42862(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
    uVar6 = *(undefined8 *)(param_1 + 0x28);
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



// FUNCTION 148d428ba FUN_148d428ba body=89 status=ok
// SIG undefined FUN_148d428ba(void)

bool FUN_148d428ba(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d42905;
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
    lVar6 = *(longlong *)(param_1 + 0x28);
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
LAB_148d42905:
  return lVar6 == param_2;
}



// FUNCTION 148d4293c FUN_148d4293c body=131 status=ok
// SIG undefined FUN_148d4293c(void)

void FUN_148d4293c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b973ea0;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b973e30;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d429c0 FUN_148d429c0 body=131 status=ok
// SIG undefined FUN_148d429c0(void)

void FUN_148d429c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b973ea0;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b973e30;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d42a44 FUN_148d42a44 body=169 status=ok
// SIG undefined FUN_148d42a44(void)

void FUN_148d42a44(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b973ea0;
  FUN_140f746b6(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b973e30;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar4;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar5;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar6;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d42add. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d42aee FUN_148d42aee body=186 status=ok
// SIG undefined FUN_148d42aee(void)

void FUN_148d42aee(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  local_20 = param_2;
  if (puVar3 == (undefined8 *)0x0) {
LAB_148d42b14:
    local_28 = 0;
    FUN_148d42c60(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
  }
  else {
    iVar4 = *(int *)(puVar3 + 1);
    do {
      if (iVar4 == 0) goto LAB_148d42b14;
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
    local_28 = *(undefined8 *)(param_1 + 0x28);
    FUN_148d42c60(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
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



// FUNCTION 148d42bba FUN_148d42bba body=163 status=ok
// SIG undefined FUN_148d42bba(void)

ulonglong FUN_148d42bba(longlong param_1,undefined8 param_2)

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
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x30);
  local_20 = param_2;
  if (plVar3 == (longlong *)0x0) {
LAB_148d42c1d:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d42c1d;
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
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_28 = lVar4;
      FUN_148d42c60(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
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



// FUNCTION 148d42c60 FUN_148d42c60 body=128 status=ok
// SIG undefined FUN_148d42c60(void)

void FUN_148d42c60(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar2 = (code *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  lVar3 = *param_3;
  local_48 = *param_1;
  uVar4 = FUN_14477b664(param_1[1]);
  local_40 = FUN_14477b664(uVar4);
  local_38 = param_1[2];
  (*pcVar2)(iVar1 + lVar3,*param_4,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d42ce2 FUN_148d42ce2 body=376 status=ok
// SIG undefined FUN_148d42ce2(void)

longlong * FUN_148d42ce2(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar5 = (undefined8 *)*param_1;
  plVar11 = *(longlong **)(param_2 + 0x10);
  bVar6 = true;
  if (plVar11 == (longlong *)0x0) {
LAB_148d42d64:
    uVar12 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar11[1];
    do {
      if (iVar9 == 0) goto LAB_148d42d64;
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar13 = iVar9 == iVar7;
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    bVar6 = false;
  }
  *puVar5 = &PTR_LAB_14b973f80;
  FUN_140f746b6(puVar5 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  puVar5[4] = lVar10;
  *puVar5 = &PTR_FUN_14b973f10;
  puVar5[5] = uVar12;
  puVar5[6] = plVar11;
  if (bVar6) {
    puVar5[7] = uVar4;
    *(undefined4 *)(puVar5 + 8) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 8) = uVar3;
    puVar5[7] = uVar4;
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  return param_1;
}



// FUNCTION 148d42e5a FUN_148d42e5a body=64 status=ok
// SIG undefined FUN_148d42e5a(void)

undefined8 * FUN_148d42e5a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b973f10;
  plVar2 = (longlong *)param_1[6];
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



// FUNCTION 148d42e9e FUN_148d42e9e body=81 status=ok
// SIG undefined FUN_148d42e9e(void)

undefined8 FUN_148d42e9e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
    uVar6 = *(undefined8 *)(param_1 + 0x28);
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



// FUNCTION 148d42ef6 FUN_148d42ef6 body=89 status=ok
// SIG undefined FUN_148d42ef6(void)

bool FUN_148d42ef6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d42f41;
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
    lVar6 = *(longlong *)(param_1 + 0x28);
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
LAB_148d42f41:
  return lVar6 == param_2;
}



// FUNCTION 148d42f78 FUN_148d42f78 body=131 status=ok
// SIG undefined FUN_148d42f78(void)

void FUN_148d42f78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b973f80;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b973f10;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d42ffc FUN_148d42ffc body=131 status=ok
// SIG undefined FUN_148d42ffc(void)

void FUN_148d42ffc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b973f80;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b973f10;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d43080 FUN_148d43080 body=169 status=ok
// SIG undefined FUN_148d43080(void)

void FUN_148d43080(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b973f80;
  FUN_140f746b6(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b973f10;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar4;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar5;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar6;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d43119. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d4312a FUN_148d4312a body=186 status=ok
// SIG undefined FUN_148d4312a(void)

void FUN_148d4312a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  local_20 = param_2;
  if (puVar3 == (undefined8 *)0x0) {
LAB_148d43150:
    local_28 = 0;
    FUN_148d4329c(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
  }
  else {
    iVar4 = *(int *)(puVar3 + 1);
    do {
      if (iVar4 == 0) goto LAB_148d43150;
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
    local_28 = *(undefined8 *)(param_1 + 0x28);
    FUN_148d4329c(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
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



// FUNCTION 148d431f6 FUN_148d431f6 body=163 status=ok
// SIG undefined FUN_148d431f6(void)

ulonglong FUN_148d431f6(longlong param_1,undefined8 param_2)

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
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x30);
  local_20 = param_2;
  if (plVar3 == (longlong *)0x0) {
LAB_148d43259:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d43259;
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
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_28 = lVar4;
      FUN_148d4329c(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
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



// FUNCTION 148d4329c FUN_148d4329c body=128 status=ok
// SIG undefined FUN_148d4329c(void)

void FUN_148d4329c(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar2 = (code *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  lVar3 = *param_3;
  local_48 = *param_1;
  uVar4 = FUN_14477b664(param_1[1]);
  local_40 = FUN_14477b664(uVar4);
  local_38 = param_1[2];
  (*pcVar2)(iVar1 + lVar3,*param_4,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d4331e FUN_148d4331e body=230 status=ok
// SIG undefined FUN_148d4331e(void)

undefined8 * FUN_148d4331e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148d43406 FUN_148d43406 body=376 status=ok
// SIG undefined FUN_148d43406(void)

longlong * FUN_148d43406(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar5 = (undefined8 *)*param_1;
  plVar11 = *(longlong **)(param_2 + 0x10);
  bVar6 = true;
  if (plVar11 == (longlong *)0x0) {
LAB_148d43488:
    uVar12 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar11[1];
    do {
      if (iVar9 == 0) goto LAB_148d43488;
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar13 = iVar9 == iVar7;
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    bVar6 = false;
  }
  *puVar5 = &PTR_LAB_14b974060;
  FUN_140f746b6(puVar5 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  puVar5[4] = lVar10;
  *puVar5 = &PTR_FUN_14b973ff0;
  puVar5[5] = uVar12;
  puVar5[6] = plVar11;
  if (bVar6) {
    puVar5[7] = uVar4;
    *(undefined4 *)(puVar5 + 8) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 8) = uVar3;
    puVar5[7] = uVar4;
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  return param_1;
}



// FUNCTION 148d4357e FUN_148d4357e body=64 status=ok
// SIG undefined FUN_148d4357e(void)

undefined8 * FUN_148d4357e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b973ff0;
  plVar2 = (longlong *)param_1[6];
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



// FUNCTION 148d435c2 FUN_148d435c2 body=81 status=ok
// SIG undefined FUN_148d435c2(void)

undefined8 FUN_148d435c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
    uVar6 = *(undefined8 *)(param_1 + 0x28);
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



// FUNCTION 148d4361a FUN_148d4361a body=89 status=ok
// SIG undefined FUN_148d4361a(void)

bool FUN_148d4361a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d43665;
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
    lVar6 = *(longlong *)(param_1 + 0x28);
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
LAB_148d43665:
  return lVar6 == param_2;
}



// FUNCTION 148d4369c FUN_148d4369c body=131 status=ok
// SIG undefined FUN_148d4369c(void)

void FUN_148d4369c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b974060;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b973ff0;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d43720 FUN_148d43720 body=131 status=ok
// SIG undefined FUN_148d43720(void)

void FUN_148d43720(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b974060;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b973ff0;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d437a4 FUN_148d437a4 body=169 status=ok
// SIG undefined FUN_148d437a4(void)

void FUN_148d437a4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b974060;
  FUN_140f746b6(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b973ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar4;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar5;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar6;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d4383d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d4384e FUN_148d4384e body=186 status=ok
// SIG undefined FUN_148d4384e(void)

void FUN_148d4384e(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  local_20 = param_2;
  if (puVar3 == (undefined8 *)0x0) {
LAB_148d43874:
    local_28 = 0;
    FUN_148d439c0(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
  }
  else {
    iVar4 = *(int *)(puVar3 + 1);
    do {
      if (iVar4 == 0) goto LAB_148d43874;
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
    local_28 = *(undefined8 *)(param_1 + 0x28);
    FUN_148d439c0(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
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



// FUNCTION 148d4391a FUN_148d4391a body=163 status=ok
// SIG undefined FUN_148d4391a(void)

ulonglong FUN_148d4391a(longlong param_1,undefined8 param_2)

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
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x30);
  local_20 = param_2;
  if (plVar3 == (longlong *)0x0) {
LAB_148d4397d:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d4397d;
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
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_28 = lVar4;
      FUN_148d439c0(param_1 + 8,param_1 + 0x38,&local_28,&local_20);
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



// FUNCTION 148d439c0 FUN_148d439c0 body=128 status=ok
// SIG undefined FUN_148d439c0(void)

void FUN_148d439c0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar2 = (code *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  lVar3 = *param_3;
  local_48 = *param_1;
  uVar4 = FUN_14477b664(param_1[1]);
  local_40 = FUN_14477b664(uVar4);
  local_38 = param_1[2];
  (*pcVar2)(iVar1 + lVar3,*param_4,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d43a42 FUN_148d43a42 body=376 status=ok
// SIG undefined FUN_148d43a42(void)

longlong * FUN_148d43a42(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar5 = (undefined8 *)*param_1;
  plVar11 = *(longlong **)(param_2 + 0x10);
  bVar6 = true;
  if (plVar11 == (longlong *)0x0) {
LAB_148d43ac4:
    uVar12 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar11[1];
    do {
      if (iVar9 == 0) goto LAB_148d43ac4;
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar13 = iVar9 == iVar7;
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    bVar6 = false;
  }
  *puVar5 = &PTR_LAB_14b974140;
  FUN_140f746b6(puVar5 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  puVar5[4] = lVar10;
  *puVar5 = &PTR_FUN_14b9740d0;
  puVar5[5] = uVar12;
  puVar5[6] = plVar11;
  if (bVar6) {
    puVar5[7] = uVar4;
    *(undefined4 *)(puVar5 + 8) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 8) = uVar3;
    puVar5[7] = uVar4;
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  return param_1;
}



// FUNCTION 148d43bba FUN_148d43bba body=64 status=ok
// SIG undefined FUN_148d43bba(void)

undefined8 * FUN_148d43bba(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9740d0;
  plVar2 = (longlong *)param_1[6];
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



// FUNCTION 148d43bfe FUN_148d43bfe body=81 status=ok
// SIG undefined FUN_148d43bfe(void)

undefined8 FUN_148d43bfe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
    uVar6 = *(undefined8 *)(param_1 + 0x28);
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



// FUNCTION 148d43c56 FUN_148d43c56 body=89 status=ok
// SIG undefined FUN_148d43c56(void)

bool FUN_148d43c56(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d43ca1;
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
    lVar6 = *(longlong *)(param_1 + 0x28);
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
LAB_148d43ca1:
  return lVar6 == param_2;
}



// FUNCTION 148d43cd8 FUN_148d43cd8 body=131 status=ok
// SIG undefined FUN_148d43cd8(void)

void FUN_148d43cd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b974140;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b9740d0;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d43d5c FUN_148d43d5c body=131 status=ok
// SIG undefined FUN_148d43d5c(void)

void FUN_148d43d5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b974140;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b9740d0;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d43de0 FUN_148d43de0 body=169 status=ok
// SIG undefined FUN_148d43de0(void)

void FUN_148d43de0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b974140;
  FUN_140f746b6(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9740d0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar4;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar5;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar6;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d43e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d43e8a FUN_148d43e8a body=193 status=ok
// SIG undefined FUN_148d43e8a(void)

void FUN_148d43e8a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  local_1c = param_3;
  if (puVar3 == (undefined8 *)0x0) {
LAB_148d43eb3:
    local_28 = 0;
    local_38 = &local_1c;
    FUN_148d44008(param_1 + 8,param_1 + 0x38,&local_28,param_2);
  }
  else {
    iVar4 = *(int *)(puVar3 + 1);
    do {
      if (iVar4 == 0) goto LAB_148d43eb3;
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
    local_28 = *(undefined8 *)(param_1 + 0x28);
    local_38 = &local_1c;
    FUN_148d44008(param_1 + 8,param_1 + 0x38,&local_28,param_2);
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
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d43f5c FUN_148d43f5c body=168 status=ok
// SIG undefined FUN_148d43f5c(void)

ulonglong FUN_148d43f5c(longlong param_1,undefined8 param_2,undefined4 param_3)

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
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  longlong local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x30);
  local_1c = param_3;
  if (plVar3 == (longlong *)0x0) {
LAB_148d43fc2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d43fc2;
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
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_38 = &local_1c;
      local_28 = lVar4;
      FUN_148d44008(param_1 + 8,param_1 + 0x38,&local_28,param_2);
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148d44008 FUN_148d44008 body=143 status=ok
// SIG undefined FUN_148d44008(void)

void FUN_148d44008(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar2 = (code *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  lVar3 = *param_3;
  local_50 = *param_1;
  uVar4 = FUN_14477b664(param_1[1]);
  local_48 = FUN_14477b664(uVar4);
  local_40 = param_1[2];
  (*pcVar2)(iVar1 + lVar3,param_4,*param_5,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d44098 FUN_148d44098 body=287 status=ok
// SIG undefined FUN_148d44098(void)

undefined4 * FUN_148d44098(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148d441b8(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_148d4429e(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148d42502(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d441b8 FUN_148d441b8 body=230 status=ok
// SIG undefined FUN_148d441b8(void)

int * FUN_148d441b8(longlong *param_1,int *param_2)

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



// FUNCTION 148d4429e FUN_148d4429e body=128 status=ok
// SIG undefined FUN_148d4429e(void)

undefined8 FUN_148d4429e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148d4431e(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 148d4431e FUN_148d4431e body=114 status=ok
// SIG undefined FUN_148d4431e(void)

void FUN_148d4431e(longlong *param_1,int param_2)

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



// FUNCTION 148d44390 FUN_148d44390 body=376 status=ok
// SIG undefined FUN_148d44390(void)

longlong * FUN_148d44390(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar5 = (undefined8 *)*param_1;
  plVar11 = *(longlong **)(param_2 + 0x10);
  bVar6 = true;
  if (plVar11 == (longlong *)0x0) {
LAB_148d44412:
    uVar12 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar11[1];
    do {
      if (iVar9 == 0) goto LAB_148d44412;
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar13 = iVar9 == iVar7;
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    bVar6 = false;
  }
  *puVar5 = &PTR_LAB_14b974220;
  FUN_140f746b6(puVar5 + 1,param_4);
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  puVar5[4] = lVar10;
  *puVar5 = &PTR_FUN_14b9741b0;
  puVar5[5] = uVar12;
  puVar5[6] = plVar11;
  if (bVar6) {
    puVar5[7] = uVar4;
    *(undefined4 *)(puVar5 + 8) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 8) = uVar3;
    puVar5[7] = uVar4;
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  return param_1;
}



// FUNCTION 148d44508 FUN_148d44508 body=64 status=ok
// SIG undefined FUN_148d44508(void)

undefined8 * FUN_148d44508(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9741b0;
  plVar2 = (longlong *)param_1[6];
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



// FUNCTION 148d4454c FUN_148d4454c body=81 status=ok
// SIG undefined FUN_148d4454c(void)

undefined8 FUN_148d4454c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
    uVar6 = *(undefined8 *)(param_1 + 0x28);
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



// FUNCTION 148d445a4 FUN_148d445a4 body=89 status=ok
// SIG undefined FUN_148d445a4(void)

bool FUN_148d445a4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d445ef;
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
    lVar6 = *(longlong *)(param_1 + 0x28);
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
LAB_148d445ef:
  return lVar6 == param_2;
}



// FUNCTION 148d44626 FUN_148d44626 body=131 status=ok
// SIG undefined FUN_148d44626(void)

void FUN_148d44626(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b974220;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b9741b0;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d446aa FUN_148d446aa body=131 status=ok
// SIG undefined FUN_148d446aa(void)

void FUN_148d446aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b974220;
  FUN_140f746b6(puVar1 + 1,param_1 + 8);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b9741b0;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 148d4472e FUN_148d4472e body=169 status=ok
// SIG undefined FUN_148d4472e(void)

void FUN_148d4472e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b974220;
  FUN_140f746b6(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9741b0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar4;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar5;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar6;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d447c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


