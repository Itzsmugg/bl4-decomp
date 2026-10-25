// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1441cf5fa FUN_1441cf5fa body=19 status=ok
// SIG undefined FUN_1441cf5fa(void)

undefined1 FUN_1441cf5fa(undefined8 param_1,undefined8 param_2)

{
  FUN_1441cf60e(param_2);
  return 1;
}



// FUNCTION 1441cf60e FUN_1441cf60e body=95 status=ok
// SIG undefined FUN_1441cf60e(void)

ulonglong FUN_1441cf60e(longlong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  undefined7 uVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x180))();
  uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
  bVar1 = 1;
  if ((((uVar2 != 0) && (*(longlong *)(uVar2 + 0x1f0) != 0)) &&
      (uVar2 = FUN_140e5f22c(), uVar2 != 0)) && (*(longlong *)(uVar2 + 0x30) != 0)) {
    bVar1 = FUN_145d27e30(*(longlong *)(uVar2 + 0x30),(int)param_1[0x1c]);
    uVar2 = (ulonglong)(bVar1 < 2);
    bVar1 = 0;
    uVar3 = 0;
  }
  return CONCAT71(uVar3,bVar1 | (byte)uVar2) & 0xffffff01;
}



// FUNCTION 1441cf66e FUN_1441cf66e body=29 status=ok
// SIG undefined FUN_1441cf66e(void)

undefined8 FUN_1441cf66e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441cf80a FUN_1441cf80a body=93 status=ok
// SIG undefined FUN_1441cf80a(void)

void FUN_1441cf80a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98a4e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441cf868 FUN_1441cf868 body=93 status=ok
// SIG undefined FUN_1441cf868(void)

void FUN_1441cf868(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98a4e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441cf8c6 FUN_1441cf8c6 body=126 status=ok
// SIG undefined FUN_1441cf8c6(void)

void FUN_1441cf8c6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b98a4e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cf935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cf94a FUN_1441cf94a body=261 status=ok
// SIG undefined FUN_1441cf94a(void)

undefined8 FUN_1441cf94a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441cfa49;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441cfa49;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_1441cfa49:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441cf9fe;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441cfa50();
      uVar6 = 1;
      goto LAB_1441cf9fe;
    }
  }
  uVar6 = 0;
LAB_1441cf9fe:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441cfa50 FUN_1441cfa50 body=328 status=ok
// SIG undefined FUN_1441cfa50(void)

void FUN_1441cfa50(void)

{
  undefined8 uVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_141546c72();
  FUN_145cc3404(uVar1,&local_40);
  if ((longlong)local_38 != 0) {
    lVar4 = local_40;
    do {
      if ((longlong)*(int *)(lVar4 + 0x118) != 0) {
        puVar8 = *(undefined8 **)(lVar4 + 0x110);
        puVar7 = puVar8 + (longlong)*(int *)(lVar4 + 0x118) * 2;
LAB_1441cfac9:
        puVar9 = &DAT_149dfb77a;
        if (*(int *)(puVar8 + 1) != 0) {
          puVar9 = (undefined2 *)*puVar8;
        }
        lVar2 = 0;
        do {
          uVar5 = *(ushort *)((longlong)puVar9 + lVar2);
          uVar6 = (ulonglong)uVar5;
          uVar3 = *(ushort *)((longlong)L"WeeklyCycle" + lVar2);
          if (uVar5 == uVar3) {
            if (uVar5 == 0) goto LAB_1441cfb2b;
          }
          else {
            if (0x7f < (uVar3 | uVar5)) goto LAB_1441cfb0e;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar10 = (ulonglong)uVar3;
            uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar10]) goto LAB_1441cfb0e;
          }
          lVar2 = lVar2 + 2;
        } while( true );
      }
LAB_1441cfb1d:
      lVar4 = lVar4 + 0x168;
    } while (lVar4 != (longlong)local_38 * 0x168 + local_40);
  }
LAB_1441cfb5a:
  FUN_141175adb(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1441cfb0e:
  if (uVar5 == uVar3) {
LAB_1441cfb2b:
    if ((DAT_14cb0d2b0 != 0 && lVar4 != 0) && (lVar2 = FUN_1441cfb9a(), lVar2 != 0)) {
      FUN_14435d6fc(lVar2,lVar4);
    }
    goto LAB_1441cfb5a;
  }
  puVar8 = puVar8 + 2;
  if (puVar8 == puVar7) goto LAB_1441cfb1d;
  goto LAB_1441cfac9;
}



// FUNCTION 1441cfb9a FUN_1441cfb9a body=105 status=ok
// SIG undefined FUN_1441cfb9a(void)

void FUN_1441cfb9a(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14409ebc8();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1441cfc04(param_1 + 0x1160,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441cfc04 FUN_1441cfc04 body=76 status=ok
// SIG undefined FUN_1441cfc04(void)

void FUN_1441cfc04(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14409ebc8();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1441cfc41;
    }
  }
  lVar2 = 0;
LAB_1441cfc41:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1441cfc50 FUN_1441cfc50 body=29 status=ok
// SIG undefined FUN_1441cfc50(void)

undefined8 FUN_1441cfc50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441cfdec FUN_1441cfdec body=93 status=ok
// SIG undefined FUN_1441cfdec(void)

void FUN_1441cfdec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441cfe4a FUN_1441cfe4a body=93 status=ok
// SIG undefined FUN_1441cfe4a(void)

void FUN_1441cfe4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441cfea8 FUN_1441cfea8 body=126 status=ok
// SIG undefined FUN_1441cfea8(void)

void FUN_1441cfea8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b507390;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98a560;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cff17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cff32 FUN_1441cff32 body=275 status=ok
// SIG undefined FUN_1441cff32(void)

undefined8 FUN_1441cff32(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_1441d003f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441d003f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441d003f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441cffe0;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148a63198(&DAT_14cbce5f8,param_2);
      uVar6 = 1;
      goto LAB_1441cffe0;
    }
  }
  uVar6 = 0;
LAB_1441cffe0:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d0046 FUN_1441d0046 body=111 status=ok
// SIG undefined FUN_1441d0046(void)

undefined8 * FUN_1441d0046(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b98a5d0;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441d0097;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1441d0097:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d00ca FUN_1441d00ca body=115 status=ok
// SIG undefined FUN_1441d00ca(void)

void FUN_1441d00ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98cfe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a5d0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14114e6dc(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1441d013e FUN_1441d013e body=115 status=ok
// SIG undefined FUN_1441d013e(void)

void FUN_1441d013e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98cfe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a5d0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14114e6dc(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1441d01b2 FUN_1441d01b2 body=149 status=ok
// SIG undefined FUN_1441d01b2(void)

void FUN_1441d01b2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b98cfe0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98a5d0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_14114e6dc(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d0270 FUN_1441d0270 body=45 status=ok
// SIG undefined FUN_1441d0270(void)

undefined8 FUN_1441d0270(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x20) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2 == 0);
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 1441d029e FUN_1441d029e body=111 status=ok
// SIG undefined FUN_1441d029e(void)

undefined8 * FUN_1441d029e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b98a640;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441d02ef;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1441d02ef:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d0322 FUN_1441d0322 body=115 status=ok
// SIG undefined FUN_1441d0322(void)

void FUN_1441d0322(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c24a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a640;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14009d848(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1441d0396 FUN_1441d0396 body=115 status=ok
// SIG undefined FUN_1441d0396(void)

void FUN_1441d0396(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c24a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a640;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14009d848(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1441d040a FUN_1441d040a body=149 status=ok
// SIG undefined FUN_1441d040a(void)

void FUN_1441d040a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4c24a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98a640;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_14009d848(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d0490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d04be FUN_1441d04be body=38 status=ok
// SIG undefined FUN_1441d04be(void)

undefined8 FUN_1441d04be(longlong param_1)

{
  undefined8 in_RAX;
  undefined7 uVar1;
  undefined7 extraout_var;
  
  uVar1 = (undefined7)((ulonglong)in_RAX >> 8);
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0 && *(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
    uVar1 = extraout_var;
  }
  return CONCAT71(uVar1,1);
}



// FUNCTION 1441d04e4 FUN_1441d04e4 body=71 status=ok
// SIG undefined FUN_1441d04e4(void)

undefined8 * FUN_1441d04e4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b98a6b0;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d0540 FUN_1441d0540 body=144 status=ok
// SIG undefined FUN_1441d0540(void)

void FUN_1441d0540(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a6b0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x0001441d05c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1441d05d0 FUN_1441d05d0 body=144 status=ok
// SIG undefined FUN_1441d05d0(void)

void FUN_1441d05d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a6b0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x0001441d0655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1441d0660 FUN_1441d0660 body=171 status=ok
// SIG undefined FUN_1441d0660(void)

void FUN_1441d0660(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98a6b0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,p_Var1 + 1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d06fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d0716 FUN_1441d0716 body=20 status=ok
// SIG undefined FUN_1441d0716(void)

undefined1 FUN_1441d0716(longlong param_1)

{
  FUN_1441d072a(param_1 + 0x20);
  return 1;
}



// FUNCTION 1441d072a FUN_1441d072a body=167 status=ok
// SIG undefined FUN_1441d072a(void)

void FUN_1441d072a(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_1402ca054(*param_2,&DAT_149e25dfc,1);
  if (cVar2 == '\0') {
    cVar2 = FUN_1402ca054(*param_2,&DAT_149e0209e,1);
    if (cVar2 == '\0') goto LAB_1441d07b3;
    local_24 = 1;
  }
  else {
    local_24 = 0;
  }
  pcVar1 = (code *)*param_1;
  plVar4 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
  (*pcVar1)(uVar3,&local_24);
LAB_1441d07b3:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d07d2 FUN_1441d07d2 body=111 status=ok
// SIG undefined FUN_1441d07d2(void)

undefined8 * FUN_1441d07d2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b98a720;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441d0823;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1441d0823:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d0856 FUN_1441d0856 body=127 status=ok
// SIG undefined FUN_1441d0856(void)

void FUN_1441d0856(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a720;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_14009d848(puVar1 + 4,param_1 + 0x20);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1441d08d6 FUN_1441d08d6 body=127 status=ok
// SIG undefined FUN_1441d08d6(void)

void FUN_1441d08d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a720;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_14009d848(puVar1 + 4,param_1 + 0x20);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1441d0956 FUN_1441d0956 body=163 status=ok
// SIG undefined FUN_1441d0956(void)

void FUN_1441d0956(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b98a720;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  p_Var2->Flags = 0;
  FUN_14009d848(&p_Var2->EntryCount,param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)uVar1 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d09e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d0a04 FUN_1441d0a04 body=20 status=ok
// SIG undefined FUN_1441d0a04(void)

undefined1 FUN_1441d0a04(longlong param_1)

{
  FUN_1441d0a18(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441d0a18 FUN_1441d0a18 body=157 status=ok
// SIG undefined FUN_1441d0a18(void)

void FUN_1441d0a18(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_1400b465c(*param_1);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if ((longlong)*(int *)(lVar1 + 0x40) != 0) {
        lVar2 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + lVar2);
          if ((lVar3 != 0) && (*(int *)(lVar3 + 0xe0) == *(int *)(param_1 + 3))) goto LAB_1441d0a8b;
          lVar2 = lVar2 + 8;
        } while ((longlong)*(int *)(lVar1 + 0x40) * 8 != lVar2);
      }
      lVar3 = 0;
LAB_1441d0a8b:
      FUN_148d3076c(lVar1,lVar3);
      if ((longlong *)param_1[1] != (longlong *)0x0 && *(int *)(param_1 + 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d0ab1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)param_1[1] + 0x60))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441d0ab6 FUN_1441d0ab6 body=111 status=ok
// SIG undefined FUN_1441d0ab6(void)

undefined8 * FUN_1441d0ab6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b98a790;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441d0b07;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1441d0b07:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d0b3a FUN_1441d0b3a body=127 status=ok
// SIG undefined FUN_1441d0b3a(void)

void FUN_1441d0b3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a790;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_14114e6dc(puVar1 + 4,param_1 + 0x20);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1441d0bba FUN_1441d0bba body=127 status=ok
// SIG undefined FUN_1441d0bba(void)

void FUN_1441d0bba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a790;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_14114e6dc(puVar1 + 4,param_1 + 0x20);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1441d0c3a FUN_1441d0c3a body=163 status=ok
// SIG undefined FUN_1441d0c3a(void)

void FUN_1441d0c3a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e06450;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b98a790;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  p_Var2->Flags = 0;
  FUN_14114e6dc(&p_Var2->EntryCount,param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)uVar1 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d0ccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d0cde FUN_1441d0cde body=65 status=ok
// SIG undefined FUN_1441d0cde(void)

void FUN_1441d0cde(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1441d0d64(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d0d20 FUN_1441d0d20 body=67 status=ok
// SIG undefined FUN_1441d0d20(void)

undefined8 FUN_1441d0d20(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1441d0d64(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d0d64 FUN_1441d0d64 body=167 status=ok
// SIG undefined FUN_1441d0d64(void)

void FUN_1441d0d64(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  
  uVar1 = *param_2;
  lVar3 = FUN_1400b465c(*param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_1403ca142();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      if ((longlong)*(int *)(lVar3 + 0x40) != 0) {
        lVar4 = 0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + lVar4);
          if ((lVar5 != 0) && (*(int *)(lVar5 + 0xe0) == *(int *)(param_1 + 3))) goto LAB_1441d0ddb;
          lVar4 = lVar4 + 8;
        } while ((longlong)*(int *)(lVar3 + 0x40) * 8 != lVar4);
      }
      lVar5 = 0;
LAB_1441d0ddb:
      FUN_148d3076c(lVar3,lVar5);
      plVar2 = (longlong *)param_1[1];
      if (plVar2 != (longlong *)0x0 && *(int *)(param_1 + 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d0e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x60))
                  (plVar2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441d0e0c FUN_1441d0e0c body=29 status=ok
// SIG undefined FUN_1441d0e0c(void)

undefined8 FUN_1441d0e0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d0e3e FUN_1441d0e3e body=101 status=ok
// SIG undefined FUN_1441d0e3e(void)

void FUN_1441d0e3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441d0ea4 FUN_1441d0ea4 body=101 status=ok
// SIG undefined FUN_1441d0ea4(void)

void FUN_1441d0ea4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441d0f0a FUN_1441d0f0a body=134 status=ok
// SIG undefined FUN_1441d0f0a(void)

void FUN_1441d0f0a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98a800;
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
                    /* WARNING: Could not recover jumptable at 0x0001441d0f81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d0fae FUN_1441d0fae body=39 status=ok
// SIG undefined FUN_1441d0fae(void)

undefined8 FUN_1441d0fae(longlong param_1,longlong *param_2)

{
  if (*param_2 == DAT_14cbce2a8) {
    FUN_14410af30(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
  return 1;
}



// FUNCTION 1441d0fd6 FUN_1441d0fd6 body=111 status=ok
// SIG undefined FUN_1441d0fd6(void)

undefined8 * FUN_1441d0fd6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b98a950;
  plVar1 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441d1027;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1441d1027:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d11c4 FUN_1441d11c4 body=137 status=ok
// SIG undefined FUN_1441d11c4(void)

void FUN_1441d11c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_14009d848(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 1441d124e FUN_1441d124e body=137 status=ok
// SIG undefined FUN_1441d124e(void)

void FUN_1441d124e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_14009d848(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 1441d12d8 FUN_1441d12d8 body=171 status=ok
// SIG undefined FUN_1441d12d8(void)

void FUN_1441d12d8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98a950;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  *(undefined4 *)&p_Var1[1].CriticalSection = 0;
  FUN_14009d848(p_Var1 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d1374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d138e FUN_1441d138e body=269 status=ok
// SIG undefined FUN_1441d138e(void)

undefined8 FUN_1441d138e(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1441d1495;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441d1495;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441d1495:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441d1449;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441d149c(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1441d1449;
    }
  }
  uVar6 = 0;
LAB_1441d1449:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d149c FUN_1441d149c body=73 status=ok
// SIG undefined FUN_1441d149c(void)

void FUN_1441d149c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_14573a2c8(lVar1 + 0x30,(int)param_1[1]);
  FUN_148d92792(lVar1);
  if ((longlong *)param_1[2] == (longlong *)0x0 || (int)param_1[3] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001441d14e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[2] + 0x60))();
  return;
}



// FUNCTION 1441d14e6 FUN_1441d14e6 body=69 status=ok
// SIG undefined FUN_1441d14e6(void)

undefined8 * FUN_1441d14e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b98aa30;
  FUN_14127b1cd(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d16aa FUN_1441d16aa body=176 status=ok
// SIG undefined FUN_1441d16aa(void)

void FUN_1441d16aa(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b972ed0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b98aa30;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if (iVar1 != 0) {
    FUN_1413eadba(puVar2 + 6,iVar1,0);
    FUN_1413ead8c(puVar2[6],uVar3,iVar1);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 1441d175a FUN_1441d175a body=176 status=ok
// SIG undefined FUN_1441d175a(void)

void FUN_1441d175a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b972ed0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b98aa30;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if (iVar1 != 0) {
    FUN_1413eadba(puVar2 + 6,iVar1,0);
    FUN_1413ead8c(puVar2[6],uVar3,iVar1);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 1441d180a FUN_1441d180a body=210 status=ok
// SIG undefined FUN_1441d180a(void)

void FUN_1441d180a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var4 = param_2[1].DebugInfo;
  *(undefined ***)p_Var4 = &PTR_LAB_14b972ed0;
  (p_Var4->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var4 = &PTR_FUN_14b98aa30;
  (p_Var4->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var4->EntryCount = (int)uVar2;
  p_Var4->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var4->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var4[1].Type = 0;
  p_Var4[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var4[1].field_0x4 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(int *)&p_Var4[1].CriticalSection = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var4[1].CriticalSection + 4) = 0;
  }
  else {
    p_Var4 = p_Var4 + 1;
    FUN_1413eadba(p_Var4,iVar1,0);
    uVar3._0_2_ = p_Var4->Type;
    uVar3._2_2_ = p_Var4->CreatorBackTraceIndex;
    uVar3._4_4_ = *(undefined4 *)&p_Var4->field_0x4;
    FUN_1413ead8c(uVar3,uVar2,iVar1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d18cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d18e6 FUN_1441d18e6 body=278 status=ok
// SIG undefined FUN_1441d18e6(void)

undefined8 FUN_1441d18e6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441d19f6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441d19f6;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441d19f6:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441d19a9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441d19fe(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_1441d19a9;
    }
  }
  uVar6 = 0;
LAB_1441d19a9:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d19fe FUN_1441d19fe body=194 status=ok
// SIG undefined FUN_1441d19fe(void)

void FUN_1441d19fe(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar2 = FUN_1458d9664(*param_1,*(undefined4 *)(param_1 + 1));
  if (lVar2 != 0) {
    lVar3 = FUN_14030d4a0();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar3 = *param_2;
      iVar1 = *(int *)(param_1 + 3);
      if (iVar1 < 1 || lVar3 != DAT_14cbce290) {
        if (iVar1 < 2 || lVar3 != DAT_14cbce298) {
          if (iVar1 < 3 || lVar3 != DAT_14cbce2a0) {
            return;
          }
          puVar4 = (undefined8 *)(param_1[2] + 0x20);
        }
        else {
          puVar4 = (undefined8 *)(param_1[2] + 0x10);
        }
      }
      else {
        puVar4 = (undefined8 *)param_1[2];
      }
      FUN_148dacf9a(lVar2,*puVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1441d1b5a FUN_1441d1b5a body=212 status=ok
// SIG undefined FUN_1441d1b5a(void)

undefined8 FUN_1441d1b5a(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  cVar2 = FUN_14662f1da(param_1 + 1);
  if (cVar2 == '\0') {
    lVar3 = (**(code **)(*plVar1 + 0x180))(plVar1);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
      lVar3 = FUN_14591aa10();
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) {
        FUN_148d9fd72(*(longlong *)(lVar3 + 0x30) + 0x10,&local_20,plVar1);
      }
    }
    lVar3 = (**(code **)(*plVar1 + 0x180))(plVar1);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
      lVar3 = FUN_1414ac30e();
      if (lVar3 != 0) {
        FUN_145dab054(lVar3 + 0x38,&local_20,plVar1);
        plVar1[0x123] = local_20;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d1c3a FUN_1441d1c3a body=12 status=ok
// SIG undefined FUN_1441d1c3a(void)

void FUN_1441d1c3a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001441d1c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1441d1c46 FUN_1441d1c46 body=29 status=ok
// SIG undefined FUN_1441d1c46(void)

undefined8 FUN_1441d1c46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d1c64 FUN_1441d1c64 body=29 status=ok
// SIG undefined FUN_1441d1c64(void)

undefined8 FUN_1441d1c64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d1e00 FUN_1441d1e00 body=93 status=ok
// SIG undefined FUN_1441d1e00(void)

void FUN_1441d1e00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4c90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441d1e5e FUN_1441d1e5e body=93 status=ok
// SIG undefined FUN_1441d1e5e(void)

void FUN_1441d1e5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4c90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441d1ebc FUN_1441d1ebc body=126 status=ok
// SIG undefined FUN_1441d1ebc(void)

void FUN_1441d1ebc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4c90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98b230;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d1f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d1f3a FUN_1441d1f3a body=63 status=ok
// SIG undefined FUN_1441d1f3a(void)

void FUN_1441d1f3a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_4;
  FUN_1441d209c(param_1 + 0x20);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d1f7a FUN_1441d1f7a body=288 status=ok
// SIG undefined FUN_1441d1f7a(void)

undefined8 FUN_1441d1f7a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_4;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441d2094;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441d2094;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441d2094:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441d2047;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441d209c(param_1 + 0x20,param_2,&local_34);
      uVar6 = 1;
      goto LAB_1441d2047;
    }
  }
  uVar6 = 0;
LAB_1441d2047:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d209c FUN_1441d209c body=556 status=ok
// SIG undefined FUN_1441d209c(void)

void FUN_1441d209c(longlong *param_1,undefined8 param_2,ushort *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  int local_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*param_3 & 0x208) == 0) goto LAB_1441d2240;
  lVar4 = *param_1;
  plVar6 = (longlong *)FUN_140a68038(0);
  if (plVar6 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x70))(plVar6,&local_58);
    plVar6 = local_58;
    if (local_58 != (longlong *)0x0) {
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      FUN_1446efa72(&local_68,0,3,0x10);
      puVar5 = local_68;
      local_60 = 3;
      *local_68 = &PTR_LAB_149e06450;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_68[2] = lVar7;
      *local_68 = &PTR_FUN_14b98b2a0;
      local_68[3] = 0;
      iVar8 = 0;
      if (lVar4 != 0) {
        uVar3 = *(uint *)(lVar4 + 0xc);
        *(uint *)(local_68 + 3) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar8 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar8 = *(int *)(lVar10 + 0x10);
          bVar11 = iVar8 == 0;
          if (bVar11) {
            *(int *)(lVar10 + 0x10) = iVar9;
            iVar8 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar8 = iVar9;
          }
        }
      }
      *(int *)((longlong)puVar5 + 0x1c) = iVar8;
      puVar5[4] = lVar4;
      (**(code **)(*plVar6 + 0x50))(plVar6,param_2,&local_68);
      if (local_60 != 0) {
        if (local_68 == (undefined8 *)0x0) goto LAB_1441d2219;
        (**(code **)*local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        local_60 = 0;
      }
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1441d2219:
  plVar6 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_1441d2240:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441d22ca FUN_1441d22ca body=29 status=ok
// SIG undefined FUN_1441d22ca(void)

undefined8 FUN_1441d22ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d2466 FUN_1441d2466 body=93 status=ok
// SIG undefined FUN_1441d2466(void)

void FUN_1441d2466(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98b2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441d24c4 FUN_1441d24c4 body=93 status=ok
// SIG undefined FUN_1441d24c4(void)

void FUN_1441d24c4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98b2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441d2522 FUN_1441d2522 body=126 status=ok
// SIG undefined FUN_1441d2522(void)

void FUN_1441d2522(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98b2a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d2591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d25a2 FUN_1441d25a2 body=352 status=ok
// SIG undefined FUN_1441d25a2(void)

bool FUN_1441d25a2(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441d2699;
    }
    bVar6 = false;
    FUN_140192332((uint *)(param_1 + 0x18),&local_30,0);
    if (*(int *)(param_1 + 0x1c) != 0) {
      uVar2 = *(uint *)(param_1 + 0x18);
      bVar6 = false;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        if ((lVar5 == 0) || (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0x1c))) {
          bVar6 = false;
        }
        else {
          bVar6 = (*(uint *)(lVar5 + 8) & 0x10200000) == 0;
        }
      }
    }
    if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    goto LAB_1441d2672;
  }
LAB_1441d2699:
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    bVar6 = false;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441d2672;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c))) {
      bVar6 = (*(uint *)(lVar5 + 8) & 0x10200000) == 0;
      goto LAB_1441d2672;
    }
  }
  bVar6 = false;
LAB_1441d2672:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 1441d2704 FUN_1441d2704 body=130 status=ok
// SIG undefined FUN_1441d2704(void)

undefined8 * FUN_1441d2704(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b98b310;
  FUN_14124efea(param_1 + 10);
  plVar3 = (longlong *)param_1[9];
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
  plVar3 = (longlong *)param_1[7];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d2904 FUN_1441d2904 body=182 status=ok
// SIG undefined FUN_1441d2904(void)

void FUN_1441d2904(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 0x17) {
    FUN_1446efa72(param_2,0,0x17,0x10);
    *(undefined4 *)(param_2 + 1) = 0x17;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x48);
  puVar1[9] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_14589e2aa(puVar1 + 10,param_1 + 0x50);
  *(undefined4 *)(puVar1 + 0x2d) = *(undefined4 *)(param_1 + 0x168);
  return;
}



// FUNCTION 1441d29ba FUN_1441d29ba body=182 status=ok
// SIG undefined FUN_1441d29ba(void)

void FUN_1441d29ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 0x17) {
    FUN_1446efa72(param_2,0,0x17,0x10);
    *(undefined4 *)(param_2 + 1) = 0x17;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x48);
  puVar1[9] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_14589e2aa(puVar1 + 10,param_1 + 0x50);
  *(undefined4 *)(puVar1 + 0x2d) = *(undefined4 *)(param_1 + 0x168);
  return;
}



// FUNCTION 1441d2a70 FUN_1441d2a70 body=220 status=ok
// SIG undefined FUN_1441d2a70(void)

void FUN_1441d2a70(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  _LIST_ENTRY *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0x17) {
    FUN_1446efa72(param_2 + 1,0,0x17,0x10);
    param_2[1].LockCount = 0x17;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98b310;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->LockCount = p_Var3->LockCount + 1;
    UNLOCK();
  }
  p_Var1[1].ProcessLocksList.Flink = *(_LIST_ENTRY **)(param_1 + 0x40);
  p_Var4 = *(_LIST_ENTRY **)(param_1 + 0x48);
  p_Var1[1].ProcessLocksList.Blink = p_Var4;
  if (p_Var4 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var4->Blink = *(int *)&p_Var4->Blink + 1;
    UNLOCK();
  }
  FUN_14589e2aa(&p_Var1[1].EntryCount,param_1 + 0x50);
  *(undefined4 *)&p_Var1[7].ProcessLocksList.Blink = *(undefined4 *)(param_1 + 0x168);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d2b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d2b4c FUN_1441d2b4c body=65 status=ok
// SIG undefined FUN_1441d2b4c(void)

void FUN_1441d2b4c(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1441d2ca6(param_1 + 0x20,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d2b8e FUN_1441d2b8e body=278 status=ok
// SIG undefined FUN_1441d2b8e(void)

undefined8 FUN_1441d2b8e(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441d2c9e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441d2c9e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441d2c9e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441d2c52;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441d2ca6(param_1 + 0x20,&local_29);
      uVar6 = 1;
      goto LAB_1441d2c52;
    }
  }
  uVar6 = 0;
LAB_1441d2c52:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d2ca6 FUN_1441d2ca6 body=104 status=ok
// SIG undefined FUN_1441d2ca6(void)

void FUN_1441d2ca6(undefined8 *param_1,char *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if (*param_2 == '\x01') {
    plVar1 = (longlong *)*param_1;
    lVar3 = (**(code **)(*plVar1 + 0x180))(plVar1);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
      lVar3 = FUN_14116599c();
      if (lVar3 != 0) {
        cVar2 = FUN_148a7d908(lVar3,*(undefined4 *)(param_1 + 1));
        if (cVar2 != '\0') {
          FUN_1441c41e8(plVar1,param_1[2],param_1[4],param_1 + 6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1441d2d0e FUN_1441d2d0e body=83 status=ok
// SIG undefined FUN_1441d2d0e(void)

undefined8 * FUN_1441d2d0e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b98b460;
  plVar3 = (longlong *)param_1[6];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d2ee0 FUN_1441d2ee0 body=126 status=ok
// SIG undefined FUN_1441d2ee0(void)

void FUN_1441d2ee0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1441d2f5e FUN_1441d2f5e body=126 status=ok
// SIG undefined FUN_1441d2f5e(void)

void FUN_1441d2f5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1441d2fdc FUN_1441d2fdc body=164 status=ok
// SIG undefined FUN_1441d2fdc(void)

void FUN_1441d2fdc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98b460;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
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
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d3070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d3080 FUN_1441d3080 body=71 status=ok
// SIG undefined FUN_1441d3080(void)

void FUN_1441d3080(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1441d31f2(param_1 + 0x20,&local_10,param_3,param_5);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d30c8 FUN_1441d30c8 body=296 status=ok
// SIG undefined FUN_1441d30c8(void)

undefined8
FUN_1441d30c8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
    if (iVar1 == 2) goto LAB_1441d31ea;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441d31ea;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441d31ea:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441d319d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441d31f2(param_1 + 0x20,&local_38,param_3,param_5);
      uVar6 = 1;
      goto LAB_1441d319d;
    }
  }
  uVar6 = 0;
LAB_1441d319d:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d31f2 FUN_1441d31f2 body=806 status=ok
// SIG undefined FUN_1441d31f2(void)

void FUN_1441d31f2(longlong *param_1,undefined8 *param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78 [3];
  undefined8 uStack_60;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_4c = *param_3;
  lVar8 = *param_1;
  uVar7 = FUN_140d71416(*param_2);
  local_78[2] = 0;
  uStack_60 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  FUN_1411790ac(uVar7,local_78 + 2);
  if (1 < (int)uStack_60) {
    FUN_145d1c6f4(local_78,local_78 + 2);
    FUN_14622ea14(lVar8,uVar7,local_78 + 2);
    local_48 = (longlong *)param_1[1];
    local_40 = (longlong *)param_1[2];
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    FUN_14662f1ea(lVar8 + 0x800,&local_48);
    plVar4 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar8 = lVar8 + 0x7b0;
    local_48 = (longlong *)param_1[1];
    plVar4 = (longlong *)param_1[2];
    if (plVar4 == (longlong *)0x0) {
      local_40 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_40 = plVar4;
    }
    uVar5 = (**(code **)(*local_48 + 0x40))();
    iVar6 = FUN_1460361b4(lVar8,uVar5,&local_48);
    plVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
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
    if (iVar6 != -1) {
      local_48 = (longlong *)param_1[1];
      plVar4 = (longlong *)param_1[2];
      if (plVar4 == (longlong *)0x0) {
        local_40 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_40 = plVar4;
      }
      uVar5 = (**(code **)(*local_48 + 0x40))();
      FUN_1460361b4(lVar8,uVar5,&local_48);
      plVar1 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
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
      local_48 = (longlong *)param_1[1];
      plVar4 = (longlong *)param_1[2];
      if (plVar4 == (longlong *)0x0) {
        local_40 = (longlong *)0x0;
        FUN_145bf707e(lVar8);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_40 = plVar4;
        FUN_145bf707e(lVar8);
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
    }
    *param_4 = 1;
  }
  plVar4 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d351a FUN_1441d351a body=125 status=ok
// SIG undefined FUN_1441d351a(void)

undefined8 * FUN_1441d351a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b98b4d0;
  plVar1 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441d356b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1441d356b:
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d3716 FUN_1441d3716 body=211 status=ok
// SIG undefined FUN_1441d3716(void)

void FUN_1441d3716(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4ea0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b98b4d0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_141509b10(puVar2 + 7,param_1 + 0x38);
  return;
}



// FUNCTION 1441d37ea FUN_1441d37ea body=211 status=ok
// SIG undefined FUN_1441d37ea(void)

void FUN_1441d37ea(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4e4ea0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b98b4d0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_141509b10(puVar2 + 7,param_1 + 0x38);
  return;
}



// FUNCTION 1441d38be FUN_1441d38be body=270 status=ok
// SIG undefined FUN_1441d38be(void)

void FUN_1441d38be(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4e4ea0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b98b4d0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 * 2);
  }
  p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Flink = 0;
  FUN_141509b10(&p_Var2[1].CriticalSection,param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d39b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d39cc FUN_1441d39cc body=77 status=ok
// SIG undefined FUN_1441d39cc(void)

void FUN_1441d39cc(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_9 = param_3;
  FUN_1441d3b44(param_1 + 0x20,&local_10,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d3a1a FUN_1441d3a1a body=297 status=ok
// SIG undefined FUN_1441d3a1a(void)

undefined8 FUN_1441d3a1a(longlong param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_31;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  local_31 = param_3;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441d3b3d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441d3b3d;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441d3b3d:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441d3af0;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441d3b44(param_1 + 0x20,&local_38,&local_31,param_4);
      uVar6 = 1;
      goto LAB_1441d3af0;
    }
  }
  uVar6 = 0;
LAB_1441d3af0:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d3b44 FUN_1441d3b44 body=187 status=ok
// SIG undefined FUN_1441d3b44(void)

void FUN_1441d3b44(undefined8 *param_1,undefined4 *param_2,char *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_3 == '\x01') {
    uVar1 = *param_2;
    uVar3 = *param_1;
    local_38 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    FUN_141509b10(&local_38,param_1 + 3);
    FUN_148d9427e(uVar3,uVar1,param_4,&local_38);
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    plVar2 = (longlong *)param_1[3];
    if (plVar2 != (longlong *)0x0 && *(int *)(param_1 + 4) != 0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,0xffffffff,&local_38);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d3c00 FUN_1441d3c00 body=52 status=ok
// SIG undefined FUN_1441d3c00(void)

undefined8 * FUN_1441d3c00(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b98b5b0;
  FUN_14124efea(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d3db2 FUN_1441d3db2 body=132 status=ok
// SIG undefined FUN_1441d3db2(void)

void FUN_1441d3db2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 0x15) {
    FUN_1446efa72(param_2,0,0x15,0x10);
    *(undefined4 *)(param_2 + 1) = 0x15;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edc60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b5b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  FUN_14589e2aa(puVar1 + 6,param_1 + 0x30);
  *(undefined4 *)(puVar1 + 0x29) = *(undefined4 *)(param_1 + 0x148);
  return;
}



// FUNCTION 1441d3e36 FUN_1441d3e36 body=132 status=ok
// SIG undefined FUN_1441d3e36(void)

void FUN_1441d3e36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 0x15) {
    FUN_1446efa72(param_2,0,0x15,0x10);
    *(undefined4 *)(param_2 + 1) = 0x15;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edc60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b5b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  FUN_14589e2aa(puVar1 + 6,param_1 + 0x30);
  *(undefined4 *)(puVar1 + 0x29) = *(undefined4 *)(param_1 + 0x148);
  return;
}



// FUNCTION 1441d3eba FUN_1441d3eba body=168 status=ok
// SIG undefined FUN_1441d3eba(void)

void FUN_1441d3eba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0x15) {
    FUN_1446efa72(param_2 + 1,0,0x15,0x10);
    param_2[1].LockCount = 0x15;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edc60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98b5b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  FUN_14589e2aa(p_Var1 + 1,param_1 + 0x30);
  p_Var1[6].Flags = *(DWORD *)(param_1 + 0x148);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d3f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d3f62 FUN_1441d3f62 body=73 status=ok
// SIG undefined FUN_1441d3f62(void)

void FUN_1441d3f62(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_4;
  FUN_1441d40ce(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d3fac FUN_1441d3fac body=288 status=ok
// SIG undefined FUN_1441d3fac(void)

undefined8 FUN_1441d3fac(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_2c = param_4;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441d40c6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441d40c6;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441d40c6:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441d407a;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441d40ce(param_1 + 0x20,&local_30,&local_2c);
      uVar6 = 1;
      goto LAB_1441d407a;
    }
  }
  uVar6 = 0;
LAB_1441d407a:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d40ce FUN_1441d40ce body=819 status=ok
// SIG undefined FUN_1441d40ce(void)

void FUN_1441d40ce(longlong *param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *param_3;
  iVar10 = *param_2;
  plVar5 = (longlong *)*param_1;
  *(undefined1 *)(plVar5 + 0xf1) = 0;
  lVar7 = (**(code **)(*plVar5 + 0x180))(plVar5);
  if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x1f0) == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_14116599c();
  }
  if (iVar10 != 0x16) {
    cVar6 = FUN_148a7d908(lVar7,uVar3);
    if (cVar6 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
    }
    *(undefined4 *)((longlong)plVar5 + 0x5c4) = 0xffffffff;
    FUN_1441c3fda(plVar5,1);
    local_60 = plVar5;
    plVar8 = (longlong *)FUN_14001cc68(0x188,0x10);
    FUN_148da11e0(plVar8,&local_60,param_1 + 1);
    plVar1 = plVar8 + 2;
    local_58 = plVar1;
    local_50 = plVar8;
    FUN_148da12ca(&local_58,plVar1);
    local_48 = plVar1;
    local_40 = plVar8;
    if (plVar8 == (longlong *)0x0) {
      FUN_145db4d00(plVar5,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      FUN_145db4d00(plVar5);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    plVar1 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if ((char)plVar5[0xde] == '\x01') {
      FUN_14124efea(plVar5 + 0xba);
      *(undefined1 *)(plVar5 + 0xde) = 0;
    }
    goto LAB_1441d4257;
  }
  *(undefined1 *)((longlong)plVar5 + 0x789) = 1;
  local_48 = (longlong *)0x0;
  local_40._0_4_ = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  plVar1 = local_48;
  local_40 = (longlong *)CONCAT44(local_40._4_4_,3);
  *local_48 = (longlong)&PTR_LAB_14b4edcd0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  local_48[2] = lVar9;
  *local_48 = (longlong)&PTR_FUN_14b98b620;
  local_48[3] = 0;
  iVar10 = 0;
  if (plVar5 != (longlong *)0x0) {
    uVar4 = *(uint *)((longlong)plVar5 + 0xc);
    *(uint *)(local_48 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar10 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar10 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar10 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar11;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar10 = iVar11;
      }
    }
  }
  *(int *)((longlong)plVar1 + 0x1c) = iVar10;
  plVar1[4] = (longlong)plVar5;
  FUN_145caf794(lVar7 + 0x40,&local_58,&local_48);
  if ((int)local_40 == 0) {
LAB_1441d423d:
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
    goto LAB_1441d423d;
  }
  plVar5[0xf2] = (longlong)local_58;
LAB_1441d4257:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441d441a FUN_1441d441a body=29 status=ok
// SIG undefined FUN_1441d441a(void)

undefined8 FUN_1441d441a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d45b6 FUN_1441d45b6 body=93 status=ok
// SIG undefined FUN_1441d45b6(void)

void FUN_1441d45b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edcd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441d4614 FUN_1441d4614 body=93 status=ok
// SIG undefined FUN_1441d4614(void)

void FUN_1441d4614(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edcd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441d4672 FUN_1441d4672 body=126 status=ok
// SIG undefined FUN_1441d4672(void)

void FUN_1441d4672(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edcd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98b620;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d46e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d46f0 FUN_1441d46f0 body=65 status=ok
// SIG undefined FUN_1441d46f0(void)

void FUN_1441d46f0(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1441d484a(param_1 + 0x20,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d4732 FUN_1441d4732 body=278 status=ok
// SIG undefined FUN_1441d4732(void)

undefined8 FUN_1441d4732(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441d4842;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441d4842;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441d4842:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441d47f6;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441d484a(param_1 + 0x20,&local_2c);
      uVar6 = 1;
      goto LAB_1441d47f6;
    }
  }
  uVar6 = 0;
LAB_1441d47f6:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d484a FUN_1441d484a body=104 status=ok
// SIG undefined FUN_1441d484a(void)

void FUN_1441d484a(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0x18 < *param_2) {
    param_1 = (longlong *)*param_1;
    lVar1 = param_1[0xf2];
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x1f0) == 0)) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14116599c();
    }
    param_1[0xf2] = 0;
    if (lVar1 != 0) {
      FUN_14480f766(lVar2 + 0x40,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1441d48b2 FUN_1441d48b2 body=64 status=ok
// SIG undefined FUN_1441d48b2(void)

undefined8 * FUN_1441d48b2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98b820;
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



// FUNCTION 1441d48f6 FUN_1441d48f6 body=81 status=ok
// SIG undefined FUN_1441d48f6(void)

undefined8 FUN_1441d48f6(longlong param_1)

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



// FUNCTION 1441d494c FUN_1441d494c body=89 status=ok
// SIG undefined FUN_1441d494c(void)

bool FUN_1441d494c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441d4997;
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
LAB_1441d4997:
  return lVar6 == param_2;
}



// FUNCTION 1441d49c2 FUN_1441d49c2 body=118 status=ok
// SIG undefined FUN_1441d49c2(void)

void FUN_1441d49c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b820;
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



// FUNCTION 1441d4a38 FUN_1441d4a38 body=118 status=ok
// SIG undefined FUN_1441d4a38(void)

void FUN_1441d4a38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b820;
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



// FUNCTION 1441d4aae FUN_1441d4aae body=156 status=ok
// SIG undefined FUN_1441d4aae(void)

void FUN_1441d4aae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edd40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98b820;
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
                    /* WARNING: Could not recover jumptable at 0x0001441d4b3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d4b4a FUN_1441d4b4a body=77 status=ok
// SIG undefined FUN_1441d4b4a(void)

void FUN_1441d4b4a(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_3;
  FUN_1441d4c00(param_1 + 0x28,&local_10,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d4b98 FUN_1441d4b98 body=102 status=ok
// SIG undefined FUN_1441d4b98(void)

undefined8 FUN_1441d4b98(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_3;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441d4c00(param_1 + 0x28,&local_10,&local_c);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d4c00 FUN_1441d4c00 body=231 status=ok
// SIG undefined FUN_1441d4c00(void)

void FUN_1441d4c00(longlong *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *param_2;
  lVar3 = *param_1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  uVar2 = *param_3;
  FUN_1441c87d4(local_38,iVar1);
  cVar4 = (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x340))
                    (*(longlong **)(lVar3 + 0x20),local_38,1);
  if (cVar4 == '\0') {
    if (iVar1 == 10) {
      lVar5 = (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x180))();
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
        lVar5 = FUN_14583d3ae();
        if (lVar5 != 0) {
          FUN_1441bed2c(lVar5,uVar2,local_38);
        }
      }
    }
    else {
      FUN_148d90230(*(longlong **)(lVar3 + 0x20),local_38);
    }
  }
  *(undefined1 *)(lVar3 + 0x18) = 1;
  FUN_1441c3fda(*(undefined8 *)(lVar3 + 0x20),0);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d4cfa FUN_1441d4cfa body=64 status=ok
// SIG undefined FUN_1441d4cfa(void)

undefined8 * FUN_1441d4cfa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98b890;
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



// FUNCTION 1441d4d3e FUN_1441d4d3e body=81 status=ok
// SIG undefined FUN_1441d4d3e(void)

undefined8 FUN_1441d4d3e(longlong param_1)

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



// FUNCTION 1441d4d94 FUN_1441d4d94 body=89 status=ok
// SIG undefined FUN_1441d4d94(void)

bool FUN_1441d4d94(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441d4ddf;
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
LAB_1441d4ddf:
  return lVar6 == param_2;
}



// FUNCTION 1441d4e0a FUN_1441d4e0a body=118 status=ok
// SIG undefined FUN_1441d4e0a(void)

void FUN_1441d4e0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4eddb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b890;
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



// FUNCTION 1441d4e80 FUN_1441d4e80 body=118 status=ok
// SIG undefined FUN_1441d4e80(void)

void FUN_1441d4e80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4eddb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b890;
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



// FUNCTION 1441d4ef6 FUN_1441d4ef6 body=156 status=ok
// SIG undefined FUN_1441d4ef6(void)

void FUN_1441d4ef6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4eddb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98b890;
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
                    /* WARNING: Could not recover jumptable at 0x0001441d4f82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d4f92 FUN_1441d4f92 body=65 status=ok
// SIG undefined FUN_1441d4f92(void)

void FUN_1441d4f92(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1441d5032(param_1 + 0x28,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d4fd4 FUN_1441d4fd4 body=92 status=ok
// SIG undefined FUN_1441d4fd4(void)

undefined8 FUN_1441d4fd4(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441d5032(param_1 + 0x28,&local_c);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d5032 FUN_1441d5032 body=605 status=ok
// SIG undefined FUN_1441d5032(void)

void FUN_1441d5032(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined4 local_48;
  longlong local_40 [2];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  if (*param_2 < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar5 = DAT_14c844840;
  local_50 = DAT_14c844840;
  if (DAT_14c844840 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
    LOCK();
    *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
    UNLOCK();
  }
  else {
    (**(code **)(*DAT_14c844840 + 8))(DAT_14c844840);
  }
  local_48 = 0;
  plVar4 = plVar5;
  if (*(code **)(*plVar5 + 0x50) != FUN_144828418) {
    plVar4 = (longlong *)(**(code **)(*plVar5 + 0x50))(plVar5);
  }
  FUN_1447a1fc0(plVar4);
  pcVar2 = *(code **)(*plVar5 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar4 = plVar5 + 3;
    if (plVar5[5] != 0) {
      plVar4 = (longlong *)(plVar5[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar4 = plVar5 + 2;
  }
  else {
    plVar4 = (longlong *)(*pcVar2)(plVar5);
  }
  if ((int)plVar4[1] < 2) {
    FUN_140002266(local_40,L"BUGME - Crossplay is disabled: %s",&DAT_149dfb77a);
    FUN_140233b1a(local_30,local_40);
    FUN_140008f88(&local_50,local_30);
    if (local_30[0] != (longlong *)0x0) {
      (**(code **)(*local_30[0] + 0x10))();
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x340))
                    (*(longlong **)(lVar1 + 0x20),&local_50,1);
  if (cVar3 == '\0') {
    FUN_148d90230(*(undefined8 *)(lVar1 + 0x20),&local_50);
  }
  *(undefined1 *)(lVar1 + 0x18) = 1;
  FUN_1441c3fda(*(undefined8 *)(lVar1 + 0x20),0);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d529f FUN_1441d529f body=59 status=ok
// SIG undefined FUN_1441d529f(void)

void FUN_1441d529f(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cbce5e8;
  if (DAT_14cbce5e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cbce5e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d52cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441d52da FUN_1441d52da body=58 status=ok
// SIG undefined FUN_1441d52da(void)

undefined8 * FUN_1441d52da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b98bd10;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d5492 FUN_1441d5492 body=132 status=ok
// SIG undefined FUN_1441d5492(void)

void FUN_1441d5492(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98bd10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x28);
  puVar1[5] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1441d5516 FUN_1441d5516 body=132 status=ok
// SIG undefined FUN_1441d5516(void)

void FUN_1441d5516(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98bd10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x28);
  puVar1[5] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1441d559a FUN_1441d559a body=170 status=ok
// SIG undefined FUN_1441d559a(void)

void FUN_1441d559a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  longlong *plVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e02020;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b98bd10;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  plVar4 = *(longlong **)(param_1 + 0x28);
  *(longlong **)&p_Var2->Flags = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)uVar1 >> 0x10);
  *(undefined1 *)&p_Var2[1].CriticalSection = *(undefined1 *)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d5634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d5644 FUN_1441d5644 body=36 status=ok
// SIG undefined FUN_1441d5644(void)

undefined8 FUN_1441d5644(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x340))
            (*(longlong **)(param_1 + 0x20),param_1 + 0x28,*(undefined1 *)(param_1 + 0x38));
  return 0;
}



// FUNCTION 1441d5668 FUN_1441d5668 body=281 status=ok
// SIG undefined FUN_1441d5668(void)

undefined8 FUN_1441d5668(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1441d577b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441d577b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441d577b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441d572f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x340))
                (*(longlong **)(param_1 + 0x20),param_1 + 0x28,*(undefined1 *)(param_1 + 0x38));
      uVar6 = 1;
      goto LAB_1441d572f;
    }
  }
  uVar6 = 0;
LAB_1441d572f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d5782 FUN_1441d5782 body=29 status=ok
// SIG undefined FUN_1441d5782(void)

undefined8 FUN_1441d5782(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d591e FUN_1441d591e body=93 status=ok
// SIG undefined FUN_1441d591e(void)

void FUN_1441d591e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98bd80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441d597c FUN_1441d597c body=93 status=ok
// SIG undefined FUN_1441d597c(void)

void FUN_1441d597c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98bd80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441d59da FUN_1441d59da body=126 status=ok
// SIG undefined FUN_1441d59da(void)

void FUN_1441d59da(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ede20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98bd80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d5a49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d5a58 FUN_1441d5a58 body=74 status=ok
// SIG undefined FUN_1441d5a58(void)

void FUN_1441d5a58(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  local_c = param_4;
  FUN_1441d5bc6(param_1 + 0x20,&local_10,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d5aa4 FUN_1441d5aa4 body=289 status=ok
// SIG undefined FUN_1441d5aa4(void)

undefined8 FUN_1441d5aa4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_3;
  local_2c = param_4;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441d5bbf;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441d5bbf;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441d5bbf:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441d5b73;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441d5bc6(param_1 + 0x20,&local_30,&local_2c);
      uVar6 = 1;
      goto LAB_1441d5b73;
    }
  }
  uVar6 = 0;
LAB_1441d5b73:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d5bc6 FUN_1441d5bc6 body=172 status=ok
// SIG undefined FUN_1441d5bc6(void)

void FUN_1441d5bc6(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((0x1a < *param_3) && (*param_2 < 0x1b)) {
    param_1 = (longlong *)*param_1;
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
      lVar2 = FUN_14094c9c2();
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
        FUN_148da76c4(*(longlong *)(lVar2 + 0x30),1);
      }
    }
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x1f0) == 0)) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14116599c();
    }
    lVar1 = param_1[0x11f];
    param_1[0x11f] = 0;
    if (lVar1 != 0) {
      FUN_14480f766(lVar2 + 0x70);
      return;
    }
  }
  return;
}



// FUNCTION 1441d5c72 FUN_1441d5c72 body=64 status=ok
// SIG undefined FUN_1441d5c72(void)

undefined8 * FUN_1441d5c72(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98c610;
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



// FUNCTION 1441d5cb6 FUN_1441d5cb6 body=81 status=ok
// SIG undefined FUN_1441d5cb6(void)

undefined8 FUN_1441d5cb6(longlong param_1)

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



// FUNCTION 1441d5d0c FUN_1441d5d0c body=89 status=ok
// SIG undefined FUN_1441d5d0c(void)

bool FUN_1441d5d0c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441d5d57;
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
LAB_1441d5d57:
  return lVar6 == param_2;
}



// FUNCTION 1441d5d82 FUN_1441d5d82 body=118 status=ok
// SIG undefined FUN_1441d5d82(void)

void FUN_1441d5d82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98c610;
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



// FUNCTION 1441d5df8 FUN_1441d5df8 body=118 status=ok
// SIG undefined FUN_1441d5df8(void)

void FUN_1441d5df8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98c610;
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



// FUNCTION 1441d5e6e FUN_1441d5e6e body=156 status=ok
// SIG undefined FUN_1441d5e6e(void)

void FUN_1441d5e6e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ede90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98c610;
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
                    /* WARNING: Could not recover jumptable at 0x0001441d5efa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d5f3e FUN_1441d5f3e body=64 status=ok
// SIG undefined FUN_1441d5f3e(void)

undefined8 * FUN_1441d5f3e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98c710;
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



// FUNCTION 1441d5f82 FUN_1441d5f82 body=81 status=ok
// SIG undefined FUN_1441d5f82(void)

undefined8 FUN_1441d5f82(longlong param_1)

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



// FUNCTION 1441d5fd8 FUN_1441d5fd8 body=89 status=ok
// SIG undefined FUN_1441d5fd8(void)

bool FUN_1441d5fd8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441d6023;
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
LAB_1441d6023:
  return lVar6 == param_2;
}



// FUNCTION 1441d604e FUN_1441d604e body=118 status=ok
// SIG undefined FUN_1441d604e(void)

void FUN_1441d604e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98c710;
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



// FUNCTION 1441d60c4 FUN_1441d60c4 body=118 status=ok
// SIG undefined FUN_1441d60c4(void)

void FUN_1441d60c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98c710;
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



// FUNCTION 1441d613a FUN_1441d613a body=156 status=ok
// SIG undefined FUN_1441d613a(void)

void FUN_1441d613a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98c710;
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
                    /* WARNING: Could not recover jumptable at 0x0001441d61c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d620a FUN_1441d620a body=64 status=ok
// SIG undefined FUN_1441d620a(void)

undefined8 * FUN_1441d620a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98cac0;
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



// FUNCTION 1441d624e FUN_1441d624e body=81 status=ok
// SIG undefined FUN_1441d624e(void)

undefined8 FUN_1441d624e(longlong param_1)

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



// FUNCTION 1441d62a4 FUN_1441d62a4 body=89 status=ok
// SIG undefined FUN_1441d62a4(void)

bool FUN_1441d62a4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441d62ef;
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
LAB_1441d62ef:
  return lVar6 == param_2;
}



// FUNCTION 1441d631a FUN_1441d631a body=118 status=ok
// SIG undefined FUN_1441d631a(void)

void FUN_1441d631a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4eddb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98cac0;
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



// FUNCTION 1441d6390 FUN_1441d6390 body=118 status=ok
// SIG undefined FUN_1441d6390(void)

void FUN_1441d6390(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4eddb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98cac0;
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



// FUNCTION 1441d6406 FUN_1441d6406 body=156 status=ok
// SIG undefined FUN_1441d6406(void)

void FUN_1441d6406(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4eddb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98cac0;
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
                    /* WARNING: Could not recover jumptable at 0x0001441d6492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d64a2 FUN_1441d64a2 body=65 status=ok
// SIG undefined FUN_1441d64a2(void)

void FUN_1441d64a2(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1441d6542(param_1 + 0x28,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d64e4 FUN_1441d64e4 body=92 status=ok
// SIG undefined FUN_1441d64e4(void)

undefined8 FUN_1441d64e4(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441d6542(param_1 + 0x28,&local_c);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d6542 FUN_1441d6542 body=126 status=ok
// SIG undefined FUN_1441d6542(void)

void FUN_1441d6542(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  switch(*param_2) {
  case 0:
    FUN_148d98ca6(lVar1);
    return;
  case 1:
    if (*(char *)(lVar1 + 0x38) != '\x01') goto LAB_1441d65a9;
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = 4;
    break;
  case 2:
    if (*(char *)(lVar1 + 0x38) != '\x01') goto LAB_1441d65a9;
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = 5;
    break;
  case 3:
    if (*(char *)(lVar1 + 0x38) != '\x01') goto LAB_1441d65a9;
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = 6;
    break;
  default:
    if (*(char *)(lVar1 + 0x38) != '\x01') goto LAB_1441d65a9;
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = 7;
  }
  FUN_1441c8e40(uVar2,uVar3);
LAB_1441d65a9:
  *(undefined1 *)(lVar1 + 0x18) = 1;
  return;
}



// FUNCTION 1441d65c0 FUN_1441d65c0 body=29 status=ok
// SIG undefined FUN_1441d65c0(void)

undefined8 FUN_1441d65c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d675c FUN_1441d675c body=93 status=ok
// SIG undefined FUN_1441d675c(void)

void FUN_1441d675c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98cdf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441d67ba FUN_1441d67ba body=93 status=ok
// SIG undefined FUN_1441d67ba(void)

void FUN_1441d67ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98cdf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441d6818 FUN_1441d6818 body=126 status=ok
// SIG undefined FUN_1441d6818(void)

void FUN_1441d6818(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98cdf0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d6887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d68a2 FUN_1441d68a2 body=286 status=ok
// SIG undefined FUN_1441d68a2(void)

undefined8 FUN_1441d68a2(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441d69b9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441d69b9;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1441d69b9:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441d696a;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143f37c94(*(undefined8 *)(param_1 + 0x20),*param_2,param_3);
      uVar6 = 1;
      goto LAB_1441d696a;
    }
  }
  uVar6 = 0;
LAB_1441d696a:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d69c2 FUN_1441d69c2 body=29 status=ok
// SIG undefined FUN_1441d69c2(void)

undefined8 FUN_1441d69c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441d6b5e FUN_1441d6b5e body=93 status=ok
// SIG undefined FUN_1441d6b5e(void)

void FUN_1441d6b5e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98ce60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441d6bbc FUN_1441d6bbc body=93 status=ok
// SIG undefined FUN_1441d6bbc(void)

void FUN_1441d6bbc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98ce60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441d6c1a FUN_1441d6c1a body=126 status=ok
// SIG undefined FUN_1441d6c1a(void)

void FUN_1441d6c1a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b98ce60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441d6c89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441d6c98 FUN_1441d6c98 body=36 status=ok
// SIG undefined FUN_1441d6c98(void)

undefined8 FUN_1441d6c98(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x8e0) == '\x01') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x8e0) = 0;
    FUN_1441c3056();
  }
  return 0;
}



// FUNCTION 1441d6cbc FUN_1441d6cbc body=282 status=ok
// SIG undefined FUN_1441d6cbc(void)

undefined8 FUN_1441d6cbc(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1441d6dd0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441d6dd0;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441d6dd0:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441d6d67;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x8e0) == '\x01') {
        *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x8e0) = 0;
        FUN_1441c3056();
      }
      goto LAB_1441d6d67;
    }
  }
  uVar6 = 0;
LAB_1441d6d67:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d6dd7 FUN_1441d6dd7 body=5558 status=ok
// SIG undefined FUN_1441d6dd7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441d6dd7(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  wchar_t *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = L"AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcde00 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbcde08,L"UNSET",1);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbcde10);
  if (cVar1 == '\0') {
    _DAT_14cbcde10 = 0;
    uRam000000014cbcde18 = 0;
  }
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbcde20 = 0x47efffffe0000000;
  _DAT_14cbcde28 = 0x47efffffe0000000;
  _DAT_14cbcde30 = 0x47efffffe0000000;
  _DAT_14cbcde38 = 0x47efffffe0000000;
  _DAT_14cbcde40 = 0x47efffffe0000000;
  _DAT_14cbcde48 = 0x47efffffe0000000;
  _DAT_14cbcde50 = 0x47efffffe0000000;
  _DAT_14cbcde58 = 0x47efffffe0000000;
  local_70 = 
  L"慃桳眀慥潰彮灤彳獥楴慭整戀獡捩挀慨汬湥敧猀捯慩l桰瑯彯潭敤最湥牥捩瑟獡k慭汩爀獥慰湷琀瑵牯慩l灳捥慩彬潮楴楦慣楴湯最湥牥捩湟瑯晩捩瑡潩n慶汵彴慣摲伀䱎义彅䕍卓䝁E义䅇䕍䵟卅䅓䕇一呏䙉䍉呁佉彎䕍卓䝁E䕍啎呟呕剏䅉彌䕍卓䝁E潣汬捥楴汢e灵慤整挀湯楦彧灵慤整搀楥楮tGbxBrainAspectSettings_TakeOff"
  ;
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcde60 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbcde68,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1441b4280);
  local_70 = L"潢敮䜀戀砀䄀琀琀爀椀戀甀琀攀䐀攀昀";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbcde7c = 0;
  FUN_14052b5e0(&DAT_14cbcde78,"PlayerAwareness",0);
  _DAT_14cbcde88 = "PlayerAwareness";
  local_70 = L"basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcde90 = (ulonglong)uVar2;
  local_70 = L"challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcde98 = (ulonglong)uVar2;
  local_70 = L"online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdea0 = (ulonglong)uVar2;
  local_70 = L"social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdea8 = (ulonglong)uVar2;
  local_70 = L"alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdeb0 = (ulonglong)uVar2;
  local_70 = L"photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdeb8 = (ulonglong)uVar2;
  local_70 = L"generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdec0 = (ulonglong)uVar2;
  local_70 = L"mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdec8 = (ulonglong)uVar2;
  local_70 = 
  L"慭汩爀獥慰湷琀瑵牯慩l灳捥慩彬潮楴楦慣楴湯最湥牥捩湟瑯晩捩瑡潩n慶汵彴慣摲伀䱎义彅䕍卓䝁E义䅇䕍䵟卅䅓䕇一呏䙉䍉呁佉彎䕍卓䝁E䕍啎呟呕剏䅉彌䕍卓䝁E潣汬捥楴汢e灵慤整挀湯楦彧灵慤整搀楥楮tGbxBrainAspectSettings_TakeOff"
  ;
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcded0 = (ulonglong)uVar2;
  local_70 = L"respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcded8 = (ulonglong)uVar2;
  local_70 = L"tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdee0 = (ulonglong)uVar2;
  local_70 = L"special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdee8 = (ulonglong)uVar2;
  local_70 = L"generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdef0 = (ulonglong)uVar2;
  local_70 = L"vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdef8 = (ulonglong)uVar2;
  local_70 = L"ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdf00 = (ulonglong)uVar2;
  local_70 = L"INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdf08 = (ulonglong)uVar2;
  local_70 = L"NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdf10 = (ulonglong)uVar2;
  local_70 = L"MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdf18 = (ulonglong)uVar2;
  local_70 = L"collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdf20 = (ulonglong)uVar2;
  local_70 = L"湩瑩";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = L"update";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = L"config_update";
  local_68 = 0xd;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = L"deinit";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&DAT_14cbcdf28,L"Party",1);
  FUN_1446f470e(&DAT_14cbcdf30,&DAT_149e063b2,1);
  local_70 = L"獕e慔杲瑥潌正圀慥潰nGpsGeneratorSettings_TargetingOwner";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdf38 = (ulonglong)uVar2;
  local_70 = L"Sight";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdf40 = (ulonglong)uVar2;
  local_70 = L"TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdf48 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbcdf50,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1441b48ba);
  FUN_140056680(&DAT_14cbcdf60,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1441b48cb);
  FUN_140056680(&DAT_14cbcdf70,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1441b48dc);
  FUN_140056680(&DAT_14cbcdf80,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1441b48ed);
  FUN_1446f470e(&DAT_14cbcdf90,L"LIMB_GORED",1);
  _DAT_14cbcdf98 = 0x4072c00000000000;
  _DAT_14cbcdfa0 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbcdfa8,L"body",1);
  FUN_1446f470e(&DAT_14cbcdfb0,L"title_card");
  local_70 = L"Standard";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdfb8 = (ulonglong)uVar2;
  local_70 = L"PrologueSkip";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdfc0 = (ulonglong)uVar2;
  local_70 = L"UltimateVaultHunterSkip";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdfc8 = (ulonglong)uVar2;
  local_70 = L"SkipToDLC_Cowbell";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdfd0 = (ulonglong)uVar2;
  local_70 = L"SkipToDLC_Harmonica";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdfd8 = (ulonglong)uVar2;
  local_70 = L"灭⸀䴀愀樀漀爀";
  local_68 = 2;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdfe0 = (ulonglong)uVar2;
  local_70 = L"Intro_P";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbcdfe8 = (ulonglong)uVar2;
  local_70 = L"UnixSocketPath";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcdff0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbcdff8,L"available");
  atexit((_func_5014 *)&LAB_1441b4dd6);
  FUN_140056680(&DAT_14cbce008,L"synced");
  atexit((_func_5014 *)&LAB_1441b4de7);
  FUN_140056680(&DAT_14cbce018,L"offline");
  atexit((_func_5014 *)&LAB_1441b4df8);
  FUN_140056680(&DAT_14cbce028,L"incompatible");
  atexit((_func_5014 *)&LAB_1441b4e09);
  FUN_140056680(&DAT_14cbce038,L"conflict");
  atexit((_func_5014 *)&LAB_1441b4e1a);
  _DAT_14cbce048 = 0;
  uRam000000014cbce050 = 0;
  _DAT_14cbce058 = 0;
  DAT_14cbce060 = 0;
  uRam000000014cbce068 = 0;
  FUN_1446ddda2(&DAT_14cbce048,"Matchmaking_AutomaticRegionText",0);
  atexit((_func_5014 *)&LAB_1441bbcf8);
  _DAT_14cbce070 = 0;
  uRam000000014cbce078 = 0;
  _DAT_14cbce080 = 0;
  DAT_14cbce088 = 0;
  uRam000000014cbce090 = 0;
  FUN_1446ddda2(&DAT_14cbce070,"Matchmaking_ManualRegionText",0);
  atexit((_func_5014 *)&LAB_1441bbd09);
  _DAT_14cbce098 = 0;
  uRam000000014cbce0a0 = 0;
  _DAT_14cbce0a8 = 0;
  DAT_14cbce0b0 = 0;
  uRam000000014cbce0b8 = 0;
  FUN_1446ddda2(&DAT_14cbce098,"PingDisplayText",0);
  atexit((_func_5014 *)&LAB_1441bbd1a);
  _DAT_14cbce0c0 = 0;
  uRam000000014cbce0c8 = 0;
  _DAT_14cbce0d0 = 0;
  DAT_14cbce0d8 = 0;
  uRam000000014cbce0e0 = 0;
  FUN_1446ddda2(&DAT_14cbce0c0,"GoodPingDisplayText",0);
  atexit((_func_5014 *)&LAB_1441bbd2b);
  _DAT_14cbce0e8 = 0;
  uRam000000014cbce0f0 = 0;
  _DAT_14cbce0f8 = 0;
  DAT_14cbce100 = 0;
  uRam000000014cbce108 = 0;
  FUN_1446ddda2(&DAT_14cbce0e8,"OkPingDisplayText",0);
  atexit((_func_5014 *)&LAB_1441bbd3c);
  _DAT_14cbce110 = 0;
  uRam000000014cbce118 = 0;
  _DAT_14cbce120 = 0;
  DAT_14cbce128 = 0;
  uRam000000014cbce130 = 0;
  FUN_1446ddda2(&DAT_14cbce110,"BadPingDisplayText",0);
  atexit((_func_5014 *)&LAB_1441bbd4d);
  FUN_140056680(&DAT_14cbce138,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_1441bbd5e);
  local_70 = L"Online";
  local_68 = 6;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Online";
  local_68 = 6;
  FUN_140208c1e(&DAT_14cbce148,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_1441bbd6f);
  local_70 = L"Offline";
  local_68 = 7;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Offline";
  local_68 = 7;
  FUN_140208c1e(&DAT_14cbce158,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_1441bbd83);
  local_70 = L"Away";
  local_68 = 4;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Away";
  local_68 = 4;
  FUN_140208c1e(&DAT_14cbce168,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_1441bbd97);
  local_70 = L"DoNotDisturb";
  local_68 = 0xc;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Do Not Disturb";
  local_68 = 0xe;
  FUN_140208c1e(&DAT_14cbce178,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_1441bbdab);
  local_70 = L"Chat";
  local_68 = 4;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Chat";
  local_68 = 4;
  FUN_140208c1e(&DAT_14cbce188,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_1441bbdbf);
  FUN_1446f470e(&DAT_14cbce1f0,L"HostCharacterDef",1);
  local_70 = L"audio_calibration";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbce1f8 = (ulonglong)uVar2;
  local_70 = L"brightness_calibration";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbce200 = (ulonglong)uVar2;
  local_70 = L"brightness_calibration_ftc";
  local_68 = 0x1a;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbce208 = (ulonglong)uVar2;
  local_70 = L"safe_area_calibration";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbce210 = (ulonglong)uVar2;
  local_70 = L"options_accessibility";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbce218 = (ulonglong)uVar2;
  DAT_14cbce5f8 = 0;
  _DAT_14cbce600 = 0;
  _DAT_14cbce608 = 2;
  _DAT_14cbce60c = 0;
  atexit(FUN_1441be8f4);
  FUN_1446f470e(&DAT_14cbce260,&DAT_149e0476e,1);
  FUN_1446f470e(&DAT_14cbce268,&DAT_149e06384,1);
  FUN_1446f470e(&DAT_14cbce270,&DAT_149e06338,1);
  FUN_1446f470e(&DAT_14cbce278,L"Cancel",1);
  FUN_1446f470e(&DAT_14cbce280,L"MoreInfo",1);
  FUN_1446f470e(&DAT_14cbce288,L"Purchase",1);
  FUN_1446f470e(&DAT_14cbce290,L"ViewProfileOne",1);
  FUN_1446f470e(&DAT_14cbce298,L"ViewProfileTwo",1);
  FUN_1446f470e(&DAT_14cbce2a0,L"ViewProfileThree",1);
  FUN_1446f470e(&DAT_14cbce2a8,L"store");
  _DAT_14cbce2b0 = 0;
  uRam000000014cbce2b8 = 0;
  _DAT_14cbce2c0 = 0;
  DAT_14cbce2c8 = 0;
  uRam000000014cbce2d0 = 0;
  FUN_1446ddda2(&DAT_14cbce2b0,"GameJoin_JoinedMissionReplayGame_Header",0);
  atexit((_func_5014 *)&LAB_1441c1289);
  _DAT_14cbce2d8 = 0;
  uRam000000014cbce2e0 = 0;
  _DAT_14cbce2e8 = 0;
  DAT_14cbce2f0 = 0;
  uRam000000014cbce2f8 = 0;
  FUN_1446ddda2(&DAT_14cbce2d8,"GameJoin_JoinedMissionReplayGame_Message",0);
  atexit((_func_5014 *)&LAB_1441c129a);
  local_70 = L"onlinecharacterprefs";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbce300 = (ulonglong)uVar2;
  _DAT_14cbce308 = 0;
  uRam000000014cbce310 = 0;
  _DAT_14cbce318 = 0;
  DAT_14cbce320 = 0;
  uRam000000014cbce328 = 0;
  FUN_1446ddda2(&DAT_14cbce308,"onlinecharacterprefs",0);
  atexit((_func_5014 *)&LAB_1441c1e0c);
  _DAT_14cbce330 = 0;
  uRam000000014cbce338 = 0;
  _DAT_14cbce340 = 0;
  DAT_14cbce348 = 0;
  uRam000000014cbce350 = 0;
  FUN_1446ddda2(&DAT_14cbce330,"oak.onlinecharacterprefs",0);
  atexit((_func_5014 *)&LAB_1441c1e1d);
  _DAT_14cbce358 = 0;
  uRam000000014cbce360 = 0;
  _DAT_14cbce368 = 0;
  DAT_14cbce370 = 0;
  uRam000000014cbce378 = 0;
  FUN_1446ddda2(&DAT_14cbce358,"charactermemory",0);
  atexit((_func_5014 *)&LAB_1441c1e2e);
  _DAT_14cbce380 = 0;
  uRam000000014cbce388 = 0;
  _DAT_14cbce390 = 0;
  DAT_14cbce398 = 0;
  uRam000000014cbce3a0 = 0;
  FUN_1446ddda2(&DAT_14cbce380,"partyleader",0);
  atexit((_func_5014 *)&LAB_1441c1e3f);
  _DAT_14cbce3a8 = 0;
  uRam000000014cbce3b0 = 0;
  _DAT_14cbce3b8 = 0;
  DAT_14cbce3c0 = 0;
  uRam000000014cbce3c8 = 0;
  FUN_1446ddda2(&DAT_14cbce3a8,"charguid",0);
  atexit((_func_5014 *)&LAB_1441c1e50);
  _DAT_14cbce3d0 = 0;
  uRam000000014cbce3d8 = 0;
  _DAT_14cbce3e0 = 0;
  DAT_14cbce3e8 = 0;
  uRam000000014cbce3f0 = 0;
  FUN_1446ddda2(&DAT_14cbce3d0,"hide_character_memory_dialog",0);
  atexit((_func_5014 *)&LAB_1441c1e61);
  _DAT_14cbce3f8 = 0;
  uRam000000014cbce400 = 0;
  _DAT_14cbce408 = 0;
  DAT_14cbce410 = 0;
  uRam000000014cbce418 = 0;
  FUN_1446ddda2(&DAT_14cbce3f8,"enable_automatic_character_switching",0);
  atexit((_func_5014 *)&LAB_1441c1e72);
  FUN_1446f470e(&DAT_14cbce420,L"PRESENCESEARCH",1);
  FUN_1400b22c2(&DAT_14cbce428,"Party");
  atexit((_func_5014 *)&LAB_1441c1e83);
  FUN_1400b22c2(&DAT_14cbce438,&DAT_14b524850);
  atexit((_func_5014 *)&LAB_1441c1e94);
  FUN_1400b22c2(&DAT_14cbce448,"Match");
  atexit((_func_5014 *)&LAB_1441c1ea5);
  FUN_1400b22c2(&DAT_14cbce458,"Spectate");
  atexit((_func_5014 *)&LAB_1441c1eb6);
  local_70 = L"NetworkFailure_SuspendResume";
  local_68 = 0x1c;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OakOnlineSessionClient";
  local_68 = 0x16;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Your connection has been lost due to resuming from a suspend.";
  local_68 = 0x3d;
  FUN_140208c1e(&DAT_14cbce468,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_1441c1ec7);
  local_70 = L"PlatformSessionLeaveParty_Message";
  local_68 = 0x21;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OakOnlineSessionClient";
  local_68 = 0x16;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Unable to leave the party at this time. Please try again later.";
  local_68 = 0x3f;
  FUN_140208c1e(&DAT_14cbce478,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_1441c1edb);
  FUN_140056680(&DAT_14cbce488,L"GeneralFailure");
  atexit((_func_5014 *)&LAB_1441c1eef);
  FUN_140056680(&DAT_14cbce498,L"NotLoggedIn");
  atexit((_func_5014 *)&LAB_1441c1f00);
  FUN_140056680(&DAT_14cbce4a8,L"AlreadyInSession");
  atexit((_func_5014 *)&LAB_1441c1f11);
  FUN_140056680(&DAT_14cbce4b8,L"SessionDoesNotExist");
  atexit((_func_5014 *)&LAB_1441c1f22);
  FUN_140056680(&DAT_14cbce4c8,L"NotFullyInstalled");
  atexit((_func_5014 *)&LAB_1441c1f33);
  local_70 = L"game_session_party_id";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&local_70,L"game_session",1);
  _DAT_14cbce4e0 = 0;
  local_70 = L"game_session_network_type";
  local_68 = 0x19;
  local_64 = 0;
  DAT_14cbce4d8 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&local_70,L"game_session",1);
  _DAT_14cbce4f0 = 0;
  local_70 = L"game_session_network_privacy";
  local_68 = 0x1c;
  local_64 = 0;
  DAT_14cbce4e8 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&local_70,L"game_session",1);
  _DAT_14cbce500 = 0;
  local_70 = L"game_session_crossplay_state";
  local_68 = 0x1c;
  local_64 = 0;
  DAT_14cbce4f8 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&local_70,L"game_session",1);
  _DAT_14cbce510 = 0;
  DAT_14cbce518 = 0;
  uRam000000014cbce520 = 0;
  DAT_14cbce508 = (ulonglong)uVar2;
  atexit((_func_5014 *)&LAB_1441c9825);
  DAT_14cbce528 = 0;
  _DAT_14cbce530 = 0;
  atexit((_func_5014 *)&LAB_1441c9836);
  local_70 = L"game_session_group_instance_id";
  local_68 = 0x1e;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  FUN_141544bf8(&DAT_14cbce538,uVar3,&DAT_149dfb77a,0x53);
  _DAT_14cbce538 = &PTR_FUN_14b988b18;
  atexit((_func_5014 *)&LAB_1441c9847);
  local_70 = L"game_session_group_composition_instance_id";
  local_68 = 0x2a;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  FUN_141544bf8(&DAT_14cbce580,uVar3,&DAT_149dfb77a,0x53);
  _DAT_14cbce580 = &PTR_FUN_14b988b58;
  atexit((_func_5014 *)&LAB_1441c9853);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d8528 FUN_1441d8528 body=266 status=ok
// SIG undefined FUN_1441d8528(void)

void FUN_1441d8528(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401cb356();
  local_20 = *(undefined8 *)(param_1 + 0x1c8);
  local_18 = *(longlong *)(param_1 + 0x1d0);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_20);
  plVar2 = *(longlong **)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_14480f766(&DAT_14cbd0b78);
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  plVar2 = (longlong *)FUN_1458b3986(param_1);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0xe8))(plVar2);
    if (*(longlong *)(param_1 + 0x308) != 0) {
      FUN_14480f766(uVar3);
    }
  }
  *(undefined8 *)(param_1 + 0x308) = 0;
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FUN_14480f766(&DAT_14c9647a0);
    *(undefined8 *)(param_1 + 0x360) = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148da6758(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d8634 FUN_1441d8634 body=297 status=ok
// SIG undefined FUN_1441d8634(void)

undefined4 FUN_1441d8634(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_148da6804();
  uVar4 = 1;
  if (lVar1 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464f5fc4;
      local_48 = &LAB_148c3dd26;
      local_50 = &LAB_1459673ba;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
      uVar2 = FUN_1401e6c61();
      puVar3 = (undefined4 *)FUN_1409e484c(lVar1,uVar2);
      uVar4 = *puVar3;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d875e FUN_1441d875e body=2057 status=ok
// SIG undefined FUN_1441d875e(void)

uint FUN_1441d875e(undefined8 param_1,longlong *param_2)

{
  undefined2 **ppuVar1;
  ushort uVar2;
  ushort uVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  uint *puVar18;
  longlong *plVar19;
  undefined2 **ppuVar20;
  uint uVar21;
  longlong *plVar22;
  bool bVar23;
  uint uVar24;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  undefined4 local_18c;
  undefined2 *local_188;
  undefined8 uStack_180;
  longlong *local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined1 local_13c [4];
  undefined2 **local_138;
  undefined2 **ppuStack_130;
  longlong local_120;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar6 = (longlong *)FUN_1458b3986();
  uVar24 = 0;
  if (plVar6 != (longlong *)0x0) {
    lVar8 = 0;
    local_98 = 0;
    local_90 = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = (undefined1 *)0x0;
    local_c0 = 0;
    local_168 = 0;
    uStack_160 = 0;
    lVar7 = FUN_140fcbb85();
    local_178 = *(longlong **)(lVar7 + 0x38);
    FUN_1446dcdd4(&local_138);
    if ((DAT_14cb86df8 != 0) &&
       ((lVar8 = FUN_144837462(DAT_14cb86df8,&local_138), lVar8 == 0 ||
        (*(char *)(lVar8 + 0x58) == '\0')))) {
      lVar8 = 0;
    }
    if (local_120 != 0) {
      FUN_1400020a8();
    }
    if (lVar8 != 0) {
      local_178 = (longlong *)0x0;
      uStack_170 = 0;
      FUN_145779e36(&local_178);
      iVar5 = (int)uStack_170;
      if (0 < (int)uStack_170) {
        lVar7 = 0;
        bVar23 = false;
        do {
          while (cVar4 = FUN_140b78f42(local_178[lVar7],lVar8), cVar4 == '\0') {
            do {
              if ((int)uStack_170 - 1U != (uint)lVar7) {
                iVar5 = ~(uint)lVar7 + (int)uStack_170;
                if (0 < iVar5) {
                  iVar5 = 1;
                }
                memmove(local_178 + lVar7,local_178 + ((int)uStack_170 - iVar5),(longlong)iVar5 << 3
                       );
              }
              iVar5 = (int)uStack_170 + -1;
              uStack_170 = CONCAT44(uStack_170._4_4_,iVar5);
              if (iVar5 <= lVar7) goto LAB_1441d8992;
              cVar4 = FUN_140b78f42(local_178[lVar7],lVar8);
            } while (cVar4 == '\0');
            lVar7 = lVar7 + 1;
            bVar23 = true;
            if ((int)uStack_170 <= lVar7) goto LAB_1441d8992;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)uStack_170);
        iVar5 = (int)uStack_170;
        if (!bVar23) goto LAB_1441d89a2;
LAB_1441d8992:
        FUN_145779d98(&local_178);
        iVar5 = (int)uStack_170;
      }
LAB_1441d89a2:
      uStack_170 = CONCAT44(uStack_170._4_4_,iVar5 + 1U);
      if (uStack_170._4_4_ < iVar5 + 1U) {
        FUN_14189fa44(&local_178,iVar5);
      }
      local_178[iVar5] = lVar8;
      if ((longlong)(int)uStack_170 != 0) {
        plVar17 = local_178 + (int)uStack_170;
        plVar19 = local_178;
        local_1a8 = plVar17;
        local_198 = plVar6;
        do {
          lVar7 = (longlong)*(int *)(*plVar19 + 0x68);
          if (lVar7 != 0) {
            plVar6 = *(longlong **)(*plVar19 + 0x60);
            plVar22 = plVar6 + lVar7;
            do {
              lVar7 = *plVar6;
              cVar4 = FUN_1407a73f8(lVar7 + 0x4f0,&DAT_14cbcdd98);
              if (cVar4 != '\0') {
                if ((int)param_2[1] != 0) {
                  puVar11 = *(undefined4 **)(lVar7 + 8);
                  if (puVar11 == (undefined4 *)0x0) {
                    puVar11 = &DAT_14c9485f0;
                  }
                  local_138 = (undefined2 **)0x0;
                  ppuStack_130 = (undefined2 **)0x0;
                  FUN_1400b2348(puVar11,&local_138,1);
                  if ((longlong)(int)param_2[1] != 0) {
                    plVar14 = (longlong *)*param_2;
                    plVar9 = plVar14 + (longlong)(int)param_2[1] * 2;
LAB_1441d8aa3:
                    if ((int)plVar14[1] == (int)ppuStack_130) {
                      bVar23 = true;
                      plVar17 = local_1a8;
                      local_1a0 = plVar19;
                      if (1 < (int)ppuStack_130) {
                        lVar8 = 0;
                        do {
                          uVar3 = *(ushort *)(*plVar14 + lVar8);
                          uVar2 = *(ushort *)((longlong)local_138 + lVar8);
                          if (uVar3 == uVar2) {
                            if (uVar3 == 0) break;
                          }
                          else {
                            if (0x7f < (uVar2 | uVar3)) {
                              iVar5 = (uint)uVar3 - (uint)uVar2;
                              goto LAB_1441d8b29;
                            }
                            if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar2])
                            goto code_r0x0001441d8b26;
                          }
                          lVar8 = lVar8 + 2;
                        } while( true );
                      }
                    }
                    else {
                      if ((int)plVar14[1] + (int)ppuStack_130 != 1) goto LAB_1441d8ab9;
                      bVar23 = true;
                    }
                    goto LAB_1441d8a70;
                  }
                  bVar23 = false;
LAB_1441d8a70:
                  if (local_138 != (undefined2 **)0x0) {
                    FUN_1400020a8();
                  }
                  if (!bVar23) goto LAB_1441d8a83;
                }
                uVar15 = uStack_160;
                lVar8 = (longlong)(int)uStack_160;
                uVar24 = (int)uStack_160 + 1;
                uStack_160 = CONCAT44(uStack_160._4_4_,uVar24);
                if (uStack_160._4_4_ < uVar24) {
                  FUN_1406b7634(&local_168,uVar15 & 0xffffffff);
                }
                *(longlong *)(local_168 + lVar8 * 8) = lVar7;
                puVar11 = *(undefined4 **)(lVar7 + 8);
                if (puVar11 == (undefined4 *)0x0) {
                  puVar11 = &DAT_14c9485f0;
                }
                local_188 = (undefined2 *)0x0;
                uStack_180 = 0;
                FUN_1400b2348(puVar11,&local_188,1);
                puVar12 = &DAT_149dfb77a;
                if ((int)uStack_180 != 0) {
                  puVar12 = local_188;
                }
                local_18c = FUN_144a1ccda(puVar12,0);
                local_138 = &local_188;
                ppuStack_130 = (undefined2 **)&local_18c;
                FUN_147bf14c4(local_b8,local_13c,&local_138,0);
                uVar15 = uStack_150;
                lVar7 = (longlong)(int)uStack_150;
                uVar24 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar24);
                if (uStack_150._4_4_ < uVar24) {
                  FUN_1447808da(&local_158,uVar15 & 0xffffffff);
                }
                *(undefined4 *)(local_158 + lVar7 * 4) = local_18c;
                if (local_188 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
              }
LAB_1441d8a83:
              plVar6 = plVar6 + 1;
            } while (plVar6 != plVar22);
          }
          plVar19 = plVar19 + 1;
          plVar6 = local_198;
        } while (plVar19 != plVar17);
      }
      if (local_178 != (longlong *)0x0) {
        FUN_1400020a8(local_178);
      }
    }
    FUN_1449e0cb6(local_158,uStack_150 & 0xffffffff);
    if (0 < (int)uStack_150) {
      lVar8 = 0;
      lVar7 = 0;
      do {
        local_188 = (undefined2 *)CONCAT44(local_188._4_4_,(int)lVar7);
        local_138 = (undefined2 **)(local_158 + lVar8);
        ppuStack_130 = &local_188;
        FUN_1409a12da(&local_108,&local_178,&local_138,0);
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 4;
      } while (lVar7 < (int)uStack_150);
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar6 + 200))(plVar6);
    local_138 = (undefined2 **)0x0;
    iVar5 = *(int *)(puVar10 + 1);
    uVar24 = 0;
    _Src = (void *)*puVar10;
    ppuStack_130 = (undefined2 **)CONCAT44(ppuStack_130._4_4_,iVar5);
    if ((longlong)iVar5 != 0) {
      uVar24 = 0;
      FUN_1446dd7be(&local_138,iVar5,0);
      memcpy(local_138,_Src,(longlong)iVar5 * 0xc);
      if ((longlong)(int)ppuStack_130 != 0) {
        ppuVar1 = (undefined2 **)((longlong)local_138 + (longlong)(int)ppuStack_130 * 0xc);
        uVar24 = 0;
        ppuVar20 = local_138;
        do {
          uStack_180 = CONCAT44(uStack_180._4_4_,*(undefined4 *)(ppuVar20 + 1));
          local_188 = *ppuVar20;
          FUN_1408226d0(&local_188,&local_178,1);
          iVar5 = (int)uStack_170 + -1;
          if ((int)uStack_170 == 0) {
            iVar5 = 0;
          }
          uVar15 = 0;
          if (0 < iVar5) {
            plVar6 = (longlong *)&DAT_149dfb77a;
            if ((int)uStack_170 != 0) {
              plVar6 = local_178;
            }
            lVar7 = 0;
            uVar15 = 0;
            do {
              uVar3 = *(ushort *)((longlong)plVar6 + lVar7 * 2);
              uVar16 = ((uint)(0x19 < uVar3 - 0x61) * 0x20 + (uint)uVar3) - 0x20;
              uVar21 = (uint)(uVar15 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar16) & 0xff) * 4);
              uVar15 = (ulonglong)
                       (uVar21 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar21 & 0xff ^ uVar16 >> 8 & 0xff) * 4));
              lVar7 = lVar7 + 1;
            } while (iVar5 != (int)lVar7);
          }
          iVar5 = FUN_1412a630a(local_b8,uVar15,&local_178);
          lVar7 = 0;
          if (iVar5 != -1) {
            lVar7 = (longlong)iVar5 * 0x20 + local_b8[0];
          }
          puVar18 = (uint *)(lVar7 + 0x10);
          if (lVar7 == 0) {
            puVar18 = (uint *)0x0;
          }
          if (local_178 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (puVar18 != (uint *)0x0) {
            if ((int)uStack_100 != local_d4) {
              puVar13 = local_c8;
              if (local_c8 == (undefined1 *)0x0) {
                puVar13 = local_d0;
              }
              iVar5 = *(int *)(puVar13 + (ulonglong)(local_c0 - 1U & *puVar18) * 4);
              while (iVar5 != -1) {
                lVar7 = local_108 + (longlong)iVar5 * 0x10;
                if (*(uint *)(local_108 + (longlong)iVar5 * 0x10) == *puVar18) goto LAB_1441d8eb7;
                iVar5 = *(int *)(lVar7 + 8);
              }
            }
            lVar7 = 0;
LAB_1441d8eb7:
            uVar24 = uVar24 | 1 << (*(byte *)(lVar7 + 4) & 0x1f);
          }
          ppuVar20 = (undefined2 **)((longlong)ppuVar20 + 0xc);
        } while (ppuVar20 != ppuVar1);
      }
      if (local_138 != (undefined2 **)0x0) {
        FUN_1400020a8(local_138);
      }
    }
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    local_c0 = 0;
    if (local_c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140201ac2(&local_108);
    if (local_158 != 0) {
      FUN_1400020a8();
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_14577537e(local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001441d8b26:
  iVar5 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_1441d8b29:
  if (iVar5 == 0) goto LAB_1441d8a70;
LAB_1441d8ab9:
  plVar14 = plVar14 + 2;
  bVar23 = false;
  if (plVar14 == plVar9) goto LAB_1441d8a70;
  goto LAB_1441d8aa3;
}



// FUNCTION 1441d8f68 FUN_1441d8f68 body=536 status=ok
// SIG undefined FUN_1441d8f68(void)

ulonglong FUN_1441d8f68(longlong param_1)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  wchar_t *_Str;
  byte bVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined8 uStack_d0;
  longlong *local_c0;
  int local_b8;
  longlong local_b0;
  int local_a8;
  int local_7c;
  undefined1 local_78 [8];
  undefined1 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (DAT_14cbc8bb8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_144815d88();
  }
  FUN_14101cf30(*(undefined8 *)(param_1 + 0x10),&local_c0);
  if ((longlong)local_b8 == 0) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    local_b8 = 0;
  }
  else {
    plVar10 = local_c0 + (longlong)local_b8 * 2;
    uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar9 = local_c0;
    do {
      local_d8 = (wchar_t *)0x0;
      uStack_d0 = 0;
      cVar2 = FUN_14101cdd4(*plVar9 + 0x20,&DAT_14cbce9f0,&local_d8);
      bVar7 = 1;
      if (cVar2 != '\0') {
        _Str = L"";
        if ((int)uStack_d0 != 0) {
          _Str = local_d8;
        }
        iVar4 = _wtoi(_Str);
        FUN_145dcf974(&local_b0,iVar4);
        bVar7 = 1;
        if (local_a8 != local_7c) {
          puVar6 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar6 = local_78;
          }
          iVar4 = *(int *)(puVar6 + (ulonglong)(local_68 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
          while (iVar4 != -1) {
            puVar1 = (ulonglong *)(local_b0 + (longlong)iVar4 * 0x18);
            if (*puVar1 == uVar5) {
              if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                bVar7 = (byte)puVar1[1] ^ 1;
              }
              break;
            }
            iVar4 = (int)puVar1[2];
          }
        }
        local_68 = 0;
        if (local_70 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_145dcf8e6(&local_b0);
      }
      if (local_d8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = (ulonglong)(bVar7 == 0);
    } while ((bVar7 == 0) && (plVar9 = plVar9 + 2, plVar9 != plVar10));
  }
  FUN_14101cee4(local_c0,local_b8);
  if (local_c0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441d9182 FUN_1441d9182 body=5083 status=ok
// SIG undefined FUN_1441d9182(void)

ulonglong FUN_1441d9182(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  undefined8 unaff_RBP;
  ushort uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  ushort uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  longlong *local_d0;
  undefined4 local_c4;
  int local_c0;
  uint local_bc;
  uint *local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong *local_90;
  code *local_88;
  longlong *plStack_80;
  undefined6 local_70;
  undefined2 auStack_6a [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar21 = *(longlong **)(param_2 + 0x10);
  if (plVar21 == (longlong *)0x0) {
LAB_1441d91d6:
    plVar21 = (longlong *)0x0;
  }
  else {
    iVar13 = (int)plVar21[1];
    do {
      if (iVar13 == 0) goto LAB_1441d91d6;
      LOCK();
      iVar12 = (int)plVar21[1];
      bVar24 = iVar13 == iVar12;
      if (bVar24) {
        *(int *)(plVar21 + 1) = iVar13 + 1;
        iVar12 = iVar13;
      }
      iVar13 = iVar12;
      UNLOCK();
    } while (!bVar24);
  }
  local_88 = (code *)0x0;
  if (plVar21 != (longlong *)0x0) {
    local_88 = *(code **)(param_2 + 8);
  }
  plStack_80 = plVar21;
  FUN_140b7090e(*(undefined8 *)(param_1 + 0x10),&local_98);
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar21 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  if ((local_98 == 0) || (*(int *)(local_98 + 0x14) != 0)) {
    uVar5 = 0;
  }
  else {
    plVar21 = *(longlong **)(param_2 + 0x10);
    if (plVar21 == (longlong *)0x0) {
LAB_1441d92a9:
      plVar21 = (longlong *)0x0;
    }
    else {
      iVar13 = (int)plVar21[1];
      do {
        if (iVar13 == 0) goto LAB_1441d92a9;
        LOCK();
        iVar12 = (int)plVar21[1];
        bVar24 = iVar13 == iVar12;
        if (bVar24) {
          *(int *)(plVar21 + 1) = iVar13 + 1;
          iVar12 = iVar13;
        }
        iVar13 = iVar12;
        UNLOCK();
      } while (!bVar24);
    }
    local_88 = (code *)0x0;
    if (plVar21 != (longlong *)0x0) {
      local_88 = *(code **)(param_2 + 8);
    }
    plStack_80 = plVar21;
    local_c4 = FUN_145ce2ae6(*(undefined8 *)(param_1 + 0x10));
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar20 = plVar21 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    uVar23 = 0;
    FUN_14062e8ba(param_1 + 0x310,0);
    iVar13 = (int)param_3[5];
    if (iVar13 == 0) {
      uVar22 = 1;
      iVar12 = 0;
      iVar6 = 0;
    }
    else {
      puVar10 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_3 + 2);
      }
      uVar19 = *puVar10;
      if (uVar19 == 0) {
        iVar12 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar12 = iVar13 + -1;
        }
        uVar23 = 0;
        uVar5 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar5 = uVar23;
        }
        iVar12 = 0;
        do {
          if (uVar5 == uVar23) goto LAB_1441da54c;
          iVar12 = iVar12 + 0x20;
          uVar19 = puVar10[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar23 = 0;
        iVar12 = 0;
      }
      uVar22 = (ulonglong)(-uVar19 & uVar19);
      uVar5 = uVar22 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar13 <= iVar6) {
        iVar6 = iVar13;
      }
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (iVar6 < iVar13) {
      local_d0 = param_3;
      local_b8 = (uint *)(param_3 + 2);
      uVar19 = 0xffffffff;
      do {
        local_bc = uVar19;
        plVar21 = (longlong *)(*param_3 + (longlong)iVar6 * 0x28);
        lVar17 = *param_3 + (longlong)iVar6 * 0x28;
        plVar20 = (longlong *)(lVar17 + 0x10);
        iVar13 = *(int *)(lVar17 + 8);
        local_b0 = uVar23;
        if (iVar13 == DAT_14cbce908) {
          if (1 < iVar13) {
            lVar17 = 0;
            while( true ) {
              uVar14 = *(ushort *)(*plVar21 + lVar17);
              uVar5 = (ulonglong)uVar14;
              uVar18 = *(ushort *)(DAT_14cbce900 + lVar17);
              if (uVar14 != uVar18) break;
              if (uVar14 == 0) goto LAB_1441d946d;
LAB_1441d9431:
              lVar17 = lVar17 + 2;
            }
            if ((uVar18 | uVar14) < 0x80) {
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
              uVar23 = (ulonglong)uVar18;
              uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
              if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar23]) goto LAB_1441d9431;
            }
            if (uVar14 != uVar18) goto LAB_1441d94de;
          }
LAB_1441d946d:
          lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
          puVar11 = &DAT_149e25dfc;
          if ((lVar17 != 0) && (puVar11 = &DAT_149e25dfc, *(int *)(lVar17 + 0x58) == 1)) {
            puVar11 = &DAT_149e0209e;
          }
          FUN_140056680(&local_88,puVar11);
          FUN_1402980a2(plVar20,local_88);
          if (local_88 != (code *)0x0) {
            FUN_1400020a8();
          }
          iVar13 = (int)plVar21[1];
        }
        else if (DAT_14cbce908 + iVar13 == 1) goto LAB_1441d946d;
LAB_1441d94de:
        local_c0 = iVar12;
        if (iVar13 == DAT_14cbce918) {
          if (1 < iVar13) {
            lVar17 = 0;
            while( true ) {
              uVar14 = *(ushort *)(*plVar21 + lVar17);
              uVar5 = (ulonglong)uVar14;
              uVar18 = *(ushort *)(DAT_14cbce910 + lVar17);
              if (uVar14 != uVar18) break;
              if (uVar14 == 0) goto LAB_1441d9551;
LAB_1441d951a:
              lVar17 = lVar17 + 2;
            }
            if ((uVar18 | uVar14) < 0x80) {
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
              uVar23 = (ulonglong)uVar18;
              uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
              if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar23]) goto LAB_1441d951a;
            }
            if (uVar14 != uVar18) goto LAB_1441d981d;
          }
LAB_1441d9551:
          iVar12 = FUN_1441d8634(param_1,local_c4);
          param_3 = local_d0;
          local_a8 = 0;
          uStack_a0 = 0;
          lVar15 = 0xf;
          iVar6 = 0x10;
          lVar17 = 0x1000000000;
          iVar13 = iVar12;
          do {
            *(undefined2 *)((longlong)&local_88 + lVar15 * 2) =
                 *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar13 % 10) * 2);
            uVar19 = iVar13 + 9;
            lVar15 = lVar15 + -1;
            lVar17 = lVar17 + -0x100000000;
            iVar6 = iVar6 + -1;
            iVar13 = iVar13 / 10;
          } while (0x12 < uVar19);
          if (iVar12 < 0) {
            iVar6 = (int)lVar15;
            lVar17 = (longlong)iVar6;
            *(undefined2 *)((longlong)&local_88 + lVar17 * 2) = 0x2d;
          }
          else {
            lVar17 = lVar17 >> 0x20;
          }
          FUN_1400020e8(&local_a8,(longlong)&local_88 + lVar17 * 2,0x10 - iVar6);
          if (plVar20 != &local_a8) {
            if (plVar21[2] != 0) {
              FUN_1400020a8();
            }
            plVar21[2] = local_a8;
            local_a8 = 0;
            *(undefined4 *)(plVar21 + 3) = (undefined4)uStack_a0;
            *(undefined4 *)((longlong)plVar21 + 0x1c) = uStack_a0._4_4_;
            uStack_a0 = 0;
          }
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          lVar17 = FUN_148da6804(param_1,local_c4);
          if (lVar17 != 0) {
            if (DAT_14cbae3d8 == 0) {
              local_88 = FUN_141030f22;
              local_e0 = FUN_14081d0ea;
              local_e8 = &LAB_1464f5fc4;
              local_f0 = &local_88;
              local_f8 = &LAB_148c3dd26;
              local_100 = &LAB_1459673ba;
              local_108 = L"Engine";
              local_110 = 0;
              local_118 = 0x10000004;
              local_120 = 0x10;
              local_128 = 0x1360;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
            }
            if (((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38))
                && (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                     (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) &&
               (*(longlong *)(param_1 + 0x1a0) == 0)) {
              uVar2 = *(undefined4 *)(lVar17 + 0x394);
              local_88 = (code *)0x0;
              plStack_80 = (longlong *)((ulonglong)plStack_80 & 0xffffffff00000000);
              FUN_1446efa72(&local_88,0,3,0x10);
              plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,3);
              *(undefined ***)local_88 = &PTR_LAB_14b961ce0;
              LOCK();
              UNLOCK();
              lVar15 = DAT_14c758608 + 1;
              lVar17 = DAT_14c758608 + 1;
              if (lVar15 == 0) {
                LOCK();
                UNLOCK();
                lVar15 = DAT_14c758608 + 2;
                lVar17 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar17;
              *(longlong *)(local_88 + 0x10) = lVar15;
              *(undefined ***)local_88 = &PTR_FUN_14b98f3e0;
              *(longlong *)(local_88 + 0x18) = param_1;
              *(undefined4 *)(local_88 + 0x20) = uVar2;
              *(undefined4 *)(local_88 + 0x24) = local_c4;
              iVar13 = 3;
              if (local_88 == (code *)0x0) {
LAB_1441da4c7:
                param_3 = local_d0;
                if (iVar13 == 0) {
                  lVar17 = 0;
                  goto LAB_1441da0de;
                }
                if (local_88 != (code *)0x0) {
                  (*(code *)**(undefined8 **)local_88)(local_88,0);
                  FUN_1446efa72(&local_88,0,0,0x10);
                  lVar17 = 0;
                  param_3 = local_d0;
                  goto LAB_1441da0cb;
                }
                lVar17 = 0;
              }
              else {
                cVar4 = (**(code **)(*(longlong *)local_88 + 0x30))();
                uVar19 = DAT_14cbd0b80;
                if (cVar4 == '\0') {
                  iVar13 = (int)plStack_80;
                  goto LAB_1441da4c7;
                }
                if ((DAT_14cbd0b8c < 1) &&
                   (DAT_14cbd0b88 = DAT_14cbd0b88 + -1, DAT_14cbd0b88 <= (int)DAT_14cbd0b80)) {
                  if (0 < (int)DAT_14cbd0b80) {
                    iVar13 = 0;
                    do {
                      if (((*(int *)(DAT_14cbd0b78 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                          (plVar21 = *(longlong **)(DAT_14cbd0b78 + (longlong)iVar13 * 0x10),
                          plVar21 == (longlong *)0x0)) ||
                         (cVar4 = (**(code **)(*plVar21 + 0x28))(), cVar4 != '\0')) {
                        FUN_14005b288(&DAT_14cbd0b78,iVar13);
                        FUN_14005b248(&DAT_14cbd0b78);
                      }
                      else {
                        iVar13 = iVar13 + 1;
                      }
                    } while (iVar13 < (int)DAT_14cbd0b80);
                  }
                  DAT_14cbd0b88 = DAT_14cbd0b80 * 2;
                  if (DAT_14cbd0b88 < 3) {
                    DAT_14cbd0b88 = 2;
                  }
                  if ((DAT_14cbd0b88 < (int)uVar19) && (DAT_14cbd0b84 != DAT_14cbd0b80)) {
                    FUN_14045812c(&DAT_14cbd0b78);
                  }
                }
                if ((int)plStack_80 == 0) {
                  lVar17 = 0;
                }
                else {
                  lVar17 = 0;
                  if (local_88 != (code *)0x0) {
                    (**(code **)(*(longlong *)local_88 + 0x38))();
                    lVar17 = local_a8;
                  }
                }
                lVar15 = (longlong)(int)DAT_14cbd0b80;
                DAT_14cbd0b80 = DAT_14cbd0b80 + 1;
                if (DAT_14cbd0b84 < DAT_14cbd0b80) {
                  FUN_1447a71f6(&DAT_14cbd0b78);
                }
                lVar3 = DAT_14cbd0b78;
                lVar15 = lVar15 * 0x10;
                *(undefined8 *)(DAT_14cbd0b78 + lVar15) = 0;
                *(undefined4 *)(lVar3 + 8 + lVar15) = 0;
                *(code **)(lVar3 + lVar15) = local_88;
                local_88 = (code *)0x0;
                *(int *)(lVar3 + 8 + lVar15) = (int)plStack_80;
LAB_1441da0cb:
                plStack_80 = (longlong *)((ulonglong)plStack_80 & 0xffffffff00000000);
LAB_1441da0de:
                if (local_88 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
              *(longlong *)(param_1 + 0x1a0) = lVar17;
            }
          }
        }
        else {
          if (DAT_14cbce918 + iVar13 == 1) goto LAB_1441d9551;
LAB_1441d981d:
          if (iVar13 == DAT_14cbce928) {
            if (1 < iVar13) {
              lVar17 = 0;
              while( true ) {
                uVar14 = *(ushort *)(*plVar21 + lVar17);
                uVar5 = (ulonglong)uVar14;
                uVar18 = *(ushort *)(DAT_14cbce920 + lVar17);
                if (uVar14 != uVar18) break;
                if (uVar14 == 0) goto LAB_1441d9889;
LAB_1441d9852:
                lVar17 = lVar17 + 2;
              }
              if ((uVar18 | uVar14) < 0x80) {
                uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                uVar23 = (ulonglong)uVar18;
                uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar23]) goto LAB_1441d9852;
              }
              if (uVar14 != uVar18) goto LAB_1441d9948;
            }
LAB_1441d9889:
            local_88 = (code *)0x0;
            plStack_80 = (longlong *)0x0;
            uVar19 = FUN_1441d875e(param_1,&local_88);
            FUN_1447a1747(0,0);
            if (local_88 != (code *)0x0) {
              FUN_1400020a8();
            }
            lVar15 = 0xf;
            iVar13 = 0x10;
            lVar17 = 0x1000000000;
            uVar7 = uVar19;
            do {
              *(undefined2 *)((longlong)&local_88 + lVar15 * 2) =
                   *(undefined2 *)(&DAT_149e01586 + (longlong)((int)uVar7 % 10) * 2);
              uVar16 = uVar7 + 9;
              lVar15 = lVar15 + -1;
              lVar17 = lVar17 + -0x100000000;
              iVar13 = iVar13 + -1;
              uVar7 = (int)uVar7 / 10;
            } while (0x12 < uVar16);
LAB_1441d9a31:
            param_3 = local_d0;
            uStack_a0 = 0;
            local_a8 = 0;
            if ((int)uVar19 < 0) {
              iVar13 = (int)lVar15;
              lVar17 = (longlong)iVar13;
              *(undefined2 *)((longlong)&local_88 + lVar17 * 2) = 0x2d;
            }
            else {
              lVar17 = lVar17 >> 0x20;
            }
            FUN_1400020e8(&local_a8,(longlong)&local_88 + lVar17 * 2,0x10 - iVar13);
            if (plVar20 != &local_a8) {
              if (plVar21[2] != 0) {
                FUN_1400020a8();
              }
              plVar21[2] = local_a8;
              local_a8 = 0;
              *(undefined4 *)(plVar21 + 3) = (undefined4)uStack_a0;
              *(undefined4 *)((longlong)plVar21 + 0x1c) = uStack_a0._4_4_;
              uStack_a0 = 0;
            }
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
LAB_1441d9adb:
            FUN_148da6858(param_1,local_c4,plVar21,uVar19);
          }
          else {
            if (DAT_14cbce928 + iVar13 == 1) goto LAB_1441d9889;
LAB_1441d9948:
            if (iVar13 == DAT_14cbce938) {
              if (1 < iVar13) {
                lVar17 = 0;
                while( true ) {
                  uVar14 = *(ushort *)(*plVar21 + lVar17);
                  uVar5 = (ulonglong)uVar14;
                  uVar18 = *(ushort *)(DAT_14cbce930 + lVar17);
                  if (uVar14 != uVar18) break;
                  if (uVar14 == 0) goto LAB_1441d99b4;
LAB_1441d997d:
                  lVar17 = lVar17 + 2;
                }
                if ((uVar18 | uVar14) < 0x80) {
                  uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                  uVar23 = (ulonglong)uVar18;
                  uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                  if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar23]) goto LAB_1441d997d;
                }
                if (uVar14 != uVar18) goto LAB_1441d9bb8;
              }
LAB_1441d99b4:
              uVar19 = FUN_1441da55e(param_1);
              lVar15 = 0xf;
              iVar13 = 0x10;
              lVar17 = 0x1000000000;
              uVar7 = uVar19;
              do {
                *(undefined2 *)((longlong)&local_88 + lVar15 * 2) =
                     *(undefined2 *)(&DAT_149e01586 + (longlong)((int)uVar7 % 10) * 2);
                uVar16 = uVar7 + 9;
                lVar15 = lVar15 + -1;
                lVar17 = lVar17 + -0x100000000;
                iVar13 = iVar13 + -1;
                uVar7 = (int)uVar7 / 10;
              } while (0x12 < uVar16);
              goto LAB_1441d9a31;
            }
            if (DAT_14cbce938 + iVar13 == 1) goto LAB_1441d99b4;
LAB_1441d9bb8:
            if (iVar13 == DAT_14cbce948) {
              if (1 < iVar13) {
                lVar17 = 0;
                while( true ) {
                  uVar14 = *(ushort *)(*plVar21 + lVar17);
                  uVar5 = (ulonglong)uVar14;
                  uVar18 = *(ushort *)(DAT_14cbce940 + lVar17);
                  if (uVar14 != uVar18) break;
                  if (uVar14 == 0) goto LAB_1441d9c24;
LAB_1441d9bed:
                  lVar17 = lVar17 + 2;
                }
                if ((uVar18 | uVar14) < 0x80) {
                  uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                  uVar23 = (ulonglong)uVar18;
                  uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                  if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar23]) goto LAB_1441d9bed;
                }
                if (uVar14 != uVar18) goto LAB_1441d9ce5;
              }
LAB_1441d9c24:
              uVar5 = FUN_1441da55e(param_1);
              uVar19 = (uint)((uVar5 & 7) != 0);
              local_a8 = 0;
              uStack_a0 = 0;
              auStack_6a[0] = *(undefined2 *)(&DAT_149e01586 + (ulonglong)uVar19 * 2);
              FUN_1400020e8(&local_a8,auStack_6a,1);
              if (plVar20 != &local_a8) {
                if (plVar21[2] != 0) {
                  FUN_1400020a8();
                }
                plVar21[2] = local_a8;
                local_a8 = 0;
                *(undefined4 *)(plVar21 + 3) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)plVar21 + 0x1c) = uStack_a0._4_4_;
                uStack_a0 = 0;
              }
              if (local_a8 != 0) {
                FUN_1400020a8();
              }
              goto LAB_1441d9adb;
            }
            if (DAT_14cbce948 + iVar13 == 1) goto LAB_1441d9c24;
LAB_1441d9ce5:
            if (iVar13 == DAT_14cbce958) {
              if (1 < iVar13) {
                lVar17 = 0;
                while( true ) {
                  uVar14 = *(ushort *)(*plVar21 + lVar17);
                  uVar5 = (ulonglong)uVar14;
                  uVar18 = *(ushort *)(DAT_14cbce950 + lVar17);
                  if (uVar14 != uVar18) break;
                  if (uVar14 == 0) goto LAB_1441d9eea;
LAB_1441d9d22:
                  lVar17 = lVar17 + 2;
                }
                if ((uVar18 | uVar14) < 0x80) {
                  uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                  uVar23 = (ulonglong)uVar18;
                  uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                  if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar23]) goto LAB_1441d9d22;
                }
                if (uVar14 != uVar18) goto LAB_1441d9d59;
              }
LAB_1441d9eea:
              iVar13 = *(int *)(param_1 + 0x2f8);
              lVar15 = 0xf;
              iVar6 = 0x10;
              lVar17 = 0x1000000000;
              iVar12 = iVar13;
              do {
                *(undefined2 *)((longlong)&local_88 + lVar15 * 2) =
                     *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar12 % 10) * 2);
                uVar19 = iVar12 + 9;
                lVar15 = lVar15 + -1;
                lVar17 = lVar17 + -0x100000000;
                iVar6 = iVar6 + -1;
                iVar12 = iVar12 / 10;
                param_3 = local_d0;
              } while (0x12 < uVar19);
joined_r0x0001441da388:
              if (iVar13 < 0) {
                iVar6 = (int)lVar15;
                lVar17 = (longlong)iVar6;
                *(undefined2 *)((longlong)&local_88 + lVar17 * 2) = 0x2d;
              }
              else {
                lVar17 = lVar17 >> 0x20;
              }
              uStack_a0 = 0;
              local_a8 = 0;
              local_d0 = param_3;
              FUN_1400020e8(&local_a8,(longlong)&local_88 + lVar17 * 2,0x10 - iVar6);
joined_r0x0001441d9ed4:
              if (plVar20 != &local_a8) {
                if (plVar21[2] != 0) {
                  FUN_1400020a8();
                }
                plVar21[2] = local_a8;
                local_a8 = 0;
                *(undefined4 *)(plVar21 + 3) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)plVar21 + 0x1c) = uStack_a0._4_4_;
                uStack_a0 = 0;
              }
              if (local_a8 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (DAT_14cbce958 + iVar13 == 1) goto LAB_1441d9eea;
LAB_1441d9d59:
              if (iVar13 != DAT_14cbce968) {
                if (DAT_14cbce968 + iVar13 == 1) goto LAB_1441da013;
LAB_1441d9dcd:
                if (iVar13 != DAT_14cbce978) {
                  if (DAT_14cbce978 + iVar13 == 1) goto LAB_1441d9e4a;
LAB_1441da10e:
                  if (iVar13 != DAT_14cbce988) {
                    if (DAT_14cbce988 + iVar13 == 1) goto LAB_1441da226;
LAB_1441da193:
                    if (iVar13 == DAT_14cbce998) {
                      if (1 < iVar13) {
                        lVar17 = 0;
                        while( true ) {
                          uVar14 = *(ushort *)(*plVar21 + lVar17);
                          uVar5 = (ulonglong)uVar14;
                          uVar18 = *(ushort *)(DAT_14cbce990 + lVar17);
                          if (uVar14 != uVar18) break;
                          if (uVar14 == 0) goto LAB_1441da2de;
LAB_1441da1cf:
                          lVar17 = lVar17 + 2;
                        }
                        if ((uVar18 | uVar14) < 0x80) {
                          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                          uVar23 = (ulonglong)uVar18;
                          uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar23])
                          goto LAB_1441da1cf;
                        }
                        param_3 = local_d0;
                        if (uVar14 != uVar18) goto LAB_1441d9ae0;
                      }
LAB_1441da2de:
                      FUN_1441da9ee(&local_88);
                      iVar13 = FUN_1441da6f2(param_1,&local_88);
                      if (CONCAT26(auStack_6a[0],local_70) != 0) {
                        FUN_1400020a8();
                      }
                      lVar15 = 0xf;
                      iVar6 = 0x10;
                      lVar17 = 0x1000000000;
                      iVar12 = iVar13;
                      do {
                        *(undefined2 *)((longlong)&local_88 + lVar15 * 2) =
                             *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar12 % 10) * 2);
                        uVar19 = iVar12 + 9;
                        lVar15 = lVar15 + -1;
                        lVar17 = lVar17 + -0x100000000;
                        iVar6 = iVar6 + -1;
                        iVar12 = iVar12 / 10;
                        param_3 = local_d0;
                      } while (0x12 < uVar19);
                      goto joined_r0x0001441da388;
                    }
                    if (DAT_14cbce998 + iVar13 == 1) goto LAB_1441da2de;
                    goto LAB_1441d9ae0;
                  }
                  if (1 < iVar13) {
                    lVar17 = 0;
                    while( true ) {
                      uVar14 = *(ushort *)(*plVar21 + lVar17);
                      uVar5 = (ulonglong)uVar14;
                      uVar18 = *(ushort *)(DAT_14cbce980 + lVar17);
                      if (uVar14 != uVar18) break;
                      if (uVar14 == 0) goto LAB_1441da226;
LAB_1441da14b:
                      lVar17 = lVar17 + 2;
                    }
                    if ((uVar18 | uVar14) < 0x80) {
                      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                      uVar23 = (ulonglong)uVar18;
                      uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar23]) goto LAB_1441da14b;
                    }
                    param_3 = local_d0;
                    if (uVar14 != uVar18) goto LAB_1441da193;
                  }
LAB_1441da226:
                  FUN_1441da934(&local_88);
                  iVar13 = FUN_1441da6f2(param_1,&local_88);
                  if (CONCAT26(auStack_6a[0],local_70) != 0) {
                    FUN_1400020a8();
                  }
                  lVar15 = 0xf;
                  iVar6 = 0x10;
                  lVar17 = 0x1000000000;
                  iVar12 = iVar13;
                  do {
                    *(undefined2 *)((longlong)&local_88 + lVar15 * 2) =
                         *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar12 % 10) * 2);
                    uVar19 = iVar12 + 9;
                    lVar15 = lVar15 + -1;
                    lVar17 = lVar17 + -0x100000000;
                    iVar6 = iVar6 + -1;
                    iVar12 = iVar12 / 10;
                    param_3 = local_d0;
                  } while (0x12 < uVar19);
                  goto joined_r0x0001441da388;
                }
                if (1 < iVar13) {
                  lVar17 = 0;
                  while( true ) {
                    uVar14 = *(ushort *)(*plVar21 + lVar17);
                    uVar5 = (ulonglong)uVar14;
                    uVar18 = *(ushort *)(DAT_14cbce970 + lVar17);
                    if (uVar14 != uVar18) break;
                    if (uVar14 == 0) goto LAB_1441d9e4a;
LAB_1441d9e02:
                    lVar17 = lVar17 + 2;
                  }
                  if ((uVar18 | uVar14) < 0x80) {
                    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                    uVar23 = (ulonglong)uVar18;
                    uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                    if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar23]) goto LAB_1441d9e02;
                  }
                  param_3 = local_d0;
                  if (uVar14 != uVar18) goto LAB_1441da10e;
                }
LAB_1441d9e4a:
                uVar5 = FUN_145dcff18(*(undefined8 *)(param_1 + 0x10));
                local_a8 = 0;
                uStack_a0 = 0;
                iVar13 = 0;
                puVar11 = auStack_6a;
                lVar17 = 0x1000000000;
                do {
                  uVar19 = (uint)uVar5;
                  uVar23 = uVar5 & 0xffffffff;
                  uVar5 = uVar23 / 10;
                  *puVar11 = *(undefined2 *)
                              (&DAT_149e01586 + (ulonglong)(uVar19 + (int)(uVar23 / 10) * -10) * 2);
                  lVar17 = lVar17 + -0x100000000;
                  iVar13 = iVar13 + 1;
                  puVar11 = puVar11 + -1;
                } while (9 < uVar19);
                FUN_1400020e8(&local_a8,(longlong)&local_88 + (lVar17 >> 0x1f),iVar13);
                goto joined_r0x0001441d9ed4;
              }
              if (1 < iVar13) {
                lVar17 = 0;
                while( true ) {
                  uVar14 = *(ushort *)(*plVar21 + lVar17);
                  uVar5 = (ulonglong)uVar14;
                  uVar18 = *(ushort *)(DAT_14cbce960 + lVar17);
                  if (uVar14 != uVar18) break;
                  if (uVar14 == 0) goto LAB_1441da013;
LAB_1441d9d96:
                  lVar17 = lVar17 + 2;
                }
                if ((uVar18 | uVar14) < 0x80) {
                  uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                  uVar23 = (ulonglong)uVar18;
                  uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                  if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar23]) goto LAB_1441d9d96;
                }
                if (uVar14 != uVar18) goto LAB_1441d9dcd;
              }
LAB_1441da013:
              FUN_14020fad6(plVar20,&DAT_149e0209e);
            }
          }
        }
LAB_1441d9ae0:
        unaff_RBP = 0xcccccccd;
        uVar19 = local_bc & ~(uint)uVar22;
        puVar10 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar10 = local_b8;
        }
        iVar13 = (int)param_3[5];
        iVar6 = (int)local_b0;
        lVar17 = (longlong)iVar6;
        uVar7 = puVar10[lVar17] & uVar19;
        uVar23 = local_b0;
        iVar12 = local_c0;
        if (uVar7 == 0) {
          iVar8 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar8 = iVar13 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar6) {
            iVar9 = iVar6;
          }
          if (iVar8 <= iVar6) break;
          lVar15 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar7 = puVar10[lVar17 + lVar15 + 1];
            if (uVar7 != 0) break;
            lVar15 = lVar15 + 1;
            if (iVar9 - lVar17 == lVar15) goto LAB_1441da54c;
          }
          uVar19 = 0xffffffff;
          uVar23 = (ulonglong)(iVar6 + (int)lVar15 + 1);
        }
        uVar22 = (ulonglong)(-uVar7 & uVar7);
        uVar5 = uVar22 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar6 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar13);
LAB_1441da54c:
      uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    }
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_90 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1441da55e FUN_1441da55e body=402 status=ok
// SIG undefined FUN_1441da55e(void)

/* WARNING: Removing unreachable block (ram,0x0001441da62f) */
/* WARNING: Removing unreachable block (ram,0x0001441da69f) */

undefined4 FUN_1441da55e(undefined8 param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_140056680(&local_48,L"Mission_Main_Grasslands3");
  uStack_30._0_4_ = 1;
  FUN_1447a1bd6(&local_38,0);
  *local_38 = 0;
  *local_38 = local_48;
  local_48 = 0;
  *(undefined4 *)(local_38 + 1) = (undefined4)local_40;
  *(undefined4 *)((longlong)local_38 + 0xc) = local_40._4_4_;
  FUN_140056680(&local_48,L"Mission_Main_Mountains3");
  iVar1 = (int)uStack_30;
  lVar5 = (longlong)(int)uStack_30;
  uVar3 = (int)uStack_30 + 1;
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar3);
  if (uStack_30._4_4_ < uVar3) {
    FUN_1447a1bd6(&local_38,iVar1);
  }
  local_38[lVar5 * 2] = 0;
  local_38[lVar5 * 2] = local_48;
  *(undefined4 *)(local_38 + lVar5 * 2 + 1) = (undefined4)local_40;
  *(undefined4 *)((longlong)local_38 + lVar5 * 0x10 + 0xc) = local_40._4_4_;
  local_40 = 0;
  local_48 = 0;
  FUN_140056680(&local_48,L"Mission_Main_Shatteredlands3");
  uVar2 = uStack_30;
  lVar5 = (longlong)(int)uStack_30;
  uVar3 = (int)uStack_30 + 1;
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar3);
  if (uStack_30._4_4_ < uVar3) {
    FUN_1447a1bd6(&local_38,uVar2 & 0xffffffff);
  }
  local_38[lVar5 * 2] = 0;
  local_38[lVar5 * 2] = local_48;
  *(undefined4 *)(local_38 + lVar5 * 2 + 1) = (undefined4)local_40;
  *(undefined4 *)((longlong)local_38 + lVar5 * 0x10 + 0xc) = local_40._4_4_;
  local_40 = 0;
  local_48 = 0;
  uVar4 = FUN_1441d875e(param_1,&local_38);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1441da6f2 FUN_1441da6f2 body=576 status=ok
// SIG undefined FUN_1441da6f2(void)

int FUN_1441da6f2(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)FUN_1458b3986();
  iVar8 = 0;
  iVar7 = 0;
  if ((((plVar2 != (longlong *)0x0) && (DAT_14cb86df8 != 0)) &&
      (plVar3 = (longlong *)FUN_144837462(DAT_14cb86df8,param_2), plVar3 != (longlong *)0x0)) &&
     (iVar8 = iVar7, (char)plVar3[0xb] == '\x01')) {
    lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
    lVar5 = FUN_14050caa6();
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      puVar6 = (undefined8 *)(**(code **)(*plVar2 + 200))(plVar2);
      local_50 = (void *)0x0;
      local_48 = *(int *)(puVar6 + 1);
      lVar4 = (longlong)local_48;
      pvVar1 = (void *)*puVar6;
      if (lVar4 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1446dd7be(&local_50,local_48,0);
        memcpy(local_50,pvVar1,lVar4 * 0xc);
      }
      local_60 = (longlong *)0x0;
      local_58 = (int)plVar3[0xd];
      lVar4 = (longlong)local_58;
      iVar8 = 0;
      pvVar1 = (void *)plVar3[0xc];
      if (lVar4 != 0) {
        iVar8 = 0;
        FUN_14878a604(&local_60,local_58,0);
        memcpy(local_60,pvVar1,lVar4 << 3);
        if ((longlong)local_58 != 0) {
          iVar8 = 0;
          plVar2 = local_60;
          do {
            piVar9 = *(int **)(*plVar2 + 8);
            if (piVar9 == (int *)0x0) {
              piVar9 = &DAT_14c9485f0;
            }
            piVar10 = (int *)&DAT_14c948618;
            if (*piVar9 != 0) {
              iVar7 = piVar9[1];
              piVar10 = (int *)&DAT_14c948618;
              if ((iVar7 != 0) && (piVar10 = (int *)&DAT_14c948618, *piVar9 != DAT_14c948000)) {
                if ((iVar7 < 2) && (piVar9[9] < 1)) {
                  piVar9 = piVar9 + 2;
                }
                else {
                  piVar9 = *(int **)(piVar9 + 6);
                }
                piVar10 = (int *)&DAT_14c948618;
                if (0 < iVar7) {
                  piVar10 = piVar9;
                }
              }
            }
            iVar7 = 0;
            if (local_48 != 0) {
              lVar4 = 0;
              do {
                if ((*(int *)((longlong)local_50 + lVar4) == *piVar10) &&
                   (*(int *)((longlong)local_50 + lVar4 + 8) == piVar10[2])) {
                  iVar7 = 1;
                  break;
                }
                lVar4 = lVar4 + 0xc;
                iVar7 = 0;
              } while ((longlong)local_48 * 0xc != lVar4);
            }
            iVar8 = iVar8 + iVar7;
            plVar2 = plVar2 + 1;
          } while (plVar2 != local_60 + local_58);
        }
        if (local_60 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 1441da934 FUN_1441da934 body=184 status=ok
// SIG undefined FUN_1441da934(void)

undefined8 * FUN_1441da934(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1459b8f2e();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
      if (lVar2 == 0) goto LAB_1441da989;
    }
    if (*(int *)(lVar2 + 0x50) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = *(undefined2 **)(lVar2 + 0x48);
    }
    FUN_1446f470e(local_20,puVar3,1);
    FUN_1446dcdd4(param_1,local_20);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
LAB_1441da989:
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1441da9ee FUN_1441da9ee body=190 status=ok
// SIG undefined FUN_1441da9ee(void)

undefined8 * FUN_1441da9ee(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1459b8f2e();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
      if (lVar2 == 0) goto LAB_1441daa49;
    }
    if (*(int *)(lVar2 + 0x90) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = *(undefined2 **)(lVar2 + 0x88);
    }
    FUN_1446f470e(local_20,puVar3,1);
    FUN_1446dcdd4(param_1,local_20);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
LAB_1441daa49:
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1441daaae FUN_1441daaae body=6899 status=ok
// SIG undefined FUN_1441daaae(void)

undefined8 FUN_1441daaae(longlong *param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined2 *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  ushort uVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  ushort uVar26;
  longlong lVar27;
  int iVar28;
  longlong *plVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_188 [40];
  float *local_160;
  longlong *local_158;
  longlong *local_150;
  ulonglong local_148;
  uint local_140;
  undefined **local_138;
  undefined *local_130;
  longlong lStack_128;
  ulonglong local_120;
  longlong *local_118;
  undefined8 uStack_110;
  undefined **local_108;
  undefined8 uStack_100;
  longlong local_f8;
  ulonglong uStack_f0;
  longlong *local_d8;
  ulonglong uStack_d0;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  int local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((longlong)*(int *)(param_2 + 0x118) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x110);
    plVar29 = plVar8 + (longlong)*(int *)(param_2 + 0x118) * 2;
    plVar20 = plVar8;
LAB_1441dad2d:
    if ((int)plVar20[1] == DAT_14cbce9c8) {
      if (1 < DAT_14cbce9c8) {
        lVar22 = 0;
        do {
          uVar26 = *(ushort *)(*plVar20 + lVar22);
          uVar18 = *(ushort *)(DAT_14cbce9c0 + lVar22);
          if (uVar26 == uVar18) {
            if (uVar26 == 0) break;
          }
          else {
            if (0x7f < (uVar18 | uVar26)) {
              iVar7 = (uint)uVar26 - (uint)uVar18;
              goto LAB_1441dada3;
            }
            if ((&DAT_149e05da0)[uVar26] != (&DAT_149e05da0)[(uint)uVar18])
            goto code_r0x0001441dada0;
          }
          lVar22 = lVar22 + 2;
        } while( true );
      }
      goto LAB_1441db2b5;
    }
    if ((int)plVar20[1] + DAT_14cbce9c8 == 1) goto LAB_1441db2b5;
    goto LAB_1441dad43;
  }
  goto LAB_1441dab05;
code_r0x0001441dada0:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar26] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar18];
LAB_1441dada3:
  if (iVar7 == 0) {
LAB_1441db2b5:
    if (param_1[0x6c] != 0) goto LAB_1441dc2df;
    local_d8 = (longlong *)0x0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    FUN_1446efa72(&local_d8,0,3,0x10);
    uStack_d0 = CONCAT44(uStack_d0._4_4_,3);
    plVar8 = (longlong *)param_1[1];
    if (plVar8 == (longlong *)0x0) goto LAB_1441dbb2c;
    iVar7 = (int)plVar8[1];
    goto LAB_1441db30c;
  }
LAB_1441dad43:
  plVar20 = plVar20 + 2;
  if (plVar20 == plVar29) goto LAB_1441dc323;
  goto LAB_1441dad2d;
LAB_1441dbb2c:
  *local_d8 = (longlong)&PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar19 = DAT_14c758608 + 1;
  lVar22 = DAT_14c758608 + 1;
  if (lVar19 == 0) {
    LOCK();
    UNLOCK();
    lVar19 = DAT_14c758608 + 2;
    lVar22 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar22;
  local_d8[2] = lVar19;
  *local_d8 = (longlong)&PTR_FUN_14b98f450;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[5] = (longlong)param_1;
  goto LAB_1441dbb6b;
LAB_1441dc385:
  if (uVar26 == uVar18) {
LAB_1441dc38d:
    if ((*(longlong *)(param_1[2] + 0x38) == 0) ||
       (lVar22 = *(longlong *)(*(longlong *)(param_1[2] + 0x38) + 0x30), lVar22 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar22 + 0x360);
    }
    lVar22 = FUN_1459a1b3a(uVar9);
    if (lVar22 == 0) goto LAB_1441db02a;
    fVar31 = (float)FUN_143f2686a(lVar22,param_2);
    goto LAB_1441daf83;
  }
LAB_1441dc335:
  plVar8 = plVar8 + 2;
  if (plVar8 == plVar29) goto LAB_1441dab05;
  goto LAB_1441dc323;
LAB_1441dae4a:
  if (uVar26 == uVar18) goto LAB_1441dab87;
LAB_1441dade8:
  plVar8 = plVar8 + 2;
  bVar30 = false;
  if (plVar8 == plVar20) goto LAB_1441dab87;
  goto LAB_1441dadd2;
LAB_1441db0f7:
  if (uVar26 == uVar18) goto LAB_1441daecc;
LAB_1441db095:
  plVar8 = plVar8 + 2;
  bVar30 = false;
  if (plVar8 == plVar20) goto LAB_1441daecc;
  goto LAB_1441db07f;
LAB_1441db468:
  if (uVar26 == uVar18) {
LAB_1441db46e:
    plVar8 = (longlong *)FUN_1458b3986();
    fVar31 = 0.0;
    if (plVar8 != (longlong *)0x0) {
      local_b8 = 0;
      iVar7 = 0;
      local_b0 = 0;
      local_d8 = (longlong *)0x0;
      uStack_d0 = 0;
      local_ac = 0xffffffff00000080;
      local_a4 = 0;
      local_98 = 0;
      local_90 = 0;
      FUN_140938dea();
      uStack_100 = &DAT_14cb86c40;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = &PTR_FUN_14b41c0c0;
      FUN_140653d46(&local_108,&DAT_14cbcdd98);
      FUN_140653d46(&local_108,&DAT_14cbcdda8);
      FUN_140653d46(&local_108,&DAT_14cbcddb0);
      FUN_140653d46(&local_108,&DAT_14cbcdd68);
      FUN_140653d46(&local_108,&DAT_14cbcdd70);
      FUN_140653d46(&local_108,&DAT_14cbcdd78);
      FUN_140653d46(&local_108,&DAT_14cbcdd80);
      FUN_140653d46(&local_108,&DAT_14cbcdd88);
      FUN_140653d46(&local_108,&DAT_14cbcdd90);
      local_118 = (longlong *)0x0;
      uStack_110 = 0;
      FUN_145779e36(&local_118);
      if ((longlong)(int)uStack_110 != 0) {
        local_158 = local_118 + (int)uStack_110;
        plVar20 = local_118;
        local_160 = param_3;
        local_150 = plVar8;
        do {
          lVar22 = (longlong)*(int *)(*plVar20 + 0x68);
          if (lVar22 != 0) {
            plVar29 = *(longlong **)(*plVar20 + 0x60);
            plVar8 = plVar29 + lVar22;
            do {
              plVar1 = (longlong *)*plVar29;
              cVar4 = (**(code **)(*plVar1 + 0x50))(plVar1);
              if (cVar4 == '\0') {
                local_138 = (undefined **)&DAT_14a171d50;
                local_130 = (undefined *)0x0;
                lStack_128 = 0;
                local_120 = 0;
                FUN_1401004a0(&local_138,plVar1 + 0x9e);
                if (uStack_100 == local_130) {
                  uVar6 = (uint)local_120;
                  if ((int)(uint)uStack_f0 < (int)(uint)local_120) {
                    uVar6 = (uint)uStack_f0;
                  }
                  if (0 < (int)uVar6) {
                    uVar25 = 0;
                    do {
                      if ((*(ulonglong *)(lStack_128 + uVar25 * 8) &
                          ~*(ulonglong *)(local_f8 + uVar25 * 8)) != 0) goto LAB_1441db693;
                      uVar25 = uVar25 + 1;
                    } while (uVar6 != uVar25);
                  }
                  bVar30 = true;
                  if ((int)(uint)uStack_f0 < (int)(uint)local_120) {
                    lVar22 = 0;
                    do {
                      bVar30 = *(longlong *)
                                ((longlong)(int)(uint)uStack_f0 * 8 + lStack_128 + lVar22 * 8) == 0;
                      if (!bVar30) break;
                      iVar7 = (int)lVar22;
                      lVar22 = lVar22 + 1;
                    } while (~(uint)uStack_f0 + (uint)local_120 != iVar7);
                  }
                }
                else {
LAB_1441db693:
                  bVar30 = false;
                }
                local_138 = (undefined **)&DAT_14a171d50;
                uVar25 = local_120 >> 0x20;
                local_120 = local_120 & 0xffffffff00000000;
                if ((int)uVar25 != 0) {
                  FUN_140115c12(&lStack_128,0);
                }
                local_130 = (undefined *)0x0;
                if (lStack_128 != 0) {
                  FUN_1400020a8();
                }
                if (bVar30) {
                  piVar10 = (int *)plVar1[1];
                  if (piVar10 == (int *)0x0) {
                    piVar10 = &DAT_14c9485f0;
                  }
                  local_138 = DAT_14c948618;
                  iVar7 = DAT_14c948620;
                  if (((*piVar10 != 0) && (iVar28 = piVar10[1], iVar28 != 0)) &&
                     (*piVar10 != DAT_14c948000)) {
                    if ((iVar28 < 2) && (piVar10[9] < 1)) {
                      piVar10 = piVar10 + 2;
                    }
                    else {
                      piVar10 = *(int **)(piVar10 + 6);
                    }
                    if (0 < iVar28) {
                      local_138 = *(undefined ***)piVar10;
                      iVar7 = piVar10[2];
                    }
                  }
                  local_130 = (undefined *)CONCAT44(local_130._4_4_,iVar7);
                  FUN_1409612f0(&local_d8,&local_148,&local_138,0);
                }
              }
              plVar29 = plVar29 + 1;
            } while (plVar29 != plVar8);
          }
          plVar20 = plVar20 + 1;
        } while (plVar20 != local_158);
        iVar7 = (int)uStack_d0 - local_a4;
        plVar8 = local_150;
        param_3 = local_160;
      }
      puVar11 = (undefined8 *)(**(code **)(*plVar8 + 200))(plVar8);
      local_138 = (undefined **)0x0;
      iVar28 = *(int *)(puVar11 + 1);
      pvVar2 = (void *)*puVar11;
      local_130 = (undefined *)CONCAT44(local_130._4_4_,iVar28);
      if ((longlong)iVar28 == 0) {
        fVar31 = 0.0;
      }
      else {
        iVar21 = 0;
        FUN_1446dd7be(&local_138,iVar28,0);
        memcpy(local_138,pvVar2,(longlong)iVar28 * 0xc);
        ppuVar17 = local_138;
        lVar22 = (longlong)(int)local_130;
        if (lVar22 == 0) {
          fVar31 = 0.0;
        }
        else {
          lVar19 = 0;
          do {
            local_140 = *(uint *)((longlong)ppuVar17 + lVar19 + 8);
            local_148 = *(ulonglong *)((longlong)ppuVar17 + lVar19);
            uVar25 = local_148;
            if (local_140 != 0) {
              uVar6 = local_140 >> 0xd ^ (int)local_148 - local_140;
              uVar13 = uVar6 << 8 ^ (-0x61c88647 - local_140) - uVar6;
              uVar14 = uVar13 >> 0xd ^ (local_140 - uVar6) - uVar13;
              uVar6 = uVar14 >> 0xc ^ (uVar6 - uVar13) - uVar14;
              uVar13 = uVar6 << 0x10 ^ (uVar13 - uVar14) - uVar6;
              uVar24 = uVar13 >> 5 ^ (uVar14 - uVar6) - uVar13;
              uVar14 = uVar24 >> 3 ^ (uVar6 - uVar13) - uVar24;
              uVar6 = uVar14 << 10 ^ (uVar13 - uVar24) - uVar14;
              uVar25 = (ulonglong)(uVar6 >> 0xf ^ uVar24 - (uVar14 + uVar6));
            }
            iVar28 = FUN_1407a7398(&local_d8,uVar25,&local_148);
            iVar21 = iVar21 + (uint)(iVar28 != -1);
            lVar19 = lVar19 + 0xc;
          } while (lVar22 * 0xc != lVar19);
          fVar31 = (float)iVar21;
        }
        if (local_138 != (undefined **)0x0) {
          FUN_1400020a8(local_138);
        }
      }
      if (local_118 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_108 = (undefined **)&DAT_14a171d50;
      uVar25 = uStack_f0 >> 0x20;
      uStack_f0 = uStack_f0 & 0xffffffff00000000;
      if ((int)uVar25 != 0) {
        FUN_140115c12(&local_f8,0);
      }
      uStack_100 = (undefined *)0x0;
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
      local_90 = 0;
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      FUN_1401bccca(&local_d8);
      if (iVar7 < 1) {
        fVar31 = 0.0;
      }
      else {
        fVar31 = fVar31 / (float)iVar7;
      }
    }
    goto LAB_1441daf67;
  }
LAB_1441db418:
  plVar20 = plVar20 + 2;
  if (plVar20 == plVar29) goto LAB_1441dba25;
  goto LAB_1441db406;
code_r0x0001441dba95:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar26] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar18];
LAB_1441dba98:
  if (iVar7 != 0) {
    while (plVar8 = plVar8 + 2, plVar8 != plVar29) {
LAB_1441dba25:
      if ((int)plVar8[1] == DAT_14cbce9b8) {
        if (1 < DAT_14cbce9b8) {
          lVar22 = 0;
          do {
            uVar26 = *(ushort *)(*plVar8 + lVar22);
            uVar18 = *(ushort *)(DAT_14cbce9b0 + lVar22);
            if (uVar26 == uVar18) {
              if (uVar26 == 0) break;
            }
            else {
              if (0x7f < (uVar18 | uVar26)) {
                iVar7 = (uint)uVar26 - (uint)uVar18;
                goto LAB_1441dba98;
              }
              if ((&DAT_149e05da0)[uVar26] != (&DAT_149e05da0)[(uint)uVar18])
              goto code_r0x0001441dba95;
            }
            lVar22 = lVar22 + 2;
          } while( true );
        }
        goto LAB_1441dbcc0;
      }
      if ((int)plVar8[1] + DAT_14cbce9b8 == 1) goto LAB_1441dbcc0;
    }
    goto LAB_1441dafe2;
  }
LAB_1441dbcc0:
  plVar8 = (longlong *)FUN_1458b3986(param_1);
  if (plVar8 == (longlong *)0x0) {
LAB_1441dc41f:
    fVar31 = 0.0;
  }
  else {
    local_b8 = 0;
    iVar7 = 0;
    local_b0 = 0;
    local_d8 = (longlong *)0x0;
    uStack_d0 = 0;
    local_ac = 0xffffffff00000080;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    if ((longlong)*(int *)(param_2 + 0x128) != 0) {
      plVar20 = *(longlong **)(param_2 + 0x120);
      local_158 = plVar20 + (longlong)*(int *)(param_2 + 0x128) * 8;
      local_160 = param_3;
      local_150 = plVar8;
      do {
        lVar22 = plVar20[7];
        if ((longlong)(int)lVar22 != 0) {
          lVar19 = plVar20[6];
          lVar27 = 0;
          do {
            local_138 = (undefined **)0x0;
            uVar6 = *(uint *)(lVar19 + 0x18 + lVar27);
            pvVar2 = *(void **)(lVar19 + 0x10 + lVar27);
            local_130 = (undefined *)CONCAT44(local_130._4_4_,uVar6);
            if ((longlong)(int)uVar6 == 0) {
              local_130 = (undefined *)(ulonglong)uVar6;
            }
            else {
              FUN_1446dd670(&local_138,uVar6,0);
              memcpy(local_138,pvVar2,(longlong)(int)uVar6 * 2);
              if (1 < (int)local_130) {
                FUN_14000bbd8(&local_108,&local_138);
                plVar8 = (longlong *)FUN_14060eaf6(&local_108);
                if (uStack_f0 != 0) {
                  FUN_1400020a8();
                }
                if ((plVar8 != (longlong *)0x0) &&
                   (cVar4 = (**(code **)(*plVar8 + 0x50))(plVar8), cVar4 == '\0')) {
                  piVar10 = (int *)plVar8[1];
                  if (piVar10 == (int *)0x0) {
                    piVar10 = &DAT_14c9485f0;
                  }
                  local_108 = DAT_14c948618;
                  iVar7 = DAT_14c948620;
                  if (((*piVar10 != 0) && (iVar28 = piVar10[1], iVar28 != 0)) &&
                     (*piVar10 != DAT_14c948000)) {
                    if ((iVar28 < 2) && (piVar10[9] < 1)) {
                      piVar10 = piVar10 + 2;
                    }
                    else {
                      piVar10 = *(int **)(piVar10 + 6);
                    }
                    if (0 < iVar28) {
                      local_108 = *(undefined ***)piVar10;
                      iVar7 = piVar10[2];
                    }
                  }
                  uStack_100 = (undefined *)CONCAT44(uStack_100._4_4_,iVar7);
                  FUN_1409612f0(&local_d8,&local_118,&local_108,0);
                }
              }
            }
            if (local_138 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            lVar27 = lVar27 + 0x40;
          } while ((longlong)(int)lVar22 * 0x40 != lVar27);
        }
        plVar20 = plVar20 + 8;
      } while (plVar20 != local_158);
      iVar7 = (int)uStack_d0 - local_a4;
      plVar8 = local_150;
      param_3 = local_160;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar8 + 200))();
    local_108 = (undefined **)0x0;
    iVar28 = *(int *)(puVar11 + 1);
    pvVar2 = (void *)*puVar11;
    uStack_100 = (undefined *)CONCAT44(uStack_100._4_4_,iVar28);
    if ((longlong)iVar28 == 0) {
      fVar31 = 0.0;
    }
    else {
      iVar21 = 0;
      FUN_1446dd7be(&local_108,iVar28,0);
      memcpy(local_108,pvVar2,(longlong)iVar28 * 0xc);
      ppuVar17 = local_108;
      lVar22 = (longlong)(int)uStack_100;
      if (lVar22 == 0) {
        fVar31 = 0.0;
      }
      else {
        lVar19 = 0;
        do {
          uVar6 = *(uint *)((longlong)ppuVar17 + lVar19 + 8);
          local_130 = (undefined *)CONCAT44(local_130._4_4_,uVar6);
          local_138 = *(undefined ***)((longlong)ppuVar17 + lVar19);
          ppuVar16 = local_138;
          if (uVar6 != 0) {
            uVar13 = uVar6 >> 0xd ^ (int)local_138 - uVar6;
            uVar14 = uVar13 << 8 ^ (-0x61c88647 - uVar6) - uVar13;
            uVar24 = uVar14 >> 0xd ^ (uVar6 - uVar13) - uVar14;
            uVar6 = uVar24 >> 0xc ^ (uVar13 - uVar14) - uVar24;
            uVar13 = uVar6 << 0x10 ^ (uVar14 - uVar24) - uVar6;
            uVar24 = uVar13 >> 5 ^ (uVar24 - uVar6) - uVar13;
            uVar14 = uVar24 >> 3 ^ (uVar6 - uVar13) - uVar24;
            uVar6 = uVar14 << 10 ^ (uVar13 - uVar24) - uVar14;
            ppuVar16 = (undefined **)(ulonglong)(uVar6 >> 0xf ^ uVar24 - (uVar14 + uVar6));
          }
          iVar28 = FUN_1407a7398(&local_d8,ppuVar16,&local_138);
          iVar21 = iVar21 + (uint)(iVar28 != -1);
          lVar19 = lVar19 + 0xc;
        } while (lVar22 * 0xc != lVar19);
        fVar31 = (float)iVar21;
      }
      if (local_108 != (undefined **)0x0) {
        FUN_1400020a8(local_108);
      }
    }
    local_90 = 0;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1401bccca(&local_d8);
    if (iVar7 < 1) goto LAB_1441dc41f;
    fVar31 = fVar31 / (float)iVar7;
  }
  goto LAB_1441daf83;
LAB_1441db958:
  if (uVar26 == uVar18) goto LAB_1441db007;
LAB_1441db8f6:
  plVar8 = plVar8 + 2;
  bVar30 = false;
  if (plVar8 == plVar20) goto LAB_1441db007;
  goto LAB_1441db8e0;
code_r0x0001441db9ff:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar26] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar18];
LAB_1441dba02:
  if (iVar7 == 0) {
LAB_1441dbc37:
    if ((*(longlong *)(param_1[2] + 0x38) == 0) ||
       (lVar22 = *(longlong *)(*(longlong *)(param_1[2] + 0x38) + 0x30), lVar22 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar22 + 0x360);
    }
    lVar22 = FUN_1459a1b3a(uVar9);
    if (lVar22 != 0) {
      fVar31 = (float)FUN_143f2686a(lVar22,param_2);
      *param_3 = fVar31;
      uVar9 = 1;
      if (fVar31 <= 0.0) goto LAB_1441daf8b;
    }
    if ((*(longlong *)(param_1[2] + 0x38) == 0) ||
       (lVar22 = *(longlong *)(*(longlong *)(param_1[2] + 0x38) + 0x30), lVar22 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar22 + 0x360);
    }
    iVar7 = FUN_144120955(uVar9);
    fVar31 = (float)iVar7 / 100.0;
    goto LAB_1441daf73;
  }
LAB_1441db99f:
  plVar8 = plVar8 + 2;
  uVar9 = 0;
  if (plVar8 == plVar20) goto LAB_1441daf8b;
  goto LAB_1441db98b;
  while( true ) {
    LOCK();
    iVar28 = (int)plVar8[1];
    bVar30 = iVar7 == iVar28;
    if (bVar30) {
      *(int *)(plVar8 + 1) = iVar7 + 1;
      iVar28 = iVar7;
    }
    iVar7 = iVar28;
    UNLOCK();
    if (bVar30) break;
LAB_1441db30c:
    if (iVar7 == 0) goto LAB_1441dbb2c;
  }
  lVar22 = *param_1;
  LOCK();
  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  UNLOCK();
  *local_d8 = (longlong)&PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar27 = DAT_14c758608 + 1;
  lVar19 = DAT_14c758608 + 1;
  if (lVar27 == 0) {
    LOCK();
    UNLOCK();
    lVar27 = DAT_14c758608 + 2;
    lVar19 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar19;
  local_d8[2] = lVar27;
  *local_d8 = (longlong)&PTR_FUN_14b98f450;
  local_d8[3] = lVar22;
  local_d8[4] = (longlong)plVar8;
  LOCK();
  *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
  UNLOCK();
  local_d8[5] = (longlong)param_1;
  LOCK();
  plVar20 = plVar8 + 1;
  *(int *)plVar20 = (int)*plVar20 + -1;
  UNLOCK();
  if ((int)*plVar20 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar10 = (int *)((longlong)plVar8 + 0xc);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  LOCK();
  plVar20 = plVar8 + 1;
  *(int *)plVar20 = (int)*plVar20 + -1;
  UNLOCK();
  if ((int)*plVar20 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar10 = (int *)((longlong)plVar8 + 0xc);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  LOCK();
  plVar20 = plVar8 + 1;
  *(int *)plVar20 = (int)*plVar20 + -1;
  UNLOCK();
  if ((int)*plVar20 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar10 = (int *)((longlong)plVar8 + 0xc);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_1441dbb6b:
  if (((int)uStack_d0 == 0) || (local_d8 == (longlong *)0x0)) {
LAB_1441dc533:
    if ((int)uStack_d0 == 0) {
      ppuVar17 = (undefined **)0x0;
      goto LAB_1441dc2cf;
    }
    if (local_d8 != (longlong *)0x0) {
      ppuVar17 = (undefined **)0x0;
      (**(code **)*local_d8)(local_d8,0);
      FUN_1446efa72(&local_d8,0,0,0x10);
      goto LAB_1441dc2bc;
    }
    ppuVar17 = (undefined **)0x0;
  }
  else {
    cVar4 = (**(code **)(*local_d8 + 0x30))();
    uVar6 = DAT_14c9647a8;
    if (cVar4 == '\0') {
      goto LAB_1441dc533;
    }
    if ((DAT_14c9647b4 < 1) &&
       (DAT_14c9647b0 = DAT_14c9647b0 + -1, DAT_14c9647b0 <= (int)DAT_14c9647a8)) {
      if (0 < (int)DAT_14c9647a8) {
        iVar7 = 0;
        do {
          if (((*(int *)(DAT_14c9647a0 + 8 + (longlong)iVar7 * 0x10) == 0) ||
              (plVar8 = *(longlong **)(DAT_14c9647a0 + (longlong)iVar7 * 0x10),
              plVar8 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar8 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(&DAT_14c9647a0,iVar7);
            FUN_14005b248(&DAT_14c9647a0);
          }
          else {
            iVar7 = iVar7 + 1;
          }
        } while (iVar7 < (int)DAT_14c9647a8);
      }
      DAT_14c9647b0 = 2;
      if (2 < (int)(DAT_14c9647a8 * 2)) {
        DAT_14c9647b0 = DAT_14c9647a8 * 2;
      }
      if ((DAT_14c9647b0 < (int)uVar6) && (DAT_14c9647ac != DAT_14c9647a8)) {
        FUN_14045812c();
      }
    }
    ppuVar17 = (undefined **)0x0;
    if (((int)uStack_d0 != 0) && (local_d8 != (longlong *)0x0)) {
      (**(code **)(*local_d8 + 0x38))(local_d8,&local_108);
      ppuVar17 = local_108;
    }
    uVar6 = DAT_14c9647a8;
    lVar22 = (longlong)(int)DAT_14c9647a8;
    DAT_14c9647a8 = DAT_14c9647a8 + 1;
    if (DAT_14c9647ac < DAT_14c9647a8) {
      FUN_1447a71f6(&DAT_14c9647a0,uVar6);
    }
    lVar19 = DAT_14c9647a0;
    lVar22 = lVar22 * 0x10;
    *(undefined8 *)(DAT_14c9647a0 + lVar22) = 0;
    *(undefined4 *)(lVar19 + 8 + lVar22) = 0;
    *(longlong **)(lVar19 + lVar22) = local_d8;
    local_d8 = (longlong *)0x0;
    *(int *)(lVar19 + 8 + lVar22) = (int)uStack_d0;
LAB_1441dc2bc:
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
LAB_1441dc2cf:
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  param_1[0x6c] = (longlong)ppuVar17;
LAB_1441dc2df:
  cVar4 = FUN_1441dc5a2();
  *(char *)(param_1 + 0x6d) = cVar4;
  fVar31 = 0.0;
  if (cVar4 == '\0') {
    if ((longlong)*(int *)(param_2 + 0x118) != 0) {
      plVar8 = *(longlong **)(param_2 + 0x110);
      plVar29 = plVar8 + (longlong)*(int *)(param_2 + 0x118) * 2;
LAB_1441dc323:
      if ((int)plVar8[1] == DAT_14cbce9d8) {
        if (1 < DAT_14cbce9d8) {
          lVar22 = 0;
          do {
            uVar26 = *(ushort *)(*plVar8 + lVar22);
            uVar25 = (ulonglong)uVar26;
            uVar18 = *(ushort *)(DAT_14cbce9d0 + lVar22);
            if (uVar26 == uVar18) {
              if (uVar26 == 0) break;
            }
            else {
              if (0x7f < (uVar18 | uVar26)) goto LAB_1441dc385;
              uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar25];
              uVar23 = (ulonglong)uVar18;
              uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
              if ((&DAT_149e05da0)[uVar25] != (&DAT_149e05da0)[uVar23]) goto LAB_1441dc385;
            }
            lVar22 = lVar22 + 2;
          } while( true );
        }
        goto LAB_1441dc38d;
      }
      if ((int)plVar8[1] + DAT_14cbce9d8 == 1) goto LAB_1441dc38d;
      goto LAB_1441dc335;
    }
LAB_1441dab05:
    plVar8 = (longlong *)FUN_1459b8f2e();
    if (plVar8 == (longlong *)0x0) {
LAB_1441dab0f:
      uStack_d0 = 0;
LAB_1441dab73:
      local_d8 = (longlong *)0x0;
    }
    else {
      lVar22 = plVar8[0x22];
      if (lVar22 == 0) {
        (**(code **)(*plVar8 + 1000))();
        lVar22 = plVar8[0x22];
        if (lVar22 == 0) goto LAB_1441dab0f;
      }
      local_d8 = (longlong *)0x0;
      uVar6 = *(uint *)(lVar22 + 0x40);
      pvVar2 = *(void **)(lVar22 + 0x38);
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
      if ((longlong)(int)uVar6 == 0) {
        uStack_d0 = (ulonglong)uVar6;
        goto LAB_1441dab73;
      }
      FUN_1446dd670(&local_d8,uVar6,0);
      memcpy(local_d8,pvVar2,(longlong)(int)uVar6 * 2);
    }
    if ((longlong)*(int *)(param_2 + 0x118) != 0) {
      plVar8 = *(longlong **)(param_2 + 0x110);
      plVar20 = plVar8 + (longlong)*(int *)(param_2 + 0x118) * 2;
LAB_1441dadd2:
      if ((int)plVar8[1] == (int)uStack_d0) {
        bVar30 = true;
        if (1 < (int)uStack_d0) {
          lVar22 = 0;
          do {
            uVar26 = *(ushort *)(*plVar8 + lVar22);
            uVar25 = (ulonglong)uVar26;
            uVar18 = *(ushort *)((longlong)local_d8 + lVar22);
            if (uVar26 == uVar18) {
              if (uVar26 == 0) break;
            }
            else {
              if (0x7f < (uVar18 | uVar26)) goto LAB_1441dae4a;
              uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar25];
              uVar23 = (ulonglong)uVar18;
              uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
              if ((&DAT_149e05da0)[uVar25] != (&DAT_149e05da0)[uVar23]) goto LAB_1441dae4a;
            }
            lVar22 = lVar22 + 2;
          } while( true );
        }
      }
      else {
        if ((int)plVar8[1] + (int)uStack_d0 != 1) goto LAB_1441dade8;
        bVar30 = true;
      }
      goto LAB_1441dab87;
    }
    bVar30 = false;
LAB_1441dab87:
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (bVar30) {
      FUN_1441da934(&local_d8);
      fVar31 = (float)FUN_1441dc70c(param_1,&local_d8);
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      plVar8 = (longlong *)FUN_1459b8f2e();
      if (plVar8 == (longlong *)0x0) {
LAB_1441daf26:
        uStack_100 = (undefined *)0x0;
        local_108 = (undefined **)0x0;
        fVar33 = 0.0;
        iVar7 = 0;
      }
      else {
        lVar22 = plVar8[0x22];
        if (lVar22 == 0) {
          (**(code **)(*plVar8 + 1000))(plVar8);
          lVar22 = plVar8[0x22];
          if (lVar22 == 0) goto LAB_1441daf26;
        }
        local_108 = (undefined **)0x0;
        uStack_100 = (undefined *)0x0;
        iVar7 = *(int *)(lVar22 + 0x60);
        fVar33 = 0.0;
        if ((longlong)iVar7 == 0) goto LAB_1441daf26;
        lVar22 = *(longlong *)(lVar22 + 0x58);
        lVar19 = 0;
        local_160 = param_3;
        local_158 = param_1;
        do {
          puVar15 = &DAT_149dfb77a;
          if (*(int *)(lVar22 + 8 + lVar19) != 0) {
            puVar15 = *(undefined2 **)(lVar22 + lVar19);
          }
          FUN_1446f470e(&local_138,puVar15,1);
          FUN_1446dcdd4(&local_d8,&local_138);
          uVar25 = (ulonglong)uStack_100;
          lVar27 = (longlong)(int)uStack_100;
          uVar6 = (int)uStack_100 + 1;
          uStack_100 = (undefined *)CONCAT44(uStack_100._4_4_,uVar6);
          if (uStack_100._4_4_ < uVar6) {
            FUN_14014a81a(&local_108,uVar25 & 0xffffffff);
          }
          ppuVar17 = local_108 + lVar27 * 5;
          *ppuVar17 = (undefined *)0x0;
          ppuVar17[1] = (undefined *)0x0;
          *(undefined4 *)(ppuVar17 + 2) = 0;
          ppuVar17[3] = (undefined *)0x0;
          ppuVar17[4] = (undefined *)0x0;
          FUN_1404e49fa(ppuVar17,&local_d8);
          if (local_c0 != 0) {
            FUN_1400020a8();
          }
          plVar8 = local_158;
          param_3 = local_160;
          lVar19 = lVar19 + 0x10;
        } while ((longlong)iVar7 * 0x10 != lVar19);
        iVar7 = 0;
        if ((longlong)(int)uStack_100 != 0) {
          lVar22 = (longlong)(int)uStack_100 * 0x28;
          fVar33 = 0.0;
          ppuVar17 = local_108;
          do {
            fVar32 = (float)FUN_1441dc70c(plVar8,ppuVar17);
            fVar33 = fVar33 + fVar32 / (float)(int)uStack_100;
            ppuVar17 = ppuVar17 + 5;
            lVar22 = lVar22 + -0x28;
            iVar7 = (int)uStack_100;
          } while (lVar22 != 0);
        }
      }
LAB_1441daf2a:
      if (1.0 <= fVar33) {
        fVar33 = 1.0;
      }
      if (fVar33 <= 0.0) {
        fVar33 = 0.0;
      }
      FUN_1456d172d(local_108,iVar7);
      if (local_108 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      fVar31 = fVar31 * 0.8 + fVar33 * 0.2;
LAB_1441daf67:
      fVar31 = 1.0 - fVar31;
LAB_1441daf73:
      fVar31 = fVar31 * 0.9 + 0.1;
    }
    else {
      plVar8 = (longlong *)FUN_1459b8f2e();
      if (plVar8 == (longlong *)0x0) {
LAB_1441dacf8:
        uStack_d0 = 0;
LAB_1441daeb8:
        local_d8 = (longlong *)0x0;
      }
      else {
        lVar22 = plVar8[0x22];
        if (lVar22 == 0) {
          (**(code **)(*plVar8 + 1000))();
          lVar22 = plVar8[0x22];
          if (lVar22 == 0) goto LAB_1441dacf8;
        }
        local_d8 = (longlong *)0x0;
        uVar6 = *(uint *)(lVar22 + 0x80);
        pvVar2 = *(void **)(lVar22 + 0x78);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
        if ((longlong)(int)uVar6 == 0) {
          uStack_d0 = (ulonglong)uVar6;
          goto LAB_1441daeb8;
        }
        FUN_1446dd670(&local_d8,uVar6,0);
        memcpy(local_d8,pvVar2,(longlong)(int)uVar6 * 2);
      }
      if ((longlong)*(int *)(param_2 + 0x118) != 0) {
        plVar8 = *(longlong **)(param_2 + 0x110);
        plVar20 = plVar8 + (longlong)*(int *)(param_2 + 0x118) * 2;
LAB_1441db07f:
        if ((int)plVar8[1] == (int)uStack_d0) {
          bVar30 = true;
          if (1 < (int)uStack_d0) {
            lVar22 = 0;
            do {
              uVar26 = *(ushort *)(*plVar8 + lVar22);
              uVar25 = (ulonglong)uVar26;
              uVar18 = *(ushort *)((longlong)local_d8 + lVar22);
              if (uVar26 == uVar18) {
                if (uVar26 == 0) break;
              }
              else {
                if (0x7f < (uVar18 | uVar26)) goto LAB_1441db0f7;
                uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar25];
                uVar23 = (ulonglong)uVar18;
                uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                if ((&DAT_149e05da0)[uVar25] != (&DAT_149e05da0)[uVar23]) goto LAB_1441db0f7;
              }
              lVar22 = lVar22 + 2;
            } while( true );
          }
        }
        else {
          if ((int)plVar8[1] + (int)uStack_d0 != 1) goto LAB_1441db095;
          bVar30 = true;
        }
        goto LAB_1441daecc;
      }
      bVar30 = false;
LAB_1441daecc:
      if (local_d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (bVar30) {
        FUN_1441da9ee(&local_d8);
        fVar31 = (float)FUN_1441dc70c(param_1,&local_d8);
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
        plVar8 = (longlong *)FUN_1459b8f2e();
        if (plVar8 != (longlong *)0x0) {
          lVar22 = plVar8[0x22];
          if (lVar22 == 0) {
            (**(code **)(*plVar8 + 1000))(plVar8);
            lVar22 = plVar8[0x22];
            if (lVar22 == 0) goto LAB_1441daf26;
          }
          local_108 = (undefined **)0x0;
          uStack_100 = (undefined *)0x0;
          iVar7 = *(int *)(lVar22 + 0xa0);
          fVar33 = 0.0;
          if ((longlong)iVar7 != 0) {
            lVar22 = *(longlong *)(lVar22 + 0x98);
            lVar19 = 0;
            local_160 = param_3;
            local_158 = param_1;
            do {
              puVar15 = &DAT_149dfb77a;
              if (*(int *)(lVar22 + 8 + lVar19) != 0) {
                puVar15 = *(undefined2 **)(lVar22 + lVar19);
              }
              FUN_1446f470e(&local_138,puVar15,1);
              FUN_1446dcdd4(&local_d8,&local_138);
              uVar25 = (ulonglong)uStack_100;
              lVar27 = (longlong)(int)uStack_100;
              uVar6 = (int)uStack_100 + 1;
              uStack_100 = (undefined *)CONCAT44(uStack_100._4_4_,uVar6);
              if (uStack_100._4_4_ < uVar6) {
                FUN_14014a81a(&local_108,uVar25 & 0xffffffff);
              }
              ppuVar17 = local_108 + lVar27 * 5;
              *ppuVar17 = (undefined *)0x0;
              ppuVar17[1] = (undefined *)0x0;
              *(undefined4 *)(ppuVar17 + 2) = 0;
              ppuVar17[3] = (undefined *)0x0;
              ppuVar17[4] = (undefined *)0x0;
              FUN_1404e49fa(ppuVar17,&local_d8);
              if (local_c0 != 0) {
                FUN_1400020a8();
              }
              plVar8 = local_158;
              param_3 = local_160;
              lVar19 = lVar19 + 0x10;
            } while ((longlong)iVar7 * 0x10 != lVar19);
            iVar7 = 0;
            if ((longlong)(int)uStack_100 != 0) {
              lVar22 = (longlong)(int)uStack_100 * 0x28;
              fVar33 = 0.0;
              ppuVar17 = local_108;
              do {
                fVar32 = (float)FUN_1441dc70c(plVar8,ppuVar17);
                fVar33 = fVar33 + fVar32 / (float)(int)uStack_100;
                ppuVar17 = ppuVar17 + 5;
                lVar22 = lVar22 + -0x28;
                iVar7 = (int)uStack_100;
              } while (lVar22 != 0);
            }
            goto LAB_1441daf2a;
          }
        }
        goto LAB_1441daf26;
      }
      if ((longlong)*(int *)(param_2 + 0x118) != 0) {
        plVar8 = *(longlong **)(param_2 + 0x110);
        plVar29 = plVar8 + (longlong)*(int *)(param_2 + 0x118) * 2;
        plVar20 = plVar8;
LAB_1441db406:
        if ((int)plVar20[1] == DAT_14cbce9a8) {
          if (1 < DAT_14cbce9a8) {
            lVar22 = 0;
            do {
              uVar26 = *(ushort *)(*plVar20 + lVar22);
              uVar25 = (ulonglong)uVar26;
              uVar18 = *(ushort *)(DAT_14cbce9a0 + lVar22);
              if (uVar26 == uVar18) {
                if (uVar26 == 0) break;
              }
              else {
                if (0x7f < (uVar18 | uVar26)) goto LAB_1441db468;
                uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar25];
                uVar23 = (ulonglong)uVar18;
                uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                if ((&DAT_149e05da0)[uVar25] != (&DAT_149e05da0)[uVar23]) goto LAB_1441db468;
              }
              lVar22 = lVar22 + 2;
            } while( true );
          }
          goto LAB_1441db46e;
        }
        if ((int)plVar20[1] + DAT_14cbce9a8 == 1) goto LAB_1441db46e;
        goto LAB_1441db418;
      }
LAB_1441dafe2:
      FUN_148da6994(&local_d8);
      if ((longlong)*(int *)(param_2 + 0x118) != 0) {
        plVar8 = *(longlong **)(param_2 + 0x110);
        plVar20 = plVar8 + (longlong)*(int *)(param_2 + 0x118) * 2;
LAB_1441db8e0:
        if ((int)plVar8[1] == (int)uStack_d0) {
          bVar30 = true;
          if (1 < (int)uStack_d0) {
            lVar22 = 0;
            do {
              uVar26 = *(ushort *)(*plVar8 + lVar22);
              uVar25 = (ulonglong)uVar26;
              uVar18 = *(ushort *)((longlong)local_d8 + lVar22);
              if (uVar26 == uVar18) {
                if (uVar26 == 0) break;
              }
              else {
                if (0x7f < (uVar18 | uVar26)) goto LAB_1441db958;
                uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar25];
                uVar23 = (ulonglong)uVar18;
                uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                if ((&DAT_149e05da0)[uVar25] != (&DAT_149e05da0)[uVar23]) goto LAB_1441db958;
              }
              lVar22 = lVar22 + 2;
            } while( true );
          }
        }
        else {
          if ((int)plVar8[1] + (int)uStack_d0 != 1) goto LAB_1441db8f6;
          bVar30 = true;
        }
        goto LAB_1441db007;
      }
      bVar30 = false;
LAB_1441db007:
      if (local_d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (!bVar30) {
        if ((longlong)*(int *)(param_2 + 0x118) != 0) {
          plVar8 = *(longlong **)(param_2 + 0x110);
          plVar20 = plVar8 + (longlong)*(int *)(param_2 + 0x118) * 2;
LAB_1441db98b:
          if ((int)plVar8[1] == DAT_14cbce9e8) {
            if (1 < DAT_14cbce9e8) {
              lVar22 = 0;
              do {
                uVar26 = *(ushort *)(*plVar8 + lVar22);
                uVar18 = *(ushort *)(DAT_14cbce9e0 + lVar22);
                if (uVar26 == uVar18) {
                  if (uVar26 == 0) break;
                }
                else {
                  if (0x7f < (uVar18 | uVar26)) {
                    iVar7 = (uint)uVar26 - (uint)uVar18;
                    goto LAB_1441dba02;
                  }
                  if ((&DAT_149e05da0)[uVar26] != (&DAT_149e05da0)[(uint)uVar18])
                  goto code_r0x0001441db9ff;
                }
                lVar22 = lVar22 + 2;
              } while( true );
            }
            goto LAB_1441dbc37;
          }
          if ((int)plVar8[1] + DAT_14cbce9e8 == 1) goto LAB_1441dbc37;
          goto LAB_1441db99f;
        }
LAB_1441db02a:
        uVar9 = 0;
        goto LAB_1441daf8b;
      }
      local_160 = param_3;
      lVar22 = FUN_1458b3986(param_1);
      if ((lVar22 != 0) && ((longlong)*(int *)(param_2 + 0x128) != 0)) {
        plVar8 = *(longlong **)(param_2 + 0x120);
        local_150 = plVar8 + (longlong)*(int *)(param_2 + 0x128) * 8;
        iVar7 = 0;
        iVar28 = 0;
        do {
          lVar22 = plVar8[7];
          local_158 = plVar8;
          if ((longlong)(int)lVar22 != 0) {
            lVar19 = plVar8[6];
            lVar27 = 0;
            do {
              local_d8 = (longlong *)0x0;
              uVar6 = *(uint *)(lVar19 + 0x18 + lVar27);
              pvVar2 = *(void **)(lVar19 + 0x10 + lVar27);
              uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
              if ((longlong)(int)uVar6 == 0) {
                uStack_d0 = (ulonglong)uVar6;
              }
              else {
                FUN_1446dd670(&local_d8,uVar6,0);
                memcpy(local_d8,pvVar2,(longlong)(int)uVar6 * 2);
                if (1 < (int)uStack_d0) {
                  FUN_1446f82e2(&local_108,(int)uStack_d0 + -1,local_d8,1);
                  lVar12 = param_1[0x30];
                  if (lVar12 == 0) {
                    local_108 = (undefined **)param_1[0x2e];
                    lVar12 = FUN_14050aea0(&local_108);
                    param_1[0x30] = lVar12;
                    if (lVar12 == 0) goto LAB_1441dc19a;
                  }
                  if ((*(longlong *)(param_1[2] + 0x38) == 0) ||
                     (lVar3 = *(longlong *)(*(longlong *)(param_1[2] + 0x38) + 0x30), lVar3 == 0)) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = *(undefined8 *)(lVar3 + 0x360);
                  }
                  plVar8 = *(longlong **)(lVar12 + 0x38);
                  if ((plVar8 == (longlong *)0x0) ||
                     (cVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar9), cVar4 != '\0')) {
                    bVar5 = FUN_140db3cd0(lVar12,uVar9);
                  }
                  else {
                    bVar5 = 0;
                  }
                  iVar28 = iVar28 + (uint)bVar5;
                }
              }
LAB_1441dc19a:
              if (local_d8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              lVar27 = lVar27 + 0x40;
              iVar7 = iVar7 + 1;
            } while ((longlong)(int)lVar22 * 0x40 != lVar27);
          }
          plVar8 = local_158 + 8;
        } while (plVar8 != local_150);
        if (iVar7 != 0) {
          fVar31 = (float)iVar28 / (float)iVar7;
          param_3 = local_160;
          goto LAB_1441daf83;
        }
      }
      fVar31 = 0.0;
      param_3 = local_160;
    }
  }
LAB_1441daf83:
  *param_3 = fVar31;
  uVar9 = 1;
LAB_1441daf8b:
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1441dc5a2 FUN_1441dc5a2 body=360 status=ok
// SIG undefined FUN_1441dc5a2(void)

undefined8 FUN_1441dc5a2(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined7 uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [36];
  undefined1 local_44 [12];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  undefined8 uVar5;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_1459b8f2e();
  lVar9 = plVar3[0x22];
  if (lVar9 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar9 = plVar3[0x22];
    if (lVar9 == 0) {
      uVar5 = 0;
      goto LAB_1441dc652;
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
  if (((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x360) == 0)) {
    bVar2 = 0;
    uVar6 = 0;
  }
  else {
    FUN_140fda471(local_44);
    FUN_1408226d0(local_44,&local_38,1);
    if ((longlong)*(int *)(lVar9 + 0xf0) != 0) {
      plVar3 = *(longlong **)(lVar9 + 0xe8);
      plVar4 = plVar3 + (longlong)*(int *)(lVar9 + 0xf0) * 2;
LAB_1441dc690:
      if ((int)plVar3[1] == local_30) {
        param_1 = 1;
        if (1 < local_30) {
          lVar9 = 0;
          do {
            uVar10 = *(ushort *)(*plVar3 + lVar9);
            uVar11 = (ulonglong)uVar10;
            uVar7 = *(ushort *)(local_38 + lVar9);
            if (uVar10 == uVar7) {
              if (uVar10 == 0) break;
            }
            else {
              if (0x7f < (uVar7 | uVar10)) goto LAB_1441dc6f6;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              uVar8 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar8]) goto LAB_1441dc6f6;
            }
            lVar9 = lVar9 + 2;
          } while( true );
        }
      }
      else {
        if ((int)plVar3[1] + local_30 != 1) goto LAB_1441dc6a2;
        param_1 = 1;
      }
      goto LAB_1441dc63f;
    }
    param_1 = 0;
    plVar4 = (longlong *)0x0;
LAB_1441dc63f:
    if (local_38 != 0) {
      plVar4 = (longlong *)FUN_1400020a8();
    }
    uVar6 = (undefined7)((ulonglong)plVar4 >> 8);
    bVar2 = 1;
  }
  uVar5 = CONCAT71(uVar6,bVar2 & (byte)param_1);
LAB_1441dc652:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
LAB_1441dc6f6:
  if (uVar10 == uVar7) goto LAB_1441dc63f;
LAB_1441dc6a2:
  plVar3 = plVar3 + 2;
  param_1 = 0;
  if (plVar3 == plVar4) goto LAB_1441dc63f;
  goto LAB_1441dc690;
}



// FUNCTION 1441dc70c FUN_1441dc70c body=151 status=ok
// SIG undefined FUN_1441dc70c(void)

float FUN_1441dc70c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if (DAT_14cb86df8 != 0) {
    plVar2 = (longlong *)FUN_144837462();
    if ((plVar2 != (longlong *)0x0) && ((char)plVar2[0xb] == '\x01')) {
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      lVar4 = FUN_14050caa6();
      if ((lVar4 != 0) &&
         (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) && (0 < (int)plVar2[0xd])))) {
        iVar1 = FUN_1441da6f2(param_1,param_2);
        fVar5 = (float)iVar1 / (float)(int)plVar2[0xd];
      }
    }
  }
  return fVar5;
}



// FUNCTION 1441dc7a4 FUN_1441dc7a4 body=1821 status=ok
// SIG undefined FUN_1441dc7a4(void)

int FUN_1441dc7a4(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  int local_1dc;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  longlong local_1a8 [2];
  longlong local_198;
  ulonglong uStack_190;
  undefined8 *local_188;
  longlong *local_180;
  void *local_178;
  longlong *plStack_170;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  longlong local_138;
  undefined4 local_130;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_178 = (void *)*param_2;
  plVar9 = (longlong *)param_2[1];
  plStack_170 = plVar9;
  if (plVar9 == (longlong *)0x0) {
    FUN_140b7090e(*(undefined8 *)(param_1 + 0x10),&local_188,&local_178);
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    FUN_140b7090e(*(undefined8 *)(param_1 + 0x10),&local_188);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  plVar9 = (longlong *)(param_1 + 0x10);
  if (local_188 == (undefined8 *)0x0) {
    cVar7 = FUN_1414e62ca(*plVar9);
    if (cVar7 != '\0') {
      *(undefined1 *)(*plVar9 + 0x1c8) = 1;
    }
    if (*(char *)(param_1 + 0x168) == '\x01') {
      puVar14 = *(undefined8 **)(param_1 + 0x38);
      cVar7 = (**(code **)*puVar14)(puVar14,*param_2);
      if (cVar7 != '\0') {
        local_178 = *(void **)(param_1 + 0x38);
        plStack_170 = *(longlong **)(param_1 + 0x40);
        if (plStack_170 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
          UNLOCK();
        }
        FUN_14589e2aa(local_168,param_1 + 0x48);
        local_50 = *(undefined4 *)(param_1 + 0x160);
        if (*(char *)(param_1 + 0x168) == '\x01') {
          FUN_148da6a00((undefined8 *)(param_1 + 0x38));
          *(undefined1 *)(param_1 + 0x168) = 0;
        }
        FUN_1441dcec2(param_1,local_168,1);
        FUN_148da6a00(&local_178);
        goto LAB_1441dcb01;
      }
    }
    lVar13 = *param_2;
    lVar11 = param_2[1];
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    plVar9 = *(longlong **)(param_1 + 0x20);
    *(longlong *)(param_1 + 0x18) = lVar13;
    *(longlong *)(param_1 + 0x20) = lVar11;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    FUN_148da6a44(param_1);
    iVar12 = 1;
  }
  else {
    if (*(int *)((longlong)local_188 + 0x14) == 0) {
      local_1d8 = (longlong *)(param_1 + 0x1b8);
      local_1c0 = param_3;
      FUN_148a8319e(*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      local_1c8 = param_1;
      if (*(int *)(param_1 + 0x1c4) != 0) {
        FUN_148dae846();
      }
      local_198 = 0;
      uStack_190 = 0;
      local_1dc = 2;
      local_1d0 = param_2;
      if ((longlong)(int)param_2[3] != 0) {
        puVar14 = (undefined8 *)param_2[2];
        lVar13 = (longlong)(int)param_2[3] * 0x30;
        local_1dc = 2;
        do {
          FUN_140b7090e(*plVar9,&local_178,puVar14);
          plVar5 = plStack_170;
          pvVar4 = local_178;
          if (plStack_170 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_170 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_170)();
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar5 + 0x10))();
              }
            }
          }
          if (pvVar4 == (void *)0x0) {
            local_178 = (void *)0x0;
            uVar3 = *(uint *)(puVar14 + 3);
            pvVar4 = (void *)puVar14[2];
            plStack_170 = (longlong *)CONCAT44(plStack_170._4_4_,uVar3);
            if ((longlong)(int)uVar3 == 0) {
              plStack_170 = (longlong *)(ulonglong)uVar3;
            }
            else {
              FUN_1446dd670(&local_178,uVar3,0);
              memcpy(local_178,pvVar4,(longlong)(int)uVar3 * 2);
            }
            FUN_140056680(local_1a8,L"Enabled");
            local_1e8 = 0;
            cVar7 = FUN_1416496fc(*plVar9,puVar14,&local_178,local_1a8);
            if (cVar7 != '\0') {
              local_1b8 = *local_188;
              plVar5 = (longlong *)local_188[1];
              local_1b0 = plVar5;
              if (plVar5 == (longlong *)0x0) {
                uVar8 = FUN_145ce2ae6(*plVar9,&local_1b8);
              }
              else {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
                uVar8 = FUN_145ce2ae6(*plVar9,&local_1b8);
                if (plVar5 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar5 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*plVar5)(plVar5);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar5 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                    }
                  }
                }
              }
              lVar11 = local_1c8;
              FUN_1462029ae(*(undefined8 *)(local_1c8 + 0x10),uVar8,*puVar14,&DAT_14cb97838);
              FUN_1412fabe8(&local_198,puVar14 + 4);
              iVar12 = *(int *)(lVar11 + 0x1c0);
              *(uint *)(lVar11 + 0x1c0) = iVar12 + 1U;
              if (*(uint *)(lVar11 + 0x1c4) < iVar12 + 1U) {
                FUN_148a84a88(local_1d8,iVar12);
              }
              FUN_148dae876((longlong)iVar12 * 0x30 + *local_1d8,puVar14);
              local_1dc = 1;
            }
            if (local_1a8[0] != 0) {
              FUN_1400020a8();
            }
            if (local_178 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          puVar14 = puVar14 + 6;
          lVar13 = lVar13 + -0x30;
        } while (lVar13 != 0);
      }
      param_3 = local_1c0;
      param_1 = local_1c8;
      iVar12 = local_1dc;
      if (0 < (longlong)*(int *)(local_1c8 + 0x1c0)) {
        local_158 = 0;
        local_150 = 0;
        local_178 = (void *)0x0;
        plStack_170 = (longlong *)0x0;
        local_14c = 0xffffffff00000080;
        local_144 = 0;
        local_138 = 0;
        local_130 = 0;
        lVar13 = *local_1d8;
        lVar11 = (longlong)*(int *)(local_1c8 + 0x1c0) * 0x30;
        do {
          FUN_1465803e2(&local_178,local_1a8,lVar13,0);
          lVar13 = lVar13 + 0x30;
          lVar11 = lVar11 + -0x30;
        } while (lVar11 != 0);
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
        if ((lVar13 == 0) || (lVar13 = *(longlong *)(lVar13 + 0x30), lVar13 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(lVar13 + 0x360);
        }
        FUN_148a7a965(uVar10,&local_178,(int)uStack_190 < *(int *)(param_1 + 0x1c0));
        local_130 = 0;
        if (local_138 != 0) {
          FUN_1400020a8();
        }
        FUN_140b6c31a(&local_178);
      }
      FUN_1447a1747(local_198,uStack_190 & 0xffffffff);
      param_2 = local_1d0;
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      bVar6 = true;
      goto LAB_1441dcb08;
    }
LAB_1441dcb01:
    iVar12 = 2;
  }
  bVar6 = false;
LAB_1441dcb08:
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_180 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar1 = (int *)((longlong)local_180 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_180 + 0x10))(local_180);
      }
    }
  }
  if (iVar12 == 1) {
    if ((*(longlong *)(param_1 + 0x170) != param_2[4]) ||
       (*(int *)(param_1 + 0x178) != (int)param_2[5])) {
      *(longlong *)(param_1 + 0x170) = param_2[4];
      *(int *)(param_1 + 0x178) = (int)param_2[5];
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
    FUN_140bee9ec(param_1 + 0x188,param_2 + 7);
    *(int *)(param_1 + 0x198) = (int)param_2[9];
    *(undefined1 *)(param_1 + 0x19c) = 1;
    FUN_14009d848(param_1 + 0x1a8,param_3);
  }
  else if (bVar6) {
    if ((*(longlong *)(param_1 + 0x170) != param_2[4]) ||
       (*(int *)(param_1 + 0x178) != (int)param_2[5])) {
      *(longlong *)(param_1 + 0x170) = param_2[4];
      *(int *)(param_1 + 0x178) = (int)param_2[5];
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
    FUN_140bee9ec(param_1 + 0x188,param_2 + 7);
    *(int *)(param_1 + 0x198) = (int)param_2[9];
    *(undefined1 *)(param_1 + 0x19c) = 1;
    FUN_1441dcf24(param_1);
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_14480f766(&DAT_14cbd0b78);
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  plVar9 = (longlong *)FUN_1458b3986(param_1);
  if (plVar9 != (longlong *)0x0) {
    uVar10 = (**(code **)(*plVar9 + 0xe8))(plVar9);
    if (*(longlong *)(param_1 + 0x308) != 0) {
      FUN_14480f766(uVar10);
    }
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  FUN_14062e8ba(param_1 + 0x310,0);
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar12;
}



// FUNCTION 1441dcec2 FUN_1441dcec2 body=98 status=ok
// SIG undefined FUN_1441dcec2(void)

void FUN_1441dcec2(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  cVar1 = FUN_1414e62ca(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    cVar1 = FUN_146586100(*(undefined8 *)(param_1 + 0x10));
    if (cVar1 != '\0') {
      FUN_148da6b4e(param_1,param_2);
      return;
    }
  }
  FUN_1441ddd70(param_1,param_2);
  if (param_3 != '\0') {
    return;
  }
  FUN_1441ddf08(param_1);
  return;
}



// FUNCTION 1441dcf24 FUN_1441dcf24 body=3659 status=ok
// SIG undefined FUN_1441dcf24(void)

void FUN_1441dcf24(longlong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int *piVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 *puVar17;
  code *pcVar18;
  code *pcVar19;
  longlong lVar20;
  ushort uVar21;
  undefined2 *puVar22;
  ushort uVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_178 [32];
  uint local_158;
  ulonglong **local_150;
  undefined4 local_148;
  ulonglong local_140;
  undefined2 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  undefined1 *local_118;
  code *local_110;
  code *local_100;
  int local_f8;
  longlong local_f0;
  code *local_e8;
  int local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  ulonglong *local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  longlong *plStack_b0;
  longlong local_a0;
  code *local_90;
  int local_88;
  undefined4 local_84;
  undefined8 local_80;
  int local_5c;
  undefined1 local_58 [8];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(char *)(param_1 + 0x19c) != '\x01') goto LAB_1441dcf50;
  *(undefined1 *)(param_1 + 0x19c) = 0;
  FUN_148da6d44();
  FUN_148da6e2c(&local_90);
  if ((longlong)*(int *)(param_1 + 400) != 0) {
    plVar15 = *(longlong **)(param_1 + 0x188);
    plVar10 = plVar15 + (longlong)*(int *)(param_1 + 400) * 2;
LAB_1441dd04f:
    if ((int)plVar15[1] == local_88) {
      bVar27 = true;
      if (1 < local_88) {
        lVar20 = 0;
        do {
          uVar23 = *(ushort *)(*plVar15 + lVar20);
          uVar24 = (ulonglong)uVar23;
          uVar21 = *(ushort *)(local_90 + lVar20);
          if (uVar23 == uVar21) {
            if (uVar23 == 0) break;
          }
          else {
            if (0x7f < (uVar21 | uVar23)) goto LAB_1441dd0c5;
            uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
            uVar26 = (ulonglong)uVar21;
            uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
            if ((&DAT_149e05da0)[uVar24] != (&DAT_149e05da0)[uVar26]) goto LAB_1441dd0c5;
          }
          lVar20 = lVar20 + 2;
        } while( true );
      }
    }
    else {
      if ((int)plVar15[1] + local_88 != 1) goto LAB_1441dd065;
      bVar27 = true;
    }
    goto LAB_1441dcfb0;
  }
  bVar27 = false;
LAB_1441dcfb0:
  if (local_90 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (bVar27) {
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar20 != 0) {
      lVar9 = FUN_1403ca142();
      if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
         ((longlong)*(int *)(lVar20 + 0x40) != 0)) {
        lVar9 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar20 + 0x38) + lVar9);
          if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
            if (DAT_14cbadd90 == 0) {
              local_90 = FUN_141030f22;
              local_110 = FUN_14081d0ea;
              local_118 = &LAB_1459f2e4c;
              local_128 = &LAB_148c39de3;
              local_130 = &LAB_1457a9eb2;
              local_138 = &DAT_149e063b2;
              local_140 = 0;
              local_148 = 0x10000004;
              local_150 = (ulonglong **)CONCAT44(local_150._4_4_,0x10);
              local_158 = 0x3de0;
              local_120 = &local_90;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
            if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
              uVar6 = FUN_145ce2e5c(lVar3);
              FUN_145dcf974(&local_90,uVar6);
              FUN_141529202(&local_c8);
              local_d8 = 0;
              uStack_d0 = 0;
              if ((longlong)(int)uStack_c0 == 0) goto LAB_1441dd64e;
              puVar1 = local_c8 + (int)uStack_c0;
              puVar25 = local_c8;
              do {
                uVar26 = uStack_d0;
                uVar24 = *puVar25;
                if (uVar24 != 0) {
                  if (local_88 != local_5c) {
                    uVar16 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
                    uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
                    puVar17 = local_50;
                    if (local_50 == (undefined1 *)0x0) {
                      puVar17 = local_58;
                    }
                    iVar7 = *(int *)(puVar17 +
                                    (ulonglong)(local_48 - 1U & (uVar16 >> 0x10 ^ uVar16)) * 4);
                    while (iVar7 != -1) {
                      pcVar18 = local_90 + (longlong)iVar7 * 0x18;
                      if (*(ulonglong *)pcVar18 == uVar24) goto LAB_1441dd1ec;
                      iVar7 = *(int *)(pcVar18 + 0x10);
                    }
                  }
                  pcVar18 = (code *)0x0;
LAB_1441dd1ec:
                  pcVar19 = pcVar18 + 8;
                  if (pcVar18 == (code *)0x0) {
                    pcVar19 = (code *)0x0;
                  }
                  if ((((*(char *)(uVar24 + 0x200) == '\x01') && (pcVar19 != (code *)0x0)) &&
                      (1 < *(int *)(uVar24 + 0x1f8))) && (*pcVar19 == (code)0x1)) {
                    lVar20 = (longlong)(int)uStack_d0;
                    uVar16 = (int)uStack_d0 + 1;
                    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar16);
                    if (uStack_d0._4_4_ < uVar16) {
                      FUN_14585e824(&local_d8,uVar26 & 0xffffffff);
                    }
                    *(ulonglong *)(local_d8 + lVar20 * 8) = *puVar25;
                  }
                }
                puVar25 = puVar25 + 1;
              } while (puVar25 != puVar1);
              if ((int)uStack_d0 == 0) {
LAB_1441dd64e:
                FUN_1441de03e(param_1);
              }
              else {
                iVar7 = rand();
                lVar20 = *(longlong *)(local_d8 + (longlong)(iVar7 % (int)uStack_d0) * 8);
                if (lVar20 == 0) goto LAB_1441dd64e;
                FUN_14000bbd8(&local_b8,lVar20 + 0x1f0,0);
                lVar20 = FUN_14060eaf6(&local_b8);
                if (lVar20 == 0) {
                  FUN_1441de03e(param_1);
                }
                else {
                  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
                  if ((((lVar9 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x30), lVar9 != 0)) &&
                      ((lVar9 = *(longlong *)(lVar9 + 0x360), lVar9 != 0 &&
                       ((*(longlong *)(lVar9 + 0x1f0) != 0 && (lVar9 = FUN_141060562(), lVar9 != 0))
                       )))) && (*(longlong *)(lVar9 + 0x30) != 0)) {
                    piVar14 = &DAT_14c9485f0;
                    if (*(int **)(lVar20 + 8) != (int *)0x0) {
                      piVar14 = *(int **)(lVar20 + 8);
                    }
                    if (((*piVar14 == 0) || (iVar7 = piVar14[1], iVar7 == 0)) ||
                       (*piVar14 == DAT_14c948000)) {
LAB_1441ddb3b:
                      local_e0 = DAT_14c948620;
                      local_e8 = DAT_14c948618;
                    }
                    else {
                      if ((iVar7 < 2) && (piVar14[9] < 1)) {
                        plVar15 = (longlong *)(piVar14 + 2);
                      }
                      else {
                        plVar15 = *(longlong **)(piVar14 + 6);
                      }
                      if (iVar7 < 1) goto LAB_1441ddb3b;
                      local_e0 = (int)plVar15[1];
                      local_e8 = (code *)*plVar15;
                    }
                    FUN_1441bbf2e(*(longlong *)(lVar9 + 0x30),&local_e8);
                  }
                }
                if (local_a0 != 0) {
                  FUN_1400020a8();
                }
              }
              if (local_d8 != 0) {
                FUN_1400020a8();
              }
              if (local_c8 != (ulonglong *)0x0) {
                FUN_1400020a8();
              }
              local_48 = 0;
              if (local_50 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              FUN_145dcf8e6(&local_90);
            }
            break;
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)*(int *)(lVar20 + 0x40) * 8 != lVar9);
      }
    }
    goto LAB_1441dcf50;
  }
  FUN_148da6994(&local_90);
  if ((longlong)*(int *)(param_1 + 400) != 0) {
    plVar15 = *(longlong **)(param_1 + 0x188);
    plVar10 = plVar15 + (longlong)*(int *)(param_1 + 400) * 2;
LAB_1441dd457:
    if ((int)plVar15[1] == local_88) {
      bVar27 = true;
      if (1 < local_88) {
        lVar20 = 0;
        do {
          uVar23 = *(ushort *)(*plVar15 + lVar20);
          uVar24 = (ulonglong)uVar23;
          uVar21 = *(ushort *)(local_90 + lVar20);
          if (uVar23 == uVar21) {
            if (uVar23 == 0) break;
          }
          else {
            if (0x7f < (uVar21 | uVar23)) goto LAB_1441dd4cc;
            uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
            uVar26 = (ulonglong)uVar21;
            uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
            if ((&DAT_149e05da0)[uVar24] != (&DAT_149e05da0)[uVar26]) goto LAB_1441dd4cc;
          }
          lVar20 = lVar20 + 2;
        } while( true );
      }
    }
    else {
      if ((int)plVar15[1] + local_88 != 1) goto LAB_1441dd46d;
      bVar27 = true;
    }
    goto LAB_1441dd280;
  }
  bVar27 = false;
LAB_1441dd280:
  if (local_90 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (bVar27) {
    pcVar18 = *(code **)(param_1 + 0x170);
    iVar7 = *(int *)(param_1 + 0x178);
    if (pcVar18 != (code *)0x0 || iVar7 != 0x6000) {
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined4 *)(param_1 + 0x178) = 0x6000;
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
    plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38);
    local_100 = pcVar18;
    local_f8 = iVar7;
    if (plVar15 != (longlong *)0x0) {
      lVar20 = FUN_1403ca142();
      if (((*(int *)(lVar20 + 0x38) <= *(int *)(plVar15[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8)
           == lVar20 + 0x30)) && ((longlong)(int)plVar15[8] != 0)) {
        lVar20 = 0;
        do {
          if ((*(longlong *)(plVar15[7] + lVar20) != 0) &&
             (lVar9 = *(longlong *)(*(longlong *)(plVar15[7] + lVar20) + 0x30), lVar9 != 0)) {
            if (DAT_14cbadd90 == 0) {
              local_120 = &local_b8;
              local_b8 = FUN_141030f22;
              local_110 = FUN_14081d0ea;
              local_118 = &LAB_1459f2e4c;
              local_128 = &LAB_148c39de3;
              local_130 = &LAB_1457a9eb2;
              local_138 = &DAT_149e063b2;
              local_140 = 0;
              local_148 = 0x10000004;
              local_150 = (ulonglong **)CONCAT44(local_150._4_4_,0x10);
              local_158 = 0x3de0;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
            if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                  (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
               (local_b8 = pcVar18, local_f0 = FUN_14050aea0(), local_f0 != 0)) {
              bVar4 = (**(code **)(*plVar15 + 0x498))(plVar15);
              if (bVar4 < 6) {
                local_b8 = (code *)0x0;
                plStack_b0 = (longlong *)0x0;
                local_80 = 0;
                local_90 = pcVar18;
                local_88 = iVar7;
                FUN_14413e254(plVar15,&local_90,&local_b8,0);
                pcVar18 = local_b8;
LAB_1441dd7c8:
                if (pcVar18 != (code *)0x0) {
                  FUN_1400020a8();
                }
                goto LAB_1441dcf50;
              }
              if (plVar15[6] == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = *(undefined8 *)(plVar15[6] + 0x360);
              }
              FUN_1410d53f0(&local_b8,uVar13);
              if (((local_b8 == (code *)0x0) || (plStack_b0 == (longlong *)0x0)) ||
                 ((int)plStack_b0[1] < 1)) goto LAB_1441dd997;
              iVar7 = (int)plStack_b0[1];
              goto LAB_1441dd911;
            }
            break;
          }
          lVar20 = lVar20 + 8;
        } while ((longlong)(int)plVar15[8] * 8 != lVar20);
      }
    }
LAB_1441dd595:
    FUN_1441de03e(param_1);
  }
  else {
    if (*(longlong *)(param_1 + 0x180) == 0) {
      local_90 = *(code **)(param_1 + 0x170);
      lVar20 = FUN_14050aea0(&local_90);
      *(longlong *)(param_1 + 0x180) = lVar20;
      if (lVar20 == 0) {
        if ((longlong)*(int *)(param_1 + 400) != 0) {
          puVar12 = *(undefined8 **)(param_1 + 0x188);
          puVar11 = puVar12 + (longlong)*(int *)(param_1 + 400) * 2;
LAB_1441dd50c:
          puVar22 = &DAT_149dfb77a;
          if (*(int *)(puVar12 + 1) != 0) {
            puVar22 = (undefined2 *)*puVar12;
          }
          lVar20 = 0;
          do {
            uVar23 = *(ushort *)((longlong)puVar22 + lVar20);
            uVar24 = (ulonglong)uVar23;
            uVar21 = *(ushort *)((longlong)L"WeeklyTraitMission" + lVar20);
            if (uVar23 == uVar21) {
              if (uVar23 == 0) goto LAB_1441dd5a2;
            }
            else {
              if (0x7f < (uVar21 | uVar23)) goto LAB_1441dd553;
              uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
              uVar26 = (ulonglong)uVar21;
              uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
              if ((&DAT_149e05da0)[uVar24] != (&DAT_149e05da0)[uVar26]) goto LAB_1441dd553;
            }
            lVar20 = lVar20 + 2;
          } while( true );
        }
        goto LAB_1441dd595;
      }
    }
    pcVar18 = *(code **)(param_1 + 0x170);
    iVar7 = *(int *)(param_1 + 0x178);
    if (pcVar18 != (code *)0x0 || iVar7 != 0x6000) {
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined4 *)(param_1 + 0x178) = 0x6000;
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
    local_90 = pcVar18;
    lVar20 = FUN_14050aea0();
    if ((lVar20 != 0) && (lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38), lVar20 != 0)
       ) {
      lVar9 = FUN_1403ca142();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
        local_80 = 0;
        local_90 = pcVar18;
        local_88 = iVar7;
        FUN_148d320f8(lVar20,&local_90,0);
      }
    }
  }
  goto LAB_1441dcf50;
LAB_1441dd0c5:
  if (uVar23 == uVar21) goto LAB_1441dcfb0;
LAB_1441dd065:
  plVar15 = plVar15 + 2;
  bVar27 = false;
  if (plVar15 == plVar10) goto LAB_1441dcfb0;
  goto LAB_1441dd04f;
LAB_1441dd4cc:
  if (uVar23 == uVar21) goto LAB_1441dd280;
LAB_1441dd46d:
  plVar15 = plVar15 + 2;
  bVar27 = false;
  if (plVar15 == plVar10) goto LAB_1441dd280;
  goto LAB_1441dd457;
LAB_1441dd553:
  if (uVar23 == uVar21) {
LAB_1441dd5a2:
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    if (lVar20 == 0) goto LAB_1441dcf50;
    lVar9 = FUN_1403ca142();
    if (((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
          ) != lVar9 + 0x30)) || ((longlong)*(int *)(lVar20 + 0x40) == 0)) goto LAB_1441dcf50;
    lVar9 = 0;
    goto LAB_1441dd5f2;
  }
  puVar12 = puVar12 + 2;
  if (puVar12 == puVar11) goto LAB_1441dd595;
  goto LAB_1441dd50c;
  while (lVar9 = lVar9 + 8, (longlong)*(int *)(lVar20 + 0x40) * 8 != lVar9) {
LAB_1441dd5f2:
    lVar3 = *(longlong *)(*(longlong *)(lVar20 + 0x38) + lVar9);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
      if (DAT_14cbadd90 == 0) {
        local_90 = FUN_141030f22;
        local_110 = FUN_14081d0ea;
        local_118 = &LAB_1459f2e4c;
        local_128 = &LAB_148c39de3;
        local_130 = &LAB_1457a9eb2;
        local_138 = &DAT_149e063b2;
        local_140 = 0;
        local_148 = 0x10000004;
        local_150 = (ulonglong **)CONCAT44(local_150._4_4_,0x10);
        local_158 = 0x3de0;
        local_120 = &local_90;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        lVar20 = FUN_140d1d7e4();
        puVar12 = (undefined8 *)FUN_140d19a6c(lVar20 + 0x90);
        local_90 = (code *)0x0;
        iVar7 = *(int *)(puVar12 + 1);
        uVar13 = *puVar12;
        local_88 = iVar7;
        if (iVar7 == 0) {
          local_84 = 0;
          pcVar18 = local_90;
          goto LAB_1441dd7c8;
        }
        FUN_148c13408(&local_90,iVar7,0);
        FUN_148c1347b(local_90,uVar13,iVar7);
        iVar7 = local_88;
        pcVar18 = local_90;
        if (local_88 < 1) goto LAB_1441dd7c8;
        uVar16 = local_88 - 1;
        uVar8 = rand();
        uVar8 = (uint)((float)iVar7 * ((float)(uVar8 & 0x7fff) / 32767.0));
        if ((int)uVar8 < (int)uVar16) {
          uVar16 = uVar8;
        }
        pcVar18 = local_90;
        if (((int)uVar8 < 0) || (local_88 <= (int)uVar16)) goto LAB_1441dd7c8;
        pcVar19 = local_90 + (ulonglong)uVar16 * 0x18;
        lVar20 = *(longlong *)(pcVar19 + 8);
        if (lVar20 == 0) {
          uVar13 = FUN_141417e7c();
          lVar20 = FUN_14477b664(uVar13);
          *(longlong *)(pcVar19 + 8) = lVar20;
        }
        lVar9 = *(longlong *)(pcVar19 + 0x10);
        if (lVar9 == 0) {
          pcVar18 = local_90;
          if ((lVar20 == 0) || (*(longlong *)pcVar19 == 0)) goto LAB_1441dd7c8;
          plVar15 = *(longlong **)(lVar20 + 0xb8);
          if ((plVar15 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar5 == '\0')) {
            *(longlong *)(pcVar19 + 0x10) = 0;
            pcVar18 = local_90;
            goto LAB_1441dd7c8;
          }
          uVar13 = (**(code **)(*plVar15 + 0x110))(plVar15);
          lVar9 = FUN_144aff482(uVar13,pcVar19);
          *(longlong *)(pcVar19 + 0x10) = lVar9;
          pcVar18 = local_90;
          if (lVar9 == 0) goto LAB_1441dd7c8;
        }
        piVar14 = &DAT_14c9485f0;
        if (*(int **)(lVar9 + 8) != (int *)0x0) {
          piVar14 = *(int **)(lVar9 + 8);
        }
        local_b8 = DAT_14c948618;
        iVar7 = DAT_14c948620;
        if (((*piVar14 != 0) && (iVar2 = piVar14[1], iVar2 != 0)) && (*piVar14 != DAT_14c948000)) {
          if ((iVar2 < 2) && (piVar14[9] < 1)) {
            plVar15 = (longlong *)(piVar14 + 2);
          }
          else {
            plVar15 = *(longlong **)(piVar14 + 6);
          }
          if (0 < iVar2) {
            local_b8 = (code *)*plVar15;
            iVar7 = (int)plVar15[1];
          }
        }
        plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,iVar7);
        FUN_148c392c0(lVar3,&local_b8);
        pcVar18 = local_90;
        goto LAB_1441dd7c8;
      }
      break;
    }
  }
  goto LAB_1441dcf50;
  while( true ) {
    LOCK();
    iVar2 = (int)plStack_b0[1];
    bVar27 = iVar7 == iVar2;
    if (bVar27) {
      *(int *)(plStack_b0 + 1) = iVar7 + 1;
      iVar2 = iVar7;
    }
    iVar7 = iVar2;
    UNLOCK();
    plVar15 = plStack_b0;
    if (bVar27) break;
LAB_1441dd911:
    if (iVar7 == 0) {
      plVar15 = (longlong *)0x0;
      break;
    }
  }
  pcVar18 = (code *)0x0;
  if (plVar15 != (longlong *)0x0) {
    pcVar18 = local_b8;
  }
  local_150 = &local_c8;
  local_c8 = (ulonglong *)0x0;
  uStack_c0 = 0;
  local_140 = local_140 & 0xffffffffffffff00;
  local_158 = local_158 & 0xffffff00;
  local_148 = 0xbf800000;
  FUN_144230d0e(pcVar18,&local_100,lVar9,2);
  if (local_c8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar15 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar14 = (int *)((longlong)plVar15 + 0xc);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
LAB_1441dd997:
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    piVar14 = (int *)((longlong)plStack_b0 + 0xc);
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (*piVar14 == 0) {
      (**(code **)(*plStack_b0 + 0x10))();
    }
  }
LAB_1441dcf50:
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ddd70 FUN_1441ddd70 body=406 status=ok
// SIG undefined FUN_1441ddd70(void)

void FUN_1441ddd70(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446f470e(&local_40,L"SHIFT",1);
  local_50 = local_40;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      FUN_148da6c8a(param_1,&local_50);
      plVar4 = local_48;
      if (local_50 != 0) {
        local_60 = local_50;
        local_58 = local_48;
        if (local_48 == (longlong *)0x0) {
          uVar3 = FUN_145ce2ae6(*(undefined8 *)(param_1 + 0x10),&local_60);
        }
        else {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
          uVar3 = FUN_145ce2ae6(*(undefined8 *)(param_1 + 0x10));
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
        }
        local_70 = local_50;
        local_68 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
        }
        local_78 = param_2;
        (**(code **)(*local_38 + 0x348))(local_38,1,uVar3,&local_70);
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_48 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
  }
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ddf08 FUN_1441ddf08 body=308 status=ok
// SIG undefined FUN_1441ddf08(void)

void FUN_1441ddf08(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x1b0) != 0) {
    plVar3 = (longlong *)(param_1 + 0x1a8);
    if (((longlong *)*plVar3 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*(longlong *)*plVar3 + 0x30))(), cVar2 != '\0')) {
      local_28 = (longlong *)0x0;
      local_20 = 0;
      FUN_14009d848(&local_28,plVar3);
      if ((*(int *)(param_1 + 0x1b0) != 0) &&
         (puVar1 = (undefined8 *)*plVar3, puVar1 != (undefined8 *)0x0)) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(plVar3,0,0,0x10);
        *(undefined4 *)(param_1 + 0x1b0) = 0;
      }
      plVar3 = local_28;
      if (local_20 == 0) {
        plVar3 = (longlong *)0x0;
      }
      (**(code **)(*plVar3 + 0x58))();
      if (local_20 != 0) {
        if (local_28 == (longlong *)0x0) goto LAB_1441ddff5;
        (**(code **)*local_28)(local_28,0);
        FUN_1446efa72(&local_28,0,0,0x10);
        local_20 = 0;
      }
      if (local_28 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1441ddff5:
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FUN_14480f766(&DAT_14c9647a0);
    *(undefined8 *)(param_1 + 0x360) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441de03e FUN_1441de03e body=1513 status=ok
// SIG undefined FUN_1441de03e(void)

void FUN_1441de03e(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  undefined1 auStack_258 [32];
  uint local_238;
  longlong *local_230;
  undefined4 local_228;
  ulonglong local_220;
  undefined2 *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  code **local_200;
  undefined1 *local_1f8;
  code *local_1f0;
  longlong local_1e8 [3];
  longlong local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  code *local_198;
  undefined4 local_190;
  longlong local_188;
  longlong local_178;
  undefined4 local_170;
  undefined1 local_168 [296];
  undefined8 local_40;
  int local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_258;
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38);
  if (plVar9 == (longlong *)0x0) goto LAB_1441de08c;
  lVar5 = FUN_1403ca142();
  iVar4 = *(int *)(lVar5 + 0x38);
  if (((*(int *)(plVar9[2] + 0x38) < iVar4) ||
      (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)iVar4 * 8) != lVar5 + 0x30)) ||
     (lVar5 = FUN_145725aea(plVar9,CONCAT71((int7)(int3)((uint)iVar4 >> 8),1)), lVar5 == 0))
  goto LAB_1441de08c;
  if (DAT_14cbadd90 == 0) {
    local_200 = &local_198;
    local_198 = FUN_141030f22;
    local_1f0 = FUN_14081d0ea;
    local_1f8 = &LAB_1459f2e4c;
    local_208 = &LAB_148c39de3;
    local_210 = &LAB_1457a9eb2;
    local_218 = &DAT_149e063b2;
    local_220 = 0;
    local_228 = 0x10000004;
    local_230 = (longlong *)CONCAT44(local_230._4_4_,0x10);
    local_238 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1441de08c;
  if (*(int *)(param_1 + 0x198) == -1) {
    bVar3 = (**(code **)(*plVar9 + 0x498))(plVar9);
    if (bVar3 < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_258);
    }
    goto LAB_1441de08c;
  }
  uVar6 = FUN_141546c72();
  FUN_148a99c30(uVar6,&local_198,*(undefined4 *)(param_1 + 0x198));
  if (local_30 == '\0') {
LAB_1441de356:
    bVar3 = (**(code **)(*plVar9 + 0x498))(plVar9);
    if (bVar3 < 6) {
LAB_1441de4c7:
      FUN_146022004(plVar9,0);
    }
  }
  else {
    iVar4 = local_38 + -1;
    if (local_38 == 0) {
      iVar4 = 0;
    }
    FUN_1446f82e2(&local_1b0,iVar4,local_40,1);
    local_1a8 = 0x6000;
    local_1a0 = 0;
    if (local_1b0 == 0) goto LAB_1441de356;
    local_1d0 = local_1b0;
    local_1a0 = FUN_14050aea0(&local_1d0);
    FUN_14410b2c4(local_1a0,&local_1b8);
    local_1d0 = *(longlong *)(lVar5 + 0x23d8);
    uVar6 = FUN_14050aea0(&local_1d0);
    FUN_14410b2c4(uVar6,&local_1c0);
    bVar3 = (**(code **)(*plVar9 + 0x498))(plVar9);
    if (bVar3 < 6) {
      if (local_1c0 != 0 || local_1b8 != 0) {
        if (local_1c0 != 0 && local_1b8 != 0) {
          piVar11 = *(int **)(local_1b8 + 8);
          if (piVar11 == (int *)0x0) {
            piVar11 = &DAT_14c9485f0;
          }
          piVar10 = (int *)&DAT_14c948618;
          if (*piVar11 != 0) {
            iVar4 = piVar11[1];
            piVar10 = (int *)&DAT_14c948618;
            if ((iVar4 != 0) && (piVar10 = (int *)&DAT_14c948618, *piVar11 != DAT_14c948000)) {
              if ((iVar4 < 2) && (piVar11[9] < 1)) {
                piVar11 = piVar11 + 2;
              }
              else {
                piVar11 = *(int **)(piVar11 + 6);
              }
              piVar10 = (int *)&DAT_14c948618;
              if (0 < iVar4) {
                piVar10 = piVar11;
              }
            }
          }
          piVar11 = &DAT_14c9485f0;
          if (*(int **)(local_1c0 + 8) != (int *)0x0) {
            piVar11 = *(int **)(local_1c0 + 8);
          }
          piVar7 = (int *)&DAT_14c948618;
          if (((*piVar11 != 0) && (iVar4 = piVar11[1], iVar4 != 0)) && (*piVar11 != DAT_14c948000))
          {
            if ((iVar4 < 2) && (piVar11[9] < 1)) {
              piVar11 = piVar11 + 2;
            }
            else {
              piVar11 = *(int **)(piVar11 + 6);
            }
            if (0 < iVar4) {
              piVar7 = piVar11;
            }
          }
          if ((*piVar10 == *piVar7) && (piVar10[2] == piVar7[2])) goto LAB_1441de4c7;
        }
        FUN_141166838(lVar5,&local_1b0,0);
      }
      goto LAB_1441de4c7;
    }
    if (local_1c0 != 0 || local_1b8 != 0) {
      if (local_1c0 != 0 && local_1b8 != 0) {
        piVar11 = *(int **)(local_1b8 + 8);
        if (piVar11 == (int *)0x0) {
          piVar11 = &DAT_14c9485f0;
        }
        piVar10 = (int *)&DAT_14c948618;
        if (*piVar11 != 0) {
          iVar4 = piVar11[1];
          piVar10 = (int *)&DAT_14c948618;
          if ((iVar4 != 0) && (piVar10 = (int *)&DAT_14c948618, *piVar11 != DAT_14c948000)) {
            if ((iVar4 < 2) && (piVar11[9] < 1)) {
              piVar11 = piVar11 + 2;
            }
            else {
              piVar11 = *(int **)(piVar11 + 6);
            }
            piVar10 = (int *)&DAT_14c948618;
            if (0 < iVar4) {
              piVar10 = piVar11;
            }
          }
        }
        piVar11 = &DAT_14c9485f0;
        if (*(int **)(local_1c0 + 8) != (int *)0x0) {
          piVar11 = *(int **)(local_1c0 + 8);
        }
        piVar7 = (int *)&DAT_14c948618;
        if (((*piVar11 != 0) && (iVar4 = piVar11[1], iVar4 != 0)) && (*piVar11 != DAT_14c948000)) {
          if ((iVar4 < 2) && (piVar11[9] < 1)) {
            piVar11 = piVar11 + 2;
          }
          else {
            piVar11 = *(int **)(piVar11 + 6);
          }
          if (0 < iVar4) {
            piVar7 = piVar11;
          }
        }
        if ((*piVar10 == *piVar7) && (piVar10[2] == piVar7[2])) goto LAB_1441de36a;
      }
      if (plVar9[6] == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(plVar9[6] + 0x360);
      }
      FUN_1410d53f0(&local_1d0,uVar6);
      if (((local_1d0 != 0) && (local_1c8 != (longlong *)0x0)) && (0 < (int)local_1c8[1])) {
        iVar4 = (int)local_1c8[1];
        do {
          if (iVar4 == 0) {
            plVar9 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar2 = (int)local_1c8[1];
          bVar12 = iVar4 == iVar2;
          if (bVar12) {
            *(int *)(local_1c8 + 1) = iVar4 + 1;
            iVar2 = iVar4;
          }
          iVar4 = iVar2;
          UNLOCK();
          plVar9 = local_1c8;
        } while (!bVar12);
        lVar8 = 0;
        if (plVar9 != (longlong *)0x0) {
          lVar8 = local_1d0;
        }
        local_230 = local_1e8;
        local_1e8[0] = 0;
        local_1e8[1] = 0;
        local_220 = local_220 & 0xffffffffffffff00;
        local_238 = local_238 & 0xffffff00;
        local_228 = 0xbf800000;
        FUN_144230d0e(lVar8,&local_1b0,lVar5,2);
        if (local_1e8[0] != 0) {
          FUN_1400020a8();
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar9 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar11 = (int *)((longlong)plVar9 + 0xc);
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (*piVar11 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      if (local_1c8 != (longlong *)0x0) {
        LOCK();
        piVar11 = (int *)((longlong)local_1c8 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*local_1c8 + 0x10))();
        }
      }
    }
  }
LAB_1441de36a:
  if (local_30 == '\x01') {
    FUN_141175be2(local_168);
    FUN_141175b88(local_178,local_170);
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_188 != 0) {
      FUN_1400020a8();
    }
    FUN_141175b4a(local_198,local_190);
    if (local_198 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1441de08c:
  if ((local_28 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441de63e FUN_1441de63e body=97 status=ok
// SIG undefined FUN_1441de63e(void)

void FUN_1441de63e(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x2f8) = iVar1;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
  if ((((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) &&
      (lVar2 = *(longlong *)(lVar2 + 0x360), lVar2 != 0)) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_141060562();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
      FUN_143f25ec2();
      return;
    }
  }
  return;
}



// FUNCTION 1441de7cf FUN_1441de7cf body=47 status=ok
// SIG undefined FUN_1441de7cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441de7cf(void)

{
  _DAT_14cbcebc8 = 0;
  if (DAT_14cbcebc0 != 0) {
    FUN_1400020a8();
  }
  FUN_145cbd7c2(&DAT_14cbceb80);
  return;
}



// FUNCTION 1441de7fe FUN_1441de7fe body=47 status=ok
// SIG undefined FUN_1441de7fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441de7fe(void)

{
  _DAT_14cbcec20 = 0;
  if (DAT_14cbcec18 != 0) {
    FUN_1400020a8();
  }
  FUN_145cbd7c2(&DAT_14cbcebd8);
  return;
}



// FUNCTION 1441de82d FUN_1441de82d body=47 status=ok
// SIG undefined FUN_1441de82d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441de82d(void)

{
  _DAT_14cbcec78 = 0;
  if (DAT_14cbcec70 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&DAT_14cbcec30);
  return;
}



// FUNCTION 1441de86e FUN_1441de86e body=160 status=ok
// SIG undefined FUN_1441de86e(void)

void FUN_1441de86e(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
    *(undefined1 *)(param_1 + 0x38) = 0;
    local_28 = (undefined8 *)0x0;
    uStack_20 = 0;
    FUN_148da7364(*(longlong *)(param_1 + 0x30),&local_28);
    if ((int)uStack_20 != 0) {
      if (local_28 == (undefined8 *)0x0) goto LAB_1441de894;
      (**(code **)*local_28)(local_28,0);
      FUN_1446efa72(&local_28,0,0,0x10);
      uStack_20 = uStack_20 & 0xffffffff00000000;
    }
    if (local_28 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1441de894:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441de910 FUN_1441de910 body=344 status=ok
// SIG undefined FUN_1441de910(void)

void FUN_1441de910(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_6c;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined4 *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_6c = param_2;
  bVar3 = FUN_145d27e30();
  if (bVar3 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
  puVar4 = (undefined4 *)FUN_148db0f10(param_1 + 0xa8,param_2,&local_6c);
  *(undefined1 *)(puVar4 + 2) = param_3;
  *puVar4 = 0x3fc00000;
  if (((*(longlong *)(puVar4 + 4) == 0) || (*(longlong *)(puVar4 + 6) == 0)) ||
     (*(int *)(*(longlong *)(puVar4 + 6) + 8) < 1)) {
    puVar4[1] = local_6c;
    uVar5 = FUN_1401cb356();
    local_88 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b98ffc0;
    local_68[0] = FUN_1441e2d94;
    local_40 = param_1;
    local_38 = puVar4;
    FUN_1401cbba4(uVar5,&local_80,L"ShiftProfileVisibilityChange",0);
    *(undefined8 *)(puVar4 + 4) = local_80;
    local_80 = 0;
    plVar2 = *(longlong **)(puVar4 + 6);
    *(longlong **)(puVar4 + 6) = local_78;
    local_78 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_78 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar6 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar6 = &local_48;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441dea84 FUN_1441dea84 body=210 status=ok
// SIG undefined FUN_1441dea84(void)

void FUN_1441dea84(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_3 == '\0') {
    lVar2 = FUN_14111b7b0(param_1);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
      lVar2 = FUN_14583d3ae();
      if (lVar2 != 0) {
        local_48[0] = 0;
        local_48[1] = 0;
        FUN_1446f470e(local_50,L"profile_visibility_change_failed",1);
        FUN_148d8ee5a(lVar2,local_50,local_48);
        if (local_48[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  uVar1 = FUN_145d27e30(param_1,param_2);
  FUN_148db0e50(param_1 + 0x10,param_2,param_3,uVar1);
  if ((local_48[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441deb57 FUN_1441deb57 body=41 status=ok
// SIG undefined FUN_1441deb57(void)

void FUN_1441deb57(void)

{
  DAT_14cbcecf0 = 0;
  if (DAT_14cbcece8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69600();
  return;
}



// FUNCTION 1441deb98 FUN_1441deb98 body=74 status=ok
// SIG undefined FUN_1441deb98(void)

void FUN_1441deb98(undefined8 param_1,undefined4 param_2)

{
  if (*(longlong *)(DAT_14cb98ab0 + 0x28) == 0) {
    return;
  }
  FUN_141644926();
  if (*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) {
    FUN_14571a702();
  }
  FUN_148da79fa(param_1,param_2);
  return;
}



// FUNCTION 1441debe2 FUN_1441debe2 body=685 status=ok
// SIG undefined FUN_1441debe2(void)

void FUN_1441debe2(uint *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *param_2;
  if ((((((*(longlong *)(lVar5 + 0x30) == 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
        (*(char *)(lVar5 + 0x51) == '\0')) &&
       ((param_1[1] != 0 && (uVar3 = *param_1, -1 < (int)uVar3)))) &&
      (((int)uVar3 < DAT_14c9647dc &&
       ((plVar10 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == param_1[1])))))) &&
     (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
      ((lVar5 = *plVar10, lVar5 != 0 && (iVar4 = *(int *)(lVar5 + 0x40), (longlong)iVar4 != 0))))))
  {
    lVar5 = *(longlong *)(lVar5 + 0x38);
    lVar12 = 0;
    do {
      lVar9 = *(longlong *)(lVar5 + lVar12);
      plVar10 = (longlong *)FUN_140773fe2();
      if (plVar10 != (longlong *)0x0) {
        uVar8 = FUN_148da9c22(param_1);
        lVar9 = (**(code **)(*plVar10 + 0x2d0))(plVar10,*(undefined4 *)(lVar9 + 0xe0),uVar8);
        if (lVar9 != 0) {
          *(undefined1 *)(*param_2 + 0x51) = 1;
          lVar5 = *param_2;
          plVar10 = (longlong *)param_2[1];
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          local_50 = (undefined8 *)0x0;
          local_48 = 0;
          FUN_1446efa72(&local_50,0,4,0x10);
          local_48 = 4;
          lVar12 = *param_2;
          plVar6 = (longlong *)param_2[1];
          if (plVar6 == (longlong *)0x0) {
            *local_50 = &PTR_LAB_149e063e0;
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
            local_50[2] = lVar11;
            *local_50 = &PTR_FUN_14b990cf0;
            local_50[3] = lVar12;
            local_50[4] = 0;
          }
          else {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            *local_50 = &PTR_LAB_149e063e0;
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
            local_50[2] = lVar11;
            *local_50 = &PTR_FUN_14b990cf0;
            local_50[3] = lVar12;
            local_50[4] = plVar6;
            LOCK();
            *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
            UNLOCK();
          }
          local_50[5] = param_1;
          local_50[6] = lVar5;
          local_50[7] = plVar10;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
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
          (**(code **)(**(longlong **)(*param_2 + 8) + 0x30))(*(longlong **)(*param_2 + 8),local_60)
          ;
          FUN_148a62dce(lVar9,local_60,&local_50);
          if (local_60[0] != 0) {
            FUN_1400020a8();
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar10 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
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
          break;
        }
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar4 * 8 != lVar12);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441def2a FUN_1441def2a body=222 status=ok
// SIG undefined FUN_1441def2a(void)

void FUN_1441def2a(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  cVar3 = FUN_145e34e2c(param_2 + 0x28,DAT_14cb97848);
  if (cVar3 != '\0') {
    if ((int)uStack_20 == DAT_14cb97840) {
      bVar8 = true;
      if (1 < (int)uStack_20) {
        lVar6 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_28 + lVar6);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)(DAT_14cb97838 + lVar6);
          uVar7 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1441defa0;
            }
            iVar5 = uVar4 - uVar7;
            goto LAB_1441defd2;
          }
          if (uVar1 == 0) break;
LAB_1441defa0:
          lVar6 = lVar6 + 2;
        }
        iVar5 = 0;
LAB_1441defd2:
        bVar8 = iVar5 == 0;
      }
    }
    else {
      bVar8 = DAT_14cb97840 + (int)uStack_20 == 1;
    }
    *(bool *)(param_1 + 0x880) = bVar8;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441df00a FUN_1441df00a body=507 status=ok
// SIG undefined FUN_1441df00a(void)

ulonglong FUN_1441df00a(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  undefined8 *puVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  longlong local_150;
  undefined1 local_148 [280];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_178 = param_5;
  cVar6 = FUN_143f396ca();
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (cVar6 != '\0') goto LAB_1441df055;
  puVar10 = *(undefined8 **)(param_1 + 0x778);
  if (puVar10 == (undefined8 *)0x0) {
    uVar9 = 0;
    goto LAB_1441df055;
  }
  local_168 = 0;
  uStack_160 = 0;
  FUN_145e34e2c(param_5 + 0x28,DAT_14cb97848,&local_168);
  if ((int)uStack_160 == DAT_14cb97840) {
    if (1 < (int)uStack_160) {
      lVar8 = 0;
      while( true ) {
        uVar11 = *(ushort *)(local_168 + lVar8);
        uVar9 = (ulonglong)uVar11;
        uVar12 = *(ushort *)(DAT_14cb97838 + lVar8);
        if (uVar11 != uVar12) break;
        if (uVar11 == 0) goto LAB_1441df10a;
LAB_1441df0de:
        lVar8 = lVar8 + 2;
      }
      if ((uVar12 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar13 = (ulonglong)uVar12;
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar13]) goto LAB_1441df0de;
      }
      if (uVar11 != uVar12) goto LAB_1441df174;
    }
LAB_1441df10a:
    puVar4 = (undefined8 *)puVar10[3];
    if ((puVar4 == (undefined8 *)0x0) ||
       (cVar6 = (**(code **)*puVar4)(puVar4,param_3), cVar6 == '\0')) {
      local_150 = *(longlong *)(param_3 + 0x10);
      if (local_150 == 0) {
LAB_1441df181:
        local_150 = 0;
      }
      else {
        iVar7 = *(int *)(local_150 + 8);
        do {
          if (iVar7 == 0) goto LAB_1441df181;
          LOCK();
          iVar3 = *(int *)(local_150 + 8);
          bVar14 = iVar7 == iVar3;
          if (bVar14) {
            *(int *)(local_150 + 8) = iVar7 + 1;
            iVar3 = iVar7;
          }
          iVar7 = iVar3;
          UNLOCK();
        } while (!bVar14);
      }
      local_158 = 0;
      if (local_150 != 0) {
        local_158 = *(undefined8 *)(param_3 + 8);
      }
      FUN_14589e2aa(local_148,param_5);
      local_30 = *(undefined4 *)(param_5 + 0x118);
      puVar10 = puVar10 + 7;
      if (&local_158 != puVar10) {
        FUN_148dae934(puVar10,&local_158);
      }
      FUN_148da6a00(&local_158);
    }
    else {
      puVar10[3] = 0;
      plVar5 = (longlong *)puVar10[4];
      if (plVar5 != (longlong *)0x0) {
        puVar10[4] = 0;
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
      FUN_148da6758(puVar10);
      FUN_1441dcec2(puVar10,param_5,0);
    }
    uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
  }
  else {
    if (DAT_14cb97840 + (int)uStack_160 == 1) goto LAB_1441df10a;
LAB_1441df174:
    uVar9 = 0;
  }
  if (local_168 != 0) {
    FUN_1400020a8();
  }
LAB_1441df055:
  if ((local_28 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1441df206 FUN_1441df206 body=367 status=ok
// SIG undefined FUN_1441df206(void)

void FUN_1441df206(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  longlong local_60 [2];
  longlong local_50;
  longlong local_40;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e1aa6e(param_1,&local_30);
  if ((local_30 != (longlong *)0x0) && (*(int *)((longlong)local_30 + 0x14) != 0)) {
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    FUN_1414f3eb8(local_60,param_1 + 0x28,&DAT_14cbced30,&local_78);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    local_78 = *local_30;
    plVar4 = (longlong *)local_30[1];
    if (plVar4 == (longlong *)0x0) {
      plStack_70 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plStack_70 = plVar4;
    }
    FUN_1458291a6(param_1,local_60,&local_78);
    plVar3 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441df376 FUN_1441df376 body=367 status=ok
// SIG undefined FUN_1441df376(void)

void FUN_1441df376(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  longlong local_60 [2];
  longlong local_50;
  longlong local_40;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e1aa6e(param_1,&local_30);
  if ((local_30 != (longlong *)0x0) && (*(int *)((longlong)local_30 + 0x14) != 0)) {
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    FUN_1414f3eb8(local_60,param_1 + 0x28,&DAT_14cbced40,&local_78);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    local_78 = *local_30;
    plVar4 = (longlong *)local_30[1];
    if (plVar4 == (longlong *)0x0) {
      plStack_70 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plStack_70 = plVar4;
    }
    FUN_1458291a6(param_1,local_60,&local_78);
    plVar3 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441df4e8 FUN_1441df4e8 body=332 status=ok
// SIG undefined FUN_1441df4e8(void)

void FUN_1441df4e8(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
LAB_1441df565:
    if ((byte)(~(byte)param_3 & (byte)param_2) != 0) goto LAB_1441df57a;
  }
  else {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1441df565;
    if ((byte)param_3 == 0) {
      if (*(longlong *)(param_1 + 0x878) != 0) goto LAB_1441df565;
      local_50 = FUN_1441df636;
      local_48 = 0;
      FUN_146630080(&local_40,param_1);
      FUN_14613e21c(lVar1 + 0x668,&local_50,&local_40);
      if (local_38 == 0) {
LAB_1441df613:
        if (local_40 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_40 != (undefined8 *)0x0) {
        (**(code **)*local_40)(local_40,0);
        FUN_1446efa72(&local_40,0,0,0x10);
        local_38 = 0;
        goto LAB_1441df613;
      }
      *(code **)(param_1 + 0x878) = local_50;
      goto LAB_1441df565;
    }
    if (*(longlong *)(param_1 + 0x878) != 0) {
      FUN_14480f766(lVar1 + 0x668);
    }
    *(undefined8 *)(param_1 + 0x878) = 0;
  }
  FUN_143f45690(param_1,param_2,param_3);
LAB_1441df57a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441df636 FUN_1441df636 body=100 status=ok
// SIG undefined FUN_1441df636(void)

void FUN_1441df636(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((((param_2 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar2 != 0)) &&
     ((lVar2 = *(longlong *)(lVar2 + 0x360), lVar2 != 0 && (*(longlong *)(lVar2 + 0x1f0) != 0)))) {
    uVar1 = *(undefined4 *)(param_2 + 0xe0);
    lVar2 = FUN_140cb14ac();
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
      *(undefined1 *)(lVar2 + 0x20) = 1;
      FUN_143f3cecc(lVar2,uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1441df6ac FUN_1441df6ac body=7 status=ok
// SIG undefined FUN_1441df6ac(void)

undefined1 FUN_1441df6ac(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x880);
}



// FUNCTION 1441df6dd FUN_1441df6dd body=69 status=ok
// SIG undefined FUN_1441df6dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441df6dd(void)

{
  _DAT_14cbcee50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001441df71f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbcee58,1);
  return;
}



// FUNCTION 1441df72e FUN_1441df72e body=1669 status=ok
// SIG undefined FUN_1441df72e(void)

float FUN_1441df72e(longlong param_1,double *param_2,double *param_3,longlong param_4,float param_5,
                   longlong param_6,undefined8 *param_7)

{
  float fVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  double *local_1c0;
  undefined4 local_1b4;
  longlong local_1b0;
  longlong local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  fVar18 = 0.0;
  if (param_4 == 0) goto LAB_1441dfd2b;
  lVar8 = FUN_1447210f0(param_4);
  if ((lVar8 == 0) || (lVar4 = *(longlong *)(param_4 + 0x3258), lVar4 == 0)) goto LAB_1441dfd2b;
  lVar9 = *(longlong *)(param_6 + 0x1c0);
  if (*(longlong *)(param_6 + 0x1c0) == 0) {
    lVar9 = param_6;
  }
  local_1a8 = param_1;
  if ((longlong)*(int *)(param_6 + 0x1c8) == 0) {
    fVar18 = -1.0;
    if (param_7 == (undefined8 *)0x0) goto LAB_1441dfd2b;
LAB_1441dfb5c:
    param_7[2] = DAT_14c8464f0;
    uVar7 = DAT_14c8464e8;
    *param_7 = DAT_14c8464e0;
    param_7[1] = uVar7;
    fVar23 = 0.0;
    if (param_7 + 3 != &DAT_14c8464e0) {
      param_7[5] = DAT_14c8464f0;
      uVar7 = DAT_14c8464e8;
      param_7[3] = DAT_14c8464e0;
      param_7[4] = uVar7;
      *(undefined1 *)(param_7 + 6) = 1;
    }
    uVar13 = 0;
  }
  else {
    uVar13 = SUB84(param_2[2],0);
    uVar14 = (undefined4)((ulonglong)param_2[2] >> 0x20);
    dVar2 = *param_2;
    dVar3 = param_2[1];
    lVar11 = (longlong)*(int *)(param_6 + 0x1c8) * 0x38;
    local_190 = 0.0;
    fVar18 = -1.0;
    lVar10 = 0;
    fVar23 = 1.0;
    fVar24 = 0.0;
    local_1b4 = 0;
    local_1a0 = 0.0;
    local_198 = 0.0;
    local_1b0 = lVar8;
    do {
      local_178 = param_2[2];
      local_188 = *param_2;
      dStack_180 = param_2[1];
      local_160 = (double)CONCAT44(uVar14,uVar13) + param_3[2];
      local_168 = dVar3 + param_3[1];
      local_170 = dVar2 + *param_3;
      local_158 = *(undefined8 *)(lVar9 + 0x18);
      uStack_150 = *(undefined8 *)(lVar9 + 0x20);
      local_138 = *(undefined8 *)(lVar9 + 0x18);
      uStack_130 = *(undefined8 *)(lVar9 + 0x20);
      fVar16 = *(float *)(lVar9 + 0x34) - *(float *)(lVar9 + 0x30);
      if (fVar16 <= 0.1) {
        fVar16 = 0.1;
      }
      local_148 = *(double *)(lVar9 + 0x28) + (double)fVar16;
      local_128 = *(double *)(lVar9 + 0x28) - (double)fVar16;
      local_1c0 = &local_120;
      local_1c8 = &local_108;
      FUN_144a0d30e(&local_188,&local_170,&local_158,&local_138);
      dVar21 = param_2[2];
      uVar13 = SUB84(dVar21,0);
      uVar14 = (undefined4)((ulonglong)dVar21 >> 0x20);
      dVar2 = *param_2;
      dVar3 = param_2[1];
      fVar25 = (float)SQRT((local_f8 - dVar21) * (local_f8 - dVar21) +
                           (local_108 - dVar2) * (local_108 - dVar2) +
                           (local_100 - dVar3) * (local_100 - dVar3));
      fVar16 = *(float *)(lVar4 + 0x24);
      fVar19 = (float)(-(uint)(0.0 < fVar16) & (uint)((fVar25 - fVar16) / fVar16));
      fVar16 = *(float *)(lVar4 + 0x28);
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      fVar17 = *(float *)(lVar4 + 0x2c) - fVar16;
      if (fVar17 <= fVar16) {
        fVar17 = fVar16;
      }
      dVar21 = SQRT((local_110 - local_f8) * (local_110 - local_f8) +
                    (local_120 - local_108) * (local_120 - local_108) +
                    (local_118 - local_100) * (local_118 - local_100));
      uVar12 = (uint)((ulonglong)dVar21 >> 0x20);
      fVar1 = *(float *)(lVar9 + 0x30);
      fVar20 = fVar19 * *(float *)(lVar4 + 0x30);
      auVar22._0_4_ = ((float)dVar21 - fVar1) / ((fVar17 * fVar19 + fVar16) * fVar1 - fVar1);
      auVar22._4_4_ = uVar12;
      auVar22._8_8_ = 0;
      if (1.0 <= auVar22._0_4_) {
        auVar22._8_8_ = 0;
        auVar22._0_4_ = 1.0;
      }
      if (auVar22._0_4_ <= 0.0) {
        auVar5._12_4_ = 0;
        auVar5._0_12_ = auVar22._4_12_;
        auVar22 = auVar5 << 0x20;
      }
      uVar12 = -(uint)(auVar22._0_4_ < fVar20);
      fVar16 = (float)(uVar12 & 0x3f800000 |
                      ~uVar12 & (uint)(1.0 - (auVar22._0_4_ - fVar20) / (1.0 - fVar20)));
      if (fVar18 < fVar16) {
        local_1b4 = *(undefined4 *)(lVar9 + 0x34);
        local_198 = local_f8;
        local_1a0 = local_100;
        local_190 = local_108;
        lVar10 = lVar9;
        fVar18 = fVar16;
        fVar24 = fVar25;
      }
      lVar9 = lVar9 + 0x38;
      lVar11 = lVar11 + -0x38;
    } while (lVar11 != 0);
    if (param_7 == (undefined8 *)0x0) goto LAB_1441dfd2b;
    if (lVar10 == 0) goto LAB_1441dfb5c;
    fVar16 = *(float *)(lVar4 + 0x38);
    fVar19 = fVar16 / param_5;
    if (*(float *)(lVar4 + 0x34) <= fVar16 / param_5) {
      fVar19 = *(float *)(lVar4 + 0x34);
    }
    if (fVar24 <= fVar19) {
      fVar25 = *(float *)(lVar4 + 0x40);
      fVar17 = ((*(float *)(lVar4 + 0x48) / param_5 + 1.0) - *(float *)(lVar4 + 0x48)) * fVar25;
      uVar12 = -(uint)(fVar19 - fVar17 < fVar16 - fVar25);
      fVar16 = (float)(~uVar12 & (uint)fVar17 | (uint)(fVar19 - (fVar16 - fVar25)) & uVar12);
      auVar15 = ZEXT816(0);
      if (fVar24 <= fVar16) {
        fVar19 = (*(float *)(lVar4 + 0x44) - fVar25) + fVar16;
        fVar16 = fVar16 - fVar19;
        uVar12 = -(uint)(0.0 < fVar16);
        auVar15 = ZEXT416(~uVar12 & 0x3f800000 | (uint)(1.0 - (fVar24 - fVar19) / fVar16) & uVar12);
      }
    }
    else {
      fVar16 = ((*(float *)(lVar4 + 0x3c) - fVar16) + fVar19) - fVar19;
      auVar15 = ZEXT416(-(uint)(0.0 < fVar16) & (uint)((fVar24 - fVar19) / fVar16));
    }
    if (1.0 <= auVar15._0_4_) {
      auVar15._0_4_ = 0x3f800000;
    }
    if (auVar15._0_4_ <= 0.0) {
      auVar6._12_4_ = 0;
      auVar6._0_12_ = auVar15._4_12_;
      auVar15 = auVar6 << 0x20;
    }
    fVar24 = 1.0;
    if (*(char *)(local_1a8 + 0x4d) == '\x01') {
      fVar16 = *(float *)(local_1b0 + 0x6f4) + *(float *)(local_1a8 + 0x48);
      *(float *)(local_1a8 + 0x48) = fVar16;
      fVar24 = 1.0 - fVar16 / *(float *)(lVar4 + 0x4c);
      if (1.0 <= fVar24) {
        fVar24 = 1.0;
      }
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      if (*(float *)(lVar4 + 0x4c) < fVar16) {
        *(undefined1 *)(local_1a8 + 0x4d) = 0;
      }
    }
    if (*(char *)(local_1a8 + 100) == '\x01') {
      fVar16 = *(float *)(local_1b0 + 0x6f4) + *(float *)(local_1a8 + 0x60);
      *(float *)(local_1a8 + 0x60) = fVar16;
      fVar23 = fVar16 / *(float *)(lVar4 + 0x50);
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      fVar23 = 1.0 - fVar23;
      if (*(float *)(lVar4 + 0x50) <= fVar16) {
        *(undefined8 *)(local_1a8 + 0x50) = 0;
        *(undefined8 *)(local_1a8 + 0x58) = 0;
        *(undefined8 *)(local_1a8 + 0x5d) = 0;
      }
    }
    param_7[2] = *(undefined8 *)(lVar10 + 0x28);
    uVar7 = *(undefined8 *)(lVar10 + 0x20);
    *param_7 = *(undefined8 *)(lVar10 + 0x18);
    param_7[1] = uVar7;
    param_7[3] = local_190;
    param_7[4] = local_1a0;
    param_7[5] = local_198;
    *(undefined1 *)(param_7 + 6) = 1;
    fVar23 = (1.0 - auVar15._0_4_) * fVar18 * fVar24 * fVar23;
    uVar13 = local_1b4;
  }
  *(float *)(param_7 + 7) = fVar23;
  *(undefined4 *)((longlong)param_7 + 0x3c) = uVar13;
LAB_1441dfd2b:
  if ((local_f0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return fVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441dfdd6 FUN_1441dfdd6 body=108 status=ok
// SIG undefined FUN_1441dfdd6(void)

void FUN_1441dfdd6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b98f3d0;
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441dfe42 FUN_1441dfe42 body=59 status=ok
// SIG undefined FUN_1441dfe42(void)

longlong FUN_1441dfe42(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x440);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2 * 8;
    lVar3 = 0;
    do {
      bVar4 = *(longlong *)(*(longlong *)(param_1 + 0x438) + lVar3) == *param_2;
      lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar4);
      if (bVar4) {
        return lVar2;
      }
      bVar4 = lVar1 + -8 != lVar3;
      lVar3 = lVar3 + 8;
    } while (bVar4);
  }
  return lVar2;
}



// FUNCTION 1441dfe7e FUN_1441dfe7e body=285 status=ok
// SIG undefined FUN_1441dfe7e(void)

void FUN_1441dfe7e(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148dae156(param_1,&local_30);
  if (*param_2 == local_30) {
    plVar2 = (longlong *)FUN_140d57cf8();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xd0))(plVar2,*(undefined8 *)(param_1 + 0x4e0));
    }
    *(undefined8 *)(param_1 + 0x4e0) = 0;
    if ((*(char *)((longlong)param_2 + 0xc) != '\x01') ||
       (*(char *)((longlong)param_2 + 0xd) != '\x01')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
    cVar1 = FUN_140d577ec(param_1 + 0x4c8);
    if (cVar1 != '\0') {
      FUN_148dae5ae(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
    if (*(longlong *)(param_1 + 0x4e8) == 0) {
      plVar2 = (longlong *)FUN_140d57cf8();
      if (plVar2 != (longlong *)0x0) {
        local_50 = &LAB_1441e0710;
        local_48 = 0;
        FUN_148dae644(local_40,param_1);
        (**(code **)(*plVar2 + 0x50))(plVar2,&local_50,local_40);
        *(undefined1 **)(param_1 + 0x4e8) = local_50;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441dffc4 FUN_1441dffc4 body=1867 status=ok
// SIG undefined FUN_1441dffc4(void)

void FUN_1441dffc4(longlong param_1)

{
  wchar_t **ppwVar1;
  uint uVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_138 [32];
  wchar_t **local_118;
  undefined8 local_110;
  uint local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  wchar_t **local_e0;
  undefined1 *local_d8;
  code *local_d0;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8 [2];
  longlong *local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  wchar_t *local_70;
  int local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_148dae608();
  FUN_148dae0c0(&local_60);
  pwVar3 = local_60;
  ppwVar1 = (wchar_t **)(param_1 + 0x4c8);
  if (ppwVar1 != &local_60) {
    iVar6 = (int)local_58;
    lVar9 = (longlong)(int)local_58;
    *(int *)(param_1 + 0x4d0) = (int)local_58;
    if ((int)local_58 == 0 && *(int *)(param_1 + 0x4d4) == 0) {
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
    else {
      FUN_1446dd670(ppwVar1,local_58 & 0xffffffff);
      if (iVar6 != 0) {
        memcpy(*ppwVar1,pwVar3,lVar9 * 2);
      }
    }
  }
  if (local_60 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80), lVar9 != 0)) {
    if (DAT_14cb5e538 == 0) {
      local_60 = 
      L"襉䣐쪉腈Á\x01\xe900\xf2d4ﻸ坁噁坖䡓\xec83䰰캉襈䣗쮉譈അ\xf41c䠊\xe031襈⑄䠨䲍․襌䠁ᖍ剞ऒ끁\xe801⣦＜삄浵赈༕ቔ䠉䲍․끁\xe801⣎＜삄屵赈㴕ቒ䠉䲍․끁\xe801⢶＜삄䭵赈㤕ቒ䠉䲍․끁\xe801⢞＜삄㩵譈⑌䠨\xe131㭈錍\xf41b甊ㄎ䣀쒃嬰幟幁彁\xe8c3藞͜료ʠ"
      ;
      local_d0 = FUN_14081d0ea;
      local_d8 = &LAB_1417ad04a;
      local_e8 = &LAB_1486a7af7;
      local_f0 = &LAB_1464e1631;
      local_f8 = &DAT_149e063b2;
      local_100 = 0;
      local_108 = 0x1000000c;
      local_110 = CONCAT44(local_110._4_4_,8);
      local_118 = (wchar_t **)CONCAT44(local_118._4_4_,0x420);
      local_e0 = &local_60;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    if (((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) == DAT_14cb5e538 + 0x30)) &&
       (lVar9 = *(longlong *)(lVar9 + 0x1e0), lVar9 != 0)) {
      lVar7 = *(longlong *)(lVar9 + 0x30);
      if (lVar7 != 0 && *(longlong *)(lVar9 + 0x68) != 0) {
        FUN_1409845a0(*(longlong *)(lVar9 + 0x68),&local_70,param_1);
        if (-1 < (short)local_70) {
          local_88 = 0;
          uStack_80 = 0;
          FUN_140ceec8e(lVar7,&local_60,&local_70);
        }
      }
    }
  }
  if (DAT_14cb259f8 != 0) {
    local_60 = (wchar_t *)0x0;
    local_58 = 0xffffffff00000000;
    FUN_1438a4b4a(DAT_14cb259f8,&local_60);
    if ((local_58._4_4_ != -1) && (local_60 != (wchar_t *)0x0)) {
      FUN_1400020a8();
    }
  }
  lVar9 = FUN_145da44aa(param_1);
  if (lVar9 == 0) goto LAB_1441e0172;
  local_60 = L"InstallFailedHeaderText";
  local_58._0_4_ = 0x17;
  FUN_1446e940c(&local_70,&local_60);
  local_60 = L"AudioLanguage";
  local_58._0_4_ = 0xd;
  FUN_1446e940c(local_a8,&local_60);
  local_60 = L"Audio Language";
  local_58._0_4_ = 0xe;
  FUN_140208c1e(local_98,local_a8,&local_70,&local_60);
  local_60 = L"IntallFailedBodyText";
  local_58._0_4_ = 0x14;
  FUN_1446e940c(&local_70,&local_60);
  local_60 = L"AudioLanguage";
  local_58._0_4_ = 0xd;
  FUN_1446e940c(&local_b8,&local_60);
  local_60 = L"The selected audio language could not be installed. Using default audio language.";
  local_58 = CONCAT44(local_58._4_4_,0x51);
  FUN_140208c1e(local_a8,&local_b8,&local_70,&local_60);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[4] = L'\0';
    DAT_14c844840[5] = L'\0';
    DAT_14c844840[6] = L'\0';
    DAT_14c844840[7] = L'\0';
    *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
    DAT_14c844840[8] = L'\xffff';
    DAT_14c844840[9] = L'\xffff';
    DAT_14c844840[10] = L'\xffff';
    DAT_14c844840[0xb] = L'\xffff';
    DAT_14c844840[0xc] = L'\0';
    DAT_14c844840[0xd] = L'\0';
    DAT_14c844840[0xe] = L'\0';
    DAT_14c844840[0xf] = L'\0';
    DAT_14c844840[0x10] = L'\0';
    DAT_14c844840[0x11] = L'\0';
    DAT_14c844840[0x12] = L'\0';
    DAT_14c844840[0x13] = L'\0';
    DAT_14c844840[0x14] = L'\0';
    DAT_14c844840[0x15] = L'\0';
    DAT_14c844840[0x16] = L'\0';
    DAT_14c844840[0x17] = L'\0';
    if (DAT_14c844840 != (wchar_t *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_60 = DAT_14c844840;
  if (DAT_14c844840 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)DAT_14c844840 + 8))();
  }
  local_58 = CONCAT44(local_58._4_4_,DAT_14c844848);
  local_50 = 0;
  local_48 = 1;
  local_70 = L"InstallFailedContinueText";
  local_68 = 0x19;
  FUN_1446e940c(local_bc,&local_70);
  local_70 = L"AudioLanguage";
  local_68 = 0xd;
  FUN_1446e940c(local_c0,&local_70);
  local_70 = L"Continue";
  local_68 = 8;
  FUN_140208c1e(&local_b8,local_c0,local_bc,&local_70);
  FUN_140008f88(&local_60,&local_b8);
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x10))();
  }
  local_48 = 1;
  local_70 = (wchar_t *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  pwVar3 = local_70;
  local_68 = 3;
  *(undefined ***)local_70 = &PTR_LAB_14b972ed0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  *(longlong *)(local_70 + 8) = lVar5;
  *(undefined ***)local_70 = &PTR_FUN_14b991900;
  local_70[0xc] = L'\0';
  local_70[0xd] = L'\0';
  local_70[0xe] = L'\0';
  local_70[0xf] = L'\0';
  iVar6 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_70 + 0xc) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar6 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar7 + 0x10);
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)(pwVar3 + 0xe) = iVar6;
  *(longlong *)(pwVar3 + 0x10) = param_1;
  local_b8 = (longlong *)0x0;
  local_b0 = 1;
  FUN_1459de124(&local_b8,1,0);
  FUN_14143c535(local_b8,&local_60,1);
  local_110 = 0;
  local_100 = CONCAT71(local_100._1_7_,1);
  local_108 = local_108 & 0xffffff00;
  local_118 = &local_70;
  uVar4 = FUN_1461db750(lVar9,local_98,local_a8,&local_b8);
  *(undefined4 *)(param_1 + 0x4dc) = uVar4;
  FUN_140e0067b(local_b8,local_b0);
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 == 0) {
LAB_1441e0527:
    if (local_70 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_1441e0527;
  }
  if (local_60 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_60 + 0x10))();
  }
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
LAB_1441e0172:
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441e082c FUN_1441e082c body=920 status=ok
// SIG undefined FUN_1441e082c(void)

void FUN_1441e082c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  char *_Str;
  longlong lVar3;
  size_t sVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  char *pcVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  char *local_70;
  int local_68;
  undefined1 local_64;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x4f8);
  *(undefined4 *)(param_1 + 0x500) = 0;
  if (*(int *)(param_1 + 0x504) < 0) {
    FUN_1402191ca(plVar1,0);
  }
  local_80 = DAT_14cbcf460;
  local_78 = DAT_14cbcf468;
  FUN_1448075d0(&local_70);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar14 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar8[9];
      }
      iVar17 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_70) * 4);
      if (iVar17 != -1) {
        do {
          lVar18 = *plVar8 + (longlong)iVar17 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar17 * 0x40) == (uint)local_70) {
            if ((((lVar18 != 0) &&
                 (puVar9 = (undefined8 *)(lVar18 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
            goto LAB_1441e0921;
            break;
          }
          iVar17 = *(int *)(lVar18 + 0x38);
        } while (iVar17 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_1441e0921:
  if ((byte *)*puVar9 == (byte *)0x0) {
    bVar19 = false;
  }
  else {
    bVar19 = (*(byte *)*puVar9 & 3) == 2;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (bVar19) {
    local_90 = DAT_14cbcf460;
    local_88 = DAT_14cbcf468;
    FUN_1448075d0(&local_70);
    pbVar2 = (byte *)*param_2;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar8 = &DAT_14c9a1288;
      }
      else {
        plVar8 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
        plVar14 = plVar8 + 8;
        if ((longlong *)plVar8[9] != (longlong *)0x0) {
          plVar14 = (longlong *)plVar8[9];
        }
        iVar17 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_70) * 4
                         );
        if (iVar17 != -1) {
          do {
            lVar18 = *plVar8 + (longlong)iVar17 * 0x40;
            if (*(uint *)(*plVar8 + (longlong)iVar17 * 0x40) == (uint)local_70) {
              if (((lVar18 != 0) &&
                  (puVar9 = (undefined8 *)(lVar18 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar9 != (byte *)0x0 && ((*(byte *)*puVar9 & 0x40) == 0))))
              goto LAB_1441e09fa;
              break;
            }
            iVar17 = *(int *)(lVar18 + 0x38);
          } while (iVar17 != -1);
        }
      }
    }
    puVar9 = &DAT_14c9a1308;
LAB_1441e09fa:
    pbVar2 = (byte *)*puVar9;
    plVar8 = &DAT_14c9a1270;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
      plVar8 = *(longlong **)(pbVar2 + 8);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    iVar17 = (int)plVar8[2];
    if (0 < iVar17) {
      lVar18 = 0;
      do {
        pbVar2 = *(byte **)(*plVar8 + lVar18 * 0x10);
        if ((*pbVar2 & 3) == 1) {
          _Str = *(char **)(pbVar2 + 8);
          iVar17 = *(int *)(param_1 + 0x500);
          *(uint *)(param_1 + 0x500) = iVar17 + 1U;
          if (*(uint *)(param_1 + 0x504) < iVar17 + 1U) {
            FUN_1446f84a2(plVar1,iVar17);
          }
          lVar3 = *plVar1;
          if (_Str == (char *)0x0) {
LAB_1441e0b0b:
            uVar5 = 0;
            uVar11 = 0;
          }
          else {
            sVar4 = strlen(_Str);
            iVar7 = (int)sVar4;
            if (iVar7 == 0) goto LAB_1441e0b0b;
            lVar10 = (longlong)iVar7;
            pcVar15 = _Str + lVar10 + -1;
            if (pcVar15 < _Str) {
              lVar13 = 0;
            }
            else {
              uVar6 = 0;
              do {
                if (9 < (byte)(*pcVar15 - 0x30U)) break;
                uVar6 = uVar6 + 1;
                pcVar15 = pcVar15 + -1;
              } while (_Str <= pcVar15);
              if (((((uVar6 == 0) || (iVar7 <= (int)uVar6)) || (10 < uVar6)) ||
                  (lVar16 = -(ulonglong)uVar6, _Str[lVar16 + lVar10 + -1] != '_')) ||
                 ((uVar6 != 1 && (_Str[lVar16 + lVar10] == '0')))) {
LAB_1441e0ac4:
                lVar13 = 0;
              }
              else {
                lVar12 = 0;
                do {
                  lVar13 = (longlong)_Str[lVar16 + lVar10] + lVar12 * 10;
                  lVar12 = lVar13 + -0x30;
                  lVar16 = lVar16 + 1;
                } while (lVar16 != 0);
                if (0x7ffffffe < lVar12) goto LAB_1441e0ac4;
                iVar7 = ~uVar6 + iVar7;
                lVar13 = lVar13 + -0x2f;
              }
              if (iVar7 == 0) goto LAB_1441e0b0b;
            }
            local_64 = 0;
            local_70 = _Str;
            local_68 = iVar7;
            uVar6 = FUN_14001a6c0(&local_70,1);
            uVar11 = lVar13 << 0x20;
            uVar5 = (ulonglong)uVar6;
          }
          *(ulonglong *)(lVar3 + (longlong)iVar17 * 8) = uVar5 | uVar11;
          iVar17 = (int)plVar8[2];
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < iVar17);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441e0bc6 FUN_1441e0bc6 body=536 status=ok
// SIG undefined FUN_1441e0bc6(void)

void FUN_1441e0bc6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  FUN_14009b010(&local_68,3,0);
  if (param_3 != &DAT_14c9a1308) {
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
    plVar3 = (longlong *)param_3[1];
    *param_3 = local_68;
    param_3[1] = (longlong)plStack_60;
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
  }
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  FUN_14009b010(&local_78,2,0);
  if ((longlong)*(int *)(param_1 + 0x500) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x4f8);
    lVar5 = (longlong)*(int *)(param_1 + 0x500) << 3;
    do {
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      FUN_14009b010(&local_68,1,0);
      if (local_68 != 0) {
        FUN_1401269d0(local_68,lVar4);
      }
      if (local_78 != 0) {
        local_98 = 0;
        FUN_140141db6(local_78,&local_68,0,0);
      }
      plVar3 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  local_88 = DAT_14cbcf460;
  local_80 = DAT_14cbcf468;
  FUN_1448075d0(&local_68);
  if (*param_3 != 0) {
    local_98 = 0;
    FUN_14014191c(*param_3,&local_68,&local_78,0);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e0de0 FUN_1441e0de0 body=38 status=ok
// SIG undefined FUN_1441e0de0(void)

undefined8 FUN_1441e0de0(undefined8 param_1,int param_2)

{
  FUN_1441dfdd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e0e0a FUN_1441e0e0a body=29 status=ok
// SIG undefined FUN_1441e0e0a(void)

undefined8 FUN_1441e0e0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e0e3c FUN_1441e0e3c body=93 status=ok
// SIG undefined FUN_1441e0e3c(void)

void FUN_1441e0e3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f3e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441e0e9a FUN_1441e0e9a body=93 status=ok
// SIG undefined FUN_1441e0e9a(void)

void FUN_1441e0e9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f3e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441e0ef8 FUN_1441e0ef8 body=126 status=ok
// SIG undefined FUN_1441e0ef8(void)

void FUN_1441e0ef8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b961ce0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98f3e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441e0f67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e0f76 FUN_1441e0f76 body=66 status=ok
// SIG undefined FUN_1441e0f76(void)

void FUN_1441e0f76(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1441e1000(param_1 + 0x18,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e0fba FUN_1441e0fba body=68 status=ok
// SIG undefined FUN_1441e0fba(void)

undefined8 FUN_1441e0fba(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1441e1000(param_1 + 0x18,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e1000 FUN_1441e1000 body=159 status=ok
// SIG undefined FUN_1441e1000(void)

void FUN_1441e1000(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x38);
  if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x360);
  }
  lVar1 = *param_3;
  lVar2 = FUN_1447210f0(param_2);
  if ((lVar4 == lVar2) && ((int)param_1[1] == *(int *)(param_2 + 0x394))) {
    lVar3 = FUN_1401e6c61();
    if ((lVar4 != 0) && ((lVar3 == lVar1 && (*(longlong *)(lVar2 + 0x1f0) != 0)))) {
      lVar4 = FUN_141060562();
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
        FUN_143f25ec2();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441e10a0 FUN_1441e10a0 body=64 status=ok
// SIG undefined FUN_1441e10a0(void)

undefined8 * FUN_1441e10a0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98f450;
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



// FUNCTION 1441e10e4 FUN_1441e10e4 body=81 status=ok
// SIG undefined FUN_1441e10e4(void)

undefined8 FUN_1441e10e4(longlong param_1)

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



// FUNCTION 1441e113a FUN_1441e113a body=89 status=ok
// SIG undefined FUN_1441e113a(void)

bool FUN_1441e113a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e1185;
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
LAB_1441e1185:
  return lVar6 == param_2;
}



// FUNCTION 1441e11b0 FUN_1441e11b0 body=118 status=ok
// SIG undefined FUN_1441e11b0(void)

void FUN_1441e11b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f450;
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



// FUNCTION 1441e1226 FUN_1441e1226 body=118 status=ok
// SIG undefined FUN_1441e1226(void)

void FUN_1441e1226(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f450;
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



// FUNCTION 1441e129c FUN_1441e129c body=156 status=ok
// SIG undefined FUN_1441e129c(void)

void FUN_1441e129c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98f450;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e1328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e1338 FUN_1441e1338 body=66 status=ok
// SIG undefined FUN_1441e1338(void)

void FUN_1441e1338(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1441e13da(param_1 + 0x28,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e137c FUN_1441e137c body=93 status=ok
// SIG undefined FUN_1441e137c(void)

undefined8 FUN_1441e137c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441e13da(param_1 + 0x28,&local_10);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e13da FUN_1441e13da body=102 status=ok
// SIG undefined FUN_1441e13da(void)

void FUN_1441e13da(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  if ((*param_2 != 0) && (lVar4 = *(longlong *)(*param_2 + 0x1f0), lVar4 != 0)) {
    lVar2 = *param_1;
    lVar4 = FUN_141060562(lVar4);
    if ((lVar4 != 0) &&
       ((lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0 && (*(int *)(lVar4 + 0xd8) == 2)))) {
      cVar1 = *(char *)(lVar2 + 0x368);
      cVar3 = FUN_1441dc5a2(lVar2);
      if (cVar1 != cVar3) {
        FUN_143f25ec2(lVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441e1440 FUN_1441e1440 body=135 status=ok
// SIG undefined FUN_1441e1440(void)

undefined8 FUN_1441e1440(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  plVar4 = *(longlong **)(lVar3 + 0x30);
  *(undefined8 *)(lVar3 + 0x30) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined8 *)(lVar3 + 0x18) = 0;
  plVar4 = *(longlong **)(lVar3 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(lVar3 + 0x20) = 0;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  cVar5 = FUN_1414e62ca(*(undefined8 *)(lVar3 + 0x10));
  if (cVar5 != '\0') {
    *(undefined1 *)(*(longlong *)(lVar3 + 0x10) + 0x1c8) = 0;
  }
  FUN_1441ddf08(lVar3);
  return 0;
}



// FUNCTION 1441e14d2 FUN_1441e14d2 body=12 status=ok
// SIG undefined FUN_1441e14d2(void)

void FUN_1441e14d2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001441e14db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1441e14de FUN_1441e14de body=29 status=ok
// SIG undefined FUN_1441e14de(void)

undefined8 FUN_1441e14de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e14fc FUN_1441e14fc body=39 status=ok
// SIG undefined FUN_1441e14fc(void)

undefined8 FUN_1441e14fc(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1441ddd70(lVar1,lVar1 + 0x1d8);
  FUN_1441ddf08(lVar1);
  return 0;
}



// FUNCTION 1441e152e FUN_1441e152e body=12 status=ok
// SIG undefined FUN_1441e152e(void)

void FUN_1441e152e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001441e1537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1441e153a FUN_1441e153a body=29 status=ok
// SIG undefined FUN_1441e153a(void)

undefined8 FUN_1441e153a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e1558 FUN_1441e1558 body=29 status=ok
// SIG undefined FUN_1441e1558(void)

undefined8 FUN_1441e1558(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e158a FUN_1441e158a body=93 status=ok
// SIG undefined FUN_1441e158a(void)

void FUN_1441e158a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f500;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441e15e8 FUN_1441e15e8 body=93 status=ok
// SIG undefined FUN_1441e15e8(void)

void FUN_1441e15e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f500;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441e1646 FUN_1441e1646 body=126 status=ok
// SIG undefined FUN_1441e1646(void)

void FUN_1441e1646(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b98f500;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441e16b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e16ce FUN_1441e16ce body=20 status=ok
// SIG undefined FUN_1441e16ce(void)

undefined1 FUN_1441e16ce(longlong param_1)

{
  FUN_1441e16e2(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441e16e2 FUN_1441e16e2 body=980 status=ok
// SIG undefined FUN_1441e16e2(void)

void FUN_1441e16e2(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  ushort uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ushort uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_1;
  iVar2 = *(int *)(lVar3 + 0x338);
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar18 = 0;
    iVar11 = 0;
    iVar6 = 0;
  }
  else {
    puVar9 = *(uint **)(lVar3 + 0x330);
    if (*(uint **)(lVar3 + 0x330) == (uint *)0x0) {
      puVar9 = (uint *)(lVar3 + 800);
    }
    uVar16 = *puVar9;
    if (uVar16 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar18 = 0;
      uVar17 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar17 = uVar18;
      }
      iVar11 = 0;
      do {
        if (uVar17 == uVar18) goto LAB_1441e1a73;
        iVar11 = iVar11 + 0x20;
        uVar16 = puVar9[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar18 = 0;
      iVar11 = 0;
    }
    uVar17 = (ulonglong)(-uVar16 & uVar16);
    uVar5 = uVar17 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar16 = 0xffffffff;
    do {
      plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x310) + (longlong)iVar6 * 0x20);
      iVar2 = *(int *)(*(longlong *)(lVar3 + 0x310) + 8 + (longlong)iVar6 * 0x20);
      if (iVar2 == DAT_14cbce928) {
        if (1 < iVar2) {
          lVar13 = 0;
          while( true ) {
            uVar12 = *(ushort *)(*plVar1 + lVar13);
            uVar5 = (ulonglong)uVar12;
            uVar15 = *(ushort *)(DAT_14cbce920 + lVar13);
            if (uVar12 != uVar15) break;
            if (uVar12 == 0) goto LAB_1441e192b;
LAB_1441e1800:
            lVar13 = lVar13 + 2;
          }
          if ((uVar15 | uVar12) < 0x80) {
            uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
            uVar14 = (ulonglong)uVar15;
            uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
            if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar14]) goto LAB_1441e1800;
          }
          if (uVar12 != uVar15) goto LAB_1441e1837;
        }
LAB_1441e192b:
        local_78 = 0;
        uStack_70 = 0;
        uVar4 = FUN_1441d875e(lVar3,&local_78);
        FUN_1447a1747(0,0);
      }
      else {
        if (DAT_14cbce928 + iVar2 == 1) goto LAB_1441e192b;
LAB_1441e1837:
        if (iVar2 == DAT_14cbce938) {
          if (1 < iVar2) {
            lVar13 = 0;
            while( true ) {
              uVar12 = *(ushort *)(*plVar1 + lVar13);
              uVar5 = (ulonglong)uVar12;
              uVar15 = *(ushort *)(DAT_14cbce930 + lVar13);
              if (uVar12 != uVar15) break;
              if (uVar12 == 0) goto LAB_1441e1955;
LAB_1441e1874:
              lVar13 = lVar13 + 2;
            }
            if ((uVar15 | uVar12) < 0x80) {
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
              uVar14 = (ulonglong)uVar15;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
              if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar14]) goto LAB_1441e1874;
            }
            if (uVar12 != uVar15) goto LAB_1441e18ab;
          }
LAB_1441e1955:
          uVar4 = FUN_1441da55e(lVar3);
        }
        else {
          if (DAT_14cbce938 + iVar2 == 1) goto LAB_1441e1955;
LAB_1441e18ab:
          if (iVar2 == DAT_14cbce948) {
            if (1 < iVar2) {
              lVar13 = 0;
              while( true ) {
                uVar12 = *(ushort *)(*plVar1 + lVar13);
                uVar5 = (ulonglong)uVar12;
                uVar15 = *(ushort *)(DAT_14cbce940 + lVar13);
                if (uVar12 != uVar15) break;
                if (uVar12 == 0) goto LAB_1441e196d;
LAB_1441e18e7:
                lVar13 = lVar13 + 2;
              }
              if ((uVar15 | uVar12) < 0x80) {
                uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                uVar14 = (ulonglong)uVar15;
                uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar14]) goto LAB_1441e18e7;
              }
              uVar4 = 0xffffffff;
              if (uVar12 != uVar15) goto LAB_1441e197c;
            }
LAB_1441e196d:
            uVar5 = FUN_1441da55e(lVar3);
            uVar4 = (uint)((uVar5 & 7) != 0);
          }
          else {
            uVar4 = 0xffffffff;
            if (DAT_14cbce948 + iVar2 == 1) goto LAB_1441e196d;
          }
        }
      }
LAB_1441e197c:
      if ((((((uVar4 != *(uint *)(plVar1 + 2)) &&
             (lVar13 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x38), lVar13 != 0)) &&
            (lVar13 = *(longlong *)(lVar13 + 0x30), lVar13 != 0)) &&
           ((lVar13 = *(longlong *)(lVar13 + 0x360), lVar13 != 0 &&
            (*(longlong *)(lVar13 + 0x1f0) != 0)))) &&
          ((lVar13 = FUN_141060562(), lVar13 != 0 &&
           ((*(longlong *)(lVar13 + 0x30) != 0 &&
            (iVar2 = *(int *)(*(longlong *)(lVar13 + 0x30) + 0xd8), iVar2 != 0)))))) && (iVar2 != 5)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
      }
      uVar16 = uVar16 & ~(uint)uVar17;
      puVar9 = *(uint **)(lVar3 + 0x330);
      if (*(uint **)(lVar3 + 0x330) == (uint *)0x0) {
        puVar9 = (uint *)(lVar3 + 800);
      }
      iVar2 = *(int *)(lVar3 + 0x338);
      iVar6 = (int)uVar18;
      lVar13 = (longlong)iVar6;
      uVar4 = puVar9[lVar13] & uVar16;
      if (uVar4 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar6) {
          iVar8 = iVar6;
        }
        if (iVar7 <= iVar6) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar9[lVar13 + lVar10 + 1];
          if (uVar4 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar13 == lVar10) goto LAB_1441e1a73;
        }
        uVar18 = (ulonglong)(iVar6 + (int)lVar10 + 1);
        uVar16 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar4 & uVar4);
      uVar5 = uVar17 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1441e1a73:
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e1ae0 FUN_1441e1ae0 body=29 status=ok
// SIG undefined FUN_1441e1ae0(void)

undefined8 FUN_1441e1ae0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e1b12 FUN_1441e1b12 body=85 status=ok
// SIG undefined FUN_1441e1b12(void)

void FUN_1441e1b12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f930;
  return;
}


