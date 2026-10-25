// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148a04b40 FUN_148a04b40 body=48 status=ok
// SIG undefined FUN_148a04b40(void)

void FUN_148a04b40(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a04b6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  return;
}



// FUNCTION 148a04b70 FUN_148a04b70 body=31 status=ok
// SIG undefined FUN_148a04b70(void)

undefined8 FUN_148a04b70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a04baa FUN_148a04baa body=93 status=ok
// SIG undefined FUN_148a04baa(void)

void FUN_148a04baa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4783f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a04c08 FUN_148a04c08 body=93 status=ok
// SIG undefined FUN_148a04c08(void)

void FUN_148a04c08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4783f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a04c66 FUN_148a04c66 body=126 status=ok
// SIG undefined FUN_148a04c66(void)

void FUN_148a04c66(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca5b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4783f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a04cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a04ce4 FUN_148a04ce4 body=135 status=ok
// SIG undefined FUN_148a04ce4(void)

void FUN_148a04ce4(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined2 local_38 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x20);
  local_38[0] = *param_3;
  local_30 = *(longlong *)(param_3 + 4);
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (*pcVar1)(uVar2,param_2,local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a04d86 FUN_148a04d86 body=29 status=ok
// SIG undefined FUN_148a04d86(void)

bool FUN_148a04d86(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a04da4 FUN_148a04da4 body=26 status=ok
// SIG undefined FUN_148a04da4(void)

bool FUN_148a04da4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a04dbe FUN_148a04dbe body=93 status=ok
// SIG undefined FUN_148a04dbe(void)

void FUN_148a04dbe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b478460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a04e1c FUN_148a04e1c body=93 status=ok
// SIG undefined FUN_148a04e1c(void)

void FUN_148a04e1c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b478460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a04e7a FUN_148a04e7a body=126 status=ok
// SIG undefined FUN_148a04e7a(void)

void FUN_148a04e7a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b478460;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a04ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a04ef8 FUN_148a04ef8 body=35 status=ok
// SIG undefined FUN_148a04ef8(void)

void FUN_148a04ef8(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a04f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148a04f1c FUN_148a04f1c body=142 status=ok
// SIG undefined FUN_148a04f1c(void)

bool FUN_148a04f1c(longlong param_1)

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



// FUNCTION 148a04fac FUN_148a04fac body=38 status=ok
// SIG undefined FUN_148a04fac(void)

undefined8 FUN_148a04fac(undefined8 param_1,int param_2)

{
  FUN_145942a84();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a04fd2 FUN_148a04fd2 body=31 status=ok
// SIG undefined FUN_148a04fd2(void)

undefined8 FUN_148a04fd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0500c FUN_148a0500c body=93 status=ok
// SIG undefined FUN_148a0500c(void)

void FUN_148a0500c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4787c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a0506a FUN_148a0506a body=93 status=ok
// SIG undefined FUN_148a0506a(void)

void FUN_148a0506a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4787c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a050c8 FUN_148a050c8 body=126 status=ok
// SIG undefined FUN_148a050c8(void)

void FUN_148a050c8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4787c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a05137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a05146 FUN_148a05146 body=35 status=ok
// SIG undefined FUN_148a05146(void)

void FUN_148a05146(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a05165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148a05184 FUN_148a05184 body=29 status=ok
// SIG undefined FUN_148a05184(void)

bool FUN_148a05184(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a051a2 FUN_148a051a2 body=26 status=ok
// SIG undefined FUN_148a051a2(void)

bool FUN_148a051a2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a051bc FUN_148a051bc body=24 status=ok
// SIG undefined FUN_148a051bc(void)

bool FUN_148a051bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a051d4 FUN_148a051d4 body=93 status=ok
// SIG undefined FUN_148a051d4(void)

void FUN_148a051d4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b478830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a05232 FUN_148a05232 body=126 status=ok
// SIG undefined FUN_148a05232(void)

void FUN_148a05232(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b478830;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a052a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a052b0 FUN_148a052b0 body=40 status=ok
// SIG undefined FUN_148a052b0(void)

void FUN_148a052b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a052d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a052d8 FUN_148a052d8 body=62 status=ok
// SIG undefined FUN_148a052d8(void)

void FUN_148a052d8(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b47add0;
  FUN_148a0531c(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 148a0531c FUN_148a0531c body=166 status=ok
// SIG undefined FUN_148a0531c(void)

undefined8 * FUN_148a0531c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 148a053c2 FUN_148a053c2 body=127 status=ok
// SIG undefined FUN_148a053c2(void)

void FUN_148a053c2(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined2 *puVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,2);
    if (*(int *)(param_3 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_3;
    }
    (**(code **)(*plVar1 + 0xd0))(plVar1,puVar2);
    (**(code **)(*plVar1 + 0x128))(plVar1,*param_4);
                    /* WARNING: Could not recover jumptable at 0x000148a05432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148a05442 FUN_148a05442 body=62 status=ok
// SIG undefined FUN_148a05442(void)

void FUN_148a05442(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b47abe0;
  FUN_148a05486(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 148a05486 FUN_148a05486 body=156 status=ok
// SIG undefined FUN_148a05486(void)

undefined8 * FUN_148a05486(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148a05522 FUN_148a05522 body=104 status=ok
// SIG undefined FUN_148a05522(void)

void FUN_148a05522(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
    if (*(int *)(param_3 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_3;
    }
    (**(code **)(*plVar1 + 0xd0))(plVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x000148a0557d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148a0558a FUN_148a0558a body=124 status=ok
// SIG undefined FUN_148a0558a(void)

undefined8 * FUN_148a0558a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b4788a0;
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
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x2b) = *(undefined4 *)(param_1 + 0x1b);
  *(undefined4 *)(param_2 + 0x28) = uVar3;
  return puVar1;
}



// FUNCTION 148a05606 FUN_148a05606 body=29 status=ok
// SIG undefined FUN_148a05606(void)

undefined8 FUN_148a05606(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a05624 FUN_148a05624 body=38 status=ok
// SIG undefined FUN_148a05624(void)

undefined8 FUN_148a05624(undefined8 param_1,int param_2)

{
  FUN_140a58a56();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0564a FUN_148a0564a body=69 status=ok
// SIG undefined FUN_148a0564a(void)

undefined1 * FUN_148a0564a(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 148a05694 FUN_148a05694 body=31 status=ok
// SIG undefined FUN_148a05694(void)

undefined8 FUN_148a05694(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a056ce FUN_148a056ce body=93 status=ok
// SIG undefined FUN_148a056ce(void)

void FUN_148a056ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b478b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a0572c FUN_148a0572c body=93 status=ok
// SIG undefined FUN_148a0572c(void)

void FUN_148a0572c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b478b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a0578a FUN_148a0578a body=126 status=ok
// SIG undefined FUN_148a0578a(void)

void FUN_148a0578a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b1f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b478b20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a057f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a05808 FUN_148a05808 body=48 status=ok
// SIG undefined FUN_148a05808(void)

void FUN_148a05808(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a05835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a0583a FUN_148a0583a body=29 status=ok
// SIG undefined FUN_148a0583a(void)

undefined8 FUN_148a0583a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a05872 FUN_148a05872 body=29 status=ok
// SIG undefined FUN_148a05872(void)

bool FUN_148a05872(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a05890 FUN_148a05890 body=26 status=ok
// SIG undefined FUN_148a05890(void)

bool FUN_148a05890(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a058aa FUN_148a058aa body=24 status=ok
// SIG undefined FUN_148a058aa(void)

bool FUN_148a058aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a058c2 FUN_148a058c2 body=93 status=ok
// SIG undefined FUN_148a058c2(void)

void FUN_148a058c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b3b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b478b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a05920 FUN_148a05920 body=93 status=ok
// SIG undefined FUN_148a05920(void)

void FUN_148a05920(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b3b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b478b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a0597e FUN_148a0597e body=126 status=ok
// SIG undefined FUN_148a0597e(void)

void FUN_148a0597e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b3b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b478b90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a059ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a059fc FUN_148a059fc body=38 status=ok
// SIG undefined FUN_148a059fc(void)

void FUN_148a059fc(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a05a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a05a22 FUN_148a05a22 body=150 status=ok
// SIG undefined FUN_148a05a22(void)

bool FUN_148a05a22(longlong param_1,undefined4 param_2)

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



// FUNCTION 148a05aba FUN_148a05aba body=31 status=ok
// SIG undefined FUN_148a05aba(void)

undefined8 FUN_148a05aba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a05af4 FUN_148a05af4 body=93 status=ok
// SIG undefined FUN_148a05af4(void)

void FUN_148a05af4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b478c00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a05b52 FUN_148a05b52 body=93 status=ok
// SIG undefined FUN_148a05b52(void)

void FUN_148a05b52(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b478c00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a05bb0 FUN_148a05bb0 body=126 status=ok
// SIG undefined FUN_148a05bb0(void)

void FUN_148a05bb0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4332c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b478c00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a05c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a05c2e FUN_148a05c2e body=38 status=ok
// SIG undefined FUN_148a05c2e(void)

void FUN_148a05c2e(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a05c51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a05c54 FUN_148a05c54 body=31 status=ok
// SIG undefined FUN_148a05c54(void)

undefined8 FUN_148a05c54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a05c8e FUN_148a05c8e body=93 status=ok
// SIG undefined FUN_148a05c8e(void)

void FUN_148a05c8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b478c70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a05cec FUN_148a05cec body=93 status=ok
// SIG undefined FUN_148a05cec(void)

void FUN_148a05cec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b478c70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a05d4a FUN_148a05d4a body=126 status=ok
// SIG undefined FUN_148a05d4a(void)

void FUN_148a05d4a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e62a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b478c70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a05db9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a05dc8 FUN_148a05dc8 body=58 status=ok
// SIG undefined FUN_148a05dc8(void)

void FUN_148a05dc8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a05dff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148a05e02 FUN_148a05e02 body=353 status=ok
// SIG undefined FUN_148a05e02(void)

void FUN_148a05e02(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar5 = *(longlong *)*param_2;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    iVar7 = 0;
    bVar8 = *plVar2 == lVar5;
    iVar9 = 0;
    do {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar5 = lVar6;
      iVar4 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      do {
        lVar5 = lVar5 + 1;
        iVar11 = iVar4;
        if (lVar12 <= lVar5) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar8 == (plVar2[lVar5] == lVar3));
      if (bVar8 == false) {
        if (iVar7 != iVar9) {
          memmove(plVar2 + iVar7,plVar2 + lVar6,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar7 = iVar7 + (iVar11 - iVar9);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar9 = iVar11;
    } while (lVar5 < lVar12);
    *(int *)(param_1 + 1) = iVar7;
  }
  return;
}



// FUNCTION 148a05f64 FUN_148a05f64 body=62 status=ok
// SIG undefined FUN_148a05f64(void)

void FUN_148a05f64(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b478ce0;
  FUN_148a05fa2(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 148a05fa2 FUN_148a05fa2 body=168 status=ok
// SIG undefined FUN_148a05fa2(void)

undefined8 * FUN_148a05fa2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 148a0604a FUN_148a0604a body=62 status=ok
// SIG undefined FUN_148a0604a(void)

void FUN_148a0604a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b478d00;
  FUN_148a06088(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 148a06088 FUN_148a06088 body=166 status=ok
// SIG undefined FUN_148a06088(void)

undefined8 * FUN_148a06088(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 148a0612e FUN_148a0612e body=118 status=ok
// SIG undefined FUN_148a0612e(void)

undefined8 * FUN_148a0612e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b47b010;
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
  *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 148a061ae FUN_148a061ae body=81 status=ok
// SIG undefined FUN_148a061ae(void)

undefined8 FUN_148a061ae(longlong param_1)

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



// FUNCTION 148a06206 FUN_148a06206 body=89 status=ok
// SIG undefined FUN_148a06206(void)

bool FUN_148a06206(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a06251;
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
LAB_148a06251:
  return lVar6 == param_2;
}



// FUNCTION 148a0627c FUN_148a0627c body=118 status=ok
// SIG undefined FUN_148a0627c(void)

void FUN_148a0627c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b478da0;
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



// FUNCTION 148a062f2 FUN_148a062f2 body=156 status=ok
// SIG undefined FUN_148a062f2(void)

void FUN_148a062f2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b478da0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a0637e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a0638e FUN_148a0638e body=104 status=ok
// SIG undefined FUN_148a0638e(void)

void FUN_148a0638e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a063db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a063ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148a063f6 FUN_148a063f6 body=140 status=ok
// SIG undefined FUN_148a063f6(void)

undefined8 * FUN_148a063f6(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b478e10;
  puVar1 = puVar4 + 1;
  puVar4[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar4 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  return puVar1;
}



// FUNCTION 148a064a0 FUN_148a064a0 body=313 status=ok
// SIG undefined FUN_148a064a0(void)

void FUN_148a064a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  ulonglong uStack_60;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar5 + 0x238))(plVar5,&local_49);
  local_68 = (void *)0x0;
  uStack_60 = 0;
  plVar5 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  local_40 = 0;
  local_48 = 0;
  (**(code **)(*plVar5 + 0x1c8))(plVar5,&local_48,&local_40);
  FUN_1409ee323(local_48,local_40,&local_68);
  cVar4 = (**(code **)(*param_2 + 0x30))(param_2);
  _Src = local_68;
  if (cVar4 == '\0') {
    pcVar2 = *(code **)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 8);
    local_78 = (void *)0x0;
    lVar6 = (longlong)(int)uStack_60;
    local_70 = (int)uStack_60;
    if (lVar6 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,uStack_60 & 0xffffffff,0);
      memcpy(local_78,_Src,lVar6 * 2);
    }
    (*pcVar2)(iVar1 + lVar3,local_49,&local_78);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a065e6 FUN_148a065e6 body=362 status=ok
// SIG undefined FUN_148a065e6(void)

void FUN_148a065e6(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1446f470e(&local_a8,&DAT_149dfb77a,1);
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  plVar5 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar5 + 0x38))(plVar5);
  FUN_148a0051d(plVar5,&local_a8);
  (**(code **)(*plVar5 + 0x48))(plVar5,&local_a8);
  cVar4 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar4 == '\0') {
    pcVar2 = *(code **)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 8);
    local_100 = local_a8;
    local_d8 = 0;
    local_d0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_cc = 0xffffffff00000080;
    local_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_140d188f2(&local_f8,&local_a0);
    (*pcVar2)(iVar1 + lVar3,&local_100);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  local_58 = 0;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(&local_a0);
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a06752 FUN_148a06752 body=68 status=ok
// SIG undefined FUN_148a06752(void)

void FUN_148a06752(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_148a06796();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148a06796 FUN_148a06796 body=322 status=ok
// SIG undefined FUN_148a06796(void)

void FUN_148a06796(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 148a068f2 FUN_148a068f2 body=101 status=ok
// SIG undefined FUN_148a068f2(void)

void FUN_148a068f2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b478eb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a06958 FUN_148a06958 body=134 status=ok
// SIG undefined FUN_148a06958(void)

void FUN_148a06958(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b478eb0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a069cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a069ee FUN_148a069ee body=96 status=ok
// SIG undefined FUN_148a069ee(void)

void FUN_148a069ee(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 148a06a4e FUN_148a06a4e body=96 status=ok
// SIG undefined FUN_148a06a4e(void)

void FUN_148a06a4e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 148a06aae FUN_148a06aae body=114 status=ok
// SIG undefined FUN_148a06aae(void)

void FUN_148a06aae(longlong *param_1,int param_2)

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



// FUNCTION 148a06b20 FUN_148a06b20 body=30 status=ok
// SIG undefined FUN_148a06b20(void)

void * FUN_148a06b20(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a06b44 FUN_148a06b44 body=30 status=ok
// SIG undefined FUN_148a06b44(void)

void * FUN_148a06b44(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a06b6e FUN_148a06b6e body=126 status=ok
// SIG undefined FUN_148a06b6e(void)

void FUN_148a06b6e(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_140f67fee(uVar2,&local_28);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),local_28);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a06bee FUN_148a06bee body=30 status=ok
// SIG undefined FUN_148a06bee(void)

void * FUN_148a06bee(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a06c12 FUN_148a06c12 body=238 status=ok
// SIG undefined FUN_148a06c12(void)

undefined8 * FUN_148a06c12(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148a06d00 FUN_148a06d00 body=143 status=ok
// SIG undefined FUN_148a06d00(void)

void FUN_148a06d00(longlong param_1,int param_2)

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



// FUNCTION 148a06d90 FUN_148a06d90 body=62 status=ok
// SIG undefined FUN_148a06d90(void)

void FUN_148a06d90(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b478f80;
  FUN_148a06dd4(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 148a06dd4 FUN_148a06dd4 body=217 status=ok
// SIG undefined FUN_148a06dd4(void)

undefined8 * FUN_148a06dd4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
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
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1458ce778(param_1 + 2,iVar1);
    FUN_1412f953b(param_1[2],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  uVar2 = param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1458ce7da(param_1 + 5,iVar1);
    FUN_1412f9427(param_1[5],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148a06ec0 FUN_148a06ec0 body=85 status=ok
// SIG undefined FUN_148a06ec0(void)

void FUN_148a06ec0(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (longlong)param_3 * 0x38 + *param_2;
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_140fbd045(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000148a06eff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148a06f0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1);
  return;
}



// FUNCTION 148a06f1a FUN_148a06f1a body=58 status=ok
// SIG undefined FUN_148a06f1a(void)

void FUN_148a06f1a(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0x38 + *param_2;
  (**(code **)(*param_1 + 0x38))();
  FUN_140fbd045(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000148a06f51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 148a06f6b FUN_148a06f6b body=89 status=ok
// SIG undefined FUN_148a06f6b(void)

void FUN_148a06f6b(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (longlong)param_3 * 0x30 + *param_2;
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_140fbd266(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000148a06fae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148a06fbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1);
  return;
}



// FUNCTION 148a06fc9 FUN_148a06fc9 body=62 status=ok
// SIG undefined FUN_148a06fc9(void)

void FUN_148a06fc9(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0x30 + *param_2;
  (**(code **)(*param_1 + 0x38))();
  FUN_140fbd266(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000148a07004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 148a07008 FUN_148a07008 body=96 status=ok
// SIG undefined FUN_148a07008(void)

undefined8 * FUN_148a07008(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b478fa0;
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



// FUNCTION 148a07068 FUN_148a07068 body=146 status=ok
// SIG undefined FUN_148a07068(void)

undefined8 * FUN_148a07068(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14b478fc0;
  puVar1 = puVar3 + 1;
  puVar3[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar3 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 148a070fa FUN_148a070fa body=30 status=ok
// SIG undefined FUN_148a070fa(void)

void * FUN_148a070fa(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148a07124 FUN_148a07124 body=122 status=ok
// SIG undefined FUN_148a07124(void)

void FUN_148a07124(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_1c);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_1c);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a071a6 FUN_148a071a6 body=147 status=ok
// SIG undefined FUN_148a071a6(void)

void FUN_148a071a6(longlong param_1,int param_2)

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



// FUNCTION 148a07242 FUN_148a07242 body=81 status=ok
// SIG undefined FUN_148a07242(void)

undefined8 FUN_148a07242(longlong param_1)

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



// FUNCTION 148a0729a FUN_148a0729a body=118 status=ok
// SIG undefined FUN_148a0729a(void)

void FUN_148a0729a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b479020;
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



// FUNCTION 148a07310 FUN_148a07310 body=118 status=ok
// SIG undefined FUN_148a07310(void)

void FUN_148a07310(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b479020;
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



// FUNCTION 148a07386 FUN_148a07386 body=156 status=ok
// SIG undefined FUN_148a07386(void)

void FUN_148a07386(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b479020;
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
                    /* WARNING: Could not recover jumptable at 0x000148a07412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a07422 FUN_148a07422 body=100 status=ok
// SIG undefined FUN_148a07422(void)

ulonglong FUN_148a07422(longlong param_1)

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
LAB_148a0747b:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a0747b;
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



// FUNCTION 148a0748e FUN_148a0748e body=81 status=ok
// SIG undefined FUN_148a0748e(void)

undefined8 FUN_148a0748e(longlong param_1)

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



// FUNCTION 148a074f2 FUN_148a074f2 body=118 status=ok
// SIG undefined FUN_148a074f2(void)

void FUN_148a074f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b47b050;
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



// FUNCTION 148a07568 FUN_148a07568 body=118 status=ok
// SIG undefined FUN_148a07568(void)

void FUN_148a07568(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b47b050;
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



// FUNCTION 148a075de FUN_148a075de body=156 status=ok
// SIG undefined FUN_148a075de(void)

void FUN_148a075de(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b47b050;
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
                    /* WARNING: Could not recover jumptable at 0x000148a0766a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a0767a FUN_148a0767a body=101 status=ok
// SIG undefined FUN_148a0767a(void)

ulonglong FUN_148a0767a(longlong param_1)

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
LAB_148a076d4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a076d4;
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



// FUNCTION 148a076e6 FUN_148a076e6 body=81 status=ok
// SIG undefined FUN_148a076e6(void)

undefined8 FUN_148a076e6(longlong param_1)

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



// FUNCTION 148a0773e FUN_148a0773e body=118 status=ok
// SIG undefined FUN_148a0773e(void)

void FUN_148a0773e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b479090;
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



// FUNCTION 148a077b4 FUN_148a077b4 body=118 status=ok
// SIG undefined FUN_148a077b4(void)

void FUN_148a077b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b479090;
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



// FUNCTION 148a0782a FUN_148a0782a body=156 status=ok
// SIG undefined FUN_148a0782a(void)

void FUN_148a0782a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b479090;
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
                    /* WARNING: Could not recover jumptable at 0x000148a078b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a078c6 FUN_148a078c6 body=101 status=ok
// SIG undefined FUN_148a078c6(void)

ulonglong FUN_148a078c6(longlong param_1)

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
LAB_148a07920:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a07920;
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



// FUNCTION 148a0792c FUN_148a0792c body=120 status=ok
// SIG undefined FUN_148a0792c(void)

undefined8 * FUN_148a0792c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b47adf0;
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
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 148a079aa FUN_148a079aa body=140 status=ok
// SIG undefined FUN_148a079aa(void)

undefined8 * FUN_148a079aa(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b47b030;
  puVar1 = puVar4 + 1;
  puVar4[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar4 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  return puVar1;
}



// FUNCTION 148a07a48 FUN_148a07a48 body=130 status=ok
// SIG undefined FUN_148a07a48(void)

void FUN_148a07a48(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_140f67fee(uVar2,&local_28);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_28);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a07ad8 FUN_148a07ad8 body=48 status=ok
// SIG undefined FUN_148a07ad8(void)

void FUN_148a07ad8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 148a07b08 FUN_148a07b08 body=96 status=ok
// SIG undefined FUN_148a07b08(void)

void FUN_148a07b08(longlong param_1,int param_2)

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



// FUNCTION 148a07b68 FUN_148a07b68 body=84 status=ok
// SIG undefined FUN_148a07b68(void)

void FUN_148a07b68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4750f0;
  FUN_1449db362(param_1 + 9);
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_LAB_149f1b660;
  FUN_1449db362(param_1 + 1);
  return;
}



// FUNCTION 148a07bc2 FUN_148a07bc2 body=9 status=ok
// SIG undefined FUN_148a07bc2(void)

void FUN_148a07bc2(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x28) = *(char *)(param_1 + 0x28) + (param_2 - 1U | 1);
  return;
}



// FUNCTION 148a07bcc FUN_148a07bcc body=23 status=ok
// SIG undefined FUN_148a07bcc(void)

undefined8 FUN_148a07bcc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1405af5a4(param_1,*(undefined4 *)(param_3 + 0xc),0);
  return 0;
}



// FUNCTION 148a07be4 FUN_148a07be4 body=77 status=ok
// SIG undefined FUN_148a07be4(void)

ulonglong FUN_148a07be4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar4;
  longlong lVar5;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,0xff);
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar5 = (longlong)*(int *)(param_1 + 0x20) * 0x70;
    do {
      lVar1 = FUN_140059518(lVar4 + 8);
      if (lVar1 == param_2) {
        if (lVar4 != 0) {
          uVar2 = CONCAT71(uVar3,*(undefined1 *)(lVar4 + 0x68));
        }
        break;
      }
      lVar4 = lVar4 + 0x70;
      lVar5 = lVar5 + -0x70;
    } while (lVar5 != 0);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148a07c32 FUN_148a07c32 body=506 status=ok
// SIG undefined FUN_148a07c32(void)

void FUN_148a07c32(longlong *param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *_Str;
  char cVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60;
  int local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_148a07e2e(param_2);
  if (lVar5 != 0) {
    if ((int)param_1[1] < 1) {
      _Str = L"0";
    }
    else if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar3 = _wtoi(_Str);
    if ((longlong)*(int *)(lVar5 + 0x20) != 0) {
      lVar8 = *(longlong *)(lVar5 + 0x18);
      lVar10 = (longlong)*(int *)(lVar5 + 0x20) * 0x70;
      do {
        lVar6 = FUN_140059518(lVar8 + 8);
        if ((lVar6 != 0) && (*(int *)(lVar6 + 0xe0) == iVar3)) {
          if (lVar8 != 0) {
            if (1 < (int)param_1[1]) {
              FUN_144a2b0a4(*param_1 + 0x10,&local_50);
              cVar7 = '\0';
              goto LAB_148a07d13;
            }
            if (*(char *)(lVar8 + 0x69) == '\0') {
              *(undefined2 *)(lVar8 + 0x68) = 0x100;
            }
            else {
              if (*(char *)(lVar8 + 0x68) < '\n') {
                cVar7 = *(char *)(lVar8 + 0x68) + '\x01';
              }
              else {
                *(undefined1 *)(lVar8 + 0x69) = 0;
                cVar7 = -1;
              }
              *(char *)(lVar8 + 0x68) = cVar7;
            }
            goto LAB_148a07e18;
          }
          break;
        }
        lVar8 = lVar8 + 0x70;
        lVar10 = lVar10 + -0x70;
      } while (lVar10 != 0);
    }
  }
  goto LAB_148a07cb1;
  while (cVar7 = cVar7 + '\x01', cVar7 != '\v') {
LAB_148a07d13:
    FUN_14596891a(local_70,cVar7);
    FUN_144a6c01e(local_70,&local_60);
    if (local_58 == local_48) {
      bVar11 = true;
      if (1 < local_58) {
        lVar10 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_60 + lVar10);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)(local_50 + lVar10);
          uVar9 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148a07d5d;
            }
            iVar3 = uVar4 - uVar9;
            goto LAB_148a07dc5;
          }
          if (uVar1 == 0) break;
LAB_148a07d5d:
          lVar10 = lVar10 + 2;
        }
        iVar3 = 0;
LAB_148a07dc5:
        bVar11 = iVar3 == 0;
      }
    }
    else {
      bVar11 = local_48 + local_58 == 1;
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (bVar11) goto LAB_148a07df0;
  }
  cVar7 = -1;
LAB_148a07df0:
  *(char *)(lVar8 + 0x68) = cVar7;
  *(bool *)(lVar8 + 0x69) = cVar7 != -1;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
LAB_148a07e18:
  FUN_1405af9d0(lVar5,lVar8);
LAB_148a07cb1:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a07e2e FUN_148a07e2e body=46 status=ok
// SIG undefined FUN_148a07e2e(void)

undefined8 FUN_148a07e2e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_14497e828();
    lVar2 = FUN_140dbafcc(uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_148a003d4(lVar2);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 148a07e5c FUN_148a07e5c body=66 status=ok
// SIG undefined FUN_148a07e5c(void)

void FUN_148a07e5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = FUN_148a07e2e(param_2);
  if (0 < *(int *)(param_1 + 1)) {
    cVar2 = FUN_1456afa18(*param_1);
    if (cVar2 != '\0') {
      FUN_145c23eb2(uVar1);
      return;
    }
  }
  FUN_145c9c04a(uVar1);
  return;
}



// FUNCTION 148a07ec6 thunk_FUN_144837462 body=5 status=ok
// SIG undefined thunk_FUN_144837462(void)

undefined8 thunk_FUN_144837462(longlong *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  
  if (*(code **)(*param_1 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)param_1 + 0x154) & 1) == 0) ||
       ((int)param_1[0x3a] <= *(int *)((longlong)param_1 + 0x1fc))) {
LAB_144837614:
      lVar7 = FUN_144837648(param_1,param_2,1);
      if (lVar7 == 0) {
        return 0;
      }
      FUN_14012a344(param_1,lVar7,0);
      puVar8 = (undefined8 *)(lVar7 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar4 = (**(code **)(*param_1 + 0x300))(param_1);
    if (cVar4 == '\0') goto LAB_144837614;
  }
  puVar6 = (uint *)&DAT_14c948618;
  if (((*param_2 != 0) && (0 < param_2[1])) && (*param_2 != DAT_14c948000)) {
    puVar6 = (uint *)(param_2 + 2);
    if (0 < param_2[9]) {
      puVar6 = *(uint **)(param_2 + 6);
    }
    if (1 < (uint)param_2[1]) {
      puVar6 = *(uint **)(param_2 + 6);
    }
  }
  uVar2 = *puVar6;
  uVar3 = puVar6[2];
  uVar5 = uVar2;
  if (uVar3 != 0) {
    uVar5 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar3) - uVar5;
    uVar12 = uVar9 >> 0xd ^ (uVar3 - uVar5) - uVar9;
    uVar5 = uVar12 >> 0xc ^ (uVar5 - uVar9) - uVar12;
    uVar14 = uVar5 << 0x10 ^ (uVar9 - uVar12) - uVar5;
    uVar9 = uVar14 >> 5 ^ (uVar12 - uVar5) - uVar14;
    uVar12 = uVar9 >> 3 ^ (uVar5 - uVar14) - uVar9;
    uVar5 = uVar12 << 10 ^ (uVar14 - uVar9) - uVar12;
    uVar5 = uVar5 >> 0xf ^ uVar9 - (uVar12 + uVar5);
  }
  if ((int)param_1[0x3a] != *(int *)((longlong)param_1 + 0x1fc)) {
    plVar10 = param_1 + 0x40;
    if ((longlong *)param_1[0x41] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x41];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x42] - 1U & uVar5) * 4);
    if (iVar11 != -1) {
      lVar7 = param_1[0x39];
      while ((lVar13 = (longlong)iVar11 * 0x20, *(uint *)(lVar7 + lVar13) != uVar2 ||
             (lVar1 = lVar7 + lVar13, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar11 = *(int *)(lVar7 + 0x18 + lVar13);
        if (iVar11 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar8 = (undefined8 *)(lVar1 + 0x10);
      if (puVar8 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar8;
    }
  }
  return 0;
}



// FUNCTION 148a07ecc FUN_148a07ecc body=22 status=ok
// SIG undefined FUN_148a07ecc(void)

undefined8 FUN_148a07ecc(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb92e20;
  if (DAT_14cb92e20 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb92e20 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb92e20 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb92e20[0x3a] <= *(int *)((longlong)DAT_14cb92e20 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb92e20 + 0x300))(DAT_14cb92e20);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 148a07f82 FUN_148a07f82 body=36 status=ok
// SIG undefined FUN_148a07f82(void)

longlong FUN_148a07f82(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144837462();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(char *)(lVar1 + 0x18) != '\0') {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}



// FUNCTION 148a07fa6 FUN_148a07fa6 body=250 status=ok
// SIG undefined FUN_148a07fa6(void)

void FUN_148a07fa6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb92ee0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb92ed8;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb92ee8;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb92ef0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb92ef8;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb92f00;
  return;
}



// FUNCTION 148a080e0 FUN_148a080e0 body=42 status=ok
// SIG undefined FUN_148a080e0(void)

void FUN_148a080e0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_148a0810a();
  memset(_Dst,0,0x98);
  FUN_140d5d920(_Dst);
  return;
}



// FUNCTION 148a0810a FUN_148a0810a body=113 status=ok
// SIG undefined FUN_148a0810a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148a0810a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb93088;
  if (DAT_14cb93088 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x1300,0);
    lVar4 = 0x1f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x13;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb93088;
    _DAT_14cb93090 = _DAT_14cb93090 + 0x20;
  }
  DAT_14cb93088 = (undefined8 *)*puVar2;
  _DAT_14cb93094 = _DAT_14cb93094 + 1;
  return;
}



// FUNCTION 148a0817c FUN_148a0817c body=44 status=ok
// SIG undefined FUN_148a0817c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148a0817c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb93094 = _DAT_14cb93094 + -1;
  *param_1 = DAT_14cb93088;
  DAT_14cb93088 = param_1;
  return;
}



// FUNCTION 148a081a8 FUN_148a081a8 body=44 status=ok
// SIG undefined FUN_148a081a8(void)

void FUN_148a081a8(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1,0,0x98);
  FUN_140d5d920(param_1);
  return;
}



// FUNCTION 148a081d4 FUN_148a081d4 body=38 status=ok
// SIG undefined FUN_148a081d4(void)

undefined8 FUN_148a081d4(undefined8 param_1,int param_2)

{
  FUN_140ea1866();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a081fe FUN_148a081fe body=48 status=ok
// SIG undefined FUN_148a081fe(void)

void FUN_148a081fe(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148a0822e FUN_148a0822e body=96 status=ok
// SIG undefined FUN_148a0822e(void)

void FUN_148a0822e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 148a0828e FUN_148a0828e body=114 status=ok
// SIG undefined FUN_148a0828e(void)

void FUN_148a0828e(longlong *param_1,int param_2)

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



// FUNCTION 148a08300 FUN_148a08300 body=201 status=ok
// SIG undefined FUN_148a08300(void)

void FUN_148a08300(longlong *param_1,int param_2)

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



// FUNCTION 148a083ca FUN_148a083ca body=68 status=ok
// SIG undefined FUN_148a083ca(void)

undefined8 * FUN_148a083ca(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b47b790;
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



// FUNCTION 148a08412 FUN_148a08412 body=81 status=ok
// SIG undefined FUN_148a08412(void)

undefined8 FUN_148a08412(longlong param_1)

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



// FUNCTION 148a0846a FUN_148a0846a body=89 status=ok
// SIG undefined FUN_148a0846a(void)

bool FUN_148a0846a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a084b5;
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
LAB_148a084b5:
  return lVar6 == param_2;
}



// FUNCTION 148a084ec FUN_148a084ec body=118 status=ok
// SIG undefined FUN_148a084ec(void)

void FUN_148a084ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b800;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b47b790;
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



// FUNCTION 148a08562 FUN_148a08562 body=156 status=ok
// SIG undefined FUN_148a08562(void)

void FUN_148a08562(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b800;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b47b790;
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
                    /* WARNING: Could not recover jumptable at 0x000148a085ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a085fe FUN_148a085fe body=114 status=ok
// SIG undefined FUN_148a085fe(void)

void FUN_148a085fe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148a08658:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148a08658;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
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
                    /* WARNING: Could not recover jumptable at 0x000148a08654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a08670 FUN_148a08670 body=110 status=ok
// SIG undefined FUN_148a08670(void)

ulonglong FUN_148a08670(longlong param_1)

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
LAB_148a086d3:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148a086d3;
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



// FUNCTION 148a086e0 FUN_148a086e0 body=68 status=ok
// SIG undefined FUN_148a086e0(void)

undefined8 * FUN_148a086e0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b47b870;
  plVar2 = (longlong *)param_1[5];
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



// FUNCTION 148a08728 FUN_148a08728 body=81 status=ok
// SIG undefined FUN_148a08728(void)

undefined8 FUN_148a08728(longlong param_1)

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



// FUNCTION 148a08780 FUN_148a08780 body=89 status=ok
// SIG undefined FUN_148a08780(void)

bool FUN_148a08780(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a087cb;
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
LAB_148a087cb:
  return lVar6 == param_2;
}



// FUNCTION 148a08802 FUN_148a08802 body=126 status=ok
// SIG undefined FUN_148a08802(void)

void FUN_148a08802(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b8e0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b47b870;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 148a08880 FUN_148a08880 body=164 status=ok
// SIG undefined FUN_148a08880(void)

void FUN_148a08880(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _LIST_ENTRY *p_Var8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b8e0;
  p_Var8 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var8;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b47b870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar6;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar7;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a08914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a08924 FUN_148a08924 body=126 status=ok
// SIG undefined FUN_148a08924(void)

void FUN_148a08924(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x28);
  bVar3 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar5 = (int)plVar6[1];
    lVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_148a0895a;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x20);
    bVar3 = false;
  }
LAB_148a0895a:
  (**(code **)(param_1 + 0x30))
            (*(int *)(param_1 + 0x38) + lVar7,param_2,*(undefined8 *)(param_1 + 8),
             *(undefined8 *)(param_1 + 0x10));
  if (!bVar3) {
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
                    /* WARNING: Could not recover jumptable at 0x000148a08992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a089a4 FUN_148a089a4 body=68 status=ok
// SIG undefined FUN_148a089a4(void)

undefined8 * FUN_148a089a4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b47b950;
  plVar2 = (longlong *)param_1[5];
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



// FUNCTION 148a089ec FUN_148a089ec body=81 status=ok
// SIG undefined FUN_148a089ec(void)

undefined8 FUN_148a089ec(longlong param_1)

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



// FUNCTION 148a08a44 FUN_148a08a44 body=89 status=ok
// SIG undefined FUN_148a08a44(void)

bool FUN_148a08a44(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a08a8f;
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
LAB_148a08a8f:
  return lVar6 == param_2;
}



// FUNCTION 148a08ac6 FUN_148a08ac6 body=126 status=ok
// SIG undefined FUN_148a08ac6(void)

void FUN_148a08ac6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b9c0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b47b950;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 148a08b44 FUN_148a08b44 body=164 status=ok
// SIG undefined FUN_148a08b44(void)

void FUN_148a08b44(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _LIST_ENTRY *p_Var8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b9c0;
  p_Var8 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var8;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b47b950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar6;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar7;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a08bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a08be8 FUN_148a08be8 body=126 status=ok
// SIG undefined FUN_148a08be8(void)

void FUN_148a08be8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x28);
  bVar3 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar5 = (int)plVar6[1];
    lVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_148a08c1e;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x20);
    bVar3 = false;
  }
LAB_148a08c1e:
  (**(code **)(param_1 + 0x30))
            (*(int *)(param_1 + 0x38) + lVar7,param_2,*(undefined8 *)(param_1 + 8),
             *(undefined8 *)(param_1 + 0x10));
  if (!bVar3) {
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
                    /* WARNING: Could not recover jumptable at 0x000148a08c56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a08c68 FUN_148a08c68 body=68 status=ok
// SIG undefined FUN_148a08c68(void)

undefined8 * FUN_148a08c68(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b47ba30;
  plVar2 = (longlong *)param_1[5];
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



// FUNCTION 148a08cb0 FUN_148a08cb0 body=81 status=ok
// SIG undefined FUN_148a08cb0(void)

undefined8 FUN_148a08cb0(longlong param_1)

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



// FUNCTION 148a08d08 FUN_148a08d08 body=89 status=ok
// SIG undefined FUN_148a08d08(void)

bool FUN_148a08d08(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a08d53;
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
LAB_148a08d53:
  return lVar6 == param_2;
}



// FUNCTION 148a08d8a FUN_148a08d8a body=126 status=ok
// SIG undefined FUN_148a08d8a(void)

void FUN_148a08d8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47baa0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b47ba30;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 148a08e08 FUN_148a08e08 body=164 status=ok
// SIG undefined FUN_148a08e08(void)

void FUN_148a08e08(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _LIST_ENTRY *p_Var8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b47baa0;
  p_Var8 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var8;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b47ba30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar6;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar7;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a08e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a08eac FUN_148a08eac body=124 status=ok
// SIG undefined FUN_148a08eac(void)

void FUN_148a08eac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x28);
  bVar3 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar7[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_148a08ee0;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar6 = *(longlong *)(param_1 + 0x20);
    bVar3 = false;
  }
LAB_148a08ee0:
  (**(code **)(param_1 + 0x30))
            (*(int *)(param_1 + 0x38) + lVar6,*(undefined8 *)(param_1 + 8),
             *(undefined8 *)(param_1 + 0x10));
  if (!bVar3) {
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
                    /* WARNING: Could not recover jumptable at 0x000148a08f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a08f2a FUN_148a08f2a body=421 status=ok
// SIG undefined FUN_148a08f2a(void)

undefined4 * FUN_148a08f2a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148a090d0(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  *(undefined4 *)local_40 = *puVar1;
  *(undefined4 *)((longlong)local_40 + 4) = uVar5;
  *(undefined4 *)(local_40 + 1) = uVar6;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar7;
  local_40[2] = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = *local_40;
  uVar4 = local_40[1];
  uVar9 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar14 = (uint)uVar3 & 0xffff;
  uVar14 = ((uint)uVar3 << 0x10 | uVar14) + (int)((ulonglong)uVar3 >> 0x20) +
           (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar14 >> 4);
  uVar9 = (uint)((ulonglong)uVar4 >> 0x10);
  uVar11 = (uint)uVar4 & 0xffff;
  uVar14 = (uVar14 >> 2) +
           ((uint)uVar4 << 0x10 | uVar11) + (int)((ulonglong)uVar4 >> 0x20) +
           (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar11 >> 4) + uVar14 * 0x40 + 0x9e3779b9 ^ uVar14;
  cVar8 = FUN_148a091b6(param_1,uVar14,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar8 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar12 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= *(int *)(param_1 + 0x48))) {
      uVar14 = *(int *)(param_1 + 0x48) - 1U & uVar14;
      *(uint *)((longlong)local_40 + 0x1c) = uVar14;
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar14) * 4);
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar14) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar12;
      FUN_148a092ba(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a090d0 FUN_148a090d0 body=229 status=ok
// SIG undefined FUN_148a090d0(void)

int * FUN_148a090d0(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 148a091b6 FUN_148a091b6 body=145 status=ok
// SIG undefined FUN_148a091b6(void)

undefined8 FUN_148a091b6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x20;
        puVar1 = (undefined4 *)(lVar2 + lVar7);
        if ((*(longlong *)(lVar2 + lVar7) == *param_3) &&
           (*(longlong *)(lVar2 + 8 + lVar7) == param_3[1])) {
          lVar2 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar2;
          puVar1[1] = uVar3;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar4;
          FUN_148a09248((int)lVar2,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = puVar1[6];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 148a09248 FUN_148a09248 body=114 status=ok
// SIG undefined FUN_148a09248(void)

void FUN_148a09248(longlong *param_1,int param_2)

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



// FUNCTION 148a092ba FUN_148a092ba body=581 status=ok
// SIG undefined FUN_148a092ba(void)

void FUN_148a092ba(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar8 = (longlong)iVar6 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar8);
        uVar5 = *(undefined8 *)(lVar3 + 8 + lVar8);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar9 = (uint)uVar4 & 0xffff;
        uVar9 = ((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar12 = (uint)uVar5 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar5 << 0x10 | uVar12) + (int)((ulonglong)uVar5 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4) + uVar9 * 0x40 +
                       (uVar9 >> 2) + 0x9e3779b9 ^ uVar9) & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar3 + 0x1c + lVar8) = iVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar8) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a0968e FUN_148a0968e body=398 status=ok
// SIG undefined FUN_148a0968e(void)

void FUN_148a0968e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143ec36a6(&local_40,local_20,local_28,local_29);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0981e FUN_148a0981e body=600 status=ok
// SIG undefined FUN_148a0981e(void)

void FUN_148a0981e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_138 [40];
  undefined **local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined1 local_e8 [24];
  undefined1 local_d0 [40];
  undefined **local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_a8 = &PTR_FUN_14b023b08;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0x3b9cbb9e;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_110 = &PTR_FUN_14b023b08;
  local_108 = local_a0;
  local_100 = local_98;
  local_f8 = 0;
  local_f0 = local_88;
  FUN_1401f3da4(local_e8,&local_80);
  FUN_143c7bde4(local_d0,&uStack_68);
  FUN_143ec35a8(local_30,local_38,local_39,&local_110);
  FUN_140485912(&local_a8);
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a09b24 FUN_148a09b24 body=59 status=ok
// SIG undefined FUN_148a09b24(void)

undefined8 FUN_148a09b24(longlong *param_1)

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



// FUNCTION 148a09c14 FUN_148a09c14 body=59 status=ok
// SIG undefined FUN_148a09c14(void)

undefined8 FUN_148a09c14(longlong *param_1)

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



// FUNCTION 148a09c60 FUN_148a09c60 body=38 status=ok
// SIG undefined FUN_148a09c60(void)

void FUN_148a09c60(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_148a09cd4(param_2);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 148a09cd4 FUN_148a09cd4 body=86 status=ok
// SIG undefined FUN_148a09cd4(void)

void FUN_148a09cd4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_1403c48c4(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148a09d8c FUN_148a09d8c body=59 status=ok
// SIG undefined FUN_148a09d8c(void)

undefined8 FUN_148a09d8c(longlong *param_1)

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



// FUNCTION 148a09dd8 FUN_148a09dd8 body=38 status=ok
// SIG undefined FUN_148a09dd8(void)

void FUN_148a09dd8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x208) == '\x01') {
    FUN_140e7b284(param_2);
    *(undefined1 *)(param_2 + 0x208) = 0;
  }
  return;
}



// FUNCTION 148a09e4e FUN_148a09e4e body=43 status=ok
// SIG undefined FUN_148a09e4e(void)

undefined8 FUN_148a09e4e(undefined8 param_1,int param_2)

{
  FUN_140e7b284();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 148a09ed4 FUN_148a09ed4 body=59 status=ok
// SIG undefined FUN_148a09ed4(void)

undefined8 FUN_148a09ed4(longlong *param_1)

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



// FUNCTION 148a09f74 FUN_148a09f74 body=55 status=ok
// SIG undefined FUN_148a09f74(void)

void FUN_148a09f74(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93198 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93198 = FUN_140002ddd(FUN_14657044b,uVar1,L"AIWantsToFireWeaponValueResolver");
  }
  return;
}



// FUNCTION 148a09fb8 FUN_148a09fb8 body=37 status=ok
// SIG undefined FUN_148a09fb8(void)

void FUN_148a09fb8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1f0);
  FUN_143ebfe16(param_2);
  return;
}



// FUNCTION 148a0a004 FUN_148a0a004 body=63 status=ok
// SIG undefined FUN_148a0a004(void)

undefined1 FUN_148a0a004(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a0a12c(param_2,param_3);
    param_3 = param_3 + 0x1f0;
    param_2 = param_2 + 0x1f0;
  }
  return 1;
}



// FUNCTION 148a0a06c FUN_148a0a06c body=59 status=ok
// SIG undefined FUN_148a0a06c(void)

undefined8 FUN_148a0a06c(longlong *param_1)

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



// FUNCTION 148a0a0b8 FUN_148a0a0b8 body=38 status=ok
// SIG undefined FUN_148a0a0b8(void)

void FUN_148a0a0b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    FUN_140db0c8c(param_2);
    *(undefined1 *)(param_2 + 0x1f0) = 0;
  }
  return;
}



// FUNCTION 148a0a12c FUN_148a0a12c body=242 status=ok
// SIG undefined FUN_148a0a12c(void)

longlong FUN_148a0a12c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
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
  byte bVar12;
  longlong lVar13;
  
  FUN_140311eb6();
  if (param_2 != param_1) {
    FUN_1401b31d8(param_1 + 0x10,param_2 + 0x10);
    FUN_1401b31d8(param_1 + 0x28,param_2 + 0x28);
  }
  lVar13 = *(longlong *)(param_2 + 0x40);
  if (DAT_14c950c29 == 1) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x40);
    }
  }
  bVar12 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x40) = lVar13;
  lVar13 = *(longlong *)(param_2 + 0x48);
  if ((bVar12 & 1) != 0) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x48);
    }
  }
  *(longlong *)(param_1 + 0x48) = lVar13;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0x68);
  uVar5 = *(undefined4 *)(param_2 + 0x6c);
  uVar6 = *(undefined4 *)(param_2 + 0x70);
  uVar7 = *(undefined4 *)(param_2 + 0x74);
  uVar8 = *(undefined4 *)(param_2 + 0x78);
  uVar9 = *(undefined4 *)(param_2 + 0x7c);
  uVar10 = *(undefined4 *)(param_2 + 0x80);
  uVar11 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  *(undefined4 *)(param_1 + 0x74) = uVar7;
  *(undefined4 *)(param_1 + 0x78) = uVar8;
  *(undefined4 *)(param_1 + 0x7c) = uVar9;
  *(undefined4 *)(param_1 + 0x80) = uVar10;
  *(undefined4 *)(param_1 + 0x84) = uVar11;
  FUN_141689bc8(param_1 + 0x88,param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  FUN_148a0a21e(param_1 + 0x150,param_2 + 0x150);
  FUN_148a0a376(param_1 + 0x1a0,param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 148a0a21e FUN_148a0a21e body=122 status=ok
// SIG undefined FUN_148a0a21e(void)

longlong FUN_148a0a21e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_148a0a298(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148a0a298 FUN_148a0a298 body=221 status=ok
// SIG undefined FUN_148a0a298(void)

longlong * FUN_148a0a298(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140db0f56(param_1,(ulonglong)uVar1);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar5 = *param_1;
      lVar3 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        uVar2 = *(uint *)((longlong)plVar8 + (uVar7 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar5 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
        if ((uVar2 >> ((uint)uVar7 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar5 + 4 + lVar6) = *(undefined4 *)(lVar3 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar5 + 8 + lVar6) = *(undefined8 *)(lVar3 + 8 + lVar6);
          lVar4 = *(longlong *)(lVar3 + 0x10 + lVar6);
          *(longlong *)(lVar5 + 0x10 + lVar6) = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar5 + 0x18 + lVar6) = *(undefined8 *)(lVar3 + 0x18 + lVar6);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 148a0a376 FUN_148a0a376 body=122 status=ok
// SIG undefined FUN_148a0a376(void)

longlong FUN_148a0a376(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_148a0a3f0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148a0a3f0 FUN_148a0a3f0 body=119 status=ok
// SIG undefined FUN_148a0a3f0(void)

undefined8 * FUN_148a0a3f0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140db0edc(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 148a0a486 FUN_148a0a486 body=63 status=ok
// SIG undefined FUN_148a0a486(void)

undefined1 FUN_148a0a486(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140ffb226(param_2,param_3);
    param_3 = param_3 + 0x4c0;
    param_2 = param_2 + 0x4c0;
  }
  return 1;
}



// FUNCTION 148a0a4ee FUN_148a0a4ee body=59 status=ok
// SIG undefined FUN_148a0a4ee(void)

undefined8 FUN_148a0a4ee(longlong *param_1)

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



// FUNCTION 148a0a590 FUN_148a0a590 body=43 status=ok
// SIG undefined FUN_148a0a590(void)

void FUN_148a0a590(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e6d4da(param_2);
  *param_2 = &PTR_FUN_14b487170;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 148a0a5d2 FUN_148a0a5d2 body=87 status=ok
// SIG undefined FUN_148a0a5d2(void)

undefined8 FUN_148a0a5d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 8;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      puVar2 = (undefined8 *)(param_2 + 0x10 + lVar6);
      *(undefined4 *)((longlong)puVar2 + -9) = *(undefined4 *)((longlong)puVar1 + 7);
      puVar2[-2] = *puVar1;
      puVar4 = puVar1 + 2;
      puVar5 = puVar2;
      for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)(puVar2 + 0xe) = *(undefined1 *)(puVar1 + 0x10);
      puVar2[0xf] = puVar1[0x11];
      lVar6 = lVar6 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a0a652 FUN_148a0a652 body=59 status=ok
// SIG undefined FUN_148a0a652(void)

undefined8 FUN_148a0a652(longlong *param_1)

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



// FUNCTION 148a0a710 FUN_148a0a710 body=52 status=ok
// SIG undefined FUN_148a0a710(void)

void FUN_148a0a710(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x138);
  FUN_145a1920e(param_2);
  FUN_145a191cc((longlong)param_2 + 0xb0);
  return;
}



// FUNCTION 148a0a744 FUN_148a0a744 body=36 status=ok
// SIG undefined FUN_148a0a744(void)

void FUN_148a0a744(undefined8 param_1,longlong param_2)

{
  FUN_145a1920e(param_2);
  FUN_145a191cc(param_2 + 0xb0);
  return;
}



// FUNCTION 148a0a786 FUN_148a0a786 body=304 status=ok
// SIG undefined FUN_148a0a786(void)

undefined8 FUN_148a0a786(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
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
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
    do {
      *(undefined8 *)(param_2 + -0xa0) = *(undefined8 *)(param_3 + -0xa0);
      uVar1 = *(undefined4 *)(param_3 + -0xd0);
      uVar2 = *(undefined4 *)(param_3 + -0xcc);
      uVar3 = *(undefined4 *)(param_3 + -200);
      uVar4 = *(undefined4 *)(param_3 + -0xc4);
      uVar5 = *(undefined4 *)(param_3 + -0xc0);
      uVar6 = *(undefined4 *)(param_3 + -0xbc);
      uVar7 = *(undefined4 *)(param_3 + -0xb8);
      uVar8 = *(undefined4 *)(param_3 + -0xb4);
      uVar9 = *(undefined4 *)(param_3 + -0xac);
      uVar10 = *(undefined4 *)(param_3 + -0xa8);
      uVar11 = *(undefined4 *)(param_3 + -0xa4);
      *(undefined4 *)(param_2 + -0xb0) = *(undefined4 *)(param_3 + -0xb0);
      *(undefined4 *)(param_2 + -0xac) = uVar9;
      *(undefined4 *)(param_2 + -0xa8) = uVar10;
      *(undefined4 *)(param_2 + -0xa4) = uVar11;
      *(undefined4 *)(param_2 + -0xc0) = uVar5;
      *(undefined4 *)(param_2 + -0xbc) = uVar6;
      *(undefined4 *)(param_2 + -0xb8) = uVar7;
      *(undefined4 *)(param_2 + -0xb4) = uVar8;
      *(undefined4 *)(param_2 + -0xd0) = uVar1;
      *(undefined4 *)(param_2 + -0xcc) = uVar2;
      *(undefined4 *)(param_2 + -200) = uVar3;
      *(undefined4 *)(param_2 + -0xc4) = uVar4;
      if (param_3 != param_2) {
        FUN_1401b31d8(param_2 + -0x98,param_3 + -0x98);
      }
      puVar14 = (undefined8 *)(param_3 + -0x80);
      puVar15 = (undefined8 *)(param_2 + -0x80);
      for (lVar13 = 0xb; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      }
      uVar1 = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x25) = *(undefined4 *)(param_3 + -0x25);
      *(undefined4 *)(param_2 + -0x28) = uVar1;
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      uVar4 = *(undefined4 *)(param_3 + -0x10);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      *(undefined4 *)(param_2 + -0x10) = uVar4;
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      FUN_148a0a9a0(param_2,param_3);
      uVar12 = *(undefined8 *)(param_3 + 0x58);
      *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
      *(undefined8 *)(param_2 + 0x58) = uVar12;
      *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_3 + 0x60);
      param_3 = param_3 + 0x138;
      param_2 = param_2 + 0x138;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a0a8de FUN_148a0a8de body=59 status=ok
// SIG undefined FUN_148a0a8de(void)

undefined8 FUN_148a0a8de(longlong *param_1)

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



// FUNCTION 148a0a92a FUN_148a0a92a body=40 status=ok
// SIG undefined FUN_148a0a92a(void)

void FUN_148a0a92a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_1458943fe(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 148a0a9a0 FUN_148a0a9a0 body=104 status=ok
// SIG undefined FUN_148a0a9a0(void)

void * FUN_148a0a9a0(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x40);
    if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x48);
    *(int *)((longlong)param_1 + 0x48) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 8;
    }
    else {
      FUN_148a0aa08(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x40);
        if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148a0aa08 FUN_148a0aa08 body=101 status=ok
// SIG undefined FUN_148a0aa08(void)

void FUN_148a0aa08(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148a0aa6e(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 148a0aa6e FUN_148a0aa6e body=133 status=ok
// SIG undefined FUN_148a0aa6e(void)

void FUN_148a0aa6e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 148a0aaf4 FUN_148a0aaf4 body=68 status=ok
// SIG undefined FUN_148a0aaf4(void)

void FUN_148a0aaf4(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b484030;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 148a0ab38 FUN_148a0ab38 body=50 status=ok
// SIG undefined FUN_148a0ab38(void)

void FUN_148a0ab38(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b484030;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 148a0ab8e FUN_148a0ab8e body=75 status=ok
// SIG undefined FUN_148a0ab8e(void)

undefined1 FUN_148a0ab8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a0ac02 FUN_148a0ac02 body=59 status=ok
// SIG undefined FUN_148a0ac02(void)

undefined8 FUN_148a0ac02(longlong *param_1)

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



// FUNCTION 148a0ac48 FUN_148a0ac48 body=32 status=ok
// SIG undefined FUN_148a0ac48(void)

void FUN_148a0ac48(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_140f48e2c(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148a0acb6 FUN_148a0acb6 body=43 status=ok
// SIG undefined FUN_148a0acb6(void)

undefined8 FUN_148a0acb6(undefined8 param_1,int param_2)

{
  FUN_140f48e2c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148a0ace2 FUN_148a0ace2 body=55 status=ok
// SIG undefined FUN_148a0ace2(void)

void FUN_148a0ace2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb932c0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb932c0 = FUN_140002ddd(FUN_146570942,uVar1,L"CrosshairDef");
  }
  return;
}



// FUNCTION 148a0ad74 FUN_148a0ad74 body=59 status=ok
// SIG undefined FUN_148a0ad74(void)

undefined8 FUN_148a0ad74(longlong *param_1)

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



// FUNCTION 148a0ae14 FUN_148a0ae14 body=55 status=ok
// SIG undefined FUN_148a0ae14(void)

void FUN_148a0ae14(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb932f0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb932f0 = FUN_140002ddd(FUN_146570a09,uVar1,L"CurrentWeaponValueResolver");
  }
  return;
}



// FUNCTION 148a0aea4 FUN_148a0aea4 body=163 status=ok
// SIG undefined FUN_148a0aea4(void)

undefined8 FUN_148a0aea4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar10,param_3 + 0x28 + lVar10);
      FUN_144983130(param_2 + 0x38 + lVar10,param_3 + 0x38 + lVar10);
      *(undefined8 *)(param_2 + 0x70 + lVar10) = *(undefined8 *)(param_3 + 0x70 + lVar10);
      *(undefined1 *)(param_2 + 0x7c + lVar10) = *(undefined1 *)(param_3 + 0x7c + lVar10);
      *(undefined4 *)(param_2 + 0x78 + lVar10) = *(undefined4 *)(param_3 + 0x78 + lVar10);
      lVar10 = lVar10 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a0af70 FUN_148a0af70 body=59 status=ok
// SIG undefined FUN_148a0af70(void)

undefined8 FUN_148a0af70(longlong *param_1)

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



// FUNCTION 148a0afbc FUN_148a0afbc body=57 status=ok
// SIG undefined FUN_148a0afbc(void)

void FUN_148a0afbc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 148a0b046 FUN_148a0b046 body=42 status=ok
// SIG undefined FUN_148a0b046(void)

void FUN_148a0b046(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b4845c0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 148a0b094 FUN_148a0b094 body=76 status=ok
// SIG undefined FUN_148a0b094(void)

undefined1 FUN_148a0b094(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    param_2 = param_2 + 0xe8;
    param_3 = param_3 + 0xe8;
  }
  return 1;
}



// FUNCTION 148a0b108 FUN_148a0b108 body=59 status=ok
// SIG undefined FUN_148a0b108(void)

undefined8 FUN_148a0b108(longlong *param_1)

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



// FUNCTION 148a0b154 FUN_148a0b154 body=38 status=ok
// SIG undefined FUN_148a0b154(void)

void FUN_148a0b154(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148a0b1fa FUN_148a0b1fa body=63 status=ok
// SIG undefined FUN_148a0b1fa(void)

undefined1 FUN_148a0b1fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a0b324(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148a0b262 FUN_148a0b262 body=59 status=ok
// SIG undefined FUN_148a0b262(void)

undefined8 FUN_148a0b262(longlong *param_1)

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



// FUNCTION 148a0b2ae FUN_148a0b2ae body=40 status=ok
// SIG undefined FUN_148a0b2ae(void)

void FUN_148a0b2ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_145c2c7f0(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148a0b324 FUN_148a0b324 body=121 status=ok
// SIG undefined FUN_148a0b324(void)

longlong FUN_148a0b324(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  return param_1;
}



// FUNCTION 148a0b39e FUN_148a0b39e body=97 status=ok
// SIG undefined FUN_148a0b39e(void)

void FUN_148a0b39e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x100);
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b4849a0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0x3f800000;
  *(undefined4 *)(param_2 + 0x1f) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xfc) = 0;
  return;
}



// FUNCTION 148a0b400 FUN_148a0b400 body=81 status=ok
// SIG undefined FUN_148a0b400(void)

void FUN_148a0b400(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b4849a0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0x3f800000;
  *(undefined4 *)(param_2 + 0x1f) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xfc) = 0;
  return;
}



// FUNCTION 148a0b476 FUN_148a0b476 body=104 status=ok
// SIG undefined FUN_148a0b476(void)

undefined8 FUN_148a0b476(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    uVar4 = *(undefined4 *)(param_3 + 0xe8);
    uVar5 = *(undefined4 *)(param_3 + 0xec);
    uVar6 = *(undefined4 *)(param_3 + 0xf0);
    uVar7 = *(undefined4 *)(param_3 + 0xf4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    *(undefined4 *)(param_2 + 0xe8) = uVar4;
    *(undefined4 *)(param_2 + 0xec) = uVar5;
    *(undefined4 *)(param_2 + 0xf0) = uVar6;
    *(undefined4 *)(param_2 + 0xf4) = uVar7;
    *(undefined8 *)(param_2 + 0xf5) = *(undefined8 *)(param_3 + 0xf5);
    param_2 = param_2 + 0x100;
    param_3 = param_3 + 0x100;
  }
  return 1;
}



// FUNCTION 148a0b506 FUN_148a0b506 body=59 status=ok
// SIG undefined FUN_148a0b506(void)

undefined8 FUN_148a0b506(longlong *param_1)

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



// FUNCTION 148a0b552 FUN_148a0b552 body=38 status=ok
// SIG undefined FUN_148a0b552(void)

void FUN_148a0b552(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 148a0b5c6 FUN_148a0b5c6 body=43 status=ok
// SIG undefined FUN_148a0b5c6(void)

undefined8 FUN_148a0b5c6(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 148a0b5f2 FUN_148a0b5f2 body=55 status=ok
// SIG undefined FUN_148a0b5f2(void)

void FUN_148a0b5f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb933a8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb933a8 = FUN_140002ddd(FUN_146570ce0,uVar1,L"GbxBrainAspect_ReloadWeapon");
  }
  return;
}



// FUNCTION 148a0b62a FUN_148a0b62a body=62 status=ok
// SIG undefined FUN_148a0b62a(void)

void FUN_148a0b62a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e48d86(param_2);
  *param_2 = &PTR_FUN_14b484c20;
  FUN_140bbae66(param_2 + 0x10);
  param_2[0xa8] = 0;
  *(undefined1 *)(param_2 + 0xa9) = 0;
  return;
}



// FUNCTION 148a0b690 FUN_148a0b690 body=221 status=ok
// SIG undefined FUN_148a0b690(void)

undefined8 FUN_148a0b690(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_144983130(lVar1 + 0x38,lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x70);
      *(undefined1 *)(lVar1 + 0x7c) = *(undefined1 *)(lVar2 + 0x7c);
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar2 + 0x78);
      FUN_140ffb226(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      *(undefined8 *)(lVar1 + 0x540) = *(undefined8 *)(lVar2 + 0x540);
      *(undefined4 *)(lVar1 + 0x548) = *(undefined4 *)(lVar2 + 0x548);
      lVar10 = lVar10 + 0x550;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a0b796 FUN_148a0b796 body=59 status=ok
// SIG undefined FUN_148a0b796(void)

undefined8 FUN_148a0b796(longlong *param_1)

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



// FUNCTION 148a0b7e2 FUN_148a0b7e2 body=57 status=ok
// SIG undefined FUN_148a0b7e2(void)

void FUN_148a0b7e2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xaa) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xaa) = 0;
  }
  return;
}



// FUNCTION 148a0b86c FUN_148a0b86c body=58 status=ok
// SIG undefined FUN_148a0b86c(void)

void FUN_148a0b86c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b484e20;
  param_2[0x1e] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined8 *)((longlong)param_2 + 0xe5) = 0;
  return;
}



// FUNCTION 148a0b8ca FUN_148a0b8ca body=90 status=ok
// SIG undefined FUN_148a0b8ca(void)

undefined1 FUN_148a0b8ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    uVar4 = *(undefined4 *)(param_3 + 0xe8);
    uVar5 = *(undefined4 *)(param_3 + 0xec);
    uVar6 = *(undefined4 *)(param_3 + 0xf0);
    uVar7 = *(undefined4 *)(param_3 + 0xf4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    *(undefined4 *)(param_2 + 0xe8) = uVar4;
    *(undefined4 *)(param_2 + 0xec) = uVar5;
    *(undefined4 *)(param_2 + 0xf0) = uVar6;
    *(undefined4 *)(param_2 + 0xf4) = uVar7;
    param_2 = param_2 + 0xf8;
    param_3 = param_3 + 0xf8;
  }
  return 1;
}



// FUNCTION 148a0b94c FUN_148a0b94c body=59 status=ok
// SIG undefined FUN_148a0b94c(void)

undefined8 FUN_148a0b94c(longlong *param_1)

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



// FUNCTION 148a0b998 FUN_148a0b998 body=38 status=ok
// SIG undefined FUN_148a0b998(void)

void FUN_148a0b998(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148a0ba3e FUN_148a0ba3e body=63 status=ok
// SIG undefined FUN_148a0ba3e(void)

undefined1 FUN_148a0ba3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a0bb66(param_2,param_3);
    param_3 = param_3 + 0x588;
    param_2 = param_2 + 0x588;
  }
  return 1;
}



// FUNCTION 148a0baa6 FUN_148a0baa6 body=59 status=ok
// SIG undefined FUN_148a0baa6(void)

undefined8 FUN_148a0baa6(longlong *param_1)

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



// FUNCTION 148a0baf2 FUN_148a0baf2 body=38 status=ok
// SIG undefined FUN_148a0baf2(void)

void FUN_148a0baf2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x588) == '\x01') {
    FUN_14123985e(param_2);
    *(undefined1 *)(param_2 + 0x588) = 0;
  }
  return;
}



// FUNCTION 148a0bb66 FUN_148a0bb66 body=192 status=ok
// SIG undefined FUN_148a0bb66(void)

longlong FUN_148a0bb66(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_147f23058(param_1 + 0x80,param_2 + 0x80);
  FUN_141459e2c(param_1 + 0x198,param_2 + 0x198);
  uVar1 = *(undefined4 *)(param_2 + 0x2ac);
  uVar2 = *(undefined4 *)(param_2 + 0x2b0);
  uVar3 = *(undefined4 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2ac) = uVar1;
  *(undefined4 *)(param_1 + 0x2b0) = uVar2;
  *(undefined4 *)(param_1 + 0x2b4) = uVar3;
  FUN_144983130(param_1 + 0x2b8,param_2 + 0x2b8);
  FUN_140e7790a(param_1 + 0x2f0,param_2 + 0x2f0);
  *(undefined1 *)(param_1 + 0x308) = *(undefined1 *)(param_2 + 0x308);
  FUN_14054d68c(param_1 + 0x310,param_2 + 0x310);
  return param_1;
}



// FUNCTION 148a0bc58 FUN_148a0bc58 body=63 status=ok
// SIG undefined FUN_148a0bc58(void)

undefined1 FUN_148a0bc58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a0bd80(param_2,param_3);
    param_3 = param_3 + 0x550;
    param_2 = param_2 + 0x550;
  }
  return 1;
}



// FUNCTION 148a0bcc0 FUN_148a0bcc0 body=59 status=ok
// SIG undefined FUN_148a0bcc0(void)

undefined8 FUN_148a0bcc0(longlong *param_1)

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



// FUNCTION 148a0bd0c FUN_148a0bd0c body=38 status=ok
// SIG undefined FUN_148a0bd0c(void)

void FUN_148a0bd0c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x550) == '\x01') {
    FUN_1412b957a(param_2);
    *(undefined1 *)(param_2 + 0x550) = 0;
  }
  return;
}



// FUNCTION 148a0bd80 FUN_148a0bd80 body=310 status=ok
// SIG undefined FUN_148a0bd80(void)

longlong FUN_148a0bd80(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_147f23058(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0x198,param_2 + 0x198);
  FUN_14054d68c(param_1 + 0x1d0,param_2 + 0x1d0);
  *(undefined1 *)(param_1 + 0x44a) = *(undefined1 *)(param_2 + 0x44a);
  *(undefined2 *)(param_1 + 0x448) = *(undefined2 *)(param_2 + 0x448);
  FUN_144983130(param_1 + 0x450,param_2 + 0x450);
  *(undefined2 *)(param_1 + 0x488) = *(undefined2 *)(param_2 + 0x488);
  lVar8 = *(longlong *)(param_2 + 0x490);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x490);
    }
  }
  *(longlong *)(param_1 + 0x490) = lVar8;
  *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x4a0);
  FUN_144983130(param_1 + 0x4a8,param_2 + 0x4a8);
  FUN_144983130(param_1 + 0x4e0,param_2 + 0x4e0);
  FUN_144983130(param_1 + 0x518,param_2 + 0x518);
  return param_1;
}



// FUNCTION 148a0bee8 FUN_148a0bee8 body=63 status=ok
// SIG undefined FUN_148a0bee8(void)

undefined1 FUN_148a0bee8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a0c0a6(param_2,param_3);
    param_3 = param_3 + 0x6e8;
    param_2 = param_2 + 0x6e8;
  }
  return 1;
}



// FUNCTION 148a0bf50 FUN_148a0bf50 body=59 status=ok
// SIG undefined FUN_148a0bf50(void)

undefined8 FUN_148a0bf50(longlong *param_1)

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



// FUNCTION 148a0bf9c FUN_148a0bf9c body=38 status=ok
// SIG undefined FUN_148a0bf9c(void)

void FUN_148a0bf9c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x6e8) == '\x01') {
    FUN_1410a5ac6(param_2);
    *(undefined1 *)(param_2 + 0x6e8) = 0;
  }
  return;
}



// FUNCTION 148a0c010 FUN_148a0c010 body=149 status=ok
// SIG undefined FUN_148a0c010(void)

undefined8 * FUN_148a0c010(undefined8 *param_1)

{
  FUN_140c2310e();
  *param_1 = &PTR_FUN_14b485360;
  FUN_140785382(param_1 + 0x33,10);
  *(undefined4 *)(param_1 + 0x3a) = 0x1010101;
  param_1[0x3b] = 0;
  *(undefined2 *)(param_1 + 0x3f) = 4;
  *(undefined4 *)(param_1 + 0x3c) = 0x42340000;
  *(undefined1 *)(param_1 + 0x40) = 3;
  *(char *)(param_1 + 0x41) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x42) = 0;
  FUN_140bbae66(param_1 + 0x43);
  param_1[0xdb] = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  return param_1;
}



// FUNCTION 148a0c0a6 FUN_148a0c0a6 body=198 status=ok
// SIG undefined FUN_148a0c0a6(void)

longlong FUN_148a0c0a6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_147f23058(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0x198,param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  FUN_144983130(param_1 + 0x1d8,param_2 + 0x1d8);
  *(undefined2 *)(param_1 + 0x210) = *(undefined2 *)(param_2 + 0x210);
  FUN_140ffb226(param_1 + 0x218,param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x6d8) = *(undefined8 *)(param_2 + 0x6d8);
  *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(param_2 + 0x6e0);
  return param_1;
}



// FUNCTION 148a0c19e FUN_148a0c19e body=63 status=ok
// SIG undefined FUN_148a0c19e(void)

undefined1 FUN_148a0c19e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a0c2c8(param_2,param_3);
    param_3 = param_3 + 0x910;
    param_2 = param_2 + 0x910;
  }
  return 1;
}



// FUNCTION 148a0c206 FUN_148a0c206 body=59 status=ok
// SIG undefined FUN_148a0c206(void)

undefined8 FUN_148a0c206(longlong *param_1)

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


