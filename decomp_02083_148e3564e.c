// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148e3564e FUN_148e3564e body=29 status=ok
// SIG undefined FUN_148e3564e(void)

bool FUN_148e3564e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e3566c FUN_148e3566c body=101 status=ok
// SIG undefined FUN_148e3566c(void)

void FUN_148e3566c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ab0b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e356d2 FUN_148e356d2 body=101 status=ok
// SIG undefined FUN_148e356d2(void)

void FUN_148e356d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ab0b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e35738 FUN_148e35738 body=134 status=ok
// SIG undefined FUN_148e35738(void)

void FUN_148e35738(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8e9b60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ab0b0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e357af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e357be FUN_148e357be body=52 status=ok
// SIG undefined FUN_148e357be(void)

void FUN_148e357be(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e357ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e357f2 FUN_148e357f2 body=31 status=ok
// SIG undefined FUN_148e357f2(void)

undefined8 FUN_148e357f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3582c FUN_148e3582c body=101 status=ok
// SIG undefined FUN_148e3582c(void)

void FUN_148e3582c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4332c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ab120;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e35892 FUN_148e35892 body=101 status=ok
// SIG undefined FUN_148e35892(void)

void FUN_148e35892(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4332c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ab120;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e358f8 FUN_148e358f8 body=134 status=ok
// SIG undefined FUN_148e358f8(void)

void FUN_148e358f8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4332c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ab120;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3596f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3597e FUN_148e3597e body=42 status=ok
// SIG undefined FUN_148e3597e(void)

void FUN_148e3597e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e359a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e359a8 FUN_148e359a8 body=31 status=ok
// SIG undefined FUN_148e359a8(void)

undefined8 FUN_148e359a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e359e2 FUN_148e359e2 body=29 status=ok
// SIG undefined FUN_148e359e2(void)

bool FUN_148e359e2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e35a00 FUN_148e35a00 body=26 status=ok
// SIG undefined FUN_148e35a00(void)

bool FUN_148e35a00(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e35a1a FUN_148e35a1a body=101 status=ok
// SIG undefined FUN_148e35a1a(void)

void FUN_148e35a1a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ab190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e35a80 FUN_148e35a80 body=134 status=ok
// SIG undefined FUN_148e35a80(void)

void FUN_148e35a80(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ab190;
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
                    /* WARNING: Could not recover jumptable at 0x000148e35af7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e35b06 FUN_148e35b06 body=62 status=ok
// SIG undefined FUN_148e35b06(void)

void FUN_148e35b06(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e35b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e35b44 FUN_148e35b44 body=31 status=ok
// SIG undefined FUN_148e35b44(void)

undefined8 FUN_148e35b44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e35b7e FUN_148e35b7e body=29 status=ok
// SIG undefined FUN_148e35b7e(void)

bool FUN_148e35b7e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e35b9c FUN_148e35b9c body=26 status=ok
// SIG undefined FUN_148e35b9c(void)

bool FUN_148e35b9c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e35bb6 FUN_148e35bb6 body=101 status=ok
// SIG undefined FUN_148e35bb6(void)

void FUN_148e35bb6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ab200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e35c1c FUN_148e35c1c body=101 status=ok
// SIG undefined FUN_148e35c1c(void)

void FUN_148e35c1c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ab200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e35c82 FUN_148e35c82 body=134 status=ok
// SIG undefined FUN_148e35c82(void)

void FUN_148e35c82(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ab200;
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
                    /* WARNING: Could not recover jumptable at 0x000148e35cf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e35d08 FUN_148e35d08 body=39 status=ok
// SIG undefined FUN_148e35d08(void)

void FUN_148e35d08(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e35d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e35d4a FUN_148e35d4a body=29 status=ok
// SIG undefined FUN_148e35d4a(void)

bool FUN_148e35d4a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e35d68 FUN_148e35d68 body=26 status=ok
// SIG undefined FUN_148e35d68(void)

bool FUN_148e35d68(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e35d82 FUN_148e35d82 body=24 status=ok
// SIG undefined FUN_148e35d82(void)

bool FUN_148e35d82(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e35d9a FUN_148e35d9a body=101 status=ok
// SIG undefined FUN_148e35d9a(void)

void FUN_148e35d9a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ab270;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e35e00 FUN_148e35e00 body=134 status=ok
// SIG undefined FUN_148e35e00(void)

void FUN_148e35e00(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ab270;
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
                    /* WARNING: Could not recover jumptable at 0x000148e35e77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e35e86 FUN_148e35e86 body=44 status=ok
// SIG undefined FUN_148e35e86(void)

void FUN_148e35e86(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e35eaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e35eb2 FUN_148e35eb2 body=31 status=ok
// SIG undefined FUN_148e35eb2(void)

undefined8 FUN_148e35eb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e35eec FUN_148e35eec body=101 status=ok
// SIG undefined FUN_148e35eec(void)

void FUN_148e35eec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b1f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ab2e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e35f52 FUN_148e35f52 body=101 status=ok
// SIG undefined FUN_148e35f52(void)

void FUN_148e35f52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b1f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ab2e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e35fb8 FUN_148e35fb8 body=134 status=ok
// SIG undefined FUN_148e35fb8(void)

void FUN_148e35fb8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b1f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ab2e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3602f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3603e FUN_148e3603e body=52 status=ok
// SIG undefined FUN_148e3603e(void)

void FUN_148e3603e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3606f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e36072 FUN_148e36072 body=162 status=ok
// SIG undefined FUN_148e36072(void)

void FUN_148e36072(longlong *param_1,undefined8 param_2)

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
        goto LAB_148e360ff;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148e360ff:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148e36114 FUN_148e36114 body=112 status=ok
// SIG undefined FUN_148e36114(void)

void FUN_148e36114(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xb0)) {
      uVar2 = uVar1 / 0xb0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb0,8);
  }
  return;
}



// FUNCTION 148e36184 FUN_148e36184 body=31 status=ok
// SIG undefined FUN_148e36184(void)

undefined8 FUN_148e36184(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e361be FUN_148e361be body=101 status=ok
// SIG undefined FUN_148e361be(void)

void FUN_148e361be(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ab350;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e36224 FUN_148e36224 body=101 status=ok
// SIG undefined FUN_148e36224(void)

void FUN_148e36224(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ab350;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3628a FUN_148e3628a body=134 status=ok
// SIG undefined FUN_148e3628a(void)

void FUN_148e3628a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ab350;
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
                    /* WARNING: Could not recover jumptable at 0x000148e36301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e36310 FUN_148e36310 body=52 status=ok
// SIG undefined FUN_148e36310(void)

void FUN_148e36310(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e36341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e36344 FUN_148e36344 body=31 status=ok
// SIG undefined FUN_148e36344(void)

undefined8 FUN_148e36344(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3637e FUN_148e3637e body=101 status=ok
// SIG undefined FUN_148e3637e(void)

void FUN_148e3637e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ab3c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e363e4 FUN_148e363e4 body=101 status=ok
// SIG undefined FUN_148e363e4(void)

void FUN_148e363e4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ab3c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3644a FUN_148e3644a body=134 status=ok
// SIG undefined FUN_148e3644a(void)

void FUN_148e3644a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ab3c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e364c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e364d0 FUN_148e364d0 body=39 status=ok
// SIG undefined FUN_148e364d0(void)

void FUN_148e364d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e364f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e36512 FUN_148e36512 body=29 status=ok
// SIG undefined FUN_148e36512(void)

bool FUN_148e36512(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e36530 FUN_148e36530 body=26 status=ok
// SIG undefined FUN_148e36530(void)

bool FUN_148e36530(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e3654a FUN_148e3654a body=101 status=ok
// SIG undefined FUN_148e3654a(void)

void FUN_148e3654a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ab430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e365b0 FUN_148e365b0 body=134 status=ok
// SIG undefined FUN_148e365b0(void)

void FUN_148e365b0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ab430;
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
                    /* WARNING: Could not recover jumptable at 0x000148e36627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e36636 FUN_148e36636 body=68 status=ok
// SIG undefined FUN_148e36636(void)

void FUN_148e36636(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e36677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e3667a FUN_148e3667a body=31 status=ok
// SIG undefined FUN_148e3667a(void)

undefined8 FUN_148e3667a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e366b4 FUN_148e366b4 body=101 status=ok
// SIG undefined FUN_148e366b4(void)

void FUN_148e366b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96eba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ab4a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3671a FUN_148e3671a body=101 status=ok
// SIG undefined FUN_148e3671a(void)

void FUN_148e3671a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96eba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ab4a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e36780 FUN_148e36780 body=134 status=ok
// SIG undefined FUN_148e36780(void)

void FUN_148e36780(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b96eba0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ab4a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e367f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e36806 FUN_148e36806 body=44 status=ok
// SIG undefined FUN_148e36806(void)

void FUN_148e36806(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3682f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e36832 FUN_148e36832 body=156 status=ok
// SIG undefined FUN_148e36832(void)

bool FUN_148e36832(longlong param_1,undefined8 param_2)

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



// FUNCTION 148e368ea FUN_148e368ea body=29 status=ok
// SIG undefined FUN_148e368ea(void)

bool FUN_148e368ea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e36908 FUN_148e36908 body=26 status=ok
// SIG undefined FUN_148e36908(void)

bool FUN_148e36908(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e36922 FUN_148e36922 body=24 status=ok
// SIG undefined FUN_148e36922(void)

bool FUN_148e36922(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e3693a FUN_148e3693a body=101 status=ok
// SIG undefined FUN_148e3693a(void)

void FUN_148e3693a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ab510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e369a0 FUN_148e369a0 body=134 status=ok
// SIG undefined FUN_148e369a0(void)

void FUN_148e369a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ab510;
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
                    /* WARNING: Could not recover jumptable at 0x000148e36a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e36a26 FUN_148e36a26 body=44 status=ok
// SIG undefined FUN_148e36a26(void)

void FUN_148e36a26(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e36a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e36a52 FUN_148e36a52 body=24 status=ok
// SIG undefined FUN_148e36a52(void)

void FUN_148e36a52(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e36a66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148e36a6a FUN_148e36a6a body=29 status=ok
// SIG undefined FUN_148e36a6a(void)

undefined8 FUN_148e36a6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e36a88 FUN_148e36a88 body=24 status=ok
// SIG undefined FUN_148e36a88(void)

void FUN_148e36a88(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e36a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148e36aa0 FUN_148e36aa0 body=29 status=ok
// SIG undefined FUN_148e36aa0(void)

undefined8 FUN_148e36aa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e36abe FUN_148e36abe body=182 status=ok
// SIG undefined FUN_148e36abe(void)

undefined8 * FUN_148e36abe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
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
  param_1[2] = param_2[2];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 148e36b74 FUN_148e36b74 body=132 status=ok
// SIG undefined FUN_148e36b74(void)

void FUN_148e36b74(longlong param_1,int param_2)

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



// FUNCTION 148e36bfa FUN_148e36bfa body=24 status=ok
// SIG undefined FUN_148e36bfa(void)

void FUN_148e36bfa(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e36c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148e36c12 FUN_148e36c12 body=29 status=ok
// SIG undefined FUN_148e36c12(void)

undefined8 FUN_148e36c12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e36c30 FUN_148e36c30 body=29 status=ok
// SIG undefined FUN_148e36c30(void)

undefined8 FUN_148e36c30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e36c68 FUN_148e36c68 body=29 status=ok
// SIG undefined FUN_148e36c68(void)

bool FUN_148e36c68(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e36c86 FUN_148e36c86 body=26 status=ok
// SIG undefined FUN_148e36c86(void)

bool FUN_148e36c86(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e36ca0 FUN_148e36ca0 body=24 status=ok
// SIG undefined FUN_148e36ca0(void)

bool FUN_148e36ca0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e36cc4 FUN_148e36cc4 body=101 status=ok
// SIG undefined FUN_148e36cc4(void)

void FUN_148e36cc4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9abc80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ab620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e36d2a FUN_148e36d2a body=101 status=ok
// SIG undefined FUN_148e36d2a(void)

void FUN_148e36d2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9abc80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ab620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e36d90 FUN_148e36d90 body=134 status=ok
// SIG undefined FUN_148e36d90(void)

void FUN_148e36d90(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9abc80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ab620;
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
                    /* WARNING: Could not recover jumptable at 0x000148e36e07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e36e16 FUN_148e36e16 body=52 status=ok
// SIG undefined FUN_148e36e16(void)

void FUN_148e36e16(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e36e47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e36e4a FUN_148e36e4a body=167 status=ok
// SIG undefined FUN_148e36e4a(void)

bool FUN_148e36e4a(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 148e36ef4 FUN_148e36ef4 body=132 status=ok
// SIG undefined FUN_148e36ef4(void)

void FUN_148e36ef4(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x38) == param_2) {
          FUN_148e36f78(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x38 + *param_1 + 0x30);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 148e36f78 FUN_148e36f78 body=125 status=ok
// SIG undefined FUN_148e36f78(void)

void FUN_148e36f78(longlong *param_1,int param_2)

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
  if (*(longlong *)(*param_1 + 0x20 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_148e36ff6(param_1,param_2);
  return;
}



// FUNCTION 148e36ff6 FUN_148e36ff6 body=116 status=ok
// SIG undefined FUN_148e36ff6(void)

void FUN_148e36ff6(longlong *param_1,int param_2)

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



// FUNCTION 148e3706a FUN_148e3706a body=114 status=ok
// SIG undefined FUN_148e3706a(void)

void FUN_148e3706a(longlong *param_1,int param_2)

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



// FUNCTION 148e370de FUN_148e370de body=57 status=ok
// SIG undefined FUN_148e370de(void)

void FUN_148e370de(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_1459ddc4e();
  iVar1 = FUN_1459ddd36(param_1,param_2);
  if (iVar1 != -1) {
    return;
  }
  FUN_148e37118(param_1,param_2);
  return;
}



// FUNCTION 148e37118 FUN_148e37118 body=162 status=ok
// SIG undefined FUN_148e37118(void)

undefined4 FUN_148e37118(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar4 = *(longlong *)(local_38 + 0x160);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x20));
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
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
  FUN_148e37632(lVar4,param_2);
  uVar3 = *param_2;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x20));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e371bc FUN_148e371bc body=759 status=ok
// SIG undefined FUN_148e371bc(void)

void FUN_148e371bc(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong *local_190;
  longlong *local_188;
  undefined4 local_180;
  longlong *local_178 [2];
  undefined2 *local_168;
  int local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined4 local_148;
  undefined1 local_140 [32];
  undefined1 local_120 [16];
  undefined1 local_110 [32];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined1 local_e2;
  undefined1 local_9c;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined4 *local_80;
  undefined1 *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_60 [4];
  longlong *local_50;
  longlong local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_145be44b4(local_158);
  FUN_140056680(&local_168,L"delete_character_confirm_db");
  puVar5 = local_168;
  if (local_160 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_70,puVar5,1);
  FUN_1446dcdd4(local_60,&local_70);
  if (DAT_14cbe4310 == 0) {
    local_98 = 0;
  }
  else {
    local_98 = FUN_144837462(DAT_14cbe4310,local_60);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  lVar4 = local_98;
  plVar1 = local_150;
  if (local_98 != 0) {
    plVar3 = *(longlong **)(local_98 + 0x28);
    if (local_150 != plVar3) {
      local_150 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    local_148 = *(undefined4 *)(lVar4 + 0x30);
    local_188 = (longlong *)*param_3;
    if (local_188 != (longlong *)0x0) {
      (**(code **)(*local_188 + 8))();
    }
    local_180 = (undefined4)param_3[1];
    FUN_14023409e(&local_198,local_98 + 0x18,1);
    local_60[0] = 4;
    FUN_14023423e(&local_50,&local_188);
    local_78 = local_40;
    local_80 = local_60;
    FUN_14010d304(&local_70);
    local_90 = local_198;
    local_88 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_190 + 1) = (int)local_190[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_178,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_190 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar2 = (int *)((longlong)local_190 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_190 + 0x10))(local_190);
        }
      }
    }
    if (local_188 != (longlong *)0x0) {
      (**(code **)(*local_188 + 0x10))();
    }
    FUN_140008f88(local_140,local_178);
    if (local_178[0] != (longlong *)0x0) {
      (**(code **)(*local_178[0] + 0x10))();
    }
    FUN_1459de186(local_110,param_2);
    local_f0 = *(undefined8 *)(local_98 + 0x70);
    local_e8 = *(undefined4 *)(local_98 + 0x78);
    local_e4 = *(undefined1 *)(local_98 + 0xac);
    local_e2 = *(undefined1 *)(local_98 + 0x7c);
    local_9c = *(undefined1 *)(local_98 + 0xae);
    FUN_145be4752(local_120,local_98 + 0x60);
  }
  FUN_1459dda8e(param_1,local_158);
  if (local_168 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1459ddea2(local_158);
  if ((local_38 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e374b4 FUN_148e374b4 body=380 status=ok
// SIG undefined FUN_148e374b4(void)

longlong FUN_148e374b4(undefined8 param_1,int param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402815f4(param_1,&local_58);
  plVar4 = *(longlong **)(local_58 + 0x160);
  AcquireSRWLockExclusive((PSRWLOCK)(plVar4 + 4));
  *(int *)(plVar4 + 3) = (int)plVar4[3] + 1;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  uVar3 = *(uint *)(plVar4 + 1);
  lVar10 = 0;
  if (0 < (longlong)(int)uVar3) {
    lVar8 = -0x48;
    lVar9 = 0x88;
    uVar7 = 0;
    do {
      if (*(int *)(*plVar4 + -0x88 + lVar9) == param_2) {
        if (uVar7 < uVar3) {
          *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
          *(undefined1 *)(*plVar4 + 0x10 + lVar9) = 1;
          *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
          lVar10 = *plVar4;
          plVar5 = (longlong *)*param_3;
          plVar6 = *(longlong **)(lVar10 + 0x18 + lVar9);
          if (plVar6 != plVar5) {
            *(longlong **)(lVar10 + 0x18 + lVar9) = plVar5;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 8))();
            }
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          *(int *)(lVar10 + 0x20 + lVar9) = (int)param_3[1];
          *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
          FUN_144a787a6(lVar9 + *plVar4,param_4);
          *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
          lVar10 = *plVar4 - lVar8;
        }
        else {
          lVar10 = 0;
        }
        break;
      }
      lVar8 = lVar8 + -200;
      uVar7 = uVar7 + 1;
      lVar2 = (longlong)(int)uVar3 * -200 + lVar9;
      lVar9 = lVar9 + 200;
    } while (lVar2 != -0x40);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar4 + 4));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e37632 FUN_148e37632 body=72 status=ok
// SIG undefined FUN_148e37632(void)

void FUN_148e37632(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1459ddbb8(param_1,iVar1);
  }
  FUN_1459ddf44((longlong)iVar1 * 200 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 148e3768c FUN_148e3768c body=281 status=ok
// SIG undefined FUN_148e3768c(void)

bool FUN_148e3768c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined8 local_e8;
  undefined **local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 *local_b8;
  longlong *local_a8 [2];
  longlong local_98 [4];
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140c83f8c(param_1,&local_78,param_2);
  puVar1 = local_78;
  local_e8 = 0;
  local_d8 = &PTR_FUN_14b9ad5a0;
  local_d0 = local_78;
  local_c8 = local_70;
  local_f8 = &LAB_148e3c4f6;
  local_b8 = &LAB_148e3c4f6;
  local_a8[0] = (longlong *)0x0;
  FUN_148e3c568(&local_d8,local_a8);
  local_78 = local_b8;
  local_68[0] = 0;
  if (local_b8 != (undefined1 *)0x0) {
    plVar3 = local_a8[0];
    if (local_a8[0] == (longlong *)0x0) {
      plVar3 = local_98;
    }
    (**(code **)*plVar3)(plVar3,local_68);
  }
  lVar2 = FUN_1407155ac(param_1,&local_78);
  if (local_b8 != (undefined1 *)0x0) {
    plVar3 = local_a8[0];
    if (local_a8[0] == (longlong *)0x0) {
      plVar3 = local_98;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (puVar1 != (undefined1 *)0x0) {
    FUN_1400020a8(puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e377a6 FUN_148e377a6 body=346 status=ok
// SIG undefined FUN_148e377a6(void)

void FUN_148e377a6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined1 auStack_98 [40];
  longlong local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  longlong *local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) goto LAB_148e377ee;
  lVar3 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_148e377ee;
  lVar3 = param_2[1];
  local_70 = lVar5;
  if (lVar3 == 0) {
    uVar4 = FUN_140b7bb2c();
    lVar3 = FUN_14477b664(uVar4);
    param_2[1] = lVar3;
  }
  if (param_2[2] == 0) {
    if ((lVar3 == 0) || (*param_2 == 0)) goto LAB_148e377ee;
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,param_2);
        param_2[2] = lVar5;
        if (lVar5 == 0) goto LAB_148e377ee;
        goto LAB_148e37889;
      }
    }
    param_2[2] = 0;
  }
  else {
LAB_148e37889:
    puVar6 = (undefined8 *)FUN_14663d938(param_1);
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b9ad780;
    local_38 = &local_70;
    local_68[0] = FUN_144276ec6;
    local_40 = param_2;
    local_30 = param_1;
    FUN_148e37b98(*puVar6,local_68);
    if (local_68[0] != (code *)0x0) {
      pppuVar7 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar7 = &local_48;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  }
LAB_148e377ee:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e37902 FUN_148e37902 body=660 status=ok
// SIG undefined FUN_148e37902(void)

void FUN_148e37902(undefined8 param_1,undefined8 param_2,undefined8 *param_3,char param_4,
                  int param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 *local_80;
  byte local_72;
  char local_71;
  longlong local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_72 = param_4 == '\x03';
  local_71 = param_4;
  plVar9 = (longlong *)FUN_14663d938();
  plVar9 = (longlong *)*plVar9;
  AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 0x10));
  *(int *)(plVar9 + 0xf) = (int)plVar9[0xf] + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar9 + 0x10));
  cVar2 = local_71;
  lVar1 = *plVar9;
  *(int *)(plVar9 + 2) = (int)plVar9[2] + 2;
  if ((longlong)(int)plVar9[1] != 0) {
    local_72 = local_72 & param_5 == 1;
    local_68 = (longlong)(int)plVar9[1] * 0x110;
    local_70 = lVar1 + 200;
    lVar15 = 0;
    local_60 = param_3;
    do {
      puVar3 = local_60;
      lVar11 = *(longlong *)(lVar1 + 0xd0 + lVar15);
      if (lVar11 == 0) {
        uVar10 = FUN_140b7bb2c();
        lVar11 = FUN_14477b664(uVar10);
        *(longlong *)(lVar1 + 0xd0 + lVar15) = lVar11;
      }
      lVar13 = *(longlong *)(lVar1 + 0xd8 + lVar15);
      if (lVar13 == 0) {
        if (*(longlong *)(lVar1 + 200 + lVar15) == 0) {
          lVar13 = 0;
          goto LAB_148e379d4;
        }
        if (lVar11 != 0) {
          plVar9 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar9 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar5 == '\0')) {
            lVar13 = 0;
          }
          else {
            lVar11 = local_70 + lVar15;
            uVar10 = (**(code **)(*plVar9 + 0x110))(plVar9);
            lVar13 = FUN_144aff482(uVar10,lVar11);
          }
          *(longlong *)(lVar1 + 0xd8 + lVar15) = lVar13;
          lVar11 = *(longlong *)(lVar1 + 0xd0 + lVar15);
          goto LAB_148e379d4;
        }
        lVar13 = 0;
LAB_148e379d9:
        uVar10 = FUN_140b7bb2c();
        uVar10 = FUN_14477b664(uVar10);
        *(undefined8 *)(lVar1 + 0xd0 + lVar15) = uVar10;
      }
      else {
LAB_148e379d4:
        if (lVar11 == 0) goto LAB_148e379d9;
      }
      lVar11 = puVar3[1];
      if (lVar11 == 0) {
        lVar11 = FUN_140b7bb2c();
      }
      uVar10 = *puVar3;
      uVar12 = FUN_14477b664(lVar11);
      local_50 = uVar10;
      uVar7 = FUN_144a7891a(uVar12);
      local_58 = *(undefined8 *)(lVar1 + 200 + lVar15);
      uVar10 = *(undefined8 *)(lVar1 + 0xd0 + lVar15);
      uVar8 = FUN_144a7891a(uVar10);
      local_80 = &local_50;
      local_88 = uVar12;
      bVar4 = FUN_144a789b8(uVar8,uVar10,&local_58,uVar7);
      bVar6 = 0;
      cVar5 = cVar2;
      if (bVar4 == 0) {
        cVar5 = '\0';
      }
      *(char *)(lVar1 + 0xb8 + lVar15) = cVar5;
      iVar14 = 0;
      if (bVar4 != 0) {
        iVar14 = param_5;
      }
      *(int *)(lVar1 + 0xbc + lVar15) = iVar14;
      bVar4 = *(byte *)(lVar1 + 0xc0 + lVar15) & 0xef | (cVar2 == '\x03' & bVar4) << 4;
      *(byte *)(lVar1 + 0xc0 + lVar15) = bVar4;
      if (lVar13 != 0 && local_72 == 0) {
        cVar5 = FUN_144a7c5f6(lVar13 + 0xb8);
        bVar6 = cVar5 << 6;
        bVar4 = *(byte *)(lVar1 + 0xc0 + lVar15);
      }
      *(byte *)(lVar1 + 0xc0 + lVar15) = bVar4 & 0xbf | bVar6;
      lVar15 = lVar15 + 0x110;
    } while (local_68 != lVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e37b98 FUN_148e37b98 body=110 status=ok
// SIG undefined FUN_148e37b98(void)

void FUN_148e37b98(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*param_2 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x80));
    pcVar1 = (code *)*param_2;
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    cVar2 = (*pcVar1)(uVar3,param_1);
    if (cVar2 != '\0') {
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000148e37bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x80));
    return;
  }
  return;
}



// FUNCTION 148e37c06 FUN_148e37c06 body=194 status=ok
// SIG undefined FUN_148e37c06(void)

void FUN_148e37c06(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_140f566ec();
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      if (lVar2 != 0) {
        lVar3 = FUN_140f56a62(param_1);
        if (lVar3 != 0) {
          lVar4 = FUN_1401cd362(lVar3);
          if (lVar4 != 0) {
            local_34 = 0xffffffff;
            local_30 = *(undefined8 *)(param_2 + 0x10);
            local_60 = 0;
            local_50 = 0;
            uStack_48 = 0;
            local_40 = 0;
            local_58 = lVar4;
            FUN_143e0ac34(lVar2);
            FUN_1410a652e(param_1,lVar2,lVar3);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e37ccc FUN_148e37ccc body=202 status=ok
// SIG undefined FUN_148e37ccc(void)

void FUN_148e37ccc(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x50;
  cVar2 = FUN_144729dda(lVar4);
  if (cVar2 != '\0') {
    bVar1 = *(byte *)(param_1 + 0x59);
    lVar3 = FUN_14479d2ce(lVar4);
    *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(lVar3 + 0xbd8);
    FUN_140cf39ba(param_1);
    cVar2 = FUN_140a2d176(param_1);
    if (cVar2 != '\0') {
      lVar3 = FUN_14479d2ce(lVar4);
      if ((int)(uint)bVar1 < *(int *)(lVar3 + 0xbf0)) {
        lVar3 = *(longlong *)
                 (*(longlong *)(lVar3 + 0xbe8) + 0x40 +
                 (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      }
      else {
        lVar3 = 0;
      }
      lVar4 = FUN_14479d2ce(lVar4);
      bVar1 = *(byte *)(param_1 + 0x59);
      if ((int)(uint)bVar1 < *(int *)(lVar4 + 0xbf0)) {
        lVar4 = *(longlong *)
                 (*(longlong *)(lVar4 + 0xbe8) + 0x40 +
                 (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      }
      else {
        lVar4 = 0;
      }
      if (lVar4 != lVar3) {
        FUN_140a2cc82(param_1);
        FUN_140a2dc06(param_1);
        FUN_140a2ce32(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e37da2 FUN_148e37da2 body=266 status=ok
// SIG undefined FUN_148e37da2(void)

undefined8 FUN_148e37da2(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined1 local_1a;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x1f0), lVar3 != 0)) {
    lVar4 = FUN_1403ca142();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = FUN_145a420f6();
      if (lVar4 == 0) {
        local_19 = 0;
      }
      else {
        local_19 = *(byte *)(lVar3 + 0x4b1) ^ 1;
      }
      local_1a = lVar4 != 0;
      FUN_145d74af4(param_1,&local_1a,lVar4);
    }
  }
  if (((param_1[0xc] != 0) && (param_1[0xd] != 0)) && (0 < *(int *)(param_1[0xd] + 8))) {
    FUN_1401cb356();
    local_30 = param_1[0xc];
    local_28 = param_1[0xd];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_30);
    plVar2 = (longlong *)param_1[0xd];
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e37eae FUN_148e37eae body=158 status=ok
// SIG undefined FUN_148e37eae(void)

void FUN_148e37eae(undefined8 param_1,undefined1 param_2)

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
  lVar3 = *(longlong *)(local_38 + 0x3b0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xd8));
  *(int *)(lVar3 + 0xd0) = *(int *)(lVar3 + 0xd0) + 1;
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
  *(undefined1 *)(lVar3 + 0xb0) = param_2;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xd8));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e37f4e FUN_148e37f4e body=158 status=ok
// SIG undefined FUN_148e37f4e(void)

void FUN_148e37f4e(undefined8 param_1,undefined1 param_2)

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
  lVar3 = *(longlong *)(local_38 + 0x3b0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xd8));
  *(int *)(lVar3 + 0xd0) = *(int *)(lVar3 + 0xd0) + 1;
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
  *(undefined1 *)(lVar3 + 0xb1) = param_2;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xd8));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e3802a FUN_148e3802a body=157 status=ok
// SIG undefined FUN_148e3802a(void)

int * FUN_148e3802a(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 *local_40;
  undefined8 local_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = &local_2c;
  local_2c = 0;
  local_48 = param_7;
  local_50 = param_6;
  local_58 = param_5;
  FUN_1458d9982(param_1,&local_24);
  if (local_24 != -1) {
    FUN_1412099d2(param_1,&DAT_14cbd63c0);
  }
  *param_2 = local_24;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e380c8 FUN_148e380c8 body=142 status=ok
// SIG undefined FUN_148e380c8(void)

int * FUN_148e380c8(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 *local_38;
  undefined8 local_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_2c;
  local_2c = 0;
  local_40 = param_6;
  local_48 = param_5;
  FUN_146211f9c(param_1,&local_24);
  if (local_24 != -1) {
    FUN_1412099d2(param_1,&DAT_14cbd63c0);
  }
  *param_2 = local_24;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e38158 FUN_148e38158 body=98 status=ok
// SIG undefined FUN_148e38158(void)

int * FUN_148e38158(undefined8 param_1,int *param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14583ef20(param_1,&local_24);
  if (local_24 != -1) {
    FUN_1412099d2(param_1,&DAT_14cbd63c0);
  }
  *param_2 = local_24;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e381be FUN_148e381be body=254 status=ok
// SIG undefined FUN_148e381be(void)

undefined8
FUN_148e381be(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9a7080;
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
  *local_48 = &PTR_FUN_14b9aeb80;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14127eb6a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e382be FUN_148e382be body=835 status=ok
// SIG undefined FUN_148e382be(void)

void FUN_148e382be(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK pRVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined2 *puVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140d128b6(param_1,&local_58);
  lVar8 = local_58;
  pRVar3 = (PSRWLOCK)(local_58 + 0x638);
  AcquireSRWLockShared(pRVar3);
  iVar10 = (int)param_2[1];
  iVar6 = *(int *)(lVar8 + 0x1f8);
  if (iVar10 == iVar6) {
    bVar14 = true;
    if (1 < iVar10) {
      lVar11 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*param_2 + lVar11);
        uVar9 = (uint)uVar4;
        uVar5 = *(ushort *)(*(longlong *)(lVar8 + 0x1f0) + lVar11);
        uVar13 = (uint)uVar5;
        if (uVar4 != uVar5) {
          if ((uVar5 | uVar4) < 0x80) {
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_148e38346;
          }
          iVar10 = uVar9 - uVar13;
          goto LAB_148e384b0;
        }
        if (uVar4 == 0) break;
LAB_148e38346:
        lVar11 = lVar11 + 2;
      }
      iVar10 = 0;
LAB_148e384b0:
      bVar14 = iVar10 == 0;
    }
  }
  else {
    bVar14 = iVar6 + iVar10 == 1;
  }
  ReleaseSRWLockShared(pRVar3);
  plVar7 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140bb46a8(param_1,&local_58);
  lVar8 = local_58;
  pRVar3 = (PSRWLOCK)(local_58 + 0x638);
  AcquireSRWLockShared(pRVar3);
  iVar10 = (int)param_2[1];
  iVar6 = *(int *)(lVar8 + 0x1f8);
  if (iVar10 == iVar6) {
    bVar15 = true;
    if (1 < iVar10) {
      lVar11 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*param_2 + lVar11);
        uVar9 = (uint)uVar4;
        uVar5 = *(ushort *)(*(longlong *)(lVar8 + 0x1f0) + lVar11);
        uVar13 = (uint)uVar5;
        if (uVar4 != uVar5) {
          if ((uVar5 | uVar4) < 0x80) {
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_148e38415;
          }
          iVar10 = uVar9 - uVar13;
          goto LAB_148e384b9;
        }
        if (uVar4 == 0) break;
LAB_148e38415:
        lVar11 = lVar11 + 2;
      }
      iVar10 = 0;
LAB_148e384b9:
      bVar15 = iVar10 == 0;
    }
  }
  else {
    bVar15 = iVar6 + iVar10 == 1;
  }
  ReleaseSRWLockShared(pRVar3);
  plVar7 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((bool)(bVar14 | bVar15)) {
    if (param_3 == 0) {
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
    }
    else {
      local_68 = (undefined2 *)0x0;
      plStack_60 = (longlong *)0x0;
      FUN_1401031ac(param_3,0,&local_68);
      puVar12 = local_68;
      if ((int)plStack_60 == 0) {
        puVar12 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_58,L"TextureRenderTarget2D\'%s\'",puVar12);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (bVar14) {
      FUN_140d128b6(param_1,&local_68);
      puVar12 = local_68;
      pRVar3 = (PSRWLOCK)(local_68 + 0x31c);
      AcquireSRWLockExclusive(pRVar3);
      piVar2 = (int *)(puVar12 + 0x318);
      *piVar2 = *piVar2 + 1;
      FUN_1449a0272(puVar12 + 0xec,&local_58);
      ReleaseSRWLockExclusive(pRVar3);
      plVar7 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    if (bVar15) {
      FUN_140bb46a8(param_1,&local_68);
      puVar12 = local_68;
      pRVar3 = (PSRWLOCK)(local_68 + 0x31c);
      AcquireSRWLockExclusive(pRVar3);
      piVar2 = (int *)(puVar12 + 0x318);
      *piVar2 = *piVar2 + 1;
      FUN_1449a0272(puVar12 + 0xec,&local_58);
      ReleaseSRWLockExclusive(pRVar3);
      plVar7 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e38602 FUN_148e38602 body=254 status=ok
// SIG undefined FUN_148e38602(void)

undefined8
FUN_148e38602(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9aebf0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e38702 FUN_148e38702 body=327 status=ok
// SIG undefined FUN_148e38702(void)

void FUN_148e38702(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  PSRWLOCK SRWLock;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbd6bb0 == '\x01') {
    lVar5 = (**(code **)(*param_1 + 0x180))();
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
      lVar5 = FUN_1400d6ce6();
      if (lVar5 != 0) {
        FUN_140d128b6(param_1,&local_40);
        lVar4 = local_40;
        SRWLock = (PSRWLOCK)(local_40 + 0x638);
        AcquireSRWLockShared(SRWLock);
        FUN_140c3e4c2(lVar5,lVar4 + 0x1f0);
        ReleaseSRWLockShared(SRWLock);
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
        FUN_140bb46a8(param_1,&local_40);
        AcquireSRWLockShared((PSRWLOCK)(local_40 + 0x638));
        FUN_140c3e4c2(lVar5,local_40 + 0x1f0);
        ReleaseSRWLockShared((PSRWLOCK)(local_40 + 0x638));
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_38 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e3884a FUN_148e3884a body=666 status=ok
// SIG undefined FUN_148e3884a(void)

void FUN_148e3884a(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_148 [32];
  uint5 local_128;
  undefined3 uStack_123;
  longlong *plStack_120;
  longlong *local_110;
  longlong *plStack_108;
  undefined8 local_100;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_3 == 0 || param_2 == 0) goto LAB_148e38ad2;
  if (param_4 == '\0') {
    FUN_140bb44d4(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_148);
  }
  local_128 = (uint5)(uint)local_128;
  FUN_14434d12a(param_2,&local_110);
  FUN_1412e0010(param_1,&local_110,&local_128);
  FUN_140368b56(&local_110);
  FUN_140d128b6(param_1,&local_110);
  plVar7 = local_110;
  SRWLock = (PSRWLOCK)(local_110 + 199);
  AcquireSRWLockExclusive(SRWLock);
  plVar6 = plStack_108;
  *(int *)(plVar7 + 0xc6) = (int)plVar7[0xc6] + 1;
  if (plStack_108 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_108 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_108)(plStack_108);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  _local_128 = 0;
  plStack_120 = (longlong *)0x0;
  uVar8 = FUN_14573c602(param_2,param_3);
  FUN_145c56198(&local_110,uVar8,0,&local_128);
  uVar10 = FUN_1447a1f4a(&local_110);
  FUN_1449a0272(plVar7 + 0x96,uVar10);
  if (local_110 != (longlong *)0x0) {
    (**(code **)(*local_110 + 0x10))();
  }
  plVar6 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_120 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_148f08760(param_2,&local_110);
  *(longlong **)(param_1 + 0x50) = local_110;
  *(longlong **)(param_1 + 0x58) = plStack_108;
  *(undefined8 *)(param_1 + 0x60) = local_100;
  dVar3 = *(double *)(param_1 + 0x50);
  dVar4 = *(double *)(param_1 + 0x58);
  dVar5 = *(double *)(param_1 + 0x60);
  if ((((dVar3 != (double)plVar7[0x88]) || (NAN(dVar3) || NAN((double)plVar7[0x88]))) ||
      (dVar4 != (double)plVar7[0x89])) ||
     (((NAN(dVar4) || NAN((double)plVar7[0x89]) || (dVar5 != (double)plVar7[0x8a])) ||
      ((NAN(dVar5) || NAN((double)plVar7[0x8a]) || ((int)plVar7[0x8b] == 0)))))) {
    plVar7[0x88] = (longlong)dVar3;
    plVar7[0x89] = (longlong)dVar4;
    plVar7[0x8a] = (longlong)dVar5;
    *(int *)(plVar7 + 0x8b) = (int)plVar7[0x8b] + 1;
  }
  if ((char)plVar7[0x9b] == '\0') {
    iVar9 = *(int *)((longlong)plVar7 + 0x4dc) + 1;
LAB_148e38a87:
    *(undefined1 *)(plVar7 + 0x9b) = 1;
    *(int *)((longlong)plVar7 + 0x4dc) = iVar9;
  }
  else if (*(int *)((longlong)plVar7 + 0x4dc) == 0) {
    iVar9 = 1;
    goto LAB_148e38a87;
  }
  if ((char)plVar7[0x9d] == '\0') {
    iVar9 = *(int *)((longlong)plVar7 + 0x4ec) + 1;
LAB_148e38ab8:
    *(undefined1 *)(plVar7 + 0x9d) = 1;
    *(int *)((longlong)plVar7 + 0x4ec) = iVar9;
  }
  else if (*(int *)((longlong)plVar7 + 0x4ec) == 0) {
    iVar9 = 1;
    goto LAB_148e38ab8;
  }
  ReleaseSRWLockExclusive(SRWLock);
LAB_148e38ad2:
  if ((local_38 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e38afe FUN_148e38afe body=329 status=ok
// SIG undefined FUN_148e38afe(void)

void FUN_148e38afe(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58 [3];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_2[6] == 0) {
    local_68 = DAT_14cb8dd60;
    local_60 = DAT_14cb8dd68;
    FUN_1448075d0(local_58);
    lVar4 = param_2[1];
    iVar2 = (int)local_58[0];
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if ((int)lVar4 != iVar2) {
      if ((*param_2 != 0) && (*(int *)(*param_2 + 0x178) == 0)) {
        cVar3 = FUN_148e3949a(param_1);
        if (cVar3 != '\0') {
          lVar4 = FUN_1400f3ad8(param_1 + 0x44);
          if (lVar4 != 0) {
            lVar5 = FUN_144a5dd5e();
            if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
               (*(longlong *)(lVar4 + 0x398) != 0)) {
              lVar5 = FUN_144a7b4ca();
              lVar4 = *(longlong *)(lVar4 + 0x398);
              if (((lVar4 != 0) && (lVar5 != 0)) &&
                 ((lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0 &&
                  ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38) &&
                   (*(longlong *)
                     (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                    lVar5 + 0x30)))))) {
                local_58[0] = 0;
                FUN_14655b13e(lVar4,local_58,0);
              }
            }
          }
        }
      }
      FUN_145afa3b6(param_1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e38c48 FUN_148e38c48 body=98 status=ok
// SIG undefined FUN_148e38c48(void)

void FUN_148e38c48(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1400f3ad8(param_1 + 0x44);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_148e39172(param_1,*(undefined8 *)(param_2 + 8),*(undefined1 *)(param_2 + 0x10));
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e38caa FUN_148e38caa body=444 status=ok
// SIG undefined FUN_148e38caa(void)

void FUN_148e38caa(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  longlong local_88;
  undefined1 local_80 [24];
  longlong local_68;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    lVar2 = FUN_140059518(param_1 + 0x44);
    if (lVar2 != 0) {
      lVar3 = FUN_14030d4a0();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar2 = FUN_145da44aa(lVar2);
        if (lVar2 != 0) {
          FUN_1447a97f4(local_58,param_2 + 0x18);
          local_88 = param_1;
          FUN_1447a97f4(local_80,local_58);
          local_98 = (undefined8 *)0x0;
          local_90 = 0;
          FUN_1446efa72(&local_98,0,5,0x10);
          puVar1 = local_98;
          local_90 = 5;
          *local_98 = &PTR_LAB_14b972ed0;
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
          local_98[2] = lVar4;
          *local_98 = &PTR_FUN_14b9af130;
          local_98[3] = 0;
          FUN_14485c47a(local_98 + 3,param_1);
          puVar1[4] = local_88;
          puVar1[5] = 0;
          puVar1[6] = 0;
          *(undefined4 *)(puVar1 + 7) = 0;
          puVar1[8] = 0;
          puVar1[9] = 0;
          FUN_1404e49fa(puVar1 + 5,local_80);
          FUN_148e371bc(lVar2,&local_98,param_2 + 8);
          FUN_1449db362(&local_98);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
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



// FUNCTION 148e38e68 FUN_148e38e68 body=88 status=ok
// SIG undefined FUN_148e38e68(void)

void FUN_148e38e68(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    FUN_1447a97f4(local_40,param_2 + 8);
    FUN_148e3937a(param_1,local_40);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e38ec2 FUN_148e38ec2 body=91 status=ok
// SIG undefined FUN_148e38ec2(void)

void FUN_148e38ec2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_148e38f04;
  }
  lVar2 = 0;
LAB_148e38f04:
  FUN_14410af30(lVar2,uVar1);
  return;
}



// FUNCTION 148e38f1e FUN_148e38f1e body=437 status=ok
// SIG undefined FUN_148e38f1e(void)

void FUN_148e38f1e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) goto LAB_148e38f3c;
  local_38 = *(undefined8 *)(param_2 + 8);
  local_40 = 0;
  FUN_14606d52e();
  lVar7 = param_1 + 0x44;
  lVar4 = FUN_1400f3ad8(lVar7);
  if (lVar4 == 0) {
LAB_148e38fb6:
    bVar3 = true;
  }
  else {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_148e38fb6;
    bVar3 = false;
  }
  lVar4 = FUN_1408bb964(lVar7);
  if (lVar4 == 0) goto LAB_148e38f3c;
  lVar5 = FUN_1403ca142();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (bVar3 || *(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_148e38f3c;
  FUN_1402815f4(param_1,&local_50);
  lVar4 = *(longlong *)(local_50 + 0x470);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x98));
  *(int *)(lVar4 + 0x90) = *(int *)(lVar4 + 0x90) + 1;
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
  if (local_40 == *(longlong *)(lVar4 + 0x38)) {
    if (*(int *)(lVar4 + 0x40) == 0) {
      iVar9 = 1;
      goto LAB_148e39075;
    }
  }
  else {
    iVar9 = *(int *)(lVar4 + 0x40) + 1;
LAB_148e39075:
    *(longlong *)(lVar4 + 0x38) = local_40;
    *(int *)(lVar4 + 0x40) = iVar9;
  }
  uVar6 = FUN_140059518(lVar7);
  lVar7 = FUN_1404960a8(uVar6);
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar8 = &PTR_FUN_14b9accc0;
    *(undefined1 *)(puVar8 + 1) = 0;
    *(undefined8 *)((longlong)puVar8 + 0xc) = local_38;
    FUN_14039144e(lVar7,puVar8);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x98));
LAB_148e38f3c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e390d4 FUN_148e390d4 body=158 status=ok
// SIG undefined FUN_148e390d4(void)

void FUN_148e390d4(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_140059518((longlong)param_1 + 0x44);
    if (lVar2 != 0) {
      lVar3 = FUN_14030d4a0();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        cVar1 = FUN_14662f7ba(lVar2,param_2 + 8);
        if (cVar1 != '\0') {
          lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
          if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
            lVar3 = FUN_14583d3ae();
            if (lVar3 != 0) {
              FUN_148d92a8c(lVar3,param_2 + 8,*(undefined4 *)(lVar2 + 0xe0));
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148e39172 FUN_148e39172 body=519 status=ok
// SIG undefined FUN_148e39172(void)

void FUN_148e39172(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  FUN_14606d52e(&local_48,0);
  lVar6 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar6 != 0) {
    lVar7 = FUN_144a5dd5e();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      cVar5 = FUN_1415ce38e(lVar6,&local_48,0);
      if (cVar5 != '\0') {
        FUN_1402815f4(param_1,&local_58);
        puVar9 = *(undefined8 **)(local_58 + 0x630);
        AcquireSRWLockExclusive((PSRWLOCK)(puVar9 + 5));
        plVar3 = local_50;
        *(int *)(puVar9 + 4) = *(int *)(puVar9 + 4) + 1;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        FUN_1447a1747(*puVar9,*(undefined4 *)(puVar9 + 1));
        *(undefined4 *)(puVar9 + 1) = 0;
        if (*(int *)((longlong)puVar9 + 0xc) != 0) {
          FUN_1408be2c4(puVar9,0);
        }
        FUN_1402815f4(param_1,&local_58);
        puVar4 = *(undefined8 **)(local_58 + 0x640);
        AcquireSRWLockExclusive((PSRWLOCK)(puVar4 + 5));
        *(int *)(puVar4 + 4) = *(int *)(puVar4 + 4) + 1;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        FUN_1447a1747(*puVar4,*(undefined4 *)(puVar4 + 1));
        *(undefined4 *)(puVar4 + 1) = 0;
        if (*(int *)((longlong)puVar4 + 0xc) != 0) {
          FUN_1408be2c4(puVar4,0);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(puVar4 + 5));
        ReleaseSRWLockExclusive((PSRWLOCK)(puVar9 + 5));
        uVar8 = FUN_140059518(param_1 + 0x44);
        lVar7 = FUN_1404960a8(uVar8);
        if (lVar7 != 0) {
          puVar9 = (undefined8 *)FUN_14001cc68(8,0x10);
          *puVar9 = &PTR_FUN_14b9acc90;
          FUN_14039144e(lVar7,puVar9);
        }
        if (param_3 != '\0') {
          FUN_148dbb4e4(lVar6);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e3937a FUN_148e3937a body=287 status=ok
// SIG undefined FUN_148e3937a(void)

void FUN_148e3937a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [36];
  short local_34 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar3 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_148e393d0;
  }
  lVar3 = 0;
LAB_148e393d0:
  lVar4 = FUN_1408bb964(param_1 + 0x44);
  if (lVar4 != 0) {
    lVar5 = FUN_1403ca142();
    if ((((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) && (lVar3 != 0))
        && (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
       (lVar5 = *(longlong *)(lVar4 + 0x1e0), lVar5 != 0)) {
      lVar1 = *(longlong *)(lVar5 + 0x30);
      if (lVar1 != 0 && *(longlong *)(lVar5 + 0x68) != 0) {
        FUN_140d27df6(*(longlong *)(lVar5 + 0x68),local_34,lVar3);
        if (-1 < local_34[0]) {
          uVar2 = FUN_1410cda3e(lVar4);
          FUN_1489b0c94(lVar1,local_34,param_2,uVar2);
        }
      }
    }
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e3949a FUN_148e3949a body=252 status=ok
// SIG undefined FUN_148e3949a(void)

bool FUN_148e3949a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1408bb964(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (*(longlong *)(lVar1 + 0x1e0) != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1e0) + 0x68), lVar1 != 0)) {
      bVar4 = false;
      FUN_140f5a278(lVar1,local_34,param_2 + 0x28,0);
      lVar1 = FUN_140d1732e(lVar1,local_34);
      if (lVar1 == 0) goto LAB_148e394f0;
      lVar2 = FUN_1400f3ad8(param_1 + 0x44);
      if (lVar2 == 0) {
LAB_148e39589:
        lVar2 = 0;
      }
      else {
        lVar3 = FUN_1449f3324();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_148e39589;
      }
      bVar4 = lVar1 == lVar2;
      goto LAB_148e394f0;
    }
  }
  bVar4 = false;
LAB_148e394f0:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e39598 FUN_148e39598 body=156 status=ok
// SIG undefined FUN_148e39598(void)

void FUN_148e39598(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1 + 0x48;
  FUN_14485c47a(lVar1);
  cVar2 = FUN_144729dda(lVar1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(lVar1);
    local_38 = &LAB_148e39636;
    local_30 = 0x30;
    FUN_14587291e(lVar3 + 0x2620,&local_28,param_1);
    *(undefined8 *)(param_1 + 0x50) = local_28;
  }
  FUN_144729dda(lVar1);
  FUN_145d24be2(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e39640 FUN_148e39640 body=78 status=ok
// SIG undefined FUN_148e39640(void)

void FUN_148e39640(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x48);
  cVar2 = FUN_144729dda(puVar1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(puVar1);
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_14480f766(lVar3 + 0x2620);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *puVar1 = 0;
  return;
}



// FUNCTION 148e3968e FUN_148e3968e body=9 status=ok
// SIG undefined FUN_148e3968e(void)

void FUN_148e3968e(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x48);
  return;
}



// FUNCTION 148e39698 FUN_148e39698 body=182 status=ok
// SIG undefined FUN_148e39698(void)

void FUN_148e39698(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x480);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
  *(int *)(lVar3 + 0xb8) = *(int *)(lVar3 + 0xb8) + 1;
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
  if (*(int *)(lVar3 + 0x58) == param_2) {
    if (*(int *)(lVar3 + 0x5c) != 0) goto LAB_148e39725;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x5c) + 1;
  }
  *(int *)(lVar3 + 0x58) = param_2;
  *(int *)(lVar3 + 0x5c) = iVar4;
LAB_148e39725:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000148e39742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e39750 FUN_148e39750 body=578 status=ok
// SIG undefined FUN_148e39750(void)

void FUN_148e39750(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  PSRWLOCK SRWLock;
  char cVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) goto LAB_148e39963;
  FUN_1402815f4(param_1,&local_50);
  lVar6 = *(longlong *)(local_50 + 0x480);
  SRWLock = (PSRWLOCK)(lVar6 + 0xc0);
  AcquireSRWLockShared(SRWLock);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  cVar4 = *(char *)(lVar6 + 8);
  ReleaseSRWLockShared(SRWLock);
  if (cVar4 == '\0') {
    lVar6 = FUN_1400f3ad8(param_1 + 0x44);
    if (lVar6 != 0) {
      lVar7 = FUN_144a5dd5e();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        lVar6 = FUN_1402a1246(lVar6);
        if (lVar6 != 0) {
          FUN_1402815f4(param_1,&local_50);
          lVar7 = *(longlong *)(local_50 + 0x480);
          AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0xc0));
          plVar3 = local_48;
          *(int *)(lVar7 + 0xb8) = *(int *)(lVar7 + 0xb8) + 1;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_48 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (*(int *)(lVar6 + 0xda8) == *(int *)(lVar7 + 0xb0)) {
            if (*(int *)(lVar7 + 0xb4) == 0) {
              iVar8 = 1;
              goto LAB_148e3998b;
            }
          }
          else {
            iVar8 = *(int *)(lVar7 + 0xb4) + 1;
LAB_148e3998b:
            *(int *)(lVar7 + 0xb0) = *(int *)(lVar6 + 0xda8);
            *(int *)(lVar7 + 0xb4) = iVar8;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0xc0));
        }
      }
    }
  }
  FUN_1402815f4(param_1,&local_50);
  pcVar5 = *(char **)(local_50 + 0x480);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar5 + 0xc0));
  *(int *)(pcVar5 + 0xb8) = *(int *)(pcVar5 + 0xb8) + 1;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (*(char *)(param_2 + 0x20) == *pcVar5) {
    if (*(int *)(pcVar5 + 4) == 0) {
      iVar8 = 1;
      goto LAB_148e3992a;
    }
  }
  else {
    iVar8 = *(int *)(pcVar5 + 4) + 1;
LAB_148e3992a:
    *pcVar5 = *(char *)(param_2 + 0x20);
    *(int *)(pcVar5 + 4) = iVar8;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar5 + 0xc0));
  if (*(char *)(param_2 + 0x20) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
LAB_148e39963:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e399ba FUN_148e399ba body=81 status=ok
// SIG undefined FUN_148e399ba(void)

void FUN_148e399ba(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 100);
    FUN_1447a1747(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 100) != 0)) {
      FUN_1408be2c4(param_1 + 0x58,0);
    }
    FUN_141175e14(param_1);
    return;
  }
  return;
}



// FUNCTION 148e39a0c FUN_148e39a0c body=474 status=ok
// SIG undefined FUN_148e39a0c(void)

void FUN_148e39a0c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  void *_Src;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RBP;
  undefined7 uVar7;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 == 0) || (lVar4 = FUN_140059518(param_1 + 0x44), lVar4 == 0)) goto LAB_148e39a65;
  lVar5 = FUN_14030d4a0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_148e39a65;
  local_58 = 0;
  uStack_50 = 0;
  iVar2 = *(int *)(param_2 + 0x28);
  uVar7 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (iVar2 == DAT_14cbd6c68) {
    uVar6 = CONCAT71(uVar7,1);
    if ((1 < iVar2) && (iVar2 = wcscmp(*(wchar_t **)(param_2 + 0x20),DAT_14cbd6c60), iVar2 != 0)) {
LAB_148e39b0f:
      FUN_148dae006(lVar4,&local_68);
      FUN_1410e5bda(&local_58,&local_68);
      FUN_1447a1747(local_68,local_60);
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      local_68 = (undefined8 *)(param_2 + 0x20);
      iVar2 = FUN_140c8411c(&local_58);
      uVar6 = uStack_50;
      if (iVar2 == 0) {
        lVar5 = (longlong)(int)uStack_50;
        uVar3 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
        if (uStack_50._4_4_ < uVar3) {
          FUN_1447a1bd6(&local_58,uVar6 & 0xffffffff);
        }
        lVar5 = lVar5 * 0x10;
        puVar1 = (undefined8 *)(local_58 + lVar5);
        *(undefined8 *)(local_58 + lVar5) = 0;
        iVar2 = *(int *)(param_2 + 0x28);
        _Src = *(void **)(param_2 + 0x20);
        *(int *)(local_58 + 8 + lVar5) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      FUN_148e39ccc(&local_58);
      uVar6 = CONCAT71(uVar7,(int)uStack_50 < 1);
    }
  }
  else {
    uVar6 = CONCAT71(uVar7,1);
    if (DAT_14cbd6c68 + iVar2 != 1) goto LAB_148e39b0f;
  }
  FUN_148dadfde(lVar4,uVar6 & 0xffffffff);
  FUN_148dae034(lVar4,&local_58);
  FUN_145960560(param_1);
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_148e39a65:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e39be8 FUN_148e39be8 body=207 status=ok
// SIG undefined FUN_148e39be8(void)

void FUN_148e39be8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x480);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
  *(int *)(lVar3 + 0xb8) = *(int *)(lVar3 + 0xb8) + 1;
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
  if (*(int *)(param_2 + 0x20) == *(int *)(lVar3 + 0xb0)) {
    if (*(int *)(lVar3 + 0xb4) != 0) goto LAB_148e39ca5;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0xb4) + 1;
  }
  *(int *)(lVar3 + 0xb0) = *(int *)(param_2 + 0x20);
  *(int *)(lVar3 + 0xb4) = iVar4;
LAB_148e39ca5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 148e39ccc FUN_148e39ccc body=645 status=ok
// SIG undefined FUN_148e39ccc(void)

void FUN_148e39ccc(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ushort uVar13;
  ushort uVar14;
  longlong *plVar15;
  int iVar16;
  bool bVar17;
  
  lVar6 = FUN_145d6e79a();
  lVar4 = param_1[1];
  uVar8 = (ulonglong)(int)lVar4;
  if (uVar8 == 0) {
    return;
  }
  plVar1 = (longlong *)*param_1;
  if ((longlong)*(int *)(lVar6 + 0x28) != 0) {
    plVar7 = *(longlong **)(lVar6 + 0x20);
    plVar15 = plVar7 + (longlong)*(int *)(lVar6 + 0x28) * 5;
    iVar5 = (int)plVar1[1];
LAB_148e39d2c:
    if ((int)plVar7[1] == iVar5) {
      if (1 < iVar5) {
        lVar12 = 0;
        do {
          uVar14 = *(ushort *)(*plVar7 + lVar12);
          uVar10 = (ulonglong)uVar14;
          uVar13 = *(ushort *)(*plVar1 + lVar12);
          if (uVar14 == uVar13) {
            if (uVar14 == 0) break;
          }
          else {
            if (0x7f < (uVar13 | uVar14)) goto LAB_148e39f38;
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            uVar11 = (ulonglong)uVar13;
            uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar11]) goto LAB_148e39f38;
          }
          lVar12 = lVar12 + 2;
        } while( true );
      }
    }
    else if ((int)plVar7[1] + iVar5 != 1) goto LAB_148e39d8a;
    goto LAB_148e39d95;
  }
  bVar17 = true;
LAB_148e39d9b:
  iVar5 = 0;
  uVar10 = 0;
  do {
    iVar3 = (int)uVar10;
    if ((int)(iVar3 + 1U) < (int)lVar4) {
      uVar10 = (longlong)iVar3 + 1;
      bVar2 = true;
      do {
        if (*(int *)(lVar6 + 0x28) != 0) {
          iVar9 = (int)(plVar1 + uVar10 * 2)[1];
          plVar15 = *(longlong **)(lVar6 + 0x20);
LAB_148e39df0:
          if ((int)plVar15[1] != iVar9) {
            if ((int)plVar15[1] + iVar9 == 1) goto LAB_148e39e6a;
            goto LAB_148e39e53;
          }
          if (1 < iVar9) {
            lVar12 = 0;
            do {
              uVar14 = *(ushort *)(*plVar15 + lVar12);
              uVar13 = *(ushort *)(plVar1[uVar10 * 2] + lVar12);
              if (uVar14 == uVar13) {
                if (uVar14 == 0) break;
              }
              else {
                if (0x7f < (uVar13 | uVar14)) {
                  iVar16 = (uint)uVar14 - (uint)uVar13;
                  goto LAB_148e39e65;
                }
                if ((&DAT_149e05da0)[uVar14] != (&DAT_149e05da0)[(uint)uVar13]) goto LAB_148e39e62;
              }
              lVar12 = lVar12 + 2;
            } while( true );
          }
          goto LAB_148e39e6a;
        }
LAB_148e39e5c:
        if (!bVar17) {
          iVar9 = (int)uVar10 - iVar3;
          goto LAB_148e39ecb;
        }
LAB_148e39e77:
        uVar10 = uVar10 + 1;
        bVar2 = (longlong)uVar10 < (longlong)uVar8;
        uVar11 = uVar8;
      } while (uVar10 != uVar8);
    }
    else {
      bVar2 = false;
      uVar11 = (ulonglong)(iVar3 + 1U);
    }
LAB_148e39e97:
    iVar9 = (int)uVar11 - iVar3;
    uVar10 = uVar11;
    if (bVar17) {
      FUN_1447a1747(plVar1 + (longlong)iVar3 * 2,iVar9);
      bVar17 = false;
    }
    else {
LAB_148e39ecb:
      if (iVar5 != iVar3) {
        memmove(plVar1 + (longlong)iVar5 * 2,plVar1 + (longlong)iVar3 * 2,(longlong)iVar9 << 4);
      }
      iVar5 = iVar5 + iVar9;
      bVar17 = true;
    }
    if (!bVar2) {
      *(int *)(param_1 + 1) = iVar5;
      return;
    }
  } while( true );
LAB_148e39f38:
  if (uVar14 == uVar13) goto LAB_148e39d95;
LAB_148e39d8a:
  plVar7 = plVar7 + 5;
  if (plVar7 == plVar15) goto code_r0x000148e39d93;
  goto LAB_148e39d2c;
code_r0x000148e39d93:
  plVar7 = (longlong *)0x0;
LAB_148e39d95:
  bVar17 = plVar7 == (longlong *)0x0;
  goto LAB_148e39d9b;
LAB_148e39e62:
  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar14] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar13];
LAB_148e39e65:
  if (iVar16 == 0) {
LAB_148e39e6a:
    uVar11 = uVar10;
    if ((bool)(plVar15 == (longlong *)0x0 ^ bVar17)) goto LAB_148e39e97;
    goto LAB_148e39e77;
  }
LAB_148e39e53:
  plVar15 = plVar15 + 5;
  if (plVar15 == *(longlong **)(lVar6 + 0x20) + (longlong)*(int *)(lVar6 + 0x28) * 5)
  goto LAB_148e39e5c;
  goto LAB_148e39df0;
}



// FUNCTION 148e39f52 FUN_148e39f52 body=169 status=ok
// SIG undefined FUN_148e39f52(void)

void FUN_148e39f52(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  
  uVar3 = FUN_14497e828(param_2);
  lVar4 = FUN_147aa5636(uVar3,0);
  if (lVar4 != 0) {
    lVar4 = FUN_148e39ffc(lVar4);
    if ((lVar4 != 0) && (0 < (int)param_1[1])) {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)*param_1;
      }
      iVar1 = _wtoi(pwVar5);
      iVar2 = 0;
      if (1 < (int)param_1[1]) {
        if (*(int *)(*param_1 + 0x18) == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = *(wchar_t **)(*param_1 + 0x10);
        }
        iVar2 = _wtoi(pwVar5);
      }
      FUN_145c57122(lVar4,iVar1);
      if ((iVar1 != 0) && (iVar1 != 5)) {
        FUN_148e3a064(lVar4,iVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e39ffc FUN_148e39ffc body=103 status=ok
// SIG undefined FUN_148e39ffc(void)

void FUN_148e39ffc(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b93c5a();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148e438ce(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e3a064 FUN_148e3a064 body=720 status=ok
// SIG undefined FUN_148e3a064(void)

void FUN_148e3a064(undefined8 param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  ulonglong *local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1402815f4(param_1,&local_80);
  lVar3 = *(longlong *)(local_80 + 0x480);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
  *(int *)(lVar3 + 0xb8) = *(int *)(lVar3 + 0xb8) + 1;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  lVar4 = lVar3 + 0x78;
  FUN_1412823f0(*(undefined8 *)(lVar3 + 0x78),*(undefined4 *)(lVar3 + 0x80));
  *(undefined4 *)(lVar3 + 0x80) = 0;
  if (*(int *)(lVar3 + 0x84) != 0) {
    FUN_145c9f902(lVar4,0);
  }
  *(int *)(lVar3 + 0x88) = *(int *)(lVar3 + 0x88) + 1;
  FUN_1400b22c2(&local_80,"Campaign");
  FUN_1400b22c2(local_70,"End Game");
  FUN_1400b22c2(local_60,"Boss Run");
  FUN_1400b22c2(local_50,"Weekly");
  local_a0 = &local_80;
  local_98 = &local_40;
  FUN_141469cae(&local_90);
  lVar6 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar6) != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != 0);
  FUN_1400b22c2(&local_80,"oak2_campaign");
  FUN_1400b22c2(local_70,"endgame");
  FUN_1400b22c2(local_60,"bossrun");
  FUN_1400b22c2(local_50,"weekly_trait_mission");
  local_c0 = &local_80;
  local_b8 = &local_40;
  FUN_141469cae(&local_b0);
  lVar6 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar6) != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != 0);
  if ((int)param_2 < 0 || local_88 <= (int)param_2) {
    if (0 < local_88) {
      lVar7 = 0;
      lVar6 = 0;
      do {
        *(int *)(lVar3 + 0x88) = *(int *)(lVar3 + 0x88) + 1;
        lVar5 = FUN_1411f3330(lVar4);
        FUN_140775496(lVar5 + 0x18,local_90 + lVar7);
        FUN_140775496(lVar5 + 0x48,local_b0 + lVar7);
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar6 < local_88);
    }
  }
  else {
    *(int *)(lVar3 + 0x88) = *(int *)(lVar3 + 0x88) + 1;
    lVar4 = FUN_1411f3330(lVar4);
    FUN_140775496(lVar4 + 0x18,local_90 + (ulonglong)param_2 * 0x10);
    FUN_140775496(lVar4 + 0x48,(ulonglong)param_2 * 0x10 + local_b0);
  }
  FUN_1447a1747(local_b0,local_a8);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_90,local_88);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e3a336 FUN_148e3a336 body=120 status=ok
// SIG undefined FUN_148e3a336(void)

void FUN_148e3a336(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    FUN_1446dcdd4(local_48,param_2 + 0x20);
    lVar1 = FUN_148ee94c0(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (lVar1 != 0) {
      FUN_1412b76d0(param_1,lVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e3a3b0 FUN_148e3a3b0 body=529 status=ok
// SIG undefined FUN_148e3a3b0(void)

void FUN_148e3a3b0(undefined8 param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint local_c0;
  int iStack_bc;
  undefined8 uStack_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined4 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_ac = param_2;
  plVar4 = (longlong *)FUN_140e8d764();
  plVar4 = (longlong *)*plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(plVar4 + 0xb));
  *(int *)(plVar4 + 10) = (int)plVar4[10] + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar4 + 0xb));
  plVar1 = plVar4 + 2;
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  uStack_90 = 0;
  local_e8 = param_3;
  local_e0 = param_4;
  uStack_a0 = plVar1;
  if ((int)plVar4[5] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_a8);
    iVar6 = (int)plVar4[5];
  }
  uStack_b8 = CONCAT44(uStack_8c,uStack_90);
  local_c0 = local_98;
  iStack_bc = iStack_94;
  local_d0 = (undefined4)local_a8;
  uStack_cc = local_a8._4_4_;
  uStack_c8 = (undefined4)uStack_a0;
  uStack_c4 = uStack_a0._4_4_;
  local_d8 = plVar4;
  if ((iStack_94 != iVar6) || (uStack_a0 != plVar1)) {
    do {
      local_78 = 0;
      local_68 = &PTR_LAB_14b9ace00;
      local_88[0] = &LAB_144275f94;
      local_60 = &local_ac;
      lVar5 = FUN_148e3a5c2(*local_d8 + (longlong)iStack_bc * 0x28 + 8,local_88);
      plVar2 = local_e8;
      if (lVar5 != 0) {
        plVar1 = (longlong *)*local_e8;
        plVar4 = *(longlong **)(lVar5 + 0x10);
        if (plVar4 != plVar1) {
          *(longlong **)(lVar5 + 0x10) = plVar1;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        plVar3 = local_e0;
        *(int *)(lVar5 + 0x18) = (int)plVar2[1];
        plVar1 = (longlong *)*local_e0;
        plVar4 = *(longlong **)(lVar5 + 0x20);
        if (plVar4 != plVar1) {
          *(longlong **)(lVar5 + 0x20) = plVar1;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        *(int *)(lVar5 + 0x28) = (int)plVar3[1];
        break;
      }
      local_c0 = local_c0 & ~uStack_cc;
      FUN_1449c0562(&local_d0);
    } while (local_d8 != plVar4 ||
             ((longlong *)CONCAT44(uStack_c4,uStack_c8) != plVar1 || iStack_bc != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e3a5c2 FUN_148e3a5c2 body=157 status=ok
// SIG undefined FUN_148e3a5c2(void)

undefined8 FUN_148e3a5c2(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  local_58[0] = *param_2;
  local_48 = param_2[2];
  param_2[2] = 0;
  local_38 = (undefined4)param_2[4];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_30 = (undefined4)param_2[5];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_28 = (undefined4)param_2[6];
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_20 = (undefined4)param_2[7];
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_58[0] != 0) {
    *param_2 = 0;
  }
  uVar1 = FUN_148e23532(local_38,local_58);
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e3a660 FUN_148e3a660 body=509 status=ok
// SIG undefined FUN_148e3a660(void)

void FUN_148e3a660(undefined8 param_1,undefined4 param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint local_c0;
  int iStack_bc;
  undefined8 uStack_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined4 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_ac = param_2;
  plVar3 = (longlong *)FUN_140e8d764();
  plVar3 = (longlong *)*plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 0xb));
  *(int *)(plVar3 + 10) = (int)plVar3[10] + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 0xb));
  plVar1 = plVar3 + 2;
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  uStack_90 = 0;
  local_e8 = param_3;
  local_e0 = param_4;
  uStack_a0 = plVar1;
  if ((int)plVar3[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_a8);
    iVar5 = (int)plVar3[5];
  }
  uStack_b8 = CONCAT44(uStack_8c,uStack_90);
  local_c0 = local_98;
  iStack_bc = iStack_94;
  local_d0 = (undefined4)local_a8;
  uStack_cc = local_a8._4_4_;
  uStack_c8 = (undefined4)uStack_a0;
  uStack_c4 = uStack_a0._4_4_;
  local_d8 = plVar3;
  if ((iStack_94 != iVar5) || (uStack_a0 != plVar1)) {
    do {
      local_78 = 0;
      local_68 = &PTR_LAB_14b9ace00;
      local_88[0] = &LAB_144275f94;
      local_60 = &local_ac;
      lVar4 = FUN_148e3a5c2(*local_d8 + (longlong)iStack_bc * 0x28 + 8,local_88);
      plVar2 = local_e0;
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x40) = *local_e8;
        plVar1 = (longlong *)*local_e0;
        plVar3 = *(longlong **)(lVar4 + 0x48);
        if (plVar3 != plVar1) {
          *(longlong **)(lVar4 + 0x48) = plVar1;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        *(int *)(lVar4 + 0x50) = (int)plVar2[1];
        FUN_144a787a6(lVar4 + 0x58,param_5);
        break;
      }
      local_c0 = local_c0 & ~uStack_cc;
      FUN_1449c0562(&local_d0);
    } while (local_d8 != plVar3 ||
             ((longlong *)CONCAT44(uStack_c4,uStack_c8) != plVar1 || iStack_bc != iVar5));
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e3a86a FUN_148e3a86a body=246 status=ok
// SIG undefined FUN_148e3a86a(void)

void FUN_148e3a86a(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_2 != 0) && (uVar1 = *(uint *)(param_2 + 8), uVar1 != 0xffffffff)) &&
     (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac))) {
    lVar2 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb8);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & uVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x78);
      iVar4 = iVar3;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar4 * 0x18) == uVar1) goto LAB_148e3a912;
        iVar4 = *(int *)(lVar2 + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
    }
  }
  goto LAB_148e3a8ed;
  while (iVar3 = *(int *)(lVar2 + (longlong)iVar3 * 0x18 + 0x10), iVar3 != -1) {
LAB_148e3a912:
    if (*(uint *)(lVar2 + (longlong)iVar3 * 0x18) == uVar1) goto LAB_148e3a92c;
  }
  iVar3 = -1;
LAB_148e3a92c:
  local_28 = *(undefined4 *)(lVar2 + 0xc + (longlong)iVar3 * 0x18);
  local_30 = *(undefined8 *)(lVar2 + 4 + (longlong)iVar3 * 0x18);
  FUN_148e44ebc();
  FUN_14147f19c(param_1,*(undefined4 *)(param_2 + 8),&local_30,0);
LAB_148e3a8ed:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e3a962 FUN_148e3a962 body=499 status=ok
// SIG undefined FUN_148e3a962(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148e3a962(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  
  uVar6 = DAT_14cbd6c8c;
  if (DAT_14cbd6c94 != 0) {
    uVar6 = FUN_144a78877(DAT_14cbd6c8c,DAT_14cbd6c94);
  }
  plVar7 = (longlong *)FUN_148e44ca2(param_2 + 0xa8,uVar6,&DAT_14cbd6c8c);
  if (*plVar7 != 0) goto LAB_148e3a9b5;
  puVar9 = (undefined8 *)FUN_14001cc68(0xa8,0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x4c);
  puVar9[5] = 0;
  *(undefined4 *)(puVar9 + 6) = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *(undefined8 *)((longlong)puVar9 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
  puVar9[9] = 0;
  *(undefined4 *)(puVar9 + 10) = 0;
  *puVar9 = &PTR_FUN_14b9b0a38;
  puVar9[0xb] = &PTR_FUN_14b9b0a48;
  puVar9[0xc] = CONCAT44(_DAT_14cbd6c90,DAT_14cbd6c8c);
  *(int *)(puVar9 + 0xd) = DAT_14cbd6c94;
  puVar9[0xe] = 0;
  puVar9[0xf] = 0;
  *(undefined4 *)(puVar9 + 0x10) = 0;
  puVar9[0x11] = 0;
  puVar9[0x12] = 0;
  FUN_1446ddda2(puVar9 + 0xe,&DAT_149e3cc88,0);
  *puVar9 = &PTR_FUN_14b9ace20;
  puVar9[0xb] = &PTR_FUN_14b9ace30;
  puVar9[0x13] = uVar8;
  puVar9[0x14] = 0;
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14b9b0020;
  plVar10[2] = (longlong)puVar9;
  *plVar7 = (longlong)puVar9;
  plVar4 = (longlong *)plVar7[1];
  if (plVar10 == plVar4) {
    if (plVar10 == (longlong *)0x0) goto LAB_148e3a9b5;
    LOCK();
    plVar4 = plVar10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148e3a9b5;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar10;
  }
  else {
    plVar7[1] = (longlong)plVar10;
    if (plVar4 == (longlong *)0x0) goto LAB_148e3a9b5;
    LOCK();
    plVar10 = plVar4 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_148e3a9b5;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_148e3a9b5:
  lVar3 = *plVar7;
  uVar8 = thunk_FUN_144aff86e();
  cVar5 = FUN_1448093f4(lVar3 + 0x58,uVar8);
  lVar11 = 0;
  if (cVar5 != '\0') {
    lVar11 = lVar3;
  }
  *(undefined4 *)(lVar11 + 0x98) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(lVar11 + 0x9c) = *(undefined4 *)(param_1 + 0x50);
  *(undefined8 *)(lVar11 + 0xa0) = *(undefined8 *)(param_1 + 0x44);
  return;
}



// FUNCTION 148e3ab56 FUN_148e3ab56 body=472 status=ok
// SIG undefined FUN_148e3ab56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_148e3ab56(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar5 = DAT_14cbd6c98;
  if (DAT_14cbd6ca0 != 0) {
    uVar5 = FUN_144a78877(DAT_14cbd6c98,DAT_14cbd6ca0);
  }
  plVar6 = (longlong *)FUN_148e44ca2(param_1 + 0xa8,uVar5,&DAT_14cbd6c98);
  lVar11 = *plVar6;
  if ((param_2 == 0) || (lVar11 != 0)) goto LAB_148e3ace9;
  puVar7 = (undefined8 *)FUN_14001cc68(0xa8,0x10);
  puVar7[5] = 0;
  *(undefined4 *)(puVar7 + 6) = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
  puVar7[9] = 0;
  *(undefined4 *)(puVar7 + 10) = 0;
  *puVar7 = &PTR_FUN_14b9b0a38;
  puVar7[0xb] = &PTR_FUN_14b9b0a48;
  puVar7[0xc] = CONCAT44(_DAT_14cbd6c9c,DAT_14cbd6c98);
  *(int *)(puVar7 + 0xd) = DAT_14cbd6ca0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  *(undefined4 *)(puVar7 + 0x10) = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  FUN_1446ddda2(puVar7 + 0xe,&DAT_149e3cc88,0);
  *puVar7 = &PTR_FUN_14b9ace40;
  puVar7[0xb] = &PTR_FUN_14b9ace50;
  *(undefined4 *)(puVar7 + 0x13) = *(undefined4 *)(param_2 + 0x40);
  puVar7[0x14] = param_2;
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b9b0040;
  plVar8[2] = (longlong)puVar7;
  *plVar6 = (longlong)puVar7;
  plVar3 = (longlong *)plVar6[1];
  if (plVar8 == plVar3) {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar3 = plVar8;
        goto joined_r0x000148e3acdb;
      }
    }
  }
  else {
    plVar6[1] = (longlong)plVar8;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000148e3acdb:
        if (iVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  lVar11 = *plVar6;
LAB_148e3ace9:
  if (lVar11 == 0) {
    lVar10 = 0;
  }
  else {
    uVar9 = thunk_FUN_144aff86e();
    cVar4 = FUN_1448093f4(lVar11 + 0x58,uVar9);
    lVar10 = 0;
    if (cVar4 != '\0') {
      lVar10 = lVar11;
    }
    *(undefined4 *)(lVar10 + 0x98) = *(undefined4 *)(*(longlong *)(lVar10 + 0xa0) + 0x40);
  }
  return lVar10;
}



// FUNCTION 148e3ad38 FUN_148e3ad38 body=450 status=ok
// SIG undefined FUN_148e3ad38(void)

void FUN_148e3ad38(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar2 = FUN_1400d7050(param_1 + 0x30);
    if (lVar2 != 0) {
      lVar3 = FUN_144a5dd5e();
      if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
          (*(int *)(lVar2 + 0xd98) == *(int *)(param_2 + 0x20))) && (*(int *)(param_2 + 0x30) != 0))
      {
        lVar2 = FUN_1400d7050(param_1 + 0x30);
        if (lVar2 != 0) {
          lVar3 = FUN_144a5dd5e();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            lVar2 = FUN_144a7ba4c(lVar2);
            if (lVar2 != 0) {
              lVar2 = FUN_145da44aa(lVar2);
              if (lVar2 != 0) {
                local_40 = *(undefined4 *)(param_2 + 0x38);
                local_48 = *(undefined8 *)(param_2 + 0x30);
                local_38 = (undefined8 *)0x0;
                local_30 = 0;
                FUN_1446efa72(&local_38,0,4,0x10);
                puVar1 = local_38;
                local_30 = 4;
                *local_38 = &PTR_LAB_14b972ed0;
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
                local_38[2] = lVar4;
                *local_38 = &PTR_FUN_14b9b01f0;
                local_38[3] = 0;
                FUN_14485c47a(local_38 + 3,param_1);
                puVar1[4] = param_1;
                puVar1[5] = local_48;
                *(undefined4 *)(puVar1 + 6) = local_40;
                FUN_1446ddc76(&local_48,"trait_mission_start_db",1);
                FUN_144268f62(lVar2,&local_48,&local_38,0);
                FUN_1449db362(&local_38);
              }
            }
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



// FUNCTION 148e3aefc FUN_148e3aefc body=597 status=ok
// SIG undefined FUN_148e3aefc(void)

void FUN_148e3aefc(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68 [2];
  undefined2 *local_58;
  int local_50;
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_1400d7050(param_1 + 0x30);
  if (lVar3 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) && (lVar3 = FUN_144a7ba4c(lVar3), lVar3 != 0)) &&
       ((lVar3 = FUN_145da44aa(lVar3), lVar3 != 0 && (lVar4 = FUN_1414baffc(param_2), lVar4 != 0))))
    {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      local_40 = 3;
      *local_48 = &PTR_LAB_14b972ed0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b0260;
      local_48[3] = lVar4;
      local_48[4] = param_1;
      FUN_1400b22c2(local_68,&DAT_14b968dad);
      FUN_1400021e4(lVar4 + 0x38,&local_88);
      local_70 = (int)uStack_80;
      uVar5 = (int)uStack_80 - 1;
      if ((int)uStack_80 == 0) {
        uVar5 = 0;
      }
      if (0 < (int)uVar5) {
        uVar7 = 0;
        do {
          uVar1 = *(ushort *)(local_88 + uVar7 * 2);
          *(ushort *)(local_88 + uVar7 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
      local_78 = local_88;
      local_6c = uStack_80._4_4_;
      local_88 = 0;
      uStack_80 = 0;
      FUN_1401c7f3e(&local_58,&local_78,local_68);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      puVar8 = local_58;
      if (local_50 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      FUN_1446f470e(local_68,puVar8,1);
      FUN_144268f62(lVar3,local_68,&local_48,1);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1449db362(&local_48);
    }
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e3b152 FUN_148e3b152 body=29 status=ok
// SIG undefined FUN_148e3b152(void)

undefined8 FUN_148e3b152(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3b170 FUN_148e3b170 body=38 status=ok
// SIG undefined FUN_148e3b170(void)

undefined8 FUN_148e3b170(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SelectCharacterPerformed",1);
  return param_2;
}



// FUNCTION 148e3b196 FUN_148e3b196 body=29 status=ok
// SIG undefined FUN_148e3b196(void)

undefined8 FUN_148e3b196(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3b1b4 FUN_148e3b1b4 body=38 status=ok
// SIG undefined FUN_148e3b1b4(void)

undefined8 FUN_148e3b1b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_OnCharacterSelectChoiceFinalize",1);
  return param_2;
}



// FUNCTION 148e3b1da FUN_148e3b1da body=29 status=ok
// SIG undefined FUN_148e3b1da(void)

undefined8 FUN_148e3b1da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3b1f8 FUN_148e3b1f8 body=38 status=ok
// SIG undefined FUN_148e3b1f8(void)

undefined8 FUN_148e3b1f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ShowMaxSaveGamesDialog",1);
  return param_2;
}



// FUNCTION 148e3b21e FUN_148e3b21e body=122 status=ok
// SIG undefined FUN_148e3b21e(void)

void FUN_148e3b21e(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 148e3b298 FUN_148e3b298 body=45 status=ok
// SIG undefined FUN_148e3b298(void)

longlong FUN_148e3b298(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_14578a8c6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3b2c6 FUN_148e3b2c6 body=38 status=ok
// SIG undefined FUN_148e3b2c6(void)

undefined8 FUN_148e3b2c6(undefined8 param_1,int param_2)

{
  FUN_14578a8c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3b2ec FUN_148e3b2ec body=45 status=ok
// SIG undefined FUN_148e3b2ec(void)

longlong FUN_148e3b2ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_14578a8c6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3b31a FUN_148e3b31a body=38 status=ok
// SIG undefined FUN_148e3b31a(void)

undefined8 FUN_148e3b31a(undefined8 param_1,int param_2)

{
  FUN_14578a8c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3b340 FUN_148e3b340 body=45 status=ok
// SIG undefined FUN_148e3b340(void)

longlong FUN_148e3b340(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_14578a8c6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3b36e FUN_148e3b36e body=38 status=ok
// SIG undefined FUN_148e3b36e(void)

undefined8 FUN_148e3b36e(undefined8 param_1,int param_2)

{
  FUN_14578a8c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3b394 FUN_148e3b394 body=45 status=ok
// SIG undefined FUN_148e3b394(void)

longlong FUN_148e3b394(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_14578a8c6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3b3c2 FUN_148e3b3c2 body=112 status=ok
// SIG undefined FUN_148e3b3c2(void)

void FUN_148e3b3c2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xd8,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xd8)) {
      uVar2 = uVar1 / 0xd8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xd8,8);
  }
  return;
}



// FUNCTION 148e3b432 FUN_148e3b432 body=31 status=ok
// SIG undefined FUN_148e3b432(void)

undefined8 FUN_148e3b432(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3b46c FUN_148e3b46c body=101 status=ok
// SIG undefined FUN_148e3b46c(void)

void FUN_148e3b46c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ace80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3b4d2 FUN_148e3b4d2 body=101 status=ok
// SIG undefined FUN_148e3b4d2(void)

void FUN_148e3b4d2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ace80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3b538 FUN_148e3b538 body=134 status=ok
// SIG undefined FUN_148e3b538(void)

void FUN_148e3b538(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ace80;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3b5af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3b5be FUN_148e3b5be body=39 status=ok
// SIG undefined FUN_148e3b5be(void)

void FUN_148e3b5be(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3b5e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e3b5e6 FUN_148e3b5e6 body=31 status=ok
// SIG undefined FUN_148e3b5e6(void)

undefined8 FUN_148e3b5e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3b620 FUN_148e3b620 body=101 status=ok
// SIG undefined FUN_148e3b620(void)

void FUN_148e3b620(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9acef0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3b686 FUN_148e3b686 body=101 status=ok
// SIG undefined FUN_148e3b686(void)

void FUN_148e3b686(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9acef0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3b6ec FUN_148e3b6ec body=134 status=ok
// SIG undefined FUN_148e3b6ec(void)

void FUN_148e3b6ec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9acef0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3b763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3b772 FUN_148e3b772 body=44 status=ok
// SIG undefined FUN_148e3b772(void)

void FUN_148e3b772(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3b79b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e3b79e FUN_148e3b79e body=31 status=ok
// SIG undefined FUN_148e3b79e(void)

undefined8 FUN_148e3b79e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3b7d8 FUN_148e3b7d8 body=29 status=ok
// SIG undefined FUN_148e3b7d8(void)

bool FUN_148e3b7d8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e3b7f6 FUN_148e3b7f6 body=26 status=ok
// SIG undefined FUN_148e3b7f6(void)

bool FUN_148e3b7f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e3b81c FUN_148e3b81c body=101 status=ok
// SIG undefined FUN_148e3b81c(void)

void FUN_148e3b81c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9acfd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9acf60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3b882 FUN_148e3b882 body=134 status=ok
// SIG undefined FUN_148e3b882(void)

void FUN_148e3b882(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9acfd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9acf60;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3b8f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3b908 FUN_148e3b908 body=52 status=ok
// SIG undefined FUN_148e3b908(void)

void FUN_148e3b908(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3b939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e3b958 FUN_148e3b958 body=29 status=ok
// SIG undefined FUN_148e3b958(void)

bool FUN_148e3b958(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e3b976 FUN_148e3b976 body=26 status=ok
// SIG undefined FUN_148e3b976(void)

bool FUN_148e3b976(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e3b990 FUN_148e3b990 body=24 status=ok
// SIG undefined FUN_148e3b990(void)

bool FUN_148e3b990(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e3b9a8 FUN_148e3b9a8 body=101 status=ok
// SIG undefined FUN_148e3b9a8(void)

void FUN_148e3b9a8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ad0b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3ba0e FUN_148e3ba0e body=134 status=ok
// SIG undefined FUN_148e3ba0e(void)

void FUN_148e3ba0e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad0b0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3ba85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3ba94 FUN_148e3ba94 body=44 status=ok
// SIG undefined FUN_148e3ba94(void)

void FUN_148e3ba94(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3babd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e3bac0 FUN_148e3bac0 body=96 status=ok
// SIG undefined FUN_148e3bac0(void)

undefined8 FUN_148e3bac0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40)) {
    cVar1 = FUN_148e3bb20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38));
    if (cVar1 != '\0') {
      cVar1 = FUN_144722c14(param_1 + 8,param_2 + 8,0);
      if (cVar1 != '\0') {
        uVar2 = FUN_144722c14(param_1 + 0x18,param_2 + 0x18,0);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 148e3bb20 FUN_148e3bb20 body=48 status=ok
// SIG undefined FUN_148e3bb20(void)

bool FUN_148e3bb20(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_3 == 0) {
    return true;
  }
  lVar1 = 0x10;
  do {
    param_3 = param_3 + -1;
    bVar2 = *(longlong *)(param_1 + lVar1) == *(longlong *)(param_2 + lVar1);
    if (!bVar2) {
      return bVar2;
    }
    lVar1 = lVar1 + 0x20;
  } while (param_3 != 0);
  return bVar2;
}



// FUNCTION 148e3bb50 FUN_148e3bb50 body=31 status=ok
// SIG undefined FUN_148e3bb50(void)

undefined8 FUN_148e3bb50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3bb8a FUN_148e3bb8a body=26 status=ok
// SIG undefined FUN_148e3bb8a(void)

bool FUN_148e3bb8a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e3bba4 FUN_148e3bba4 body=101 status=ok
// SIG undefined FUN_148e3bba4(void)

void FUN_148e3bba4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9abb20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad120;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3bc0a FUN_148e3bc0a body=101 status=ok
// SIG undefined FUN_148e3bc0a(void)

void FUN_148e3bc0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9abb20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad120;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3bc70 FUN_148e3bc70 body=134 status=ok
// SIG undefined FUN_148e3bc70(void)

void FUN_148e3bc70(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9abb20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad120;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3bce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3bcf6 FUN_148e3bcf6 body=44 status=ok
// SIG undefined FUN_148e3bcf6(void)

void FUN_148e3bcf6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3bd1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e3bd22 FUN_148e3bd22 body=31 status=ok
// SIG undefined FUN_148e3bd22(void)

undefined8 FUN_148e3bd22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3bd5c FUN_148e3bd5c body=29 status=ok
// SIG undefined FUN_148e3bd5c(void)

bool FUN_148e3bd5c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e3bd7a FUN_148e3bd7a body=26 status=ok
// SIG undefined FUN_148e3bd7a(void)

bool FUN_148e3bd7a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e3bd94 FUN_148e3bd94 body=101 status=ok
// SIG undefined FUN_148e3bd94(void)

void FUN_148e3bd94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9ad200;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3bdfa FUN_148e3bdfa body=101 status=ok
// SIG undefined FUN_148e3bdfa(void)

void FUN_148e3bdfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9ad200;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3be60 FUN_148e3be60 body=134 status=ok
// SIG undefined FUN_148e3be60(void)

void FUN_148e3be60(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9ad200;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad190;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3bed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3bee6 FUN_148e3bee6 body=50 status=ok
// SIG undefined FUN_148e3bee6(void)

void FUN_148e3bee6(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3bf15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e3bf1a FUN_148e3bf1a body=31 status=ok
// SIG undefined FUN_148e3bf1a(void)

undefined8 FUN_148e3bf1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3bf54 FUN_148e3bf54 body=29 status=ok
// SIG undefined FUN_148e3bf54(void)

bool FUN_148e3bf54(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e3bf72 FUN_148e3bf72 body=101 status=ok
// SIG undefined FUN_148e3bf72(void)

void FUN_148e3bf72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968dc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad270;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3bfd8 FUN_148e3bfd8 body=101 status=ok
// SIG undefined FUN_148e3bfd8(void)

void FUN_148e3bfd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968dc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad270;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3c03e FUN_148e3c03e body=134 status=ok
// SIG undefined FUN_148e3c03e(void)

void FUN_148e3c03e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b968dc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad270;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3c0b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3c0c4 FUN_148e3c0c4 body=52 status=ok
// SIG undefined FUN_148e3c0c4(void)

void FUN_148e3c0c4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3c0f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e3c0f8 FUN_148e3c0f8 body=31 status=ok
// SIG undefined FUN_148e3c0f8(void)

undefined8 FUN_148e3c0f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3c132 FUN_148e3c132 body=29 status=ok
// SIG undefined FUN_148e3c132(void)

bool FUN_148e3c132(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e3c150 FUN_148e3c150 body=101 status=ok
// SIG undefined FUN_148e3c150(void)

void FUN_148e3c150(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad2e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3c1b6 FUN_148e3c1b6 body=101 status=ok
// SIG undefined FUN_148e3c1b6(void)

void FUN_148e3c1b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad2e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3c21c FUN_148e3c21c body=134 status=ok
// SIG undefined FUN_148e3c21c(void)

void FUN_148e3c21c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b968e30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad2e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3c293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3c2a2 FUN_148e3c2a2 body=44 status=ok
// SIG undefined FUN_148e3c2a2(void)

void FUN_148e3c2a2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3c2cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e3c2e8 FUN_148e3c2e8 body=101 status=ok
// SIG undefined FUN_148e3c2e8(void)

void FUN_148e3c2e8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ad530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3c34e FUN_148e3c34e body=101 status=ok
// SIG undefined FUN_148e3c34e(void)

void FUN_148e3c34e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ad530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3c3b4 FUN_148e3c3b4 body=134 status=ok
// SIG undefined FUN_148e3c3b4(void)

void FUN_148e3c3b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad530;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3c42b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3c43a FUN_148e3c43a body=39 status=ok
// SIG undefined FUN_148e3c43a(void)

void FUN_148e3c43a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3c45d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e3c462 FUN_148e3c462 body=146 status=ok
// SIG undefined FUN_148e3c462(void)

void FUN_148e3c462(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x110,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x110)) {
      uVar5 = uVar4 / 0x110 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x110,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148e3c568 FUN_148e3c568 body=96 status=ok
// SIG undefined FUN_148e3c568(void)

undefined8 * FUN_148e3c568(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b9ad5a0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return puVar1;
}



// FUNCTION 148e3c5da FUN_148e3c5da body=57 status=ok
// SIG undefined FUN_148e3c5da(void)

undefined8 * FUN_148e3c5da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9ad5a0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3c614 FUN_148e3c614 body=31 status=ok
// SIG undefined FUN_148e3c614(void)

undefined8 FUN_148e3c614(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3c64e FUN_148e3c64e body=26 status=ok
// SIG undefined FUN_148e3c64e(void)

bool FUN_148e3c64e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e3c668 FUN_148e3c668 body=101 status=ok
// SIG undefined FUN_148e3c668(void)

void FUN_148e3c668(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9ad630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3c6ce FUN_148e3c6ce body=101 status=ok
// SIG undefined FUN_148e3c6ce(void)

void FUN_148e3c6ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9ad630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3c734 FUN_148e3c734 body=134 status=ok
// SIG undefined FUN_148e3c734(void)

void FUN_148e3c734(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9ad630;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad5c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3c7ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3c7ba FUN_148e3c7ba body=44 status=ok
// SIG undefined FUN_148e3c7ba(void)

void FUN_148e3c7ba(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3c7e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e3c7e6 FUN_148e3c7e6 body=156 status=ok
// SIG undefined FUN_148e3c7e6(void)

bool FUN_148e3c7e6(longlong param_1,undefined8 param_2)

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



// FUNCTION 148e3c886 FUN_148e3c886 body=31 status=ok
// SIG undefined FUN_148e3c886(void)

undefined8 FUN_148e3c886(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3c8c0 FUN_148e3c8c0 body=26 status=ok
// SIG undefined FUN_148e3c8c0(void)

bool FUN_148e3c8c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e3c8da FUN_148e3c8da body=101 status=ok
// SIG undefined FUN_148e3c8da(void)

void FUN_148e3c8da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9ad710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad6a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3c940 FUN_148e3c940 body=101 status=ok
// SIG undefined FUN_148e3c940(void)

void FUN_148e3c940(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9ad710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad6a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3c9a6 FUN_148e3c9a6 body=134 status=ok
// SIG undefined FUN_148e3c9a6(void)

void FUN_148e3c9a6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9ad710;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad6a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3ca1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3ca2c FUN_148e3ca2c body=62 status=ok
// SIG undefined FUN_148e3ca2c(void)

void FUN_148e3ca2c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3ca67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148e3ca6a FUN_148e3ca6a body=188 status=ok
// SIG undefined FUN_148e3ca6a(void)

bool FUN_148e3ca6a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = param_5;
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e3cb2a FUN_148e3cb2a body=103 status=ok
// SIG undefined FUN_148e3cb2a(void)

void FUN_148e3cb2a(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1406d1414();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148e3cb92(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e3cb92 FUN_148e3cb92 body=76 status=ok
// SIG undefined FUN_148e3cb92(void)

void FUN_148e3cb92(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1406d1414();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148e3cbcf;
    }
  }
  lVar2 = 0;
LAB_148e3cbcf:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 148e3cbde FUN_148e3cbde body=31 status=ok
// SIG undefined FUN_148e3cbde(void)

undefined8 FUN_148e3cbde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3cc18 FUN_148e3cc18 body=101 status=ok
// SIG undefined FUN_148e3cc18(void)

void FUN_148e3cc18(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ad830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3cc7e FUN_148e3cc7e body=101 status=ok
// SIG undefined FUN_148e3cc7e(void)

void FUN_148e3cc7e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ad830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3cce4 FUN_148e3cce4 body=134 status=ok
// SIG undefined FUN_148e3cce4(void)

void FUN_148e3cce4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad830;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3cd5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3cd6a FUN_148e3cd6a body=39 status=ok
// SIG undefined FUN_148e3cd6a(void)

void FUN_148e3cd6a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3cd8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148e3cdac FUN_148e3cdac body=29 status=ok
// SIG undefined FUN_148e3cdac(void)

bool FUN_148e3cdac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e3cdca FUN_148e3cdca body=26 status=ok
// SIG undefined FUN_148e3cdca(void)

bool FUN_148e3cdca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e3cde4 FUN_148e3cde4 body=24 status=ok
// SIG undefined FUN_148e3cde4(void)

bool FUN_148e3cde4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148e3cdfc FUN_148e3cdfc body=101 status=ok
// SIG undefined FUN_148e3cdfc(void)

void FUN_148e3cdfc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9ad8a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3ce62 FUN_148e3ce62 body=134 status=ok
// SIG undefined FUN_148e3ce62(void)

void FUN_148e3ce62(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad8a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3ced9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3cee8 FUN_148e3cee8 body=44 status=ok
// SIG undefined FUN_148e3cee8(void)

void FUN_148e3cee8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3cf11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148e3cf14 FUN_148e3cf14 body=156 status=ok
// SIG undefined FUN_148e3cf14(void)

bool FUN_148e3cf14(longlong param_1,undefined8 param_2)

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



// FUNCTION 148e3cfcc FUN_148e3cfcc body=101 status=ok
// SIG undefined FUN_148e3cfcc(void)

void FUN_148e3cfcc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b421670;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ad910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3d032 FUN_148e3d032 body=134 status=ok
// SIG undefined FUN_148e3d032(void)

void FUN_148e3d032(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b421670;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ad910;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3d0a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3d0b8 FUN_148e3d0b8 body=52 status=ok
// SIG undefined FUN_148e3d0b8(void)

void FUN_148e3d0b8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3d0e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e3d0ec FUN_148e3d0ec body=48 status=ok
// SIG undefined FUN_148e3d0ec(void)

void FUN_148e3d0ec(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x60,8);
  }
  return;
}



// FUNCTION 148e3d11c FUN_148e3d11c body=31 status=ok
// SIG undefined FUN_148e3d11c(void)

undefined8 FUN_148e3d11c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3d156 FUN_148e3d156 body=29 status=ok
// SIG undefined FUN_148e3d156(void)

bool FUN_148e3d156(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e3d174 FUN_148e3d174 body=26 status=ok
// SIG undefined FUN_148e3d174(void)

bool FUN_148e3d174(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148e3d18e FUN_148e3d18e body=101 status=ok
// SIG undefined FUN_148e3d18e(void)

void FUN_148e3d18e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9adad0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ada60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3d1f4 FUN_148e3d1f4 body=101 status=ok
// SIG undefined FUN_148e3d1f4(void)

void FUN_148e3d1f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9adad0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9ada60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148e3d25a FUN_148e3d25a body=134 status=ok
// SIG undefined FUN_148e3d25a(void)

void FUN_148e3d25a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9adad0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9ada60;
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
                    /* WARNING: Could not recover jumptable at 0x000148e3d2d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e3d2e0 FUN_148e3d2e0 body=52 status=ok
// SIG undefined FUN_148e3d2e0(void)

void FUN_148e3d2e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148e3d311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148e3d316 FUN_148e3d316 body=31 status=ok
// SIG undefined FUN_148e3d316(void)

undefined8 FUN_148e3d316(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e3d33c FUN_148e3d33c body=29 status=ok
// SIG undefined FUN_148e3d33c(void)

bool FUN_148e3d33c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148e3d35a FUN_148e3d35a body=26 status=ok
// SIG undefined FUN_148e3d35a(void)

bool FUN_148e3d35a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}


