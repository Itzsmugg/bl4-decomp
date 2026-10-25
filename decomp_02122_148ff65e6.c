// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148ff65e6 FUN_148ff65e6 body=101 status=ok
// SIG undefined FUN_148ff65e6(void)

void FUN_148ff65e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403f60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba5e610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ff664c FUN_148ff664c body=134 status=ok
// SIG undefined FUN_148ff664c(void)

void FUN_148ff664c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403f60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5e610;
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
                    /* WARNING: Could not recover jumptable at 0x000148ff66c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ff66d2 FUN_148ff66d2 body=62 status=ok
// SIG undefined FUN_148ff66d2(void)

void FUN_148ff66d2(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ff670d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148ff6710 FUN_148ff6710 body=177 status=ok
// SIG undefined FUN_148ff6710(void)

bool FUN_148ff6710(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
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



// FUNCTION 148ff67c2 FUN_148ff67c2 body=29 status=ok
// SIG undefined FUN_148ff67c2(void)

undefined8 FUN_148ff67c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff67fa FUN_148ff67fa body=29 status=ok
// SIG undefined FUN_148ff67fa(void)

bool FUN_148ff67fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ff6818 FUN_148ff6818 body=26 status=ok
// SIG undefined FUN_148ff6818(void)

bool FUN_148ff6818(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ff6832 FUN_148ff6832 body=24 status=ok
// SIG undefined FUN_148ff6832(void)

bool FUN_148ff6832(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148ff684a FUN_148ff684a body=101 status=ok
// SIG undefined FUN_148ff684a(void)

void FUN_148ff684a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba5e680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ff68b0 FUN_148ff68b0 body=101 status=ok
// SIG undefined FUN_148ff68b0(void)

void FUN_148ff68b0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba5e680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ff6916 FUN_148ff6916 body=134 status=ok
// SIG undefined FUN_148ff6916(void)

void FUN_148ff6916(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5e680;
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
                    /* WARNING: Could not recover jumptable at 0x000148ff698d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ff699c FUN_148ff699c body=39 status=ok
// SIG undefined FUN_148ff699c(void)

void FUN_148ff699c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ff69bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148ff69c4 FUN_148ff69c4 body=146 status=ok
// SIG undefined FUN_148ff69c4(void)

bool FUN_148ff69c4(longlong param_1)

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



// FUNCTION 148ff6a58 FUN_148ff6a58 body=29 status=ok
// SIG undefined FUN_148ff6a58(void)

undefined8 FUN_148ff6a58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff6a90 FUN_148ff6a90 body=29 status=ok
// SIG undefined FUN_148ff6a90(void)

bool FUN_148ff6a90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ff6aae FUN_148ff6aae body=26 status=ok
// SIG undefined FUN_148ff6aae(void)

bool FUN_148ff6aae(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ff6ac8 FUN_148ff6ac8 body=24 status=ok
// SIG undefined FUN_148ff6ac8(void)

bool FUN_148ff6ac8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148ff6ae0 FUN_148ff6ae0 body=101 status=ok
// SIG undefined FUN_148ff6ae0(void)

void FUN_148ff6ae0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba5e6f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ff6b46 FUN_148ff6b46 body=101 status=ok
// SIG undefined FUN_148ff6b46(void)

void FUN_148ff6b46(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba5e6f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ff6bac FUN_148ff6bac body=134 status=ok
// SIG undefined FUN_148ff6bac(void)

void FUN_148ff6bac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5e6f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ff6c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ff6c32 FUN_148ff6c32 body=44 status=ok
// SIG undefined FUN_148ff6c32(void)

void FUN_148ff6c32(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ff6c5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148ff6c5e FUN_148ff6c5e body=156 status=ok
// SIG undefined FUN_148ff6c5e(void)

bool FUN_148ff6c5e(longlong param_1,undefined8 param_2)

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



// FUNCTION 148ff6cfc FUN_148ff6cfc body=328 status=ok
// SIG undefined FUN_148ff6cfc(void)

void FUN_148ff6cfc(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xe4 + (longlong)iVar4 * 0xe8) * 4) =
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



// FUNCTION 148ff6e46 FUN_148ff6e46 body=285 status=ok
// SIG undefined FUN_148ff6e46(void)

void FUN_148ff6e46(longlong *param_1)

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
      FUN_148fdd144(*local_60 + (longlong)iStack_44 * 0xe8 + 8);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140032aa6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff6f64 FUN_148ff6f64 body=300 status=ok
// SIG undefined FUN_148ff6f64(void)

undefined4 * FUN_148ff6f64(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  FUN_148ff7092(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_148fe890c(local_40 + 2,uVar1);
  local_40[0x38] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_148ff717e(param_1,uVar5,local_40,&local_4c);
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
      local_40[0x39] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x38] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148ff7298(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff7092 FUN_148ff7092 body=235 status=ok
// SIG undefined FUN_148ff7092(void)

int * FUN_148ff7092(longlong *param_1,int *param_2)

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
      FUN_1404f0360(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xe8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xe8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xe8 + *param_1;
  return param_2;
}



// FUNCTION 148ff717e FUN_148ff717e body=160 status=ok
// SIG undefined FUN_148ff717e(void)

undefined8 FUN_148ff717e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xe8);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0xe8) == *param_3) {
          FUN_148fdd144((longlong)_Dst + 8);
          memmove(_Dst,param_3,0xe0);
          FUN_148ff721e(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xe0);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 148ff721e FUN_148ff721e body=122 status=ok
// SIG undefined FUN_148ff721e(void)

void FUN_148ff721e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xe8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe8 + 4) = uVar5;
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



// FUNCTION 148ff7298 FUN_148ff7298 body=432 status=ok
// SIG undefined FUN_148ff7298(void)

void FUN_148ff7298(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xe8;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xe4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xe0 + lVar7) =
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



// FUNCTION 148ff744a FUN_148ff744a body=52 status=ok
// SIG undefined FUN_148ff744a(void)

undefined8 * FUN_148ff744a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba5e7d0;
  FUN_1449db362(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff7498 FUN_148ff7498 body=29 status=ok
// SIG undefined FUN_148ff7498(void)

bool FUN_148ff7498(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 148ff74b6 FUN_148ff74b6 body=26 status=ok
// SIG undefined FUN_148ff74b6(void)

bool FUN_148ff74b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 148ff74d0 FUN_148ff74d0 body=24 status=ok
// SIG undefined FUN_148ff74d0(void)

bool FUN_148ff74d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 != 0;
}



// FUNCTION 148ff74f4 FUN_148ff74f4 body=135 status=ok
// SIG undefined FUN_148ff74f4(void)

void FUN_148ff74f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5e7d0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  FUN_148ff784e(puVar1 + 2,param_1 + 0x10);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14ba5e760;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 148ff757c FUN_148ff757c body=135 status=ok
// SIG undefined FUN_148ff757c(void)

void FUN_148ff757c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5e7d0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  FUN_148ff784e(puVar1 + 2,param_1 + 0x10);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14ba5e760;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 148ff7604 FUN_148ff7604 body=171 status=ok
// SIG undefined FUN_148ff7604(void)

void FUN_148ff7604(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba5e7d0;
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = 0;
  FUN_148ff784e(&p_Var1->ProcessLocksList,param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5e760;
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ff769f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ff76b0 FUN_148ff76b0 body=162 status=ok
// SIG undefined FUN_148ff76b0(void)

void FUN_148ff76b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_14479d2ce(param_1 + 0x28);
  pcVar2 = *(code **)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x38);
  local_50 = 0;
  local_48 = 0;
  FUN_148ff784e(&local_50,param_1 + 0x10);
  local_68 = *(undefined4 *)(param_1 + 8);
  local_60 = &local_50;
  (*pcVar2)(iVar1 + lVar3,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff7754 FUN_148ff7754 body=246 status=ok
// SIG undefined FUN_148ff7754(void)

bool FUN_148ff7754(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong *local_70;
  code *local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x28,&local_58,0);
    lVar4 = local_58;
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar3 != 0) {
    local_60 = *(code **)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x38);
    local_58 = 0;
    local_50 = 0;
    FUN_148ff784e(&local_58,param_1 + 0x10);
    local_78 = *(undefined4 *)(param_1 + 8);
    local_70 = &local_58;
    (*local_60)(iVar1 + lVar3,param_2,param_3,param_4);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff784e FUN_148ff784e body=130 status=ok
// SIG undefined FUN_148ff784e(void)

void FUN_148ff784e(longlong *param_1,longlong *param_2)

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



// FUNCTION 148ff78d2 FUN_148ff78d2 body=52 status=ok
// SIG undefined FUN_148ff78d2(void)

undefined8 * FUN_148ff78d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba5e8b0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff7920 FUN_148ff7920 body=29 status=ok
// SIG undefined FUN_148ff7920(void)

bool FUN_148ff7920(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 == param_2;
}



// FUNCTION 148ff793e FUN_148ff793e body=26 status=ok
// SIG undefined FUN_148ff793e(void)

bool FUN_148ff793e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x20,1);
  return lVar1 == 0;
}



// FUNCTION 148ff7958 FUN_148ff7958 body=24 status=ok
// SIG undefined FUN_148ff7958(void)

bool FUN_148ff7958(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 != 0;
}



// FUNCTION 148ff797c FUN_148ff797c body=129 status=ok
// SIG undefined FUN_148ff797c(void)

void FUN_148ff797c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5e8b0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_148ff784e(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14ba5e840;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 148ff79fe FUN_148ff79fe body=129 status=ok
// SIG undefined FUN_148ff79fe(void)

void FUN_148ff79fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5e8b0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_148ff784e(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14ba5e840;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 148ff7a80 FUN_148ff7a80 body=165 status=ok
// SIG undefined FUN_148ff7a80(void)

void FUN_148ff7a80(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba5e8b0;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = 0;
  FUN_148ff784e(&p_Var1->CriticalSection,param_1 + 8);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5e840;
  DVar3 = *(DWORD *)(param_1 + 0x24);
  DVar4 = *(DWORD *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar3;
  p_Var1->Flags = DVar4;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar5;
  p_Var1->SpareWORD = (short)((uint)uVar5 >> 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ff7b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ff7b26 FUN_148ff7b26 body=123 status=ok
// SIG undefined FUN_148ff7b26(void)

void FUN_148ff7b26(longlong param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_14479d2ce(param_1 + 0x20);
  pcVar2 = *(code **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  local_38 = 0;
  local_30 = 0;
  FUN_148ff784e(&local_38,param_1 + 8);
  (*pcVar2)(iVar1 + lVar3,param_2,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff7ba2 FUN_148ff7ba2 body=206 status=ok
// SIG undefined FUN_148ff7ba2(void)

bool FUN_148ff7ba2(longlong param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x20,&local_48,0);
    lVar5 = local_48;
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x30);
    local_48 = 0;
    local_40 = 0;
    FUN_148ff784e(&local_48,param_1 + 8);
    (*pcVar2)(iVar1 + lVar4,param_2,&local_48);
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff7c74 FUN_148ff7c74 body=29 status=ok
// SIG undefined FUN_148ff7c74(void)

undefined8 FUN_148ff7c74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff7cac FUN_148ff7cac body=29 status=ok
// SIG undefined FUN_148ff7cac(void)

bool FUN_148ff7cac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ff7cca FUN_148ff7cca body=26 status=ok
// SIG undefined FUN_148ff7cca(void)

bool FUN_148ff7cca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ff7ce4 FUN_148ff7ce4 body=24 status=ok
// SIG undefined FUN_148ff7ce4(void)

bool FUN_148ff7ce4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148ff7d08 FUN_148ff7d08 body=101 status=ok
// SIG undefined FUN_148ff7d08(void)

void FUN_148ff7d08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5e990;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba5e920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ff7d6e FUN_148ff7d6e body=101 status=ok
// SIG undefined FUN_148ff7d6e(void)

void FUN_148ff7d6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5e990;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba5e920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ff7dd4 FUN_148ff7dd4 body=134 status=ok
// SIG undefined FUN_148ff7dd4(void)

void FUN_148ff7dd4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba5e990;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5e920;
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
                    /* WARNING: Could not recover jumptable at 0x000148ff7e4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ff7e5a FUN_148ff7e5a body=46 status=ok
// SIG undefined FUN_148ff7e5a(void)

void FUN_148ff7e5a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ff7e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,*(undefined8 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148ff7e88 FUN_148ff7e88 body=158 status=ok
// SIG undefined FUN_148ff7e88(void)

bool FUN_148ff7e88(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))
              (*(int *)(param_1 + 0x28) + lVar2,param_2,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 148ff7f2a FUN_148ff7f2a body=109 status=ok
// SIG undefined FUN_148ff7f2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ff7f2a(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf58b0) {
    FUN_144b3d300(&DAT_14cbf58b0);
    if (DAT_14cbf58b0 == -1) {
      _DAT_14cbf58a8 = &PTR_FUN_14ba5ea00;
      _Init_thread_footer(&DAT_14cbf58b0);
    }
  }
  *param_1 = &DAT_14cbf58a8;
  return param_1;
}



// FUNCTION 148ff7f98 FUN_148ff7f98 body=132 status=ok
// SIG undefined FUN_148ff7f98(void)

void FUN_148ff7f98(longlong param_1,int param_2)

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



// FUNCTION 148ff801e FUN_148ff801e body=29 status=ok
// SIG undefined FUN_148ff801e(void)

undefined8 FUN_148ff801e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff803c FUN_148ff803c body=38 status=ok
// SIG undefined FUN_148ff803c(void)

undefined8 FUN_148ff803c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"JoinParty",1);
  return param_2;
}



// FUNCTION 148ff8062 FUN_148ff8062 body=25 status=ok
// SIG undefined FUN_148ff8062(void)

undefined8 FUN_148ff8062(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd0890(param_2);
  return param_2;
}



// FUNCTION 148ff807c FUN_148ff807c body=25 status=ok
// SIG undefined FUN_148ff807c(void)

undefined8 FUN_148ff807c(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd092a(param_2);
  return param_2;
}



// FUNCTION 148ff809e FUN_148ff809e body=76 status=ok
// SIG undefined FUN_148ff809e(void)

void FUN_148ff809e(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0x11111111;
  (**(code **)(*param_2 + 0x368))(param_2,&local_c,&DAT_14cbf5348);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff80f8 FUN_148ff80f8 body=118 status=ok
// SIG undefined FUN_148ff80f8(void)

ulonglong FUN_148ff80f8(undefined8 param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  
  cVar1 = FUN_148fd0a22();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_148ff816e();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((DAT_14cbf58b8 != (longlong *)0x0 && DAT_14cbf58c0 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf58b8 + 0x30))(), cVar1 != '\0')) {
      FUN_148ff816e();
      plVar3 = DAT_14cbf58b8;
      if (DAT_14cbf58c0 == 0) {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ff816b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ff816e FUN_148ff816e body=112 status=ok
// SIG undefined FUN_148ff816e(void)

void FUN_148ff816e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf58c8) {
    FUN_144b3d300(&DAT_14cbf58c8);
    if (DAT_14cbf58c8 == -1) {
      DAT_14cbf58b8 = 0;
      DAT_14cbf58c0 = 0;
      atexit(FUN_1443dce00);
      _Init_thread_footer(&DAT_14cbf58c8);
      return;
    }
  }
  return;
}



// FUNCTION 148ff81de FUN_148ff81de body=178 status=ok
// SIG undefined FUN_148ff81de(void)

void FUN_148ff81de(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 6;
  FUN_145936eee(local_78,plVar1);
  FUN_14058acb2(plVar1,param_2);
  local_7c = 0x11111111;
  (**(code **)(*param_1 + 0x368))(param_1,&local_7c,&DAT_14cbf5348);
  FUN_146b4993e(plVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff8292 FUN_148ff8292 body=109 status=ok
// SIG undefined FUN_148ff8292(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ff8292(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf58d8) {
    FUN_144b3d300(&DAT_14cbf58d8);
    if (DAT_14cbf58d8 == -1) {
      _DAT_14cbf58d0 = &PTR_FUN_14ba5ea50;
      _Init_thread_footer(&DAT_14cbf58d8);
    }
  }
  *param_1 = &DAT_14cbf58d0;
  return param_1;
}



// FUNCTION 148ff8300 FUN_148ff8300 body=29 status=ok
// SIG undefined FUN_148ff8300(void)

undefined8 FUN_148ff8300(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff831e FUN_148ff831e body=38 status=ok
// SIG undefined FUN_148ff831e(void)

undefined8 FUN_148ff831e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RequestToJoinParty",1);
  return param_2;
}



// FUNCTION 148ff8344 FUN_148ff8344 body=25 status=ok
// SIG undefined FUN_148ff8344(void)

undefined8 FUN_148ff8344(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd0aa6(param_2);
  return param_2;
}



// FUNCTION 148ff835e FUN_148ff835e body=25 status=ok
// SIG undefined FUN_148ff835e(void)

undefined8 FUN_148ff835e(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd0b40(param_2);
  return param_2;
}



// FUNCTION 148ff83a4 FUN_148ff83a4 body=134 status=ok
// SIG undefined FUN_148ff83a4(void)

ulonglong FUN_148ff83a4(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  
  cVar1 = (**(code **)(*param_1 + 0x340))();
  if ((cVar1 == '\0') || (cVar1 = FUN_148fd006a(param_1), cVar1 == '\0')) {
    uVar2 = 0;
  }
  else {
    FUN_148ff842a();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((DAT_14cbf58e0 != (longlong *)0x0 && DAT_14cbf58e8 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf58e0 + 0x30))(), cVar1 != '\0')) {
      FUN_148ff842a();
      plVar3 = DAT_14cbf58e0;
      if (DAT_14cbf58e8 == 0) {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ff8427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ff842a FUN_148ff842a body=112 status=ok
// SIG undefined FUN_148ff842a(void)

void FUN_148ff842a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf58f0) {
    FUN_144b3d300(&DAT_14cbf58f0);
    if (DAT_14cbf58f0 == -1) {
      DAT_14cbf58e0 = 0;
      DAT_14cbf58e8 = 0;
      atexit(FUN_1443dce5b);
      _Init_thread_footer(&DAT_14cbf58f0);
      return;
    }
  }
  return;
}



// FUNCTION 148ff849a FUN_148ff849a body=155 status=ok
// SIG undefined FUN_148ff849a(void)

void FUN_148ff849a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 6;
  FUN_145936eee(local_78,plVar1);
  FUN_14058acb2(plVar1,param_2);
  (**(code **)(*param_1 + 0x350))(param_1,&DAT_14cbf5340);
  FUN_146b4993e(plVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff8536 FUN_148ff8536 body=109 status=ok
// SIG undefined FUN_148ff8536(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ff8536(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5900) {
    FUN_144b3d300(&DAT_14cbf5900);
    if (DAT_14cbf5900 == -1) {
      _DAT_14cbf58f8 = &PTR_FUN_14ba5eaa0;
      _Init_thread_footer(&DAT_14cbf5900);
    }
  }
  *param_1 = &DAT_14cbf58f8;
  return param_1;
}



// FUNCTION 148ff85a4 FUN_148ff85a4 body=29 status=ok
// SIG undefined FUN_148ff85a4(void)

undefined8 FUN_148ff85a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff85c2 FUN_148ff85c2 body=38 status=ok
// SIG undefined FUN_148ff85c2(void)

undefined8 FUN_148ff85c2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AcceptJoinRequest",1);
  return param_2;
}



// FUNCTION 148ff85e8 FUN_148ff85e8 body=25 status=ok
// SIG undefined FUN_148ff85e8(void)

undefined8 FUN_148ff85e8(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd0c38(param_2);
  return param_2;
}



// FUNCTION 148ff8602 FUN_148ff8602 body=25 status=ok
// SIG undefined FUN_148ff8602(void)

undefined8 FUN_148ff8602(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd0cd0(param_2);
  return param_2;
}



// FUNCTION 148ff8638 FUN_148ff8638 body=122 status=ok
// SIG undefined FUN_148ff8638(void)

ulonglong FUN_148ff8638(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  
  cVar1 = (**(code **)(*param_1 + 0x348))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_148ff86b2();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((DAT_14cbf5908 != (longlong *)0x0 && DAT_14cbf5910 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf5908 + 0x30))(), cVar1 != '\0')) {
      FUN_148ff86b2();
      plVar3 = DAT_14cbf5908;
      if (DAT_14cbf5910 == 0) {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ff86af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ff86b2 FUN_148ff86b2 body=112 status=ok
// SIG undefined FUN_148ff86b2(void)

void FUN_148ff86b2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5918) {
    FUN_144b3d300(&DAT_14cbf5918);
    if (DAT_14cbf5918 == -1) {
      DAT_14cbf5908 = 0;
      DAT_14cbf5910 = 0;
      atexit(FUN_1443dceb6);
      _Init_thread_footer(&DAT_14cbf5918);
      return;
    }
  }
  return;
}



// FUNCTION 148ff8722 FUN_148ff8722 body=144 status=ok
// SIG undefined FUN_148ff8722(void)

void FUN_148ff8722(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x30;
  FUN_145936eee(local_78,lVar1);
  FUN_14058acb2(lVar1,param_2);
  FUN_148fd0dc8(param_1);
  FUN_146b4993e(lVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff87b4 FUN_148ff87b4 body=109 status=ok
// SIG undefined FUN_148ff87b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ff87b4(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5928) {
    FUN_144b3d300(&DAT_14cbf5928);
    if (DAT_14cbf5928 == -1) {
      _DAT_14cbf5920 = &PTR_FUN_14ba5eaf0;
      _Init_thread_footer(&DAT_14cbf5928);
    }
  }
  *param_1 = &DAT_14cbf5920;
  return param_1;
}



// FUNCTION 148ff8822 FUN_148ff8822 body=29 status=ok
// SIG undefined FUN_148ff8822(void)

undefined8 FUN_148ff8822(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff8840 FUN_148ff8840 body=38 status=ok
// SIG undefined FUN_148ff8840(void)

undefined8 FUN_148ff8840(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"DismissJoinRequest",1);
  return param_2;
}



// FUNCTION 148ff8866 FUN_148ff8866 body=25 status=ok
// SIG undefined FUN_148ff8866(void)

undefined8 FUN_148ff8866(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd0f9a(param_2);
  return param_2;
}



// FUNCTION 148ff8880 FUN_148ff8880 body=25 status=ok
// SIG undefined FUN_148ff8880(void)

undefined8 FUN_148ff8880(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd1034(param_2);
  return param_2;
}



// FUNCTION 148ff88b6 FUN_148ff88b6 body=122 status=ok
// SIG undefined FUN_148ff88b6(void)

ulonglong FUN_148ff88b6(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  
  cVar1 = (**(code **)(*param_1 + 0x348))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_148ff8930();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((DAT_14cbf5930 != (longlong *)0x0 && DAT_14cbf5938 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf5930 + 0x30))(), cVar1 != '\0')) {
      FUN_148ff8930();
      plVar3 = DAT_14cbf5930;
      if (DAT_14cbf5938 == 0) {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ff892d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ff8930 FUN_148ff8930 body=112 status=ok
// SIG undefined FUN_148ff8930(void)

void FUN_148ff8930(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5940) {
    FUN_144b3d300(&DAT_14cbf5940);
    if (DAT_14cbf5940 == -1) {
      DAT_14cbf5930 = 0;
      DAT_14cbf5938 = 0;
      atexit(FUN_1443dcf11);
      _Init_thread_footer(&DAT_14cbf5940);
      return;
    }
  }
  return;
}



// FUNCTION 148ff89a0 FUN_148ff89a0 body=144 status=ok
// SIG undefined FUN_148ff89a0(void)

void FUN_148ff89a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x30;
  FUN_145936eee(local_78,lVar1);
  FUN_14058acb2(lVar1,param_2);
  FUN_148fd112c(param_1);
  FUN_146b4993e(lVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff8a32 FUN_148ff8a32 body=109 status=ok
// SIG undefined FUN_148ff8a32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ff8a32(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5950) {
    FUN_144b3d300(&DAT_14cbf5950);
    if (DAT_14cbf5950 == -1) {
      _DAT_14cbf5948 = &PTR_FUN_14ba5eb40;
      _Init_thread_footer(&DAT_14cbf5950);
    }
  }
  *param_1 = &DAT_14cbf5948;
  return param_1;
}



// FUNCTION 148ff8aa0 FUN_148ff8aa0 body=29 status=ok
// SIG undefined FUN_148ff8aa0(void)

undefined8 FUN_148ff8aa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff8abe FUN_148ff8abe body=38 status=ok
// SIG undefined FUN_148ff8abe(void)

undefined8 FUN_148ff8abe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"InviteToParty",1);
  return param_2;
}



// FUNCTION 148ff8ae4 FUN_148ff8ae4 body=25 status=ok
// SIG undefined FUN_148ff8ae4(void)

undefined8 FUN_148ff8ae4(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd063a(param_2);
  return param_2;
}



// FUNCTION 148ff8afe FUN_148ff8afe body=25 status=ok
// SIG undefined FUN_148ff8afe(void)

undefined8 FUN_148ff8afe(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd06d4(param_2);
  return param_2;
}



// FUNCTION 148ff8b20 FUN_148ff8b20 body=77 status=ok
// SIG undefined FUN_148ff8b20(void)

void FUN_148ff8b20(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  uStack_10 = 0;
  local_1c = 0x11111111;
  FUN_148fd0832(param_2);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff8b7a FUN_148ff8b7a body=169 status=ok
// SIG undefined FUN_148ff8b7a(void)

ulonglong FUN_148ff8b7a(void)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0x11111111;
  cVar1 = FUN_148fd07cc();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_148ff8c38();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((DAT_14cbf5958 != (longlong *)0x0 && DAT_14cbf5960 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf5958 + 0x30))(), cVar1 != '\0')) {
      FUN_148ff8c38();
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff8c38 FUN_148ff8c38 body=112 status=ok
// SIG undefined FUN_148ff8c38(void)

void FUN_148ff8c38(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5968) {
    FUN_144b3d300(&DAT_14cbf5968);
    if (DAT_14cbf5968 == -1) {
      DAT_14cbf5958 = 0;
      DAT_14cbf5960 = 0;
      atexit(FUN_1443dcf6c);
      _Init_thread_footer(&DAT_14cbf5968);
      return;
    }
  }
  return;
}



// FUNCTION 148ff8ca8 FUN_148ff8ca8 body=179 status=ok
// SIG undefined FUN_148ff8ca8(void)

void FUN_148ff8ca8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + 0x30;
  FUN_145936eee(local_78,lVar1);
  FUN_14058acb2(lVar1,param_2);
  local_88 = 0;
  uStack_80 = 0;
  local_8c = 0x11111111;
  FUN_148fd0832(param_1);
  FUN_146b4993e(lVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff8d5c FUN_148ff8d5c body=109 status=ok
// SIG undefined FUN_148ff8d5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ff8d5c(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5978) {
    FUN_144b3d300(&DAT_14cbf5978);
    if (DAT_14cbf5978 == -1) {
      _DAT_14cbf5970 = &PTR_FUN_14ba5eb90;
      _Init_thread_footer(&DAT_14cbf5978);
    }
  }
  *param_1 = &DAT_14cbf5970;
  return param_1;
}



// FUNCTION 148ff8dca FUN_148ff8dca body=29 status=ok
// SIG undefined FUN_148ff8dca(void)

undefined8 FUN_148ff8dca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff8de8 FUN_148ff8de8 body=38 status=ok
// SIG undefined FUN_148ff8de8(void)

undefined8 FUN_148ff8de8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AcceptPartyInvite",1);
  return param_2;
}



// FUNCTION 148ff8e0e FUN_148ff8e0e body=25 status=ok
// SIG undefined FUN_148ff8e0e(void)

undefined8 FUN_148ff8e0e(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd12cc(param_2);
  return param_2;
}



// FUNCTION 148ff8e3a FUN_148ff8e3a body=76 status=ok
// SIG undefined FUN_148ff8e3a(void)

void FUN_148ff8e3a(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0x11111111;
  (**(code **)(*param_2 + 0x368))(param_2,&local_c,&DAT_14cbf5338);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff8e94 FUN_148ff8e94 body=213 status=ok
// SIG undefined FUN_148ff8e94(void)

ulonglong FUN_148ff8e94(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0xe0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd8);
    lVar7 = 0;
    do {
      plVar5 = *(longlong **)(lVar2 + lVar7);
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_34);
      if (local_34 == 0x11111111) {
        FUN_148ff8f6a();
        uVar6 = CONCAT71((int7)((ulonglong)&local_34 >> 8),1);
        if ((DAT_14cbf5980 != (longlong *)0x0 && DAT_14cbf5988 != 0) &&
           (cVar3 = (**(code **)(*DAT_14cbf5980 + 0x30))(), cVar3 != '\0')) {
          FUN_148ff8f6a();
          plVar5 = DAT_14cbf5980;
          if (DAT_14cbf5988 == 0) {
            plVar5 = (longlong *)0x0;
          }
          uVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,param_1);
          uVar6 = (ulonglong)uVar4;
        }
        goto LAB_148ff8ef2;
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  uVar6 = 0;
LAB_148ff8ef2:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 148ff8f6a FUN_148ff8f6a body=112 status=ok
// SIG undefined FUN_148ff8f6a(void)

void FUN_148ff8f6a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5990) {
    FUN_144b3d300(&DAT_14cbf5990);
    if (DAT_14cbf5990 == -1) {
      DAT_14cbf5980 = 0;
      DAT_14cbf5988 = 0;
      atexit(FUN_1443dcfc7);
      _Init_thread_footer(&DAT_14cbf5990);
      return;
    }
  }
  return;
}



// FUNCTION 148ff8fda FUN_148ff8fda body=178 status=ok
// SIG undefined FUN_148ff8fda(void)

void FUN_148ff8fda(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 6;
  FUN_145936eee(local_78,plVar1);
  FUN_14058acb2(plVar1,param_2);
  local_7c = 0x11111111;
  (**(code **)(*param_1 + 0x368))(param_1,&local_7c,&DAT_14cbf5338);
  FUN_146b4993e(plVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff908e FUN_148ff908e body=109 status=ok
// SIG undefined FUN_148ff908e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ff908e(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf59a0) {
    FUN_144b3d300(&DAT_14cbf59a0);
    if (DAT_14cbf59a0 == -1) {
      _DAT_14cbf5998 = &PTR_FUN_14ba5ebe0;
      _Init_thread_footer(&DAT_14cbf59a0);
    }
  }
  *param_1 = &DAT_14cbf5998;
  return param_1;
}



// FUNCTION 148ff90fc FUN_148ff90fc body=29 status=ok
// SIG undefined FUN_148ff90fc(void)

undefined8 FUN_148ff90fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff911a FUN_148ff911a body=38 status=ok
// SIG undefined FUN_148ff911a(void)

undefined8 FUN_148ff911a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RejectPartyInvite",1);
  return param_2;
}



// FUNCTION 148ff9140 FUN_148ff9140 body=25 status=ok
// SIG undefined FUN_148ff9140(void)

undefined8 FUN_148ff9140(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd1364(param_2);
  return param_2;
}



// FUNCTION 148ff916c FUN_148ff916c body=69 status=ok
// SIG undefined FUN_148ff916c(void)

void FUN_148ff916c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0x11111111;
  (**(code **)(*param_2 + 0x370))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff91be FUN_148ff91be body=213 status=ok
// SIG undefined FUN_148ff91be(void)

ulonglong FUN_148ff91be(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0xe0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd8);
    lVar7 = 0;
    do {
      plVar5 = *(longlong **)(lVar2 + lVar7);
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_34);
      if (local_34 == 0x11111111) {
        FUN_148ff9294();
        uVar6 = CONCAT71((int7)((ulonglong)&local_34 >> 8),1);
        if ((DAT_14cbf59a8 != (longlong *)0x0 && DAT_14cbf59b0 != 0) &&
           (cVar3 = (**(code **)(*DAT_14cbf59a8 + 0x30))(), cVar3 != '\0')) {
          FUN_148ff9294();
          plVar5 = DAT_14cbf59a8;
          if (DAT_14cbf59b0 == 0) {
            plVar5 = (longlong *)0x0;
          }
          uVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,param_1);
          uVar6 = (ulonglong)uVar4;
        }
        goto LAB_148ff921c;
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  uVar6 = 0;
LAB_148ff921c:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 148ff9294 FUN_148ff9294 body=112 status=ok
// SIG undefined FUN_148ff9294(void)

void FUN_148ff9294(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf59b8) {
    FUN_144b3d300(&DAT_14cbf59b8);
    if (DAT_14cbf59b8 == -1) {
      DAT_14cbf59a8 = 0;
      DAT_14cbf59b0 = 0;
      atexit(FUN_1443dd022);
      _Init_thread_footer(&DAT_14cbf59b8);
      return;
    }
  }
  return;
}



// FUNCTION 148ff9304 FUN_148ff9304 body=171 status=ok
// SIG undefined FUN_148ff9304(void)

void FUN_148ff9304(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 6;
  FUN_145936eee(local_78,plVar1);
  FUN_14058acb2(plVar1,param_2);
  local_7c = 0x11111111;
  (**(code **)(*param_1 + 0x370))(param_1);
  FUN_146b4993e(plVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff93b0 FUN_148ff93b0 body=109 status=ok
// SIG undefined FUN_148ff93b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ff93b0(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf59c8) {
    FUN_144b3d300(&DAT_14cbf59c8);
    if (DAT_14cbf59c8 == -1) {
      _DAT_14cbf59c0 = &PTR_FUN_14ba5ec30;
      _Init_thread_footer(&DAT_14cbf59c8);
    }
  }
  *param_1 = &DAT_14cbf59c0;
  return param_1;
}



// FUNCTION 148ff941e FUN_148ff941e body=29 status=ok
// SIG undefined FUN_148ff941e(void)

undefined8 FUN_148ff941e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff943c FUN_148ff943c body=38 status=ok
// SIG undefined FUN_148ff943c(void)

undefined8 FUN_148ff943c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PromoteToPartyLeader",1);
  return param_2;
}



// FUNCTION 148ff9462 FUN_148ff9462 body=25 status=ok
// SIG undefined FUN_148ff9462(void)

undefined8 FUN_148ff9462(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd1a70(param_2);
  return param_2;
}



// FUNCTION 148ff947c FUN_148ff947c body=25 status=ok
// SIG undefined FUN_148ff947c(void)

undefined8 FUN_148ff947c(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd1b0a(param_2);
  return param_2;
}



// FUNCTION 148ff94b2 FUN_148ff94b2 body=118 status=ok
// SIG undefined FUN_148ff94b2(void)

ulonglong FUN_148ff94b2(undefined8 param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  
  cVar1 = FUN_148fd1c02();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_148ff9528();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((DAT_14cbf59d0 != (longlong *)0x0 && DAT_14cbf59d8 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf59d0 + 0x30))(), cVar1 != '\0')) {
      FUN_148ff9528();
      plVar3 = DAT_14cbf59d0;
      if (DAT_14cbf59d8 == 0) {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ff9525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ff9528 FUN_148ff9528 body=112 status=ok
// SIG undefined FUN_148ff9528(void)

void FUN_148ff9528(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf59e0) {
    FUN_144b3d300(&DAT_14cbf59e0);
    if (DAT_14cbf59e0 == -1) {
      DAT_14cbf59d0 = 0;
      DAT_14cbf59d8 = 0;
      atexit(FUN_1443dd07d);
      _Init_thread_footer(&DAT_14cbf59e0);
      return;
    }
  }
  return;
}



// FUNCTION 148ff9598 FUN_148ff9598 body=144 status=ok
// SIG undefined FUN_148ff9598(void)

void FUN_148ff9598(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x30;
  FUN_145936eee(local_78,lVar1);
  FUN_14058acb2(lVar1,param_2);
  FUN_148fd1cba(param_1);
  FUN_146b4993e(lVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff962a FUN_148ff962a body=109 status=ok
// SIG undefined FUN_148ff962a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ff962a(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf59f0) {
    FUN_144b3d300(&DAT_14cbf59f0);
    if (DAT_14cbf59f0 == -1) {
      _DAT_14cbf59e8 = &PTR_FUN_14ba5ec80;
      _Init_thread_footer(&DAT_14cbf59f0);
    }
  }
  *param_1 = &DAT_14cbf59e8;
  return param_1;
}



// FUNCTION 148ff9698 FUN_148ff9698 body=29 status=ok
// SIG undefined FUN_148ff9698(void)

undefined8 FUN_148ff9698(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff96b6 FUN_148ff96b6 body=38 status=ok
// SIG undefined FUN_148ff96b6(void)

undefined8 FUN_148ff96b6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"KickPartyMember",1);
  return param_2;
}



// FUNCTION 148ff96dc FUN_148ff96dc body=25 status=ok
// SIG undefined FUN_148ff96dc(void)

undefined8 FUN_148ff96dc(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd1770(param_2);
  return param_2;
}



// FUNCTION 148ff96f6 FUN_148ff96f6 body=25 status=ok
// SIG undefined FUN_148ff96f6(void)

undefined8 FUN_148ff96f6(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd180a(param_2);
  return param_2;
}



// FUNCTION 148ff972c FUN_148ff972c body=118 status=ok
// SIG undefined FUN_148ff972c(void)

ulonglong FUN_148ff972c(undefined8 param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  
  cVar1 = FUN_148fd1902();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_148ff97a2();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((DAT_14cbf59f8 != (longlong *)0x0 && DAT_14cbf5a00 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf59f8 + 0x30))(), cVar1 != '\0')) {
      FUN_148ff97a2();
      plVar3 = DAT_14cbf59f8;
      if (DAT_14cbf5a00 == 0) {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ff979f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ff97a2 FUN_148ff97a2 body=112 status=ok
// SIG undefined FUN_148ff97a2(void)

void FUN_148ff97a2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5a08) {
    FUN_144b3d300(&DAT_14cbf5a08);
    if (DAT_14cbf5a08 == -1) {
      DAT_14cbf59f8 = 0;
      DAT_14cbf5a00 = 0;
      atexit(FUN_1443dd0d8);
      _Init_thread_footer(&DAT_14cbf5a08);
      return;
    }
  }
  return;
}



// FUNCTION 148ff9812 FUN_148ff9812 body=144 status=ok
// SIG undefined FUN_148ff9812(void)

void FUN_148ff9812(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x30;
  FUN_145936eee(local_78,lVar1);
  FUN_14058acb2(lVar1,param_2);
  FUN_148fd19ba(param_1);
  FUN_146b4993e(lVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff98a4 FUN_148ff98a4 body=109 status=ok
// SIG undefined FUN_148ff98a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ff98a4(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5a18) {
    FUN_144b3d300(&DAT_14cbf5a18);
    if (DAT_14cbf5a18 == -1) {
      _DAT_14cbf5a10 = &PTR_FUN_14ba5ecd0;
      _Init_thread_footer(&DAT_14cbf5a18);
    }
  }
  *param_1 = &DAT_14cbf5a10;
  return param_1;
}



// FUNCTION 148ff9912 FUN_148ff9912 body=29 status=ok
// SIG undefined FUN_148ff9912(void)

undefined8 FUN_148ff9912(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff9930 FUN_148ff9930 body=38 status=ok
// SIG undefined FUN_148ff9930(void)

undefined8 FUN_148ff9930(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"LeaveParty",1);
  return param_2;
}



// FUNCTION 148ff9956 FUN_148ff9956 body=25 status=ok
// SIG undefined FUN_148ff9956(void)

undefined8 FUN_148ff9956(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd13fc(param_2);
  return param_2;
}



// FUNCTION 148ff9970 FUN_148ff9970 body=25 status=ok
// SIG undefined FUN_148ff9970(void)

undefined8 FUN_148ff9970(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd1496(param_2);
  return param_2;
}



// FUNCTION 148ff99a6 FUN_148ff99a6 body=118 status=ok
// SIG undefined FUN_148ff99a6(void)

ulonglong FUN_148ff99a6(undefined8 param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  
  cVar1 = FUN_148fd158e();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_148ff9a1c();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((DAT_14cbf5a20 != (longlong *)0x0 && DAT_14cbf5a28 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf5a20 + 0x30))(), cVar1 != '\0')) {
      FUN_148ff9a1c();
      plVar3 = DAT_14cbf5a20;
      if (DAT_14cbf5a28 == 0) {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ff9a19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ff9a1c FUN_148ff9a1c body=112 status=ok
// SIG undefined FUN_148ff9a1c(void)

void FUN_148ff9a1c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5a30) {
    FUN_144b3d300(&DAT_14cbf5a30);
    if (DAT_14cbf5a30 == -1) {
      DAT_14cbf5a20 = 0;
      DAT_14cbf5a28 = 0;
      atexit(FUN_1443dd133);
      _Init_thread_footer(&DAT_14cbf5a30);
      return;
    }
  }
  return;
}



// FUNCTION 148ff9a8c FUN_148ff9a8c body=144 status=ok
// SIG undefined FUN_148ff9a8c(void)

void FUN_148ff9a8c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x30;
  FUN_145936eee(local_78,lVar1);
  FUN_14058acb2(lVar1,param_2);
  FUN_148fd16f2(param_1);
  FUN_146b4993e(lVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff9b1e FUN_148ff9b1e body=109 status=ok
// SIG undefined FUN_148ff9b1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ff9b1e(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5a40) {
    FUN_144b3d300(&DAT_14cbf5a40);
    if (DAT_14cbf5a40 == -1) {
      _DAT_14cbf5a38 = &PTR_FUN_14ba5ed10;
      _Init_thread_footer(&DAT_14cbf5a40);
    }
  }
  *param_1 = &DAT_14cbf5a38;
  return param_1;
}



// FUNCTION 148ff9b8c FUN_148ff9b8c body=29 status=ok
// SIG undefined FUN_148ff9b8c(void)

undefined8 FUN_148ff9b8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff9baa FUN_148ff9baa body=38 status=ok
// SIG undefined FUN_148ff9baa(void)

undefined8 FUN_148ff9baa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AddFriend",1);
  return param_2;
}



// FUNCTION 148ff9bd0 FUN_148ff9bd0 body=28 status=ok
// SIG undefined FUN_148ff9bd0(void)

undefined8 FUN_148ff9bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_148fcf226(param_2,param_3);
  return param_2;
}



// FUNCTION 148ff9c1c FUN_148ff9c1c body=124 status=ok
// SIG undefined FUN_148ff9c1c(void)

undefined8 FUN_148ff9c1c(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = 0;
  cVar1 = (**(code **)(*param_1 + 0x318))(param_1,0);
  if (cVar1 != '\0') {
    FUN_148ff9c98();
    uVar2 = 1;
    if ((DAT_14cbf5a48 != (longlong *)0x0 && DAT_14cbf5a50 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf5a48 + 0x30))(), cVar1 != '\0')) {
      FUN_148ff9c98();
      plVar3 = DAT_14cbf5a48;
      if (DAT_14cbf5a50 == 0) {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ff9c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 148ff9c98 FUN_148ff9c98 body=112 status=ok
// SIG undefined FUN_148ff9c98(void)

void FUN_148ff9c98(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5a58) {
    FUN_144b3d300(&DAT_14cbf5a58);
    if (DAT_14cbf5a58 == -1) {
      DAT_14cbf5a48 = 0;
      DAT_14cbf5a50 = 0;
      atexit(FUN_1443dd18e);
      _Init_thread_footer(&DAT_14cbf5a58);
      return;
    }
  }
  return;
}



// FUNCTION 148ff9d08 FUN_148ff9d08 body=150 status=ok
// SIG undefined FUN_148ff9d08(void)

void FUN_148ff9d08(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 6;
  FUN_145936eee(local_78,plVar1);
  FUN_14058acb2(plVar1,param_2);
  (**(code **)(*param_1 + 800))(param_1,0);
  FUN_146b4993e(plVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ff9da0 FUN_148ff9da0 body=109 status=ok
// SIG undefined FUN_148ff9da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ff9da0(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5a68) {
    FUN_144b3d300(&DAT_14cbf5a68);
    if (DAT_14cbf5a68 == -1) {
      _DAT_14cbf5a60 = &PTR_FUN_14ba5ed60;
      _Init_thread_footer(&DAT_14cbf5a68);
    }
  }
  *param_1 = &DAT_14cbf5a60;
  return param_1;
}



// FUNCTION 148ff9e0e FUN_148ff9e0e body=29 status=ok
// SIG undefined FUN_148ff9e0e(void)

undefined8 FUN_148ff9e0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ff9e2c FUN_148ff9e2c body=38 status=ok
// SIG undefined FUN_148ff9e2c(void)

undefined8 FUN_148ff9e2c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AddPlatformFriend",1);
  return param_2;
}



// FUNCTION 148ff9e52 FUN_148ff9e52 body=25 status=ok
// SIG undefined FUN_148ff9e52(void)

undefined8 FUN_148ff9e52(undefined8 param_1,undefined8 param_2)

{
  FUN_148fcf320(param_2);
  return param_2;
}



// FUNCTION 148ff9e6c FUN_148ff9e6c body=32 status=ok
// SIG undefined FUN_148ff9e6c(void)

undefined8 FUN_148ff9e6c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 148ff9eb2 FUN_148ff9eb2 body=124 status=ok
// SIG undefined FUN_148ff9eb2(void)

ulonglong FUN_148ff9eb2(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  cVar1 = (**(code **)(*param_1 + 0x318))(param_1,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_148ff9f2e();
    if ((DAT_14cbf5a70 != (longlong *)0x0 && DAT_14cbf5a78 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf5a70 + 0x30))(), cVar1 != '\0')) {
      FUN_148ff9f2e();
      plVar3 = DAT_14cbf5a70;
      if (DAT_14cbf5a78 == 0) {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ff9f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ff9f2e FUN_148ff9f2e body=112 status=ok
// SIG undefined FUN_148ff9f2e(void)

void FUN_148ff9f2e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5a80) {
    FUN_144b3d300(&DAT_14cbf5a80);
    if (DAT_14cbf5a80 == -1) {
      DAT_14cbf5a70 = 0;
      DAT_14cbf5a78 = 0;
      atexit(FUN_1443dd1e9);
      _Init_thread_footer(&DAT_14cbf5a80);
      return;
    }
  }
  return;
}



// FUNCTION 148ff9f9e FUN_148ff9f9e body=150 status=ok
// SIG undefined FUN_148ff9f9e(void)

void FUN_148ff9f9e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 6;
  FUN_145936eee(local_78,plVar1);
  FUN_14058acb2(plVar1,param_2);
  (**(code **)(*param_1 + 800))(param_1,1);
  FUN_146b4993e(plVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ffa036 FUN_148ffa036 body=109 status=ok
// SIG undefined FUN_148ffa036(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ffa036(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5a90) {
    FUN_144b3d300(&DAT_14cbf5a90);
    if (DAT_14cbf5a90 == -1) {
      _DAT_14cbf5a88 = &PTR_FUN_14ba5edb0;
      _Init_thread_footer(&DAT_14cbf5a90);
    }
  }
  *param_1 = &DAT_14cbf5a88;
  return param_1;
}



// FUNCTION 148ffa0a4 FUN_148ffa0a4 body=29 status=ok
// SIG undefined FUN_148ffa0a4(void)

undefined8 FUN_148ffa0a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ffa0c2 FUN_148ffa0c2 body=38 status=ok
// SIG undefined FUN_148ffa0c2(void)

undefined8 FUN_148ffa0c2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AcceptFriendInvite",1);
  return param_2;
}



// FUNCTION 148ffa0e8 FUN_148ffa0e8 body=25 status=ok
// SIG undefined FUN_148ffa0e8(void)

undefined8 FUN_148ffa0e8(undefined8 param_1,undefined8 param_2)

{
  FUN_148fcf6c4(param_2);
  return param_2;
}



// FUNCTION 148ffa132 FUN_148ffa132 body=121 status=ok
// SIG undefined FUN_148ffa132(void)

undefined8 FUN_148ffa132(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = 0;
  iVar2 = FUN_148fcf75e(param_1,0);
  if (iVar2 == 2) {
    FUN_148ffa1ac();
    uVar3 = 1;
    if ((DAT_14cbf5a98 != (longlong *)0x0 && DAT_14cbf5aa0 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf5a98 + 0x30))(), cVar1 != '\0')) {
      FUN_148ffa1ac();
      plVar4 = DAT_14cbf5a98;
      if (DAT_14cbf5aa0 == 0) {
        plVar4 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ffa1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,param_1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 148ffa1ac FUN_148ffa1ac body=112 status=ok
// SIG undefined FUN_148ffa1ac(void)

void FUN_148ffa1ac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5aa8) {
    FUN_144b3d300(&DAT_14cbf5aa8);
    if (DAT_14cbf5aa8 == -1) {
      DAT_14cbf5a98 = 0;
      DAT_14cbf5aa0 = 0;
      atexit(FUN_1443dd244);
      _Init_thread_footer(&DAT_14cbf5aa8);
      return;
    }
  }
  return;
}



// FUNCTION 148ffa21c FUN_148ffa21c body=150 status=ok
// SIG undefined FUN_148ffa21c(void)

void FUN_148ffa21c(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 6;
  FUN_145936eee(local_78,plVar1);
  FUN_14058acb2(plVar1,param_2);
  (**(code **)(*param_1 + 0x328))(param_1,0);
  FUN_146b4993e(plVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ffa2b4 FUN_148ffa2b4 body=109 status=ok
// SIG undefined FUN_148ffa2b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ffa2b4(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5ab8) {
    FUN_144b3d300(&DAT_14cbf5ab8);
    if (DAT_14cbf5ab8 == -1) {
      _DAT_14cbf5ab0 = &PTR_FUN_14ba5ee00;
      _Init_thread_footer(&DAT_14cbf5ab8);
    }
  }
  *param_1 = &DAT_14cbf5ab0;
  return param_1;
}



// FUNCTION 148ffa322 FUN_148ffa322 body=29 status=ok
// SIG undefined FUN_148ffa322(void)

undefined8 FUN_148ffa322(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ffa340 FUN_148ffa340 body=38 status=ok
// SIG undefined FUN_148ffa340(void)

undefined8 FUN_148ffa340(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RejectFriendInvite",1);
  return param_2;
}



// FUNCTION 148ffa366 FUN_148ffa366 body=25 status=ok
// SIG undefined FUN_148ffa366(void)

undefined8 FUN_148ffa366(undefined8 param_1,undefined8 param_2)

{
  FUN_148fcf7d8(param_2);
  return param_2;
}



// FUNCTION 148ffa3b0 FUN_148ffa3b0 body=121 status=ok
// SIG undefined FUN_148ffa3b0(void)

undefined8 FUN_148ffa3b0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = 0;
  iVar2 = FUN_148fcf75e(param_1,0);
  if (iVar2 == 2) {
    FUN_148ffa42a();
    uVar3 = 1;
    if ((DAT_14cbf5ac0 != (longlong *)0x0 && DAT_14cbf5ac8 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf5ac0 + 0x30))(), cVar1 != '\0')) {
      FUN_148ffa42a();
      plVar4 = DAT_14cbf5ac0;
      if (DAT_14cbf5ac8 == 0) {
        plVar4 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ffa426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,param_1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 148ffa42a FUN_148ffa42a body=112 status=ok
// SIG undefined FUN_148ffa42a(void)

void FUN_148ffa42a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5ad0) {
    FUN_144b3d300(&DAT_14cbf5ad0);
    if (DAT_14cbf5ad0 == -1) {
      DAT_14cbf5ac0 = 0;
      DAT_14cbf5ac8 = 0;
      atexit(FUN_1443dd29f);
      _Init_thread_footer(&DAT_14cbf5ad0);
      return;
    }
  }
  return;
}



// FUNCTION 148ffa49a FUN_148ffa49a body=150 status=ok
// SIG undefined FUN_148ffa49a(void)

void FUN_148ffa49a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 6;
  FUN_145936eee(local_78,plVar1);
  FUN_14058acb2(plVar1,param_2);
  (**(code **)(*param_1 + 0x330))(param_1,0);
  FUN_146b4993e(plVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ffa532 FUN_148ffa532 body=109 status=ok
// SIG undefined FUN_148ffa532(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ffa532(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5ae0) {
    FUN_144b3d300(&DAT_14cbf5ae0);
    if (DAT_14cbf5ae0 == -1) {
      _DAT_14cbf5ad8 = &PTR_FUN_14ba5ee50;
      _Init_thread_footer(&DAT_14cbf5ae0);
    }
  }
  *param_1 = &DAT_14cbf5ad8;
  return param_1;
}



// FUNCTION 148ffa5a0 FUN_148ffa5a0 body=29 status=ok
// SIG undefined FUN_148ffa5a0(void)

undefined8 FUN_148ffa5a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ffa5be FUN_148ffa5be body=38 status=ok
// SIG undefined FUN_148ffa5be(void)

undefined8 FUN_148ffa5be(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PrivateMessage",1);
  return param_2;
}



// FUNCTION 148ffa5e4 FUN_148ffa5e4 body=25 status=ok
// SIG undefined FUN_148ffa5e4(void)

undefined8 FUN_148ffa5e4(undefined8 param_1,undefined8 param_2)

{
  FUN_148fcfd1c(param_2);
  return param_2;
}



// FUNCTION 148ffa5fe FUN_148ffa5fe body=25 status=ok
// SIG undefined FUN_148ffa5fe(void)

undefined8 FUN_148ffa5fe(undefined8 param_1,undefined8 param_2)

{
  FUN_148fcfdb6(param_2);
  return param_2;
}



// FUNCTION 148ffa620 FUN_148ffa620 body=54 status=ok
// SIG undefined FUN_148ffa620(void)

void FUN_148ffa620(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x68);
  (**(code **)(*plVar1 + 0x2d8))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000148ffa653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2e8))(plVar1,param_2);
  return;
}



// FUNCTION 148ffa662 FUN_148ffa662 body=118 status=ok
// SIG undefined FUN_148ffa662(void)

ulonglong FUN_148ffa662(undefined8 param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  
  cVar1 = FUN_148fcfeae();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_148ffa6d8();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((DAT_14cbf5ae8 != (longlong *)0x0 && DAT_14cbf5af0 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf5ae8 + 0x30))(), cVar1 != '\0')) {
      FUN_148ffa6d8();
      plVar3 = DAT_14cbf5ae8;
      if (DAT_14cbf5af0 == 0) {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ffa6d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ffa6d8 FUN_148ffa6d8 body=112 status=ok
// SIG undefined FUN_148ffa6d8(void)

void FUN_148ffa6d8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5af8) {
    FUN_144b3d300(&DAT_14cbf5af8);
    if (DAT_14cbf5af8 == -1) {
      DAT_14cbf5ae8 = 0;
      DAT_14cbf5af0 = 0;
      atexit(FUN_1443dd2fa);
      _Init_thread_footer(&DAT_14cbf5af8);
      return;
    }
  }
  return;
}



// FUNCTION 148ffa748 FUN_148ffa748 body=174 status=ok
// SIG undefined FUN_148ffa748(void)

void FUN_148ffa748(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x30;
  FUN_145936eee(local_78,lVar1);
  FUN_14058acb2(lVar1,param_2);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x68);
  (**(code **)(*plVar2 + 0x2d8))(plVar2,param_1);
  (**(code **)(*plVar2 + 0x2e8))(plVar2,param_1);
  FUN_146b4993e(lVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ffa7f8 FUN_148ffa7f8 body=109 status=ok
// SIG undefined FUN_148ffa7f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ffa7f8(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5b08) {
    FUN_144b3d300(&DAT_14cbf5b08);
    if (DAT_14cbf5b08 == -1) {
      _DAT_14cbf5b00 = &PTR_FUN_14ba5eea0;
      _Init_thread_footer(&DAT_14cbf5b08);
    }
  }
  *param_1 = &DAT_14cbf5b00;
  return param_1;
}



// FUNCTION 148ffa866 FUN_148ffa866 body=29 status=ok
// SIG undefined FUN_148ffa866(void)

undefined8 FUN_148ffa866(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ffa884 FUN_148ffa884 body=38 status=ok
// SIG undefined FUN_148ffa884(void)

undefined8 FUN_148ffa884(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RemoveFriend",1);
  return param_2;
}



// FUNCTION 148ffa8aa FUN_148ffa8aa body=25 status=ok
// SIG undefined FUN_148ffa8aa(void)

undefined8 FUN_148ffa8aa(undefined8 param_1,undefined8 param_2)

{
  FUN_148fcf532(param_2);
  return param_2;
}



// FUNCTION 148ffa8c4 FUN_148ffa8c4 body=25 status=ok
// SIG undefined FUN_148ffa8c4(void)

undefined8 FUN_148ffa8c4(undefined8 param_1,undefined8 param_2)

{
  FUN_148fcf5cc(param_2);
  return param_2;
}



// FUNCTION 148ffa904 FUN_148ffa904 body=120 status=ok
// SIG undefined FUN_148ffa904(void)

undefined8 FUN_148ffa904(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = 0;
  cVar1 = FUN_148fcefaa(param_1,0);
  if (cVar1 != '\0') {
    FUN_148ffa97c();
    uVar2 = 1;
    if ((DAT_14cbf5b10 != (longlong *)0x0 && DAT_14cbf5b18 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf5b10 + 0x30))(), cVar1 != '\0')) {
      FUN_148ffa97c();
      plVar3 = DAT_14cbf5b10;
      if (DAT_14cbf5b18 == 0) {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ffa979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 148ffa97c FUN_148ffa97c body=112 status=ok
// SIG undefined FUN_148ffa97c(void)

void FUN_148ffa97c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5b20) {
    FUN_144b3d300(&DAT_14cbf5b20);
    if (DAT_14cbf5b20 == -1) {
      DAT_14cbf5b10 = 0;
      DAT_14cbf5b18 = 0;
      atexit(FUN_1443dd355);
      _Init_thread_footer(&DAT_14cbf5b20);
      return;
    }
  }
  return;
}



// FUNCTION 148ffa9ec FUN_148ffa9ec body=150 status=ok
// SIG undefined FUN_148ffa9ec(void)

void FUN_148ffa9ec(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 6;
  FUN_145936eee(local_78,plVar1);
  FUN_14058acb2(plVar1,param_2);
  (**(code **)(*param_1 + 0x338))(param_1,0);
  FUN_146b4993e(plVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ffaa84 FUN_148ffaa84 body=109 status=ok
// SIG undefined FUN_148ffaa84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ffaa84(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5b30) {
    FUN_144b3d300(&DAT_14cbf5b30);
    if (DAT_14cbf5b30 == -1) {
      _DAT_14cbf5b28 = &PTR_FUN_14ba5eef0;
      _Init_thread_footer(&DAT_14cbf5b30);
    }
  }
  *param_1 = &DAT_14cbf5b28;
  return param_1;
}



// FUNCTION 148ffaaf2 FUN_148ffaaf2 body=29 status=ok
// SIG undefined FUN_148ffaaf2(void)

undefined8 FUN_148ffaaf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ffab10 FUN_148ffab10 body=38 status=ok
// SIG undefined FUN_148ffab10(void)

undefined8 FUN_148ffab10(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Block",1);
  return param_2;
}



// FUNCTION 148ffab36 FUN_148ffab36 body=25 status=ok
// SIG undefined FUN_148ffab36(void)

undefined8 FUN_148ffab36(undefined8 param_1,undefined8 param_2)

{
  FUN_148fcf872(param_2);
  return param_2;
}



// FUNCTION 148ffab50 FUN_148ffab50 body=25 status=ok
// SIG undefined FUN_148ffab50(void)

undefined8 FUN_148ffab50(undefined8 param_1,undefined8 param_2)

{
  FUN_148fcf90c(param_2);
  return param_2;
}



// FUNCTION 148ffab90 FUN_148ffab90 body=118 status=ok
// SIG undefined FUN_148ffab90(void)

ulonglong FUN_148ffab90(undefined8 param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  
  cVar1 = FUN_148fcfa04();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_148ffac06();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((DAT_14cbf5b38 != (longlong *)0x0 && DAT_14cbf5b40 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf5b38 + 0x30))(), cVar1 != '\0')) {
      FUN_148ffac06();
      plVar3 = DAT_14cbf5b38;
      if (DAT_14cbf5b40 == 0) {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ffac03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ffac06 FUN_148ffac06 body=112 status=ok
// SIG undefined FUN_148ffac06(void)

void FUN_148ffac06(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5b48) {
    FUN_144b3d300(&DAT_14cbf5b48);
    if (DAT_14cbf5b48 == -1) {
      DAT_14cbf5b38 = 0;
      DAT_14cbf5b40 = 0;
      atexit(FUN_1443dd3b0);
      _Init_thread_footer(&DAT_14cbf5b48);
      return;
    }
  }
  return;
}



// FUNCTION 148ffac76 FUN_148ffac76 body=150 status=ok
// SIG undefined FUN_148ffac76(void)

void FUN_148ffac76(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 6;
  FUN_145936eee(local_78,plVar1);
  FUN_14058acb2(plVar1,param_2);
  (**(code **)(*param_1 + 0x378))(param_1,0);
  FUN_146b4993e(plVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ffad0e FUN_148ffad0e body=109 status=ok
// SIG undefined FUN_148ffad0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ffad0e(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5b58) {
    FUN_144b3d300(&DAT_14cbf5b58);
    if (DAT_14cbf5b58 == -1) {
      _DAT_14cbf5b50 = &PTR_FUN_14ba5ef30;
      _Init_thread_footer(&DAT_14cbf5b58);
    }
  }
  *param_1 = &DAT_14cbf5b50;
  return param_1;
}



// FUNCTION 148ffad7c FUN_148ffad7c body=29 status=ok
// SIG undefined FUN_148ffad7c(void)

undefined8 FUN_148ffad7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ffad9a FUN_148ffad9a body=38 status=ok
// SIG undefined FUN_148ffad9a(void)

undefined8 FUN_148ffad9a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Unblock",1);
  return param_2;
}



// FUNCTION 148ffadc0 FUN_148ffadc0 body=25 status=ok
// SIG undefined FUN_148ffadc0(void)

undefined8 FUN_148ffadc0(undefined8 param_1,undefined8 param_2)

{
  FUN_148fcfb36(param_2);
  return param_2;
}



// FUNCTION 148ffadda FUN_148ffadda body=25 status=ok
// SIG undefined FUN_148ffadda(void)

undefined8 FUN_148ffadda(undefined8 param_1,undefined8 param_2)

{
  FUN_148fcfbd0(param_2);
  return param_2;
}



// FUNCTION 148ffae1a FUN_148ffae1a body=118 status=ok
// SIG undefined FUN_148ffae1a(void)

ulonglong FUN_148ffae1a(undefined8 param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  
  cVar1 = FUN_148fcfcc8();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_148ffae90();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((DAT_14cbf5b60 != (longlong *)0x0 && DAT_14cbf5b68 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf5b60 + 0x30))(), cVar1 != '\0')) {
      FUN_148ffae90();
      plVar3 = DAT_14cbf5b60;
      if (DAT_14cbf5b68 == 0) {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ffae8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ffae90 FUN_148ffae90 body=112 status=ok
// SIG undefined FUN_148ffae90(void)

void FUN_148ffae90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5b70) {
    FUN_144b3d300(&DAT_14cbf5b70);
    if (DAT_14cbf5b70 == -1) {
      DAT_14cbf5b60 = 0;
      DAT_14cbf5b68 = 0;
      atexit(FUN_1443dd40b);
      _Init_thread_footer(&DAT_14cbf5b70);
      return;
    }
  }
  return;
}



// FUNCTION 148ffaf00 FUN_148ffaf00 body=150 status=ok
// SIG undefined FUN_148ffaf00(void)

void FUN_148ffaf00(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 6;
  FUN_145936eee(local_78,plVar1);
  FUN_14058acb2(plVar1,param_2);
  (**(code **)(*param_1 + 0x380))(param_1,0);
  FUN_146b4993e(plVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ffaf98 FUN_148ffaf98 body=109 status=ok
// SIG undefined FUN_148ffaf98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148ffaf98(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5b80) {
    FUN_144b3d300(&DAT_14cbf5b80);
    if (DAT_14cbf5b80 == -1) {
      _DAT_14cbf5b78 = &PTR_FUN_14ba5ef70;
      _Init_thread_footer(&DAT_14cbf5b80);
    }
  }
  *param_1 = &DAT_14cbf5b78;
  return param_1;
}



// FUNCTION 148ffb006 FUN_148ffb006 body=29 status=ok
// SIG undefined FUN_148ffb006(void)

undefined8 FUN_148ffb006(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ffb024 FUN_148ffb024 body=38 status=ok
// SIG undefined FUN_148ffb024(void)

undefined8 FUN_148ffb024(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ShowPlatformProfile",1);
  return param_2;
}



// FUNCTION 148ffb04a FUN_148ffb04a body=25 status=ok
// SIG undefined FUN_148ffb04a(void)

undefined8 FUN_148ffb04a(undefined8 param_1,undefined8 param_2)

{
  FUN_148fd01a8(param_2);
  return param_2;
}



// FUNCTION 148ffb064 FUN_148ffb064 body=32 status=ok
// SIG undefined FUN_148ffb064(void)

undefined8 FUN_148ffb064(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 148ffb0a0 FUN_148ffb0a0 body=118 status=ok
// SIG undefined FUN_148ffb0a0(void)

ulonglong FUN_148ffb0a0(undefined8 param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  
  cVar1 = FUN_148fd0242();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_148ffb116();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((DAT_14cbf5b88 != (longlong *)0x0 && DAT_14cbf5b90 != 0) &&
       (cVar1 = (**(code **)(*DAT_14cbf5b88 + 0x30))(), cVar1 != '\0')) {
      FUN_148ffb116();
      plVar3 = DAT_14cbf5b88;
      if (DAT_14cbf5b90 == 0) {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000148ffb113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148ffb116 FUN_148ffb116 body=112 status=ok
// SIG undefined FUN_148ffb116(void)

void FUN_148ffb116(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5b98) {
    FUN_144b3d300(&DAT_14cbf5b98);
    if (DAT_14cbf5b98 == -1) {
      DAT_14cbf5b88 = 0;
      DAT_14cbf5b90 = 0;
      atexit(FUN_1443dd466);
      _Init_thread_footer(&DAT_14cbf5b98);
      return;
    }
  }
  return;
}



// FUNCTION 148ffb186 FUN_148ffb186 body=144 status=ok
// SIG undefined FUN_148ffb186(void)

void FUN_148ffb186(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x30;
  FUN_145936eee(local_78,lVar1);
  FUN_14058acb2(lVar1,param_2);
  FUN_148fd0402(param_1);
  FUN_146b4993e(lVar1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ffb218 FUN_148ffb218 body=29 status=ok
// SIG undefined FUN_148ffb218(void)

undefined8 FUN_148ffb218(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ffb250 FUN_148ffb250 body=29 status=ok
// SIG undefined FUN_148ffb250(void)

bool FUN_148ffb250(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ffb26e FUN_148ffb26e body=26 status=ok
// SIG undefined FUN_148ffb26e(void)

bool FUN_148ffb26e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ffb288 FUN_148ffb288 body=24 status=ok
// SIG undefined FUN_148ffb288(void)

bool FUN_148ffb288(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148ffb2ac FUN_148ffb2ac body=101 status=ok
// SIG undefined FUN_148ffb2ac(void)

void FUN_148ffb2ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5f030;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba5efc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ffb312 FUN_148ffb312 body=101 status=ok
// SIG undefined FUN_148ffb312(void)

void FUN_148ffb312(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5f030;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba5efc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ffb378 FUN_148ffb378 body=134 status=ok
// SIG undefined FUN_148ffb378(void)

void FUN_148ffb378(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba5f030;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5efc0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ffb3ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ffb3fe FUN_148ffb3fe body=54 status=ok
// SIG undefined FUN_148ffb3fe(void)

void FUN_148ffb3fe(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ffb431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(undefined4 *)(param_1 + 8));
  return;
}



// FUNCTION 148ffb434 FUN_148ffb434 body=169 status=ok
// SIG undefined FUN_148ffb434(void)

bool FUN_148ffb434(longlong param_1,undefined4 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))
              (*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,*(undefined4 *)(param_1 + 8));
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



// FUNCTION 148ffb4e0 FUN_148ffb4e0 body=164 status=ok
// SIG undefined FUN_148ffb4e0(void)

void FUN_148ffb4e0(longlong *param_1,undefined8 param_2)

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
        goto LAB_148ffb560;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148ffb560:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148ffb584 FUN_148ffb584 body=132 status=ok
// SIG undefined FUN_148ffb584(void)

void FUN_148ffb584(longlong param_1,int param_2)

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



// FUNCTION 148ffb60a FUN_148ffb60a body=29 status=ok
// SIG undefined FUN_148ffb60a(void)

undefined8 FUN_148ffb60a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ffb642 FUN_148ffb642 body=29 status=ok
// SIG undefined FUN_148ffb642(void)

bool FUN_148ffb642(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ffb660 FUN_148ffb660 body=26 status=ok
// SIG undefined FUN_148ffb660(void)

bool FUN_148ffb660(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ffb67a FUN_148ffb67a body=24 status=ok
// SIG undefined FUN_148ffb67a(void)

bool FUN_148ffb67a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148ffb692 FUN_148ffb692 body=101 status=ok
// SIG undefined FUN_148ffb692(void)

void FUN_148ffb692(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c990;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba5f0a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ffb6f8 FUN_148ffb6f8 body=101 status=ok
// SIG undefined FUN_148ffb6f8(void)

void FUN_148ffb6f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c990;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba5f0a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ffb75e FUN_148ffb75e body=134 status=ok
// SIG undefined FUN_148ffb75e(void)

void FUN_148ffb75e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b42c990;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5f0a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ffb7d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ffb7e4 FUN_148ffb7e4 body=39 status=ok
// SIG undefined FUN_148ffb7e4(void)

void FUN_148ffb7e4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ffb808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined4 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148ffb80c FUN_148ffb80c body=149 status=ok
// SIG undefined FUN_148ffb80c(void)

bool FUN_148ffb80c(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined4 *)(param_1 + 8));
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



// FUNCTION 148ffb8a2 FUN_148ffb8a2 body=29 status=ok
// SIG undefined FUN_148ffb8a2(void)

undefined8 FUN_148ffb8a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ffb8da FUN_148ffb8da body=29 status=ok
// SIG undefined FUN_148ffb8da(void)

bool FUN_148ffb8da(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ffb8f8 FUN_148ffb8f8 body=26 status=ok
// SIG undefined FUN_148ffb8f8(void)

bool FUN_148ffb8f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ffb912 FUN_148ffb912 body=24 status=ok
// SIG undefined FUN_148ffb912(void)

bool FUN_148ffb912(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148ffb936 FUN_148ffb936 body=101 status=ok
// SIG undefined FUN_148ffb936(void)

void FUN_148ffb936(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5f180;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba5f110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ffb99c FUN_148ffb99c body=101 status=ok
// SIG undefined FUN_148ffb99c(void)

void FUN_148ffb99c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5f180;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba5f110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ffba02 FUN_148ffba02 body=134 status=ok
// SIG undefined FUN_148ffba02(void)

void FUN_148ffba02(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba5f180;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5f110;
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
                    /* WARNING: Could not recover jumptable at 0x000148ffba79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ffba88 FUN_148ffba88 body=69 status=ok
// SIG undefined FUN_148ffba88(void)

void FUN_148ffba88(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4,*(undefined4 *)(param_1 + 8));
  return;
}



// FUNCTION 148ffbace FUN_148ffbace body=184 status=ok
// SIG undefined FUN_148ffbace(void)

bool FUN_148ffbace(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    local_48 = *(undefined4 *)(param_1 + 8);
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



// FUNCTION 148ffbb8a FUN_148ffbb8a body=29 status=ok
// SIG undefined FUN_148ffbb8a(void)

undefined8 FUN_148ffbb8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ffbbc2 FUN_148ffbbc2 body=29 status=ok
// SIG undefined FUN_148ffbbc2(void)

bool FUN_148ffbbc2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ffbbe0 FUN_148ffbbe0 body=26 status=ok
// SIG undefined FUN_148ffbbe0(void)

bool FUN_148ffbbe0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ffbbfa FUN_148ffbbfa body=24 status=ok
// SIG undefined FUN_148ffbbfa(void)

bool FUN_148ffbbfa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148ffbc1e FUN_148ffbc1e body=101 status=ok
// SIG undefined FUN_148ffbc1e(void)

void FUN_148ffbc1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5f260;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba5f1f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ffbc84 FUN_148ffbc84 body=101 status=ok
// SIG undefined FUN_148ffbc84(void)

void FUN_148ffbc84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba5f260;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba5f1f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ffbcea FUN_148ffbcea body=134 status=ok
// SIG undefined FUN_148ffbcea(void)

void FUN_148ffbcea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba5f260;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14ba5f1f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148ffbd61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ffbd70 FUN_148ffbd70 body=82 status=ok
// SIG undefined FUN_148ffbd70(void)

void FUN_148ffbd70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4,param_5,
             *(undefined4 *)(param_1 + 8));
  return;
}



// FUNCTION 148ffbdc2 FUN_148ffbdc2 body=195 status=ok
// SIG undefined FUN_148ffbdc2(void)

bool FUN_148ffbdc2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
    local_50 = *(undefined4 *)(param_1 + 8);
    local_58 = param_5;
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ffbe88 FUN_148ffbe88 body=85 status=ok
// SIG undefined FUN_148ffbe88(void)

void FUN_148ffbe88(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0xe8) == *param_2) {
          FUN_148ffbede();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xe8 + *param_1 + 0xe0);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148ffbede FUN_148ffbede body=138 status=ok
// SIG undefined FUN_148ffbede(void)

void FUN_148ffbede(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0xe8;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0xe4 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0xe0 + lVar6 * 0xe8);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0xe8 + 0xe0);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0xe0);
  FUN_148fdd144(*param_1 + lVar2 + 8);
  FUN_148ff721e(param_1,param_2);
  return;
}


