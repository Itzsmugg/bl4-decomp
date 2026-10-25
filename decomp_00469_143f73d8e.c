// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143f73d8e FUN_143f73d8e body=325 status=ok
// SIG undefined FUN_143f73d8e(void)

void FUN_143f73d8e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  _LIST_ENTRY **pp_Var1;
  DWORD DVar2;
  int iVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  void *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var4 = param_2[1].DebugInfo;
  *(undefined ***)p_Var4 = &PTR_LAB_14b5072b0;
  (p_Var4->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var4 = &PTR_FUN_14b506280;
  (p_Var4->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  DVar2 = *(DWORD *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  p_Var4->EntryCount = DVar2;
  if ((longlong)(int)DVar2 == 0) {
    p_Var4->ContentionCount = 0;
  }
  else {
    pp_Var1 = &(p_Var4->ProcessLocksList).Blink;
    FUN_1446dd670(pp_Var1,DVar2,0);
    memcpy(*pp_Var1,_Src,(longlong)(int)DVar2 * 2);
  }
  p_Var4->Flags = 0;
  p_Var4->CreatorBackTraceIndexHigh = 0;
  p_Var4->SpareWORD = 0;
  iVar3 = *(int *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  p_Var4[1].Type = (short)iVar3;
  p_Var4[1].CreatorBackTraceIndex = (short)((uint)iVar3 >> 0x10);
  if (iVar3 == 0) {
    *(undefined4 *)&p_Var4[1].field_0x4 = 0;
  }
  else {
    FUN_145c496b4(&p_Var4->Flags,iVar3,0);
    uVar6._0_4_ = p_Var4->Flags;
    uVar6._4_2_ = p_Var4->CreatorBackTraceIndexHigh;
    uVar6._6_2_ = p_Var4->SpareWORD;
    FUN_14150193d(uVar6,uVar5,iVar3);
  }
  p_Var4[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&p_Var4[1].ProcessLocksList.Flink = 0;
  FUN_14658a2de(&p_Var4[1].CriticalSection,param_1 + 0x38);
  *(undefined1 *)&p_Var4[1].ProcessLocksList.Blink = *(undefined1 *)(param_1 + 0x48);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f73ebd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f73ee0 FUN_143f73ee0 body=23 status=ok
// SIG undefined FUN_143f73ee0(void)

undefined1 FUN_143f73ee0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143f73ef8(param_1 + 0x18,param_3);
  return 1;
}



// FUNCTION 143f73ef8 FUN_143f73ef8 body=186 status=ok
// SIG undefined FUN_143f73ef8(void)

void FUN_143f73ef8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  FUN_143f5ea97(&local_48,param_1 + 0x10,param_2,*(undefined1 *)(param_1 + 0x30));
  FUN_146589888(&local_38,&local_48);
  FUN_145da91ec(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,&local_38);
  }
  FUN_145da91ec(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f73fb4 FUN_143f73fb4 body=151 status=ok
// SIG undefined FUN_143f73fb4(void)

undefined8 * FUN_143f73fb4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b5062f0;
  plVar1 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f74005;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f74005:
  FUN_141323308(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f74060 FUN_143f74060 body=264 status=ok
// SIG undefined FUN_143f74060(void)

void FUN_143f74060(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5072b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5062f0;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
  }
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_145c496b4(puVar2 + 5,iVar1,0);
    FUN_14150193d(puVar2[5],uVar3,iVar1);
  }
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_14658a2de(puVar2 + 7,param_1 + 0x38);
  *(undefined1 *)(puVar2 + 9) = *(undefined1 *)(param_1 + 0x48);
  return;
}



// FUNCTION 143f74168 FUN_143f74168 body=264 status=ok
// SIG undefined FUN_143f74168(void)

void FUN_143f74168(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5072b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5062f0;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
  }
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_145c496b4(puVar2 + 5,iVar1,0);
    FUN_14150193d(puVar2[5],uVar3,iVar1);
  }
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_14658a2de(puVar2 + 7,param_1 + 0x38);
  *(undefined1 *)(puVar2 + 9) = *(undefined1 *)(param_1 + 0x48);
  return;
}



// FUNCTION 143f74270 FUN_143f74270 body=325 status=ok
// SIG undefined FUN_143f74270(void)

void FUN_143f74270(longlong param_1,LPCRITICAL_SECTION param_2)

{
  _LIST_ENTRY **pp_Var1;
  DWORD DVar2;
  int iVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  void *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var4 = param_2[1].DebugInfo;
  *(undefined ***)p_Var4 = &PTR_LAB_14b5072b0;
  (p_Var4->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var4 = &PTR_FUN_14b5062f0;
  (p_Var4->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  DVar2 = *(DWORD *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  p_Var4->EntryCount = DVar2;
  if ((longlong)(int)DVar2 == 0) {
    p_Var4->ContentionCount = 0;
  }
  else {
    pp_Var1 = &(p_Var4->ProcessLocksList).Blink;
    FUN_1446dd670(pp_Var1,DVar2,0);
    memcpy(*pp_Var1,_Src,(longlong)(int)DVar2 * 2);
  }
  p_Var4->Flags = 0;
  p_Var4->CreatorBackTraceIndexHigh = 0;
  p_Var4->SpareWORD = 0;
  iVar3 = *(int *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  p_Var4[1].Type = (short)iVar3;
  p_Var4[1].CreatorBackTraceIndex = (short)((uint)iVar3 >> 0x10);
  if (iVar3 == 0) {
    *(undefined4 *)&p_Var4[1].field_0x4 = 0;
  }
  else {
    FUN_145c496b4(&p_Var4->Flags,iVar3,0);
    uVar6._0_4_ = p_Var4->Flags;
    uVar6._4_2_ = p_Var4->CreatorBackTraceIndexHigh;
    uVar6._6_2_ = p_Var4->SpareWORD;
    FUN_14150193d(uVar6,uVar5,iVar3);
  }
  p_Var4[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&p_Var4[1].ProcessLocksList.Flink = 0;
  FUN_14658a2de(&p_Var4[1].CriticalSection,param_1 + 0x38);
  *(undefined1 *)&p_Var4[1].ProcessLocksList.Blink = *(undefined1 *)(param_1 + 0x48);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f7439f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f743c2 FUN_143f743c2 body=23 status=ok
// SIG undefined FUN_143f743c2(void)

undefined1 FUN_143f743c2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143f743da(param_1 + 0x18,param_3);
  return 1;
}



// FUNCTION 143f743da FUN_143f743da body=186 status=ok
// SIG undefined FUN_143f743da(void)

void FUN_143f743da(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  FUN_143f5ea97(&local_48,param_1 + 0x10,param_2,*(undefined1 *)(param_1 + 0x30));
  FUN_146589888(&local_38,&local_48);
  FUN_145da91ec(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,&local_38);
  }
  FUN_145da91ec(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f74496 FUN_143f74496 body=137 status=ok
// SIG undefined FUN_143f74496(void)

undefined8 * FUN_143f74496(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b506360;
  plVar1 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f744e7;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f744e7:
  FUN_1447a1747(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f74534 FUN_143f74534 body=190 status=ok
// SIG undefined FUN_143f74534(void)

void FUN_143f74534(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e001f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b506360;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_140b856de(puVar2 + 3,iVar1,0);
    FUN_140b8566a(puVar2[3],uVar3,iVar1);
  }
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  FUN_14114e6dc(puVar2 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143f745f2 FUN_143f745f2 body=190 status=ok
// SIG undefined FUN_143f745f2(void)

void FUN_143f745f2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e001f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b506360;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_140b856de(puVar2 + 3,iVar1,0);
    FUN_140b8566a(puVar2[3],uVar3,iVar1);
  }
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  FUN_14114e6dc(puVar2 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143f746b0 FUN_143f746b0 body=247 status=ok
// SIG undefined FUN_143f746b0(void)

void FUN_143f746b0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  _LIST_ENTRY **pp_Var1;
  DWORD DVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  undefined8 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var3 = param_2[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_149e001f0;
  (p_Var3->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var3 = &PTR_FUN_14b506360;
  (p_Var3->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  DVar2 = *(DWORD *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  p_Var3->EntryCount = DVar2;
  if (DVar2 == 0) {
    p_Var3->ContentionCount = 0;
  }
  else {
    pp_Var1 = &(p_Var3->ProcessLocksList).Blink;
    FUN_140b856de(pp_Var1,DVar2,0);
    FUN_140b8566a(*pp_Var1,uVar4,DVar2);
  }
  p_Var3->Flags = 0;
  p_Var3->CreatorBackTraceIndexHigh = 0;
  p_Var3->SpareWORD = 0;
  p_Var3[1].Type = 0;
  p_Var3[1].CreatorBackTraceIndex = 0;
  FUN_14114e6dc(&p_Var3->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f74791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f747b2 FUN_143f747b2 body=20 status=ok
// SIG undefined FUN_143f747b2(void)

undefined1 FUN_143f747b2(longlong param_1)

{
  FUN_143f747c6(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f747c6 FUN_143f747c6 body=781 status=ok
// SIG undefined FUN_143f747c6(void)

void FUN_143f747c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  uVar3 = DAT_14cb987b8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
  plVar7 = (longlong *)FUN_140773fe2();
  if (plVar7 == (longlong *)0x0) goto LAB_143f74836;
  lVar8 = (**(code **)(*plVar7 + 0x2d0))(plVar7,uVar3,uVar6);
  if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x2b8) == 0)) goto LAB_143f74836;
  local_58 = 0;
  uStack_50 = 0;
  if (*(int *)(param_1 + 8) < 1) {
    local_80 = 0;
LAB_143f74961:
    local_88 = 0;
    local_80 = local_80 & 0xffffffff;
  }
  else {
    lVar10 = 8;
    lVar9 = 0;
    local_90 = lVar8;
    do {
      uVar4 = uStack_50;
      lVar8 = *param_2;
      if (1 < *(int *)(lVar8 + lVar10)) {
        lVar11 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a1bd6(&local_58,uVar4 & 0xffffffff);
        }
        lVar11 = lVar11 * 0x10;
        puVar1 = (undefined8 *)(local_58 + lVar11);
        *(undefined8 *)(local_58 + lVar11) = 0;
        iVar2 = *(int *)(lVar8 + lVar10);
        _Src = *(void **)(lVar8 + -8 + lVar10);
        *(int *)(local_58 + 8 + lVar11) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      uVar4 = uStack_50;
      lVar11 = local_58;
      lVar8 = local_90;
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar9 < *(int *)(param_1 + 8));
    local_88 = 0;
    local_80 = CONCAT44(local_80._4_4_,(int)uStack_50);
    if ((int)uStack_50 == 0) goto LAB_143f74961;
    FUN_140b856de(&local_88,uStack_50 & 0xffffffff,0);
    FUN_140b8566a(local_88,lVar11,uVar4 & 0xffffffff);
  }
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_14114e6dc(&local_78,param_1 + 0x10);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,4,0x10);
  local_60 = 4;
  *local_68 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_68[2] = lVar10;
  *local_68 = &PTR_FUN_14b5063d0;
  local_68[3] = local_88;
  local_88 = 0;
  *(undefined4 *)(local_68 + 4) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_68 + 0x24) = local_80._4_4_;
  local_80 = 0;
  local_68[5] = local_78;
  local_78 = (undefined8 *)0x0;
  *(int *)(local_68 + 6) = local_70;
  local_70 = 0;
  FUN_145c4b799(lVar8,&local_58,&local_68,0);
  if (local_70 == 0) {
LAB_143f74a6c:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70 = 0;
    goto LAB_143f74a6c;
  }
  FUN_1447a1747(local_88,local_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_143f74836:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f74ad4 FUN_143f74ad4 body=137 status=ok
// SIG undefined FUN_143f74ad4(void)

undefined8 * FUN_143f74ad4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b5063d0;
  plVar1 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f74b25;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f74b25:
  FUN_1447a1747(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f74b72 FUN_143f74b72 body=190 status=ok
// SIG undefined FUN_143f74b72(void)

void FUN_143f74b72(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e001f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5063d0;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_140b856de(puVar2 + 3,iVar1,0);
    FUN_140b8566a(puVar2[3],uVar3,iVar1);
  }
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  FUN_14114e6dc(puVar2 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143f74c30 FUN_143f74c30 body=190 status=ok
// SIG undefined FUN_143f74c30(void)

void FUN_143f74c30(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e001f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5063d0;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_140b856de(puVar2 + 3,iVar1,0);
    FUN_140b8566a(puVar2[3],uVar3,iVar1);
  }
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  FUN_14114e6dc(puVar2 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143f74cee FUN_143f74cee body=247 status=ok
// SIG undefined FUN_143f74cee(void)

void FUN_143f74cee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  _LIST_ENTRY **pp_Var1;
  DWORD DVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  undefined8 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var3 = param_2[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_149e001f0;
  (p_Var3->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var3 = &PTR_FUN_14b5063d0;
  (p_Var3->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  DVar2 = *(DWORD *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  p_Var3->EntryCount = DVar2;
  if (DVar2 == 0) {
    p_Var3->ContentionCount = 0;
  }
  else {
    pp_Var1 = &(p_Var3->ProcessLocksList).Blink;
    FUN_140b856de(pp_Var1,DVar2,0);
    FUN_140b8566a(*pp_Var1,uVar4,DVar2);
  }
  p_Var3->Flags = 0;
  p_Var3->CreatorBackTraceIndexHigh = 0;
  p_Var3->SpareWORD = 0;
  p_Var3[1].Type = 0;
  p_Var3[1].CreatorBackTraceIndex = 0;
  FUN_14114e6dc(&p_Var3->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f74dcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f74e00 FUN_143f74e00 body=33 status=ok
// SIG undefined FUN_143f74e00(void)

undefined8 FUN_143f74e00(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,1);
  return 1;
}



// FUNCTION 143f74e22 FUN_143f74e22 body=69 status=ok
// SIG undefined FUN_143f74e22(void)

undefined8 * FUN_143f74e22(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b506440;
  FUN_140b6c1c2(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f74e7c FUN_143f74e7c body=162 status=ok
// SIG undefined FUN_143f74e7c(void)

void FUN_143f74e7c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b506440;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if (iVar1 != 0) {
    FUN_140b6f604(puVar2 + 4,iVar1,0);
    FUN_140b6ce2b(puVar2[4],uVar3,iVar1);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143f74f1e FUN_143f74f1e body=162 status=ok
// SIG undefined FUN_143f74f1e(void)

void FUN_143f74f1e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b506440;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if (iVar1 != 0) {
    FUN_140b6f604(puVar2 + 4,iVar1,0);
    FUN_140b6ce2b(puVar2[4],uVar3,iVar1);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143f74fc0 FUN_143f74fc0 body=196 status=ok
// SIG undefined FUN_143f74fc0(void)

void FUN_143f74fc0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e06450;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b506440;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if (DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_140b6f604(&p_Var2->EntryCount,DVar1,0);
    uVar4._0_4_ = p_Var2->EntryCount;
    uVar4._4_4_ = p_Var2->ContentionCount;
    FUN_140b6ce2b(uVar4,uVar3,DVar1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f75073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f75092 FUN_143f75092 body=24 status=ok
// SIG undefined FUN_143f75092(void)

undefined1 FUN_143f75092(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_143f6056c(*(undefined8 *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 143f750aa FUN_143f750aa body=29 status=ok
// SIG undefined FUN_143f750aa(void)

undefined8 FUN_143f750aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f750dc FUN_143f750dc body=85 status=ok
// SIG undefined FUN_143f750dc(void)

void FUN_143f750dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4daf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5069b0;
  return;
}



// FUNCTION 143f75132 FUN_143f75132 body=85 status=ok
// SIG undefined FUN_143f75132(void)

void FUN_143f75132(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4daf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5069b0;
  return;
}



// FUNCTION 143f75188 FUN_143f75188 body=118 status=ok
// SIG undefined FUN_143f75188(void)

void FUN_143f75188(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4daf00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5069b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f751ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f751fe FUN_143f751fe body=70 status=ok
// SIG undefined FUN_143f751fe(void)

void FUN_143f751fe(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_9 = param_3;
  FUN_143f75290(&local_18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f75246 FUN_143f75246 body=72 status=ok
// SIG undefined FUN_143f75246(void)

undefined8 FUN_143f75246(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_9 = param_3;
  FUN_143f75290(&local_18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f75290 FUN_143f75290 body=230 status=ok
// SIG undefined FUN_143f75290(void)

void FUN_143f75290(longlong *param_1,char *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == '\x01') {
    DAT_14cb98ac0 = 1;
    local_38 = 0;
    iVar3 = *(int *)(*param_1 + 0x2e0);
    uVar1 = *(undefined8 *)(*param_1 + 0x2d8);
    local_30 = iVar3;
    if (iVar3 == 0) {
      local_2c = 0;
      iVar3 = 0;
    }
    else {
      FUN_148a65828(&local_38,iVar3,0);
      FUN_148a6589b(local_38,uVar1,iVar3);
      iVar3 = 0;
      if (local_30 != 0) {
        plVar2 = (longlong *)(**(code **)(*DAT_14cb98ab8 + 0xf8))();
        (**(code **)(*plVar2 + 600))(plVar2,"Set_EULA_Notification_Required");
        iVar3 = local_30;
      }
    }
    FUN_145be99e5(local_38,iVar3);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f75378 FUN_143f75378 body=29 status=ok
// SIG undefined FUN_143f75378(void)

undefined8 FUN_143f75378(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f753aa FUN_143f753aa body=85 status=ok
// SIG undefined FUN_143f753aa(void)

void FUN_143f753aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b506a90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506a20;
  return;
}



// FUNCTION 143f75400 FUN_143f75400 body=85 status=ok
// SIG undefined FUN_143f75400(void)

void FUN_143f75400(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b506a90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506a20;
  return;
}



// FUNCTION 143f75456 FUN_143f75456 body=118 status=ok
// SIG undefined FUN_143f75456(void)

void FUN_143f75456(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b506a90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b506a20;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f754bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f754cc FUN_143f754cc body=73 status=ok
// SIG undefined FUN_143f754cc(void)

void FUN_143f754cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_4;
  FUN_143f75562(&local_18,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f75516 FUN_143f75516 body=75 status=ok
// SIG undefined FUN_143f75516(void)

undefined8
FUN_143f75516(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_4;
  FUN_143f75562(&local_18,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f75562 FUN_143f75562 body=469 status=ok
// SIG undefined FUN_143f75562(void)

void FUN_143f75562(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_3;
  if (*param_1 == 0) {
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar6 = *(uint *)(*param_1 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar4 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar4 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar4 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar7;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar4 = uVar7;
      }
    }
  }
  local_48 = (void *)CONCAT44(uVar4,uVar6);
  iVar3 = FUN_148ac8928(uVar4 ^ uVar6);
  lVar9 = 0;
  if (iVar3 != -1) {
    lVar9 = (longlong)iVar3 * 0x20 + DAT_14cb98ac8;
  }
  if (((lVar9 != 0) && (puVar8 = (undefined8 *)(lVar9 + 8), puVar8 != (undefined8 *)0x0)) &&
     (puVar8 != param_2)) {
    iVar3 = *(int *)(param_2 + 1);
    pvVar2 = (void *)*param_2;
    *(int *)(lVar9 + 0x10) = iVar3;
    if (iVar3 == 0 && *(int *)(lVar9 + 0x14) == 0) {
      *(undefined4 *)(lVar9 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(puVar8,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)*puVar8,pvVar2,(longlong)iVar3 * 2);
      }
    }
  }
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_2 + 1);
  lVar9 = (longlong)local_40;
  pvVar2 = (void *)*param_2;
  if (lVar9 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar2,lVar9 * 2);
  }
  local_38 = uVar1;
  uVar5 = (**(code **)(*DAT_14cb98ab8 + 0xf8))();
  FUN_148ac033c(uVar5,&local_48);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f75738 FUN_143f75738 body=29 status=ok
// SIG undefined FUN_143f75738(void)

undefined8 FUN_143f75738(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f7576a FUN_143f7576a body=85 status=ok
// SIG undefined FUN_143f7576a(void)

void FUN_143f7576a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b506b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506b00;
  return;
}



// FUNCTION 143f757c0 FUN_143f757c0 body=85 status=ok
// SIG undefined FUN_143f757c0(void)

void FUN_143f757c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b506b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506b00;
  return;
}



// FUNCTION 143f75816 FUN_143f75816 body=118 status=ok
// SIG undefined FUN_143f75816(void)

void FUN_143f75816(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b506b70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b506b00;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f7587d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f7588c FUN_143f7588c body=70 status=ok
// SIG undefined FUN_143f7588c(void)

void FUN_143f7588c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_143f7591e(&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f758d4 FUN_143f758d4 body=72 status=ok
// SIG undefined FUN_143f758d4(void)

undefined8 FUN_143f758d4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_143f7591e(&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7591e FUN_143f7591e body=202 status=ok
// SIG undefined FUN_143f7591e(void)

void FUN_143f7591e(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  
  iVar1 = *param_2;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    uVar7 = 0;
    uVar5 = 0;
  }
  else {
    uVar7 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar5 = (ulonglong)*(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar4 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar4 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar6;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar4 = uVar6;
      }
      uVar5 = (ulonglong)uVar4;
    }
  }
  FUN_148ac8a8a((ulonglong)uVar7 | uVar5 << 0x20);
  if (iVar1 == 0) {
    FUN_148ac03a3(lVar2);
    return;
  }
  return;
}



// FUNCTION 143f759e8 FUN_143f759e8 body=29 status=ok
// SIG undefined FUN_143f759e8(void)

undefined8 FUN_143f759e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f75a1a FUN_143f75a1a body=85 status=ok
// SIG undefined FUN_143f75a1a(void)

void FUN_143f75a1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ec7e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506be0;
  return;
}



// FUNCTION 143f75a70 FUN_143f75a70 body=85 status=ok
// SIG undefined FUN_143f75a70(void)

void FUN_143f75a70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ec7e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506be0;
  return;
}



// FUNCTION 143f75ac6 FUN_143f75ac6 body=118 status=ok
// SIG undefined FUN_143f75ac6(void)

void FUN_143f75ac6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ec7e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b506be0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f75b2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f75b3c FUN_143f75b3c body=59 status=ok
// SIG undefined FUN_143f75b3c(void)

void FUN_143f75b3c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f75bb6();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f75b78 FUN_143f75b78 body=61 status=ok
// SIG undefined FUN_143f75b78(void)

undefined8 FUN_143f75b78(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f75bb6();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f75bb6 FUN_143f75bb6 body=312 status=ok
// SIG undefined FUN_143f75bb6(void)

void FUN_143f75bb6(int *param_1)

{
  void *_Src;
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  void *local_78;
  uint local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  void *local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *param_1;
  if (iVar2 == 8) {
    iVar2 = 8;
  }
  else if (iVar2 == 0) {
    local_30 = (void *)0x0;
    uStack_28 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_68[0] = 1;
    uVar1 = (**(code **)(*DAT_14cb98ab8 + 0xf8))();
    FUN_148ac049c(uVar1,"Save_Display_Name_Response",local_68);
    FUN_148ac8c26(local_68);
    goto LAB_143f75ccd;
  }
  FUN_148ac0505(&local_78,iVar2);
  _Src = local_78;
  local_68[0] = 0;
  local_30 = (void *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_28 = (ulonglong)local_70;
  if ((longlong)(int)local_70 != 0) {
    FUN_1446dd670(&local_30,local_70,0);
    memcpy(local_30,_Src,(longlong)(int)local_70 * 2);
  }
  uVar1 = (**(code **)(*DAT_14cb98ab8 + 0xf8))();
  FUN_148ac049c(uVar1,"Save_Display_Name_Response",local_68);
  FUN_148ac8c26(local_68);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143f75ccd:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f75cf0 FUN_143f75cf0 body=29 status=ok
// SIG undefined FUN_143f75cf0(void)

undefined8 FUN_143f75cf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f75d22 FUN_143f75d22 body=91 status=ok
// SIG undefined FUN_143f75d22(void)

void FUN_143f75d22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4da5c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506c50;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f75d7e FUN_143f75d7e body=91 status=ok
// SIG undefined FUN_143f75d7e(void)

void FUN_143f75d7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4da5c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506c50;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f75dda FUN_143f75dda body=124 status=ok
// SIG undefined FUN_143f75dda(void)

void FUN_143f75dda(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4da5c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b506c50;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f75e47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f75e56 FUN_143f75e56 body=78 status=ok
// SIG undefined FUN_143f75e56(void)

void FUN_143f75e56(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_a = param_3;
  FUN_143f75ef8(param_1 + 0x18,&local_18,&local_a);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f75ea6 FUN_143f75ea6 body=80 status=ok
// SIG undefined FUN_143f75ea6(void)

undefined8 FUN_143f75ea6(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_a = param_3;
  FUN_143f75ef8(param_1 + 0x18,&local_18,&local_a);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f75ef8 FUN_143f75ef8 body=674 status=ok
// SIG undefined FUN_143f75ef8(void)

void FUN_143f75ef8(int *param_1,longlong *param_2,short *param_3,undefined8 *param_4)

{
  short sVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_2 == 0) goto LAB_143f75f51;
  uVar3 = *param_4;
  iVar5 = *(int *)(param_4 + 1);
  sVar1 = *param_3;
  *(undefined1 *)(DAT_14cb98b30 + 0x88 + (longlong)*param_1 * 0x90) = 1;
  if ((ushort)(sVar1 - 300U) < 0xff9c) goto LAB_143f75f51;
  local_88 = uVar3;
  local_80 = (longlong)iVar5;
  lVar6 = FUN_14352f81e();
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (lVar6 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    FUN_1400bbfc4(&local_48,lVar6);
    uStack_70 = CONCAT44(uStack_44,local_48);
    local_68 = CONCAT44(uStack_3c,iStack_40);
    if (uStack_60 != 0) {
      FUN_1400020a8();
    }
    uStack_60 = CONCAT44(uStack_34,local_38);
    local_58 = CONCAT44(uStack_2c,uStack_30);
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    uVar2 = *(uint *)(lVar6 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        local_78 = 0;
        goto LAB_143f76070;
      }
    }
    local_78 = CONCAT44(local_78._4_4_,uVar2);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar5 = iVar7;
      }
    }
    local_78 = CONCAT44(iVar5,(undefined4)local_78);
  }
LAB_143f76070:
  FUN_14475cc44(&uStack_70,&local_48);
  if (iStack_40 < 2) {
    FUN_14020fad6(DAT_14cb98b30 + (longlong)*param_1 * 0x90 + 0x58,&DAT_149dfb77a);
  }
  else {
    FUN_140002266(&local_98,L"Texture2D\'%s\'",CONCAT44(uStack_44,local_48));
    lVar6 = DAT_14cb98b30 + (longlong)*param_1 * 0x90;
    plVar8 = (longlong *)(lVar6 + 0x58);
    if (plVar8 != &local_98) {
      if (*plVar8 != 0) {
        FUN_1400020a8();
      }
      *plVar8 = local_98;
      local_98 = 0;
      *(undefined4 *)(lVar6 + 0x60) = (undefined4)local_90;
      *(undefined4 *)(lVar6 + 100) = local_90._4_4_;
      local_90 = 0;
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_148ac0e7f();
  if (CONCAT44(uStack_44,local_48) != 0) {
    FUN_1400020a8();
  }
  if (uStack_60 != 0) {
    FUN_1400020a8();
  }
LAB_143f75f51:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f7619c FUN_143f7619c body=29 status=ok
// SIG undefined FUN_143f7619c(void)

undefined8 FUN_143f7619c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f761ce FUN_143f761ce body=85 status=ok
// SIG undefined FUN_143f761ce(void)

void FUN_143f761ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506cc0;
  return;
}



// FUNCTION 143f76224 FUN_143f76224 body=85 status=ok
// SIG undefined FUN_143f76224(void)

void FUN_143f76224(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506cc0;
  return;
}



// FUNCTION 143f7627a FUN_143f7627a body=118 status=ok
// SIG undefined FUN_143f7627a(void)

void FUN_143f7627a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b507390;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b506cc0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f762e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f762f0 FUN_143f762f0 body=59 status=ok
// SIG undefined FUN_143f762f0(void)

void FUN_143f762f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143f7636a();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7632c FUN_143f7632c body=61 status=ok
// SIG undefined FUN_143f7632c(void)

undefined8 FUN_143f7632c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143f7636a();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7636a FUN_143f7636a body=919 status=ok
// SIG undefined FUN_143f7636a(void)

void FUN_143f7636a(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined2 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined1 auStack_128 [40];
  longlong local_100;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined2 *local_e8;
  int local_e0;
  undefined4 local_dc;
  void *local_80;
  int local_78;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar10 = (longlong)*(int *)(*param_1 + 0x2d0);
  if (lVar10 != 0) {
    lVar15 = *(longlong *)(*param_1 + 0x2c8);
    local_100 = lVar15 + lVar10 * 0x48;
    do {
      if ((longlong)*(int *)(lVar15 + 0x40) != 0) {
        puVar18 = *(undefined8 **)(lVar15 + 0x38);
        puVar14 = puVar18 + (longlong)*(int *)(lVar15 + 0x40) * 2;
        do {
          local_e8 = (undefined2 *)0x0;
          local_e0 = *(int *)(puVar18 + 1);
          lVar10 = (longlong)local_e0;
          pvVar3 = (void *)*puVar18;
          if (lVar10 == 0) {
            local_dc = 0;
          }
          else {
            FUN_1446dd670(&local_e8,local_e0,0);
            memcpy(local_e8,pvVar3,lVar10 * 2);
          }
          uVar13 = 0;
          uVar12 = (ulonglong)(DAT_14cb98b28 - 1);
          if (DAT_14cb98b28 == 0) {
            uVar12 = uVar13;
          }
          if (0 < (int)uVar12) {
            puVar8 = &DAT_149dfb77a;
            if (DAT_14cb98b28 != 0) {
              puVar8 = DAT_14cb98b20;
            }
            puVar16 = local_e8;
            if (local_e0 == 0) {
              puVar16 = &DAT_149dfb77a;
            }
            lVar10 = 0;
LAB_143f76461:
            uVar1 = *(ushort *)((longlong)puVar16 + lVar10);
            uVar2 = *(ushort *)((longlong)puVar8 + lVar10);
            if (uVar1 == uVar2) {
              iVar17 = 0;
              if ((uVar1 == 0) || (uVar12 == 1)) goto LAB_143f764af;
LAB_143f7647e:
              uVar12 = uVar12 - 1;
              lVar10 = lVar10 + 2;
              goto LAB_143f76461;
            }
            if ((uVar2 | uVar1) < 0x80) {
              if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
                iVar17 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                         (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                goto LAB_143f764af;
              }
              if (uVar12 == 1) {
                iVar17 = 0;
                goto LAB_143f764af;
              }
              goto LAB_143f7647e;
            }
            iVar17 = (uint)uVar1 - (uint)uVar2;
LAB_143f764af:
            uVar13 = (ulonglong)(iVar17 == 0);
          }
          if (local_e8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if ((char)uVar13 != '\0') {
            FUN_148ac8e14(&local_e8,DAT_14cb98b38);
            uVar5 = DAT_14cb98b38;
            lVar10 = (longlong)(int)DAT_14cb98b38;
            DAT_14cb98b38 = DAT_14cb98b38 + 1;
            if (DAT_14cb98b3c < DAT_14cb98b38) {
              FUN_148ac9298(uVar5);
            }
            FUN_148ac9152(lVar10 * 0x90 + DAT_14cb98b30,&local_e8);
            FUN_148ac11f8();
            break;
          }
          puVar18 = puVar18 + 2;
        } while (puVar18 != puVar14);
      }
      lVar15 = lVar15 + 0x48;
    } while (lVar15 != local_100);
  }
  if ((longlong)(int)DAT_14cb98b38 != 0) {
    lVar10 = (longlong)(int)DAT_14cb98b38 * 0x90;
    lVar15 = DAT_14cb98b30;
    do {
      FUN_148ac0f72(&local_e8,lVar15);
      pvVar3 = local_80;
      uVar6 = local_e8._0_4_;
      local_f8 = (void *)0x0;
      lVar19 = (longlong)local_78;
      local_f0 = local_78;
      if (lVar19 == 0) {
        local_ec = 0;
      }
      else {
        FUN_1446dd670(&local_f8,local_78,0);
        memcpy(local_f8,pvVar3,lVar19 * 2);
      }
      uVar4 = DAT_14cb987b8;
      (**(code **)(**(longlong **)(DAT_14cb98ab0 + 0x28) + 0x180))();
      plVar9 = (longlong *)FUN_140773fe2();
      if (((plVar9 != (longlong *)0x0) &&
          (lVar19 = (**(code **)(*plVar9 + 0x2d0))(plVar9,uVar4), lVar19 != 0)) &&
         (*(longlong *)(lVar19 + 0x2b8) != 0)) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,2,0x10);
        local_50 = 2;
        *local_58 = &PTR_LAB_14b4da5c0;
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
        local_58[2] = lVar11;
        *local_58 = &PTR_FUN_14b506c50;
        *(undefined4 *)(local_58 + 3) = uVar6;
        FUN_145d09e96(lVar19,&local_f8);
      }
      if (local_f8 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_148ac11f8(&local_e8);
      lVar15 = lVar15 + 0x90;
      lVar10 = lVar10 + -0x90;
    } while (lVar10 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f76702 FUN_143f76702 body=29 status=ok
// SIG undefined FUN_143f76702(void)

undefined8 FUN_143f76702(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f76734 FUN_143f76734 body=85 status=ok
// SIG undefined FUN_143f76734(void)

void FUN_143f76734(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506d40;
  return;
}



// FUNCTION 143f7678a FUN_143f7678a body=85 status=ok
// SIG undefined FUN_143f7678a(void)

void FUN_143f7678a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506d40;
  return;
}



// FUNCTION 143f767e0 FUN_143f767e0 body=118 status=ok
// SIG undefined FUN_143f767e0(void)

void FUN_143f767e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b507390;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b506d40;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f76847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f76856 FUN_143f76856 body=59 status=ok
// SIG undefined FUN_143f76856(void)

void FUN_143f76856(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143f768d0();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f76892 FUN_143f76892 body=61 status=ok
// SIG undefined FUN_143f76892(void)

undefined8 FUN_143f76892(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143f768d0();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f768d0 FUN_143f768d0 body=4168 status=ok
// SIG undefined FUN_143f768d0(void)

void FUN_143f768d0(longlong *param_1)

{
  void *pvVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined2 *puVar23;
  longlong **pplVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  longlong *plVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  int iVar33;
  longlong *plVar34;
  float fVar36;
  undefined1 auStack_418 [32];
  void **local_3f8;
  longlong **local_3e8;
  ulonglong local_3e0;
  longlong *local_3d8;
  longlong local_3d0;
  void *local_3c8;
  ulonglong uStack_3c0;
  void *local_3b8;
  ulonglong uStack_3b0;
  undefined8 local_3a0;
  longlong *local_398;
  undefined8 local_390;
  void *local_388;
  undefined8 local_380;
  void *local_378;
  undefined8 local_370;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  longlong *plVar35;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_418;
  lVar18 = *param_1;
  iVar14 = *(int *)(lVar18 + 0x340);
  if (1 < (longlong)iVar14) {
    plVar21 = *(longlong **)(lVar18 + 0x338);
    local_3d0 = lVar18;
    memset(&local_388,0,0x2f0);
    local_390 = plVar21 + (longlong)iVar14 * 7 + -7;
    local_398 = plVar21;
    fVar36 = logf((float)iVar14);
    local_388 = (void *)CONCAT44(local_388._4_4_,(int)(longlong)(fVar36 + fVar36));
    pplVar24 = &local_398;
    do {
      plVar22 = *pplVar24;
      plVar21 = pplVar24[1];
      iVar14 = (int)((ulonglong)((longlong)plVar21 - (longlong)plVar22) >> 3) * -0x49249249;
      uVar31 = (ulonglong)(iVar14 + 1);
      local_3e0 = CONCAT44(local_3e0._4_4_,*(int *)(pplVar24 + 2));
      local_3e8 = pplVar24;
      if (*(int *)(pplVar24 + 2) != 0) {
LAB_143f769a4:
        if (8 < (int)(uint)uVar31) {
          uVar31 = (ulonglong)((uint)uVar31 >> 1);
          local_68 = plVar22[uVar31 * 7 + 6];
          lVar18 = plVar22[uVar31 * 7];
          lVar19 = (plVar22 + uVar31 * 7)[1];
          local_88 = plVar22[uVar31 * 7 + 2];
          uStack_80 = (plVar22 + uVar31 * 7 + 2)[1];
          local_78 = plVar22[uVar31 * 7 + 4];
          uStack_70 = (plVar22 + uVar31 * 7 + 4)[1];
          plVar22[uVar31 * 7 + 6] = plVar22[6];
          lVar30 = *plVar22;
          lVar3 = plVar22[1];
          lVar4 = plVar22[2];
          lVar5 = plVar22[3];
          lVar6 = plVar22[5];
          plVar22[uVar31 * 7 + 4] = plVar22[4];
          (plVar22 + uVar31 * 7 + 4)[1] = lVar6;
          plVar22[uVar31 * 7 + 2] = lVar4;
          (plVar22 + uVar31 * 7 + 2)[1] = lVar5;
          plVar22[uVar31 * 7] = lVar30;
          (plVar22 + uVar31 * 7)[1] = lVar3;
          plVar22[6] = local_68;
          local_98._0_4_ = (undefined4)lVar18;
          local_98._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
          uStack_90._0_4_ = (int)lVar19;
          uStack_90._4_4_ = (int)((ulonglong)lVar19 >> 0x20);
          plVar22[4] = local_78;
          plVar22[5] = uStack_70;
          plVar22[2] = local_88;
          plVar22[3] = uStack_80;
          *(undefined4 *)plVar22 = (undefined4)local_98;
          *(undefined4 *)((longlong)plVar22 + 4) = local_98._4_4_;
          *(int *)(plVar22 + 1) = (int)uStack_90;
          *(int *)((longlong)plVar22 + 0xc) = uStack_90._4_4_;
          plVar28 = plVar21 + 7;
          plVar34 = plVar22;
          local_3d8 = plVar21;
          uStack_90 = lVar19;
LAB_143f76a49:
          while (plVar35 = plVar34, plVar34 = plVar35 + 7, plVar34 <= plVar21) {
            local_98 = (void *)0x0;
            local_3b8 = (void *)0x0;
            puVar23 = &DAT_149dfb77a;
            if ((int)plVar22[4] != 0) {
              puVar23 = (undefined2 *)plVar22[3];
            }
            cVar12 = FUN_14170a85e(puVar23,&local_98);
            puVar23 = &DAT_149dfb77a;
            if ((int)plVar35[0xb] != 0) {
              puVar23 = (undefined2 *)plVar35[10];
            }
            cVar13 = FUN_14170a85e(puVar23,&local_3b8);
            if ((cVar12 == '\0') || (cVar13 == '\0')) goto LAB_143f76aac;
            if ((longlong)local_3b8 < (longlong)local_98) break;
          }
          goto LAB_143f76ab0;
        }
        for (; pplVar24 = local_3e8, plVar34 = plVar22, plVar28 = plVar22, plVar22 < plVar21;
            plVar21 = plVar21 + -7) {
          while (plVar28 = plVar28 + 7, plVar28 <= plVar21) {
            local_98 = (void *)0x0;
            local_3b8 = (void *)0x0;
            puVar23 = &DAT_149dfb77a;
            if ((int)plVar34[4] != 0) {
              puVar23 = (undefined2 *)plVar34[3];
            }
            cVar12 = FUN_14170a85e(puVar23,&local_98);
            puVar23 = &DAT_149dfb77a;
            if ((int)plVar28[4] != 0) {
              puVar23 = (undefined2 *)plVar28[3];
            }
            cVar13 = FUN_14170a85e(puVar23,&local_3b8);
            if ((cVar12 != '\0') && (cVar13 != '\0')) {
              cVar12 = (longlong)local_3b8 < (longlong)local_98;
            }
            if (cVar12 != '\0') {
              plVar34 = plVar28;
            }
          }
          local_68 = plVar34[6];
          local_98 = (void *)*plVar34;
          uStack_90 = plVar34[1];
          local_88 = plVar34[2];
          uStack_80 = plVar34[3];
          local_78 = plVar34[4];
          uStack_70 = plVar34[5];
          pvVar1 = local_98;
          uVar31 = uStack_90;
          plVar34[6] = plVar21[6];
          lVar18 = *plVar21;
          lVar19 = plVar21[1];
          lVar30 = plVar21[2];
          lVar3 = plVar21[3];
          lVar4 = plVar21[5];
          plVar34[4] = plVar21[4];
          plVar34[5] = lVar4;
          plVar34[2] = lVar30;
          plVar34[3] = lVar3;
          *plVar34 = lVar18;
          plVar34[1] = lVar19;
          plVar21[6] = local_68;
          local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
          uStack_90._4_4_ = (int)(uStack_90 >> 0x20);
          plVar21[4] = local_78;
          plVar21[5] = uStack_70;
          plVar21[2] = local_88;
          plVar21[3] = uStack_80;
          *(undefined4 *)plVar21 = (undefined4)local_98;
          *(undefined4 *)((longlong)plVar21 + 4) = local_98._4_4_;
          *(int *)(plVar21 + 1) = (int)uStack_90;
          *(int *)((longlong)plVar21 + 0xc) = uStack_90._4_4_;
          local_98 = pvVar1;
          uStack_90 = uVar31;
        }
        goto LAB_143f7731f;
      }
LAB_143f76d0b:
      pplVar24 = local_3e8;
      if ((int)uVar31 != 0) {
        uVar15 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
        local_3e0 = uVar31;
        do {
          plVar21 = (longlong *)(ulonglong)uVar15;
          uVar25 = uVar15 * 2 + 1;
          local_3d8 = plVar21;
          if ((int)uVar25 < (int)uVar31) {
            do {
              uVar26 = uVar15 * 2 + 2;
              uVar15 = uVar25;
              if ((int)uVar26 < (int)uVar31) {
                local_98 = (void *)0x0;
                local_3b8 = (void *)0x0;
                puVar23 = &DAT_149dfb77a;
                if ((int)plVar22[(longlong)(int)uVar26 * 7 + 4] != 0) {
                  puVar23 = (undefined2 *)plVar22[(longlong)(int)uVar26 * 7 + 3];
                }
                cVar12 = FUN_14170a85e(puVar23,&local_98);
                puVar23 = &DAT_149dfb77a;
                if ((int)plVar22[(longlong)(int)uVar25 * 7 + 4] != 0) {
                  puVar23 = (undefined2 *)plVar22[(longlong)(int)uVar25 * 7 + 3];
                }
                cVar13 = FUN_14170a85e(puVar23,&local_3b8);
                if ((cVar12 != '\0') && (cVar13 != '\0')) {
                  cVar12 = (longlong)local_3b8 < (longlong)local_98;
                }
                uVar15 = uVar26;
                if (cVar12 != '\0') {
                  uVar15 = uVar25;
                }
              }
              lVar18 = (longlong)(int)plVar21;
              local_98 = (void *)0x0;
              local_3b8 = (void *)0x0;
              puVar23 = &DAT_149dfb77a;
              if ((int)plVar22[lVar18 * 7 + 4] != 0) {
                puVar23 = (undefined2 *)plVar22[lVar18 * 7 + 3];
              }
              lVar19 = (longlong)(int)uVar15;
              cVar12 = FUN_14170a85e(puVar23,&local_98);
              puVar23 = &DAT_149dfb77a;
              if ((int)plVar22[lVar19 * 7 + 4] != 0) {
                puVar23 = (undefined2 *)plVar22[lVar19 * 7 + 3];
              }
              cVar13 = FUN_14170a85e(puVar23,&local_3b8);
              uVar31 = local_3e0;
              if ((cVar12 == '\0') || (cVar13 == '\0')) {
                if (cVar12 == '\0') break;
              }
              else if ((longlong)local_98 <= (longlong)local_3b8) break;
              plVar21 = plVar22 + lVar18 * 7;
              plVar28 = plVar22 + lVar19 * 7;
              local_68 = plVar21[6];
              local_98 = (void *)*plVar21;
              uStack_90 = plVar21[1];
              local_88 = plVar21[2];
              uStack_80 = plVar21[3];
              local_78 = plVar21[4];
              uStack_70 = plVar21[5];
              pvVar1 = local_98;
              uVar32 = uStack_90;
              plVar21[6] = plVar28[6];
              lVar18 = *plVar28;
              lVar19 = plVar28[1];
              lVar30 = plVar28[2];
              lVar3 = plVar28[3];
              lVar4 = plVar28[5];
              plVar21[4] = plVar28[4];
              plVar21[5] = lVar4;
              plVar21[2] = lVar30;
              plVar21[3] = lVar3;
              *plVar21 = lVar18;
              plVar21[1] = lVar19;
              plVar28[6] = local_68;
              local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
              uStack_90._4_4_ = (int)(uStack_90 >> 0x20);
              plVar28[4] = local_78;
              plVar28[5] = uStack_70;
              plVar28[2] = local_88;
              plVar28[3] = uStack_80;
              *(undefined4 *)plVar28 = (undefined4)local_98;
              *(undefined4 *)((longlong)plVar28 + 4) = local_98._4_4_;
              *(int *)(plVar28 + 1) = (int)uStack_90;
              *(int *)((longlong)plVar28 + 0xc) = uStack_90._4_4_;
              uVar25 = uVar15 * 2 + 1;
              plVar21 = (longlong *)(ulonglong)uVar15;
              local_98 = pvVar1;
              uStack_90 = uVar32;
            } while ((int)uVar25 < (int)local_3e0);
          }
          uVar15 = (int)local_3d8 - 1;
        } while ((int)local_3d8 != 0);
        pplVar24 = local_3e8;
        if (1 < (int)uVar31) {
          uVar32 = (uVar31 & 0xffffffff) - 1;
          local_68 = plVar22[6];
          local_98 = (void *)*plVar22;
          uStack_90 = plVar22[1];
          local_88 = plVar22[2];
          uStack_80 = plVar22[3];
          local_78 = plVar22[4];
          uStack_70 = plVar22[5];
          lVar7 = local_78;
          lVar8 = uStack_70;
          lVar5 = local_88;
          lVar6 = uStack_80;
          pvVar1 = local_98;
          uVar10 = uStack_90;
          plVar22[6] = plVar22[uVar32 * 7 + 6];
          lVar18 = plVar22[uVar32 * 7];
          lVar19 = (plVar22 + uVar32 * 7)[1];
          lVar30 = plVar22[uVar32 * 7 + 2];
          lVar3 = (plVar22 + uVar32 * 7 + 2)[1];
          lVar4 = (plVar22 + uVar32 * 7 + 4)[1];
          plVar22[4] = plVar22[uVar32 * 7 + 4];
          plVar22[5] = lVar4;
          plVar22[2] = lVar30;
          plVar22[3] = lVar3;
          *plVar22 = lVar18;
          plVar22[1] = lVar19;
          plVar22[uVar32 * 7 + 6] = local_68;
          local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
          uStack_90._4_4_ = (int)(uStack_90 >> 0x20);
          local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          plVar21 = plVar22 + uVar32 * 7 + 4;
          *(undefined4 *)plVar21 = (undefined4)local_78;
          *(undefined4 *)((longlong)plVar21 + 4) = local_78._4_4_;
          *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_70._4_4_;
          plVar21 = plVar22 + uVar32 * 7 + 2;
          *(undefined4 *)plVar21 = (undefined4)local_88;
          *(undefined4 *)((longlong)plVar21 + 4) = local_88._4_4_;
          *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_80._4_4_;
          plVar21 = plVar22 + uVar32 * 7;
          *(undefined4 *)plVar21 = (undefined4)local_98;
          *(undefined4 *)((longlong)plVar21 + 4) = local_98._4_4_;
          *(int *)(plVar21 + 1) = (int)uStack_90;
          *(int *)((longlong)plVar21 + 0xc) = uStack_90._4_4_;
          local_98 = pvVar1;
          uStack_90 = uVar10;
          local_88 = lVar5;
          uStack_80 = lVar6;
          local_78 = lVar7;
          uStack_70 = lVar8;
          if ((int)uVar31 != 2) {
            do {
              iVar14 = 0;
              iVar27 = 1;
              local_3e0 = uVar32;
              iVar29 = 0;
              do {
                lVar18 = (longlong)(iVar14 + 2);
                iVar33 = iVar27;
                if (lVar18 < (longlong)local_3e0) {
                  local_98 = (void *)0x0;
                  local_3b8 = (void *)0x0;
                  puVar23 = &DAT_149dfb77a;
                  if ((int)plVar22[lVar18 * 7 + 4] != 0) {
                    puVar23 = (undefined2 *)plVar22[lVar18 * 7 + 3];
                  }
                  cVar12 = FUN_14170a85e(puVar23,&local_98);
                  puVar23 = &DAT_149dfb77a;
                  if ((int)plVar22[(longlong)iVar27 * 7 + 4] != 0) {
                    puVar23 = (undefined2 *)plVar22[(longlong)iVar27 * 7 + 3];
                  }
                  cVar13 = FUN_14170a85e(puVar23,&local_3b8);
                  if ((cVar12 != '\0') && (cVar13 != '\0')) {
                    cVar12 = (longlong)local_3b8 < (longlong)local_98;
                  }
                  iVar33 = iVar14 + 2;
                  if (cVar12 != '\0') {
                    iVar33 = iVar27;
                  }
                }
                lVar18 = (longlong)iVar29;
                local_98 = (void *)0x0;
                local_3b8 = (void *)0x0;
                puVar23 = &DAT_149dfb77a;
                if ((int)plVar22[lVar18 * 7 + 4] != 0) {
                  puVar23 = (undefined2 *)plVar22[lVar18 * 7 + 3];
                }
                lVar19 = (longlong)iVar33;
                cVar12 = FUN_14170a85e(puVar23,&local_98);
                puVar23 = &DAT_149dfb77a;
                if ((int)plVar22[lVar19 * 7 + 4] != 0) {
                  puVar23 = (undefined2 *)plVar22[lVar19 * 7 + 3];
                }
                cVar13 = FUN_14170a85e(puVar23,&local_3b8);
                if ((cVar12 == '\0') || (cVar13 == '\0')) {
                  if (cVar12 == '\0') break;
                }
                else if ((longlong)local_98 <= (longlong)local_3b8) break;
                plVar21 = plVar22 + lVar18 * 7;
                plVar28 = plVar22 + lVar19 * 7;
                local_68 = plVar21[6];
                lVar18 = *plVar21;
                uVar31 = plVar21[1];
                lVar19 = plVar21[2];
                lVar30 = plVar21[3];
                lVar3 = plVar21[4];
                lVar4 = plVar21[5];
                plVar21[6] = plVar28[6];
                lVar5 = *plVar28;
                lVar6 = plVar28[1];
                lVar7 = plVar28[2];
                lVar8 = plVar28[3];
                lVar9 = plVar28[5];
                plVar21[4] = plVar28[4];
                plVar21[5] = lVar9;
                plVar21[2] = lVar7;
                plVar21[3] = lVar8;
                *plVar21 = lVar5;
                plVar21[1] = lVar6;
                plVar28[6] = local_68;
                local_98._0_4_ = (undefined4)lVar18;
                local_98._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
                uStack_90._0_4_ = (int)uVar31;
                uStack_90._4_4_ = (int)(uVar31 >> 0x20);
                local_88._0_4_ = (undefined4)lVar19;
                local_88._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
                uStack_80._0_4_ = (undefined4)lVar30;
                uStack_80._4_4_ = (undefined4)((ulonglong)lVar30 >> 0x20);
                local_78._0_4_ = (undefined4)lVar3;
                local_78._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
                uStack_70._0_4_ = (undefined4)lVar4;
                uStack_70._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
                *(undefined4 *)(plVar28 + 4) = (undefined4)local_78;
                *(undefined4 *)((longlong)plVar28 + 0x24) = local_78._4_4_;
                *(undefined4 *)(plVar28 + 5) = (undefined4)uStack_70;
                *(undefined4 *)((longlong)plVar28 + 0x2c) = uStack_70._4_4_;
                *(undefined4 *)(plVar28 + 2) = (undefined4)local_88;
                *(undefined4 *)((longlong)plVar28 + 0x14) = local_88._4_4_;
                *(undefined4 *)(plVar28 + 3) = (undefined4)uStack_80;
                *(undefined4 *)((longlong)plVar28 + 0x1c) = uStack_80._4_4_;
                *(undefined4 *)plVar28 = (undefined4)local_98;
                *(undefined4 *)((longlong)plVar28 + 4) = local_98._4_4_;
                *(int *)(plVar28 + 1) = (int)uStack_90;
                *(int *)((longlong)plVar28 + 0xc) = uStack_90._4_4_;
                iVar14 = iVar33 * 2;
                iVar27 = iVar33 * 2 + 1;
                uStack_90 = uVar31;
                local_88 = lVar19;
                uStack_80 = lVar30;
                local_78 = lVar3;
                uStack_70 = lVar4;
                iVar29 = iVar33;
              } while ((longlong)iVar27 < (longlong)local_3e0);
              uVar32 = local_3e0 - 1;
              local_68 = plVar22[6];
              local_98 = (void *)*plVar22;
              uStack_90 = plVar22[1];
              local_88 = plVar22[2];
              uStack_80 = plVar22[3];
              local_78 = plVar22[4];
              uStack_70 = plVar22[5];
              lVar7 = local_78;
              lVar8 = uStack_70;
              lVar5 = local_88;
              lVar6 = uStack_80;
              pvVar1 = local_98;
              uVar31 = uStack_90;
              plVar22[6] = plVar22[uVar32 * 7 + 6];
              lVar18 = plVar22[uVar32 * 7];
              lVar19 = (plVar22 + uVar32 * 7)[1];
              lVar30 = plVar22[uVar32 * 7 + 2];
              lVar3 = (plVar22 + uVar32 * 7 + 2)[1];
              lVar4 = (plVar22 + uVar32 * 7 + 4)[1];
              plVar22[4] = plVar22[uVar32 * 7 + 4];
              plVar22[5] = lVar4;
              plVar22[2] = lVar30;
              plVar22[3] = lVar3;
              *plVar22 = lVar18;
              plVar22[1] = lVar19;
              plVar22[uVar32 * 7 + 6] = local_68;
              local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
              uStack_90._4_4_ = (int)(uStack_90 >> 0x20);
              local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              plVar21 = plVar22 + uVar32 * 7 + 4;
              *(undefined4 *)plVar21 = (undefined4)local_78;
              *(undefined4 *)((longlong)plVar21 + 4) = local_78._4_4_;
              *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_70._4_4_;
              plVar21 = plVar22 + uVar32 * 7 + 2;
              *(undefined4 *)plVar21 = (undefined4)local_88;
              *(undefined4 *)((longlong)plVar21 + 4) = local_88._4_4_;
              *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_80._4_4_;
              plVar21 = plVar22 + uVar32 * 7;
              *(undefined4 *)plVar21 = (undefined4)local_98;
              *(undefined4 *)((longlong)plVar21 + 4) = local_98._4_4_;
              *(int *)(plVar21 + 1) = (int)uStack_90;
              *(int *)((longlong)plVar21 + 0xc) = uStack_90._4_4_;
              pplVar24 = local_3e8;
              local_98 = pvVar1;
              uStack_90 = uVar31;
              local_88 = lVar5;
              uStack_80 = lVar6;
              local_78 = lVar7;
              uStack_70 = lVar8;
            } while (2 < local_3e0);
          }
        }
      }
LAB_143f7731f:
      pplVar24 = pplVar24 + -3;
    } while (&local_398 <= pplVar24);
    iVar14 = *(int *)(local_3d0 + 0x340);
    lVar18 = local_3d0;
  }
  if (iVar14 != 0) {
    lVar19 = (longlong)iVar14 * 0x38;
    lVar18 = *(longlong *)(lVar18 + 0x338) + 0x28;
    do {
      local_3a0 = 0;
      local_98 = (void *)0x0;
      uVar15 = *(uint *)(lVar18 + -8);
      pvVar1 = *(void **)(lVar18 + -0x10);
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar15);
      if ((longlong)(int)uVar15 == 0) {
        uStack_90 = (ulonglong)uVar15;
        puVar23 = &DAT_149dfb77a;
      }
      else {
        FUN_1446dd670(&local_98,uVar15,0);
        memcpy(local_98,pvVar1,(longlong)(int)uVar15 * 2);
        puVar23 = &DAT_149dfb77a;
        if (*(int *)(lVar18 + -8) != 0) {
          puVar23 = *(undefined2 **)(lVar18 + -0x10);
        }
      }
      cVar12 = FUN_14170a85e(puVar23,&local_3a0);
      if (cVar12 != '\0') {
        local_3b8 = (void *)0x0;
        uStack_3b0 = 0;
        local_3c8 = (void *)0x0;
        uStack_3c0 = 0;
        local_3f8 = &local_3b8;
        FUN_1467d0834(&local_398,&local_3a0,0,&local_3c8);
        plVar21 = local_398;
        plVar22 = local_398;
        if (*(code **)(*local_398 + 0x50) != FUN_144828418) {
          plVar22 = (longlong *)(**(code **)(*local_398 + 0x50))(local_398);
        }
        FUN_1447a1fc0(plVar22);
        pcVar2 = *(code **)(*plVar21 + 0x28);
        if (pcVar2 == FUN_14482841c) {
          plVar22 = (longlong *)(plVar21[5] + 8);
          if (plVar21[5] == 0) {
            plVar22 = plVar21 + 3;
          }
        }
        else if (pcVar2 == (code *)&LAB_14010c34c) {
          plVar22 = plVar21 + 2;
        }
        else {
          plVar22 = (longlong *)(*pcVar2)(plVar21);
        }
        if (&local_98 != plVar22) {
          uVar15 = *(uint *)(plVar22 + 1);
          pvVar1 = (void *)*plVar22;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar15);
          if (uVar15 == 0 && uStack_90._4_4_ == 0) {
            uStack_90 = (ulonglong)uVar15;
          }
          else {
            FUN_1446dd670(&local_98,uVar15);
            if (uVar15 != 0) {
              memcpy(local_98,pvVar1,(longlong)(int)uVar15 * 2);
            }
          }
        }
        if (plVar21 != (longlong *)0x0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
      FUN_140009b9a(&local_398,lVar18 + -0x20);
      plVar21 = local_398;
      if (*(code **)(*local_398 + 0x50) != FUN_144828418) {
        plVar21 = (longlong *)(**(code **)(*local_398 + 0x50))();
      }
      FUN_1447a1fc0(plVar21);
      pcVar2 = *(code **)(*local_398 + 0x28);
      if (pcVar2 == FUN_14482841c) {
        plVar21 = local_398 + 3;
        if (local_398[5] != 0) {
          plVar21 = (longlong *)(local_398[5] + 8);
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        plVar21 = local_398 + 2;
      }
      else {
        plVar21 = (longlong *)(*pcVar2)(local_398);
      }
      local_3b8 = (void *)0x0;
      uVar15 = *(uint *)(plVar21 + 1);
      pvVar1 = (void *)*plVar21;
      uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar15);
      if ((longlong)(int)uVar15 == 0) {
        uStack_3b0 = (ulonglong)uVar15;
      }
      else {
        FUN_1446dd670(&local_3b8,uVar15,0);
        memcpy(local_3b8,pvVar1,(longlong)(int)uVar15 * 2);
      }
      if (local_398 != (longlong *)0x0) {
        (**(code **)(*local_398 + 0x10))();
      }
      FUN_140009b9a(&local_398,lVar18);
      plVar21 = local_398;
      if (*(code **)(*local_398 + 0x50) != FUN_144828418) {
        plVar21 = (longlong *)(**(code **)(*local_398 + 0x50))();
      }
      FUN_1447a1fc0(plVar21);
      pcVar2 = *(code **)(*local_398 + 0x28);
      if (pcVar2 == FUN_14482841c) {
        plVar21 = local_398 + 3;
        if (local_398[5] != 0) {
          plVar21 = (longlong *)(local_398[5] + 8);
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        plVar21 = local_398 + 2;
      }
      else {
        plVar21 = (longlong *)(*pcVar2)(local_398);
      }
      local_3c8 = (void *)0x0;
      uVar15 = *(uint *)(plVar21 + 1);
      pvVar1 = (void *)*plVar21;
      uStack_3c0 = CONCAT44(uStack_3c0._4_4_,uVar15);
      if ((longlong)(int)uVar15 == 0) {
        uStack_3c0 = (ulonglong)uVar15;
      }
      else {
        FUN_1446dd670(&local_3c8,uVar15,0);
        memcpy(local_3c8,pvVar1,(longlong)(int)uVar15 * 2);
      }
      if (local_398 != (longlong *)0x0) {
        (**(code **)(*local_398 + 0x10))();
      }
      pvVar1 = local_3b8;
      local_398 = (longlong *)0x0;
      lVar30 = (longlong)(int)uStack_3b0;
      local_390 = (longlong *)CONCAT44(local_390._4_4_,(int)uStack_3b0);
      if (lVar30 == 0) {
        local_390 = (longlong *)(uStack_3b0 & 0xffffffff);
      }
      else {
        FUN_1446dd670(&local_398,uStack_3b0 & 0xffffffff,0);
        memcpy(local_398,pvVar1,lVar30 * 2);
      }
      pvVar1 = local_98;
      local_388 = (void *)0x0;
      lVar30 = (longlong)(int)uStack_90;
      local_380 = CONCAT44(local_380._4_4_,(int)uStack_90);
      if (lVar30 == 0) {
        local_380 = uStack_90 & 0xffffffff;
      }
      else {
        FUN_1446dd670(&local_388,uStack_90 & 0xffffffff,0);
        memcpy(local_388,pvVar1,lVar30 * 2);
      }
      pvVar1 = local_3c8;
      local_378 = (void *)0x0;
      lVar30 = (longlong)(int)uStack_3c0;
      local_370 = CONCAT44(local_370._4_4_,(int)uStack_3c0);
      if (lVar30 == 0) {
        local_370 = uStack_3c0 & 0xffffffff;
      }
      else {
        FUN_1446dd670(&local_378,uStack_3c0 & 0xffffffff,0);
        memcpy(local_378,pvVar1,lVar30 * 2);
      }
      uVar15 = DAT_14cb98b48;
      lVar30 = (longlong)(int)DAT_14cb98b48;
      DAT_14cb98b48 = DAT_14cb98b48 + 1;
      if (DAT_14cb98b4c < DAT_14cb98b48) {
        FUN_148ac950e(uVar15);
      }
      lVar3 = DAT_14cb98b40;
      lVar30 = lVar30 * 0x30;
      *(undefined8 *)(DAT_14cb98b40 + lVar30) = 0;
      *(longlong **)(lVar3 + lVar30) = local_398;
      local_398 = (longlong *)0x0;
      *(undefined4 *)(lVar3 + 8 + lVar30) = (undefined4)local_390;
      *(undefined4 *)(lVar3 + 0xc + lVar30) = local_390._4_4_;
      local_390 = (longlong *)0x0;
      *(undefined8 *)(lVar3 + 0x10 + lVar30) = 0;
      *(void **)(lVar3 + 0x10 + lVar30) = local_388;
      local_388 = (void *)0x0;
      *(undefined4 *)(lVar3 + 0x18 + lVar30) = (undefined4)local_380;
      *(undefined4 *)(lVar3 + 0x1c + lVar30) = local_380._4_4_;
      local_380 = 0;
      *(undefined8 *)(lVar3 + 0x20 + lVar30) = 0;
      *(void **)(lVar3 + 0x20 + lVar30) = local_378;
      local_378 = (void *)0x0;
      *(undefined4 *)(lVar3 + 0x28 + lVar30) = (undefined4)local_370;
      *(undefined4 *)(lVar3 + 0x2c + lVar30) = local_370._4_4_;
      local_370 = 0;
      FUN_148ac9360(&local_398);
      if (local_3c8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_3b8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar18 = lVar18 + 0x38;
      lVar19 = lVar19 + -0x38;
    } while (lVar19 != 0);
  }
  uVar20 = (**(code **)(*DAT_14cb98ab8 + 0xf8))();
  FUN_148ac13aa(uVar20);
  if ((local_60 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143f76aac:
  if (cVar12 == '\0') goto LAB_143f76a49;
LAB_143f76ab0:
  plVar17 = plVar28 + -7;
  plVar11 = plVar28;
  if (plVar22 < plVar17) {
    do {
      plVar28 = plVar11;
      plVar16 = plVar17;
      local_98 = (void *)0x0;
      local_3b8 = (void *)0x0;
      puVar23 = &DAT_149dfb77a;
      if ((int)plVar28[-3] != 0) {
        puVar23 = (undefined2 *)plVar28[-4];
      }
      cVar12 = FUN_14170a85e(puVar23,&local_98);
      puVar23 = &DAT_149dfb77a;
      if ((int)plVar22[4] != 0) {
        puVar23 = (undefined2 *)plVar22[3];
      }
      cVar13 = FUN_14170a85e(puVar23,&local_3b8);
      if ((cVar12 == '\0') || (cVar13 == '\0')) {
        plVar17 = plVar16;
        if (cVar12 != '\0') goto LAB_143f76b4c;
      }
      else if ((longlong)local_3b8 < (longlong)local_98) {
        plVar17 = plVar28 + -7;
        goto LAB_143f76b4c;
      }
      plVar17 = plVar16 + -7;
      plVar11 = plVar28 + -7;
    } while (plVar22 < plVar28 + -0xe);
    plVar17 = plVar28 + -0xe;
    plVar28 = plVar16;
  }
LAB_143f76b4c:
  if (plVar34 <= plVar17) {
    local_68 = plVar35[0xd];
    lVar18 = *plVar34;
    lVar19 = plVar35[8];
    local_88 = plVar35[9];
    uStack_80 = plVar35[10];
    local_78 = plVar35[0xb];
    uStack_70 = plVar35[0xc];
    plVar35[0xd] = plVar17[6];
    lVar30 = *plVar17;
    lVar3 = plVar17[1];
    lVar4 = plVar17[2];
    lVar5 = plVar17[3];
    lVar6 = plVar17[5];
    plVar35[0xb] = plVar17[4];
    plVar35[0xc] = lVar6;
    plVar35[9] = lVar4;
    plVar35[10] = lVar5;
    *plVar34 = lVar30;
    plVar35[8] = lVar3;
    plVar17[6] = local_68;
    local_98._0_4_ = (undefined4)lVar18;
    local_98._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
    uStack_90._0_4_ = (int)lVar19;
    uStack_90._4_4_ = (int)((ulonglong)lVar19 >> 0x20);
    plVar17[4] = local_78;
    plVar17[5] = uStack_70;
    plVar17[2] = local_88;
    plVar17[3] = uStack_80;
    *(undefined4 *)plVar17 = (undefined4)local_98;
    *(undefined4 *)((longlong)plVar17 + 4) = local_98._4_4_;
    *(int *)(plVar17 + 1) = (int)uStack_90;
    *(int *)((longlong)plVar17 + 0xc) = uStack_90._4_4_;
    plVar28 = plVar17;
    uStack_90 = lVar19;
    goto LAB_143f76a49;
  }
  local_68 = plVar22[6];
  local_98 = (void *)*plVar22;
  uStack_90 = plVar22[1];
  local_88 = plVar22[2];
  uStack_80 = plVar22[3];
  local_78 = plVar22[4];
  uStack_70 = plVar22[5];
  pvVar1 = local_98;
  uVar31 = uStack_90;
  plVar22[6] = plVar17[6];
  lVar18 = *plVar17;
  lVar19 = plVar17[1];
  lVar30 = plVar17[2];
  lVar3 = plVar17[3];
  lVar4 = plVar17[5];
  plVar22[4] = plVar17[4];
  plVar22[5] = lVar4;
  plVar22[2] = lVar30;
  plVar22[3] = lVar3;
  *plVar22 = lVar18;
  plVar22[1] = lVar19;
  plVar17[6] = local_68;
  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  uStack_90._4_4_ = (int)(uStack_90 >> 0x20);
  plVar17[4] = local_78;
  plVar17[5] = uStack_70;
  plVar17[2] = local_88;
  plVar17[3] = uStack_80;
  *(undefined4 *)plVar17 = (undefined4)local_98;
  *(undefined4 *)((longlong)plVar17 + 4) = local_98._4_4_;
  *(int *)(plVar17 + 1) = (int)uStack_90;
  *(int *)((longlong)plVar17 + 0xc) = uStack_90._4_4_;
  iVar29 = (int)local_3e0 + -1;
  local_3e0 = CONCAT44(local_3e0._4_4_,iVar29);
  plVar28 = plVar28 + -0xe;
  local_98 = pvVar1;
  uStack_90 = uVar31;
  if ((longlong)plVar28 - (longlong)plVar22 < (longlong)local_3d8 - (longlong)plVar34) {
    if (plVar34 < plVar21) {
      *local_3e8 = plVar34;
      local_3e8[1] = plVar21;
      *(int *)(local_3e8 + 2) = iVar29;
      local_3e8 = local_3e8 + 3;
    }
    pplVar24 = local_3e8;
    if (plVar17 <= plVar22 + 7) goto LAB_143f7731f;
  }
  else {
    pplVar24 = local_3e8;
    if (plVar22 + 7 < plVar17) {
      *local_3e8 = plVar22;
      local_3e8[1] = plVar28;
      *(int *)(local_3e8 + 2) = iVar29;
      pplVar24 = local_3e8 + 3;
    }
    plVar28 = plVar21;
    plVar22 = plVar34;
    if (plVar21 <= plVar34) goto LAB_143f7731f;
  }
  local_3e8 = pplVar24;
  iVar14 = (int)((ulonglong)((longlong)plVar28 - (longlong)plVar22) >> 3) * -0x49249249;
  uVar31 = (ulonglong)(iVar14 + 1);
  plVar21 = plVar28;
  if (iVar29 == 0) goto LAB_143f76d0b;
  goto LAB_143f769a4;
}



// FUNCTION 143f7791a FUN_143f7791a body=29 status=ok
// SIG undefined FUN_143f7791a(void)

undefined8 FUN_143f7791a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f7794c FUN_143f7794c body=85 status=ok
// SIG undefined FUN_143f7794c(void)

void FUN_143f7794c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b506e20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506db0;
  return;
}



// FUNCTION 143f779a2 FUN_143f779a2 body=85 status=ok
// SIG undefined FUN_143f779a2(void)

void FUN_143f779a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b506e20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b506db0;
  return;
}



// FUNCTION 143f779f8 FUN_143f779f8 body=118 status=ok
// SIG undefined FUN_143f779f8(void)

void FUN_143f779f8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b506e20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b506db0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f77a5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f77a6e FUN_143f77a6e body=70 status=ok
// SIG undefined FUN_143f77a6e(void)

void FUN_143f77a6e(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_143f77b00(&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f77ab6 FUN_143f77ab6 body=72 status=ok
// SIG undefined FUN_143f77ab6(void)

undefined8 FUN_143f77ab6(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_143f77b00(&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f77b00 FUN_143f77b00 body=973 status=ok
// SIG undefined FUN_143f77b00(void)

void FUN_143f77b00(longlong *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  void **ppvVar7;
  undefined1 *_Src;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  longlong *local_58 [2];
  void *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *param_2;
  lVar3 = *param_1;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  if (iVar1 == 0) {
    local_a8 = L"RewardsAsyncCheckCodeSuccessTitle";
    local_a0 = 0x21;
    _Src = local_5c;
    FUN_1446e940c(_Src,&local_a8);
    local_a8 = L"ShiftUI";
    local_a0 = 7;
    FUN_1446e940c(local_60,&local_a8);
    local_a8 = L"Your SHiFT code was successfully redeemed";
    local_a0 = 0x29;
    FUN_140208c1e(local_58,local_60,_Src,&local_a8);
    plVar6 = local_58[0];
    if (*(code **)(*local_58[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_58[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar4 = *(code **)(*local_58[0] + 0x28);
    if (pcVar4 == FUN_14482841c) {
      ppvVar7 = (void **)(local_58[0] + 3);
      if (local_58[0][5] != 0) {
        ppvVar7 = (void **)(local_58[0][5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      ppvVar7 = (void **)(local_58[0] + 2);
    }
    else {
      ppvVar7 = (void **)(*pcVar4)(local_58[0]);
    }
    if (&local_48 != ppvVar7) {
      uVar2 = *(uint *)(ppvVar7 + 1);
      _Src = *ppvVar7;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
      if (uVar2 == 0 && uStack_40._4_4_ == 0) {
        uStack_40 = (ulonglong)uVar2;
      }
      else {
        FUN_1446dd670(&local_48,uVar2);
        if (uVar2 != 0) {
          memcpy(local_48,_Src,(longlong)(int)uVar2 * 2);
        }
      }
    }
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
    FUN_148ac9338(DAT_14cb98b40,DAT_14cb98b48);
    DAT_14cb98b48 = 0;
    if (DAT_14cb98b4c != 0) {
      FUN_148ac95ae();
    }
    FUN_1401861f4(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x60,*(undefined4 *)(lVar3 + 0x38));
  }
  else {
    local_a8 = L"RewardsAsyncCheckCodeFailureTitle";
    local_a0 = 0x21;
    _Src = local_5c;
    FUN_1446e940c(_Src,&local_a8);
    local_a8 = L"ShiftUI";
    local_a0 = 7;
    FUN_1446e940c(local_60,&local_a8);
    local_a8 = L"This SHiFT code could not be redeemed";
    local_a0 = 0x25;
    FUN_140208c1e(local_58,local_60,_Src,&local_a8);
    plVar6 = local_58[0];
    if (*(code **)(*local_58[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_58[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar4 = *(code **)(*local_58[0] + 0x28);
    if (pcVar4 == FUN_14482841c) {
      ppvVar7 = (void **)(local_58[0] + 3);
      if (local_58[0][5] != 0) {
        ppvVar7 = (void **)(local_58[0][5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      ppvVar7 = (void **)(local_58[0] + 2);
    }
    else {
      ppvVar7 = (void **)(*pcVar4)(local_58[0]);
    }
    if (&local_48 != ppvVar7) {
      uVar2 = *(uint *)(ppvVar7 + 1);
      _Src = *ppvVar7;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
      if (uVar2 == 0 && uStack_40._4_4_ == 0) {
        uStack_40 = (ulonglong)uVar2;
      }
      else {
        FUN_1446dd670(&local_48,uVar2);
        if (uVar2 != 0) {
          memcpy(local_48,_Src,(longlong)(int)uVar2 * 2);
        }
      }
    }
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
  }
  FUN_148ac13f3(local_58,iVar1);
  FUN_148ac95fc(&local_a8,CONCAT71((int7)((ulonglong)_Src >> 8),iVar1 == 0) & 0xffffffff,&local_48,
                local_58);
  uVar5 = (**(code **)(*DAT_14cb98ab8 + 0xf8))();
  FUN_148ac049c(uVar5,"Check_Code_Notify_Response",&local_a8);
  FUN_148ac8c26(&local_a8);
  if (local_58[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f77ece FUN_143f77ece body=29 status=ok
// SIG undefined FUN_143f77ece(void)

undefined8 FUN_143f77ece(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f77f00 FUN_143f77f00 body=93 status=ok
// SIG undefined FUN_143f77f00(void)

void FUN_143f77f00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5070c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f77f5e FUN_143f77f5e body=93 status=ok
// SIG undefined FUN_143f77f5e(void)

void FUN_143f77f5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5070c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f77fbc FUN_143f77fbc body=126 status=ok
// SIG undefined FUN_143f77fbc(void)

void FUN_143f77fbc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5070c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f7802b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f7804e FUN_143f7804e body=31 status=ok
// SIG undefined FUN_143f7804e(void)

undefined1 FUN_143f7804e(longlong param_1,undefined8 *param_2)

{
  FUN_143f63dfe(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40),*param_2,
                *(longlong *)(param_1 + 0x18) + 0x28);
  return 1;
}



// FUNCTION 143f7806d FUN_143f7806d body=1725 status=ok
// SIG undefined FUN_143f7806d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7806d(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_7c [4];
  wchar_t *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cb98768);
  if (cVar1 == '\0') {
    _DAT_14cb98768 = 0;
    uRam000000014cb98770 = 0;
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cb98778,L"UNSET",1);
  local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_88 = 1;
  FUN_140bd5914(&DAT_14cb98780,L"ShiftUI.AlwaysAllowPlatformCapture",&local_78,
                L"Developer override for disabling platform capture in the Shift UI\n false: Standard behavior\n true: Always allow platform capture\n"
               );
  atexit(FUN_143f5b780);
  local_78 = L"ShiftUI:BlockReason:MapLoad";
  local_70 = 0x1b;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cb98798 = (ulonglong)uVar2;
  local_78 = L"ShiftUI:BlockReason:Movie";
  local_70 = 0x19;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cb987a0 = (ulonglong)uVar2;
  local_78 = L"ShiftUI:BlockReason:Cinematic";
  local_70 = 0x1d;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cb987a8 = (ulonglong)uVar2;
  local_78 = L"ShiftUI:BlockReason:Command";
  local_70 = 0x1b;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cb987b0 = (ulonglong)uVar2;
  local_78 = L"Online";
  local_70 = 6;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Online";
  local_70 = 6;
  FUN_140208c1e(&DAT_14cb987c0,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143f5db50);
  local_78 = L"Offline";
  local_70 = 7;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Offline";
  local_70 = 7;
  FUN_140208c1e(&DAT_14cb987d0,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143f5db64);
  local_78 = L"Away";
  local_70 = 4;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Away";
  local_70 = 4;
  FUN_140208c1e(&DAT_14cb987e0,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143f5db78);
  local_78 = L"DoNotDisturb";
  local_70 = 0xc;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Do Not Disturb";
  local_70 = 0xe;
  FUN_140208c1e(&DAT_14cb987f0,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143f5db8c);
  local_78 = L"Chat";
  local_70 = 4;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Chat";
  local_70 = 4;
  FUN_140208c1e(&DAT_14cb98800,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143f5dba0);
  FUN_1400b22c2(&DAT_14cb98820,"shift");
  atexit((_func_5014 *)&LAB_143f5dbb4);
  FUN_1400b22c2(&DAT_14cb98830,"online");
  atexit((_func_5014 *)&LAB_143f5dbc5);
  FUN_1400b22c2(&DAT_14cb98840,"offline");
  atexit((_func_5014 *)&LAB_143f5dbd6);
  FUN_1400b22c2(&DAT_14cb98850,"DisplayPictureUri");
  atexit((_func_5014 *)&LAB_143f5dbe7);
  _DAT_14cb98888 = 0;
  _DAT_14cb98890 = 0;
  _DAT_14cb98868 = 0;
  uRam000000014cb98870 = 0;
  _DAT_14cb98894 = 0xffffffff00000080;
  _DAT_14cb9889c = 0;
  DAT_14cb988a8 = 0;
  _DAT_14cb988b0 = 0;
  atexit(FUN_143f5dbf8);
  DAT_14cb988d8 = 0;
  DAT_14cb988e0 = 0;
  DAT_14cb988b8 = 0;
  _DAT_14cb988c0 = 0;
  _DAT_14cb988e4 = 0xffffffff00000080;
  DAT_14cb988ec = 0;
  DAT_14cb988f8 = 0;
  DAT_14cb98900 = 0;
  atexit(FUN_143f5dc27);
  DAT_14cb98928 = 0;
  DAT_14cb98930 = 0;
  DAT_14cb98908 = 0;
  _DAT_14cb98910 = 0;
  _DAT_14cb98934 = 0xffffffff00000080;
  DAT_14cb9893c = 0;
  DAT_14cb98948 = 0;
  DAT_14cb98950 = 0;
  atexit(FUN_143f5dc50);
  _DAT_14cb98978 = 0;
  _DAT_14cb98980 = 0;
  DAT_14cb98958 = 0;
  _DAT_14cb98960 = 0;
  _DAT_14cb98984 = 0xffffffff00000080;
  DAT_14cb9898c = 0;
  DAT_14cb98998 = 0;
  DAT_14cb989a0 = 0;
  atexit(FUN_143f5dc79);
  _DAT_14cb989c8 = 0;
  _DAT_14cb989d0 = 0;
  _DAT_14cb989a8 = 0;
  uRam000000014cb989b0 = 0;
  _DAT_14cb989d4 = 0xffffffff00000080;
  _DAT_14cb989dc = 0;
  DAT_14cb989e8 = 0;
  _DAT_14cb989f0 = 0;
  atexit(FUN_143f5dca8);
  DAT_14cb98a18 = 0;
  _DAT_14cb98a20 = 0;
  DAT_14cb989f8 = 0;
  _DAT_14cb98a00 = 0;
  _DAT_14cb98a24 = 0xffffffff00000080;
  DAT_14cb98a2c = 0;
  DAT_14cb98a38 = 0;
  DAT_14cb98a40 = 0;
  atexit(FUN_143f5dcd7);
  local_78 = L"UnixSocketPath";
  local_70 = 0xe;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb98aa0 = (ulonglong)uVar2;
  local_78 = (wchar_t *)0x800000014b501600;
  local_64 = 7;
  local_70 = FUN_14577453c(L"ShiftUI",&local_64);
  local_6c = 1;
  FUN_146589d00(&local_78);
  DAT_14cb98ae8 = 0;
  DAT_14cb98af0 = 0;
  DAT_14cb98ac8 = 0;
  _DAT_14cb98ad0 = 0;
  _DAT_14cb98af4 = 0xffffffff00000080;
  DAT_14cb98afc = 0;
  DAT_14cb98b08 = 0;
  DAT_14cb98b10 = 0;
  atexit(FUN_143f6872f);
  FUN_140056680(&DAT_14cb98b20,L"general//shiftui//");
  atexit((_func_5014 *)&LAB_143f6906e);
  DAT_14cb98b30 = 0;
  _DAT_14cb98b38 = 0;
  atexit(FUN_143f6907f);
  DAT_14cb98b40 = 0;
  _DAT_14cb98b48 = 0;
  atexit(FUN_143f691cd);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7872c FUN_143f7872c body=214 status=ok
// SIG undefined FUN_143f7872c(void)

void FUN_143f7872c(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401c3ca6();
  lVar3 = (**(code **)(*param_1 + 0x488))(param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_140e4bdee(lVar3);
    if (lVar4 != 0) {
      plVar1 = param_1 + 0x23;
      cVar2 = FUN_140114204(plVar1);
      if (cVar2 != '\0') {
        cVar2 = FUN_143f78804(lVar4,plVar1,param_1);
        if (cVar2 != '\0') {
          local_38[0] = 0;
          local_34 = 0;
          local_2c = 0;
          lVar3 = FUN_140149a73(lVar3,0);
          if (lVar3 != 0) {
            FUN_14039fc7b(plVar1,local_38,lVar3,0);
          }
          (**(code **)(*param_1 + 0x478))(param_1,local_38);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f78804 FUN_143f78804 body=3802 status=ok
// SIG undefined FUN_143f78804(void)

ulonglong FUN_143f78804(longlong param_1,code *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  undefined8 **ppuVar19;
  code *pcVar20;
  uint uVar21;
  int *piVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  bool bVar27;
  bool bVar28;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined8 local_210;
  wchar_t *local_208;
  code *local_200;
  undefined1 *local_1f8;
  code **local_1f0;
  code *local_1e8;
  code *local_1e0;
  longlong local_1d8;
  code *local_1d0;
  uint *local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 *local_1b0;
  int local_1a8;
  code *local_1a0;
  undefined8 *local_198;
  undefined1 local_18c [4];
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined2 *local_e0;
  char local_d8;
  undefined7 uStack_d7;
  int local_cc;
  longlong local_c8;
  undefined8 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  longlong local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_1d8 = param_1;
  if (*param_2 == (code)0x1) {
    local_1d0 = param_2;
    FUN_1447a97f4(&local_f0,param_2 + 0x10);
    if (0 < local_f0._4_4_) {
      lVar14 = 0;
      uVar25 = 0;
      iVar6 = local_f0._4_4_;
      iVar10 = DAT_14c948000;
      do {
        bVar27 = (int)local_f0 != 0;
        bVar28 = (int)local_f0 != iVar10;
        piVar18 = (int *)&DAT_14c948618;
        piVar22 = &DAT_14c948620;
        if (bVar28 && bVar27) {
          ppuVar19 = &local_e8;
          if (0 < local_cc) {
            ppuVar19 = (undefined8 **)CONCAT71(uStack_d7,local_d8);
          }
          if (1 < iVar6) {
            ppuVar19 = (undefined8 **)CONCAT71(uStack_d7,local_d8);
          }
          piVar22 = (int *)((longlong)ppuVar19 + lVar14 + 8);
          piVar18 = (int *)((longlong)ppuVar19 + lVar14);
        }
        if ((*piVar18 == DAT_14cb7beb0) && (*piVar22 == DAT_14cb7beb8)) {
LAB_143f78a23:
          FUN_1402b5374(&local_f0,uVar25 & 0xffffffff,0);
          iVar6 = local_f0._4_4_;
          iVar10 = DAT_14c948000;
        }
        else {
          piVar18 = &DAT_14c948620;
          piVar22 = (int *)&DAT_14c948618;
          if (bVar28 && bVar27) {
            ppuVar19 = &local_e8;
            if (0 < local_cc) {
              ppuVar19 = (undefined8 **)CONCAT71(uStack_d7,local_d8);
            }
            if (1 < iVar6) {
              ppuVar19 = (undefined8 **)CONCAT71(uStack_d7,local_d8);
            }
            piVar18 = (int *)((longlong)ppuVar19 + lVar14 + 8);
            piVar22 = (int *)((longlong)ppuVar19 + lVar14);
          }
          if ((*piVar22 == DAT_14cb7bec8) && (*piVar18 == DAT_14cb7bed0)) goto LAB_143f78a23;
          piVar18 = &DAT_14c948620;
          piVar22 = (int *)&DAT_14c948618;
          if (bVar28 && bVar27) {
            ppuVar19 = &local_e8;
            if (0 < local_cc) {
              ppuVar19 = (undefined8 **)CONCAT71(uStack_d7,local_d8);
            }
            if (1 < iVar6) {
              ppuVar19 = (undefined8 **)CONCAT71(uStack_d7,local_d8);
            }
            piVar18 = (int *)((longlong)ppuVar19 + lVar14 + 8);
            piVar22 = (int *)((longlong)ppuVar19 + lVar14);
          }
          if ((*piVar22 == DAT_14cb7bee0) && (*piVar18 == DAT_14cb7bee8)) goto LAB_143f78a23;
          piVar18 = &DAT_14c948620;
          piVar22 = (int *)&DAT_14c948618;
          if (bVar28 && bVar27) {
            ppuVar19 = &local_e8;
            if (0 < local_cc) {
              ppuVar19 = (undefined8 **)CONCAT71(uStack_d7,local_d8);
            }
            if (1 < iVar6) {
              ppuVar19 = (undefined8 **)CONCAT71(uStack_d7,local_d8);
            }
            piVar18 = (int *)((longlong)ppuVar19 + lVar14 + 8);
            piVar22 = (int *)((longlong)ppuVar19 + lVar14);
          }
          if ((*piVar22 == DAT_14cb7bef8) && (*piVar18 == DAT_14cb7bf00)) goto LAB_143f78a23;
          piVar18 = &DAT_14c948620;
          piVar22 = (int *)&DAT_14c948618;
          if (bVar28 && bVar27) {
            ppuVar19 = &local_e8;
            if (0 < local_cc) {
              ppuVar19 = (undefined8 **)CONCAT71(uStack_d7,local_d8);
            }
            if (1 < iVar6) {
              ppuVar19 = (undefined8 **)CONCAT71(uStack_d7,local_d8);
            }
            piVar18 = (int *)((longlong)ppuVar19 + lVar14 + 8);
            piVar22 = (int *)((longlong)ppuVar19 + lVar14);
          }
          if ((*piVar22 == DAT_14cb7bf10) && (*piVar18 == DAT_14cb7bf18)) goto LAB_143f78a23;
        }
        uVar25 = uVar25 + 1;
        lVar14 = lVar14 + 0xc;
      } while ((longlong)uVar25 < (longlong)iVar6);
    }
    uVar12 = (int)local_f0;
    param_2 = local_1d0;
    if (CONCAT71(uStack_d7,local_d8) != 0) {
      FUN_1400020a8();
      param_2 = local_1d0;
    }
  }
  else {
    uVar12 = *(undefined4 *)(param_2 + 0x10);
  }
  iVar6 = FUN_1413e5a1e(plVar1,uVar12,param_2);
  if (iVar6 != -1) {
    lVar14 = *plVar1 + (longlong)iVar6 * 0xe8;
    if ((lVar14 != 0) && ((longlong)iVar6 * 0xe8 + *plVar1 != -0x38)) {
      cVar4 = (**(code **)(*param_3 + 0x480))();
      if (cVar4 != '\0') {
        iVar6 = *(int *)(lVar14 + 0xa8);
        if (iVar6 == 0) {
          uVar25 = 1;
          iVar13 = 0;
          uVar26 = 0;
          iVar10 = 0;
        }
        else {
          puVar8 = *(uint **)(lVar14 + 0xa0);
          if (*(uint **)(lVar14 + 0xa0) == (uint *)0x0) {
            puVar8 = (uint *)(lVar14 + 0x90);
          }
          uVar11 = *puVar8;
          if (uVar11 == 0) {
            iVar10 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar10 = iVar6 + -1;
            }
            uVar26 = 0;
            uVar25 = (ulonglong)(uint)(iVar10 >> 5);
            if (iVar10 >> 5 < 1) {
              uVar25 = uVar26;
            }
            iVar13 = 0;
            do {
              if (uVar25 == uVar26) goto LAB_143f78c79;
              iVar13 = iVar13 + 0x20;
              uVar11 = puVar8[uVar26 + 1];
              uVar26 = uVar26 + 1;
            } while (uVar11 == 0);
          }
          else {
            iVar13 = 0;
            uVar26 = 0;
          }
          uVar25 = (ulonglong)(-uVar11 & uVar11);
          uVar15 = uVar25 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          iVar10 = (iVar13 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar10) {
            iVar10 = iVar6;
          }
        }
        if (iVar10 != iVar6) {
          uVar11 = 0xffffffff;
          uVar15 = 0;
          local_1d0 = param_2;
          local_1c8 = (uint *)(lVar14 + 0x90);
          do {
            bVar5 = (**(code **)(**(longlong **)
                                   (*(longlong *)(lVar14 + 0x80) + (longlong)iVar10 * 0x10) + 0x480)
                    )();
            puVar8 = local_1c8;
            uVar11 = ~(uint)uVar25 & uVar11;
            puVar9 = *(uint **)(lVar14 + 0xa0);
            if (*(uint **)(lVar14 + 0xa0) == (uint *)0x0) {
              puVar9 = local_1c8;
            }
            iVar7 = *(int *)(lVar14 + 0xa8);
            iVar10 = (int)uVar26;
            lVar23 = (longlong)iVar10;
            uVar21 = puVar9[lVar23] & uVar11;
            if (uVar21 == 0) {
              iVar16 = iVar7 + 0x1e;
              if (-1 < iVar7 + -1) {
                iVar16 = iVar7 + -1;
              }
              iVar16 = iVar16 >> 5;
              iVar13 = iVar13 + 0x20;
              iVar17 = iVar16;
              if (iVar16 < iVar10) {
                iVar17 = iVar10;
              }
              if (iVar10 < iVar16) {
                lVar24 = 0;
                do {
                  uVar21 = puVar9[lVar23 + lVar24 + 1];
                  if (uVar21 != 0) {
                    uVar26 = (ulonglong)(iVar10 + (int)lVar24 + 1);
                    uVar11 = 0xffffffff;
                    goto LAB_143f78c14;
                  }
                  iVar13 = iVar13 + 0x20;
                  lVar24 = lVar24 + 1;
                } while (iVar17 - lVar23 != lVar24);
                uVar11 = 0xffffffff;
                lVar23 = (longlong)iVar17;
              }
              uVar26 = lVar23 + 1U & 0xffffffff;
              iVar10 = iVar7;
            }
            else {
LAB_143f78c14:
              uVar25 = (ulonglong)(-uVar21 & uVar21);
              uVar2 = uVar25 * 2 + 1;
              lVar23 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
              }
              iVar10 = (iVar13 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
              if (iVar7 <= iVar10) {
                iVar10 = iVar7;
              }
            }
            uVar15 = uVar15 + bVar5;
          } while (iVar10 != iVar6);
          if (0x13 < uVar15) {
            local_f0 = (longlong **)&DAT_14c8731a0;
            local_e8 = (undefined8 *)&DAT_14c8731a0;
            local_e0 = &DAT_14c8731a2;
            local_d8 = '\0';
            FUN_140b126e4(local_1d0,&local_1a0);
            pcVar20 = local_1a0;
            if ((int)local_198 == 0) {
              pcVar20 = (code *)&DAT_149dfb77a;
            }
            FUN_140212e80(&local_f0,
                          L"UGbxDecoratorWithFactsSubsystem::RegisterComponentToFact number decorators registered to fact %s is greater than the maximum (%i)"
                          ,pcVar20,0x14);
            if (local_1a0 != (code *)0x0) {
              FUN_1400020a8();
            }
            FUN_145a0b7bc(param_3,&local_1a0);
            pcVar20 = local_1a0;
            if ((int)local_198 == 0) {
              pcVar20 = (code *)&DAT_149dfb77a;
            }
            FUN_140212e80(&local_f0,L"\n\tlatest GbxDecoratorFactComponent: %s",pcVar20);
            if (local_1a0 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (param_3[0x15] == 0) {
              FUN_140212e80(&local_f0,L"\n\tOwner Name: %s",&DAT_149e2b65a);
            }
            else {
              local_1b0 = *(undefined8 **)(param_3[0x15] + 0x18);
              FUN_1400021e4(&local_1b0,&local_1a0);
              pcVar20 = local_1a0;
              if ((int)local_198 == 0) {
                pcVar20 = (code *)&DAT_149dfb77a;
              }
              FUN_140212e80(&local_f0,L"\n\tOwner Name: %s",pcVar20);
              if (local_1a0 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            lVar23 = *(longlong *)(local_1d8 + 0x20);
            if (lVar23 == 0) {
LAB_143f79698:
              FUN_140212e80(&local_f0,L"\n\tWorld: %s",&DAT_149e2b65a);
            }
            else {
              if (DAT_14cb10130 == 0) {
                local_1a0 = FUN_140754f84;
                local_1e0 = FUN_14081d0ea;
                local_1e8 = FUN_14081d0ea;
                local_1f8 = &LAB_147da9a76;
                local_200 = FUN_1409f3105;
                local_208 = L"Engine";
                local_210 = 0;
                local_218 = 0x10000000;
                local_220 = 8;
                local_228 = 0x990;
                local_1f0 = &local_1a0;
                FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
              }
              lVar23 = *(longlong *)(lVar23 + 0x10);
              iVar6 = *(int *)(DAT_14cb10130 + 0x38);
              if ((*(int *)(lVar23 + 0x38) < iVar6) ||
                 (*(longlong *)(*(longlong *)(lVar23 + 0x30) + (longlong)iVar6 * 8) !=
                  DAT_14cb10130 + 0x30)) goto LAB_143f79698;
              lVar23 = *(longlong *)(local_1d8 + 0x20);
              if (((lVar23 == 0) || (*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < iVar6)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) + (longlong)iVar6 * 8) !=
                  DAT_14cb10130 + 0x30)) {
                lVar23 = 0;
              }
              local_1b0 = *(undefined8 **)(lVar23 + 0x18);
              FUN_1400021e4(&local_1b0,&local_1a0);
              pcVar20 = local_1a0;
              if ((int)local_198 == 0) {
                pcVar20 = (code *)&DAT_149dfb77a;
              }
              FUN_140212e80(&local_f0,L"\n\tWorld: %s",pcVar20);
              if (local_1a0 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            FUN_140b126e4(local_1d0,&local_1a0);
            pcVar20 = local_1a0;
            if ((int)local_198 == 0) {
              pcVar20 = (code *)&DAT_149dfb77a;
            }
            FUN_140212e80(&local_f0,L"\n\tRegistered Fact: %s",pcVar20);
            if (local_1a0 != (code *)0x0) {
              FUN_1400020a8();
            }
            FUN_140212e80(&local_f0,L"\n\tList of Registered Decorators:");
            iVar6 = *(int *)(lVar14 + 0xa8);
            if (iVar6 == 0) {
              uVar25 = 1;
              uVar26 = 0;
              iVar13 = 0;
              iVar10 = 0;
            }
            else {
              puVar9 = *(uint **)(lVar14 + 0xa0);
              if (*(uint **)(lVar14 + 0xa0) == (uint *)0x0) {
                puVar9 = puVar8;
              }
              uVar11 = *puVar9;
              if (uVar11 == 0) {
                iVar10 = iVar6 + 0x1e;
                if (-1 < iVar6 + -1) {
                  iVar10 = iVar6 + -1;
                }
                uVar26 = 0;
                uVar25 = (ulonglong)(uint)(iVar10 >> 5);
                if (iVar10 >> 5 < 1) {
                  uVar25 = uVar26;
                }
                iVar13 = 0;
                do {
                  if (uVar25 == uVar26) goto LAB_143f7941d;
                  iVar13 = iVar13 + 0x20;
                  uVar11 = puVar9[uVar26 + 1];
                  uVar26 = uVar26 + 1;
                } while (uVar11 == 0);
              }
              else {
                uVar26 = 0;
                iVar13 = 0;
              }
              uVar25 = (ulonglong)(-uVar11 & uVar11);
              uVar15 = uVar25 * 2 + 1;
              lVar23 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
              }
              iVar10 = (iVar13 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
              if (iVar6 <= iVar10) {
                iVar10 = iVar6;
              }
            }
            if (iVar10 != iVar6) {
              uVar11 = 0xffffffff;
              iVar7 = iVar6;
              do {
                lVar23 = *(longlong *)(*(longlong *)(lVar14 + 0x80) + (longlong)iVar10 * 0x10);
                if (lVar23 != 0) {
                  FUN_145a0b7bc(lVar23,&local_1a0);
                  pcVar20 = (code *)&DAT_149dfb77a;
                  if ((int)local_198 != 0) {
                    pcVar20 = local_1a0;
                  }
                  FUN_140212e80(&local_f0,L"\n\t\t%s",pcVar20);
                  if (local_1a0 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  iVar7 = *(int *)(lVar14 + 0xa8);
                }
                uVar11 = uVar11 & ~(uint)uVar25;
                puVar9 = *(uint **)(lVar14 + 0xa0);
                if (*(uint **)(lVar14 + 0xa0) == (uint *)0x0) {
                  puVar9 = puVar8;
                }
                iVar10 = (int)uVar26;
                lVar23 = (longlong)iVar10;
                uVar21 = puVar9[lVar23] & uVar11;
                if (uVar21 == 0) {
                  iVar16 = iVar7 + 0x1e;
                  if (-1 < iVar7 + -1) {
                    iVar16 = iVar7 + -1;
                  }
                  iVar16 = iVar16 >> 5;
                  iVar13 = iVar13 + 0x20;
                  iVar17 = iVar16;
                  if (iVar16 < iVar10) {
                    iVar17 = iVar10;
                  }
                  if (iVar10 < iVar16) {
                    lVar24 = 0;
                    do {
                      uVar21 = puVar9[lVar23 + lVar24 + 1];
                      if (uVar21 != 0) {
                        uVar26 = (ulonglong)(iVar10 + (int)lVar24 + 1);
                        uVar11 = 0xffffffff;
                        goto LAB_143f794d7;
                      }
                      iVar13 = iVar13 + 0x20;
                      lVar24 = lVar24 + 1;
                    } while (iVar17 - lVar23 != lVar24);
                    uVar11 = 0xffffffff;
                    iVar10 = iVar17;
                  }
                  uVar26 = (ulonglong)(iVar10 + 1);
                  puVar8 = local_1c8;
                  iVar10 = iVar7;
                }
                else {
LAB_143f794d7:
                  uVar25 = (ulonglong)(-uVar21 & uVar21);
                  uVar15 = uVar25 * 2 + 1;
                  lVar23 = 0x3f;
                  if (uVar15 != 0) {
                    for (; uVar15 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                    }
                  }
                  iVar10 = (iVar13 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                  if (iVar7 <= iVar10) {
                    iVar10 = iVar7;
                  }
                }
              } while (iVar10 != iVar6);
            }
LAB_143f7941d:
            if (local_d8 == '\x01') {
              FUN_1400020a8(local_f0);
            }
            uVar25 = 0;
            goto LAB_143f78dcd;
          }
        }
      }
LAB_143f78c79:
      lVar23 = lVar14 + 0x80;
      if ((param_3 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(param_3);
      }
      FUN_141315070(lVar23,&local_f0);
      puVar3 = local_e8;
      *local_e8 = param_3;
      if (DAT_14c950c29 == 1 && param_3 != (longlong *)0x0) {
        FUN_1456cec3c(param_3);
        param_3 = (longlong *)*puVar3;
      }
      bVar5 = DAT_14c950c29;
      *(undefined4 *)(puVar3 + 1) = 0xffffffff;
      local_1a0 = (code *)CONCAT44(local_1a0._4_4_,(int)local_f0);
      if (((bVar5 & 1) != 0) && (param_3 != (longlong *)0x0)) {
        FUN_1456cec3c(param_3);
      }
      uVar11 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
               -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      uVar11 = uVar11 >> 0x10 ^ uVar11;
      cVar4 = FUN_141314f00(lVar23,uVar11,puVar3,&local_1a0);
      if (cVar4 == '\0') {
        uVar21 = *(int *)(lVar14 + 0x88) - *(int *)(lVar14 + 0xb4);
        if (uVar21 < 4) {
          iVar6 = 1;
        }
        else {
          uVar25 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
          lVar24 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar24 & 0x1f);
        }
        if (((int)uVar21 < 1) || (iVar6 <= *(int *)(lVar14 + 200))) {
          uVar11 = *(int *)(lVar14 + 200) - 1U & uVar11;
          *(uint *)((longlong)puVar3 + 0xc) = uVar11;
          lVar24 = *(longlong *)(lVar14 + 0xc0);
          if (*(longlong *)(lVar14 + 0xc0) == 0) {
            lVar24 = lVar14 + 0xb8;
          }
          *(undefined4 *)(puVar3 + 1) =
               *(undefined4 *)
                (lVar24 + ((longlong)*(int *)(lVar14 + 200) - 1U & (longlong)(int)uVar11) * 4);
          lVar24 = *(longlong *)(lVar14 + 0xc0);
          if (*(longlong *)(lVar14 + 0xc0) == 0) {
            lVar24 = lVar14 + 0xb8;
          }
          *(undefined4 *)
           (lVar24 + ((longlong)*(int *)(lVar14 + 200) - 1U & (longlong)(int)uVar11) * 4) =
               local_1a0._0_4_;
        }
        else {
          *(int *)(lVar14 + 200) = iVar6;
          FUN_141315252(lVar23);
        }
      }
      uVar25 = CONCAT71((int7)((ulonglong)lVar23 >> 8),1);
      goto LAB_143f78dcd;
    }
  }
  local_1b0 = (undefined8 *)0x0;
  local_1a8 = 0;
  FUN_1446efa72(&local_1b0,0,3,0x10);
  puVar3 = local_1b0;
  local_1a8 = 3;
  *local_1b0 = &PTR_LAB_14b3e6310;
  LOCK();
  UNLOCK();
  lVar23 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar23 == 0) {
    LOCK();
    UNLOCK();
    lVar23 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_1b0[2] = lVar23;
  *local_1b0 = &PTR_FUN_14b50a110;
  local_1b0[3] = 0;
  iVar6 = 0;
  if (local_1d8 != 0) {
    uVar11 = *(uint *)(local_1d8 + 0xc);
    *(uint *)(local_1b0 + 3) = uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar6 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar27 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar27) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar6 = *(int *)(lVar14 + 0x10);
      bVar27 = iVar6 == 0;
      if (bVar27) {
        *(int *)(lVar14 + 0x10) = iVar10;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar27) {
        iVar6 = iVar10;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar6;
  puVar3[4] = FUN_1415b340e;
  local_150 = param_3;
  if ((param_3 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_3);
  }
  local_e8 = &local_148;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f0 = &local_150;
  FUN_1458e4aa0(&local_148,&local_f0);
  local_1c0 = 0;
  local_1b8 = 0;
  FUN_1401aa3da(&local_1c0,&local_1b0);
  FUN_1458b9176(&local_f0,param_2,&local_1c0,&local_148);
  local_1a0 = param_2;
  local_198 = &local_f0;
  FUN_1413e56d8(plVar1,local_18c);
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_14118c45e(local_a8);
  if (local_b0 == 0) {
LAB_143f78ff7:
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_b8 != (undefined8 *)0x0) {
    (**(code **)*local_b8)(local_b8,0);
    FUN_1446efa72(&local_b8,0,0,0x10);
    local_b0 = 0;
    goto LAB_143f78ff7;
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_188 = *(undefined8 *)param_2;
  local_180 = *(undefined4 *)(param_2 + 8);
  FUN_1447715ec(&local_178,param_2 + 0x10);
  uVar11 = FUN_143f79f00(local_1d8,&local_188);
  uVar25 = (ulonglong)uVar11;
  if (local_1a8 != 0) {
    if (local_1b0 == (undefined8 *)0x0) goto LAB_143f78dcd;
    (**(code **)*local_1b0)(local_1b0,0);
    FUN_1446efa72(&local_1b0,0,0,0x10);
    local_1a8 = 0;
  }
  if (local_1b0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f78dcd:
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar25 & 0xffffffff;
}



// FUNCTION 143f796e0 FUN_143f796e0 body=80 status=ok
// SIG undefined FUN_143f796e0(void)

void FUN_143f796e0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x488))();
  if (lVar1 != 0) {
    lVar1 = FUN_140e4bdee(lVar1);
    if (lVar1 != 0) {
      FUN_143f79730(lVar1,param_1 + 0x23,param_1);
    }
    FUN_1401c3216(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 143f79730 FUN_143f79730 body=1998 status=ok
// SIG undefined FUN_143f79730(void)

void FUN_143f79730(longlong param_1,char *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong *puVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  undefined1 *puVar14;
  longlong lVar15;
  int *piVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88 = param_1;
  if (*param_2 == '\x01') {
    local_90 = (longlong *)(param_1 + 0x30);
    FUN_1447a97f4(&local_70,param_2 + 0x10);
    if (0 < local_70._4_4_) {
      lVar19 = 0;
      uVar18 = 0;
      iVar3 = local_70._4_4_;
      iVar7 = DAT_14c948000;
      do {
        bVar21 = (int)local_70 != 0;
        bVar22 = (int)local_70 != iVar7;
        piVar13 = (int *)&DAT_14c948618;
        piVar16 = &DAT_14c948620;
        if (bVar22 && bVar21) {
          puVar14 = local_68;
          if (0 < local_4c) {
            puVar14 = local_58;
          }
          if (1 < iVar3) {
            puVar14 = local_58;
          }
          piVar16 = (int *)(puVar14 + lVar19 + 8);
          piVar13 = (int *)(puVar14 + lVar19);
        }
        if ((*piVar13 == DAT_14cb7beb0) && (*piVar16 == DAT_14cb7beb8)) {
LAB_143f79953:
          FUN_1402b5374(&local_70,uVar18 & 0xffffffff,0);
          iVar3 = local_70._4_4_;
          iVar7 = DAT_14c948000;
        }
        else {
          piVar13 = &DAT_14c948620;
          piVar16 = (int *)&DAT_14c948618;
          if (bVar22 && bVar21) {
            puVar14 = local_68;
            if (0 < local_4c) {
              puVar14 = local_58;
            }
            if (1 < iVar3) {
              puVar14 = local_58;
            }
            piVar13 = (int *)(puVar14 + lVar19 + 8);
            piVar16 = (int *)(puVar14 + lVar19);
          }
          if ((*piVar16 == DAT_14cb7bec8) && (*piVar13 == DAT_14cb7bed0)) goto LAB_143f79953;
          piVar13 = &DAT_14c948620;
          piVar16 = (int *)&DAT_14c948618;
          if (bVar22 && bVar21) {
            puVar14 = local_68;
            if (0 < local_4c) {
              puVar14 = local_58;
            }
            if (1 < iVar3) {
              puVar14 = local_58;
            }
            piVar13 = (int *)(puVar14 + lVar19 + 8);
            piVar16 = (int *)(puVar14 + lVar19);
          }
          if ((*piVar16 == DAT_14cb7bee0) && (*piVar13 == DAT_14cb7bee8)) goto LAB_143f79953;
          piVar13 = &DAT_14c948620;
          piVar16 = (int *)&DAT_14c948618;
          if (bVar22 && bVar21) {
            puVar14 = local_68;
            if (0 < local_4c) {
              puVar14 = local_58;
            }
            if (1 < iVar3) {
              puVar14 = local_58;
            }
            piVar13 = (int *)(puVar14 + lVar19 + 8);
            piVar16 = (int *)(puVar14 + lVar19);
          }
          if ((*piVar16 == DAT_14cb7bef8) && (*piVar13 == DAT_14cb7bf00)) goto LAB_143f79953;
          piVar13 = &DAT_14c948620;
          piVar16 = (int *)&DAT_14c948618;
          if (bVar22 && bVar21) {
            puVar14 = local_68;
            if (0 < local_4c) {
              puVar14 = local_58;
            }
            if (1 < iVar3) {
              puVar14 = local_58;
            }
            piVar13 = (int *)(puVar14 + lVar19 + 8);
            piVar16 = (int *)(puVar14 + lVar19);
          }
          if ((*piVar16 == DAT_14cb7bf10) && (*piVar13 == DAT_14cb7bf18)) goto LAB_143f79953;
        }
        uVar18 = uVar18 + 1;
        lVar19 = lVar19 + 0xc;
      } while ((longlong)uVar18 < (longlong)iVar3);
    }
    uVar9 = (int)local_70;
    plVar11 = local_90;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
      plVar11 = local_90;
    }
  }
  else {
    uVar9 = *(undefined4 *)(param_2 + 0x10);
    plVar11 = (longlong *)(param_1 + 0x30);
  }
  iVar3 = FUN_1413e5a1e(plVar11,uVar9,param_2);
  if (iVar3 == -1) goto LAB_143f79d42;
  lVar20 = (longlong)iVar3 * 0xe8 + *plVar11;
  lVar19 = lVar20 + 0x38;
  if (lVar19 == 0 || lVar20 == 0) goto LAB_143f79d42;
  local_78 = param_3;
  if (param_3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  plVar6 = (longlong *)(lVar20 + 0x80);
  if ((param_3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  uVar4 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  iVar3 = FUN_141314fa6(plVar6,uVar4,&local_78);
  if (iVar3 == -1) goto LAB_143f79d42;
  local_90 = plVar11;
  if ((param_3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_3);
  }
  if (*(int *)(lVar20 + 0x88) != *(int *)(lVar20 + 0xb4)) {
    if ((param_3 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(param_3);
    }
    lVar5 = *(longlong *)(lVar20 + 0xc0);
    if (*(longlong *)(lVar20 + 0xc0) == 0) {
      lVar5 = lVar20 + 0xb8;
    }
    uVar18 = (longlong)(int)uVar4 & (longlong)*(int *)(lVar20 + 200) - 1U;
    iVar3 = *(int *)(lVar5 + uVar18 * 4);
    if (iVar3 != -1) {
      puVar8 = (ulonglong *)(lVar5 + uVar18 * 4);
      bVar2 = DAT_14c950c29;
      local_98 = lVar19;
LAB_143f79acf:
      puVar10 = (ulonglong *)((longlong)iVar3 * 0x10 + *plVar6);
      if ((param_3 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c(param_3);
        bVar2 = DAT_14c950c29;
      }
      uVar18 = *puVar10;
      if (((bVar2 & 1) != 0) && (uVar18 != 0)) {
        FUN_1456cec3c(uVar18);
        bVar2 = DAT_14c950c29;
      }
      if ((param_3 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c(param_3);
        bVar2 = DAT_14c950c29;
      }
      lVar19 = local_98;
      if (uVar18 != param_3) goto code_r0x000143f79afe;
      iVar3 = (int)*puVar8;
      lVar5 = *(longlong *)(lVar20 + 0x80);
      lVar12 = lVar20 + 0xb8;
      if (*(longlong *)(lVar20 + 0xc0) != 0) {
        lVar12 = *(longlong *)(lVar20 + 0xc0);
      }
      lVar17 = (longlong)*(int *)(lVar5 + 0xc + (longlong)iVar3 * 0x10);
      iVar7 = *(int *)(lVar12 + lVar17 * 4);
      if (iVar7 == iVar3) {
        piVar13 = (int *)(lVar12 + lVar17 * 4);
      }
      else {
        do {
          piVar13 = (int *)(lVar5 + (longlong)iVar7 * 0x10 + 8);
          iVar7 = *piVar13;
        } while (iVar7 != iVar3);
      }
      *piVar13 = *(int *)(lVar5 + (longlong)iVar3 * 0x10 + 8);
      FUN_143f7a762(plVar6);
    }
  }
LAB_143f79bad:
  lVar5 = local_88;
  plVar11 = local_90;
  if (*(int *)(lVar20 + 0x88) != *(int *)(lVar20 + 0xb4)) goto LAB_143f79d42;
  if ((*(longlong *)(lVar20 + 0xd8) != 0) && (lVar12 = *(longlong *)(local_88 + 0x20), lVar12 != 0))
  {
    if (DAT_14cb10130 == 0) {
      local_b0 = &local_70;
      local_70 = FUN_140754f84;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_147da9a76;
      local_c0 = FUN_1409f3105;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10000000;
      local_e0 = 8;
      local_e8 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) {
      if (*(longlong *)(lVar12 + 0x1f0) == 0) {
        plVar6 = (longlong *)(lVar12 + 0x458);
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(lVar12 + 0x1f0) + 0xf0);
      }
      lVar12 = *(longlong *)(lVar20 + 0xd8);
      if (lVar12 != 0) {
        lVar17 = *plVar6;
        uVar4 = (uint)lVar12;
        if ((int)(uVar4 & 0xffffff) < *(int *)(lVar17 + 0x10)) {
          lVar15 = lVar17 + 0x18;
          if (*(longlong *)(lVar17 + 0x28) != 0) {
            lVar15 = *(longlong *)(lVar17 + 0x28);
          }
          if ((*(uint *)(lVar15 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1)
              != 0) {
            lVar17 = *(longlong *)(lVar17 + 8);
            lVar15 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
            if (((lVar17 + lVar15 != 0) && (*(longlong *)(lVar17 + 0x60 + lVar15) == lVar12)) &&
               (*(char *)(lVar17 + 1 + lVar15) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
      *(undefined8 *)(lVar20 + 0xd8) = 0;
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x20);
  if (lVar5 == 0) {
LAB_143f79eea:
    lVar5 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_b0 = &local_70;
      local_70 = FUN_140754f84;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_147da9a76;
      local_c0 = FUN_1409f3105;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10000000;
      local_e0 = 8;
      local_e8 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_143f79eea;
  }
  if ((*(int *)(lVar20 + 0x78) == 0) ||
     (plVar6 = *(longlong **)(lVar20 + 0x70), plVar6 == (longlong *)0x0)) {
    local_80 = 0;
  }
  else {
    (**(code **)(*plVar6 + 0x38))(plVar6,&local_80);
  }
  uVar1 = local_80;
  lVar20 = FUN_140149a73(lVar5,0);
  if (lVar20 != 0) {
    FUN_140825b72(lVar19,uVar1,lVar20,0);
  }
  FUN_14118c0e0(plVar11,param_2);
LAB_143f79d42:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143f79afe:
  iVar3 = (int)puVar10[1];
  puVar8 = puVar10 + 1;
  if (iVar3 == -1) goto LAB_143f79bad;
  goto LAB_143f79acf;
}



// FUNCTION 143f79f00 FUN_143f79f00 body=2140 status=ok
// SIG undefined FUN_143f79f00(void)

ulonglong FUN_143f79f00(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  int *piVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  uint *puVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_1c8 [32];
  undefined2 *local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  code *local_180;
  undefined1 *local_178;
  uint *local_170;
  code *local_168;
  code *local_160;
  longlong *local_158;
  longlong local_150;
  undefined8 *local_148;
  int local_140;
  undefined2 local_134 [2];
  undefined4 local_130;
  undefined2 local_12c;
  undefined1 local_12a;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined2 uStack_d7;
  undefined1 uStack_d5;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined2 uStack_af;
  undefined1 uStack_ad;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined2 local_57;
  undefined1 local_55;
  int local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar11 = *(longlong *)(param_1 + 0x20);
  if (lVar11 != 0) {
    if (DAT_14cb10130 == 0) {
      local_170 = &local_e8;
      local_e8 = 0x40754f84;
      iStack_e4 = 1;
      local_160 = FUN_14081d0ea;
      local_168 = FUN_14081d0ea;
      local_178 = &LAB_147da9a76;
      local_180 = FUN_1409f3105;
      local_188 = L"Engine";
      local_190 = 0;
      local_198 = 0x10000000;
      local_1a0 = 8;
      local_1a8 = (undefined2 *)CONCAT44(local_1a8._4_4_,0x990);
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) {
      local_150 = param_1;
      if (*param_2 == '\x01') {
        local_158 = (longlong *)(param_1 + 0x30);
        FUN_1447a97f4(&local_e8,param_2 + 0x10);
        if (0 < iStack_e4) {
          lVar14 = 0;
          uVar19 = 0;
          iVar6 = iStack_e4;
          uVar12 = DAT_14c948000;
          do {
            bVar21 = local_e8 != 0;
            bVar22 = local_e8 != uVar12;
            piVar15 = &DAT_14c948620;
            piVar17 = (int *)&DAT_14c948618;
            if (bVar22 && bVar21) {
              puVar18 = &uStack_e0;
              if (0 < local_c4) {
                puVar18 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
              }
              if (1 < iVar6) {
                puVar18 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
              }
              piVar15 = (int *)((longlong)puVar18 + lVar14 + 8);
              piVar17 = (int *)((longlong)puVar18 + lVar14);
            }
            if ((*piVar17 == DAT_14cb7beb0) && (*piVar15 == DAT_14cb7beb8)) {
LAB_143f7a15f:
              FUN_1402b5374(&local_e8,uVar19 & 0xffffffff,0);
              iVar6 = iStack_e4;
              uVar12 = DAT_14c948000;
            }
            else {
              piVar15 = &DAT_14c948620;
              piVar17 = (int *)&DAT_14c948618;
              if (bVar22 && bVar21) {
                puVar18 = &uStack_e0;
                if (0 < local_c4) {
                  puVar18 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
                }
                if (1 < iVar6) {
                  puVar18 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
                }
                piVar15 = (int *)((longlong)puVar18 + lVar14 + 8);
                piVar17 = (int *)((longlong)puVar18 + lVar14);
              }
              if ((*piVar17 == DAT_14cb7bec8) && (*piVar15 == DAT_14cb7bed0)) goto LAB_143f7a15f;
              piVar15 = &DAT_14c948620;
              piVar17 = (int *)&DAT_14c948618;
              if (bVar22 && bVar21) {
                puVar18 = &uStack_e0;
                if (0 < local_c4) {
                  puVar18 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
                }
                if (1 < iVar6) {
                  puVar18 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
                }
                piVar15 = (int *)((longlong)puVar18 + lVar14 + 8);
                piVar17 = (int *)((longlong)puVar18 + lVar14);
              }
              if ((*piVar17 == DAT_14cb7bee0) && (*piVar15 == DAT_14cb7bee8)) goto LAB_143f7a15f;
              piVar15 = &DAT_14c948620;
              piVar17 = (int *)&DAT_14c948618;
              if (bVar22 && bVar21) {
                puVar18 = &uStack_e0;
                if (0 < local_c4) {
                  puVar18 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
                }
                if (1 < iVar6) {
                  puVar18 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
                }
                piVar15 = (int *)((longlong)puVar18 + lVar14 + 8);
                piVar17 = (int *)((longlong)puVar18 + lVar14);
              }
              if ((*piVar17 == DAT_14cb7bef8) && (*piVar15 == DAT_14cb7bf00)) goto LAB_143f7a15f;
              piVar15 = &DAT_14c948620;
              piVar17 = (int *)&DAT_14c948618;
              if (bVar22 && bVar21) {
                puVar18 = &uStack_e0;
                if (0 < local_c4) {
                  puVar18 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
                }
                if (1 < iVar6) {
                  puVar18 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
                }
                piVar15 = (int *)((longlong)puVar18 + lVar14 + 8);
                piVar17 = (int *)((longlong)puVar18 + lVar14);
              }
              if ((*piVar17 == DAT_14cb7bf10) && (*piVar15 == DAT_14cb7bf18)) goto LAB_143f7a15f;
            }
            uVar19 = uVar19 + 1;
            lVar14 = lVar14 + 0xc;
          } while ((longlong)uVar19 < (longlong)iVar6);
        }
        uVar12 = local_e8;
        plVar9 = local_158;
        if (CONCAT44(uStack_cc,uStack_d0) != 0) {
          FUN_1400020a8();
          plVar9 = local_158;
        }
      }
      else {
        uVar12 = *(uint *)(param_2 + 0x10);
        plVar9 = (longlong *)(param_1 + 0x30);
      }
      iVar6 = FUN_1413e5a1e(plVar9,uVar12,param_2);
      if (iVar6 != -1) {
        lVar14 = (longlong)iVar6 * 0xe8 + *plVar9;
        uVar19 = 0;
        if (lVar14 == -0x38 || lVar14 == 0) goto LAB_143f7a5e4;
        local_e8 = local_e8 & 0xffffff00;
        iStack_e4 = 0;
        uStack_e0 = 0;
        local_dc = 0;
        local_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
        local_c4 = 0;
        uStack_c0 = 0;
        uStack_b8 = CONCAT44(uStack_b8._4_4_,0xc69c4000);
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_b0 = 0;
        uStack_af = 0;
        uStack_ad = 0;
        uStack_ac = 0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        local_57 = 1;
        local_55 = 0;
        local_54 = 0;
        FUN_1401aa3da(&uStack_c8,lVar14 + 0x70);
        lVar8 = FUN_140149a73(lVar11,0);
        if (lVar8 == 0) {
          local_54 = 2;
          FUN_1409838b8();
LAB_143f7a3ed:
          if (*(longlong *)(lVar11 + 0x1f0) == 0) {
            puVar10 = (undefined8 *)(lVar11 + 0x458);
          }
          else {
            puVar10 = (undefined8 *)(*(longlong *)(lVar11 + 0x1f0) + 0xf0);
          }
          uVar12 = *(uint *)(lVar11 + 0xc);
          if ((int)uVar12 < DAT_14c9647dc) {
            puVar20 = (uint *)((ulonglong)((uVar12 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
          }
          else {
            puVar20 = (uint *)0x0;
          }
          uVar1 = *puVar10;
          uVar7 = puVar20[4];
          if (puVar20[4] == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            uVar13 = DAT_14c964868 + 1;
            bVar21 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar21) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar13);
            }
            LOCK();
            uVar7 = puVar20[4];
            bVar21 = uVar7 == 0;
            if (bVar21) {
              puVar20[4] = uVar13;
              uVar7 = 0;
            }
            UNLOCK();
            if (bVar21) {
              uVar7 = uVar13;
            }
          }
          local_128 = CONCAT44(uVar7,uVar12);
          local_110 = 0;
          uStack_108 = 0;
          local_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_120 = *(undefined8 *)param_2;
          local_118 = *(undefined4 *)(param_2 + 8);
          FUN_1447715ec(&local_110,param_2 + 0x10);
          local_148 = (undefined8 *)0x0;
          local_140 = 0;
          FUN_1446efa72(&local_148,0,6,0x10);
          local_140 = 6;
          *local_148 = &PTR_LAB_14a1c8830;
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
          local_148[2] = lVar8;
          *local_148 = &PTR_FUN_14b50a180;
          local_148[3] = local_128;
          FUN_14014e938(local_148 + 4,&local_120);
          local_e8 = 0;
          iStack_e4 = 0;
          uStack_e0 = 0;
          FUN_14487d8d8(&local_e8,&local_148);
          uStack_a8 = CONCAT31(uStack_a8._1_3_,1);
          local_1a8 = local_134;
          local_134[0] = 0;
          local_130 = 0xbf800000;
          FUN_1406f4044(uVar1,lVar14 + 0xd8,&local_e8,0x3f000000);
          (*(code *)(&PTR_LAB_14a1c87a0)[(byte)uStack_a8])(&local_e8);
          if (local_140 != 0) {
            lVar11 = local_f8;
            if (local_148 == (undefined8 *)0x0) goto LAB_143f7a5cc;
            (**(code **)*local_148)(local_148,0);
            FUN_1446efa72(&local_148,0,0,0x10);
            local_140 = 0;
          }
          lVar11 = local_f8;
          if (local_148 != (undefined8 *)0x0) {
            FUN_1400020a8();
            lVar11 = local_f8;
          }
        }
        else {
          puVar20 = &local_e8;
          FUN_140983ba6(param_2,lVar8,puVar20);
          iVar6 = local_54;
          uVar5 = uStack_cc;
          uVar4 = uStack_d0;
          uVar3 = uStack_d4;
          local_158 = (longlong *)CONCAT71(local_158._1_7_,local_d8);
          local_12c = uStack_d7;
          local_12a = uStack_d5;
          FUN_1409838b8(puVar20);
          if ((iVar6 - 2U < 2) || (iVar6 == 6)) goto LAB_143f7a3ed;
          if (iVar6 != 1) {
            FUN_14118c0e0(plVar9,param_2);
            goto LAB_143f7a5e1;
          }
          *(undefined1 *)(lVar14 + 0xd0) = 0;
          if (*(longlong *)(lVar11 + 0x1f0) == 0) {
            plVar9 = (longlong *)(lVar11 + 0x458);
          }
          else {
            plVar9 = (longlong *)(*(longlong *)(lVar11 + 0x1f0) + 0xf0);
          }
          uVar2 = local_158._0_1_;
          lVar11 = *(longlong *)(lVar14 + 0xd8);
          if (lVar11 != 0) {
            lVar8 = *plVar9;
            uVar12 = (uint)lVar11;
            if ((int)(uVar12 & 0xffffff) < *(int *)(lVar8 + 0x10)) {
              lVar16 = lVar8 + 0x18;
              if (*(longlong *)(lVar8 + 0x28) != 0) {
                lVar16 = *(longlong *)(lVar8 + 0x28);
              }
              if ((*(uint *)(lVar16 + (ulonglong)((uVar12 & 0xffffff) >> 5) * 4) >> (uVar12 & 0x1f)
                  & 1) != 0) {
                lVar8 = *(longlong *)(lVar8 + 8);
                lVar16 = (ulonglong)(uVar12 & 0xffffff) * 0x70;
                if (((lVar8 + lVar16 != 0) && (*(longlong *)(lVar8 + 0x60 + lVar16) == lVar11)) &&
                   (*(char *)(lVar8 + 1 + lVar16) != '\x04')) {
                  FUN_1405a424c();
                }
              }
            }
          }
          *(undefined8 *)(lVar14 + 0xd8) = 0;
          uStack_c8 = 0;
          local_d8 = 0;
          uStack_d7 = 0;
          uStack_d5 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_ac = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          local_b0 = 0;
          local_e8 = (uint)*(undefined8 *)param_2;
          iStack_e4 = (int)((ulonglong)*(undefined8 *)param_2 >> 0x20);
          uStack_e0 = *(undefined4 *)(param_2 + 8);
          FUN_1447715ec(&local_d8,param_2 + 0x10);
          local_b0 = uVar2;
          uStack_af = local_12c;
          uStack_ad = local_12a;
          uStack_ac = uVar3;
          uStack_a8 = uVar4;
          uStack_a4 = uVar5;
          FUN_1415b340e(local_150,&local_e8);
          lVar11 = CONCAT44(uStack_bc,uStack_c0);
        }
LAB_143f7a5cc:
        if (lVar11 != 0) {
          FUN_1400020a8();
        }
        uVar19 = CONCAT71((int7)((ulonglong)puVar20 >> 8),1);
        goto LAB_143f7a5e4;
      }
    }
  }
LAB_143f7a5e1:
  uVar19 = 0;
LAB_143f7a5e4:
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19 & 0xffffffff;
}



// FUNCTION 143f7a762 FUN_143f7a762 body=114 status=ok
// SIG undefined FUN_143f7a762(void)

void FUN_143f7a762(longlong *param_1,int param_2)

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



// FUNCTION 143f7a7d4 FUN_143f7a7d4 body=31 status=ok
// SIG undefined FUN_143f7a7d4(void)

undefined8 FUN_143f7a7d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f7a842 FUN_143f7a842 body=59 status=ok
// SIG undefined FUN_143f7a842(void)

undefined8 * FUN_143f7a842(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b50a180;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f7a892 FUN_143f7a892 body=154 status=ok
// SIG undefined FUN_143f7a892(void)

void FUN_143f7a892(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b50a180;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined2 *)(puVar1 + 4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  FUN_1447715ec(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143f7a92c FUN_143f7a92c body=154 status=ok
// SIG undefined FUN_143f7a92c(void)

void FUN_143f7a92c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b50a180;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined2 *)(puVar1 + 4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  FUN_1447715ec(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143f7a9c6 FUN_143f7a9c6 body=188 status=ok
// SIG undefined FUN_143f7a9c6(void)

void FUN_143f7a9c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b50a180;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined2 *)&p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  p_Var1[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = 0;
  p_Var1[1].ProcessLocksList.Blink = (_LIST_ENTRY *)0x0;
  p_Var1[1].EntryCount = 0;
  p_Var1[1].ContentionCount = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  FUN_1447715ec(p_Var1 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f7aa73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f7aa8c FUN_143f7aa8c body=20 status=ok
// SIG undefined FUN_143f7aa8c(void)

undefined1 FUN_143f7aa8c(longlong param_1)

{
  FUN_143f7aaa0(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f7aaa0 FUN_143f7aaa0 body=205 status=ok
// SIG undefined FUN_143f7aaa0(void)

void FUN_143f7aaa0(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  uint local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_140e4bdee();
      if (lVar2 != 0) {
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
        local_28 = 0;
        uStack_20 = 0;
        local_50 = *(undefined8 *)(param_1 + 2);
        local_48 = param_1[4];
        FUN_1447715ec(&local_40,param_1 + 6);
        FUN_143f79f00(lVar2,&local_50);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7ab6e FUN_143f7ab6e body=448 status=ok
// SIG undefined FUN_143f7ab6e(void)

void FUN_143f7ab6e(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxDecorator",&PTR_FUN_14b507d40,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxDecorator",&PTR_FUN_14b5081f0,1,0);
  FUN_1446f470e(&DAT_14cb98ba8,L"EditorConstructionScript",1);
  FUN_1446f470e(&DAT_14cb98bb8,L"IsOnlyUpdatingWithMoveOrPropertiesChange",1);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxDecorator",&PTR_FUN_14b508750,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxDecorator",&PTR_FUN_14b508ab0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxDecorator",&PTR_FUN_14b509280,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxDecorator",&PTR_FUN_14b509690,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxDecorator",&PTR_FUN_14b509a60,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxDecorator",&PTR_FUN_14b509e10,1,0);
  local_48 = 0x800000014b509e38;
  local_34 = 0xc;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14658a88a(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7ad30 FUN_143f7ad30 body=110 status=ok
// SIG undefined FUN_143f7ad30(void)

void FUN_143f7ad30(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b50b3f0;
  puVar1[5] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}



// FUNCTION 143f7ada4 FUN_143f7ada4 body=653 status=ok
// SIG undefined FUN_143f7ada4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_143f7ada4(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *param_2;
  if (((lVar2 == 0) || (lVar4 = FUN_14585df86(), lVar4 == 0)) ||
     (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38))) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    lVar9 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30) {
      lVar9 = *param_2;
    }
    if ((param_1 != 0) && (lVar9 != 0)) {
      lVar5 = FUN_14019257c(param_1);
      local_50 = param_1;
      FUN_140100fb2(local_88);
      lVar4 = local_60;
      lVar2 = local_78;
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
      if (local_80 != local_68) {
        local_90 = lVar9 + 0x30;
        plVar8 = local_80;
        do {
          lVar7 = plVar8[2];
          if (((lVar5 == 0) || (lVar6 = FUN_14477b890(lVar5,lVar7), lVar6 == 0)) &&
             (((*(uint *)(lVar7 + 8) & 0x40) == 0 &&
              ((*(longlong *)(lVar7 + 0x3d0) != 0 &&
               (lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x3d0) + 0x28), lVar6 != 0)))))) {
            lVar6 = *(longlong *)(lVar6 + 0x10);
            if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                local_90)) goto LAB_143f7b012;
          }
          plVar3 = (longlong *)*plVar8;
          if ((longlong *)*plVar8 == (longlong *)0x0) {
LAB_143f7b005:
            plVar8 = (longlong *)0x0;
          }
          else {
            do {
              plVar8 = plVar3;
              lVar7 = plVar8[2];
              if ((lVar7 != 0) && ((*(uint *)(lVar7 + 8) & 0x40018000) == 0)) {
                uVar1 = *(uint *)(lVar7 + 0xc);
                if ((int)uVar1 < DAT_14c9647dc) {
                  lVar7 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                  if ((*(uint *)(lVar7 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0)
                  {
                    lVar7 = lVar7 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_143f7af31:
                    if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) {
                      lVar7 = FUN_1447210f0();
                      goto LAB_143f7af6c;
                    }
                  }
                }
                else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
                  lVar7 = 0;
                  goto LAB_143f7af31;
                }
              }
              plVar3 = (longlong *)*plVar8;
              plVar8 = (longlong *)0x0;
            } while (plVar3 != (longlong *)0x0);
          }
LAB_143f7b007:
        } while (plVar8 != local_68);
      }
      lVar7 = 0;
LAB_143f7b012:
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
LAB_143f7af6c:
  if (lVar7 != *local_70) {
    plVar8 = (longlong *)*plVar8;
    if (plVar8 != (longlong *)0x0) {
      do {
        lVar7 = plVar8[2];
        if ((lVar7 != 0) && ((*(uint *)(lVar7 + 8) & 0x40018000) == 0)) {
          uVar1 = *(uint *)(lVar7 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar7 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            if ((*(uint *)(lVar7 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
              lVar7 = lVar7 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_143f7afcf:
              if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) goto LAB_143f7affb;
            }
          }
          else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
            lVar7 = 0;
            goto LAB_143f7afcf;
          }
        }
        plVar8 = (longlong *)*plVar8;
        if (plVar8 == (longlong *)0x0) break;
      } while( true );
    }
    goto LAB_143f7b005;
  }
  goto LAB_143f7b007;
LAB_143f7affb:
  lVar7 = FUN_1447210f0();
  goto LAB_143f7af6c;
}



// FUNCTION 143f7b032 FUN_143f7b032 body=128 status=ok
// SIG undefined FUN_143f7b032(void)

void FUN_143f7b032(longlong param_1,undefined1 *param_2,double *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = (*param_3 - *(double *)(param_1 + 0x30)) / (double)*(float *)(param_1 + 0x50);
  uVar1 = (int)ROUND(dVar4 + dVar4 + -0.5) >> 1;
  if (-1 < (int)uVar1) {
    dVar4 = (param_3[1] - *(double *)(param_1 + 0x38)) / (double)*(float *)(param_1 + 0x50);
    uVar2 = 0;
    iVar3 = (int)ROUND(dVar4 + dVar4 + -0.5) >> 1;
    if ((iVar3 < 0) || (*(int *)(param_1 + 0x54) <= (int)uVar1)) goto LAB_143f7b0a8;
    if (iVar3 < *(int *)(param_1 + 0x58)) {
      *param_2 = *(undefined1 *)
                  (*(longlong *)(param_1 + 0x60) +
                  (ulonglong)uVar1 + (ulonglong)(uint)(*(int *)(param_1 + 0x54) * iVar3));
      uVar2 = 1;
      goto LAB_143f7b0a8;
    }
  }
  uVar2 = 0;
LAB_143f7b0a8:
  param_2[1] = uVar2;
  return;
}



// FUNCTION 143f7b0dc FUN_143f7b0dc body=31 status=ok
// SIG undefined FUN_143f7b0dc(void)

undefined8 FUN_143f7b0dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f7b1de FUN_143f7b1de body=29 status=ok
// SIG undefined FUN_143f7b1de(void)

undefined8 FUN_143f7b1de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f7b37a FUN_143f7b37a body=101 status=ok
// SIG undefined FUN_143f7b37a(void)

void FUN_143f7b37a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b50cee0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143f7b3e0 FUN_143f7b3e0 body=101 status=ok
// SIG undefined FUN_143f7b3e0(void)

void FUN_143f7b3e0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b50cee0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143f7b446 FUN_143f7b446 body=134 status=ok
// SIG undefined FUN_143f7b446(void)

void FUN_143f7b446(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca5b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b50cee0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f7b4bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f7b4cc FUN_143f7b4cc body=66 status=ok
// SIG undefined FUN_143f7b4cc(void)

void FUN_143f7b4cc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143f7b632(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7b510 FUN_143f7b510 body=288 status=ok
// SIG undefined FUN_143f7b510(void)

undefined8 FUN_143f7b510(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143f7b62a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143f7b62a;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143f7b62a:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143f7b5dd;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143f7b632(param_1 + 0x20,&local_38,param_3);
      uVar6 = 1;
      goto LAB_143f7b5dd;
    }
  }
  uVar6 = 0;
LAB_143f7b5dd:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7b632 FUN_143f7b632 body=280 status=ok
// SIG undefined FUN_143f7b632(void)

void FUN_143f7b632(uint *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(longlong *)(param_3 + 8) != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if (param_1[1] == 0) {
LAB_143f7b73f:
    lVar2 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar2 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         ((*(uint *)(plVar3 + 2) != param_1[1] || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))))
      goto LAB_143f7b73f;
      lVar2 = *plVar3;
    }
  }
  if (param_1[3] != 0) {
    uVar1 = param_1[2];
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143f7b703;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar5 + 2) == param_1[3] && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar5;
      goto LAB_143f7b703;
    }
  }
  uVar4 = 0;
LAB_143f7b703:
  if ((lVar2 == *param_2) && ((*(byte *)(*param_2 + 0x153) & 0x40) != 0)) {
    FUN_14143656a(uVar4);
    FUN_140457ffc(&DAT_14cb10980,uVar4);
    return;
  }
  return;
}



// FUNCTION 143f7b75c FUN_143f7b75c body=12 status=ok
// SIG undefined FUN_143f7b75c(void)

void FUN_143f7b75c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f7b765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143f7b768 FUN_143f7b768 body=29 status=ok
// SIG undefined FUN_143f7b768(void)

undefined8 FUN_143f7b768(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f7b7ac FUN_143f7b7ac body=282 status=ok
// SIG undefined FUN_143f7b7ac(void)

undefined8 * FUN_143f7b7ac(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143f7b785);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143f7b8c6 FUN_143f7b8c6 body=108 status=ok
// SIG undefined FUN_143f7b8c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7b8c6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_141438168(_DAT_000000a8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_141438168(param_1[0x15],&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143f7b909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143f7b932 FUN_143f7b932 body=29 status=ok
// SIG undefined FUN_143f7b932(void)

undefined8 FUN_143f7b932(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f7bace FUN_143f7bace body=101 status=ok
// SIG undefined FUN_143f7bace(void)

void FUN_143f7bace(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b50cfd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143f7bb34 FUN_143f7bb34 body=101 status=ok
// SIG undefined FUN_143f7bb34(void)

void FUN_143f7bb34(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b50cfd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143f7bb9a FUN_143f7bb9a body=134 status=ok
// SIG undefined FUN_143f7bb9a(void)

void FUN_143f7bb9a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b50cfd0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f7bc11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f7bc2a FUN_143f7bc2a body=269 status=ok
// SIG undefined FUN_143f7bc2a(void)

undefined8 FUN_143f7bc2a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143f7bd31;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143f7bd31;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143f7bd31:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143f7bce5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143f7bd38(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143f7bce5;
    }
  }
  uVar6 = 0;
LAB_143f7bce5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7bd38 FUN_143f7bd38 body=160 status=ok
// SIG undefined FUN_143f7bd38(void)

void FUN_143f7bd38(uint *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auStack_d8 [32];
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 *puStack_a8;
  int iStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  undefined ***pppuStack_88;
  undefined **ppuStack_78;
  longlong lStack_70;
  byte bStack_58;
  ulonglong uStack_48;
  
  if (param_1[1] == 0) {
LAB_143f7bdd4:
    lVar23 = 0;
  }
  else {
    uVar14 = *param_1;
    lVar23 = 0;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
      plVar17 = (longlong *)
                ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
      if ((plVar17 == (longlong *)0x0) ||
         ((*(uint *)(plVar17 + 2) != param_1[1] || ((*(uint *)(plVar17 + 1) & 0x10200000) != 0))))
      goto LAB_143f7bdd4;
      lVar23 = *plVar17;
    }
  }
  if ((((param_1[3] == 0) || (uVar14 = param_1[2], (int)uVar14 < 0)) ||
      (DAT_14c9647dc <= (int)uVar14)) ||
     (((plVar17 = (longlong *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
       plVar17 == (longlong *)0x0 || (*(uint *)(plVar17 + 2) != param_1[3])) ||
      (((*(uint *)(plVar17 + 1) & 0x10200000) != 0 || (lVar2 = *plVar17, lVar2 == 0)))))) {
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((lVar23 == 0) || (lVar24 = *(longlong *)(lVar2 + 0x28), lVar24 == 0)) goto LAB_1414365b9;
  if ((*(byte *)(lVar23 + 0x153) & 0x40) == 0) {
    uVar14 = *(uint *)(lVar23 + 0xc);
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar24 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar24 = 0;
    }
    iVar8 = *(int *)(lVar24 + 0x10);
    if (*(int *)(lVar24 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar18 = DAT_14c964868 + 1;
      bVar26 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar26) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar18);
      }
      LOCK();
      iVar8 = *(int *)(lVar24 + 0x10);
      bVar26 = iVar8 == 0;
      if (bVar26) {
        *(int *)(lVar24 + 0x10) = iVar18;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar26) {
        iVar8 = iVar18;
      }
    }
    if (lVar2 == 0) {
      uVar25 = 0;
      uVar21 = 0;
    }
    else {
      uVar25 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar25 < DAT_14c9647dc) {
        lVar24 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8);
      }
      else {
        lVar24 = 0;
      }
      uVar21 = (ulonglong)*(uint *)(lVar24 + 0x10);
      if (*(uint *)(lVar24 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        uVar19 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar19);
        }
        LOCK();
        uVar5 = *(uint *)(lVar24 + 0x10);
        bVar26 = uVar5 == 0;
        if (bVar26) {
          *(uint *)(lVar24 + 0x10) = uVar19;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar26) {
          uVar5 = uVar19;
        }
        uVar21 = (ulonglong)uVar5;
      }
    }
    uStack_98 = (longlong *)0x0;
    uStack_90._0_4_ = 0;
    FUN_1446efa72(&uStack_98,0,3,0x10);
    plVar17 = uStack_98;
    uStack_90 = CONCAT44(uStack_90._4_4_,3);
    *uStack_98 = (longlong)&PTR_LAB_14a1ca5b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar24 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar24 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar24;
    uStack_98[2] = lVar9;
    *uStack_98 = (longlong)&PTR_FUN_14b50cee0;
    uStack_98[3] = 0;
    if (lVar2 == 0) {
      *(undefined4 *)(uStack_98 + 3) = 0;
      iVar18 = 0;
    }
    else {
      uVar19 = *(uint *)(lVar2 + 0xc);
      *(uint *)(uStack_98 + 3) = uVar19;
      if ((int)uVar19 < DAT_14c9647dc) {
        lVar24 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
      }
      else {
        lVar24 = 0;
      }
      iVar18 = *(int *)(lVar24 + 0x10);
      if (*(int *)(lVar24 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        iVar20 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar20);
        }
        LOCK();
        iVar18 = *(int *)(lVar24 + 0x10);
        bVar26 = iVar18 == 0;
        if (bVar26) {
          *(int *)(lVar24 + 0x10) = iVar20;
          iVar18 = 0;
        }
        UNLOCK();
        if (bVar26) {
          iVar18 = iVar20;
        }
      }
    }
    *(int *)((longlong)plVar17 + 0x1c) = iVar18;
    plVar17[4] = CONCAT44(iVar8,uVar14);
    plVar17[5] = uVar21 << 0x20 | (ulonglong)uVar25;
    if (((int)uStack_90 == 0) || (uStack_98 == (longlong *)0x0)) {
LAB_141437320:
      if ((int)uStack_90 == 0) goto LAB_1414367f6;
      if (uStack_98 != (longlong *)0x0) {
        (**(code **)*uStack_98)(uStack_98,0);
        FUN_1446efa72(&uStack_98,0,0,0x10);
        goto LAB_1414367e9;
      }
    }
    else {
      cVar4 = (**(code **)(*uStack_98 + 0x30))();
      uVar14 = DAT_14cb10988;
      if (cVar4 == '\0') {
        goto LAB_141437320;
      }
      if ((DAT_14cb10994 < 1) &&
         (DAT_14cb10990 = DAT_14cb10990 + -1, DAT_14cb10990 <= (int)DAT_14cb10988)) {
        if (0 < (int)DAT_14cb10988) {
          iVar8 = 0;
          do {
            if (((*(int *)(DAT_14cb10980 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar17 = *(longlong **)(DAT_14cb10980 + (longlong)iVar8 * 0x10),
                plVar17 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar17 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(&DAT_14cb10980,iVar8);
              FUN_14005b248(&DAT_14cb10980);
            }
            else {
              iVar8 = iVar8 + 1;
            }
          } while (iVar8 < (int)DAT_14cb10988);
        }
        DAT_14cb10990 = 2;
        if (2 < (int)(DAT_14cb10988 * 2)) {
          DAT_14cb10990 = DAT_14cb10988 * 2;
        }
        if ((DAT_14cb10990 < (int)uVar14) && (DAT_14cb1098c != DAT_14cb10988)) {
          FUN_14045812c();
        }
      }
      if (((int)uStack_90 != 0) && (uStack_98 != (longlong *)0x0)) {
        (**(code **)(*uStack_98 + 0x38))(uStack_98,&puStack_a8);
      }
      uVar14 = DAT_14cb10988;
      lVar24 = (longlong)(int)DAT_14cb10988;
      DAT_14cb10988 = DAT_14cb10988 + 1;
      if (DAT_14cb1098c < DAT_14cb10988) {
        FUN_1447a71f6(&DAT_14cb10980,uVar14);
      }
      lVar9 = DAT_14cb10980;
      lVar24 = lVar24 * 0x10;
      *(undefined8 *)(DAT_14cb10980 + lVar24) = 0;
      *(undefined4 *)(lVar9 + 8 + lVar24) = 0;
      *(longlong **)(lVar9 + lVar24) = uStack_98;
      uStack_98 = (longlong *)0x0;
      *(int *)(lVar9 + 8 + lVar24) = (int)uStack_90;
LAB_1414367e9:
      uStack_90 = uStack_90 & 0xffffffff00000000;
LAB_1414367f6:
      if (uStack_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar24 = *(longlong *)(lVar2 + 0x28);
  }
  if (*(longlong *)(lVar24 + 0x58) == 0) goto LAB_1414365b9;
  lVar24 = *(longlong *)(lVar24 + 0x50);
  lVar9 = FUN_1448e494c(lVar23);
  if ((lVar24 == 0) || (lVar9 == 0)) goto LAB_1414365b9;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb98d28) && (FUN_144b3d300(&DAT_14cb98d28), DAT_14cb98d28 == -1)) {
    FUN_1446f470e(&DAT_14cb98d20,L"CellSize",1);
    _Init_thread_footer(&DAT_14cb98d28);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb98d38) && (FUN_144b3d300(&DAT_14cb98d38), DAT_14cb98d38 == -1)) {
    FUN_1446f470e(&DAT_14cb98d30,L"MinBounds",1);
    _Init_thread_footer(&DAT_14cb98d38);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb98d48) && (FUN_144b3d300(&DAT_14cb98d48), DAT_14cb98d48 == -1)) {
    FUN_1446f470e(&DAT_14cb98d40,L"MaxBounds",1);
    _Init_thread_footer(&DAT_14cb98d48);
  }
  FUN_14490d20c(lVar9,DAT_14cb98d20,*(undefined4 *)(lVar2 + 0x50));
  uStack_98 = (longlong *)
              CONCAT44((float)*(double *)(lVar2 + 0x38),(float)*(double *)(lVar2 + 0x30));
  uStack_90 = 0;
  FUN_144938f46(lVar9,DAT_14cb98d30,&uStack_98);
  uStack_98 = (longlong *)
              CONCAT44((float)*(double *)(lVar2 + 0x48),(float)*(double *)(lVar2 + 0x40));
  uStack_90 = 0;
  FUN_144938f46(lVar9,DAT_14cb98d40,&uStack_98);
  *(undefined1 *)(lVar24 + 0x15b) = 0;
  *(undefined4 *)(lVar24 + 0x148) = 0;
  *(undefined4 *)(lVar24 + 0x14c) = 0;
  *(undefined4 *)(lVar24 + 0x150) = 0;
  *(undefined4 *)(lVar24 + 0x154) = 0x3f800000;
  *(undefined1 *)(lVar24 + 0xf1) = 0;
  *(byte *)(lVar24 + 0x15c) = *(byte *)(lVar24 + 0x15c) & 0xfd;
  if (*(int *)(lVar24 + 0x140) == *(int *)(lVar2 + 0x54)) {
    iVar18 = *(int *)(lVar24 + 0x144);
    iVar8 = *(int *)(lVar2 + 0x58);
    if (((iVar18 != *(int *)(lVar2 + 0x58)) || (iVar8 = iVar18, *(char *)(lVar24 + 0x160) != '\x03')
        ) || ((*(byte *)(lVar24 + 0x15a) & 1) == 0)) goto LAB_141436c96;
  }
  else {
    iVar8 = *(int *)(lVar2 + 0x58);
LAB_141436c96:
    puStack_b8 = (undefined8 *)CONCAT71(puStack_b8._1_7_,1);
    FUN_14143747c(lVar24,*(int *)(lVar2 + 0x54),iVar8,3);
  }
  if (DAT_14c761df4 != '\0') {
    uVar14 = *(uint *)(lVar23 + 0xc);
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar24 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar24 = 0;
    }
    iVar8 = *(int *)(lVar24 + 0x10);
    if (*(int *)(lVar24 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar18 = DAT_14c964868 + 1;
      bVar26 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar26) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar18);
      }
      LOCK();
      iVar8 = *(int *)(lVar24 + 0x10);
      bVar26 = iVar8 == 0;
      if (bVar26) {
        *(int *)(lVar24 + 0x10) = iVar18;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar26) {
        iVar8 = iVar18;
      }
    }
    if (lVar2 == 0) {
      uVar25 = 0;
      uVar21 = 0;
    }
    else {
      uVar25 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar25 < DAT_14c9647dc) {
        lVar24 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8);
      }
      else {
        lVar24 = 0;
      }
      uVar21 = (ulonglong)*(uint *)(lVar24 + 0x10);
      if (*(uint *)(lVar24 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        uVar19 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar19);
        }
        LOCK();
        uVar5 = *(uint *)(lVar24 + 0x10);
        bVar26 = uVar5 == 0;
        if (bVar26) {
          *(uint *)(lVar24 + 0x10) = uVar19;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar26) {
          uVar5 = uVar19;
        }
        uVar21 = (ulonglong)uVar5;
      }
    }
    if (*(longlong *)(lVar23 + 0x1f0) == 0) {
      puVar10 = (undefined8 *)(lVar23 + 0x458);
    }
    else {
      puVar10 = (undefined8 *)(*(longlong *)(lVar23 + 0x1f0) + 0xf0);
    }
    uVar13 = *puVar10;
    puStack_a8 = (undefined8 *)0x0;
    iStack_a0 = 0;
    FUN_1446efa72(&puStack_a8,0,3,0x10);
    puVar10 = puStack_a8;
    iStack_a0 = 3;
    *puStack_a8 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar24 = DAT_14c758608 + 1;
    lVar23 = DAT_14c758608 + 1;
    if (lVar24 == 0) {
      LOCK();
      UNLOCK();
      lVar24 = DAT_14c758608 + 2;
      lVar23 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar23;
    puStack_a8[2] = lVar24;
    *puStack_a8 = &PTR_FUN_14b50cfd0;
    puStack_a8[3] = 0;
    if (lVar2 == 0) {
      *(undefined4 *)(puStack_a8 + 3) = 0;
      iVar18 = 0;
    }
    else {
      uVar19 = *(uint *)(lVar2 + 0xc);
      *(uint *)(puStack_a8 + 3) = uVar19;
      if ((int)uVar19 < DAT_14c9647dc) {
        lVar23 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
      }
      else {
        lVar23 = 0;
      }
      iVar18 = *(int *)(lVar23 + 0x10);
      if (*(int *)(lVar23 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        iVar20 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar20);
        }
        LOCK();
        iVar18 = *(int *)(lVar23 + 0x10);
        bVar26 = iVar18 == 0;
        if (bVar26) {
          *(int *)(lVar23 + 0x10) = iVar20;
          iVar18 = 0;
        }
        UNLOCK();
        if (bVar26) {
          iVar18 = iVar20;
        }
      }
    }
    *(int *)((longlong)puVar10 + 0x1c) = iVar18;
    puVar10[4] = CONCAT44(iVar8,uVar14);
    puVar10[5] = uVar21 << 0x20 | (ulonglong)uVar25;
    uStack_98 = (longlong *)0x0;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    FUN_14487d8d8(&uStack_98,&puStack_a8);
    bStack_58 = 1;
    FUN_14016fdb0(uVar13,auStack_b0,&uStack_98);
    (*(code *)(&PTR_LAB_14a1c87a0)[bStack_58])(&uStack_98);
    if (iStack_a0 != 0) {
      if (puStack_a8 == (undefined8 *)0x0) goto LAB_1414365b9;
      (**(code **)*puStack_a8)(puStack_a8,0);
      FUN_1446efa72(&puStack_a8,0,0,0x10);
      iStack_a0 = 0;
    }
    if (puStack_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_1414365b9;
  }
  lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar23 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_141436b7b;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_141436b84;
      goto LAB_141436ed4;
    }
  }
  else {
LAB_141436b7b:
    if (iVar8 != 0x10) {
LAB_141436ed4:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar23 + 0xc60), iVar8 == 2))
        goto LAB_141436b84;
        if (iVar8 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_141436b84;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar10 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar12 = (uint *)*puVar10;
        if (puVar12 != (uint *)0x0) goto LAB_141437038;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143f7b785);
          }
          lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar23 + 0x310);
          *(undefined8 *)(lVar23 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar10 = puVar11;
          FUN_140217a48(puVar10);
          puVar12 = (uint *)*puVar10;
LAB_141437038:
          puVar22 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar22 + 0x16);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar25 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar25 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar10;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar10 = puVar12;
            puVar22 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar22 + 0x16);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_1414370b8;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_1414370b8:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar22,0);
        *puVar22 = &PTR_FUN_14b50cfb8;
        puVar22[0x15] = lVar2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar21 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar21 = 5;
        }
        if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
        }
        puVar22[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar22[9] = puVar22;
        puVar22[10] = puVar22;
        lVar23 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar23 == 0) {
          uVar3 = 1;
          if ((char)uVar21 != '\x06') {
            uVar3 = uVar21;
          }
          uVar21 = uVar3;
          uVar13 = 0;
        }
        else {
          if ((char)uVar21 == '\x06') {
            uVar21 = *(ulonglong *)(lVar23 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar23 + 0x30);
        }
        puVar22[0xf] = uVar13;
        puVar22[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar22 + 0x1c) = iVar8;
        if (puVar22 == (undefined8 *)0x0) {
          uStack_98 = (longlong *)CONCAT71(uStack_98._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
          UNLOCK();
          uStack_98 = (longlong *)CONCAT71(uStack_98._1_7_,1);
          FUN_1447439e4(puVar22);
          LOCK();
          piVar1 = (int *)(puVar22 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar22)(puVar22,1);
          }
        }
      }
      else {
        pppuStack_88 = (undefined ***)0x0;
        ppuStack_78 = &PTR_LAB_14b50cf50;
        uStack_98 = (longlong *)&LAB_143f7b74a;
        puStack_b8 = &uStack_98;
        lStack_70 = lVar2;
        FUN_14005a792(&DAT_14ca9a440,L"GbxWorldPainter_UpdateRenderTarget",&DAT_14cb98d70);
        if (uStack_98 != (longlong *)0x0) {
          pppuVar15 = pppuStack_88;
          if (pppuStack_88 == (undefined ***)0x0) {
            pppuVar15 = &ppuStack_78;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_1414365b9;
    }
  }
LAB_141436b84:
  FUN_141438168(lVar2,&DAT_14ca85100);
LAB_1414365b9:
  if ((uStack_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7bdd8 FUN_143f7bdd8 body=405 status=ok
// SIG undefined FUN_143f7bdd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7bdd8(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxWorldPainter",&PTR_FUN_14b50a980,1,0);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWorldPainter",&PTR_FUN_14b50b060,1,&PTR_FUN_14b50b030);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxWorldPainter",&PTR_FUN_14b50b690,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxWorldPainter",&PTR_FUN_14b50cc60,2,0);
  _DAT_14cb98d18 = 0;
  LOCK();
  DAT_14cb98d10 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143f7ad9e);
  local_48 = -0x7ffffffeb4af3350;
  local_34 = 0xf;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14658acee(&local_48);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cb98d50);
  if (cVar1 == '\0') {
    _DAT_14cb98d50 = 0;
    uRam000000014cb98d58 = 0;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb98d68 = 0;
  LOCK();
  DAT_14cb98d60 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143f7b0b2);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7bf70 FUN_143f7bf70 body=57 status=ok
// SIG undefined FUN_143f7bf70(void)

void FUN_143f7bf70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98d98 == 0) {
    uVar1 = FUN_14596eb71();
    DAT_14cb98d98 = FUN_14171c317(FUN_14658afdd,uVar1,L"EModuleInputValueType");
  }
  return;
}



// FUNCTION 143f7bfa9 FUN_143f7bfa9 body=57 status=ok
// SIG undefined FUN_143f7bfa9(void)

void FUN_143f7bfa9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98db0 == 0) {
    uVar1 = FUN_14596eb71();
    DAT_14cb98db0 = FUN_14171c317(FUN_14658b00c,uVar1,L"EFunctionType");
  }
  return;
}



// FUNCTION 143f7bfe2 FUN_143f7bfe2 body=57 status=ok
// SIG undefined FUN_143f7bfe2(void)

void FUN_143f7bfe2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98ea0 == 0) {
    uVar1 = FUN_14596eb71();
    DAT_14cb98ea0 = FUN_14171c317(FUN_14658b282,uVar1,L"ESimTreeProcessingOrder");
  }
  return;
}



// FUNCTION 143f7c01b FUN_143f7c01b body=69 status=ok
// SIG undefined FUN_143f7c01b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7c01b(void)

{
  _DAT_14cb98eb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7c05d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb98ec0,1);
  return;
}



// FUNCTION 143f7c060 FUN_143f7c060 body=69 status=ok
// SIG undefined FUN_143f7c060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7c060(void)

{
  _DAT_14cb98ed0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7c0a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb98ed8,1);
  return;
}



// FUNCTION 143f7c0a6 FUN_143f7c0a6 body=1097 status=ok
// SIG undefined FUN_143f7c0a6(void)

undefined8 FUN_143f7c0a6(longlong *param_1,float param_2,longlong *param_3)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  double *pdVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_d8 [36];
  undefined4 local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = *(uint *)(param_1 + 1);
  local_b4 = 0;
  FUN_1448158c6(param_3,&local_b4,uVar2);
  if (param_2 <= 1e-08 || uVar2 == 0) {
LAB_143f7c471:
    uVar5 = 0;
  }
  else {
    if (uVar2 == 2) {
      pdVar4 = (double *)*param_1;
      fVar11 = (float)(pdVar4[3] - (double)(float)*pdVar4);
      fVar12 = (float)(pdVar4[4] - (double)(float)pdVar4[1]);
      fVar14 = SQRT(fVar11 * fVar11 + fVar12 * fVar12);
      if (1e-08 < fVar14) {
        fVar14 = 1.0 / fVar14;
        *(float *)*param_3 =
             -param_2 * (fVar11 * fVar14 * (float)*pdVar4 + fVar12 * fVar14 * (float)pdVar4[1]) *
             fVar14;
        ((float *)*param_3)[1] = param_2 - *(float *)*param_3;
        pfVar1 = (float *)*param_3;
        if ((0.0 <= *pfVar1) &&
           (uVar5 = CONCAT71((int7)((ulonglong)pfVar1 >> 8),1), 0.0 <= pfVar1[1]))
        goto LAB_143f7c48e;
        goto LAB_143f7c471;
      }
      param_2 = param_2 * 0.5;
      *(float *)(*param_3 + 4) = param_2;
    }
    else if (uVar2 != 1) {
      fVar16 = (float)uVar2;
      uVar6 = 0;
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar14 = 0.0;
      fVar15 = 0.0;
      fVar20 = 0.0;
      do {
        fVar17 = (float)*(double *)(*param_1 + (longlong)(int)uVar6 * 0x18);
        fVar19 = (float)*(double *)(*param_1 + 8 + (longlong)(int)uVar6 * 0x18);
        fVar11 = fVar11 + fVar17;
        fVar12 = fVar12 + fVar19;
        fVar14 = fVar14 + fVar17 * fVar17;
        fVar15 = fVar15 + fVar19 * fVar19;
        fVar20 = fVar20 + fVar17 * fVar19;
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
      fVar17 = (-fVar14 * fVar12 * fVar12 +
               -fVar15 * fVar11 * fVar11 +
               fVar14 * fVar15 * fVar16 + (fVar20 + fVar20) * fVar11 * fVar12) - fVar20 * fVar16;
      uVar5 = 0;
      if (1e-08 < ABS(fVar17)) {
        fVar18 = (1.0 / fVar16) * param_2;
        fVar17 = 1.0 / fVar17;
        fVar23 = (fVar11 * fVar12 + fVar16 * -fVar20) * fVar17;
        fVar24 = (fVar12 * fVar20 + -fVar15 * fVar11) * fVar17;
        fVar22 = (fVar11 * fVar20 + -fVar14 * fVar12) * fVar17;
        fVar21 = fVar18 + fVar18;
        fVar19 = fVar11 * fVar21;
        fVar13 = fVar12 * fVar21;
        fVar21 = fVar21 * fVar16 - (param_2 + param_2);
        lVar8 = *param_3;
        iVar7 = 0;
        do {
          lVar3 = *param_1;
          lVar9 = (longlong)iVar7;
          *(float *)(lVar8 + lVar9 * 4) =
               ((float)*(double *)(lVar3 + 8 + lVar9 * 0x18) *
                (fVar22 * fVar21 +
                fVar23 * fVar19 + (fVar14 * fVar16 - fVar11 * fVar11) * fVar17 * fVar13) +
                (float)*(double *)(lVar3 + lVar9 * 0x18) *
                (fVar24 * fVar21 +
                (fVar15 * fVar16 - fVar12 * fVar12) * fVar17 * fVar19 + fVar13 * fVar23) +
               fVar21 * (fVar14 * fVar15 + fVar20 * -fVar20) * fVar17 +
               fVar19 * fVar24 + fVar13 * fVar22) * -0.5 + fVar18;
          lVar8 = *param_3;
          pfVar1 = (float *)(lVar8 + lVar9 * 4);
          uVar5 = CONCAT71((int7)((ulonglong)lVar3 >> 8),0.0 < *pfVar1 || *pfVar1 == 0.0);
          if (!NAN(*pfVar1) && (0.0 >= *pfVar1 && *pfVar1 != 0.0)) break;
          bVar10 = uVar2 - 1 != iVar7;
          iVar7 = iVar7 + 1;
        } while (bVar10);
      }
      goto LAB_143f7c48e;
    }
    pfVar1 = (float *)*param_3;
    *pfVar1 = param_2;
    uVar5 = CONCAT71((int7)((ulonglong)pfVar1 >> 8),1);
  }
LAB_143f7c48e:
  if ((local_b0 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 143f7c4f0 FUN_143f7c4f0 body=307 status=ok
// SIG undefined FUN_143f7c4f0(void)

void FUN_143f7c4f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 0x31);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)(param_2 + 0x32);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)(param_2 + 0x33);
  *(undefined1 *)((longlong)param_1 + 0xb) = *(undefined1 *)(param_2 + 0x34);
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)(param_2 + 0x35);
  *(undefined1 *)((longlong)param_1 + 0xd) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x50);
  *(float *)((longlong)param_1 + 0x1c) = (float)*(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x44);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x1c);
  param_1[6] = 0;
  *(float *)(param_1 + 7) =
       *(float *)(param_2 + 0x18) * 0.5 * *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  lVar1 = DAT_14c8464e8;
  param_1[9] = DAT_14c8464e0;
  param_1[10] = lVar1;
  param_1[0xb] = DAT_14c8464f0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0xe] = 0;
  lVar1 = DAT_14c8464e8;
  param_1[0xf] = DAT_14c8464e0;
  param_1[0x10] = lVar1;
  param_1[0x11] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x12) = 0x437a0000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  lVar1 = DAT_14c8464e8;
  param_1[0x19] = DAT_14c8464e0;
  param_1[0x1a] = lVar1;
  param_1[0x1b] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 143f7c64e FUN_143f7c64e body=857 status=ok
// SIG undefined FUN_143f7c64e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7c64e(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **local_60;
  undefined8 local_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = &PTR_FUN_14b50de80;
  local_58 = 2;
  local_68 = 3;
  FUN_14282b410(L"/Script/ChaosVehiclesCore",&PTR_FUN_14b50df40,2,&PTR_FUN_14b50dec0);
  local_48 = "Handbrake";
  local_40 = 9;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb98e38 = (ulonglong)uVar1;
  local_48 = "Throttle";
  local_40 = 8;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb98e40 = (ulonglong)uVar1;
  local_48 = "Steering";
  local_40 = 8;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb98e48 = (ulonglong)uVar1;
  local_48 = "Brake";
  local_40 = 5;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb98e50 = (ulonglong)uVar1;
  local_48 = "Clutch";
  local_40 = 6;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb98e58 = (ulonglong)uVar1;
  local_48 = "Boost";
  local_40 = 5;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb98e60 = (ulonglong)uVar1;
  local_48 = "Reverse";
  local_40 = 7;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb98e68 = (ulonglong)uVar1;
  local_48 = "ChangeUp";
  local_40 = 8;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb98e70 = (ulonglong)uVar1;
  local_48 = "ChangeDown";
  local_40 = 10;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb98e78 = (ulonglong)uVar1;
  local_48 = "Pitch";
  local_40 = 5;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb98e80 = (ulonglong)uVar1;
  local_48 = "Roll";
  local_40 = 4;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb98e88 = (ulonglong)uVar1;
  local_48 = "Yaw";
  local_40 = 3;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb98e90 = (ulonglong)uVar1;
  FUN_14098d3d2(FUN_143f7bfe2,L"/Script/ChaosVehiclesCore",L"ESimTreeProcessingOrder",&DAT_14cb98e98
               );
  local_48 = (char *)0x800000014b50e060;
  local_34 = 0x11;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14658b2b2(&local_48);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb98eb8,L"p.ModularVehicle.NetworkData.Enable",&DAT_14c763b0c,
                L"Enable/Disable additional module network data.");
  atexit(FUN_143f7c01b);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb98ed0,L"p.ModularVehicle.DisableAllSimulationAfterDestruction.Enable",
                &DAT_14cb98ec8,
                L"Enable/Disable whole vehicle simulation after destruction has occured.");
  atexit(FUN_143f7c060);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7c9a8 FUN_143f7c9a8 body=147 status=ok
// SIG undefined FUN_143f7c9a8(void)

void FUN_143f7c9a8(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/ChaosVehiclesEngine",&PTR_FUN_14b50ec30,1,0);
  local_28 = 0x800000014b50eccc;
  local_14 = 0x13;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14658b508(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7ca3c FUN_143f7ca3c body=55 status=ok
// SIG undefined FUN_143f7ca3c(void)

void FUN_143f7ca3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99038 == 0) {
    uVar1 = FUN_140ef4b00();
    DAT_14cb99038 = FUN_14171c317(FUN_14658bc95,uVar1,L"EInputFunctionType");
  }
  return;
}



// FUNCTION 143f7ca73 FUN_143f7ca73 body=55 status=ok
// SIG undefined FUN_143f7ca73(void)

void FUN_143f7ca73(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99068 == 0) {
    uVar1 = FUN_140ef4b00();
    DAT_14cb99068 = FUN_14171c317(FUN_14658bd57,uVar1,L"EVehicleAerofoilType");
  }
  return;
}



// FUNCTION 143f7caaa FUN_143f7caaa body=55 status=ok
// SIG undefined FUN_143f7caaa(void)

void FUN_143f7caaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99080 == 0) {
    uVar1 = FUN_140ef4b00();
    DAT_14cb99080 = FUN_14171c317(FUN_14658bd86,uVar1,L"EVehicleThrustType");
  }
  return;
}



// FUNCTION 143f7cae1 FUN_143f7cae1 body=55 status=ok
// SIG undefined FUN_143f7cae1(void)

void FUN_143f7cae1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99218 == 0) {
    uVar1 = FUN_140ef4b00();
    DAT_14cb99218 = FUN_14171c317(FUN_14658c5b5,uVar1,L"ESweepShape");
  }
  return;
}



// FUNCTION 143f7cb18 FUN_143f7cb18 body=55 status=ok
// SIG undefined FUN_143f7cb18(void)

void FUN_143f7cb18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99230 == 0) {
    uVar1 = FUN_140ef4b00();
    DAT_14cb99230 = FUN_14171c317(FUN_14658c5e4,uVar1,L"ESweepType");
  }
  return;
}



// FUNCTION 143f7cb4f FUN_143f7cb4f body=55 status=ok
// SIG undefined FUN_143f7cb4f(void)

void FUN_143f7cb4f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99248 == 0) {
    uVar1 = FUN_140ef4b00();
    DAT_14cb99248 = FUN_14171c317(FUN_14658c613,uVar1,L"EAxleType");
  }
  return;
}



// FUNCTION 143f7cb86 FUN_143f7cb86 body=55 status=ok
// SIG undefined FUN_143f7cb86(void)

void FUN_143f7cb86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99260 == 0) {
    uVar1 = FUN_140ef4b00();
    DAT_14cb99260 = FUN_14171c317(FUN_14658c644,uVar1,L"ETorqueCombineMethod");
  }
  return;
}



// FUNCTION 143f7cc82 FUN_143f7cc82 body=406 status=ok
// SIG undefined FUN_143f7cc82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7cc82(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb98f14);
  if (cVar1 == '\0') {
    _DAT_14cb98f14 = 0;
    uRam000000014cb98f1c = 0;
  }
  if (local_40 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_40 = &DAT_14a19662d;
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/ChaosVehicles",0,0,&PTR_FUN_14b50efb0);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/ChaosVehicles",0,0,&PTR_FUN_14b50f090);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 5;
  FUN_14282b410(L"/Script/ChaosVehicles",0,0,&PTR_FUN_14b50fcf0);
  FUN_1446f470e(&DAT_14cb99148,L"ServerUpdateState",1);
  local_50 = &PTR_FUN_14b5146e0;
  uStack_48 = 3;
  local_58 = 7;
  FUN_14282b410(L"/Script/ChaosVehicles",&PTR_FUN_14b514860,1,&PTR_FUN_14b514740);
  local_50 = &PTR_FUN_14b516510;
  uStack_48 = 4;
  local_58 = 0;
  FUN_14282b410(L"/Script/ChaosVehicles",&PTR_FUN_14b516590,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7ce1c FUN_143f7ce1c body=55 status=ok
// SIG undefined FUN_143f7ce1c(void)

void FUN_143f7ce1c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb992d8 == 0) {
    uVar1 = FUN_140ef4b00();
    DAT_14cb992d8 = FUN_14171c317(FUN_14658cab0,uVar1,L"EVehicleDifferential");
  }
  return;
}



// FUNCTION 143f7ce53 FUN_143f7ce53 body=55 status=ok
// SIG undefined FUN_143f7ce53(void)

void FUN_143f7ce53(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99350 == 0) {
    uVar1 = FUN_140ef4b00();
    DAT_14cb99350 = FUN_14171c317(FUN_14658cd3a,uVar1,L"ESteeringType");
  }
  return;
}



// FUNCTION 143f7ce8a FUN_143f7ce8a body=1241 status=ok
// SIG undefined FUN_143f7ce8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7ce8a(longlong param_1,longlong *param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  int *piVar15;
  undefined8 *puVar16;
  int *piVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  longlong *local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  int local_15c [27];
  ulonglong local_f0;
  
  auVar9 = _DAT_1499387d0;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    local_1e0 = *(longlong *)(param_1 + 0xf8);
    local_1e8 = param_2 + 4;
    lVar18 = param_2[6];
    lVar12 = lVar18 + 0x10;
    piVar15 = (int *)(*(longlong *)(param_1 + 0xe8) + 0x10);
    lVar20 = (longlong)*(int *)(param_1 + 0xf0) * 0x14;
    dVar5 = (double)DAT_1499387d0;
    dVar6 = DAT_1499387d0._8_8_;
    local_1d8 = lVar12;
    local_1d0 = lVar18;
    do {
      uVar11 = piVar15[-1];
      if ((~uVar11 & 0x7fffffff) != 0) {
        lVar13 = *(longlong *)(lVar18 + 0x20);
        if (*(longlong *)(lVar18 + 0x20) == 0) {
          lVar13 = lVar12;
        }
        if (((*(uint *)(lVar13 + (ulonglong)(uVar11 >> 3 & 0x1ffc)) >> (uVar11 & 0x1f) & 1) != 0) &&
           (piVar15[-4] < *(int *)(local_1e0 + 0x8b0))) {
          piVar14 = piVar15;
          if ((int)uVar11 < 0) {
            uVar11 = (int)(uVar11 * 2) >> 1;
            iVar19 = -1;
            if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)(lVar18 + 0x88))) {
              piVar14 = (int *)((ulonglong)uVar11 * 4 + *(longlong *)(lVar18 + 0x80));
              goto LAB_143f7cfc7;
            }
          }
          else {
LAB_143f7cfc7:
            iVar19 = *piVar14;
          }
          if (*(char *)(param_2[7] + (longlong)iVar19) == '\0') {
            FUN_1447d5d8e(local_1e8,iVar19);
          }
          plVar10 = local_1e8;
          puVar16 = (undefined8 *)((longlong)iVar19 * 0x60 + param_2[4]);
          piVar14 = (int *)local_1c8;
          for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
            *(undefined8 *)piVar14 = *puVar16;
            puVar16 = puVar16 + 1;
            piVar14 = piVar14 + 2;
          }
          local_1f8 = 1;
          FUN_14045e902(*param_2 + 0x10,local_1e8,local_1c8,iVar19);
          lVar12 = local_1e0;
          auVar3 = *(undefined1 (*) [16])
                    (*(longlong *)(local_1e0 + 0x8a8) + 8 + (longlong)piVar15[-4] * 0x38);
          dVar2 = *(double *)
                   (*(longlong *)(local_1e0 + 0x8a8) + 0x18 + (longlong)piVar15[-4] * 0x38);
          auVar28 = divpd(auVar3,auVar9);
          auVar29._8_8_ = 0;
          auVar29._0_8_ = dVar2;
          auVar29 = divpd(auVar29,auVar9);
          auVar28 = roundpd(auVar28,auVar28,3);
          auVar29 = roundpd(auVar29,auVar29,3);
          dVar7 = (auVar3._0_8_ - auVar28._0_8_ * dVar5) * 0.008726646259971648;
          dVar25 = (auVar3._8_8_ - auVar28._8_8_ * dVar6) * 0.008726646259971648;
          dVar2 = (dVar2 - auVar29._0_8_ * dVar5) * 0.008726646259971648;
          dVar8 = (0.0 - auVar29._8_8_ * dVar6) * 0.008726646259971648;
          dVar21 = sin(dVar7);
          dVar22 = sin(dVar25);
          dVar23 = sin(dVar2);
          sin(dVar8);
          dVar24 = cos(dVar7);
          dVar25 = cos(dVar25);
          dVar26 = cos(dVar2);
          cos(dVar8);
          dVar2 = -(dVar25 * dVar21 * dVar23) + dVar22 * dVar24 * dVar26;
          dVar7 = dVar22 * dVar21 * dVar23 + dVar25 * dVar24 * dVar26;
          dVar27 = dVar21 * dVar22 * dVar26 - dVar24 * dVar25 * dVar23;
          dVar22 = -(dVar21 * dVar25 * dVar26) - dVar24 * dVar22 * dVar23;
          dVar23 = local_1b8 * dVar22;
          dVar21 = dStack_1b0 * dVar27;
          dVar25 = (double)local_1c8._8_8_ * dVar2;
          dVar24 = local_1b8 * dVar2;
          dVar8 = (double)local_1c8._0_8_ * dVar2 * 1.0 +
                  dStack_1b0 * dVar22 + local_1b8 * dVar27 * -1.0 + (double)local_1c8._8_8_ * dVar7;
          local_1b8 = dStack_1b0 * dVar2 * 1.0 +
                      ((dVar27 * (double)local_1c8._8_8_ * 1.0 + dVar7 * local_1b8) -
                      dVar22 * (double)local_1c8._0_8_);
          dStack_1b0 = dVar24 * -1.0 +
                       ((dVar27 * (double)local_1c8._0_8_ * -1.0 + dVar7 * dStack_1b0) -
                       dVar22 * (double)local_1c8._8_8_);
          local_1c8._8_4_ = SUB84(dVar8,0);
          local_1c8._0_8_ = dVar25 * -1.0 + dVar23 + dVar21 * 1.0 + (double)local_1c8._0_8_ * dVar7;
          local_1c8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          pdVar1 = (double *)(*(longlong *)(lVar12 + 0x8a8) + 0x20 + (longlong)piVar15[-4] * 0x38);
          local_1a8 = *pdVar1 + local_1a8;
          dStack_1a0 = pdVar1[1] + dStack_1a0;
          local_198 = *(double *)
                       (*(longlong *)(lVar12 + 0x8a8) + 0x30 + (longlong)piVar15[-4] * 0x38) +
                      local_198;
          dStack_190 = dStack_190 + 0.0;
          local_1f8 = 1;
          FUN_14045df82(*param_2 + 0x10,plVar10,local_1c8,iVar19);
          piVar14 = (int *)local_1c8;
          piVar17 = local_15c + 3;
          for (lVar12 = 0x18; lVar12 != 0; lVar12 = lVar12 + -1) {
            *piVar17 = *piVar14;
            piVar14 = piVar14 + 1;
            piVar17 = piVar17 + 1;
          }
          iVar4 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
            FUN_1400c28ea(param_3,iVar4);
          }
          piVar14 = (int *)(*param_3 + (longlong)iVar4 * 0x70);
          *piVar14 = iVar19;
          piVar17 = local_15c;
          for (lVar13 = 0x1b; piVar14 = piVar14 + 1, lVar18 = local_1d0, lVar12 = local_1d8,
              lVar13 != 0; lVar13 = lVar13 + -1) {
            *piVar14 = *piVar17;
            piVar17 = piVar17 + 1;
          }
        }
      }
      piVar15 = piVar15 + 5;
      lVar20 = lVar20 + -0x14;
    } while (lVar20 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f7d364 FUN_143f7d364 body=1241 status=ok
// SIG undefined FUN_143f7d364(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7d364(longlong param_1,longlong *param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  int *piVar15;
  undefined8 *puVar16;
  int *piVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  longlong *local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  int local_15c [27];
  ulonglong local_f0;
  
  auVar9 = _DAT_1499387d0;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    local_1e0 = *(longlong *)(param_1 + 0xe8);
    local_1e8 = param_2 + 4;
    lVar18 = param_2[6];
    lVar12 = lVar18 + 0x10;
    piVar15 = (int *)(*(longlong *)(param_1 + 0xd8) + 0x10);
    lVar20 = (longlong)*(int *)(param_1 + 0xe0) * 0x14;
    dVar5 = (double)DAT_1499387d0;
    dVar6 = DAT_1499387d0._8_8_;
    local_1d8 = lVar12;
    local_1d0 = lVar18;
    do {
      uVar11 = piVar15[-1];
      if ((~uVar11 & 0x7fffffff) != 0) {
        lVar13 = *(longlong *)(lVar18 + 0x20);
        if (*(longlong *)(lVar18 + 0x20) == 0) {
          lVar13 = lVar12;
        }
        if (((*(uint *)(lVar13 + (ulonglong)(uVar11 >> 3 & 0x1ffc)) >> (uVar11 & 0x1f) & 1) != 0) &&
           (piVar15[-4] < *(int *)(local_1e0 + 0x8b0))) {
          piVar14 = piVar15;
          if ((int)uVar11 < 0) {
            uVar11 = (int)(uVar11 * 2) >> 1;
            iVar19 = -1;
            if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)(lVar18 + 0x88))) {
              piVar14 = (int *)((ulonglong)uVar11 * 4 + *(longlong *)(lVar18 + 0x80));
              goto LAB_143f7d4a1;
            }
          }
          else {
LAB_143f7d4a1:
            iVar19 = *piVar14;
          }
          if (*(char *)(param_2[7] + (longlong)iVar19) == '\0') {
            FUN_1447d5d8e(local_1e8,iVar19);
          }
          plVar10 = local_1e8;
          puVar16 = (undefined8 *)((longlong)iVar19 * 0x60 + param_2[4]);
          piVar14 = (int *)local_1c8;
          for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
            *(undefined8 *)piVar14 = *puVar16;
            puVar16 = puVar16 + 1;
            piVar14 = piVar14 + 2;
          }
          local_1f8 = 1;
          FUN_14045e902(*param_2 + 0x10,local_1e8,local_1c8,iVar19);
          lVar12 = local_1e0;
          auVar3 = *(undefined1 (*) [16])
                    (*(longlong *)(local_1e0 + 0x8a8) + 8 + (longlong)piVar15[-4] * 0x38);
          dVar2 = *(double *)
                   (*(longlong *)(local_1e0 + 0x8a8) + 0x18 + (longlong)piVar15[-4] * 0x38);
          auVar28 = divpd(auVar3,auVar9);
          auVar29._8_8_ = 0;
          auVar29._0_8_ = dVar2;
          auVar29 = divpd(auVar29,auVar9);
          auVar28 = roundpd(auVar28,auVar28,3);
          auVar29 = roundpd(auVar29,auVar29,3);
          dVar7 = (auVar3._0_8_ - auVar28._0_8_ * dVar5) * 0.008726646259971648;
          dVar25 = (auVar3._8_8_ - auVar28._8_8_ * dVar6) * 0.008726646259971648;
          dVar2 = (dVar2 - auVar29._0_8_ * dVar5) * 0.008726646259971648;
          dVar8 = (0.0 - auVar29._8_8_ * dVar6) * 0.008726646259971648;
          dVar21 = sin(dVar7);
          dVar22 = sin(dVar25);
          dVar23 = sin(dVar2);
          sin(dVar8);
          dVar24 = cos(dVar7);
          dVar25 = cos(dVar25);
          dVar26 = cos(dVar2);
          cos(dVar8);
          dVar2 = -(dVar25 * dVar21 * dVar23) + dVar22 * dVar24 * dVar26;
          dVar7 = dVar22 * dVar21 * dVar23 + dVar25 * dVar24 * dVar26;
          dVar27 = dVar21 * dVar22 * dVar26 - dVar24 * dVar25 * dVar23;
          dVar22 = -(dVar21 * dVar25 * dVar26) - dVar24 * dVar22 * dVar23;
          dVar23 = local_1b8 * dVar22;
          dVar21 = dStack_1b0 * dVar27;
          dVar25 = (double)local_1c8._8_8_ * dVar2;
          dVar24 = local_1b8 * dVar2;
          dVar8 = (double)local_1c8._0_8_ * dVar2 * 1.0 +
                  dStack_1b0 * dVar22 + local_1b8 * dVar27 * -1.0 + (double)local_1c8._8_8_ * dVar7;
          local_1b8 = dStack_1b0 * dVar2 * 1.0 +
                      ((dVar27 * (double)local_1c8._8_8_ * 1.0 + dVar7 * local_1b8) -
                      dVar22 * (double)local_1c8._0_8_);
          dStack_1b0 = dVar24 * -1.0 +
                       ((dVar27 * (double)local_1c8._0_8_ * -1.0 + dVar7 * dStack_1b0) -
                       dVar22 * (double)local_1c8._8_8_);
          local_1c8._8_4_ = SUB84(dVar8,0);
          local_1c8._0_8_ = dVar25 * -1.0 + dVar23 + dVar21 * 1.0 + (double)local_1c8._0_8_ * dVar7;
          local_1c8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          pdVar1 = (double *)(*(longlong *)(lVar12 + 0x8a8) + 0x20 + (longlong)piVar15[-4] * 0x38);
          local_1a8 = *pdVar1 + local_1a8;
          dStack_1a0 = pdVar1[1] + dStack_1a0;
          local_198 = *(double *)
                       (*(longlong *)(lVar12 + 0x8a8) + 0x30 + (longlong)piVar15[-4] * 0x38) +
                      local_198;
          dStack_190 = dStack_190 + 0.0;
          local_1f8 = 1;
          FUN_14045df82(*param_2 + 0x10,plVar10,local_1c8,iVar19);
          piVar14 = (int *)local_1c8;
          piVar17 = local_15c + 3;
          for (lVar12 = 0x18; lVar12 != 0; lVar12 = lVar12 + -1) {
            *piVar17 = *piVar14;
            piVar14 = piVar14 + 1;
            piVar17 = piVar17 + 1;
          }
          iVar4 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
            FUN_1400c28ea(param_3,iVar4);
          }
          piVar14 = (int *)(*param_3 + (longlong)iVar4 * 0x70);
          *piVar14 = iVar19;
          piVar17 = local_15c;
          for (lVar13 = 0x1b; piVar14 = piVar14 + 1, lVar18 = local_1d0, lVar12 = local_1d8,
              lVar13 != 0; lVar13 = lVar13 + -1) {
            *piVar14 = *piVar17;
            piVar17 = piVar17 + 1;
          }
        }
      }
      piVar15 = piVar15 + 5;
      lVar20 = lVar20 + -0x14;
    } while (lVar20 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f7d83e FUN_143f7d83e body=41 status=ok
// SIG undefined FUN_143f7d83e(void)

void FUN_143f7d83e(void)

{
  DAT_14cb995b8 = 0;
  if (DAT_14cb995b0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68b60();
  return;
}



// FUNCTION 143f7d868 FUN_143f7d868 body=1645 status=ok
// SIG undefined FUN_143f7d868(void)

void FUN_143f7d868(undefined8 *param_1,float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  double *pdVar15;
  double *pdVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  undefined1 auStack_118 [32];
  double *local_f8;
  float local_f0;
  longlong *local_e8;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  double *local_c0;
  float local_b8 [2];
  longlong *local_b0;
  undefined1 *local_a8;
  float *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = FUN_14496b220(param_1[5]);
  FUN_14017ec16(lVar5);
  iVar3 = *(int *)(param_1 + 2);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  local_d8 = (longlong *)(lVar5 + 0x10);
  if (*(int *)(lVar5 + 0x1c) < iVar3) {
    FUN_1418c1506(local_d8);
  }
  *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(param_1 + 6);
  lVar6 = FUN_140636f1e(*param_1);
  if (lVar6 == 0) {
    *(undefined4 *)(lVar5 + 0x20) = 0;
    iVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(lVar6 + 0xc);
    *(uint *)(lVar5 + 0x20) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar17 = iVar3 == 0;
      if (bVar17) {
        *(int *)(lVar6 + 0x10) = iVar13;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar3 = iVar13;
      }
    }
  }
  local_c8 = param_1 + 1;
  *(int *)(lVar5 + 0x24) = iVar3;
  plVar1 = param_1 + 7;
  while( true ) {
    lVar6 = param_1[5];
    lVar12 = **(longlong **)(lVar6 + 0x98);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar6 + 0xa0) = *(undefined8 *)(lVar12 + 8);
      lVar14 = *(longlong *)(lVar6 + 0x98);
      *(longlong *)(lVar6 + 0x98) = lVar12;
      *(undefined8 *)(lVar12 + 8) = 0;
      if (lVar14 != 0) {
        FUN_1400020a8();
      }
    }
    lVar12 = *(longlong *)(lVar6 + 0xa0);
    *(undefined8 *)(lVar6 + 0xa0) = 0;
    if (lVar12 == 0) break;
    iVar3 = *(int *)(param_1 + 8);
    *(uint *)(param_1 + 8) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0x44) < iVar3 + 1U) {
      FUN_1418c1688(plVar1,iVar3);
    }
    lVar14 = *plVar1;
    *(longlong *)(lVar14 + (longlong)iVar3 * 0x10) = lVar12;
    *(longlong *)(lVar14 + 8 + (longlong)iVar3 * 0x10) = lVar6;
  }
  lVar6 = *(longlong *)(param_1[5] + 0x18);
  dVar18 = *(double *)(lVar6 + 0x70) + *(double *)(lVar6 + 0x230);
  if (((DAT_14c993850 == 0) && (0.0 <= *(double *)(lVar6 + 0x228))) && (DAT_14c75f150 != 0)) {
    dVar18 = dVar18 - *(double *)(lVar6 + 0x228) * (double)*(float *)(lVar6 + 0x25c);
  }
  uVar4 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar4) {
    puVar10 = (undefined8 *)*plVar1;
    uVar11 = 0;
    puVar7 = puVar10;
    do {
      if ((double)(float)((double)param_2 + dVar18) < *(double *)*puVar7) goto LAB_143f7da56;
      uVar11 = uVar11 + 1;
      puVar7 = puVar7 + 2;
    } while (uVar4 != uVar11);
    uVar11 = (ulonglong)uVar4;
LAB_143f7da56:
    if ((int)uVar11 != 0) {
      uVar8 = uVar11 & 0xffffffff;
      if (puVar10 + uVar8 * 2 + -2 != param_1 + 9) {
        if (param_1[9] != 0) {
          (**(code **)(*(longlong *)param_1[10] + 0x10))();
        }
        param_1[9] = puVar10[uVar8 * 2 + -2];
        puVar10[uVar8 * 2 + -2] = 0;
        param_1[10] = puVar10[uVar8 * 2 + -1];
        puVar10[uVar8 * 2 + -1] = 0;
        uVar4 = *(uint *)(param_1 + 8);
      }
      goto LAB_143f7daa7;
    }
  }
  uVar11 = 0;
LAB_143f7daa7:
  local_98 = 0;
  uStack_90 = 0;
  if ((int)uVar11 < (int)uVar4) {
    lVar6 = (uVar11 & 0xffffffff) << 4;
    do {
      uVar8 = uStack_90;
      lVar12 = *plVar1;
      lVar14 = (longlong)(int)uStack_90;
      uVar4 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
      if (uStack_90._4_4_ < uVar4) {
        FUN_1418c1688(&local_98,uVar8 & 0xffffffff);
      }
      *(undefined8 *)(local_98 + lVar14 * 0x10) = *(undefined8 *)(lVar12 + lVar6);
      *(undefined8 *)(local_98 + 8 + lVar14 * 0x10) = *(undefined8 *)(lVar12 + 8 + lVar6);
      *(undefined8 *)(lVar12 + lVar6) = 0;
      ((undefined8 *)(lVar12 + lVar6))[1] = 0;
      uVar4 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar4;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar4 < *(int *)(param_1 + 8));
  }
  if (plVar1 == &local_98) {
    uVar11 = uStack_90 & 0xffffffff;
  }
  else {
    FUN_140ee70ed(*plVar1);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    param_1[7] = local_98;
    local_98 = 0;
    *(int *)(param_1 + 8) = (int)uStack_90;
    *(uint *)((longlong)param_1 + 0x44) = uStack_90._4_4_;
    uStack_90 = 0;
    uVar11 = 0;
  }
  FUN_140ee70ed(local_98,uVar11);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  plVar9 = (longlong *)0x0;
  pdVar16 = (double *)0x0;
LAB_143f7db9a:
  pdVar15 = pdVar16;
  plVar2 = (longlong *)param_1[5];
  local_d0 = plVar9;
  dVar19 = (double)FUN_1429e72e0(plVar2[3]);
  pdVar16 = (double *)plVar2[0x14];
  if (pdVar16 == (double *)0x0) {
    lVar6 = *(longlong *)plVar2[0x13];
    if (lVar6 != 0) {
      plVar2[0x14] = *(longlong *)(lVar6 + 8);
      lVar12 = plVar2[0x13];
      plVar2[0x13] = lVar6;
      *(undefined8 *)(lVar6 + 8) = 0;
      if (lVar12 != 0) {
        FUN_1400020a8();
      }
    }
    pdVar16 = (double *)plVar2[0x14];
    if (pdVar16 == (double *)0x0) goto LAB_143f7dc2d;
  }
  if (dVar19 < *pdVar16) goto LAB_143f7dc2d;
  plVar2[0x14] = 0;
  plVar9 = plVar2;
  if (pdVar15 != (double *)0x0) {
    (**(code **)(*local_d0 + 0x10))(local_d0,pdVar15);
  }
  goto LAB_143f7db9a;
LAB_143f7dc2d:
  lVar6 = FUN_140636f1e();
  iVar3 = *(int *)(param_1 + 2);
  if (lVar6 != 0) {
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      lVar6 = *local_c8;
      lVar12 = 0;
      local_c0 = pdVar15;
      do {
        local_f0 = 0.0;
        if ((*(int *)(param_1 + 8) < 1) ||
           (local_f8 = *(double **)*plVar1, local_f8 == (double *)0x0)) {
          local_f8 = (double *)0x0;
        }
        else if ((double *)param_1[9] != (double *)0x0) {
          dVar19 = *(double *)param_1[9];
          fVar20 = (float)(*local_f8 - dVar19);
          if (1e-08 < fVar20) {
            local_f0 = (float)(((double)(float)((double)param_2 + dVar18) - dVar19) / (double)fVar20
                              );
          }
        }
        uVar11 = *(ulonglong *)(lVar6 + lVar12);
        if ((uVar11 >> 0x20 == 0) || (uVar4 = (uint)uVar11, (int)uVar4 < 0)) {
LAB_143f7dd82:
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)0x0;
          if ((int)uVar4 < DAT_14c9647dc) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8)));
            if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != (int)(uVar11 >> 0x20)))
               || ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_143f7dd82;
            plVar9 = (longlong *)*puVar10;
          }
        }
        local_e8 = (longlong *)CONCAT44(local_e8._4_4_,*(undefined4 *)(param_1 + 6));
        (**(code **)(*plVar9 + 0x5f0))(plVar9,&local_98,*(undefined4 *)(lVar5 + 0x18),param_1[9]);
        iVar13 = *(int *)(lVar5 + 0x18);
        *(uint *)(lVar5 + 0x18) = iVar13 + 1U;
        if (*(uint *)(lVar5 + 0x1c) < iVar13 + 1U) {
          FUN_148ad7d76(local_d8,iVar13);
        }
        *(longlong *)(*local_d8 + (longlong)iVar13 * 8) = local_98;
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar3 * 8 != lVar12);
      iVar3 = *(int *)(param_1 + 2);
      pdVar15 = local_c0;
    }
  }
  local_e8 = &local_98;
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  local_a0 = local_b8;
  local_b0 = local_c8;
  local_f0 = (float)(DAT_14c763b25 ^ 1);
  local_98 = 0;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  local_a8 = &LAB_143f7ea0a;
  local_b8[0] = param_2;
  FUN_1427ae281(L"ParallelFor Task",iVar3,1);
  if (pdVar15 != (double *)0x0) {
    (**(code **)(*local_d0 + 0x10))(local_d0,pdVar15);
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f7ded6 FUN_143f7ded6 body=646 status=ok
// SIG undefined FUN_143f7ded6(void)

void FUN_143f7ded6(longlong param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  size_t _Size;
  double *pdVar12;
  undefined1 auStack_b8 [40];
  code *local_90;
  longlong *local_88;
  longlong local_80;
  float local_78;
  float local_74;
  longlong local_70;
  double *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0x28);
  if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x24) != 0)) &&
      (uVar3 = *(uint *)(lVar5 + 0x20), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) {
    plVar10 = (longlong *)
              ((ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((plVar10 != (longlong *)0x0) && ((int)plVar10[2] == *(int *)(lVar5 + 0x24))) {
      dVar1 = *(double *)(param_1 + 0x38);
      dVar2 = *(double *)(param_1 + 0x30);
      uVar3 = *(uint *)(lVar5 + 0x18);
      if ((((*(uint *)(plVar10 + 1) & 0x10200000) == 0) &&
          ((uVar3 != 0 && (lVar11 = *plVar10, lVar11 != 0)))) &&
         (*(longlong *)(param_1 + 0x18) != 0)) {
        pdVar12 = *(double **)(param_1 + 0x20);
        if (pdVar12 == (double *)0x0) {
          lVar6 = **(longlong **)(param_1 + 0x78);
          if (lVar6 == 0) {
            puVar9 = (undefined8 *)FUN_14001cc68(0x20);
            puVar9[2] = 0;
            puVar9[3] = 0;
            *puVar9 = 0xbff0000000000000;
            puVar9[1] = 0;
            puVar9[2] = 0;
            *(undefined4 *)(puVar9 + 3) = 0xffffffff;
            iVar4 = *(int *)(param_1 + 0x88);
            uVar8 = iVar4 + 1;
            *(uint *)(param_1 + 0x88) = uVar8;
            if (*(uint *)(param_1 + 0x8c) < uVar8) {
              FUN_14658daee(param_1 + 0x80);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x80) + (longlong)iVar4 * 8) = puVar9;
            pdVar12 = *(double **)
                       (*(longlong *)(param_1 + 0x80) +
                       (longlong)(*(int *)(param_1 + 0x88) + -1) * 8);
          }
          else {
            pdVar12 = *(double **)(lVar6 + 8);
            lVar7 = *(longlong *)(param_1 + 0x78);
            *(longlong *)(param_1 + 0x78) = lVar6;
            *(undefined8 *)(lVar6 + 8) = 0;
            if (lVar7 != 0) {
              FUN_1400020a8();
            }
          }
          *pdVar12 = dVar2;
          *(double **)(param_1 + 0x20) = pdVar12;
        }
        iVar4 = *(int *)(pdVar12 + 2);
        *(uint *)(pdVar12 + 2) = iVar4 + uVar3;
        if ((uint)(*(int *)((longlong)pdVar12 + 0x14) - iVar4) < uVar3) {
          FUN_14658db74(pdVar12 + 1);
        }
        _Size = (longlong)(int)uVar3 << 3;
        memset((void *)((longlong)iVar4 * 8 + (longlong)pdVar12[1]),0,_Size);
        *(undefined4 *)(pdVar12 + 3) = *(undefined4 *)(lVar5 + 0x28);
        local_88 = &local_80;
        local_90 = FUN_143f7ea80;
        local_80 = lVar11;
        local_78 = (float)dVar1;
        local_74 = (float)dVar2;
        local_70 = lVar5 + 0x10;
        local_68 = pdVar12 + 1;
        FUN_1400bd65e(*(undefined4 *)(pdVar12 + 2),&local_90,
                      CONCAT71((int7)(_Size >> 8),DAT_14c763b25) ^ 1);
        iVar4 = *(int *)(lVar5 + 0x18);
        if ((longlong)iVar4 != 0) {
          lVar5 = *(longlong *)(lVar5 + 0x10);
          lVar11 = 0;
          do {
            plVar10 = *(longlong **)(lVar5 + lVar11);
            if (((plVar10 != (longlong *)0x0) && (plVar10[3] != 0)) &&
               (*(longlong *)(plVar10[3] + 0x48) != 0)) {
              (**(code **)(*plVar10 + 8))();
            }
            lVar11 = lVar11 + 8;
          } while ((longlong)iVar4 * 8 != lVar11);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7e15d FUN_143f7e15d body=69 status=ok
// SIG undefined FUN_143f7e15d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e15d(void)

{
  _DAT_14cb995e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e19f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb995e8,1);
  return;
}



// FUNCTION 143f7e1a2 FUN_143f7e1a2 body=69 status=ok
// SIG undefined FUN_143f7e1a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e1a2(void)

{
  _DAT_14cb995f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb995f8,1);
  return;
}



// FUNCTION 143f7e1e7 FUN_143f7e1e7 body=69 status=ok
// SIG undefined FUN_143f7e1e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e1e7(void)

{
  _DAT_14cb99600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e229. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99608,1);
  return;
}



// FUNCTION 143f7e22c FUN_143f7e22c body=69 status=ok
// SIG undefined FUN_143f7e22c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e22c(void)

{
  _DAT_14cb99610 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e26e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99618,1);
  return;
}



// FUNCTION 143f7e271 FUN_143f7e271 body=69 status=ok
// SIG undefined FUN_143f7e271(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e271(void)

{
  _DAT_14cb99620 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e2b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99628,1);
  return;
}



// FUNCTION 143f7e2b6 FUN_143f7e2b6 body=69 status=ok
// SIG undefined FUN_143f7e2b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e2b6(void)

{
  _DAT_14cb99630 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99638,1);
  return;
}



// FUNCTION 143f7e2fb FUN_143f7e2fb body=69 status=ok
// SIG undefined FUN_143f7e2fb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e2fb(void)

{
  _DAT_14cb99640 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e33d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99648,1);
  return;
}



// FUNCTION 143f7e340 FUN_143f7e340 body=69 status=ok
// SIG undefined FUN_143f7e340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e340(void)

{
  _DAT_14cb99650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99658,1);
  return;
}



// FUNCTION 143f7e385 FUN_143f7e385 body=69 status=ok
// SIG undefined FUN_143f7e385(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e385(void)

{
  _DAT_14cb99660 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e3c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99668,1);
  return;
}



// FUNCTION 143f7e3ca FUN_143f7e3ca body=69 status=ok
// SIG undefined FUN_143f7e3ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e3ca(void)

{
  _DAT_14cb99670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99678,1);
  return;
}



// FUNCTION 143f7e40f FUN_143f7e40f body=69 status=ok
// SIG undefined FUN_143f7e40f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e40f(void)

{
  _DAT_14cb99680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99688,1);
  return;
}



// FUNCTION 143f7e454 FUN_143f7e454 body=69 status=ok
// SIG undefined FUN_143f7e454(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e454(void)

{
  _DAT_14cb99690 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99698,1);
  return;
}



// FUNCTION 143f7e499 FUN_143f7e499 body=69 status=ok
// SIG undefined FUN_143f7e499(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e499(void)

{
  _DAT_14cb996a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e4db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb996a8,1);
  return;
}



// FUNCTION 143f7e4de FUN_143f7e4de body=69 status=ok
// SIG undefined FUN_143f7e4de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e4de(void)

{
  _DAT_14cb996b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb996b8,1);
  return;
}



// FUNCTION 143f7e523 FUN_143f7e523 body=69 status=ok
// SIG undefined FUN_143f7e523(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e523(void)

{
  _DAT_14cb996c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb996c8,1);
  return;
}



// FUNCTION 143f7e568 FUN_143f7e568 body=69 status=ok
// SIG undefined FUN_143f7e568(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e568(void)

{
  _DAT_14cb996d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e5aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb996d8,1);
  return;
}



// FUNCTION 143f7e5ad FUN_143f7e5ad body=69 status=ok
// SIG undefined FUN_143f7e5ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e5ad(void)

{
  _DAT_14cb996e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e5ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb996e8,1);
  return;
}



// FUNCTION 143f7e5f2 FUN_143f7e5f2 body=69 status=ok
// SIG undefined FUN_143f7e5f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7e5f2(void)

{
  _DAT_14cb996f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7e634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb996f8,1);
  return;
}



// FUNCTION 143f7e672 FUN_143f7e672 body=123 status=ok
// SIG undefined FUN_143f7e672(void)

ulonglong FUN_143f7e672(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x18);
  FUN_1400021e4(&local_18,local_28);
  if (*(longlong *)(param_1 + 0x110) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(longlong *)(param_1 + 0x118) != 0);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7e6ee FUN_143f7e6ee body=524 status=ok
// SIG undefined FUN_143f7e6ee(void)

void FUN_143f7e6ee(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  code **ppcVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  byte local_34;
  undefined2 local_33;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((param_1[0x130] != 0) && (param_1[0x22] != 0)) &&
     (lVar1 = *(longlong *)(param_1[0x22] + 0xa8), lVar1 != 0)) {
    if (DAT_14caf64b8 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_142b4754c;
      local_78 = &LAB_147c45ce0;
      local_80 = &LAB_1463f1ff4;
      local_88 = &DAT_149e063b2;
      local_90 = 0x4000000000;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
        DAT_14caf64b8 + 0x30)) {
      (**(code **)(*param_1 + 0x620))(param_1,param_2);
    }
  }
  if ((char)param_1[0x137] == '\0') {
    ppcVar2 = &local_50;
    local_33 = 1;
    local_31 = 0;
    local_48 = *(undefined4 *)((longlong)param_1 + 0x3ac);
    local_50 = *(code **)((longlong)param_1 + 0x3a4);
    local_38 = *(undefined4 *)((longlong)param_1 + 0x3bc);
    local_40 = *(undefined4 *)((longlong)param_1 + 0x3b4);
    local_44 = (undefined4)param_1[0x76];
    local_3c = (undefined4)param_1[0x77];
    local_34 = *(byte *)((longlong)param_1 + 0x31c) & 1;
  }
  else {
    ppcVar2 = (code **)(param_1[0x132] + 0x1f8);
  }
  (**(code **)(*param_1 + 0x628))(param_1,ppcVar2);
  if ((int)param_1[0x62] != 0) {
    FUN_1406cc378(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7e8fc FUN_143f7e8fc body=25 status=ok
// SIG undefined FUN_143f7e8fc(void)

void FUN_143f7e8fc(longlong param_1,float param_2)

{
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= -1.0) {
    param_2 = -1.0;
  }
  *(float *)(param_1 + 0x390) = param_2;
  return;
}



// FUNCTION 143f7e916 FUN_143f7e916 body=25 status=ok
// SIG undefined FUN_143f7e916(void)

void FUN_143f7e916(longlong param_1,float param_2)

{
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= -1.0) {
    param_2 = -1.0;
  }
  *(float *)(param_1 + 0x394) = param_2;
  return;
}



// FUNCTION 143f7e930 FUN_143f7e930 body=25 status=ok
// SIG undefined FUN_143f7e930(void)

void FUN_143f7e930(longlong param_1,float param_2)

{
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= -1.0) {
    param_2 = -1.0;
  }
  *(float *)(param_1 + 0x38c) = param_2;
  return;
}



// FUNCTION 143f7e94a FUN_143f7e94a body=48 status=ok
// SIG undefined FUN_143f7e94a(void)

longlong FUN_143f7e94a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140cbb210(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f7ea80 FUN_143f7ea80 body=260 status=ok
// SIG undefined FUN_143f7ea80(void)

void FUN_143f7ea80(undefined8 *param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 **ppuVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 *local_40;
  undefined8 *local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *param_2;
  puVar2 = *(undefined8 **)(*(longlong *)param_1[2] + (longlong)iVar1 * 8);
  lVar3 = puVar2[3];
  if ((((lVar3 != 0) && (plVar4 = *(longlong **)(lVar3 + 0x48), plVar4 != (longlong *)0x0)) &&
      (**(char **)(lVar3 + 0x20) == '\0')) &&
     ((1 < *(byte *)((longlong)plVar4 + 0xc) &&
      (*(char *)(*(longlong *)(*plVar4 + 0x2c0) + 0xb + (longlong)(int)plVar4[1] * 0x10) == '\x04'))
     )) {
    local_40 = &local_21;
    local_21 = 0;
    local_48 = *(undefined4 *)((longlong)param_1 + 0xc);
    (**(code **)*puVar2)(puVar2,&local_30,*param_1,*(undefined4 *)(param_1 + 1));
    ppuVar5 = (undefined8 **)((longlong)iVar1 * 8 + *(longlong *)param_1[3]);
    if (ppuVar5 != &local_30) {
      puVar2 = *ppuVar5;
      *ppuVar5 = local_30;
      local_30 = (undefined8 *)0x0;
      if (puVar2 == (undefined8 *)0x0) goto LAB_143f7eb66;
      (**(code **)*puVar2)(puVar2,1);
    }
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
LAB_143f7eb66:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7ec62 FUN_143f7ec62 body=479 status=ok
// SIG undefined FUN_143f7ec62(void)

void FUN_143f7ec62(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 **local_c0;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 uStack_90;
  undefined8 **local_68;
  double dStack_60;
  double local_58;
  undefined8 **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *param_1;
  fVar1 = *(float *)(lVar2 + 0x1e4);
  if (fVar1 <= 0.0) {
    dVar4 = 1.0;
  }
  else {
    local_68 = &local_48;
    local_48 = (undefined8 **)((ulonglong)local_48 & 0xffffffff00000000);
    local_c0 = &local_68;
    local_c8 = &LAB_14362051c;
    FUN_1448e6002(*(longlong *)param_1[1] + 0x138);
    dVar4 = (double)(fVar1 / local_48._0_4_);
  }
  local_48 = &local_68;
  local_68 = DAT_14c8464e0;
  dStack_60 = DAT_14c8464e8;
  local_58 = DAT_14c8464f0;
  local_c0 = &local_48;
  local_c8 = &LAB_143620548;
  FUN_1448e6002(*(longlong *)param_1[1] + 0x138);
  local_68 = (undefined8 **)(*(double *)(lVar2 + 0x220) * dVar4 * (double)local_68);
  dStack_60 = *(double *)(lVar2 + 0x228) * dVar4 * dStack_60;
  local_58 = dVar4 * *(double *)(lVar2 + 0x230) * local_58;
  if (*(char *)(lVar2 + 0x1e8) == '\x01') {
    FUN_146ef14ee(&local_c8,param_2);
    lVar3 = *(longlong *)param_1[1];
    local_98 = *(double *)(lVar2 + 0x200) + *(double *)(lVar3 + 0xd8);
    dVar4 = *(double *)(lVar2 + 0x1f8) + *(double *)(lVar3 + 0xd0);
    local_a8._8_4_ = SUB84(dVar4,0);
    local_a8._0_8_ = *(double *)(lVar2 + 0x1f0) + *(double *)(lVar3 + 200);
    local_a8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    uStack_90 = 0;
    FUN_140497070(param_2,&local_c8);
  }
  FUN_141731c00(param_2,&local_68);
  FUN_14048fe7c(param_2,*(undefined4 *)(lVar2 + 0x1e4));
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7ee42 FUN_143f7ee42 body=288 status=ok
// SIG undefined FUN_143f7ee42(void)

void FUN_143f7ee42(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar1 = (int *)(param_1 + 0x2c);
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,piVar1,4);
    }
    else {
      FUN_14572512c(param_2,piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  iVar2 = *piVar1;
  iVar4 = FUN_148ad955c();
  if (iVar2 <= iVar4) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_148ad9206(param_1 + 0x10,*(undefined4 *)(param_1 + 0x2c),1);
    }
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x10);
      lVar7 = (longlong)*(int *)(param_1 + 0x18) * 0x48;
      do {
        local_39 = 0;
        lVar5 = FUN_14658b92a();
        if ((*(byte *)(lVar5 + 0xb1) & 4) != 0) {
          local_48 = lVar6;
          (**(code **)(**(longlong **)(lVar5 + 0xb8) + 0x40))
                    (*(longlong **)(lVar5 + 0xb8),param_2,param_3,&local_39);
        }
        lVar6 = lVar6 + 0x48;
        lVar7 = lVar7 + -0x48;
      } while (lVar7 != 0);
    }
    if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 143f7ef7e FUN_143f7ef7e body=293 status=ok
// SIG undefined FUN_143f7ef7e(void)

void FUN_143f7ef7e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar1 = (int *)(param_1 + 0x2c);
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,piVar1,4);
    }
    else {
      FUN_14572512c(param_2,piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  iVar2 = *piVar1;
  iVar4 = FUN_148ada7b4();
  if (iVar2 <= iVar4) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_148ada3f6(param_1 + 0x10,*(undefined4 *)(param_1 + 0x2c),1);
    }
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x10);
      lVar7 = (longlong)*(int *)(param_1 + 0x18) * 0xa8;
      do {
        local_39 = 0;
        lVar5 = FUN_14658b9bc();
        if ((*(byte *)(lVar5 + 0xb1) & 4) != 0) {
          local_48 = lVar6;
          (**(code **)(**(longlong **)(lVar5 + 0xb8) + 0x40))
                    (*(longlong **)(lVar5 + 0xb8),param_2,param_3,&local_39);
        }
        lVar6 = lVar6 + 0xa8;
        lVar7 = lVar7 + -0xa8;
      } while (lVar7 != 0);
    }
    if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 143f7f0b9 FUN_143f7f0b9 body=1297 status=ok
// SIG undefined FUN_143f7f0b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f0b9(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  ppuStack_50 = &PTR_FUN_14b51c680;
  uStack_48 = 2;
  local_58 = 6;
  FUN_14282b410(L"/Script/ChaosVehicles",&PTR_FUN_14b51c7b0,1,&PTR_FUN_14b51c6c0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/ChaosVehicles",0,0,&PTR_FUN_14b51cc50);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb99510);
  if (cVar1 == '\0') {
    _DAT_14cb99510 = 0;
    uRam000000014cb99518 = 0;
  }
  if (local_40 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_40 = &DAT_14a19662d;
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/ChaosVehicles",&PTR_FUN_14b51cf50,1,&PTR_FUN_14b51cf20);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ChaosVehicles",&PTR_FUN_14b51d0b0,1,0);
  DAT_14cb99590 = 0;
  DAT_14cb99598 = 0;
  DAT_14cb99570 = 0;
  _DAT_14cb99578 = 0;
  _DAT_14cb9959c = 0xffffffff00000080;
  DAT_14cb995a4 = 0;
  DAT_14cb995b0 = 0;
  DAT_14cb995b8 = 0;
  atexit(FUN_143f7d83e);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb995e0,L"p.Vehicle.ShowCOM",&DAT_14c763b10,
                L"Enable/Disable Center Of Mass Debug Visualisation.");
  atexit(FUN_143f7e15d);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb995f0,L"p.Vehicle.ShowModelOrigin",&DAT_14c763b11,
                L"Enable/Disable Model Origin Visualisation.");
  atexit(FUN_143f7e1a2);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb99600,L"p.Vehicle.ShowAllForces",&DAT_14c763b12,
                L"Enable/Disable Force Visualisation.");
  atexit(FUN_143f7e1e7);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb99610,L"p.Vehicle.ShowAerofoilForces",&DAT_14c763b13,
                L"Enable/Disable Aerofoil Force Visualisation.");
  atexit(FUN_143f7e22c);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb99620,L"p.Vehicle.ShowAerofoilSurface",&DAT_14c763b14,
                L"Enable/Disable a very approximate visualisation of where the Aerofoil surface is located and its orientation."
               );
  atexit(FUN_143f7e271);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb99630,L"p.Vehicle.DisableTorqueControl",&DAT_14c763b15,
                L"Enable/Disable Direct Torque Control.");
  atexit(FUN_143f7e2b6);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb99640,L"p.Vehicle.DisableStabilizeControl",&DAT_14c763b16,
                L"Enable/Disable Position Stabilization Control.");
  atexit(FUN_143f7e2fb);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb99650,L"p.Vehicle.DisableAerodynamics",&DAT_14c763b17,
                L"Enable/Disable Aerodynamic Forces Drag/Downforce.");
  atexit(FUN_143f7e340);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb99660,L"p.Vehicle.DisableAerofoils",&DAT_14c763b18,
                L"Enable/Disable Aerofoil Forces.");
  atexit(FUN_143f7e385);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb99670,L"p.Vehicle.DisableThrusters",&DAT_14c763b19,
                L"Enable/Disable Thruster Forces.");
  atexit(FUN_143f7e3ca);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb99680,L"p.Vehicle.BatchQueries",&DAT_14c763b1a,
                L"Enable/Disable Batching Of Suspension Raycasts.");
  atexit(FUN_143f7e40f);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb99690,L"p.Vehicle.CacheTraceOverlap",&DAT_14c763b1b,
                L"Enable/Disable Caching Of Suspension Trace Overlap Test Optimization (only valid when BatchQueries enabled)."
               );
  atexit(FUN_143f7e454);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb996a0,L"p.Vehicle.SetForceDebugScaling",&DAT_14c763b1c,
                L"Set Scaling For Force Visualisation.");
  atexit(FUN_143f7e499);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb996b0,L"p.Vehicle.SleepCounterThreshold",&DAT_14c763b20,
                L"Set The Sleep Counter Iteration Threshold.");
  atexit(FUN_143f7e4de);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb996c0,L"p.Vehicle.DisableVehicleSleep",&DAT_14c763b24,
                L"Disable Vehicle Agressive Sleeping.");
  atexit(FUN_143f7e523);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb996d0,L"p.Vehicle.SetMaxMPH",&DAT_14c763b28,
                L"Set a top speed in MPH (affects all vehicles).");
  atexit(FUN_143f7e568);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb996e0,L"p.Vehicle.EnableMultithreading",&DAT_14c763b25,
                L"Enable multi-threading of vehicle updates.");
  atexit(FUN_143f7e5ad);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb996f0,L"p.Vehicle.ControlInputWakeTolerance",&DAT_14c763b2c,
                L"Set the control input wake tolerance.");
  atexit(FUN_143f7e5f2);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f7f5cc FUN_143f7f5cc body=63 status=ok
// SIG undefined FUN_143f7f5cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f5cc(void)

{
  _DAT_14cb99730 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cb99739 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cb99730);
    DAT_14cb99739 = '\0';
  }
  return;
}



// FUNCTION 143f7f60b FUN_143f7f60b body=69 status=ok
// SIG undefined FUN_143f7f60b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f60b(void)

{
  _DAT_14cb99760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7f64d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99768,1);
  return;
}



// FUNCTION 143f7f650 FUN_143f7f650 body=69 status=ok
// SIG undefined FUN_143f7f650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f650(void)

{
  _DAT_14cb99770 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7f692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99778,1);
  return;
}



// FUNCTION 143f7f695 FUN_143f7f695 body=69 status=ok
// SIG undefined FUN_143f7f695(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f695(void)

{
  _DAT_14cb99780 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7f6d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99788,1);
  return;
}



// FUNCTION 143f7f6da FUN_143f7f6da body=69 status=ok
// SIG undefined FUN_143f7f6da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f6da(void)

{
  _DAT_14cb99790 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7f71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99798,1);
  return;
}



// FUNCTION 143f7f71f FUN_143f7f71f body=69 status=ok
// SIG undefined FUN_143f7f71f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f71f(void)

{
  _DAT_14cb997a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7f761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb997a8,1);
  return;
}



// FUNCTION 143f7f764 FUN_143f7f764 body=69 status=ok
// SIG undefined FUN_143f7f764(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f764(void)

{
  _DAT_14cb997b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7f7a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb997b8,1);
  return;
}



// FUNCTION 143f7f7a9 FUN_143f7f7a9 body=69 status=ok
// SIG undefined FUN_143f7f7a9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f7a9(void)

{
  _DAT_14cb997c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7f7eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb997c8,1);
  return;
}



// FUNCTION 143f7f7ee FUN_143f7f7ee body=69 status=ok
// SIG undefined FUN_143f7f7ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f7ee(void)

{
  _DAT_14cb997d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7f830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb997d8,1);
  return;
}



// FUNCTION 143f7f833 FUN_143f7f833 body=69 status=ok
// SIG undefined FUN_143f7f833(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f833(void)

{
  _DAT_14cb997e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7f875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb997e8,1);
  return;
}



// FUNCTION 143f7f878 FUN_143f7f878 body=69 status=ok
// SIG undefined FUN_143f7f878(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f878(void)

{
  _DAT_14cb997f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7f8ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb997f8,1);
  return;
}



// FUNCTION 143f7f8bd FUN_143f7f8bd body=69 status=ok
// SIG undefined FUN_143f7f8bd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f8bd(void)

{
  _DAT_14cb99800 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7f8ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99808,1);
  return;
}



// FUNCTION 143f7f902 FUN_143f7f902 body=69 status=ok
// SIG undefined FUN_143f7f902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f902(void)

{
  _DAT_14cb99810 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7f944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99818,1);
  return;
}



// FUNCTION 143f7f947 FUN_143f7f947 body=69 status=ok
// SIG undefined FUN_143f7f947(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f947(void)

{
  _DAT_14cb99820 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7f989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99828,1);
  return;
}



// FUNCTION 143f7f98c FUN_143f7f98c body=69 status=ok
// SIG undefined FUN_143f7f98c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f98c(void)

{
  _DAT_14cb99830 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7f9ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99838,1);
  return;
}



// FUNCTION 143f7f9d1 FUN_143f7f9d1 body=69 status=ok
// SIG undefined FUN_143f7f9d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7f9d1(void)

{
  _DAT_14cb99840 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7fa13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99848,1);
  return;
}



// FUNCTION 143f7fa16 FUN_143f7fa16 body=69 status=ok
// SIG undefined FUN_143f7fa16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7fa16(void)

{
  _DAT_14cb99850 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7fa58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99858,1);
  return;
}



// FUNCTION 143f7fa5b FUN_143f7fa5b body=69 status=ok
// SIG undefined FUN_143f7fa5b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7fa5b(void)

{
  _DAT_14cb99860 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7fa9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99868,1);
  return;
}



// FUNCTION 143f7faa0 FUN_143f7faa0 body=69 status=ok
// SIG undefined FUN_143f7faa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7faa0(void)

{
  _DAT_14cb99870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7fae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99878,1);
  return;
}



// FUNCTION 143f7fae5 FUN_143f7fae5 body=69 status=ok
// SIG undefined FUN_143f7fae5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7fae5(void)

{
  _DAT_14cb99880 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7fb27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99888,1);
  return;
}



// FUNCTION 143f7fb2a FUN_143f7fb2a body=69 status=ok
// SIG undefined FUN_143f7fb2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7fb2a(void)

{
  _DAT_14cb99890 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f7fb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99898,1);
  return;
}



// FUNCTION 143f7fc86 FUN_143f7fc86 body=577 status=ok
// SIG undefined FUN_143f7fc86(void)

void FUN_143f7fc86(longlong param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar7 = *(longlong *)(param_1 + 0x1a0);
  if (0 < *(int *)(lVar7 + 0x10)) {
    plVar3 = *(longlong **)(lVar7 + 0x18);
    if ((longlong)*(int *)(lVar7 + 0x40) < 1) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = 0.0;
      lVar9 = 0;
      do {
        if (*(char *)(*(longlong *)(lVar7 + 0x38) + 0xb + lVar9) == '\x01') {
          fVar17 = ABS((*(float *)(*(longlong *)(lVar7 + 0x38) + 0x30 + lVar9) * 30.0) / 3.1415927);
        }
        lVar9 = lVar9 + 0xe8;
      } while ((longlong)*(int *)(lVar7 + 0x40) * 0xe8 - lVar9 != 0);
    }
    plVar4 = *(longlong **)(lVar7 + 8);
    fVar11 = (float)FUN_148acb5dc(plVar3,(int)plVar3[1]);
    fVar12 = (float)FUN_148acb5dc(plVar3,(int)plVar3[1]);
    iVar2 = (int)plVar3[1];
    if (iVar2 == 0) {
      *(undefined1 *)((longlong)plVar4 + 0x25) = 1;
    }
    else {
      bVar10 = iVar2 != *(int *)((longlong)plVar3 + 0xc);
      *(bool *)((longlong)plVar4 + 0x25) = bVar10;
      if (!bVar10) {
        fVar15 = (float)*(ushort *)(*plVar4 + 0x14);
        fVar16 = (float)*(ushort *)(*plVar4 + 0x16);
        fVar14 = ABS(fVar12 * fVar17);
        if (fVar15 <= ABS(fVar12 * fVar17)) {
          fVar14 = fVar15;
        }
        if (fVar14 <= fVar16) {
          fVar14 = fVar16;
        }
        *(float *)(plVar4 + 2) = (fVar14 * 3.1415927) / 30.0;
      }
    }
    FUN_148acb0c0(plVar4,param_2);
    uVar13 = 0;
    if (*(char *)((longlong)plVar4 + 0x24) == '\x01') {
      uVar13 = *(undefined4 *)((longlong)plVar4 + 0x14);
    }
    *(undefined4 *)((longlong)plVar3 + 0x14) = uVar13;
    if (*(char *)(param_1 + 0x195) == '\0') {
      bVar6 = FUN_148adb1a0(param_1);
      bVar6 = bVar6 ^ 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)(plVar3 + 3) = bVar6;
    FUN_148acb5dc(plVar3,(int)plVar3[1]);
    FUN_148acb624(plVar3);
    fVar12 = 0.0;
    if (*(char *)((longlong)plVar4 + 0x24) == '\x01') {
      fVar14 = *(float *)((longlong)plVar4 + 0xc);
      fVar12 = (float)FUN_148acb000(plVar4,*(undefined4 *)((longlong)plVar4 + 0x14),1);
      fVar12 = fVar12 * fVar14;
    }
    fVar14 = (float)FUN_148acb5dc(plVar3);
    lVar7 = *(longlong *)(param_1 + 0x1a0);
    if (0 < *(int *)(lVar7 + 0x40)) {
      fVar15 = *(float *)(*plVar3 + 0x30);
      uVar1 = *(ushort *)(*plVar4 + 0x14);
      lVar9 = 0;
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + lVar9);
        fVar16 = 0.0;
        if (*(char *)(lVar5 + 0x34) == '\x01') {
          fVar16 = *(float *)(lVar5 + 0x38) *
                   (float)(~-(uint)((float)uVar1 < ABS(fVar17 * fVar11)) &
                          (uint)(fVar12 * fVar14 * fVar15 * 10000.0));
        }
        *(float *)(*(longlong *)(lVar7 + 0x38) + 0x3c + lVar9) = fVar16;
        lVar8 = lVar8 + 1;
        lVar7 = *(longlong *)(param_1 + 0x1a0);
        lVar9 = lVar9 + 0xe8;
      } while (lVar8 < *(int *)(lVar7 + 0x40));
    }
  }
  return;
}



// FUNCTION 143f7fec8 FUN_143f7fec8 body=3321 status=ok
// SIG undefined FUN_143f7fec8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f7fec8(longlong *param_1,int param_2)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  undefined8 uVar22;
  longlong lVar23;
  undefined1 *puVar24;
  double *pdVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  undefined1 auStack_3a8 [32];
  undefined8 *local_388;
  undefined8 *local_380;
  undefined8 *local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  undefined4 local_354;
  undefined8 local_350;
  double local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double dStack_308;
  double local_300;
  undefined4 local_294;
  byte local_28b;
  undefined4 local_268;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  longlong *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  undefined2 local_15f;
  undefined1 local_15d;
  undefined4 local_15c;
  undefined1 local_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined2 local_148;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_110 [16];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  plVar4 = (longlong *)param_1[0x23];
  if (plVar4 != (longlong *)0x0) {
    lVar27 = (longlong)param_2;
    lVar28 = lVar27 * 0x28 + param_1[0x139];
    lVar21 = (**(code **)(*plVar4 + 0x7b8))(plVar4,0,1,0xffffffff);
    if (lVar21 != 0) {
      plVar4 = (longlong *)param_1[0x23];
      if (plVar4 == (longlong *)0x0) {
        uVar22 = 0;
      }
      else {
        uVar22 = (**(code **)(*plVar4 + 0x7b8))(plVar4,0,1,0xffffffff);
      }
      FUN_1447f067c(uVar22,&local_1d8,1,0);
      lVar21 = FUN_140fda668(param_1,param_2);
      if (lVar21 != 0) {
        lVar23 = lVar27 * 0x88;
        if (*(char *)(param_1[0x196] + 0x81 + lVar23) == '\x01') {
          if (*(char *)(param_1[0x196] + lVar23) == '\x01') {
            (**(code **)(*param_1 + 0x6a0))(param_1,&local_338,lVar28,param_2);
            cVar2 = *(char *)(lVar21 + 0x160);
            lVar28 = param_1[0x196] + 8;
            if (cVar2 == '\x01') {
              lVar28 = param_1[0x196] + 0x20;
            }
            pdVar25 = (double *)(lVar28 + lVar23);
            local_1a8 = pdVar25[2] - local_1a8;
            dStack_1d0 = -dStack_1d0;
            dVar31 = (pdVar25[1] - dStack_1b0) * -local_1d8 - dStack_1d0 * (*pdVar25 - local_1b8);
            dVar33 = local_1a8 * dStack_1d0 - local_1c8 * -1.0 * (pdVar25[1] - dStack_1b0);
            dVar30 = (*pdVar25 - local_1b8) * local_1c8 * -1.0 + local_1a8 * local_1d8;
            dVar30 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_188)) &
                             (ulonglong)(1.0 / local_188)) *
                     (dStack_1c0 * 1.0 * (dVar31 + dVar31) + local_1a8 +
                     ((dVar30 + dVar30) * -local_1d8 - dStack_1d0 * (dVar33 + dVar33)));
            fVar1 = *(float *)(*(longlong *)(param_1[0x130] + 8) + 0x10 + lVar27 * 0x98);
            lVar28 = param_1[0x198];
            if (*(char *)(lVar28 + 4 + lVar27 * 8) == '\x01') {
              fVar35 = *(float *)(lVar28 + lVar27 * 8);
              dVar30 = dVar30 - local_328;
              if (cVar2 != '\x01') {
                dVar30 = dVar30 + (double)fVar1;
              }
              fVar35 = ((float)dVar30 - fVar35) * ((float)*(int *)(lVar21 + 0x158) / -11.0 + 1.0) +
                       fVar35;
            }
            else {
              dVar30 = dVar30 - local_328;
              if (cVar2 != '\x01') {
                dVar30 = dVar30 + (double)fVar1;
              }
              fVar35 = (float)dVar30;
            }
            if (*(float *)(lVar21 + 0x140) <= fVar35) {
              fVar35 = *(float *)(lVar21 + 0x140);
            }
            if (fVar35 <= -*(float *)(lVar21 + 0x144)) {
              fVar35 = -*(float *)(lVar21 + 0x144);
            }
          }
          else {
            fVar35 = -*(float *)(lVar21 + 0x144);
            lVar28 = param_1[0x198];
          }
          *(undefined1 *)(lVar28 + 4 + lVar27 * 8) = 1;
          *(float *)(param_1[0x198] + lVar27 * 8) = fVar35;
        }
        else if ((*(char *)((longlong)param_1 + 0x976) != '\x01') ||
                (*(char *)(param_1[0x198] + 4 + lVar27 * 8) != '\x01')) {
          local_354 = (**(code **)(*param_1 + 0x6a8))(param_1);
          local_1e8 = _DAT_14cad0ee0;
          lStack_1e0 = uRam000000014cad0ee8;
          local_1f8 = _DAT_14cad0ed0;
          uStack_1f0 = _DAT_14cad0ed8;
          lVar23 = 0;
          do {
            bVar5 = *(char *)((longlong)&local_1f8 + lVar23) == '\x02';
            bVar6 = *(char *)((longlong)&local_1f8 + lVar23 + 1) == '\x02';
            bVar7 = *(char *)((longlong)&local_1f8 + lVar23 + 2) == '\x02';
            bVar8 = *(char *)((longlong)&local_1f8 + lVar23 + 3) == '\x02';
            bVar9 = *(char *)((longlong)&local_1f8 + lVar23 + 4) == '\x02';
            bVar10 = *(char *)((longlong)&local_1f8 + lVar23 + 5) == '\x02';
            bVar11 = *(char *)((longlong)&local_1f8 + lVar23 + 6) == '\x02';
            bVar12 = *(char *)((longlong)&local_1f8 + lVar23 + 7) == '\x02';
            if ((bool)(~bVar5 & 1)) {
              *(undefined1 *)((longlong)&local_1f8 + lVar23) = 2;
            }
            if ((bool)(~bVar6 & 1)) {
              *(undefined1 *)((longlong)&local_1f8 + lVar23 + 1) = 2;
            }
            if ((bool)(~bVar7 & 1)) {
              *(undefined1 *)((longlong)&local_1f8 + lVar23 + 2) = 2;
            }
            if ((bool)(~bVar8 & 1)) {
              *(undefined1 *)((longlong)&local_1f8 + lVar23 + 3) = 2;
            }
            if ((bool)(~bVar9 & 1)) {
              *(undefined1 *)((longlong)&local_1f8 + lVar23 + 4) = 2;
            }
            if ((bool)(~bVar10 & 1)) {
              *(undefined1 *)((longlong)&local_1f8 + lVar23 + 5) = 2;
            }
            if ((bool)(~bVar11 & 1)) {
              *(undefined1 *)((longlong)&local_1f8 + lVar23 + 6) = 2;
            }
            if ((bool)(~bVar12 & 1)) {
              *(undefined1 *)((longlong)&local_1f8 + lVar23 + 7) = 2;
            }
            if ((bool)(~bVar5 & 1)) {
              *(undefined1 *)((longlong)&uStack_1f0 + lVar23) = 2;
            }
            if ((bool)(~bVar6 & 1)) {
              *(undefined1 *)((longlong)&uStack_1f0 + lVar23 + 1) = 2;
            }
            if ((bool)(~bVar7 & 1)) {
              *(undefined1 *)((longlong)&uStack_1f0 + lVar23 + 2) = 2;
            }
            if ((bool)(~bVar8 & 1)) {
              *(undefined1 *)((longlong)&uStack_1f0 + lVar23 + 3) = 2;
            }
            if ((bool)(~bVar9 & 1)) {
              *(undefined1 *)((longlong)&uStack_1f0 + lVar23 + 4) = 2;
            }
            if ((bool)(~bVar10 & 1)) {
              *(undefined1 *)((longlong)&uStack_1f0 + lVar23 + 5) = 2;
            }
            if ((bool)(~bVar11 & 1)) {
              *(undefined1 *)((longlong)&uStack_1f0 + lVar23 + 6) = 2;
            }
            if ((bool)(~bVar12 & 1)) {
              *(undefined1 *)((longlong)&uStack_1f0 + lVar23 + 7) = 2;
            }
            lVar23 = lVar23 + 0x10;
          } while (lVar23 != 0x20);
          local_1f8 = param_1[0x13b];
          uStack_1f0 = param_1[0x13c];
          local_1e8 = param_1[0x13d];
          lStack_1e0 = param_1[0x13e];
          local_208 = (longlong *)0x0;
          lVar23 = param_1[0x3b];
          uStack_200 = 1;
          FUN_1447d05f2(&local_208,0);
          *local_208 = lVar23;
          local_14c = 0;
          local_148 = 0x101;
          local_120 = 0;
          local_118 = 0x800000000;
          local_100 = (undefined1 *)0x0;
          local_f8 = 0x400000000;
          local_160 = 0;
          local_154 = 0;
          local_170 = 0;
          uStack_168 = 0;
          local_15f = 1;
          local_150 = 0;
          local_15c = 0x1000000;
          local_158 = 1;
          local_15d = 1;
          if (0 < (int)uStack_200) {
            lVar23 = 0;
            iVar19 = (int)uStack_200;
            do {
              uVar18 = local_f8;
              if (local_208[lVar23] != 0) {
                uVar3 = *(undefined4 *)(local_208[lVar23] + 0xc);
                lVar26 = (longlong)(int)local_f8;
                uVar20 = (int)local_f8 + 1;
                local_f8 = CONCAT44(local_f8._4_4_,uVar20);
                if (local_f8._4_4_ < uVar20) {
                  FUN_1447de67e(local_110,uVar18 & 0xffffffff);
                }
                puVar24 = local_100;
                if (local_100 == (undefined1 *)0x0) {
                  puVar24 = local_110;
                }
                *(undefined4 *)(puVar24 + lVar26 * 4) = uVar3;
                iVar19 = (int)uStack_200;
              }
              lVar23 = lVar23 + 1;
            } while (lVar23 < iVar19);
          }
          local_160 = *(char *)(*(longlong *)(param_1[0x185] + lVar27 * 8) + 0x161) == '\x01';
          dVar31 = *(double *)(lVar21 + 0x110);
          dVar33 = *(double *)(lVar21 + 0x118);
          dVar30 = *(double *)(lVar21 + 0x120);
          (**(code **)(*param_1 + 0x6a0))(param_1,&local_338,lVar28,param_2);
          dVar34 = (double)CONCAT44(uStack_334,local_338) * local_198;
          dStack_330 = dStack_330 * dStack_190;
          dVar32 = local_328 * local_188;
          dVar29 = dStack_330 * local_1d8 - dVar34 * dStack_1d0;
          dVar13 = dVar32 * dStack_1d0 - dStack_330 * local_1c8;
          dVar14 = dVar34 * local_1c8 - dVar32 * local_1d8;
          dVar13 = dVar13 + dVar13;
          dVar14 = dVar14 + dVar14;
          dVar29 = dVar29 + dVar29;
          dVar31 = dVar31 * local_198;
          dVar33 = dVar33 * dStack_190;
          dVar30 = dVar30 * local_188;
          dVar15 = dVar33 * local_1d8 - dVar31 * dStack_1d0;
          dVar16 = dVar30 * dStack_1d0 - dVar33 * local_1c8;
          dVar17 = dVar31 * local_1c8 - local_1d8 * dVar30;
          dVar16 = dVar16 + dVar16;
          dVar17 = dVar17 + dVar17;
          dVar15 = dVar15 + dVar15;
          local_238 = (dVar29 * dStack_1d0 - dVar14 * local_1c8) + dStack_1c0 * dVar13 + dVar34 +
                      local_1b8;
          local_230 = (local_1c8 * dVar13 - local_1d8 * dVar29) + dStack_1c0 * dVar14 + dStack_330 +
                      dStack_1b0;
          local_228 = dVar29 * dStack_1c0 + dVar32 + (dVar14 * local_1d8 - dVar13 * dStack_1d0) +
                      local_1a8;
          dVar30 = dVar15 * dStack_1c0 + dVar30 + (dVar17 * local_1d8 - dVar16 * dStack_1d0);
          dVar29 = (double)*(float *)(lVar21 + 0x140);
          dVar31 = (dVar15 * dStack_1d0 - dVar17 * local_1c8) + dStack_1c0 * dVar16 + dVar31;
          dVar33 = (local_1c8 * dVar16 - local_1d8 * dVar15) + dStack_1c0 * dVar17 + dVar33;
          local_210 = local_228 - dVar30 * dVar29;
          local_218 = local_230 - dVar33 * dVar29;
          local_220 = local_238 - dVar29 * dVar31;
          fVar35 = *(float *)(lVar21 + 0x50);
          dVar29 = (double)(*(float *)(lVar21 + 0x144) + fVar35);
          local_228 = dVar30 * dVar29 + local_228;
          local_230 = dVar33 * dVar29 + local_230;
          local_238 = dVar31 * dVar29 + local_238;
          memset(&local_338,0,0x100);
          local_268 = 0xffffffff;
          uStack_334 = 0x3f800000;
          local_294 = 0xffffffff;
          lVar23 = param_1[0x16];
          if (*(char *)(lVar21 + 0x160) == '\x01') {
            if (lVar23 == 0) {
              lVar23 = FUN_1448abda6(param_1);
            }
            local_378 = &local_350;
            local_350._0_4_ = 2;
            local_368 = &local_1f8;
            local_370 = &local_170;
            local_380 = (undefined8 *)CONCAT44(local_380._4_4_,local_354);
            local_388 = &DAT_14c8463d0;
            local_350._4_4_ = fVar35;
            FUN_14021655c(lVar23,&local_338,&local_220,&local_238);
          }
          else {
            if (lVar23 == 0) {
              lVar23 = FUN_1448abda6(param_1);
            }
            local_378 = &local_1f8;
            local_380 = &local_170;
            local_388 = (undefined8 *)CONCAT44(local_388._4_4_,local_354);
            FUN_1400b50cc(lVar23,&local_338,&local_220,&local_238);
          }
          if ((local_28b & 1) == 0) {
            fVar35 = -*(float *)(lVar21 + 0x144);
          }
          else {
            (**(code **)(*param_1 + 0x6a0))(param_1,&local_350,lVar28,param_2);
            local_1d8 = -local_1d8;
            dStack_1d0 = -dStack_1d0;
            local_1c8 = local_1c8 * -1.0;
            if (*(char *)(lVar21 + 0x160) == '\x01') {
              local_318 = local_318 - local_1a8;
              dVar30 = (dStack_320 - dStack_1b0) * local_1d8 - (local_328 - local_1b8) * dStack_1d0;
              dVar31 = local_318 * dStack_1d0 - (dStack_320 - dStack_1b0) * local_1c8;
              dVar33 = local_1c8 * (local_328 - local_1b8) - local_1d8 * local_318;
              local_340 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_188)) &
                                  (ulonglong)(1.0 / local_188)) *
                          (dStack_1c0 * 1.0 * (dVar30 + dVar30) + local_318 +
                          ((dVar33 + dVar33) * local_1d8 - dStack_1d0 * (dVar31 + dVar31))) -
                          local_340;
            }
            else {
              local_300 = local_300 - local_1a8;
              dVar30 = (dStack_308 - dStack_1b0) * local_1d8 - (dStack_310 - local_1b8) * dStack_1d0
              ;
              dVar31 = local_300 * dStack_1d0 - (dStack_308 - dStack_1b0) * local_1c8;
              dVar33 = local_1c8 * (dStack_310 - local_1b8) - local_1d8 * local_300;
              local_340 = (double)*(float *)(lVar21 + 0x50) +
                          ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_188)) &
                                   (ulonglong)(1.0 / local_188)) *
                           (dStack_1c0 * 1.0 * (dVar30 + dVar30) + local_300 +
                           ((dVar33 + dVar33) * local_1d8 - dStack_1d0 * (dVar31 + dVar31))) -
                          local_340);
            }
            fVar35 = (float)local_340;
            if (*(float *)(lVar21 + 0x140) <= (float)local_340) {
              fVar35 = *(float *)(lVar21 + 0x140);
            }
            if (fVar35 <= -*(float *)(lVar21 + 0x144)) {
              fVar35 = -*(float *)(lVar21 + 0x144);
            }
          }
          *(undefined1 *)(param_1[0x198] + 4 + lVar27 * 8) = 1;
          *(float *)(param_1[0x198] + lVar27 * 8) = fVar35;
          if (local_100 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (local_120 != 0) {
            FUN_1400020a8();
          }
          if (local_208 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f80bc2 FUN_143f80bc2 body=669 status=ok
// SIG undefined FUN_143f80bc2(void)

void FUN_143f80bc2(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x204) = (int)*(float *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x164);
  *(undefined1 *)(param_1 + 0x213) = *(undefined1 *)(param_1 + 0x74);
  *(undefined1 *)(param_1 + 0x211) = *(undefined1 *)(param_1 + 0x75);
  *(undefined1 *)(param_1 + 0x212) = *(undefined1 *)(param_1 + 0x76);
  *(undefined1 *)(param_1 + 0x214) = *(undefined1 *)(param_1 + 0x77);
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x210) = *(undefined1 *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x215) = *(undefined1 *)(param_1 + 0x79);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined1 *)(param_1 + 0x21c) = *(undefined1 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x60);
  *(float *)(param_1 + 0x230) = *(float *)(param_1 + 0x5c) * 10000.0;
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 100);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x224) = *(undefined1 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x248) = 0;
  if (*(int *)(param_1 + 0x24c) != 0) {
    FUN_14101ae08(param_1 + 0x240,0);
  }
  *(undefined8 *)(param_1 + 0x250) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 600) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x260) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x268) = 0xffefffffffffffff;
  lVar1 = param_1 + 0x88;
  lVar3 = *(longlong *)(param_1 + 0x108) + 0x30;
  if (*(longlong *)(param_1 + 0x108) == 0) {
    lVar3 = lVar1;
  }
  if ((longlong)*(int *)(lVar3 + 0x78) != 0) {
    fVar2 = *(float *)(*(longlong *)(lVar3 + 0x70) + -0x18 + (longlong)*(int *)(lVar3 + 0x78) * 0x1c
                      );
    fVar5 = 0.0;
    if (0.0 < fVar2) {
      do {
        local_84 = 0;
        local_88 = 0;
        lVar3 = *(longlong *)(param_1 + 0x108) + 0x30;
        if (*(longlong *)(param_1 + 0x108) == 0) {
          lVar3 = lVar1;
        }
        FUN_14101b390(lVar3,&local_84,&local_88);
        lVar3 = *(longlong *)(param_1 + 0x108) + 0x30;
        if (*(longlong *)(param_1 + 0x108) == 0) {
          lVar3 = lVar1;
        }
        fVar4 = (float)FUN_1448c9f94(lVar3,fVar5,0);
        local_90 = (double)(fVar4 * 10000.0);
        local_98 = (double)fVar5;
        FUN_14101ac76(param_1 + 0x240,&local_98);
        fVar5 = fVar5 + fVar2 / 20.0;
      } while (fVar5 <= fVar2);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f80e60 FUN_143f80e60 body=2575 status=ok
// SIG undefined FUN_143f80e60(void)

void FUN_143f80e60(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = (longlong *)*param_1;
  (**(code **)(*plVar6 + 0x6a0))(plVar6,local_50,param_1[1],*(undefined4 *)param_1[2]);
  if (*param_2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(*param_2 + 0x50);
  }
  FUN_141304638(&local_58,uVar11,local_50);
  if ((local_58 != 0) && (*(longlong *)(local_58 + 0x10) != 0)) {
    lVar7 = *(longlong *)(plVar6[0x185] + (longlong)*(int *)param_1[2] * 8);
    iVar5 = (int)plVar6[0x195];
    *(uint *)(plVar6 + 0x195) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xcac) < iVar5 + 1U) {
      FUN_14658ddb2(plVar6 + 0x194,iVar5);
    }
    *(longlong *)(plVar6[0x194] + (longlong)iVar5 * 8) = local_58;
    lVar8 = *(longlong *)(local_58 + 0x10);
    *(undefined8 *)(local_58 + 0x28) = 0x3ff0000000000000;
    *(byte *)(local_58 + 0x19) = *(byte *)(local_58 + 0x19) | 4;
    if ((lVar8 != 0) && (lVar12 = *(longlong *)(lVar8 + 8), lVar12 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 0x128));
        if (*(int *)(lVar8 + 0x18) == -1) {
          lVar14 = *(longlong *)(lVar12 + 0x98);
          uVar4 = *(uint *)(lVar8 + 0x1c);
          piVar2 = (int *)(lVar14 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar14 + 0x194) = *(int *)(lVar14 + 0x194) + 1;
          lVar14 = lVar14 + (ulonglong)uVar4 * 0x10;
          iVar5 = *(int *)(lVar14 + 0x1a0);
          *(int *)(lVar8 + 0x18) = iVar5;
          *(uint *)(lVar14 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar14 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar14 + 0x198),iVar5);
          }
          lVar14 = *(longlong *)(lVar14 + 0x198);
          lVar13 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar14 + lVar13) = lVar8;
          *(undefined4 *)(lVar14 + 8 + lVar13) = 0;
          puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar12 + 0x128));
      }
      else if (*(int *)(lVar8 + 0x18) == -1) {
        lVar12 = *(longlong *)(lVar12 + 0x98);
        uVar4 = *(uint *)(lVar8 + 0x1c);
        piVar2 = (int *)(lVar12 + 0x160 + (ulonglong)uVar4 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar12 + 0x194) = *(int *)(lVar12 + 0x194) + 1;
        lVar12 = lVar12 + (ulonglong)uVar4 * 0x10;
        iVar5 = *(int *)(lVar12 + 0x1a0);
        *(int *)(lVar8 + 0x18) = iVar5;
        *(uint *)(lVar12 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar12 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar12 + 0x198),iVar5);
        }
        lVar12 = *(longlong *)(lVar12 + 0x198);
        lVar14 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar12 + lVar14) = lVar8;
        *(undefined4 *)(lVar12 + 8 + lVar14) = 0;
        puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar14);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
    }
    lVar8 = *(longlong *)(local_58 + 0x10);
    *(double *)(local_58 + 0x40) = (double)(*(float *)(lVar7 + 0x150) * 100.0 * 0.25);
    *(byte *)(local_58 + 0x19) = *(byte *)(local_58 + 0x19) | 4;
    if ((lVar8 != 0) && (lVar12 = *(longlong *)(lVar8 + 8), lVar12 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 0x128));
        if (*(int *)(lVar8 + 0x18) == -1) {
          lVar14 = *(longlong *)(lVar12 + 0x98);
          uVar4 = *(uint *)(lVar8 + 0x1c);
          piVar2 = (int *)(lVar14 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar14 + 0x194) = *(int *)(lVar14 + 0x194) + 1;
          lVar14 = lVar14 + (ulonglong)uVar4 * 0x10;
          iVar5 = *(int *)(lVar14 + 0x1a0);
          *(int *)(lVar8 + 0x18) = iVar5;
          *(uint *)(lVar14 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar14 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar14 + 0x198),iVar5);
          }
          lVar14 = *(longlong *)(lVar14 + 0x198);
          lVar13 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar14 + lVar13) = lVar8;
          *(undefined4 *)(lVar14 + 8 + lVar13) = 0;
          puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar12 + 0x128));
      }
      else if (*(int *)(lVar8 + 0x18) == -1) {
        lVar12 = *(longlong *)(lVar12 + 0x98);
        uVar4 = *(uint *)(lVar8 + 0x1c);
        piVar2 = (int *)(lVar12 + 0x160 + (ulonglong)uVar4 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar12 + 0x194) = *(int *)(lVar12 + 0x194) + 1;
        lVar12 = lVar12 + (ulonglong)uVar4 * 0x10;
        iVar5 = *(int *)(lVar12 + 0x1a0);
        *(int *)(lVar8 + 0x18) = iVar5;
        *(uint *)(lVar12 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar12 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar12 + 0x198),iVar5);
        }
        lVar12 = *(longlong *)(lVar12 + 0x198);
        lVar14 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar12 + lVar14) = lVar8;
        *(undefined4 *)(lVar12 + 8 + lVar14) = 0;
        puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar14);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
    }
    lVar8 = *(longlong *)(local_58 + 0x10);
    *(double *)(local_58 + 0x38) = (double)(*(float *)(lVar7 + 0x154) * 100.0);
    *(byte *)(local_58 + 0x19) = *(byte *)(local_58 + 0x19) | 4;
    if ((lVar8 != 0) && (lVar12 = *(longlong *)(lVar8 + 8), lVar12 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 0x128));
        if (*(int *)(lVar8 + 0x18) == -1) {
          lVar14 = *(longlong *)(lVar12 + 0x98);
          uVar4 = *(uint *)(lVar8 + 0x1c);
          piVar2 = (int *)(lVar14 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar14 + 0x194) = *(int *)(lVar14 + 0x194) + 1;
          lVar14 = lVar14 + (ulonglong)uVar4 * 0x10;
          iVar5 = *(int *)(lVar14 + 0x1a0);
          *(int *)(lVar8 + 0x18) = iVar5;
          *(uint *)(lVar14 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar14 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar14 + 0x198),iVar5);
          }
          lVar14 = *(longlong *)(lVar14 + 0x198);
          lVar13 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar14 + lVar13) = lVar8;
          *(undefined4 *)(lVar14 + 8 + lVar13) = 0;
          puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar12 + 0x128));
      }
      else if (*(int *)(lVar8 + 0x18) == -1) {
        lVar12 = *(longlong *)(lVar12 + 0x98);
        uVar4 = *(uint *)(lVar8 + 0x1c);
        piVar2 = (int *)(lVar12 + 0x160 + (ulonglong)uVar4 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar12 + 0x194) = *(int *)(lVar12 + 0x194) + 1;
        lVar12 = lVar12 + (ulonglong)uVar4 * 0x10;
        iVar5 = *(int *)(lVar12 + 0x1a0);
        *(int *)(lVar8 + 0x18) = iVar5;
        *(uint *)(lVar12 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar12 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar12 + 0x198),iVar5);
        }
        lVar12 = *(longlong *)(lVar12 + 0x198);
        lVar14 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar12 + lVar14) = lVar8;
        *(undefined4 *)(lVar12 + 8 + lVar14) = 0;
        puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar14);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
    }
    lVar8 = *(longlong *)(local_58 + 0x10);
    *(double *)(local_58 + 0x48) = (double)(*(float *)(lVar7 + 0x148) * 5.0);
    *(byte *)(local_58 + 0x19) = *(byte *)(local_58 + 0x19) | 4;
    if ((lVar8 != 0) && (lVar12 = *(longlong *)(lVar8 + 8), lVar12 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 0x128));
        if (*(int *)(lVar8 + 0x18) == -1) {
          lVar14 = *(longlong *)(lVar12 + 0x98);
          uVar4 = *(uint *)(lVar8 + 0x1c);
          piVar2 = (int *)(lVar14 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar14 + 0x194) = *(int *)(lVar14 + 0x194) + 1;
          lVar14 = lVar14 + (ulonglong)uVar4 * 0x10;
          iVar5 = *(int *)(lVar14 + 0x1a0);
          *(int *)(lVar8 + 0x18) = iVar5;
          *(uint *)(lVar14 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar14 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar14 + 0x198),iVar5);
          }
          lVar14 = *(longlong *)(lVar14 + 0x198);
          lVar13 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar14 + lVar13) = lVar8;
          *(undefined4 *)(lVar14 + 8 + lVar13) = 0;
          puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar12 + 0x128));
      }
      else if (*(int *)(lVar8 + 0x18) == -1) {
        lVar12 = *(longlong *)(lVar12 + 0x98);
        uVar4 = *(uint *)(lVar8 + 0x1c);
        piVar2 = (int *)(lVar12 + 0x160 + (ulonglong)uVar4 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar12 + 0x194) = *(int *)(lVar12 + 0x194) + 1;
        lVar12 = lVar12 + (ulonglong)uVar4 * 0x10;
        iVar5 = *(int *)(lVar12 + 0x1a0);
        *(int *)(lVar8 + 0x18) = iVar5;
        *(uint *)(lVar12 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar12 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar12 + 0x198),iVar5);
        }
        lVar12 = *(longlong *)(lVar12 + 0x198);
        lVar14 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar12 + lVar14) = lVar8;
        *(undefined4 *)(lVar12 + 8 + lVar14) = 0;
        puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar14);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
    }
    lVar8 = *(longlong *)(local_58 + 0x10);
    *(double *)(local_58 + 0x50) = (double)-*(float *)(lVar7 + 0x140);
    *(byte *)(local_58 + 0x19) = *(byte *)(local_58 + 0x19) | 4;
    if ((lVar8 != 0) && (lVar12 = *(longlong *)(lVar8 + 8), lVar12 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 0x128));
        if (*(int *)(lVar8 + 0x18) == -1) {
          lVar14 = *(longlong *)(lVar12 + 0x98);
          uVar4 = *(uint *)(lVar8 + 0x1c);
          piVar2 = (int *)(lVar14 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar14 + 0x194) = *(int *)(lVar14 + 0x194) + 1;
          lVar14 = lVar14 + (ulonglong)uVar4 * 0x10;
          iVar5 = *(int *)(lVar14 + 0x1a0);
          *(int *)(lVar8 + 0x18) = iVar5;
          *(uint *)(lVar14 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar14 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar14 + 0x198),iVar5);
          }
          lVar14 = *(longlong *)(lVar14 + 0x198);
          lVar13 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar14 + lVar13) = lVar8;
          *(undefined4 *)(lVar14 + 8 + lVar13) = 0;
          puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar12 + 0x128));
      }
      else if (*(int *)(lVar8 + 0x18) == -1) {
        lVar12 = *(longlong *)(lVar12 + 0x98);
        uVar4 = *(uint *)(lVar8 + 0x1c);
        piVar2 = (int *)(lVar12 + 0x160 + (ulonglong)uVar4 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar12 + 0x194) = *(int *)(lVar12 + 0x194) + 1;
        lVar12 = lVar12 + (ulonglong)uVar4 * 0x10;
        iVar5 = *(int *)(lVar12 + 0x1a0);
        *(int *)(lVar8 + 0x18) = iVar5;
        *(uint *)(lVar12 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar12 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar12 + 0x198),iVar5);
        }
        lVar12 = *(longlong *)(lVar12 + 0x198);
        lVar14 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar12 + lVar14) = lVar8;
        *(undefined4 *)(lVar12 + 8 + lVar14) = 0;
        puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar14);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
    }
    lVar8 = *(longlong *)(local_58 + 0x10);
    *(double *)(local_58 + 0x58) = (double)*(float *)(lVar7 + 0x144);
    *(byte *)(local_58 + 0x19) = *(byte *)(local_58 + 0x19) | 4;
    if ((lVar8 != 0) && (lVar12 = *(longlong *)(lVar8 + 8), lVar12 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 0x128));
        if (*(int *)(lVar8 + 0x18) == -1) {
          lVar14 = *(longlong *)(lVar12 + 0x98);
          uVar4 = *(uint *)(lVar8 + 0x1c);
          piVar2 = (int *)(lVar14 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar14 + 0x194) = *(int *)(lVar14 + 0x194) + 1;
          lVar14 = lVar14 + (ulonglong)uVar4 * 0x10;
          iVar5 = *(int *)(lVar14 + 0x1a0);
          *(int *)(lVar8 + 0x18) = iVar5;
          *(uint *)(lVar14 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar14 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar14 + 0x198),iVar5);
          }
          lVar14 = *(longlong *)(lVar14 + 0x198);
          lVar13 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar14 + lVar13) = lVar8;
          *(undefined4 *)(lVar14 + 8 + lVar13) = 0;
          puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar12 + 0x128));
      }
      else if (*(int *)(lVar8 + 0x18) == -1) {
        lVar12 = *(longlong *)(lVar12 + 0x98);
        uVar4 = *(uint *)(lVar8 + 0x1c);
        piVar2 = (int *)(lVar12 + 0x160 + (ulonglong)uVar4 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar12 + 0x194) = *(int *)(lVar12 + 0x194) + 1;
        lVar12 = lVar12 + (ulonglong)uVar4 * 0x10;
        iVar5 = *(int *)(lVar12 + 0x1a0);
        *(int *)(lVar8 + 0x18) = iVar5;
        *(uint *)(lVar12 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar12 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar12 + 0x198),iVar5);
        }
        lVar12 = *(longlong *)(lVar12 + 0x198);
        lVar14 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar12 + lVar14) = lVar8;
        *(undefined4 *)(lVar12 + 8 + lVar14) = 0;
        puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar14);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
    }
    uVar3 = *(ulonglong *)(lVar7 + 0x120);
    lVar8 = *(longlong *)(local_58 + 0x10);
    uVar4 = *(uint *)(lVar7 + 0x114);
    uVar9 = *(undefined4 *)(lVar7 + 0x118);
    uVar10 = *(uint *)(lVar7 + 0x11c);
    *(undefined4 *)(local_58 + 0x60) = *(undefined4 *)(lVar7 + 0x110);
    *(uint *)(local_58 + 100) = uVar4 ^ 0x80000000;
    *(undefined4 *)(local_58 + 0x68) = uVar9;
    *(uint *)(local_58 + 0x6c) = uVar10 ^ 0x80000000;
    *(ulonglong *)(local_58 + 0x70) = uVar3 ^ 0x8000000000000000;
    *(byte *)(local_58 + 0x19) = *(byte *)(local_58 + 0x19) | 4;
    if ((lVar8 != 0) && (lVar7 = *(longlong *)(lVar8 + 8), lVar7 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar8 + 0x18) == -1) {
          lVar12 = *(longlong *)(lVar7 + 0x98);
          uVar4 = *(uint *)(lVar8 + 0x1c);
          piVar2 = (int *)(lVar12 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar12 + 0x194) = *(int *)(lVar12 + 0x194) + 1;
          lVar12 = lVar12 + (ulonglong)uVar4 * 0x10;
          iVar5 = *(int *)(lVar12 + 0x1a0);
          *(int *)(lVar8 + 0x18) = iVar5;
          *(uint *)(lVar12 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar12 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar12 + 0x198),iVar5);
          }
          lVar12 = *(longlong *)(lVar12 + 0x198);
          lVar14 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar12 + lVar14) = lVar8;
          *(undefined4 *)(lVar12 + 8 + lVar14) = 0;
          puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar14);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else if (*(int *)(lVar8 + 0x18) == -1) {
        lVar7 = *(longlong *)(lVar7 + 0x98);
        uVar4 = *(uint *)(lVar8 + 0x1c);
        piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar4 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
        lVar7 = lVar7 + (ulonglong)uVar4 * 0x10;
        iVar5 = *(int *)(lVar7 + 0x1a0);
        *(int *)(lVar8 + 0x18) = iVar5;
        *(uint *)(lVar7 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar7 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar5);
        }
        lVar7 = *(longlong *)(lVar7 + 0x198);
        lVar12 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar7 + lVar12) = lVar8;
        *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar12);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f81870 FUN_143f81870 body=31 status=ok
// SIG undefined FUN_143f81870(void)

undefined8 FUN_143f81870(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f81898 FUN_143f81898 body=408 status=ok
// SIG undefined FUN_143f81898(void)

void FUN_143f81898(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x990) == 0) {
    return;
  }
  plVar6 = (longlong *)param_1[2];
  plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0xc28) + (longlong)*(int *)param_1[1] * 8);
  lVar7 = *plVar6;
  if (lVar7 != 0) {
    lVar5 = FUN_1411f69f0();
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      lVar7 = *plVar6;
      goto LAB_143f81906;
    }
  }
  lVar7 = 0;
LAB_143f81906:
  plVar6 = (longlong *)FUN_1411f6ace(lVar2,lVar7);
  (**(code **)(*plVar6 + 0x2a0))(plVar6,lVar2,*(undefined4 *)param_1[1]);
  uVar4 = *(undefined8 *)(lVar2 + 0x990);
  FUN_143f80bc2(plVar6);
  FUN_148ad5082(uVar4,*(undefined4 *)param_1[1],plVar6 + 0x3c);
  uVar4 = *(undefined8 *)(lVar2 + 0x990);
  plVar6[0x51] = plVar6[0x24];
  plVar6[0x4f] = plVar6[0x22];
  plVar6[0x50] = plVar6[0x23];
  plVar6[0x52] = plVar6[0x25];
  plVar6[0x53] = plVar6[0x26];
  plVar6[0x54] = plVar6[0x27];
  plVar6[0x55] = plVar6[0x28];
  *(float *)((longlong)plVar6 + 0x2b4) = *(float *)(plVar6 + 0x2a) * 100.0;
  *(float *)(plVar6 + 0x57) = *(float *)((longlong)plVar6 + 0x154) * 100.0;
  *(longlong *)((longlong)plVar6 + 0x2cc) = plVar6[0x29];
  *(int *)(plVar6 + 0x5b) = (int)plVar6[0x2b];
  FUN_148ad50d0(uVar4,*(undefined4 *)param_1[1],plVar6 + 0x4f);
  iVar1 = *(int *)param_1[1];
  lVar2 = *(longlong *)(lVar2 + 0xc28);
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar6);
  }
  *(longlong **)(lVar2 + (longlong)iVar1 * 8) = plVar6;
                    /* WARNING: Could not recover jumptable at 0x000143f81a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x2a8))(plVar3);
  return;
}



// FUNCTION 143f81a30 FUN_143f81a30 body=278 status=ok
// SIG undefined FUN_143f81a30(void)

void FUN_143f81a30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
  lVar1 = param_1[1];
  lVar2 = *(longlong *)(lVar1 + 0x990);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1a0) != 0)) {
    lVar2 = *param_1;
    iVar10 = *(int *)(lVar2 + 0xa0);
    if (0 < iVar10) {
      lVar6 = 0x10;
      lVar7 = 100;
      lVar8 = 0;
      lVar9 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x990) + 0x1a0);
        if (lVar9 < *(int *)(lVar3 + 0x40)) {
          lVar4 = *(longlong *)(lVar2 + 0x98);
          lVar5 = *(longlong *)(lVar3 + 0x38);
          lVar3 = *(longlong *)(lVar3 + 0x48);
          *(undefined4 *)(lVar5 + lVar7) = *(undefined4 *)(lVar4 + -8 + lVar6);
          fVar11 = (*(float *)(lVar4 + -0x10 + lVar6) -
                   *(float *)(*(longlong *)(lVar3 + lVar8) + 0x5c)) - *(float *)(lVar4 + -4 + lVar6)
          ;
          fVar12 = 0.0;
          if (0.0 <= fVar11) {
            fVar12 = fVar11;
          }
          *(float *)(lVar3 + 8 + lVar8) = fVar12;
          *(float *)(lVar3 + 0x48 + lVar8) =
               *(float *)(*(longlong *)(lVar3 + lVar8) + 0x38) - fVar12;
          *(float *)(lVar5 + -4 + lVar7) = *(float *)(lVar4 + -0xc + lVar6) * -0.017453292;
          *(undefined4 *)(lVar5 + -0x38 + lVar7) = *(undefined4 *)(lVar4 + -4 + lVar6);
          *(undefined4 *)(lVar5 + -0x34 + lVar7) = *(undefined4 *)(lVar4 + lVar6);
          iVar10 = *(int *)(lVar2 + 0xa0);
        }
        lVar9 = lVar9 + 1;
        lVar6 = lVar6 + 0x14;
        lVar7 = lVar7 + 0xe8;
        lVar8 = lVar8 + 0x88;
      } while (lVar9 < iVar10);
    }
  }
  return;
}



// FUNCTION 143f820da FUN_143f820da body=2207 status=ok
// SIG undefined FUN_143f820da(void)

void FUN_143f820da(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = (longlong *)param_1[1];
  iVar3 = *(int *)*param_1;
  if ((iVar3 < (int)plVar5[0x13a]) && (iVar3 < (int)plVar5[0x186])) {
    (**(code **)(*plVar5 + 0x6a0))(plVar5,local_50,(longlong)iVar3 * 0x28 + plVar5[0x139]);
    if (*param_2 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(*param_2 + 0x50);
    }
    FUN_141304638(&local_58,uVar8,local_50);
    if (((local_58 != 0) && (*(longlong *)(local_58 + 0x10) != 0)) &&
       (lVar6 = *(longlong *)(plVar5[0x194] + (longlong)*(int *)*param_1 * 8), lVar6 != 0)) {
      lVar7 = *(longlong *)(lVar6 + 0x10);
      *(undefined8 *)(lVar6 + 0x28) = 0x3ff0000000000000;
      *(byte *)(lVar6 + 0x19) = *(byte *)(lVar6 + 0x19) | 4;
      if ((lVar7 != 0) && (lVar10 = *(longlong *)(lVar7 + 8), lVar10 != 0)) {
        if (DAT_14c992a90 == '\x01') {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar10 + 0x128));
          if (*(int *)(lVar7 + 0x18) == -1) {
            lVar11 = *(longlong *)(lVar10 + 0x98);
            uVar4 = *(uint *)(lVar7 + 0x1c);
            piVar2 = (int *)(lVar11 + 0x160 + (ulonglong)uVar4 * 4);
            *piVar2 = *piVar2 + 1;
            *(int *)(lVar11 + 0x194) = *(int *)(lVar11 + 0x194) + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 0x10;
            iVar3 = *(int *)(lVar11 + 0x1a0);
            *(int *)(lVar7 + 0x18) = iVar3;
            *(uint *)(lVar11 + 0x1a0) = iVar3 + 1U;
            if (*(uint *)(lVar11 + 0x1a4) < iVar3 + 1U) {
              FUN_140431d5c((longlong *)(lVar11 + 0x198),iVar3);
            }
            lVar11 = *(longlong *)(lVar11 + 0x198);
            lVar9 = (longlong)iVar3 * 0x20;
            *(longlong *)(lVar11 + lVar9) = lVar7;
            *(undefined4 *)(lVar11 + 8 + lVar9) = 0;
            puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar9);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar10 + 0x128));
        }
        else if (*(int *)(lVar7 + 0x18) == -1) {
          lVar10 = *(longlong *)(lVar10 + 0x98);
          uVar4 = *(uint *)(lVar7 + 0x1c);
          piVar2 = (int *)(lVar10 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar10 + 0x194) = *(int *)(lVar10 + 0x194) + 1;
          lVar10 = lVar10 + (ulonglong)uVar4 * 0x10;
          iVar3 = *(int *)(lVar10 + 0x1a0);
          *(int *)(lVar7 + 0x18) = iVar3;
          *(uint *)(lVar10 + 0x1a0) = iVar3 + 1U;
          if (*(uint *)(lVar10 + 0x1a4) < iVar3 + 1U) {
            FUN_140431d5c((longlong *)(lVar10 + 0x198),iVar3);
          }
          lVar10 = *(longlong *)(lVar10 + 0x198);
          lVar11 = (longlong)iVar3 * 0x20;
          *(longlong *)(lVar10 + lVar11) = lVar7;
          *(undefined4 *)(lVar10 + 8 + lVar11) = 0;
          puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar11);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
      }
      lVar7 = *(longlong *)(lVar6 + 0x10);
      *(double *)(lVar6 + 0x40) = (double)(*(float *)param_1[2] * 100.0 * 0.25);
      *(byte *)(lVar6 + 0x19) = *(byte *)(lVar6 + 0x19) | 4;
      if ((lVar7 != 0) && (lVar10 = *(longlong *)(lVar7 + 8), lVar10 != 0)) {
        if (DAT_14c992a90 == '\x01') {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar10 + 0x128));
          if (*(int *)(lVar7 + 0x18) == -1) {
            lVar11 = *(longlong *)(lVar10 + 0x98);
            uVar4 = *(uint *)(lVar7 + 0x1c);
            piVar2 = (int *)(lVar11 + 0x160 + (ulonglong)uVar4 * 4);
            *piVar2 = *piVar2 + 1;
            *(int *)(lVar11 + 0x194) = *(int *)(lVar11 + 0x194) + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 0x10;
            iVar3 = *(int *)(lVar11 + 0x1a0);
            *(int *)(lVar7 + 0x18) = iVar3;
            *(uint *)(lVar11 + 0x1a0) = iVar3 + 1U;
            if (*(uint *)(lVar11 + 0x1a4) < iVar3 + 1U) {
              FUN_140431d5c((longlong *)(lVar11 + 0x198),iVar3);
            }
            lVar11 = *(longlong *)(lVar11 + 0x198);
            lVar9 = (longlong)iVar3 * 0x20;
            *(longlong *)(lVar11 + lVar9) = lVar7;
            *(undefined4 *)(lVar11 + 8 + lVar9) = 0;
            puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar9);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar10 + 0x128));
        }
        else if (*(int *)(lVar7 + 0x18) == -1) {
          lVar10 = *(longlong *)(lVar10 + 0x98);
          uVar4 = *(uint *)(lVar7 + 0x1c);
          piVar2 = (int *)(lVar10 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar10 + 0x194) = *(int *)(lVar10 + 0x194) + 1;
          lVar10 = lVar10 + (ulonglong)uVar4 * 0x10;
          iVar3 = *(int *)(lVar10 + 0x1a0);
          *(int *)(lVar7 + 0x18) = iVar3;
          *(uint *)(lVar10 + 0x1a0) = iVar3 + 1U;
          if (*(uint *)(lVar10 + 0x1a4) < iVar3 + 1U) {
            FUN_140431d5c((longlong *)(lVar10 + 0x198),iVar3);
          }
          lVar10 = *(longlong *)(lVar10 + 0x198);
          lVar11 = (longlong)iVar3 * 0x20;
          *(longlong *)(lVar10 + lVar11) = lVar7;
          *(undefined4 *)(lVar10 + 8 + lVar11) = 0;
          puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar11);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
      }
      lVar7 = *(longlong *)(lVar6 + 0x10);
      *(double *)(lVar6 + 0x38) = (double)(*(float *)param_1[3] * 100.0);
      *(byte *)(lVar6 + 0x19) = *(byte *)(lVar6 + 0x19) | 4;
      if ((lVar7 != 0) && (lVar10 = *(longlong *)(lVar7 + 8), lVar10 != 0)) {
        if (DAT_14c992a90 == '\x01') {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar10 + 0x128));
          if (*(int *)(lVar7 + 0x18) == -1) {
            lVar11 = *(longlong *)(lVar10 + 0x98);
            uVar4 = *(uint *)(lVar7 + 0x1c);
            piVar2 = (int *)(lVar11 + 0x160 + (ulonglong)uVar4 * 4);
            *piVar2 = *piVar2 + 1;
            *(int *)(lVar11 + 0x194) = *(int *)(lVar11 + 0x194) + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 0x10;
            iVar3 = *(int *)(lVar11 + 0x1a0);
            *(int *)(lVar7 + 0x18) = iVar3;
            *(uint *)(lVar11 + 0x1a0) = iVar3 + 1U;
            if (*(uint *)(lVar11 + 0x1a4) < iVar3 + 1U) {
              FUN_140431d5c((longlong *)(lVar11 + 0x198),iVar3);
            }
            lVar11 = *(longlong *)(lVar11 + 0x198);
            lVar9 = (longlong)iVar3 * 0x20;
            *(longlong *)(lVar11 + lVar9) = lVar7;
            *(undefined4 *)(lVar11 + 8 + lVar9) = 0;
            puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar9);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar10 + 0x128));
        }
        else if (*(int *)(lVar7 + 0x18) == -1) {
          lVar10 = *(longlong *)(lVar10 + 0x98);
          uVar4 = *(uint *)(lVar7 + 0x1c);
          piVar2 = (int *)(lVar10 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar10 + 0x194) = *(int *)(lVar10 + 0x194) + 1;
          lVar10 = lVar10 + (ulonglong)uVar4 * 0x10;
          iVar3 = *(int *)(lVar10 + 0x1a0);
          *(int *)(lVar7 + 0x18) = iVar3;
          *(uint *)(lVar10 + 0x1a0) = iVar3 + 1U;
          if (*(uint *)(lVar10 + 0x1a4) < iVar3 + 1U) {
            FUN_140431d5c((longlong *)(lVar10 + 0x198),iVar3);
          }
          lVar10 = *(longlong *)(lVar10 + 0x198);
          lVar11 = (longlong)iVar3 * 0x20;
          *(longlong *)(lVar10 + lVar11) = lVar7;
          *(undefined4 *)(lVar10 + 8 + lVar11) = 0;
          puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar11);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
      }
      lVar7 = *(longlong *)(lVar6 + 0x10);
      *(double *)(lVar6 + 0x48) = (double)(*(float *)param_1[4] * 5.0);
      *(byte *)(lVar6 + 0x19) = *(byte *)(lVar6 + 0x19) | 4;
      if ((lVar7 != 0) && (lVar10 = *(longlong *)(lVar7 + 8), lVar10 != 0)) {
        if (DAT_14c992a90 == '\x01') {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar10 + 0x128));
          if (*(int *)(lVar7 + 0x18) == -1) {
            lVar11 = *(longlong *)(lVar10 + 0x98);
            uVar4 = *(uint *)(lVar7 + 0x1c);
            piVar2 = (int *)(lVar11 + 0x160 + (ulonglong)uVar4 * 4);
            *piVar2 = *piVar2 + 1;
            *(int *)(lVar11 + 0x194) = *(int *)(lVar11 + 0x194) + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 0x10;
            iVar3 = *(int *)(lVar11 + 0x1a0);
            *(int *)(lVar7 + 0x18) = iVar3;
            *(uint *)(lVar11 + 0x1a0) = iVar3 + 1U;
            if (*(uint *)(lVar11 + 0x1a4) < iVar3 + 1U) {
              FUN_140431d5c((longlong *)(lVar11 + 0x198),iVar3);
            }
            lVar11 = *(longlong *)(lVar11 + 0x198);
            lVar9 = (longlong)iVar3 * 0x20;
            *(longlong *)(lVar11 + lVar9) = lVar7;
            *(undefined4 *)(lVar11 + 8 + lVar9) = 0;
            puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar9);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar10 + 0x128));
        }
        else if (*(int *)(lVar7 + 0x18) == -1) {
          lVar10 = *(longlong *)(lVar10 + 0x98);
          uVar4 = *(uint *)(lVar7 + 0x1c);
          piVar2 = (int *)(lVar10 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar10 + 0x194) = *(int *)(lVar10 + 0x194) + 1;
          lVar10 = lVar10 + (ulonglong)uVar4 * 0x10;
          iVar3 = *(int *)(lVar10 + 0x1a0);
          *(int *)(lVar7 + 0x18) = iVar3;
          *(uint *)(lVar10 + 0x1a0) = iVar3 + 1U;
          if (*(uint *)(lVar10 + 0x1a4) < iVar3 + 1U) {
            FUN_140431d5c((longlong *)(lVar10 + 0x198),iVar3);
          }
          lVar10 = *(longlong *)(lVar10 + 0x198);
          lVar11 = (longlong)iVar3 * 0x20;
          *(longlong *)(lVar10 + lVar11) = lVar7;
          *(undefined4 *)(lVar10 + 8 + lVar11) = 0;
          puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar11);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
      }
      lVar7 = *(longlong *)(lVar6 + 0x10);
      *(double *)(lVar6 + 0x50) = (double)-*(float *)param_1[5];
      *(byte *)(lVar6 + 0x19) = *(byte *)(lVar6 + 0x19) | 4;
      if ((lVar7 != 0) && (lVar10 = *(longlong *)(lVar7 + 8), lVar10 != 0)) {
        if (DAT_14c992a90 == '\x01') {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar10 + 0x128));
          if (*(int *)(lVar7 + 0x18) == -1) {
            lVar11 = *(longlong *)(lVar10 + 0x98);
            uVar4 = *(uint *)(lVar7 + 0x1c);
            piVar2 = (int *)(lVar11 + 0x160 + (ulonglong)uVar4 * 4);
            *piVar2 = *piVar2 + 1;
            *(int *)(lVar11 + 0x194) = *(int *)(lVar11 + 0x194) + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 0x10;
            iVar3 = *(int *)(lVar11 + 0x1a0);
            *(int *)(lVar7 + 0x18) = iVar3;
            *(uint *)(lVar11 + 0x1a0) = iVar3 + 1U;
            if (*(uint *)(lVar11 + 0x1a4) < iVar3 + 1U) {
              FUN_140431d5c((longlong *)(lVar11 + 0x198),iVar3);
            }
            lVar11 = *(longlong *)(lVar11 + 0x198);
            lVar9 = (longlong)iVar3 * 0x20;
            *(longlong *)(lVar11 + lVar9) = lVar7;
            *(undefined4 *)(lVar11 + 8 + lVar9) = 0;
            puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar9);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar10 + 0x128));
        }
        else if (*(int *)(lVar7 + 0x18) == -1) {
          lVar10 = *(longlong *)(lVar10 + 0x98);
          uVar4 = *(uint *)(lVar7 + 0x1c);
          piVar2 = (int *)(lVar10 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar10 + 0x194) = *(int *)(lVar10 + 0x194) + 1;
          lVar10 = lVar10 + (ulonglong)uVar4 * 0x10;
          iVar3 = *(int *)(lVar10 + 0x1a0);
          *(int *)(lVar7 + 0x18) = iVar3;
          *(uint *)(lVar10 + 0x1a0) = iVar3 + 1U;
          if (*(uint *)(lVar10 + 0x1a4) < iVar3 + 1U) {
            FUN_140431d5c((longlong *)(lVar10 + 0x198),iVar3);
          }
          lVar10 = *(longlong *)(lVar10 + 0x198);
          lVar11 = (longlong)iVar3 * 0x20;
          *(longlong *)(lVar10 + lVar11) = lVar7;
          *(undefined4 *)(lVar10 + 8 + lVar11) = 0;
          puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar11);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
      }
      lVar7 = *(longlong *)(lVar6 + 0x10);
      *(double *)(lVar6 + 0x58) = (double)*(float *)param_1[6];
      *(byte *)(lVar6 + 0x19) = *(byte *)(lVar6 + 0x19) | 4;
      if ((lVar7 != 0) && (lVar6 = *(longlong *)(lVar7 + 8), lVar6 != 0)) {
        if (DAT_14c992a90 == '\x01') {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x128));
          if (*(int *)(lVar7 + 0x18) == -1) {
            lVar10 = *(longlong *)(lVar6 + 0x98);
            uVar4 = *(uint *)(lVar7 + 0x1c);
            piVar2 = (int *)(lVar10 + 0x160 + (ulonglong)uVar4 * 4);
            *piVar2 = *piVar2 + 1;
            *(int *)(lVar10 + 0x194) = *(int *)(lVar10 + 0x194) + 1;
            lVar10 = lVar10 + (ulonglong)uVar4 * 0x10;
            iVar3 = *(int *)(lVar10 + 0x1a0);
            *(int *)(lVar7 + 0x18) = iVar3;
            *(uint *)(lVar10 + 0x1a0) = iVar3 + 1U;
            if (*(uint *)(lVar10 + 0x1a4) < iVar3 + 1U) {
              FUN_140431d5c((longlong *)(lVar10 + 0x198),iVar3);
            }
            lVar10 = *(longlong *)(lVar10 + 0x198);
            lVar11 = (longlong)iVar3 * 0x20;
            *(longlong *)(lVar10 + lVar11) = lVar7;
            *(undefined4 *)(lVar10 + 8 + lVar11) = 0;
            puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar11);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x128));
        }
        else if (*(int *)(lVar7 + 0x18) == -1) {
          lVar6 = *(longlong *)(lVar6 + 0x98);
          uVar4 = *(uint *)(lVar7 + 0x1c);
          piVar2 = (int *)(lVar6 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar6 + 0x194) = *(int *)(lVar6 + 0x194) + 1;
          lVar6 = lVar6 + (ulonglong)uVar4 * 0x10;
          iVar3 = *(int *)(lVar6 + 0x1a0);
          *(int *)(lVar7 + 0x18) = iVar3;
          *(uint *)(lVar6 + 0x1a0) = iVar3 + 1U;
          if (*(uint *)(lVar6 + 0x1a4) < iVar3 + 1U) {
            FUN_140431d5c((longlong *)(lVar6 + 0x198),iVar3);
          }
          lVar6 = *(longlong *)(lVar6 + 0x198);
          lVar10 = (longlong)iVar3 * 0x20;
          *(longlong *)(lVar6 + lVar10) = lVar7;
          *(undefined4 *)(lVar6 + 8 + lVar10) = 0;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar10);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f8297a FUN_143f8297a body=1656 status=ok
// SIG undefined FUN_143f8297a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f8297a(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_34;
  undefined8 *local_30;
  int local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x800000014b520cd4;
  local_34 = 0xd;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_14658dc10(&local_30);
  FUN_1400b22c2(&local_30,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_30,&DAT_14cb9974c);
  if (cVar2 == '\0') {
    _DAT_14cb9974c = 0;
    uRam000000014cb99754 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_30 = (undefined8 *)&DAT_14a19662d;
  local_28 = 4;
  local_24 = 0;
  FUN_14001a6c0(&local_30,1);
  local_48 = 0;
  FUN_14153156c(&DAT_14cb99760,L"p.Vehicle.ShowWheelCollisionNormal",&DAT_14c763b30,
                L"Enable/Disable Wheel Collision Normal Visualisation.");
  atexit(FUN_143f7f60b);
  local_48 = 0;
  FUN_14153156c(&DAT_14cb99770,L"p.Vehicle.ShowSuspensionRaycasts",&DAT_14c763b31,
                L"Enable/Disable Suspension Raycast Visualisation.");
  atexit(FUN_143f7f650);
  local_48 = 0;
  FUN_14153156c(&DAT_14cb99780,L"p.Vehicle.ShowSuspensionLimits",&DAT_14c763b32,
                L"Enable/Disable Suspension Limits Visualisation.");
  atexit(FUN_143f7f695);
  local_48 = 0;
  FUN_14153156c(&DAT_14cb99790,L"p.Vehicle.ShowWheelForces",&DAT_14c763b33,
                L"Enable/Disable Wheel Forces Visualisation.");
  atexit(FUN_143f7f6da);
  local_48 = 0;
  FUN_14153156c(&DAT_14cb997a0,L"p.Vehicle.ShowSuspensionForces",&DAT_14c763b34,
                L"Enable/Disable Suspension Forces Visualisation.");
  atexit(FUN_143f7f71f);
  local_48 = 0;
  FUN_14153156c(&DAT_14cb997b0,L"p.Vehicle.ShowBatchQueryExtents",&DAT_14c763b35,
                L"Enable/Disable Suspension Forces Visualisation.");
  atexit(FUN_143f7f764);
  local_48 = 0;
  FUN_14153156c(&DAT_14cb997c0,L"p.Vehicle.ShowRaycastComponent",&DAT_14c763b36,
                L"Enable/Disable Raycast Component Hit Visualisation.");
  atexit(FUN_143f7f7a9);
  local_48 = 0;
  FUN_14153156c(&DAT_14cb997d0,L"p.Vehicle.ShowRaycastMaterial",&DAT_14c763b37,
                L"Enable/Disable Raycast Material Hit Visualisation.");
  atexit(FUN_143f7f7ee);
  local_48 = 0;
  FUN_141471170(&DAT_14cb997e0,L"p.Vehicle.TraceTypeOverride",&DAT_14c763b38,
                L"Override ray trace type, 1=Simple, 2=Complex.");
  atexit(FUN_143f7f833);
  local_48 = 0;
  FUN_14153156c(&DAT_14cb997f0,L"p.Vehicle.DisableSuspensionForces",&DAT_14c763b3c,
                L"Enable/Disable Suspension Forces.");
  atexit(FUN_143f7f878);
  local_48 = 0;
  FUN_14153156c(&DAT_14cb99800,L"p.Vehicle.DisableFrictionForces",&DAT_14c763b3d,
                L"Enable/Disable Wheel Friction Forces.");
  atexit(FUN_143f7f8bd);
  local_48 = 0;
  FUN_14153156c(&DAT_14cb99810,L"p.Vehicle.DisableRollbarForces",&DAT_14c763b3e,
                L"Enable/Disable Rollbar Forces.");
  atexit(FUN_143f7f902);
  local_48 = 0;
  FUN_14153156c(&DAT_14cb99820,L"p.Vehicle.DisableConstraintSuspension",&DAT_14c763b3f,
                L"Enable/Disable Constraint based suspension, swaps to basic force based suspension without hardstops instead."
               );
  atexit(FUN_143f7f947);
  local_48 = 0;
  FUN_1415c789c(&DAT_14cb99830,L"p.Vehicle.ThrottleOverride",&DAT_14c763b40,
                L"Hard code throttle input on.");
  atexit(FUN_143f7f98c);
  local_48 = 0;
  FUN_1415c789c(&DAT_14cb99840,L"p.Vehicle.SteeringOverride",&DAT_14c763b44,
                L"Hard code steering input on.");
  atexit(FUN_143f7f9d1);
  local_48 = 0;
  FUN_14153156c(&DAT_14cb99850,L"p.Vehicle.ResetMeasurements",&DAT_14c763b48,
                L"Reset Vehicle Performance Measurements.");
  atexit(FUN_143f7fa16);
  local_48 = 0;
  FUN_1415c789c(&DAT_14cb99860,L"p.Vehicle.OverlapTestExpansionXY",&DAT_14c763b4c,
                L"Raycast Overlap Test Expansion of Bounding Box in X/Y axes.");
  atexit(FUN_143f7fa5b);
  local_48 = 0;
  FUN_1415c789c(&DAT_14cb99870,L"p.Vehicle.OverlapTestExpansionZ",&DAT_14c763b50,
                L"Raycast Overlap Test Expansion of Bounding Box in Z axis");
  atexit(FUN_143f7faa0);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_149e062c0;
  local_30[3] = &LAB_148adaa68;
  local_48 = 0;
  FUN_14152bcb8(&DAT_14cb99880,L"p.Vehicle.NextDebugPage",
                L"Display the next page of vehicle debug data.",&local_30);
  if (local_28 == 0) {
LAB_143f82e6e:
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
    goto LAB_143f82e6e;
  }
  atexit(FUN_143f7fae5);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_149e062c0;
  local_30[3] = &LAB_148adaa82;
  local_48 = 0;
  FUN_14152bcb8(&DAT_14cb99890,L"p.Vehicle.PrevDebugPage",
                L"Display the previous page of vehicle debug data.",&local_30);
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_143f82f5a;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f82f5a:
  atexit(FUN_143f7fb2a);
  FUN_1446f470e(&DAT_14cb998a0,L"VehicleMovementComp",1);
  FUN_1446f470e(&DAT_14cb998a8,L"VehicleMesh",1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f82ff4 FUN_143f82ff4 body=57 status=ok
// SIG undefined FUN_143f82ff4(void)

void FUN_143f82ff4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99940 == 0) {
    uVar1 = FUN_145a254a5();
    DAT_14cb99940 = FUN_14171c317(FUN_14658e3df,uVar1,L"EGbxAnimTextureType");
  }
  return;
}



// FUNCTION 143f8302d FUN_143f8302d body=57 status=ok
// SIG undefined FUN_143f8302d(void)

void FUN_143f8302d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99958 == 0) {
    uVar1 = FUN_145a254a5();
    DAT_14cb99958 = FUN_14171c317(FUN_14658e40e,uVar1,L"EGbxAnimTexturePrecision");
  }
  return;
}



// FUNCTION 143f83066 FUN_143f83066 body=48 status=ok
// SIG undefined FUN_143f83066(void)

longlong FUN_143f83066(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x718;
  FUN_14105eafa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f830c1 FUN_143f830c1 body=372 status=ok
// SIG undefined FUN_143f830c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f830c1(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  FUN_14282b410(L"/Script/GbxAnimTexture",&PTR_FUN_14b522410,1,0);
  local_48 = "SMInstance";
  local_40 = 10;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb998f0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cb998f8);
  if (cVar1 == '\0') {
    _DAT_14cb998f8 = 0;
    uRam000000014cb99900 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAnimTexture",&PTR_FUN_14b5234e0,1,&PTR_FUN_14b5234b0);
  ppuStack_60 = &PTR_FUN_14b524250;
  local_68 = 1;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxAnimTexture",&PTR_FUN_14b5242c0,3,&PTR_FUN_14b524290);
  local_48 = (char *)0x800000014b524368;
  local_34 = 0xe;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14658e604(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f8327c FUN_143f8327c body=47 status=ok
// SIG undefined FUN_143f8327c(void)

longlong FUN_143f8327c(void)

{
  if (DAT_14cb99a28 == 0) {
    FUN_14000fc22(&DAT_14cb99a28,&PTR_FUN_14b5248c0);
  }
  return DAT_14cb99a28;
}



// FUNCTION 143f832ac FUN_143f832ac body=670 status=ok
// SIG undefined FUN_143f832ac(void)

void FUN_143f832ac(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_28);
            goto LAB_143f8346a;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if ((puVar8 != &local_28) && ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0)) {
          (**(code **)(*plVar4 + 0x100))(plVar4,&local_28,puVar8,(int)plVar4[6]);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_40 = CONCAT44(local_40._4_4_,(int)plVar4[6]);
        local_48 = local_48 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_28,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_28,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
LAB_143f8346a:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f8354b FUN_143f8354b body=91 status=ok
// SIG undefined FUN_143f8354b(void)

void FUN_143f8354b(void)

{
  if (DAT_14cb99a58 != 0) {
    if (DAT_14cb99a50 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb99a50)(DAT_14cb99a50,0);
    FUN_1446efa72(&DAT_14cb99a50,0,0,0x10);
    DAT_14cb99a58 = 0;
  }
  if (DAT_14cb99a50 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f8360a FUN_143f8360a body=1103 status=ok
// SIG undefined FUN_143f8360a(void)

void FUN_143f8360a(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  wchar_t *_Str;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1400b465c();
  FUN_140259cf4();
  local_68 = (wchar_t *)0x0;
  uStack_60 = 0;
  local_a8 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"Discord",L"DiscordAppId");
  local_a8 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"OnlineSubsystemSteam",L"SteamDevAppId",
                (undefined4 *)(param_1 + 0x80));
  local_a8 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"OnlineSubsystemEpic",L"BaseGameItemId",param_1 + 0x60);
  lVar9 = param_1 + 0x50;
  local_a8 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"OnlineSubsystemEpic",L"LiveSandboxId",lVar9);
  lVar10 = param_1 + 0x70;
  local_a8 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"OnlineSubsystemEpic",L"ArtifactId",lVar10);
  local_78 = 0;
  uStack_70 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_a8 = (undefined8 *)0x0;
  FUN_14063337c(&DAT_14c846b20,L"epicsandboxid=",&local_78,1);
  if (1 < (int)uStack_70) {
    FUN_1402980a2(lVar9,local_78,(int)uStack_70 + -1);
  }
  local_88 = 0;
  uStack_80 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_a8 = (undefined8 *)0x0;
  FUN_14063337c(&DAT_14c846b20,L"epicapp=",&local_88,1);
  if (1 < (int)uStack_80) {
    FUN_1402980a2(lVar10,local_88,(int)uStack_80 + -1);
  }
  _Str = local_68;
  if ((int)uStack_60 == 0) {
    _Str = L"";
  }
  lVar7 = _wtoi64(_Str);
  *(longlong *)(param_1 + 0x90) = lVar7;
  cVar5 = FUN_1400245b2(lVar7);
  *(char *)(param_1 + 0x98) = cVar5;
  if (cVar5 != '\0') {
    plVar8 = (longlong *)FUN_140a68038(1);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,&local_90);
      plVar4 = DAT_14cb99a60;
      if (local_90 == DAT_14cb8e468) {
        if (DAT_14cb99a60 != (longlong *)0x0) {
          uVar1 = *(undefined4 *)(param_1 + 0x80);
          lVar9 = DAT_14cb99a60[0x1c];
          if (lVar9 == 0) {
            lVar9 = (**(code **)(*DAT_14cb99a60 + 0x30))();
            plVar4[0x1c] = lVar9;
          }
          (**(code **)(lVar9 + 8))(lVar9,uVar1);
        }
      }
      else {
        (**(code **)(*plVar8 + 0x10))(plVar8,&local_90);
        FUN_1446f470e(&local_98,L"EPIC",1);
        if (local_90 == local_98) {
          FUN_148adf3c0(lVar9,param_1 + 0x60,lVar10);
        }
      }
    }
    if (DAT_14cb99a58 != 3) {
      FUN_1446efa72(&DAT_14cb99a50,0,3,0x10);
      DAT_14cb99a58 = 3;
    }
    puVar3 = DAT_14cb99a50;
    *DAT_14cb99a50 = &PTR_LAB_149e063e0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar3[2] = lVar10;
    *puVar3 = &PTR_FUN_14b525050;
    puVar3[3] = 0;
    if (param_1 == 0) {
      iVar6 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xc);
      *(uint *)(puVar3 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar6 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar6 = *(int *)(lVar9 + 0x10);
        bVar12 = iVar6 == 0;
        if (bVar12) {
          *(int *)(lVar9 + 0x10) = iVar11;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar6 = iVar11;
        }
      }
    }
    *(int *)((longlong)puVar3 + 0x1c) = iVar6;
    puVar3[4] = FUN_143f83a5a;
    *(undefined4 *)(puVar3 + 5) = 0;
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f83a5a FUN_143f83a5a body=988 status=ok
// SIG undefined FUN_143f83a5a(void)

void FUN_143f83a5a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  undefined8 **local_c8;
  undefined8 *local_b8;
  int local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined **local_78;
  uint local_70;
  undefined4 uStack_6c;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14607a1a4(param_2,&local_88,0);
  iVar12 = DAT_14cb99a00 + -1;
  puVar10 = DAT_14cb999f8;
  if (DAT_14cb99a00 == 0) {
    puVar10 = &DAT_149dfb77a;
    iVar12 = 0;
  }
  cVar6 = FUN_140c540b4(&local_88,puVar10,iVar12,0);
  if (cVar6 == '\0') {
    FUN_14020fad6(&local_88,&DAT_149dfb77a);
  }
  if ((int)uStack_80 < 2) goto LAB_143f83ae9;
  uVar7 = FUN_1400b465c(param_1);
  FUN_1463caa92(uVar7,&local_78);
  if ((&DAT_149fc1b6e)[local_60] == '\x01') {
    if (((longlong *)CONCAT44(uStack_6c,local_70) != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x28))(), cVar6 != '\0')) {
LAB_143f83bb8:
      FUN_148adf5dc(param_1,&local_a8);
      (**(code **)(*local_a8 + 0x18))(local_a8,&local_98,&local_88);
      plVar3 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (local_98 == 0) {
        FUN_148ae0396(param_1 + 0x38);
      }
      else {
        FUN_148adf5dc(param_1,&local_a8);
        local_b8 = (undefined8 *)0x0;
        local_b0 = 0;
        FUN_1446efa72(&local_b8,0,3,0x10);
        puVar5 = local_b8;
        local_b0 = 3;
        *local_b8 = &PTR_LAB_14b4e4ea0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar13 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar13 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar13;
        local_b8[2] = lVar9;
        *local_b8 = &PTR_FUN_14b5250c0;
        local_b8[3] = 0;
        iVar12 = 0;
        if (param_1 != 0) {
          uVar4 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_b8 + 3) = uVar4;
          if ((int)uVar4 < DAT_14c9647dc) {
            lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          }
          else {
            lVar13 = 0;
          }
          iVar12 = *(int *)(lVar13 + 0x10);
          if (*(int *)(lVar13 + 0x10) == 0) {
            LOCK();
            iVar12 = DAT_14c964868 + 1;
            UNLOCK();
            iVar11 = DAT_14c964868 + 1;
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar12;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar11);
            }
            LOCK();
            iVar12 = *(int *)(lVar13 + 0x10);
            bVar14 = iVar12 == 0;
            if (bVar14) {
              *(int *)(lVar13 + 0x10) = iVar11;
              iVar12 = 0;
            }
            UNLOCK();
            if (bVar14) {
              iVar12 = iVar11;
            }
          }
        }
        *(int *)((longlong)puVar5 + 0x1c) = iVar12;
        puVar5[4] = FUN_143f83e42;
        *(undefined4 *)(puVar5 + 5) = 0;
        uVar7 = FUN_14127b0d4(&local_78);
        uVar8 = FUN_14127b0d4(&local_78);
        local_c8 = &local_b8;
        (**(code **)(*local_a8 + 0x1b0))(local_a8,uVar8,local_98,uVar7);
        if (local_b0 == 0) {
LAB_143f83d66:
          if (local_b8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_b8 != (undefined8 *)0x0) {
          (**(code **)*local_b8)(local_b8,0);
          FUN_1446efa72(&local_b8,0,0,0x10);
          local_b0 = 0;
          goto LAB_143f83d66;
        }
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_a0 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar2 = (int *)((longlong)local_a0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_a0 + 0x10))(local_a0);
            }
          }
        }
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_90 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)local_90 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_90 + 0x10))(local_90);
          }
        }
      }
    }
  }
  else if ((local_70 & 0xffffff) != 0) goto LAB_143f83bb8;
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
LAB_143f83ae9:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f83e42 FUN_143f83e42 body=370 status=ok
// SIG undefined FUN_143f83e42(void)

void FUN_143f83e42(longlong *param_1,undefined4 param_2,char param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_60 [16];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_3 != '\0') && (*(longlong *)(param_4 + 8) != 0)) &&
     (*(longlong **)(param_4 + 0x100) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_4 + 0x100) + 0x20))();
    if (cVar2 != '\0') {
      FUN_1400b465c(param_1);
      local_40 = (longlong *)0x0;
      (**(code **)(*param_1 + 0x180))(param_1);
      plVar3 = (longlong *)FUN_1401e3228(&local_40);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x80))(plVar3,&local_40);
        if (local_40 != (longlong *)0x0) {
          FUN_148adf5dc(param_1,&local_50);
          (**(code **)(*local_40 + 0x110))(local_40,local_60,param_2);
          local_68 = param_4;
          (**(code **)(*local_50 + 0x348))(local_50,1,param_2,local_60);
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_48 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar1 = (int *)((longlong)local_48 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_48 + 0x10))(local_48);
              }
            }
          }
        }
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_38 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar1 = (int *)((longlong)local_38 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_38 + 0x10))(local_38);
            }
          }
        }
      }
      if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 143f83fcc FUN_143f83fcc body=111 status=ok
// SIG undefined FUN_143f83fcc(void)

void FUN_143f83fcc(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      local_14 = param_2;
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_14);
      plVar1 = (longlong *)param_1[7];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
      }
    }
    FUN_1400020a8(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f8403c FUN_143f8403c body=141 status=ok
// SIG undefined FUN_143f8403c(void)

void FUN_143f8403c(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar3 != lVar1) {
      do {
        plVar2 = *(longlong **)(lVar3 + 0x40);
        local_44 = param_2;
        local_40 = param_3;
        if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_Xbad_function_call();
        }
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_44,&local_40);
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f8412e FUN_143f8412e body=223 status=ok
// SIG undefined FUN_143f8412e(void)

void FUN_143f8412e(longlong param_1,undefined8 *param_2)

{
  char *_Str;
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_168 [32];
  longlong local_148 [2];
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  _Str = (char *)*param_2;
  plVar1 = *(longlong **)(param_1 + 8);
  local_38 = 0;
  if (_Str == (char *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar2 = strlen(_Str);
    FUN_1446e6fe8(local_138,_Str,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(local_148,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (((int)plVar1[1] != 0) && (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,local_148);
  }
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f84216 FUN_143f84216 body=9 status=ok
// SIG undefined FUN_143f84216(void)

void FUN_143f84216(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 143f84291 FUN_143f84291 body=885 status=ok
// SIG undefined FUN_143f84291(void)

void FUN_143f84291(void)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_5c [4];
  wchar_t *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&DAT_14cb999e8,"Party");
  atexit((_func_5014 *)&LAB_143f83238);
  FUN_1400b22c2(&DAT_14cb999f8,&DAT_14b524850);
  atexit((_func_5014 *)&LAB_143f83249);
  FUN_1400b22c2(&DAT_14cb99a08,"Match");
  atexit((_func_5014 *)&LAB_143f8325a);
  FUN_1400b22c2(&DAT_14cb99a18,"Spectate");
  atexit((_func_5014 *)&LAB_143f8326b);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxDiscord",&PTR_FUN_14b524cc0,1,0);
  FUN_1446f470e(&DAT_14cb99a74,L"UNSET",1);
  local_58 = L"Online";
  local_50 = 6;
  FUN_1446e940c(&local_44,&local_58);
  local_58 = L"OnlinePresence";
  local_50 = 0xe;
  FUN_1446e940c(local_5c,&local_58);
  local_58 = L"Online";
  local_50 = 6;
  FUN_140208c1e(&DAT_14cb99a80,local_5c,&local_44,&local_58);
  atexit((_func_5014 *)&LAB_143f835a6);
  local_58 = L"Offline";
  local_50 = 7;
  FUN_1446e940c(&local_44,&local_58);
  local_58 = L"OnlinePresence";
  local_50 = 0xe;
  FUN_1446e940c(local_5c,&local_58);
  local_58 = L"Offline";
  local_50 = 7;
  FUN_140208c1e(&DAT_14cb99a90,local_5c,&local_44,&local_58);
  atexit((_func_5014 *)&LAB_143f835ba);
  local_58 = L"Away";
  local_50 = 4;
  FUN_1446e940c(&local_44,&local_58);
  local_58 = L"OnlinePresence";
  local_50 = 0xe;
  FUN_1446e940c(local_5c,&local_58);
  local_58 = L"Away";
  local_50 = 4;
  FUN_140208c1e(&DAT_14cb99aa0,local_5c,&local_44,&local_58);
  atexit((_func_5014 *)&LAB_143f835ce);
  local_58 = L"DoNotDisturb";
  local_50 = 0xc;
  FUN_1446e940c(&local_44,&local_58);
  local_58 = L"OnlinePresence";
  local_50 = 0xe;
  FUN_1446e940c(local_5c,&local_58);
  local_58 = L"Do Not Disturb";
  local_50 = 0xe;
  FUN_140208c1e(&DAT_14cb99ab0,local_5c,&local_44,&local_58);
  atexit((_func_5014 *)&LAB_143f835e2);
  local_58 = L"Chat";
  local_50 = 4;
  FUN_1446e940c(&local_44,&local_58);
  local_58 = L"OnlinePresence";
  local_50 = 0xe;
  FUN_1446e940c(local_5c,&local_58);
  local_58 = L"Chat";
  local_50 = 4;
  FUN_140208c1e(&DAT_14cb99ac0,local_5c,&local_44,&local_58);
  atexit((_func_5014 *)&LAB_143f835f6);
  local_58 = (wchar_t *)0x800000014b524f78;
  local_44 = 10;
  local_50 = FUN_14577453c(L"GbxDiscord",&local_44);
  local_4c = 1;
  FUN_14658e96a(&local_58);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f84608 FUN_143f84608 body=55 status=ok
// SIG undefined FUN_143f84608(void)

void FUN_143f84608(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99ae0 == 0) {
    uVar1 = FUN_1418c20e8();
    DAT_14cb99ae0 = FUN_14171c317(FUN_14658eacd,uVar1,L"DeviceType");
  }
  return;
}



// FUNCTION 143f8463f FUN_143f8463f body=55 status=ok
// SIG undefined FUN_143f8463f(void)

void FUN_143f8463f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99af8 == 0) {
    uVar1 = FUN_1418c20e8();
    DAT_14cb99af8 = FUN_14171c317(FUN_14658eafc,uVar1,L"EAudioFadeModel");
  }
  return;
}



// FUNCTION 143f84676 FUN_143f84676 body=55 status=ok
// SIG undefined FUN_143f84676(void)

void FUN_143f84676(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99b10 == 0) {
    uVar1 = FUN_1418c20e8();
    DAT_14cb99b10 = FUN_14171c317(FUN_14658eb2b,uVar1,L"ChannelType");
  }
  return;
}



// FUNCTION 143f846ad FUN_143f846ad body=55 status=ok
// SIG undefined FUN_143f846ad(void)

void FUN_143f846ad(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99b28 == 0) {
    uVar1 = FUN_1418c20e8();
    DAT_14cb99b28 = FUN_14171c317(FUN_14658eb5a,uVar1,L"ConnectionState");
  }
  return;
}



// FUNCTION 143f846e4 FUN_143f846e4 body=55 status=ok
// SIG undefined FUN_143f846e4(void)

void FUN_143f846e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99b40 == 0) {
    uVar1 = FUN_1418c20e8();
    DAT_14cb99b40 = FUN_14171c317(FUN_14658eb89,uVar1,L"LoginState");
  }
  return;
}



// FUNCTION 143f8471b FUN_143f8471b body=55 status=ok
// SIG undefined FUN_143f8471b(void)

void FUN_143f8471b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99b58 == 0) {
    uVar1 = FUN_1418c20e8();
    DAT_14cb99b58 = FUN_14171c317(FUN_14658ebb8,uVar1,L"SubscriptionMode");
  }
  return;
}



// FUNCTION 143f84752 FUN_143f84752 body=55 status=ok
// SIG undefined FUN_143f84752(void)

void FUN_143f84752(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99b70 == 0) {
    uVar1 = FUN_1418c20e8();
    DAT_14cb99b70 = FUN_14171c317(FUN_14658ebe7,uVar1,L"SubscriptionReply");
  }
  return;
}



// FUNCTION 143f84789 FUN_143f84789 body=55 status=ok
// SIG undefined FUN_143f84789(void)

void FUN_143f84789(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99b88 == 0) {
    uVar1 = FUN_1418c20e8();
    DAT_14cb99b88 = FUN_14171c317(FUN_14658ec16,uVar1,L"TransmissionMode");
  }
  return;
}



// FUNCTION 143f847c0 FUN_143f847c0 body=55 status=ok
// SIG undefined FUN_143f847c0(void)

void FUN_143f847c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99ba0 == 0) {
    uVar1 = FUN_1418c20e8();
    DAT_14cb99ba0 = FUN_14171c317(FUN_14658ec45,uVar1,L"ParticipantSpeakingUpdateRate");
  }
  return;
}



// FUNCTION 143f847f7 FUN_143f847f7 body=55 status=ok
// SIG undefined FUN_143f847f7(void)

void FUN_143f847f7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99bb8 == 0) {
    uVar1 = FUN_1418c20e8();
    DAT_14cb99bb8 = FUN_14171c317(FUN_14658ec74,uVar1,L"TTSDestination");
  }
  return;
}



// FUNCTION 143f8482e FUN_143f8482e body=55 status=ok
// SIG undefined FUN_143f8482e(void)

void FUN_143f8482e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99bd0 == 0) {
    uVar1 = FUN_1418c20e8();
    DAT_14cb99bd0 = FUN_14171c317(FUN_14658eca3,uVar1,L"TTSMessageState");
  }
  return;
}



// FUNCTION 143f84865 FUN_143f84865 body=55 status=ok
// SIG undefined FUN_143f84865(void)

void FUN_143f84865(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99be8 == 0) {
    uVar1 = FUN_1418c20e8();
    DAT_14cb99be8 = FUN_14171c317(FUN_14658ecd2,uVar1,L"PresenceStatus");
  }
  return;
}



// FUNCTION 143f848d0 FUN_143f848d0 body=491 status=ok
// SIG undefined FUN_143f848d0(void)

void FUN_143f848d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ushort uVar7;
  longlong lVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  undefined **local_68;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = (int)param_2[1];
  if (iVar3 < 2) {
LAB_143f848f9:
    puVar6 = (undefined8 *)0x0;
  }
  else if (iVar3 == DAT_14cb99c18) {
    puVar6 = (undefined8 *)0x0;
    lVar8 = 0;
    while( true ) {
      uVar7 = *(ushort *)(*param_2 + lVar8);
      uVar4 = (ulonglong)uVar7;
      uVar9 = *(ushort *)(DAT_14cb99c10 + lVar8);
      if (uVar7 != uVar9) {
        if ((uVar9 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          uVar11 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar11]) goto LAB_143f849a7;
        }
        if (uVar7 == uVar9) goto LAB_143f848f9;
        goto LAB_143f849e2;
      }
      if (uVar7 == 0) break;
LAB_143f849a7:
      lVar8 = lVar8 + 2;
    }
  }
  else {
    if (DAT_14cb99c18 + iVar3 == 1) goto LAB_143f848f9;
LAB_143f849e2:
    uVar4 = 0;
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    if (0 < iVar2) {
      lVar8 = 0;
      uVar4 = 0;
      do {
        uVar7 = *(ushort *)(*param_2 + lVar8 * 2);
        uVar5 = ((uint)(0x19 < uVar7 - 0x61) * 0x20 + (uint)uVar7) - 0x20;
        uVar10 = (uint)(uVar4 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar4 ^ uVar5) & 0xff) * 4);
        uVar4 = (ulonglong)
                (uVar10 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar2 != (int)lVar8);
    }
    iVar3 = FUN_1413fe28c((longlong *)(param_1 + 0xf8),uVar4,param_2);
    if (iVar3 == -1) goto LAB_143f84a8b;
    lVar8 = *(longlong *)(param_1 + 0xf8);
    if (lVar8 + (longlong)iVar3 * 0x20 == 0) goto LAB_143f84a8b;
    puVar6 = (undefined8 *)(lVar8 + (longlong)iVar3 * 0x20 + 0x10);
  }
  cVar1 = FUN_143f84abc(param_1 + 0x158,param_2);
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x160) < 2) {
      local_68 = &PTR_FUN_14b5259c0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      FUN_148aeab04(param_1 + 0x38,&local_68);
      local_68 = &PTR_FUN_14b5259c0;
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_148aeab04(param_1 + 0x38,*puVar6);
    }
  }
LAB_143f84a8b:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f84abc FUN_143f84abc body=187 status=ok
// SIG undefined FUN_143f84abc(void)

ulonglong FUN_143f84abc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  wchar_t *_Str1;
  int iVar2;
  wchar_t *pwVar3;
  undefined8 unaff_RBP;
  undefined7 uVar5;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar5 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if ((int)uVar1 < 2) {
LAB_143f84b08:
    if (1 < *(int *)(param_1 + 1)) {
      *(undefined4 *)(param_1 + 1) = 0;
      uVar4 = CONCAT71(uVar5,1);
      if (*(int *)((longlong)param_1 + 0xc) != 0) {
        FUN_1446f8c06(param_1,0);
      }
      goto LAB_143f84b6a;
    }
  }
  else {
    pwVar3 = DAT_14cb99c10;
    if (DAT_14cb99c18 == 0) {
      pwVar3 = L"";
    }
    _Str1 = (wchar_t *)*param_2;
    iVar2 = wcscmp(_Str1,pwVar3);
    if (iVar2 == 0) goto LAB_143f84b08;
    if (*(int *)(param_1 + 1) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)*param_1;
    }
    iVar2 = wcscmp(pwVar3,_Str1);
    if (iVar2 != 0) {
      uVar4 = CONCAT71(uVar5,1);
      if (param_1 != param_2) {
        *(uint *)(param_1 + 1) = uVar1;
        FUN_1446dd670(param_1,(ulonglong)uVar1,*(undefined4 *)((longlong)param_1 + 0xc));
        memcpy((void *)*param_1,_Str1,(ulonglong)uVar1 * 2);
      }
      goto LAB_143f84b6a;
    }
  }
  uVar4 = 0;
LAB_143f84b6a:
  return uVar4 & 0xffffffff;
}



// FUNCTION 143f84b78 FUN_143f84b78 body=818 status=ok
// SIG undefined FUN_143f84b78(void)

void FUN_143f84b78(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [40];
  undefined **local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
    } while (iVar2 != iVar3);
  }
  plVar4 = (longlong *)FUN_140b80422(param_1 + 0x1c0);
  iVar2 = (int)param_3[1];
  if (1 < iVar2) {
    if (iVar2 == DAT_14cb99c18) {
      lVar7 = 0;
      while( true ) {
        uVar8 = *(ushort *)(*param_3 + lVar7);
        uVar5 = (ulonglong)uVar8;
        uVar9 = *(ushort *)(DAT_14cb99c10 + lVar7);
        if (uVar8 != uVar9) break;
        if (uVar8 == 0) goto LAB_143f84c3a;
LAB_143f84d48:
        lVar7 = lVar7 + 2;
      }
      if ((uVar9 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar11 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar11]) goto LAB_143f84d48;
      }
      if (uVar8 != uVar9) goto LAB_143f84e03;
    }
    else if (DAT_14cb99c18 + iVar2 != 1) {
LAB_143f84e03:
      iVar3 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      if (0 < iVar3) {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
        } while (iVar3 != iVar2);
      }
      iVar2 = FUN_1413fe28c((longlong *)(param_1 + 0xf8));
      if ((iVar2 == -1) ||
         (((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0xf8) + 0x10U & 0xffffffffffffffef) == 0
         )) goto LAB_143f84dc5;
    }
  }
LAB_143f84c3a:
  cVar1 = FUN_143f84abc(plVar4);
  if (cVar1 != '\0') {
    if (1 < (int)plVar4[1]) {
      lVar7 = 0;
      uVar5 = 0;
      do {
        uVar8 = *(ushort *)(*plVar4 + lVar7 * 2);
        uVar6 = ((uint)(0x19 < uVar8 - 0x61) * 0x20 + (uint)uVar8) - 0x20;
        uVar10 = (uint)(uVar5 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar10 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar7 = lVar7 + 1;
      } while ((int)plVar4[1] + -1 != (int)lVar7);
      iVar2 = FUN_1413fe28c((longlong *)(param_1 + 0xf8),uVar5,plVar4);
      if (((iVar2 != -1) &&
          (lVar7 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0xf8),
          plVar4 = (longlong *)(lVar7 + 0x10), plVar4 != (longlong *)0x0 && lVar7 != 0)) &&
         (*plVar4 != 0)) {
        FUN_148aeab04(param_1 + 0x38);
        goto LAB_143f84dc5;
      }
    }
    local_70 = &PTR_FUN_14b5259c0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_148aeab04(param_1 + 0x38,&local_70);
    local_70 = &PTR_FUN_14b5259c0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
LAB_143f84dc5:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f84eac FUN_143f84eac body=375 status=ok
// SIG undefined FUN_143f84eac(void)

longlong FUN_143f84eac(longlong param_1)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar3 = *(int *)(param_1 + 0x150);
  if (iVar3 < 2) {
LAB_143f85006:
    param_1 = param_1 + 0x68;
  }
  else {
    plVar5 = (longlong *)(param_1 + 0x148);
    plVar1 = (longlong *)(param_1 + 0xf8);
    uVar7 = 0;
    iVar8 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar8 = 0;
    }
    if (iVar8 < 1) {
      iVar3 = FUN_1413fe28c(plVar1,0,plVar5);
      if (iVar3 == -1) goto LAB_143f85006;
    }
    else {
      lVar4 = 0;
      uVar6 = 0;
      do {
        uVar2 = *(ushort *)(*plVar5 + lVar4 * 2);
        uVar7 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
        uVar9 = (uint)(uVar6 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar7) & 0xff) * 4);
        uVar6 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar7 >> 8 & 0xff) * 4));
        lVar4 = lVar4 + 1;
      } while (iVar8 != (int)lVar4);
      iVar3 = FUN_1413fe28c(plVar1,uVar6,plVar5);
      if (iVar3 == -1) goto LAB_143f85006;
      if (iVar8 < 1) {
        uVar7 = 0;
      }
      else {
        lVar4 = 0;
        uVar7 = 0;
        do {
          uVar2 = *(ushort *)(*plVar5 + lVar4 * 2);
          uVar9 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
          uVar7 = uVar7 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar7 ^ uVar9) & 0xff) * 4);
          uVar7 = uVar7 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar9 >> 8 & 0xff) * 4);
          lVar4 = lVar4 + 1;
        } while (iVar8 != (int)lVar4);
      }
    }
    iVar3 = FUN_1413fe28c(plVar1,uVar7,plVar5);
    if (iVar3 == -1) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)iVar3 * 0x20 + *plVar1;
    }
    plVar5 = (longlong *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    param_1 = *plVar5;
  }
  return param_1;
}



// FUNCTION 143f85024 FUN_143f85024 body=375 status=ok
// SIG undefined FUN_143f85024(void)

longlong FUN_143f85024(longlong param_1)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar3 = *(int *)(param_1 + 0x160);
  if (iVar3 < 2) {
LAB_143f8517e:
    param_1 = param_1 + 0x68;
  }
  else {
    plVar5 = (longlong *)(param_1 + 0x158);
    plVar1 = (longlong *)(param_1 + 0xf8);
    uVar7 = 0;
    iVar8 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar8 = 0;
    }
    if (iVar8 < 1) {
      iVar3 = FUN_1413fe28c(plVar1,0,plVar5);
      if (iVar3 == -1) goto LAB_143f8517e;
    }
    else {
      lVar4 = 0;
      uVar6 = 0;
      do {
        uVar2 = *(ushort *)(*plVar5 + lVar4 * 2);
        uVar7 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
        uVar9 = (uint)(uVar6 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar7) & 0xff) * 4);
        uVar6 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar7 >> 8 & 0xff) * 4));
        lVar4 = lVar4 + 1;
      } while (iVar8 != (int)lVar4);
      iVar3 = FUN_1413fe28c(plVar1,uVar6,plVar5);
      if (iVar3 == -1) goto LAB_143f8517e;
      if (iVar8 < 1) {
        uVar7 = 0;
      }
      else {
        lVar4 = 0;
        uVar7 = 0;
        do {
          uVar2 = *(ushort *)(*plVar5 + lVar4 * 2);
          uVar9 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
          uVar7 = uVar7 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar7 ^ uVar9) & 0xff) * 4);
          uVar7 = uVar7 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar9 >> 8 & 0xff) * 4);
          lVar4 = lVar4 + 1;
        } while (iVar8 != (int)lVar4);
      }
    }
    iVar3 = FUN_1413fe28c(plVar1,uVar7,plVar5);
    if (iVar3 == -1) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)iVar3 * 0x20 + *plVar1;
    }
    plVar5 = (longlong *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    param_1 = *plVar5;
  }
  return param_1;
}



// FUNCTION 143f8519c FUN_143f8519c body=216 status=ok
// SIG undefined FUN_143f8519c(void)

void FUN_143f8519c(longlong *param_1,longlong param_2)

{
  char *_Str;
  size_t sVar1;
  undefined1 auStack_168 [32];
  longlong local_148 [2];
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  _Str = *(char **)(param_2 + 0x38);
  if (_Str != (char *)0x0) {
    local_38 = 0;
    sVar1 = strlen(_Str);
    FUN_1446e6fe8(local_138,_Str,sVar1 & 0xffffffff,1);
    FUN_140056680(local_148,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x80))(param_1,local_148);
    if (local_148[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_168);
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000143f85277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x60))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f85282 FUN_143f85282 body=3763 status=ok
// SIG undefined FUN_143f85282(void)

void FUN_143f85282(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  void **ppvVar3;
  ulonglong uVar4;
  byte bVar5;
  ushort uVar6;
  char *pcVar7;
  void *pvVar8;
  undefined **ppuVar9;
  int iVar10;
  uint uVar11;
  size_t sVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined2 **ppuVar16;
  int iVar17;
  int iVar18;
  wchar_t *_Str1;
  undefined2 *puVar19;
  undefined2 **_Str2;
  uint uVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined2 ***pppuVar25;
  uint *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  int local_204;
  longlong *local_200;
  uint *local_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  longlong local_1c8;
  undefined8 uStack_1c0;
  void *local_1b8;
  uint local_1b0;
  undefined2 *local_1a8;
  uint local_1a0;
  undefined2 **local_198;
  undefined8 local_190;
  longlong *plStack_188;
  void *local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined1 local_164 [4];
  undefined **local_160;
  undefined2 ***local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*(int *)(param_2 + 0x40) < 1) goto LAB_143f86108;
  local_200 = (longlong *)(param_1 + 0xf8);
  lVar23 = 0;
  local_218 = param_2;
  local_210 = param_1;
  do {
    if (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x48) + lVar23 * 8) + 0x10) != 2) {
      FUN_1400b22c2(&local_160);
      ppuVar9 = local_160;
      iVar10 = (int)local_158 + -1;
      if ((int)local_158 == 0) {
        iVar10 = 0;
      }
      if (0 < iVar10) {
        iVar22 = 0;
        do {
          iVar22 = iVar22 + 1;
        } while (iVar10 != iVar22);
      }
      iVar10 = FUN_1413fe28c(local_200);
      if (ppuVar9 != (undefined **)0x0) {
        FUN_1400020a8(ppuVar9);
      }
      param_2 = local_218;
      if (iVar10 == -1) {
        local_198 = (undefined2 **)
                    FUN_143f86136(*(undefined8 *)(*(longlong *)(local_218 + 0x48) + lVar23 * 8));
        local_160 = (undefined **)(**(code **)(*local_198 + 8))(local_198);
        local_158 = &local_198;
        FUN_145973498(local_200,&local_1a8);
        FUN_148aeab04(param_1 + 8,local_198);
      }
    }
    lVar23 = lVar23 + 1;
  } while (lVar23 < *(int *)(param_2 + 0x40));
  FUN_1400b22c2(&local_1a8,**(undefined8 **)(param_2 + 0x60));
  pcVar7 = *(char **)(*(longlong *)(param_2 + 0x60) + 8);
  local_60 = 0;
  if (pcVar7 == (char *)0x0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    sVar12 = strlen(pcVar7);
    FUN_1446e6fe8(&local_160,pcVar7,sVar12 & 0xffffffff,1);
  }
  lVar23 = local_210;
  FUN_140056680(&local_1b8,local_58);
  pvVar8 = local_1b8;
  local_198 = (undefined2 **)&PTR_FUN_14b5259c0;
  local_190 = (void *)0x0;
  local_180 = (void *)0x0;
  uStack_178 = 0;
  lVar29 = (longlong)(int)local_1b0;
  plStack_188 = (longlong *)(ulonglong)local_1b0;
  if (lVar29 == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1446dd670(&local_190,local_1b0,0);
    memcpy(local_190,pvVar8,lVar29 * 2);
    iVar10 = uStack_178._4_4_;
  }
  uVar20 = local_1a0;
  puVar19 = local_1a8;
  lVar29 = (longlong)(int)local_1a0;
  uStack_178 = CONCAT44(uStack_178._4_4_,local_1a0);
  if (local_1a0 == 0 && iVar10 == 0) {
    uStack_178 = (ulonglong)local_1a0;
  }
  else {
    FUN_1446dd670(&local_180,local_1a0);
    if (uVar20 != 0) {
      memcpy(local_180,puVar19,lVar29 * 2);
    }
  }
  pvVar8 = local_190;
  local_170 = 2;
  puVar14 = (undefined8 *)(lVar23 + 0xa0);
  if (puVar14 != &local_190) {
    iVar10 = (int)plStack_188;
    lVar29 = (longlong)(int)plStack_188;
    *(int *)(lVar23 + 0xa8) = (int)plStack_188;
    if ((int)plStack_188 == 0 && *(int *)(lVar23 + 0xac) == 0) {
      *(undefined4 *)(lVar23 + 0xac) = 0;
    }
    else {
      FUN_1446dd670(puVar14,(ulonglong)plStack_188 & 0xffffffff);
      if (iVar10 != 0) {
        memcpy((void *)*puVar14,pvVar8,lVar29 * 2);
      }
    }
  }
  pvVar8 = local_180;
  ppvVar3 = (void **)(lVar23 + 0xb0);
  if (ppvVar3 != &local_180) {
    iVar10 = (int)uStack_178;
    lVar29 = (longlong)(int)uStack_178;
    *(int *)(lVar23 + 0xb8) = (int)uStack_178;
    if ((int)uStack_178 == 0 && *(int *)(lVar23 + 0xbc) == 0) {
      *(undefined4 *)(lVar23 + 0xbc) = 0;
    }
    else {
      FUN_1446dd670(ppvVar3,uStack_178 & 0xffffffff);
      if (iVar10 != 0) {
        memcpy(*ppvVar3,pvVar8,lVar29 * 2);
      }
    }
  }
  *(undefined1 *)(lVar23 + 0xc0) = local_170;
  local_198 = (undefined2 **)&PTR_FUN_14b5259c0;
  if (local_180 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_190 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_1b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar29 = local_218;
  FUN_1400b22c2(&local_1a8,**(undefined8 **)(local_218 + 0x68));
  pcVar7 = *(char **)(*(longlong *)(lVar29 + 0x68) + 8);
  local_60 = 0;
  if (pcVar7 == (char *)0x0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    sVar12 = strlen(pcVar7);
    FUN_1446e6fe8(&local_160,pcVar7,sVar12 & 0xffffffff,1);
  }
  FUN_140056680(&local_1b8,local_58);
  pvVar8 = local_1b8;
  local_198 = (undefined2 **)&PTR_FUN_14b5259c0;
  local_190 = (longlong *)0x0;
  local_180 = (void *)0x0;
  uStack_178 = 0;
  plStack_188 = (longlong *)(ulonglong)local_1b0;
  if ((longlong)(int)local_1b0 == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1446dd670(&local_190,local_1b0,0);
    memcpy(local_190,pvVar8,(longlong)(int)local_1b0 * 2);
    iVar10 = uStack_178._4_4_;
  }
  uVar20 = local_1a0;
  puVar19 = local_1a8;
  lVar29 = (longlong)(int)local_1a0;
  uStack_178 = CONCAT44(uStack_178._4_4_,local_1a0);
  if (local_1a0 == 0 && iVar10 == 0) {
    uStack_178 = (ulonglong)local_1a0;
  }
  else {
    FUN_1446dd670(&local_180,local_1a0);
    if (uVar20 != 0) {
      memcpy(local_180,puVar19,lVar29 * 2);
    }
  }
  plVar2 = local_190;
  local_170 = 3;
  puVar14 = (undefined8 *)(lVar23 + 0xd0);
  if (puVar14 != &local_190) {
    iVar10 = (int)plStack_188;
    lVar29 = (longlong)(int)plStack_188;
    *(int *)(lVar23 + 0xd8) = (int)plStack_188;
    if ((int)plStack_188 == 0 && *(int *)(lVar23 + 0xdc) == 0) {
      *(undefined4 *)(lVar23 + 0xdc) = 0;
    }
    else {
      FUN_1446dd670(puVar14,(ulonglong)plStack_188 & 0xffffffff);
      if (iVar10 != 0) {
        memcpy((void *)*puVar14,plVar2,lVar29 * 2);
      }
    }
  }
  pvVar8 = local_180;
  ppvVar3 = (void **)(lVar23 + 0xe0);
  if (ppvVar3 != &local_180) {
    iVar10 = (int)uStack_178;
    lVar29 = (longlong)(int)uStack_178;
    *(int *)(lVar23 + 0xe8) = (int)uStack_178;
    if ((int)uStack_178 == 0 && *(int *)(lVar23 + 0xec) == 0) {
      *(undefined4 *)(lVar23 + 0xec) = 0;
    }
    else {
      FUN_1446dd670(ppvVar3,uStack_178 & 0xffffffff);
      if (iVar10 != 0) {
        memcpy(*ppvVar3,pvVar8,lVar29 * 2);
      }
    }
  }
  *(undefined1 *)(lVar23 + 0xf0) = local_170;
  local_198 = (undefined2 **)&PTR_FUN_14b5259c0;
  if (local_180 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_190 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_1b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_160 = &PTR_FUN_14b526f58;
  local_158 = (undefined2 ***)0x0;
  uStack_150 = 0;
  local_148 = 0;
  uVar20 = *(uint *)(lVar23 + 0x120);
  if (uVar20 == 0) {
    uVar28 = 1;
    uVar24 = 0;
    iVar10 = 0;
    uVar11 = 0;
  }
  else {
    puVar13 = *(uint **)(lVar23 + 0x118);
    if (*(uint **)(lVar23 + 0x118) == (uint *)0x0) {
      puVar13 = (uint *)(lVar23 + 0x108);
    }
    uVar11 = *puVar13;
    if (uVar11 == 0) {
      iVar10 = uVar20 + 0x1e;
      if (-1 < (int)(uVar20 - 1)) {
        iVar10 = uVar20 - 1;
      }
      uVar24 = 0;
      uVar28 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar28 = uVar24;
      }
      iVar10 = 0;
      do {
        if (uVar28 == uVar24) goto LAB_143f85c42;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar13[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar24 = 0;
      iVar10 = 0;
    }
    uVar28 = (ulonglong)(-uVar11 & uVar11);
    uVar4 = uVar28 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    uVar11 = (iVar10 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
    if ((int)uVar20 <= (int)uVar11) {
      uVar11 = uVar20;
    }
  }
  if (uVar11 != uVar20) {
    uVar21 = 0xffffffff;
    lVar29 = local_218;
    local_1f8 = (uint *)(lVar23 + 0x108);
    local_1f0 = (ulonglong)uVar20;
    do {
      lVar23 = *local_200;
      lVar30 = (longlong)(int)uVar11 * 0x20;
      local_198 = (undefined2 **)0x0;
      uVar20 = *(uint *)(lVar23 + 8 + lVar30);
      pvVar8 = *(void **)(lVar23 + lVar30);
      local_190 = (longlong *)CONCAT44(local_190._4_4_,uVar20);
      local_204 = iVar10;
      if ((longlong)(int)uVar20 == 0) {
        local_190 = (longlong *)(ulonglong)uVar20;
      }
      else {
        FUN_1446dd670(&local_198,uVar20,0);
        memcpy(local_198,pvVar8,(longlong)(int)uVar20 * 2);
      }
      puVar13 = local_1f8;
      plStack_188 = *(longlong **)(lVar23 + lVar30 + 0x10);
      puVar14 = (undefined8 *)(**(code **)(*plStack_188 + 0x10))();
      lVar30 = local_210;
      piVar1 = (int *)(lVar29 + 0x40);
      if (0 < (longlong)*piVar1) {
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(puVar14 + 1) != 0) {
          puVar19 = (undefined2 *)*puVar14;
        }
        plVar2 = (longlong *)(lVar29 + 0x48);
        lVar23 = 0;
LAB_143f85a88:
        lVar27 = 0;
        do {
          bVar5 = *(byte *)(**(longlong **)(*plVar2 + lVar23 * 8) + lVar27);
          uVar6 = puVar19[lVar27];
          iVar10 = (uint)bVar5 - (uint)uVar6;
          if (iVar10 == 0) {
            if (bVar5 == 0) goto LAB_143f85b02;
          }
          else {
            lVar29 = local_218;
            if (0x7f < ((uint)uVar6 | (uint)bVar5)) goto LAB_143f85ad7;
            if ((&DAT_149e05da0)[bVar5] != (&DAT_149e05da0)[uVar6]) goto code_r0x000143f85ad4;
          }
          lVar27 = lVar27 + 1;
        } while( true );
      }
LAB_143f85aed:
      FUN_145b07290(&local_160,&plStack_188);
LAB_143f85b02:
      if (local_198 != (undefined2 **)0x0) {
        FUN_1400020a8();
      }
      lVar23 = local_210;
      uVar21 = uVar21 & ~(uint)uVar28;
      puVar26 = *(uint **)(lVar30 + 0x118);
      if (puVar26 == (uint *)0x0) {
        puVar26 = puVar13;
      }
      uVar20 = *(uint *)(lVar30 + 0x120);
      iVar22 = (int)uVar24;
      lVar30 = (longlong)iVar22;
      uVar11 = puVar26[lVar30] & uVar21;
      iVar10 = local_204;
      if (uVar11 == 0) {
        iVar17 = uVar20 + 0x1e;
        if (-1 < (int)(uVar20 - 1)) {
          iVar17 = uVar20 - 1;
        }
        iVar17 = iVar17 >> 5;
        iVar10 = local_204 + 0x20;
        iVar18 = iVar17;
        if (iVar17 < iVar22) {
          iVar18 = iVar22;
        }
        if (iVar22 < iVar17) {
          lVar27 = 0;
          do {
            uVar11 = puVar26[lVar30 + lVar27 + 1];
            if (uVar11 != 0) {
              uVar24 = (ulonglong)(iVar22 + (int)lVar27 + 1);
              uVar21 = 0xffffffff;
              goto LAB_143f85b97;
            }
            iVar10 = iVar10 + 0x20;
            lVar27 = lVar27 + 1;
          } while (iVar18 - lVar30 != lVar27);
          uVar21 = 0xffffffff;
          iVar22 = iVar18;
        }
        uVar24 = (ulonglong)(iVar22 + 1);
        lVar29 = local_218;
        uVar11 = uVar20;
      }
      else {
LAB_143f85b97:
        uVar28 = (ulonglong)(-uVar11 & uVar11);
        uVar4 = uVar28 * 2 + 1;
        lVar30 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        uVar11 = (iVar10 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
        if ((int)uVar20 <= (int)uVar11) {
          uVar11 = uVar20;
        }
      }
    } while (uVar11 != (uint)local_1f0);
    if (local_158 != (undefined2 ***)0x0) {
      lVar29 = local_210 + 0x20;
      pppuVar25 = local_158;
      do {
        plVar2 = (longlong *)*pppuVar25;
        FUN_148aeab04(lVar29,plVar2);
        uVar15 = (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_145c98034(local_200,uVar15);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)*plVar2)(plVar2,1);
        }
        pppuVar25 = (undefined2 ***)pppuVar25[1];
      } while (pppuVar25 != (undefined2 ***)0x0);
    }
  }
LAB_143f85c42:
  if (*(longlong *)(*(longlong *)(local_218 + 0x30) + 0x30) == 0) {
    if (*(int *)(lVar23 + 0x150) == 0) {
      ppuVar16 = (undefined2 **)&DAT_149dfb77a;
    }
    else {
      ppuVar16 = *(undefined2 ***)(lVar23 + 0x148);
    }
    lVar29 = 0;
    do {
      uVar6 = *(ushort *)((longlong)ppuVar16 + lVar29 * 2);
      bVar5 = *(byte *)(**(longlong **)(local_218 + 0x50) + lVar29);
      iVar10 = (uint)uVar6 - (uint)bVar5;
      if (iVar10 == 0) {
        if (uVar6 == 0) goto LAB_143f8609b;
      }
      else {
        if (0x7f < ((uint)bVar5 | (uint)uVar6)) goto LAB_143f8601d;
        if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[bVar5]) goto LAB_143f8601a;
      }
      lVar29 = lVar29 + 1;
    } while( true );
  }
  FUN_1400b22c2(&local_1a8);
  FUN_1400b22c2(&local_1b8);
  plVar2 = (longlong *)(lVar23 + 0x170);
  iVar10 = local_1a0 - 1;
  if (local_1a0 == 0) {
    iVar10 = 0;
  }
  if (0 < iVar10) {
    iVar22 = 0;
    do {
      iVar22 = iVar22 + 1;
    } while (iVar10 != iVar22);
  }
  iVar10 = FUN_1457511aa(plVar2);
  lVar23 = local_218;
  if (iVar10 == -1) {
LAB_143f85d5d:
    FUN_1400b22c2(&local_1c8,**(undefined8 **)(local_218 + 0x50));
    local_198 = &local_1a8;
    local_190 = &local_1c8;
    FUN_140dbdf0c(plVar2,local_164,&local_198,0);
    if (local_1c8 != 0) {
LAB_143f85e54:
      FUN_1400020a8();
    }
  }
  else {
    lVar29 = *plVar2 + (longlong)iVar10 * 0x28;
    if ((undefined8 *)(lVar29 + 0x10) == (undefined8 *)0x0 || lVar29 == 0) goto LAB_143f85d5d;
    FUN_1400b22c2(&local_198,**(undefined8 **)(local_218 + 0x50));
    ppuVar16 = local_198;
    _Str1 = L"";
    _Str2 = local_198;
    if ((int)local_190 == 0) {
      _Str2 = (undefined2 **)&DAT_149dfb77a;
    }
    if (*(int *)(lVar29 + 0x18) != 0) {
      _Str1 = *(wchar_t **)(lVar29 + 0x10);
    }
    iVar10 = wcscmp(_Str1,(wchar_t *)_Str2);
    if (ppuVar16 != (undefined2 **)0x0) {
      FUN_1400020a8(ppuVar16);
    }
    if (iVar10 != 0) {
      FUN_1400b22c2(&local_1c8,**(undefined8 **)(lVar23 + 0x50));
      local_198 = &local_1a8;
      local_190 = &local_1c8;
      FUN_140dbdf0c(plVar2,local_164,&local_198,0);
      if (local_1c8 == 0) goto LAB_143f85e59;
      goto LAB_143f85e54;
    }
  }
LAB_143f85e59:
  plVar2 = (longlong *)(local_210 + 0x1c0);
  uVar24 = 0;
  iVar10 = local_1a0 - 1;
  if (local_1a0 == 0) {
    iVar10 = 0;
  }
  if (0 < iVar10) {
    puVar19 = local_1a8;
    if (local_1a0 == 0) {
      puVar19 = &DAT_149dfb77a;
    }
    lVar23 = 0;
    uVar24 = 0;
    do {
      uVar20 = ((uint)(0x19 < (ushort)puVar19[lVar23] - 0x61) * 0x20 + (uint)(ushort)puVar19[lVar23]
               ) - 0x20;
      uVar11 = (uint)(uVar24 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar24 ^ uVar20) & 0xff) * 4);
      uVar24 = (ulonglong)
               (uVar11 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar20 >> 8 & 0xff) * 4));
      lVar23 = lVar23 + 1;
    } while (iVar10 != (int)lVar23);
  }
  iVar10 = FUN_1457511aa(plVar2,uVar24,&local_1a8);
  lVar23 = local_218;
  if ((iVar10 == -1) || ((*plVar2 + (longlong)iVar10 * 0x28 + 0x10U & 0xffffffffffffffef) == 0)) {
    local_190 = &local_1c8;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_198 = &local_1a8;
    FUN_140dbdf0c(plVar2,local_164,&local_198,0);
    if (local_1c8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400b22c2(local_1d8,**(undefined8 **)(lVar23 + 0x58));
  lVar23 = local_210;
  FUN_143f84b78(local_210,&local_1a8,local_1d8);
  FUN_1411f311e(lVar23 + 0x50,&local_1a8);
  if (local_1b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_143f860bf;
code_r0x000143f85ad4:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[bVar5] - (uint)(byte)(&DAT_149e05da0)[uVar6];
LAB_143f85ad7:
  if (iVar10 == 0) goto LAB_143f85b02;
  lVar23 = lVar23 + 1;
  if (lVar23 == *piVar1) goto LAB_143f85aed;
  goto LAB_143f85a88;
LAB_143f8601a:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar6] - (uint)(byte)(&DAT_149e05da0)[bVar5];
LAB_143f8601d:
  if (iVar10 != 0) {
    FUN_1400b22c2(&local_198);
    if ((undefined2 ***)(lVar23 + 0x148) == &local_198) {
      if (local_198 != (undefined2 **)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar23 + 0x148) != 0) {
        FUN_1400020a8();
      }
      *(undefined2 ***)(lVar23 + 0x148) = local_198;
      local_198 = (undefined2 **)0x0;
      *(int *)(lVar23 + 0x150) = (int)local_190;
      *(undefined4 *)(lVar23 + 0x154) = local_190._4_4_;
    }
  }
LAB_143f8609b:
  FUN_1400b22c2(local_1e8,**(undefined8 **)(local_218 + 0x58));
  FUN_143f848d0(lVar23,local_1e8);
LAB_143f860bf:
  local_160 = &PTR_FUN_14b526f58;
  while (local_158 != (undefined2 ***)0x0) {
    plVar2 = (longlong *)local_158[1];
    FUN_1400020a8();
    local_158 = (undefined2 ***)plVar2;
  }
  local_158 = (undefined2 ***)0x0;
  uStack_150 = 0;
  (*(code *)local_160[1])(&local_160,0);
LAB_143f86108:
  if ((local_48 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f86136 FUN_143f86136 body=479 status=ok
// SIG undefined FUN_143f86136(void)

undefined8 * FUN_143f86136(undefined8 *param_1)

{
  char *_Str;
  void *pvVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 auStack_188 [32];
  void *local_168;
  int local_160;
  void *local_158;
  int local_150;
  undefined1 local_148 [256];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar5 = *(int *)(param_1 + 2);
  if (iVar5 == 0) {
    uVar4 = 1;
  }
  else if (iVar5 == 3) {
    uVar4 = 3;
  }
  else {
    if (iVar5 != 1) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      *puVar2 = &PTR_FUN_14b5259c0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      goto LAB_143f862eb;
    }
    uVar4 = 2;
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  FUN_1400b22c2(&local_158,*param_1);
  _Str = (char *)param_1[1];
  local_48 = 0;
  if (_Str == (char *)0x0) {
    local_40 = 0;
    local_38 = 0;
  }
  else {
    sVar3 = strlen(_Str);
    FUN_1446e6fe8(local_148,_Str,sVar3 & 0xffffffff,1);
  }
  FUN_140056680(&local_168,local_40);
  pvVar1 = local_168;
  *puVar2 = &PTR_FUN_14b5259c0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(int *)(puVar2 + 2) = local_160;
  if ((longlong)local_160 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 1,local_160,0);
    memcpy((void *)puVar2[1],pvVar1,(longlong)local_160 * 2);
    iVar5 = *(int *)((longlong)puVar2 + 0x24);
  }
  pvVar1 = local_158;
  *(int *)(puVar2 + 4) = local_150;
  if (local_150 == 0 && iVar5 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,local_150);
    if (local_150 != 0) {
      memcpy((void *)puVar2[3],pvVar1,(longlong)local_150 * 2);
    }
  }
  *(undefined1 *)(puVar2 + 5) = uVar4;
  if (local_168 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_158 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143f862eb:
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f86316 FUN_143f86316 body=3742 status=ok
// SIG undefined FUN_143f86316(void)

void FUN_143f86316(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  void **ppvVar3;
  ulonglong uVar4;
  byte bVar5;
  ushort uVar6;
  char *pcVar7;
  void *pvVar8;
  undefined **ppuVar9;
  int iVar10;
  uint uVar11;
  size_t sVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined2 **ppuVar16;
  int iVar17;
  int iVar18;
  wchar_t *_Str1;
  undefined2 *puVar19;
  undefined2 **_Str2;
  uint uVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined2 ***pppuVar25;
  uint *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  int local_204;
  longlong *local_200;
  uint *local_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  longlong local_1c8;
  undefined8 uStack_1c0;
  void *local_1b8;
  uint local_1b0;
  undefined2 *local_1a8;
  uint local_1a0;
  undefined2 **local_198;
  undefined8 local_190;
  longlong *plStack_188;
  void *local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined1 local_164 [4];
  undefined **local_160;
  undefined2 ***local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*(int *)(param_2 + 0x40) < 1) goto LAB_143f87187;
  local_200 = (longlong *)(param_1 + 0xf8);
  lVar23 = 0;
  local_218 = param_2;
  local_210 = param_1;
  do {
    if (*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x48) + lVar23 * 8) + 0x10) != 2) {
      FUN_1400b22c2(&local_160);
      ppuVar9 = local_160;
      iVar10 = (int)local_158 + -1;
      if ((int)local_158 == 0) {
        iVar10 = 0;
      }
      if (0 < iVar10) {
        iVar22 = 0;
        do {
          iVar22 = iVar22 + 1;
        } while (iVar10 != iVar22);
      }
      iVar10 = FUN_1413fe28c(local_200);
      if (ppuVar9 != (undefined **)0x0) {
        FUN_1400020a8(ppuVar9);
      }
      param_2 = local_218;
      if (iVar10 == -1) {
        local_198 = (undefined2 **)
                    FUN_143f86136(*(undefined8 *)(*(longlong *)(local_218 + 0x48) + lVar23 * 8));
        local_160 = (undefined **)(**(code **)(*local_198 + 8))(local_198);
        local_158 = &local_198;
        FUN_145973498(local_200,&local_1a8);
        FUN_148aeab04(param_1 + 8,local_198);
      }
    }
    lVar23 = lVar23 + 1;
  } while (lVar23 < *(int *)(param_2 + 0x40));
  FUN_1400b22c2(&local_1a8,**(undefined8 **)(param_2 + 0x60));
  pcVar7 = *(char **)(*(longlong *)(param_2 + 0x60) + 8);
  local_60 = 0;
  if (pcVar7 == (char *)0x0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    sVar12 = strlen(pcVar7);
    FUN_1446e6fe8(&local_160,pcVar7,sVar12 & 0xffffffff,1);
  }
  lVar23 = local_210;
  FUN_140056680(&local_1b8,local_58);
  pvVar8 = local_1b8;
  local_198 = (undefined2 **)&PTR_FUN_14b5259c0;
  local_190 = (void *)0x0;
  local_180 = (void *)0x0;
  uStack_178 = 0;
  lVar29 = (longlong)(int)local_1b0;
  plStack_188 = (longlong *)(ulonglong)local_1b0;
  if (lVar29 == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1446dd670(&local_190,local_1b0,0);
    memcpy(local_190,pvVar8,lVar29 * 2);
    iVar10 = uStack_178._4_4_;
  }
  uVar20 = local_1a0;
  puVar19 = local_1a8;
  lVar29 = (longlong)(int)local_1a0;
  uStack_178 = CONCAT44(uStack_178._4_4_,local_1a0);
  if (local_1a0 == 0 && iVar10 == 0) {
    uStack_178 = (ulonglong)local_1a0;
  }
  else {
    FUN_1446dd670(&local_180,local_1a0);
    if (uVar20 != 0) {
      memcpy(local_180,puVar19,lVar29 * 2);
    }
  }
  pvVar8 = local_190;
  local_170 = 2;
  puVar14 = (undefined8 *)(lVar23 + 0xa0);
  if (puVar14 != &local_190) {
    iVar10 = (int)plStack_188;
    lVar29 = (longlong)(int)plStack_188;
    *(int *)(lVar23 + 0xa8) = (int)plStack_188;
    if ((int)plStack_188 == 0 && *(int *)(lVar23 + 0xac) == 0) {
      *(undefined4 *)(lVar23 + 0xac) = 0;
    }
    else {
      FUN_1446dd670(puVar14,(ulonglong)plStack_188 & 0xffffffff);
      if (iVar10 != 0) {
        memcpy((void *)*puVar14,pvVar8,lVar29 * 2);
      }
    }
  }
  pvVar8 = local_180;
  ppvVar3 = (void **)(lVar23 + 0xb0);
  if (ppvVar3 != &local_180) {
    iVar10 = (int)uStack_178;
    lVar29 = (longlong)(int)uStack_178;
    *(int *)(lVar23 + 0xb8) = (int)uStack_178;
    if ((int)uStack_178 == 0 && *(int *)(lVar23 + 0xbc) == 0) {
      *(undefined4 *)(lVar23 + 0xbc) = 0;
    }
    else {
      FUN_1446dd670(ppvVar3,uStack_178 & 0xffffffff);
      if (iVar10 != 0) {
        memcpy(*ppvVar3,pvVar8,lVar29 * 2);
      }
    }
  }
  *(undefined1 *)(lVar23 + 0xc0) = local_170;
  local_198 = (undefined2 **)&PTR_FUN_14b5259c0;
  if (local_180 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_190 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_1b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar29 = local_218;
  FUN_1400b22c2(&local_1a8,**(undefined8 **)(local_218 + 0x68));
  pcVar7 = *(char **)(*(longlong *)(lVar29 + 0x68) + 8);
  local_60 = 0;
  if (pcVar7 == (char *)0x0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    sVar12 = strlen(pcVar7);
    FUN_1446e6fe8(&local_160,pcVar7,sVar12 & 0xffffffff,1);
  }
  FUN_140056680(&local_1b8,local_58);
  pvVar8 = local_1b8;
  local_198 = (undefined2 **)&PTR_FUN_14b5259c0;
  local_190 = (longlong *)0x0;
  local_180 = (void *)0x0;
  uStack_178 = 0;
  plStack_188 = (longlong *)(ulonglong)local_1b0;
  if ((longlong)(int)local_1b0 == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1446dd670(&local_190,local_1b0,0);
    memcpy(local_190,pvVar8,(longlong)(int)local_1b0 * 2);
    iVar10 = uStack_178._4_4_;
  }
  uVar20 = local_1a0;
  puVar19 = local_1a8;
  lVar29 = (longlong)(int)local_1a0;
  uStack_178 = CONCAT44(uStack_178._4_4_,local_1a0);
  if (local_1a0 == 0 && iVar10 == 0) {
    uStack_178 = (ulonglong)local_1a0;
  }
  else {
    FUN_1446dd670(&local_180,local_1a0);
    if (uVar20 != 0) {
      memcpy(local_180,puVar19,lVar29 * 2);
    }
  }
  plVar2 = local_190;
  local_170 = 3;
  puVar14 = (undefined8 *)(lVar23 + 0xd0);
  if (puVar14 != &local_190) {
    iVar10 = (int)plStack_188;
    lVar29 = (longlong)(int)plStack_188;
    *(int *)(lVar23 + 0xd8) = (int)plStack_188;
    if ((int)plStack_188 == 0 && *(int *)(lVar23 + 0xdc) == 0) {
      *(undefined4 *)(lVar23 + 0xdc) = 0;
    }
    else {
      FUN_1446dd670(puVar14,(ulonglong)plStack_188 & 0xffffffff);
      if (iVar10 != 0) {
        memcpy((void *)*puVar14,plVar2,lVar29 * 2);
      }
    }
  }
  pvVar8 = local_180;
  ppvVar3 = (void **)(lVar23 + 0xe0);
  if (ppvVar3 != &local_180) {
    iVar10 = (int)uStack_178;
    lVar29 = (longlong)(int)uStack_178;
    *(int *)(lVar23 + 0xe8) = (int)uStack_178;
    if ((int)uStack_178 == 0 && *(int *)(lVar23 + 0xec) == 0) {
      *(undefined4 *)(lVar23 + 0xec) = 0;
    }
    else {
      FUN_1446dd670(ppvVar3,uStack_178 & 0xffffffff);
      if (iVar10 != 0) {
        memcpy(*ppvVar3,pvVar8,lVar29 * 2);
      }
    }
  }
  *(undefined1 *)(lVar23 + 0xf0) = local_170;
  local_198 = (undefined2 **)&PTR_FUN_14b5259c0;
  if (local_180 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_190 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_1b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_160 = &PTR_FUN_14b526f58;
  local_158 = (undefined2 ***)0x0;
  uStack_150 = 0;
  local_148 = 0;
  uVar20 = *(uint *)(lVar23 + 0x120);
  if (uVar20 == 0) {
    uVar28 = 1;
    uVar24 = 0;
    iVar10 = 0;
    uVar11 = 0;
  }
  else {
    puVar13 = *(uint **)(lVar23 + 0x118);
    if (*(uint **)(lVar23 + 0x118) == (uint *)0x0) {
      puVar13 = (uint *)(lVar23 + 0x108);
    }
    uVar11 = *puVar13;
    if (uVar11 == 0) {
      iVar10 = uVar20 + 0x1e;
      if (-1 < (int)(uVar20 - 1)) {
        iVar10 = uVar20 - 1;
      }
      uVar24 = 0;
      uVar28 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar28 = uVar24;
      }
      iVar10 = 0;
      do {
        if (uVar28 == uVar24) goto LAB_143f86cd6;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar13[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar24 = 0;
      iVar10 = 0;
    }
    uVar28 = (ulonglong)(-uVar11 & uVar11);
    uVar4 = uVar28 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    uVar11 = (iVar10 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
    if ((int)uVar20 <= (int)uVar11) {
      uVar11 = uVar20;
    }
  }
  if (uVar11 != uVar20) {
    uVar21 = 0xffffffff;
    lVar29 = local_218;
    local_1f8 = (uint *)(lVar23 + 0x108);
    local_1f0 = (ulonglong)uVar20;
    do {
      lVar23 = *local_200;
      lVar30 = (longlong)(int)uVar11 * 0x20;
      local_198 = (undefined2 **)0x0;
      uVar20 = *(uint *)(lVar23 + 8 + lVar30);
      pvVar8 = *(void **)(lVar23 + lVar30);
      local_190 = (longlong *)CONCAT44(local_190._4_4_,uVar20);
      local_204 = iVar10;
      if ((longlong)(int)uVar20 == 0) {
        local_190 = (longlong *)(ulonglong)uVar20;
      }
      else {
        FUN_1446dd670(&local_198,uVar20,0);
        memcpy(local_198,pvVar8,(longlong)(int)uVar20 * 2);
      }
      puVar13 = local_1f8;
      plStack_188 = *(longlong **)(lVar23 + lVar30 + 0x10);
      puVar14 = (undefined8 *)(**(code **)(*plStack_188 + 0x10))();
      lVar30 = local_210;
      piVar1 = (int *)(lVar29 + 0x40);
      if (0 < (longlong)*piVar1) {
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(puVar14 + 1) != 0) {
          puVar19 = (undefined2 *)*puVar14;
        }
        plVar2 = (longlong *)(lVar29 + 0x48);
        lVar23 = 0;
LAB_143f86b1c:
        lVar27 = 0;
        do {
          bVar5 = *(byte *)(**(longlong **)(*plVar2 + lVar23 * 8) + lVar27);
          uVar6 = puVar19[lVar27];
          iVar10 = (uint)bVar5 - (uint)uVar6;
          if (iVar10 == 0) {
            if (bVar5 == 0) goto LAB_143f86b96;
          }
          else {
            lVar29 = local_218;
            if (0x7f < ((uint)uVar6 | (uint)bVar5)) goto LAB_143f86b6b;
            if ((&DAT_149e05da0)[bVar5] != (&DAT_149e05da0)[uVar6]) goto code_r0x000143f86b68;
          }
          lVar27 = lVar27 + 1;
        } while( true );
      }
LAB_143f86b81:
      FUN_145b07290(&local_160,&plStack_188);
LAB_143f86b96:
      if (local_198 != (undefined2 **)0x0) {
        FUN_1400020a8();
      }
      lVar23 = local_210;
      uVar21 = uVar21 & ~(uint)uVar28;
      puVar26 = *(uint **)(lVar30 + 0x118);
      if (puVar26 == (uint *)0x0) {
        puVar26 = puVar13;
      }
      uVar20 = *(uint *)(lVar30 + 0x120);
      iVar22 = (int)uVar24;
      lVar30 = (longlong)iVar22;
      uVar11 = puVar26[lVar30] & uVar21;
      iVar10 = local_204;
      if (uVar11 == 0) {
        iVar17 = uVar20 + 0x1e;
        if (-1 < (int)(uVar20 - 1)) {
          iVar17 = uVar20 - 1;
        }
        iVar17 = iVar17 >> 5;
        iVar10 = local_204 + 0x20;
        iVar18 = iVar17;
        if (iVar17 < iVar22) {
          iVar18 = iVar22;
        }
        if (iVar22 < iVar17) {
          lVar27 = 0;
          do {
            uVar11 = puVar26[lVar30 + lVar27 + 1];
            if (uVar11 != 0) {
              uVar24 = (ulonglong)(iVar22 + (int)lVar27 + 1);
              uVar21 = 0xffffffff;
              goto LAB_143f86c2b;
            }
            iVar10 = iVar10 + 0x20;
            lVar27 = lVar27 + 1;
          } while (iVar18 - lVar30 != lVar27);
          uVar21 = 0xffffffff;
          iVar22 = iVar18;
        }
        uVar24 = (ulonglong)(iVar22 + 1);
        lVar29 = local_218;
        uVar11 = uVar20;
      }
      else {
LAB_143f86c2b:
        uVar28 = (ulonglong)(-uVar11 & uVar11);
        uVar4 = uVar28 * 2 + 1;
        lVar30 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        uVar11 = (iVar10 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
        if ((int)uVar20 <= (int)uVar11) {
          uVar11 = uVar20;
        }
      }
    } while (uVar11 != (uint)local_1f0);
    if (local_158 != (undefined2 ***)0x0) {
      lVar29 = local_210 + 0x20;
      pppuVar25 = local_158;
      do {
        plVar2 = (longlong *)*pppuVar25;
        FUN_148aeab04(lVar29,plVar2);
        uVar15 = (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_145c98034(local_200,uVar15);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)*plVar2)(plVar2,1);
        }
        pppuVar25 = (undefined2 ***)pppuVar25[1];
      } while (pppuVar25 != (undefined2 ***)0x0);
    }
  }
LAB_143f86cd6:
  if (*(longlong *)(*(longlong *)(local_218 + 0x30) + 0x30) == 0) {
    if (*(int *)(lVar23 + 0x150) == 0) {
      ppuVar16 = (undefined2 **)&DAT_149dfb77a;
    }
    else {
      ppuVar16 = *(undefined2 ***)(lVar23 + 0x148);
    }
    lVar29 = 0;
    do {
      uVar6 = *(ushort *)((longlong)ppuVar16 + lVar29 * 2);
      bVar5 = *(byte *)(**(longlong **)(local_218 + 0x50) + lVar29);
      iVar10 = (uint)uVar6 - (uint)bVar5;
      if (iVar10 == 0) {
        if (uVar6 == 0) goto LAB_143f8711a;
      }
      else {
        if (0x7f < ((uint)bVar5 | (uint)uVar6)) goto LAB_143f8709c;
        if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[bVar5]) goto LAB_143f87099;
      }
      lVar29 = lVar29 + 1;
    } while( true );
  }
  FUN_1400b22c2(&local_1a8);
  FUN_1400b22c2(&local_1b8);
  plVar2 = (longlong *)(lVar23 + 0x170);
  iVar10 = local_1a0 - 1;
  if (local_1a0 == 0) {
    iVar10 = 0;
  }
  if (0 < iVar10) {
    iVar22 = 0;
    do {
      iVar22 = iVar22 + 1;
    } while (iVar10 != iVar22);
  }
  iVar10 = FUN_1457511aa(plVar2);
  lVar23 = local_218;
  if (iVar10 == -1) {
LAB_143f86df1:
    FUN_1400b22c2(&local_1c8,**(undefined8 **)(local_218 + 0x50));
    local_198 = &local_1a8;
    local_190 = &local_1c8;
    FUN_140dbdf0c(plVar2,local_164,&local_198,0);
    if (local_1c8 != 0) {
LAB_143f86ee8:
      FUN_1400020a8();
    }
  }
  else {
    lVar29 = *plVar2 + (longlong)iVar10 * 0x28;
    if ((undefined8 *)(lVar29 + 0x10) == (undefined8 *)0x0 || lVar29 == 0) goto LAB_143f86df1;
    FUN_1400b22c2(&local_198,**(undefined8 **)(local_218 + 0x50));
    ppuVar16 = local_198;
    _Str1 = L"";
    _Str2 = local_198;
    if ((int)local_190 == 0) {
      _Str2 = (undefined2 **)&DAT_149dfb77a;
    }
    if (*(int *)(lVar29 + 0x18) != 0) {
      _Str1 = *(wchar_t **)(lVar29 + 0x10);
    }
    iVar10 = wcscmp(_Str1,(wchar_t *)_Str2);
    if (ppuVar16 != (undefined2 **)0x0) {
      FUN_1400020a8(ppuVar16);
    }
    if (iVar10 != 0) {
      FUN_1400b22c2(&local_1c8,**(undefined8 **)(lVar23 + 0x50));
      local_198 = &local_1a8;
      local_190 = &local_1c8;
      FUN_140dbdf0c(plVar2,local_164,&local_198,0);
      if (local_1c8 == 0) goto LAB_143f86eed;
      goto LAB_143f86ee8;
    }
  }
LAB_143f86eed:
  plVar2 = (longlong *)(local_210 + 0x1c0);
  uVar24 = 0;
  iVar10 = local_1a0 - 1;
  if (local_1a0 == 0) {
    iVar10 = 0;
  }
  if (0 < iVar10) {
    puVar19 = local_1a8;
    if (local_1a0 == 0) {
      puVar19 = &DAT_149dfb77a;
    }
    lVar23 = 0;
    uVar24 = 0;
    do {
      uVar20 = ((uint)(0x19 < (ushort)puVar19[lVar23] - 0x61) * 0x20 + (uint)(ushort)puVar19[lVar23]
               ) - 0x20;
      uVar11 = (uint)(uVar24 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar24 ^ uVar20) & 0xff) * 4);
      uVar24 = (ulonglong)
               (uVar11 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar20 >> 8 & 0xff) * 4));
      lVar23 = lVar23 + 1;
    } while (iVar10 != (int)lVar23);
  }
  iVar10 = FUN_1457511aa(plVar2,uVar24,&local_1a8);
  lVar23 = local_218;
  if ((iVar10 == -1) || ((*plVar2 + (longlong)iVar10 * 0x28 + 0x10U & 0xffffffffffffffef) == 0)) {
    local_190 = &local_1c8;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_198 = &local_1a8;
    FUN_140dbdf0c(plVar2,local_164,&local_198,0);
    if (local_1c8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400b22c2(local_1d8,**(undefined8 **)(lVar23 + 0x58));
  FUN_143f84b78(local_210,&local_1a8,local_1d8);
  if (local_1b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_143f8713e;
code_r0x000143f86b68:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[bVar5] - (uint)(byte)(&DAT_149e05da0)[uVar6];
LAB_143f86b6b:
  if (iVar10 == 0) goto LAB_143f86b96;
  lVar23 = lVar23 + 1;
  if (lVar23 == *piVar1) goto LAB_143f86b81;
  goto LAB_143f86b1c;
LAB_143f87099:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar6] - (uint)(byte)(&DAT_149e05da0)[bVar5];
LAB_143f8709c:
  if (iVar10 != 0) {
    FUN_1400b22c2(&local_198);
    if ((undefined2 ***)(lVar23 + 0x148) == &local_198) {
      if (local_198 != (undefined2 **)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar23 + 0x148) != 0) {
        FUN_1400020a8();
      }
      *(undefined2 ***)(lVar23 + 0x148) = local_198;
      local_198 = (undefined2 **)0x0;
      *(int *)(lVar23 + 0x150) = (int)local_190;
      *(undefined4 *)(lVar23 + 0x154) = local_190._4_4_;
    }
  }
LAB_143f8711a:
  FUN_1400b22c2(local_1e8,**(undefined8 **)(local_218 + 0x58));
  FUN_143f848d0(lVar23,local_1e8);
LAB_143f8713e:
  local_160 = &PTR_FUN_14b526f58;
  while (local_158 != (undefined2 ***)0x0) {
    plVar2 = (longlong *)local_158[1];
    FUN_1400020a8();
    local_158 = (undefined2 ***)plVar2;
  }
  local_158 = (undefined2 ***)0x0;
  uStack_150 = 0;
  (*(code *)local_160[1])(&local_160,0);
LAB_143f87187:
  if ((local_48 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f871b6 FUN_143f871b6 body=3404 status=ok
// SIG undefined FUN_143f871b6(void)

void FUN_143f871b6(longlong *param_1,longlong param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  ushort uVar8;
  undefined8 *puVar9;
  char cVar10;
  byte bVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined **ppuVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auStack_158 [40];
  undefined **local_130;
  longlong **local_128;
  longlong *local_120;
  longlong local_68 [2];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar21 = *(int *)(param_2 + 0x18);
  switch(iVar21) {
  case 0x14:
    if ((int)param_1[0x37] == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)param_1[0x36];
    }
    lVar17 = 0;
    do {
      uVar8 = puVar12[lVar17];
      bVar4 = *(byte *)(*(longlong *)(param_2 + 0x30) + lVar17);
      iVar21 = (uint)uVar8 - (uint)bVar4;
      if (iVar21 == 0) {
        if (uVar8 == 0) goto LAB_143f87400;
      }
      else {
        if (0x7f < ((uint)bVar4 | (uint)uVar8)) goto LAB_143f873f7;
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[bVar4]) goto LAB_143f873f4;
      }
      lVar17 = lVar17 + 1;
    } while( true );
  case 0x15:
    if ((int)param_1[0x37] == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)param_1[0x36];
    }
    lVar17 = 0;
    do {
      uVar8 = puVar12[lVar17];
      bVar4 = *(byte *)(*(longlong *)(param_2 + 0x30) + lVar17);
      iVar21 = (uint)uVar8 - (uint)bVar4;
      if (iVar21 == 0) {
        if (uVar8 == 0) goto LAB_143f874a8;
      }
      else {
        if (0x7f < ((uint)bVar4 | (uint)uVar8)) goto LAB_143f8749f;
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[bVar4]) goto LAB_143f8749c;
      }
      lVar17 = lVar17 + 1;
    } while( true );
  case 0x16:
  case 0x17:
  case 0x18:
    break;
  case 0x19:
    if ((int)param_1[0x37] == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)param_1[0x36];
    }
    lVar17 = 0;
    do {
      uVar8 = puVar12[lVar17];
      bVar4 = *(byte *)(*(longlong *)(param_2 + 0x30) + lVar17);
      iVar21 = (uint)uVar8 - (uint)bVar4;
      if (iVar21 == 0) {
        if (uVar8 == 0) goto LAB_143f87627;
      }
      else {
        if (0x7f < ((uint)bVar4 | (uint)uVar8)) goto LAB_143f8761e;
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[bVar4]) goto LAB_143f8761b;
      }
      lVar17 = lVar17 + 1;
    } while( true );
  case 0x1a:
    if ((int)param_1[0x37] == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)param_1[0x36];
    }
    lVar17 = 0;
    do {
      uVar8 = puVar12[lVar17];
      bVar4 = *(byte *)(*(longlong *)(param_2 + 0x30) + lVar17);
      iVar21 = (uint)uVar8 - (uint)bVar4;
      if (iVar21 == 0) {
        if (uVar8 == 0) goto LAB_143f87331;
      }
      else {
        if (0x7f < ((uint)bVar4 | (uint)uVar8)) goto LAB_143f87328;
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[bVar4]) goto LAB_143f87325;
      }
      lVar17 = lVar17 + 1;
    } while( true );
  case 0x1b:
    if ((int)param_1[0x37] == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)param_1[0x36];
    }
    lVar17 = 0;
    do {
      uVar8 = puVar12[lVar17];
      bVar4 = *(byte *)(*(longlong *)(param_2 + 0x30) + lVar17);
      iVar21 = (uint)uVar8 - (uint)bVar4;
      if (iVar21 == 0) {
        if (uVar8 == 0) goto LAB_143f8754f;
      }
      else {
        if (0x7f < ((uint)bVar4 | (uint)uVar8)) goto LAB_143f87546;
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[bVar4]) goto LAB_143f87543;
      }
      lVar17 = lVar17 + 1;
    } while( true );
  case 0x1c:
    if ((int)param_1[0x37] == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)param_1[0x36];
    }
    lVar17 = 0;
    do {
      uVar8 = puVar12[lVar17];
      bVar4 = *(byte *)(*(longlong *)(param_2 + 0x30) + lVar17);
      iVar21 = (uint)uVar8 - (uint)bVar4;
      if (iVar21 == 0) {
        if (uVar8 == 0) goto LAB_143f876fb;
      }
      else {
        if (0x7f < ((uint)bVar4 | (uint)uVar8)) goto LAB_143f876f2;
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[bVar4]) goto LAB_143f876ef;
      }
      lVar17 = lVar17 + 1;
    } while( true );
  default:
    if (iVar21 == 10) {
      if ((int)param_1[0x37] == 0) {
        puVar12 = &DAT_149dfb77a;
      }
      else {
        puVar12 = (undefined2 *)param_1[0x36];
      }
      lVar17 = 0;
      do {
        uVar8 = puVar12[lVar17];
        bVar4 = *(byte *)(*(longlong *)(param_2 + 0x38) + lVar17);
        iVar21 = (uint)uVar8 - (uint)bVar4;
        if (iVar21 == 0) {
          if (uVar8 == 0) goto LAB_143f877d3;
        }
        else {
          if (0x7f < ((uint)bVar4 | (uint)uVar8)) goto LAB_143f877ca;
          if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[bVar4]) goto LAB_143f877c7;
        }
        lVar17 = lVar17 + 1;
      } while( true );
    }
    if (iVar21 == 0x30) {
      if ((int)param_1[0x37] == 0) {
        puVar12 = &DAT_149dfb77a;
      }
      else {
        puVar12 = (undefined2 *)param_1[0x36];
      }
      lVar17 = 0;
      do {
        uVar8 = puVar12[lVar17];
        bVar4 = *(byte *)(*(longlong *)(param_2 + 0x30) + lVar17);
        iVar21 = (uint)uVar8 - (uint)bVar4;
        if (iVar21 == 0) {
          if (uVar8 == 0) goto LAB_143f8786d;
        }
        else {
          if (0x7f < ((uint)bVar4 | (uint)uVar8)) goto LAB_143f87864;
          if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[bVar4]) goto LAB_143f87861;
        }
        lVar17 = lVar17 + 1;
      } while( true );
    }
  }
switchD_143f871fa_caseD_16:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143f877c7:
  iVar21 = (uint)(byte)(&DAT_149e05da0)[uVar8] - (uint)(byte)(&DAT_149e05da0)[bVar4];
LAB_143f877ca:
  if (iVar21 == 0) {
LAB_143f877d3:
    if (*(char *)((longlong)param_1 + 0xe1) == '\x02') {
      FUN_148ae113c(&local_130,param_1,param_2);
      FUN_148aeacba(param_1 + 0x13,&local_130);
      FUN_148ae1546(&local_130);
    }
  }
  goto switchD_143f871fa_caseD_16;
LAB_143f87861:
  iVar21 = (uint)(byte)(&DAT_149e05da0)[uVar8] - (uint)(byte)(&DAT_149e05da0)[bVar4];
LAB_143f87864:
  if (iVar21 == 0) {
LAB_143f8786d:
    if ((char)param_1[0x1c] == '\x02') {
      FUN_148ae15ae(&local_130,param_1,param_2);
      FUN_148aead5e(param_1 + 0x16,&local_130);
      FUN_148ae18e0(&local_130);
    }
  }
  goto switchD_143f871fa_caseD_16;
LAB_143f876ef:
  iVar21 = (uint)(byte)(&DAT_149e05da0)[uVar8] - (uint)(byte)(&DAT_149e05da0)[bVar4];
LAB_143f876f2:
  if (iVar21 != 0) goto switchD_143f871fa_caseD_16;
LAB_143f876fb:
  local_58 = (longlong *)0x0;
  local_50 = 0xffffffff00000000;
  FUN_1400b22c2(local_68,*(undefined8 *)(param_2 + 0x38));
  FUN_140d5f6b0(&local_130);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  plVar13 = param_1 + 0x1d;
  iVar21 = (int)local_128 + -1;
  if ((int)local_128 == 0) {
    iVar21 = 0;
  }
  if (0 < iVar21) {
    iVar20 = 0;
    do {
      iVar20 = iVar20 + 1;
    } while (iVar21 != iVar20);
  }
  iVar21 = FUN_14153787a(plVar13);
  if (iVar21 != -1) {
    uVar16 = 0;
    iVar21 = (int)local_128 + -1;
    if ((int)local_128 == 0) {
      iVar21 = 0;
    }
    if (0 < iVar21) {
      ppuVar15 = local_130;
      if ((int)local_128 == 0) {
        ppuVar15 = (undefined **)&DAT_149dfb77a;
      }
      lVar17 = 0;
      uVar16 = 0;
      do {
        uVar8 = *(ushort *)((longlong)ppuVar15 + lVar17 * 2);
        uVar18 = ((uint)(0x19 < uVar8 - 0x61) * 0x20 + (uint)uVar8) - 0x20;
        uVar22 = (uint)(uVar16 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar16 ^ uVar18) & 0xff) * 4);
        uVar16 = (ulonglong)
                 (uVar22 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar22 & 0xff ^ uVar18 >> 8 & 0xff) * 4));
        lVar17 = lVar17 + 1;
      } while (iVar21 != (int)lVar17);
    }
    iVar21 = FUN_14153787a(plVar13,uVar16,&local_130);
    if (iVar21 == -1) {
      lVar17 = 0;
    }
    else {
      lVar17 = (longlong)iVar21 * 0x20 + *plVar13;
    }
    lVar17 = *(longlong *)(lVar17 + 0x10);
    dVar2 = *(double *)(param_2 + 0x50);
    dVar3 = *(double *)(lVar17 + 0x10);
    if ((dVar3 != dVar2) || (NAN(dVar3) || NAN(dVar2))) {
      *(double *)(lVar17 + 0x10) = dVar2;
    }
    bVar11 = *(byte *)(param_2 + 0x58);
    bVar4 = *(byte *)(lVar17 + 9);
    bVar19 = bVar11 & 1;
    if (bVar4 != bVar19) {
      *(byte *)(lVar17 + 9) = bVar19;
      bVar11 = *(byte *)(param_2 + 0x58);
    }
    bVar5 = *(byte *)(lVar17 + 10);
    bVar11 = bVar11 >> 1 & 1;
    if (bVar5 != bVar11) {
      *(byte *)(lVar17 + 10) = bVar11;
    }
    bVar23 = *(int *)(param_2 + 0x44) != 0;
    cVar10 = *(char *)(lVar17 + 0xb);
    if ((bool)cVar10 != bVar23) {
      *(bool *)(lVar17 + 0xb) = bVar23;
    }
    bVar24 = *(int *)(param_2 + 0x40) != 0;
    cVar6 = *(char *)(lVar17 + 0x1e);
    if ((bool)cVar6 != bVar24) {
      *(bool *)(lVar17 + 0x1e) = bVar24;
    }
    bVar25 = *(int *)(param_2 + 0x94) != 0;
    cVar7 = *(char *)(lVar17 + 0x20);
    if ((bool)cVar7 != bVar25) {
      *(bool *)(lVar17 + 0x20) = bVar25;
    }
    bVar26 = *(int *)(param_2 + 0x98) != 0;
    if ((bool)*(char *)(lVar17 + 0x1f) == bVar26) {
      if (((((dVar3 == dVar2) && (!NAN(dVar3) && !NAN(dVar2))) && (bVar4 == bVar19)) &&
          ((bVar5 == bVar11 && ((bool)cVar10 == bVar23)))) &&
         (((bool)cVar6 == bVar24 && ((bool)cVar7 == bVar25)))) goto LAB_143f87d1e;
    }
    else {
      *(bool *)(lVar17 + 0x1f) = bVar26;
    }
    FUN_148aeac18(param_1 + 0x10);
  }
  goto LAB_143f87d1e;
LAB_143f87543:
  iVar21 = (uint)(byte)(&DAT_149e05da0)[uVar8] - (uint)(byte)(&DAT_149e05da0)[bVar4];
LAB_143f87546:
  if (iVar21 != 0) goto switchD_143f871fa_caseD_16;
LAB_143f8754f:
  local_58 = (longlong *)0x0;
  local_50 = 0xffffffff00000000;
  FUN_1400b22c2(local_68,*(undefined8 *)(param_2 + 0x38));
  FUN_140d5f6b0(&local_130);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  plVar13 = param_1 + 0x1d;
  iVar21 = (int)local_128 + -1;
  if ((int)local_128 == 0) {
    iVar21 = 0;
  }
  if (0 < iVar21) {
    iVar20 = 0;
    do {
      iVar20 = iVar20 + 1;
    } while (iVar21 != iVar20);
  }
  iVar21 = FUN_14153787a(plVar13);
  if (iVar21 != -1) {
    uVar16 = 0;
    iVar21 = (int)local_128 + -1;
    if ((int)local_128 == 0) {
      iVar21 = 0;
    }
    if (0 < iVar21) {
      ppuVar15 = local_130;
      if ((int)local_128 == 0) {
        ppuVar15 = (undefined **)&DAT_149dfb77a;
      }
      lVar17 = 0;
      uVar16 = 0;
      do {
        uVar8 = *(ushort *)((longlong)ppuVar15 + lVar17 * 2);
        uVar18 = ((uint)(0x19 < uVar8 - 0x61) * 0x20 + (uint)uVar8) - 0x20;
        uVar22 = (uint)(uVar16 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar16 ^ uVar18) & 0xff) * 4);
        uVar16 = (ulonglong)
                 (uVar22 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar22 & 0xff ^ uVar18 >> 8 & 0xff) * 4));
        lVar17 = lVar17 + 1;
      } while (iVar21 != (int)lVar17);
    }
    iVar21 = FUN_14153787a(plVar13,uVar16,&local_130);
    if (iVar21 == -1) {
      lVar17 = 0;
    }
    else {
      lVar17 = (longlong)iVar21 * 0x20 + *plVar13;
    }
    puVar9 = *(undefined8 **)(lVar17 + 0x10);
    FUN_148aeac18(param_1 + 0xd,puVar9);
    FUN_145c7ee9e(plVar13,&local_130);
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
  }
LAB_143f87d1e:
  if (local_130 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  goto switchD_143f871fa_caseD_16;
LAB_143f87325:
  iVar21 = (uint)(byte)(&DAT_149e05da0)[uVar8] - (uint)(byte)(&DAT_149e05da0)[bVar4];
LAB_143f87328:
  if (iVar21 == 0) {
LAB_143f87331:
    local_58 = (longlong *)0x0;
    local_50 = 0xffffffff00000000;
    FUN_1400b22c2(local_68,*(undefined8 *)(param_2 + 0x38));
    FUN_140d5f6b0(&local_130);
    uVar16 = 0;
    iVar21 = (int)local_128 + -1;
    if ((int)local_128 == 0) {
      iVar21 = 0;
    }
    if (0 < iVar21) {
      ppuVar15 = local_130;
      if ((int)local_128 == 0) {
        ppuVar15 = (undefined **)&DAT_149dfb77a;
      }
      lVar17 = 0;
      uVar16 = 0;
      do {
        uVar8 = *(ushort *)((longlong)ppuVar15 + lVar17 * 2);
        uVar18 = ((uint)(0x19 < uVar8 - 0x61) * 0x20 + (uint)uVar8) - 0x20;
        uVar22 = (uint)(uVar16 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar16 ^ uVar18) & 0xff) * 4);
        uVar16 = (ulonglong)
                 (uVar22 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar22 & 0xff ^ uVar18 >> 8 & 0xff) * 4));
        lVar17 = lVar17 + 1;
      } while (iVar21 != (int)lVar17);
    }
    iVar21 = FUN_14153787a(param_1 + 0x1d,uVar16,&local_130);
    if (local_130 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (iVar21 == -1) {
      plVar13 = (longlong *)FUN_14001cc68(0xb0,0x10);
      FUN_145960b76(plVar13,param_1,param_2);
      local_58 = plVar13;
      lVar17 = (**(code **)(*plVar13 + 0xa0))(plVar13);
      local_130 = (undefined **)(lVar17 + 0x10);
      local_128 = &local_58;
      FUN_145d238f6(param_1 + 0x1d,local_68);
      FUN_148aeac18(param_1 + 10,plVar13);
      cVar10 = (**(code **)(*plVar13 + 8))(plVar13);
      if (cVar10 != '\0') {
        FUN_145c9fe7c(param_1);
      }
    }
  }
  goto switchD_143f871fa_caseD_16;
LAB_143f8761b:
  iVar21 = (uint)(byte)(&DAT_149e05da0)[uVar8] - (uint)(byte)(&DAT_149e05da0)[bVar4];
LAB_143f8761e:
  if (iVar21 == 0) {
LAB_143f87627:
    if ((char)param_1[0x1c] != '\0') {
      *(undefined1 *)(param_1 + 0x1c) = 0;
      local_130 = &PTR_FUN_14b525ad0;
      local_128 = (longlong **)((ulonglong)local_128 & 0xffffffffffffff00);
      local_120 = param_1;
      FUN_145a9f81e(param_1 + 1);
    }
    if (*(char *)((longlong)param_1 + 0xe1) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
      local_130 = &PTR_FUN_14b525ad0;
      local_128 = (longlong **)((ulonglong)local_128 & 0xffffffffffffff00);
      local_120 = param_1;
      FUN_145a9f81e(param_1 + 4);
    }
    plVar13 = (longlong *)param_1[0x1a];
    bVar23 = true;
    if (plVar13 == (longlong *)0x0) {
LAB_143f87699:
      plVar13 = (longlong *)0x0;
    }
    else {
      iVar21 = (int)plVar13[1];
      do {
        if (iVar21 == 0) goto LAB_143f87699;
        LOCK();
        iVar20 = (int)plVar13[1];
        bVar24 = iVar21 == iVar20;
        if (bVar24) {
          *(int *)(plVar13 + 1) = iVar21 + 1;
          iVar20 = iVar21;
        }
        iVar21 = iVar20;
        UNLOCK();
      } while (!bVar24);
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
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
      bVar23 = false;
    }
    if (*(char *)((longlong)param_1 + 0xe2) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
      local_130 = &PTR_FUN_14b525ad0;
      local_128 = (longlong **)((ulonglong)local_128 & 0xffffffffffffff00);
      local_120 = param_1;
      FUN_145a9f81e(param_1 + 7);
    }
    FUN_1461b3d1e(param_1 + 0x1d);
    *(undefined1 *)(param_1 + 0x27) = 0;
    if (*(char *)((longlong)param_1 + 0x1c9) == '\x01') {
      plVar14 = (longlong *)(**(code **)(*param_1 + 8))(param_1);
      (**(code **)(*plVar14 + 0x68))(plVar14,param_1 + 0x28);
    }
    if (!bVar23) {
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
  goto switchD_143f871fa_caseD_16;
LAB_143f8749c:
  iVar21 = (uint)(byte)(&DAT_149e05da0)[uVar8] - (uint)(byte)(&DAT_149e05da0)[bVar4];
LAB_143f8749f:
  if (iVar21 != 0) goto switchD_143f871fa_caseD_16;
LAB_143f874a8:
  if (*(int *)(param_2 + 0x3c) != 0) {
    if ((*(int *)(param_2 + 0x3c) == 1) && (*(char *)((longlong)param_1 + 0xe1) == '\x01')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
    }
    goto switchD_143f871fa_caseD_16;
  }
  cVar10 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((cVar10 == '\x01') && (cVar10 = (**(code **)(*param_1 + 0x20))(param_1), cVar10 != '\x02')) {
    (**(code **)(*param_1 + 0x58))(param_1,0);
  }
  if (*(char *)((longlong)param_1 + 0xe1) == '\0') goto switchD_143f871fa_caseD_16;
  *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
  plVar13 = param_1 + 4;
  goto LAB_143f87bb6;
LAB_143f873f4:
  iVar21 = (uint)(byte)(&DAT_149e05da0)[uVar8] - (uint)(byte)(&DAT_149e05da0)[bVar4];
LAB_143f873f7:
  if (iVar21 != 0) goto switchD_143f871fa_caseD_16;
LAB_143f87400:
  if (*(int *)(param_2 + 0x48) != 1) {
    if ((*(int *)(param_2 + 0x48) == 2) && ((char)param_1[0x1c] == '\x01')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
    }
    goto switchD_143f871fa_caseD_16;
  }
  cVar10 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((cVar10 == '\x01') && (cVar10 = (**(code **)(*param_1 + 0x20))(param_1), cVar10 != '\x02')) {
    (**(code **)(*param_1 + 0x58))(param_1,0);
  }
  if ((char)param_1[0x1c] == '\0') goto switchD_143f871fa_caseD_16;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  plVar13 = param_1 + 1;
LAB_143f87bb6:
  local_128 = (longlong **)((ulonglong)local_128 & 0xffffffffffffff00);
  local_130 = &PTR_FUN_14b525ad0;
  local_120 = param_1;
  FUN_145a9f81e(plVar13);
  goto switchD_143f871fa_caseD_16;
}



// FUNCTION 143f87f3a FUN_143f87f3a body=1279 status=ok
// SIG undefined FUN_143f87f3a(void)

int FUN_143f87f3a(undefined **param_1,byte param_2,byte param_3,char param_4,longlong param_5,
                 longlong *param_6)

{
  int *piVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  undefined **local_128;
  byte local_120;
  byte local_118;
  undefined8 *local_110;
  char local_105;
  undefined4 local_104;
  undefined **local_100;
  undefined **local_f8;
  undefined1 local_f0 [96];
  undefined8 local_90;
  undefined4 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined *local_68;
  longlong *local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar9 = 0x3f0;
  if (((param_2 | param_3) == 1) && (1 < *(int *)(param_5 + 8))) {
    ppuVar2 = param_1 + 0x28;
    cVar8 = FUN_14163838c(ppuVar2);
    if (cVar8 != '\0') {
      uVar10 = (**(code **)(*param_1 + 0x20))(param_1);
      iVar9 = 0x3fb;
      if ((char)uVar10 == '\0') {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        plVar12 = (longlong *)param_1[0x1a];
        local_104 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
        local_105 = param_4;
        if (plVar12 == (longlong *)0x0) {
          local_100 = (undefined **)0x0;
          plVar12 = (longlong *)0x0;
        }
        else {
          iVar9 = (int)plVar12[1];
          do {
            if (iVar9 == 0) {
              plVar12 = (longlong *)0x0;
              local_100 = (undefined **)0x0;
              goto LAB_143f880cf;
            }
            LOCK();
            iVar6 = (int)plVar12[1];
            bVar13 = iVar9 == iVar6;
            if (bVar13) {
              *(int *)(plVar12 + 1) = iVar9 + 1;
              iVar6 = iVar9;
            }
            iVar9 = iVar6;
            UNLOCK();
          } while (!bVar13);
          puVar4 = param_1[0x19];
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          LOCK();
          plVar5 = plVar12 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          LOCK();
          plVar5 = plVar12 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          local_100 = (undefined **)puVar4;
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
          local_104 = 0;
        }
LAB_143f880cf:
        local_78 = 0;
        local_70 = (undefined **)((ulonglong)local_70 & 0xffffffff00000000);
        local_80 = param_1;
        FUN_140146ccc(&local_78,param_6);
        local_68 = (undefined *)local_100;
        if ((char)local_104 == '\0') {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_60 = plVar12;
        if (local_50 != 4) {
          FUN_1446efa72(&local_58,0,4,0x10);
          local_50 = 4;
        }
        *local_58 = &PTR_LAB_14b526cc0;
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
        local_58[2] = lVar11;
        *local_58 = &PTR_FUN_14b526fe0;
        local_58[3] = local_80;
        local_58[4] = local_78;
        local_78 = 0;
        *(undefined4 *)(local_58 + 5) = local_70._0_4_;
        local_70 = (undefined **)((ulonglong)local_70 & 0xffffffff00000000);
        local_58[6] = local_68;
        local_58[7] = local_60;
        if (DAT_14cb99c48 == (undefined8 *)0x0) {
          DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          *DAT_14cb99c48 = 0;
          DAT_14cb99c48[1] = 0;
          DAT_14cb99c48[2] = 2;
        }
        local_90 = 0;
        local_88 = 0;
        FUN_1412f566c(&local_90,&local_58);
        local_100 = param_1 + 0x36;
        local_f8 = param_1 + 0x34;
        uVar10 = (**(code **)(*(longlong *)param_1[0x1b] + 0x48))();
        FUN_14588d72e(uVar10,&local_80);
        local_128 = ppuVar2;
        local_120 = param_2;
        local_118 = param_3;
        local_110 = &local_90;
        iVar9 = FUN_1461cf75a(&local_80,local_f8,local_100,param_5);
        if (local_80 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        if (iVar9 == 0) {
          if ((param_2 != 0) && (*(char *)(param_1 + 0x1c) != '\x01')) {
            *(undefined1 *)(param_1 + 0x1c) = 1;
            local_80 = &PTR_FUN_14b525ad0;
            local_78 = CONCAT71(local_78._1_7_,1);
            local_70 = param_1;
            FUN_145a9f81e(param_1 + 1);
          }
          if ((param_3 != 0) && (*(char *)((longlong)param_1 + 0xe1) != '\x01')) {
            *(undefined1 *)((longlong)param_1 + 0xe1) = 1;
            local_80 = &PTR_FUN_14b525ad0;
            local_78 = CONCAT71(local_78._1_7_,1);
            local_70 = param_1;
            FUN_145a9f81e(param_1 + 4);
          }
          if (*(char *)((longlong)param_1 + 0xe2) != '\x01') {
            *(undefined1 *)((longlong)param_1 + 0xe2) = 1;
            local_80 = &PTR_FUN_14b525ad0;
            local_78 = CONCAT71(local_78._1_7_,1);
            local_70 = param_1;
            FUN_145a9f81e(param_1 + 7);
          }
          plVar5 = (longlong *)param_1[0x1b];
          if (local_105 == '\0') {
            iVar9 = FUN_14154318a(plVar5);
          }
          else {
            FUN_1413ebcfe(local_f0,ppuVar2);
            iVar9 = (**(code **)(*plVar5 + 0xf8))(plVar5,1,local_f0);
          }
        }
        if ((char)local_104 == '\0') {
          LOCK();
          plVar5 = plVar12 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        if (local_50 != 0) {
          if (local_58 == (undefined8 *)0x0) goto LAB_143f87fb5;
          (**(code **)*local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
        }
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_143f87fb5:
  if ((int)param_6[1] != 0) {
    puVar3 = (undefined8 *)*param_6;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143f87ff0;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(param_6,0,0,0x10);
    *(undefined4 *)(param_6 + 1) = 0;
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
LAB_143f87ff0:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 143f8843a FUN_143f8843a body=124 status=ok
// SIG undefined FUN_143f8843a(void)

void FUN_143f8843a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f884b6 FUN_143f884b6 body=124 status=ok
// SIG undefined FUN_143f884b6(void)

void FUN_143f884b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f88532 FUN_143f88532 body=124 status=ok
// SIG undefined FUN_143f88532(void)

void FUN_143f88532(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f885ae FUN_143f885ae body=124 status=ok
// SIG undefined FUN_143f885ae(void)

void FUN_143f885ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f8862a FUN_143f8862a body=124 status=ok
// SIG undefined FUN_143f8862a(void)

void FUN_143f8862a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f886a6 FUN_143f886a6 body=135 status=ok
// SIG undefined FUN_143f886a6(void)

undefined8 FUN_143f886a6(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if ((cVar1 == '\x02') && ((char)param_1[0x30] == '\x01')) {
    if (DAT_14cb99c48 == (undefined8 *)0x0) {
      DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
    uVar2 = FUN_148ae2a68(param_1 + 0x36,param_2,param_3,param_4);
    return uVar2;
  }
  return 0x3fb;
}


