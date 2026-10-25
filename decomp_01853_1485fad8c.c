// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1485fad8c FUN_1485fad8c body=14 status=ok
// SIG undefined FUN_1485fad8c(void)

bool FUN_1485fad8c(void)

{
  return DAT_14ca84df4 == 0x8086;
}



// FUNCTION 1485fad9a FUN_1485fad9a body=7 status=ok
// SIG undefined FUN_1485fad9a(void)

bool FUN_1485fad9a(undefined8 param_1,int param_2)

{
  return param_2 == 3;
}



// FUNCTION 1485fada2 FUN_1485fada2 body=29 status=ok
// SIG undefined FUN_1485fada2(void)

undefined8 FUN_1485fada2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fadc0 FUN_1485fadc0 body=29 status=ok
// SIG undefined FUN_1485fadc0(void)

undefined8 FUN_1485fadc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fadfa FUN_1485fadfa body=93 status=ok
// SIG undefined FUN_1485fadfa(void)

void FUN_1485fadfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb8d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afcdc50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485fae58 FUN_1485fae58 body=93 status=ok
// SIG undefined FUN_1485fae58(void)

void FUN_1485fae58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb8d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afcdc50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485faeb6 FUN_1485faeb6 body=126 status=ok
// SIG undefined FUN_1485faeb6(void)

void FUN_1485faeb6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14acb8d40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afcdc50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485faf25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485faf42 FUN_1485faf42 body=21 status=ok
// SIG undefined FUN_1485faf42(void)

undefined8 FUN_1485faf42(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485faf58 FUN_1485faf58 body=29 status=ok
// SIG undefined FUN_1485faf58(void)

undefined8 FUN_1485faf58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485faf92 FUN_1485faf92 body=93 status=ok
// SIG undefined FUN_1485faf92(void)

void FUN_1485faf92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afcdcc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485faff0 FUN_1485faff0 body=93 status=ok
// SIG undefined FUN_1485faff0(void)

void FUN_1485faff0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afcdcc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485fb04e FUN_1485fb04e body=126 status=ok
// SIG undefined FUN_1485fb04e(void)

void FUN_1485fb04e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afcdcc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485fb0bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485fb0da FUN_1485fb0da body=21 status=ok
// SIG undefined FUN_1485fb0da(void)

undefined8 FUN_1485fb0da(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485fb0f0 FUN_1485fb0f0 body=31 status=ok
// SIG undefined FUN_1485fb0f0(void)

undefined8 FUN_1485fb0f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fb12c FUN_1485fb12c body=93 status=ok
// SIG undefined FUN_1485fb12c(void)

void FUN_1485fb12c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcdda0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485fb18a FUN_1485fb18a body=126 status=ok
// SIG undefined FUN_1485fb18a(void)

void FUN_1485fb18a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14afcdda0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485fb1f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485fb208 FUN_1485fb208 body=21 status=ok
// SIG undefined FUN_1485fb208(void)

undefined8 FUN_1485fb208(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485fb21e FUN_1485fb21e body=29 status=ok
// SIG undefined FUN_1485fb21e(void)

undefined8 FUN_1485fb21e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fb23c FUN_1485fb23c body=258 status=ok
// SIG undefined FUN_1485fb23c(void)

void FUN_1485fb23c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb538b8) {
    FUN_144b3d300(&DAT_14cb538b8);
    if (DAT_14cb538b8 == -1) {
      FUN_1485fb340(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FXeFGExtractUIShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x32;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb53838,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143c23012);
      _Init_thread_footer(&DAT_14cb538b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fb340 FUN_1485fb340 body=226 status=ok
// SIG undefined FUN_1485fb340(void)

longlong * FUN_1485fb340(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1485fb424;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fb424 FUN_1485fb424 body=136 status=ok
// SIG undefined FUN_1485fb424(void)

code * FUN_1485fb424(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DummyOutput";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485fb4ac;
}



// FUNCTION 1485fb4ac FUN_1485fb4ac body=130 status=ok
// SIG undefined FUN_1485fb4ac(void)

undefined1 * FUN_1485fb4ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UIColorAndAlpha";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x33;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1485fb52e;
}



// FUNCTION 1485fb532 FUN_1485fb532 body=38 status=ok
// SIG undefined FUN_1485fb532(void)

undefined8 FUN_1485fb532(undefined8 param_1,int param_2)

{
  FUN_145806982();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fb55e FUN_1485fb55e body=24 status=ok
// SIG undefined FUN_1485fb55e(void)

void FUN_1485fb55e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485fb572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1485fb576 FUN_1485fb576 body=29 status=ok
// SIG undefined FUN_1485fb576(void)

undefined8 FUN_1485fb576(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fb594 FUN_1485fb594 body=31 status=ok
// SIG undefined FUN_1485fb594(void)

undefined8 FUN_1485fb594(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fb5d0 FUN_1485fb5d0 body=93 status=ok
// SIG undefined FUN_1485fb5d0(void)

void FUN_1485fb5d0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afce610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485fb62e FUN_1485fb62e body=126 status=ok
// SIG undefined FUN_1485fb62e(void)

void FUN_1485fb62e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14afce610;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485fb69d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485fb6ac FUN_1485fb6ac body=21 status=ok
// SIG undefined FUN_1485fb6ac(void)

undefined8 FUN_1485fb6ac(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485fb6c2 FUN_1485fb6c2 body=29 status=ok
// SIG undefined FUN_1485fb6c2(void)

undefined8 FUN_1485fb6c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fb6e0 FUN_1485fb6e0 body=258 status=ok
// SIG undefined FUN_1485fb6e0(void)

void FUN_1485fb6e0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb53940) {
    FUN_144b3d300(&DAT_14cb53940);
    if (DAT_14cb53940 == -1) {
      FUN_1485fb7e4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FXeFGShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x29;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb538c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143c23575);
      _Init_thread_footer(&DAT_14cb53940);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fb7e4 FUN_1485fb7e4 body=226 status=ok
// SIG undefined FUN_1485fb7e4(void)

longlong * FUN_1485fb7e4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1485fb8c8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fb8c8 FUN_1485fb8c8 body=136 status=ok
// SIG undefined FUN_1485fb8c8(void)

code * FUN_1485fb8c8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Velocity";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485fb950;
}



// FUNCTION 1485fb950 FUN_1485fb950 body=136 status=ok
// SIG undefined FUN_1485fb950(void)

code * FUN_1485fb950(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HUDLessColor";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485fb9d8;
}



// FUNCTION 1485fb9d8 FUN_1485fb9d8 body=130 status=ok
// SIG undefined FUN_1485fb9d8(void)

undefined1 * FUN_1485fb9d8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Depth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1485fba5a;
}



// FUNCTION 1485fba5e FUN_1485fba5e body=139 status=ok
// SIG undefined FUN_1485fba5e(void)

void FUN_1485fba5e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c23bb2(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fbaea FUN_1485fbaea body=37 status=ok
// SIG undefined FUN_1485fbaea(void)

void FUN_1485fbaea(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143c23cbc();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485fbb18 FUN_1485fbb18 body=143 status=ok
// SIG undefined FUN_1485fbb18(void)

void FUN_1485fbb18(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c23e28(local_11);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fbbda FUN_1485fbbda body=124 status=ok
// SIG undefined FUN_1485fbbda(void)

void FUN_1485fbbda(longlong param_1,int param_2)

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



// FUNCTION 1485fbc58 FUN_1485fbc58 body=31 status=ok
// SIG undefined FUN_1485fbc58(void)

undefined8 FUN_1485fbc58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fbc94 FUN_1485fbc94 body=93 status=ok
// SIG undefined FUN_1485fbc94(void)

void FUN_1485fbc94(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afcf610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485fbcf2 FUN_1485fbcf2 body=123 status=ok
// SIG undefined FUN_1485fbcf2(void)

void FUN_1485fbcf2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14afcf610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485fbd6e FUN_1485fbd6e body=21 status=ok
// SIG undefined FUN_1485fbd6e(void)

undefined8 FUN_1485fbd6e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485fbd8a FUN_1485fbd8a body=157 status=ok
// SIG undefined FUN_1485fbd8a(void)

void FUN_1485fbd8a(longlong *param_1,longlong param_2)

{
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
  (**(code **)(*param_1 + 0x28))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fbe34 FUN_1485fbe34 body=683 status=ok
// SIG undefined FUN_1485fbe34(void)

void FUN_1485fbe34(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
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
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  iVar2 = local_54;
  local_70 = 0;
  local_68 = 0xffffffffffffffff;
  local_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  uVar1 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140665542(local_90,&local_70);
  local_80 = local_60;
  local_a8 = iVar2 != 0;
  local_98 = uVar1;
  local_a0 = local_90;
  uVar3 = (**(code **)(*param_1 + 0x30))(param_1,local_40,local_48,local_50);
  *param_3 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fc0e8 FUN_1485fc0e8 body=537 status=ok
// SIG undefined FUN_1485fc0e8(void)

void FUN_1485fc0e8(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auStack_c8 [32];
  int local_a8;
  longlong local_98;
  int local_90;
  longlong local_88 [2];
  longlong local_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  int local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_1 == 0) {
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    FUN_140ba791a(param_1,&local_48);
  }
  FUN_140beea4a(&local_58,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (1 < *(int *)(param_2 + 1)) {
    FUN_140b127b8(&local_58,*param_2,*(int *)(param_2 + 1) + -1,1);
  }
  local_48 = param_1[1];
  if (local_48 == 0) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    FUN_1400021e4(&local_48,&local_68);
  }
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  local_a8 = iVar1 + 1 + (uint)(local_50 == 0);
  local_98 = 0;
  FUN_14125bce8(&local_98,local_58,local_50,0);
  FUN_1401aebe8(&local_98,*param_3,iVar1);
  iVar1 = (int)uStack_60 + -1;
  if ((int)uStack_60 == 0) {
    iVar1 = 0;
  }
  FUN_1412cfe60(local_88,&local_98,iVar1 + 1 + (uint)(local_90 == 0));
  FUN_1401aebe8(local_88,local_68,iVar1);
  FUN_144a882a8(&local_48,local_88,&DAT_149e0635c);
  FUN_144a7dea0(&local_78,&local_48,&local_68);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  local_48 = local_78;
  iVar1 = local_70 + -1;
  if (local_70 == 0) {
    iVar1 = 0;
  }
  uStack_40 = CONCAT44(uStack_40._4_4_,iVar1);
  FUN_14475bf92(param_1);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fc302 FUN_1485fc302 body=72 status=ok
// SIG undefined FUN_1485fc302(void)

undefined8 FUN_1485fc302(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_140d56edc();
  lVar3 = *(longlong *)(lVar1 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar1);
    lVar3 = *(longlong *)(lVar1 + 0x110);
    if (lVar3 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_140d56e48(lVar3,param_1);
  return uVar2;
}



// FUNCTION 1485fc34a FUN_1485fc34a body=82 status=ok
// SIG undefined FUN_1485fc34a(void)

void FUN_1485fc34a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 != 0 && param_2 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    FUN_1438b0794(lVar1,param_2,uVar2,0,0);
  }
  return;
}



// FUNCTION 1485fc39c FUN_1485fc39c body=120 status=ok
// SIG undefined FUN_1485fc39c(void)

ulonglong FUN_1485fc39c(longlong param_1)

{
  undefined8 unaff_RBX;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140da2b58(param_1,&local_28);
  if (local_28 != 0) {
    FUN_140da2a90(local_28,*(undefined8 *)(param_1 + 0x38),0);
    *(undefined1 *)(param_1 + 0x14) = 2;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_144a61ac8(&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_28 != 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fc468 FUN_1485fc468 body=54 status=ok
// SIG undefined FUN_1485fc468(void)

undefined1 FUN_1485fc468(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1485fc57c(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 1485fc4c6 FUN_1485fc4c6 body=59 status=ok
// SIG undefined FUN_1485fc4c6(void)

undefined8 FUN_1485fc4c6(longlong *param_1)

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



// FUNCTION 1485fc50c FUN_1485fc50c body=34 status=ok
// SIG undefined FUN_1485fc50c(void)

void FUN_1485fc50c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1458c8d88(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1485fc57c FUN_1485fc57c body=72 status=ok
// SIG undefined FUN_1485fc57c(void)

longlong FUN_1485fc57c(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 1485fc5c6 FUN_1485fc5c6 body=31 status=ok
// SIG undefined FUN_1485fc5c6(void)

undefined8 FUN_1485fc5c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fc602 FUN_1485fc602 body=93 status=ok
// SIG undefined FUN_1485fc602(void)

void FUN_1485fc602(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afd06b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485fc660 FUN_1485fc660 body=123 status=ok
// SIG undefined FUN_1485fc660(void)

void FUN_1485fc660(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14afd06b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485fc6dc FUN_1485fc6dc body=21 status=ok
// SIG undefined FUN_1485fc6dc(void)

undefined8 FUN_1485fc6dc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485fc6f2 FUN_1485fc6f2 body=232 status=ok
// SIG undefined FUN_1485fc6f2(void)

void FUN_1485fc6f2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485fc7dc(param_1,local_1c,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fc7dc FUN_1485fc7dc body=192 status=ok
// SIG undefined FUN_1485fc7dc(void)

void FUN_1485fc7dc(longlong param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x3a0);
  lVar1 = *(longlong *)(lVar2 + 0x8f0);
  if (lVar1 == param_3) {
    return;
  }
  if (lVar1 != 0) {
    FUN_140fa388e(*(undefined8 *)(param_1 + 0x398),*(undefined8 *)(lVar1 + 0x40));
    lVar2 = *(longlong *)(param_1 + 0x3a0);
  }
  *(longlong *)(lVar2 + 0x8f8) = param_3;
  FUN_14112cdf4(lVar2);
  FUN_14112cb58(lVar2);
  if (0.0 < param_2) {
    *(undefined4 *)(param_1 + 0x3a8) = 0x3f800000;
    *(float *)(param_1 + 0x3ac) = 1.0 / param_2;
    FUN_140cbebe8(param_1 + 0x30,1);
    return;
  }
  FUN_140fa37dc(*(undefined8 *)(param_1 + 0x3a0));
  return;
}



// FUNCTION 1485fc8cc FUN_1485fc8cc body=157 status=ok
// SIG undefined FUN_1485fc8cc(void)

void FUN_1485fc8cc(longlong *param_1,longlong param_2)

{
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
  (**(code **)(*param_1 + 0x18))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fc96a FUN_1485fc96a body=157 status=ok
// SIG undefined FUN_1485fc96a(void)

void FUN_1485fc96a(longlong *param_1,longlong param_2)

{
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
  (**(code **)(*param_1 + 0x10))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fca08 FUN_1485fca08 body=157 status=ok
// SIG undefined FUN_1485fca08(void)

void FUN_1485fca08(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x20))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fcad2 FUN_1485fcad2 body=167 status=ok
// SIG undefined FUN_1485fcad2(void)

void FUN_1485fcad2(longlong param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  
  FUN_1404d1fb0();
  fVar2 = *(float *)(param_1 + 0x3a8) - param_2 * *(float *)(param_1 + 0x3ac);
  *(float *)(param_1 + 0x3a8) = fVar2;
  FUN_140fa38fc(*(undefined8 *)(param_1 + 0x3a0),1.0 - fVar2);
  if (0.0 < *(float *)(param_1 + 0x3a8)) {
    return;
  }
  FUN_140fa37dc(*(undefined8 *)(param_1 + 0x3a0));
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3a0) + 0x8f0);
  if (lVar1 != 0) {
    FUN_140fa388e(*(undefined8 *)(param_1 + 0x398),*(undefined8 *)(lVar1 + 0x40));
  }
  FUN_140cbebe8(param_1 + 0x30,0);
  return;
}



// FUNCTION 1485fcb82 FUN_1485fcb82 body=45 status=ok
// SIG undefined FUN_1485fcb82(void)

longlong FUN_1485fcb82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1403aec46(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fcbb0 FUN_1485fcbb0 body=48 status=ok
// SIG undefined FUN_1485fcbb0(void)

longlong FUN_1485fcbb0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1403aec46(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fcbe0 FUN_1485fcbe0 body=48 status=ok
// SIG undefined FUN_1485fcbe0(void)

longlong FUN_1485fcbe0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1403aec46(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fcc10 FUN_1485fcc10 body=48 status=ok
// SIG undefined FUN_1485fcc10(void)

longlong FUN_1485fcc10(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1403aec46(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fcc82 FUN_1485fcc82 body=121 status=ok
// SIG undefined FUN_1485fcc82(void)

undefined8 FUN_1485fcc82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    do {
      *(undefined1 *)(param_2 + lVar12) = *(undefined1 *)(param_3 + lVar12);
      lVar11 = *(longlong *)(param_3 + 8 + lVar12);
      if (DAT_14c950c29 == '\x01') {
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          FUN_14689c22e();
          lVar11 = *(longlong *)(param_3 + 8 + lVar12);
        }
      }
      lVar1 = param_2 + lVar12;
      *(longlong *)(lVar1 + 8) = lVar11;
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar12);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x19 + lVar12);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(lVar1 + 0x10) = *puVar2;
      *(undefined4 *)(lVar1 + 0x14) = uVar4;
      *(undefined4 *)(lVar1 + 0x18) = uVar5;
      *(undefined4 *)(lVar1 + 0x1c) = uVar6;
      *(undefined4 *)(lVar1 + 0x19) = uVar7;
      *(undefined4 *)(lVar1 + 0x1d) = uVar8;
      *(undefined4 *)(lVar1 + 0x21) = uVar9;
      *(undefined4 *)(lVar1 + 0x25) = uVar10;
      lVar12 = lVar12 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1485fcd24 FUN_1485fcd24 body=59 status=ok
// SIG undefined FUN_1485fcd24(void)

undefined8 FUN_1485fcd24(longlong *param_1)

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



// FUNCTION 1485fcdc6 FUN_1485fcdc6 body=36 status=ok
// SIG undefined FUN_1485fcdc6(void)

undefined8 FUN_1485fcdc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485fce06 FUN_1485fce06 body=93 status=ok
// SIG undefined FUN_1485fce06(void)

void FUN_1485fce06(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afd3140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485fce64 FUN_1485fce64 body=126 status=ok
// SIG undefined FUN_1485fce64(void)

void FUN_1485fce64(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14afd3140;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485fced3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485fcee2 FUN_1485fcee2 body=21 status=ok
// SIG undefined FUN_1485fcee2(void)

undefined8 FUN_1485fcee2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485fcf04 FUN_1485fcf04 body=230 status=ok
// SIG undefined FUN_1485fcf04(void)

void FUN_1485fcf04(undefined8 param_1,longlong param_2)

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
  FUN_148601ee0(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fcfec FUN_1485fcfec body=157 status=ok
// SIG undefined FUN_1485fcfec(void)

void FUN_1485fcfec(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_148601654(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fd08a FUN_1485fd08a body=155 status=ok
// SIG undefined FUN_1485fd08a(void)

void FUN_1485fd08a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_14860211e(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fd126 FUN_1485fd126 body=148 status=ok
// SIG undefined FUN_1485fd126(void)

void FUN_1485fd126(undefined8 param_1,longlong param_2)

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
  FUN_14860172a(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fd1bc FUN_1485fd1bc body=230 status=ok
// SIG undefined FUN_1485fd1bc(void)

void FUN_1485fd1bc(undefined8 param_1,longlong param_2)

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
  FUN_148601fe2(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fd2a4 FUN_1485fd2a4 body=230 status=ok
// SIG undefined FUN_1485fd2a4(void)

void FUN_1485fd2a4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
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
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148601994(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fd38c FUN_1485fd38c body=148 status=ok
// SIG undefined FUN_1485fd38c(void)

void FUN_1485fd38c(undefined8 param_1,longlong param_2)

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
  FUN_14860185e(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fd422 FUN_1485fd422 body=230 status=ok
// SIG undefined FUN_1485fd422(void)

void FUN_1485fd422(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
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
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148601ede(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fd510 FUN_1485fd510 body=521 status=ok
// SIG undefined FUN_1485fd510(void)

void FUN_1485fd510(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_60 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  _Src = local_58;
  uVar2 = local_5c;
  iVar1 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_50;
  local_68 = (int)uStack_50;
  if (lVar3 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,uStack_50 & 0xffffffff,0);
    memcpy(local_70,_Src,lVar3 * 2);
  }
  FUN_148601a78(local_48,&local_70,uVar2,iVar1 != 0);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fd71a FUN_1485fd71a body=230 status=ok
// SIG undefined FUN_1485fd71a(void)

void FUN_1485fd71a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
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
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148601edc(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fd856 FUN_1485fd856 body=180 status=ok
// SIG undefined FUN_1485fd856(void)

void FUN_1485fd856(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148607904(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fd90c FUN_1485fd90c body=238 status=ok
// SIG undefined FUN_1485fd90c(void)

void FUN_1485fd90c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148601eb0(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fd9fc FUN_1485fd9fc body=198 status=ok
// SIG undefined FUN_1485fd9fc(void)

void FUN_1485fd9fc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0x41200000;
  local_34 = 0;
  local_30 = 0x4120000000000000;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c26506(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fdada FUN_1485fdada body=180 status=ok
// SIG undefined FUN_1485fdada(void)

void FUN_1485fdada(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148607a12(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fdb90 FUN_1485fdb90 body=154 status=ok
// SIG undefined FUN_1485fdb90(void)

void FUN_1485fdb90(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148607dd0(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fdc42 FUN_1485fdc42 body=156 status=ok
// SIG undefined FUN_1485fdc42(void)

void FUN_1485fdc42(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148607c0a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fdce0 FUN_1485fdce0 body=260 status=ok
// SIG undefined FUN_1485fdce0(void)

void FUN_1485fdce0(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_143c2fc44(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fdde6 FUN_1485fdde6 body=260 status=ok
// SIG undefined FUN_1485fdde6(void)

void FUN_1485fdde6(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_143c3029e(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fdef0 FUN_1485fdef0 body=158 status=ok
// SIG undefined FUN_1485fdef0(void)

void FUN_1485fdef0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148607b14(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fdf94 FUN_1485fdf94 body=158 status=ok
// SIG undefined FUN_1485fdf94(void)

void FUN_1485fdf94(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c2f860(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fe038 FUN_1485fe038 body=158 status=ok
// SIG undefined FUN_1485fe038(void)

void FUN_1485fe038(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c2ff56(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fe0d8 FUN_1485fe0d8 body=238 status=ok
// SIG undefined FUN_1485fe0d8(void)

void FUN_1485fe0d8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148601ec6(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fe1c8 FUN_1485fe1c8 body=198 status=ok
// SIG undefined FUN_1485fe1c8(void)

void FUN_1485fe1c8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0x41200000;
  local_34 = 0;
  local_30 = 0x4120000000000000;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c266a2(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485fe300 FUN_1485fe300 body=48 status=ok
// SIG undefined FUN_1485fe300(void)

longlong FUN_1485fe300(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145c695f8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485fe3f8 FUN_1485fe3f8 body=59 status=ok
// SIG undefined FUN_1485fe3f8(void)

undefined8 FUN_1485fe3f8(longlong *param_1)

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



// FUNCTION 1485fe4ce FUN_1485fe4ce body=54 status=ok
// SIG undefined FUN_1485fe4ce(void)

undefined1 FUN_1485fe4ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1485fe5e6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1485fe52c FUN_1485fe52c body=59 status=ok
// SIG undefined FUN_1485fe52c(void)

undefined8 FUN_1485fe52c(longlong *param_1)

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



// FUNCTION 1485fe572 FUN_1485fe572 body=37 status=ok
// SIG undefined FUN_1485fe572(void)

void FUN_1485fe572(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1485fe5e6 FUN_1485fe5e6 body=92 status=ok
// SIG undefined FUN_1485fe5e6(void)

undefined8 * FUN_1485fe5e6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1485fe642(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 1485fe642 FUN_1485fe642 body=121 status=ok
// SIG undefined FUN_1485fe642(void)

void FUN_1485fe642(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
    iVar2 = (int)(uVar1 / 0x1c);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1c,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1485fe6ea FUN_1485fe6ea body=83 status=ok
// SIG undefined FUN_1485fe6ea(void)

undefined1 FUN_1485fe6ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      puVar1 = (undefined4 *)(param_3 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = *(undefined4 *)((longlong)puVar1 + 0xd);
      uVar8 = *(undefined4 *)((longlong)puVar1 + 0x11);
      uVar9 = *(undefined4 *)((longlong)puVar1 + 0x15);
      puVar2 = (undefined4 *)(param_2 + lVar10);
      *(undefined4 *)((longlong)puVar2 + 9) = *(undefined4 *)((longlong)puVar1 + 9);
      *(undefined4 *)((longlong)puVar2 + 0xd) = uVar7;
      *(undefined4 *)((longlong)puVar2 + 0x11) = uVar8;
      *(undefined4 *)((longlong)puVar2 + 0x15) = uVar9;
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_14123c256();
      lVar10 = lVar10 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1485fe766 FUN_1485fe766 body=59 status=ok
// SIG undefined FUN_1485fe766(void)

undefined8 FUN_1485fe766(longlong *param_1)

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



// FUNCTION 1485fe860 FUN_1485fe860 body=63 status=ok
// SIG undefined FUN_1485fe860(void)

undefined1 FUN_1485fe860(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1485fe97c(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 1485fe8c8 FUN_1485fe8c8 body=59 status=ok
// SIG undefined FUN_1485fe8c8(void)

undefined8 FUN_1485fe8c8(longlong *param_1)

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



// FUNCTION 1485fe914 FUN_1485fe914 body=38 status=ok
// SIG undefined FUN_1485fe914(void)

void FUN_1485fe914(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_140cf2fae(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1485fe97c FUN_1485fe97c body=154 status=ok
// SIG undefined FUN_1485fe97c(void)

longlong FUN_1485fe97c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_1485fea16(param_1 + 0x40,param_2 + 0x40);
  FUN_1485fea16(param_1 + 0x50,param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  FUN_1485fea66(param_1 + 0x70,param_2 + 0x70);
  FUN_1485fea66(param_1 + 0x80,param_2 + 0x80);
  FUN_1485fea66(param_1 + 0x90,param_2 + 0x90);
  return param_1;
}



// FUNCTION 1485fea16 FUN_1485fea16 body=79 status=ok
// SIG undefined FUN_1485fea16(void)

undefined8 * FUN_1485fea16(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1485feac4(param_1,iVar1);
      FUN_1485feb33(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1485fea66 FUN_1485fea66 body=93 status=ok
// SIG undefined FUN_1485fea66(void)

undefined8 * FUN_1485fea66(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140cf30cb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1485feb80(param_1,iVar1);
      FUN_1485febf3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1485feac4 FUN_1485feac4 body=111 status=ok
// SIG undefined FUN_1485feac4(void)

void FUN_1485feac4(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1485feb33 FUN_1485feb33 body=76 status=ok
// SIG undefined FUN_1485feb33(void)

void FUN_1485feb33(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      uVar1 = *(undefined4 *)(param_2 + -0x20);
      uVar2 = *(undefined4 *)(param_2 + -0x1c);
      uVar3 = *(undefined4 *)(param_2 + -0x18);
      uVar4 = *(undefined4 *)(param_2 + -0x14);
      uVar5 = *(undefined4 *)(param_2 + -0x13);
      uVar6 = *(undefined4 *)(param_2 + -0xf);
      uVar7 = *(undefined4 *)(param_2 + -0xb);
      *(undefined4 *)(param_1 + -0x17) = *(undefined4 *)(param_2 + -0x17);
      *(undefined4 *)(param_1 + -0x13) = uVar5;
      *(undefined4 *)(param_1 + -0xf) = uVar6;
      *(undefined4 *)(param_1 + -0xb) = uVar7;
      *(undefined4 *)(param_1 + -0x20) = uVar1;
      *(undefined4 *)(param_1 + -0x1c) = uVar2;
      *(undefined4 *)(param_1 + -0x18) = uVar3;
      *(undefined4 *)(param_1 + -0x14) = uVar4;
      FUN_141818f7a(param_1,param_2);
      param_1 = param_1 + 0x38;
      param_2 = param_2 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1485feb80 FUN_1485feb80 body=115 status=ok
// SIG undefined FUN_1485feb80(void)

void FUN_1485feb80(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1485febf3 FUN_1485febf3 body=60 status=ok
// SIG undefined FUN_1485febf3(void)

void FUN_1485febf3(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_143c25a42(param_1,param_2);
    param_1 = param_1 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return;
}



// FUNCTION 1485fec30 FUN_1485fec30 body=121 status=ok
// SIG undefined FUN_1485fec30(void)

void FUN_1485fec30(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
    iVar2 = (int)(uVar1 / 0x1c);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1c,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1485fecaa FUN_1485fecaa body=115 status=ok
// SIG undefined FUN_1485fecaa(void)

void FUN_1485fecaa(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,4);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1485fed1e FUN_1485fed1e body=115 status=ok
// SIG undefined FUN_1485fed1e(void)

void FUN_1485fed1e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1485fed91 FUN_1485fed91 body=52 status=ok
// SIG undefined FUN_1485fed91(void)

void FUN_1485fed91(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1485fee64 FUN_1485fee64 body=59 status=ok
// SIG undefined FUN_1485fee64(void)

undefined8 FUN_1485fee64(longlong *param_1)

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



// FUNCTION 1485fef42 FUN_1485fef42 body=118 status=ok
// SIG undefined FUN_1485fef42(void)

undefined8 FUN_1485fef42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined1 *)(lVar1 + -4) = *(undefined1 *)(param_3 + lVar2 + 0xc);
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_3 + lVar2 + 8);
      FUN_1485ff0d2();
      FUN_1485ff12e(param_2 + lVar2 + 0x20,param_3 + lVar2 + 0x20);
      FUN_140816ffa(param_2 + lVar2 + 0x30,param_3 + lVar2 + 0x30);
      lVar2 = lVar2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1485fefe0 FUN_1485fefe0 body=59 status=ok
// SIG undefined FUN_1485fefe0(void)

undefined8 FUN_1485fefe0(longlong *param_1)

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



// FUNCTION 1485ff026 FUN_1485ff026 body=32 status=ok
// SIG undefined FUN_1485ff026(void)

void FUN_1485ff026(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1485ff088(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1485ff088 FUN_1485ff088 body=73 status=ok
// SIG undefined FUN_1485ff088(void)

void FUN_1485ff088(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14afda310;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1485ff0d2 FUN_1485ff0d2 body=92 status=ok
// SIG undefined FUN_1485ff0d2(void)

undefined8 * FUN_1485ff0d2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1485fec30(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 1485ff12e FUN_1485ff12e body=89 status=ok
// SIG undefined FUN_1485ff12e(void)

undefined8 * FUN_1485ff12e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1485fecaa(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 1485ff214 FUN_1485ff214 body=59 status=ok
// SIG undefined FUN_1485ff214(void)

undefined8 FUN_1485ff214(longlong *param_1)

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



// FUNCTION 1485ff332 FUN_1485ff332 body=59 status=ok
// SIG undefined FUN_1485ff332(void)

undefined8 FUN_1485ff332(longlong *param_1)

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



// FUNCTION 1485ff45a FUN_1485ff45a body=59 status=ok
// SIG undefined FUN_1485ff45a(void)

undefined8 FUN_1485ff45a(longlong *param_1)

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



// FUNCTION 1485ff524 FUN_1485ff524 body=74 status=ok
// SIG undefined FUN_1485ff524(void)

undefined8 FUN_1485ff524(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -4) = *(undefined1 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1485ff64e(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1485ff596 FUN_1485ff596 body=59 status=ok
// SIG undefined FUN_1485ff596(void)

undefined8 FUN_1485ff596(longlong *param_1)

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



// FUNCTION 1485ff5dc FUN_1485ff5dc body=48 status=ok
// SIG undefined FUN_1485ff5dc(void)

void FUN_1485ff5dc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14afda8b0;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1485ff64e FUN_1485ff64e body=89 status=ok
// SIG undefined FUN_1485ff64e(void)

undefined8 * FUN_1485ff64e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1485ff6a8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x24);
      }
    }
  }
  return param_1;
}



// FUNCTION 1485ff6a8 FUN_1485ff6a8 body=115 status=ok
// SIG undefined FUN_1485ff6a8(void)

void FUN_1485ff6a8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x24,4);
    iVar2 = (int)(uVar1 / 0x24);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x24,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1485ff762 FUN_1485ff762 body=100 status=ok
// SIG undefined FUN_1485ff762(void)

undefined8 FUN_1485ff762(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined1 *)(param_2 + -0x1c) = *(undefined1 *)(param_3 + -0x1c);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1485ff7ee FUN_1485ff7ee body=59 status=ok
// SIG undefined FUN_1485ff7ee(void)

undefined8 FUN_1485ff7ee(longlong *param_1)

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



// FUNCTION 1485ff834 FUN_1485ff834 body=48 status=ok
// SIG undefined FUN_1485ff834(void)

void FUN_1485ff834(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14afdaa20;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1485ff8fa FUN_1485ff8fa body=63 status=ok
// SIG undefined FUN_1485ff8fa(void)

undefined1 FUN_1485ff8fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1485ffa16(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 1485ff962 FUN_1485ff962 body=59 status=ok
// SIG undefined FUN_1485ff962(void)

undefined8 FUN_1485ff962(longlong *param_1)

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



// FUNCTION 1485ff9ae FUN_1485ff9ae body=38 status=ok
// SIG undefined FUN_1485ff9ae(void)

void FUN_1485ff9ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_140cf30f4(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 1485ffa16 FUN_1485ffa16 body=125 status=ok
// SIG undefined FUN_1485ffa16(void)

longlong FUN_1485ffa16(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_1485ff0d2(param_1 + 0x20,param_2 + 0x20);
  FUN_1485ff12e(param_1 + 0x30,param_2 + 0x30);
  FUN_140816ffa(param_1 + 0x40,param_2 + 0x40);
  FUN_1485ffa94(param_1 + 0x50,param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  uVar4 = *(undefined4 *)(param_2 + 0x69);
  uVar5 = *(undefined4 *)(param_2 + 0x6d);
  uVar6 = *(undefined4 *)(param_2 + 0x71);
  uVar7 = *(undefined4 *)(param_2 + 0x75);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0x69) = uVar4;
  *(undefined4 *)(param_1 + 0x6d) = uVar5;
  *(undefined4 *)(param_1 + 0x71) = uVar6;
  *(undefined4 *)(param_1 + 0x75) = uVar7;
  FUN_140bee9ec(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



// FUNCTION 1485ffa94 FUN_1485ffa94 body=93 status=ok
// SIG undefined FUN_1485ffa94(void)

undefined8 * FUN_1485ffa94(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_143c259f9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1485fed1e(param_1,iVar1);
      FUN_1485fed91(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1485ffb84 FUN_1485ffb84 body=59 status=ok
// SIG undefined FUN_1485ffb84(void)

undefined8 FUN_1485ffb84(longlong *param_1)

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



// FUNCTION 1485ffc24 FUN_1485ffc24 body=34 status=ok
// SIG undefined FUN_1485ffc24(void)

undefined8 FUN_1485ffc24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1485ffc46 FUN_1485ffc46 body=55 status=ok
// SIG undefined FUN_1485ffc46(void)

void FUN_1485ffc46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53f28 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53f28 = FUN_140002ddd(FUN_1464ac1b2,uVar1,L"TimeOfDayPropertyParameter");
  }
  return;
}



// FUNCTION 1485ffd0a FUN_1485ffd0a body=59 status=ok
// SIG undefined FUN_1485ffd0a(void)

undefined8 FUN_1485ffd0a(longlong *param_1)

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



// FUNCTION 1485ffe24 FUN_1485ffe24 body=59 status=ok
// SIG undefined FUN_1485ffe24(void)

undefined8 FUN_1485ffe24(longlong *param_1)

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



// FUNCTION 1485fff3e FUN_1485fff3e body=59 status=ok
// SIG undefined FUN_1485fff3e(void)

undefined8 FUN_1485fff3e(longlong *param_1)

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



// FUNCTION 14860005a FUN_14860005a body=59 status=ok
// SIG undefined FUN_14860005a(void)

undefined8 FUN_14860005a(longlong *param_1)

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



// FUNCTION 148600172 FUN_148600172 body=59 status=ok
// SIG undefined FUN_148600172(void)

undefined8 FUN_148600172(longlong *param_1)

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



// FUNCTION 1486002a8 FUN_1486002a8 body=59 status=ok
// SIG undefined FUN_1486002a8(void)

undefined8 FUN_1486002a8(longlong *param_1)

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



// FUNCTION 1486003a6 FUN_1486003a6 body=86 status=ok
// SIG undefined FUN_1486003a6(void)

undefined8 FUN_1486003a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148600424 FUN_148600424 body=59 status=ok
// SIG undefined FUN_148600424(void)

undefined8 FUN_148600424(longlong *param_1)

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



// FUNCTION 14860046a FUN_14860046a body=48 status=ok
// SIG undefined FUN_14860046a(void)

void FUN_14860046a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14afdb7f0;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 1486004e8 FUN_1486004e8 body=62 status=ok
// SIG undefined FUN_1486004e8(void)

undefined8 * FUN_1486004e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14afdb7f0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 148600526 FUN_148600526 body=55 status=ok
// SIG undefined FUN_148600526(void)

void FUN_148600526(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53fd0 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53fd0 = FUN_140002ddd(FUN_1464ac4c3,uVar1,L"TimeOfDayPropertyParameterObject");
  }
  return;
}



// FUNCTION 148600564 FUN_148600564 body=87 status=ok
// SIG undefined FUN_148600564(void)

void FUN_148600564(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1412e3d1e(&local_28);
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_24;
  *(undefined4 *)(param_2 + 2) = uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148600622 FUN_148600622 body=59 status=ok
// SIG undefined FUN_148600622(void)

undefined8 FUN_148600622(longlong *param_1)

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



// FUNCTION 14860073a FUN_14860073a body=59 status=ok
// SIG undefined FUN_14860073a(void)

undefined8 FUN_14860073a(longlong *param_1)

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



// FUNCTION 14860085e FUN_14860085e body=59 status=ok
// SIG undefined FUN_14860085e(void)

undefined8 FUN_14860085e(longlong *param_1)

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



// FUNCTION 148600974 FUN_148600974 body=59 status=ok
// SIG undefined FUN_148600974(void)

undefined8 FUN_148600974(longlong *param_1)

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



// FUNCTION 148600a16 FUN_148600a16 body=3021 status=ok
// SIG undefined FUN_148600a16(void)

void FUN_148600a16(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_178 [40];
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  undefined2 *local_140;
  undefined2 *local_138;
  longlong local_130;
  undefined2 *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int local_f0;
  undefined2 *local_e8;
  int local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined2 *local_c8;
  int local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined2 *local_98 [7];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb543e4) && (FUN_144b3d300(&DAT_14cb543e4), DAT_14cb543e4 == -1)) {
    FUN_1446ddc76(&DAT_14cb543dc,"TimeOfDay",1);
    _Init_thread_footer(&DAT_14cb543e4);
  }
  if ((param_1 == (longlong *)0x0 || param_2 == 0) ||
     (cVar4 = (**(code **)(*param_1 + 0x690))(param_1,&DAT_14cb543dc), cVar4 == '\0'))
  goto LAB_148600ae2;
  uVar7 = FUN_1447210f0(param_1);
  FUN_1404d1e78(&local_b8,uVar7);
  if ((local_b8 != 0) && ((local_b0 != (longlong *)0x0 && (0 < (int)local_b0[1])))) {
    iVar5 = (int)local_b0[1];
    do {
      if (iVar5 == 0) {
        plVar12 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar6 = (int)local_b0[1];
      bVar18 = iVar5 == iVar6;
      if (bVar18) {
        *(int *)(local_b0 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      iVar5 = iVar6;
      UNLOCK();
      plVar12 = local_b0;
    } while (!bVar18);
    lVar13 = 0;
    if (plVar12 != (longlong *)0x0) {
      lVar13 = local_b8;
    }
    *(undefined4 *)(param_2 + 0xd8) = 0;
    *(undefined4 *)(param_2 + 0xdc) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xe0) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
    param_2 = param_2 + 0xa8;
    local_a8 = (undefined2 *)((ulonglong)local_a8 & 0xffffffff00000000);
    FUN_140002266(local_98 + 2,L"Current Time of Day: %.6f",(double)*(float *)(lVar13 + 500));
    FUN_147d8f316(param_2,local_98 + 2,&local_a8);
    if (local_98[2] != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar7 = FUN_14571e1e4();
    FUN_1401cfad2(uVar7,&local_c8,*(undefined1 *)(lVar13 + 0x1b0));
    local_a8 = (undefined2 *)((ulonglong)local_a8 & 0xffffffff00000000);
    puVar16 = local_c8;
    if (local_c0 == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    FUN_140002266(local_98 + 2,L"Current Time of Day State: %s",puVar16);
    FUN_147d8f316(param_2,local_98 + 2,&local_a8);
    if (local_98[2] != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_98[2] = *(undefined2 **)(lVar13 + 0x430);
    FUN_1400021e4(local_98 + 2,&local_d8);
    local_a8 = (undefined2 *)((ulonglong)local_a8 & 0xffffffff00000000);
    puVar16 = local_d8;
    if (local_d0 == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    FUN_140002266(local_98 + 2,L"Last Time of Day Bookmark: %s",puVar16);
    FUN_147d8f316(param_2,local_98 + 2,&local_a8);
    if (local_98[2] != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_98[4] = *(undefined2 **)(lVar13 + 0x1c4);
    local_98[2] = *(undefined2 **)(lVar13 + 0x1b4);
    local_98[3] = *(undefined2 **)(lVar13 + 0x1bc);
    FUN_1400021e4(local_98 + 2,&local_e8);
    local_a8 = (undefined2 *)((ulonglong)local_a8 & 0xffffffff00000000);
    puVar16 = local_e8;
    if (local_e0 == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    FUN_140002266(local_98 + 2,L"Current Time of Day Weather State: %s",puVar16);
    FUN_147d8f316(param_2,local_98 + 2,&local_a8);
    if (local_98[2] != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar8 = FUN_14479d2ce(lVar13 + 0x238);
    if (lVar8 != 0) {
      lVar3 = *(longlong *)(*(longlong *)(lVar8 + 0x3f8) + 0x8f0);
      local_f8 = 0;
      if (lVar3 == 0) {
        FUN_140002266(local_98 + 2,L"Current Time of Day Cloudscape: %s",&DAT_149e01fe8);
        FUN_147d8f316(param_2,local_98 + 2,&local_f8);
        puVar16 = local_98[2];
      }
      else {
        local_98[2] = *(undefined2 **)(lVar3 + 0x18);
        FUN_1400021e4(local_98 + 2,&local_a8);
        puVar16 = local_a8;
        if ((int)uStack_a0 == 0) {
          puVar16 = &DAT_149dfb77a;
        }
        FUN_140002266(local_98 + 2,L"Current Time of Day Cloudscape: %s",puVar16);
        FUN_147d8f316(param_2,local_98 + 2,&local_f8);
        puVar16 = local_a8;
        if (local_98[2] != (undefined2 *)0x0) {
          FUN_1400020a8();
          puVar16 = local_a8;
        }
      }
      if (puVar16 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (0.0 < *(float *)(lVar13 + 0x248)) {
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x3f8) + 0x8f8);
        local_f8 = 0;
        if (lVar8 == 0) {
          FUN_140002266(local_98 + 2,L"Transitioning to cloudscape: %s",&DAT_149e01fe8);
          FUN_147d8f316(param_2,local_98 + 2,&local_f8);
          puVar16 = local_98[2];
        }
        else {
          local_98[2] = *(undefined2 **)(lVar8 + 0x18);
          FUN_1400021e4(local_98 + 2,&local_a8);
          puVar16 = local_a8;
          if ((int)uStack_a0 == 0) {
            puVar16 = &DAT_149dfb77a;
          }
          FUN_140002266(local_98 + 2,L"Transitioning to cloudscape: %s",puVar16);
          FUN_147d8f316(param_2,local_98 + 2,&local_f8);
          puVar16 = local_a8;
          if (local_98[2] != (undefined2 *)0x0) {
            FUN_1400020a8();
            puVar16 = local_a8;
          }
        }
        if (puVar16 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (((*(longlong *)(lVar13 + 0x250) != 0) &&
          (plVar17 = *(longlong **)(lVar13 + 600), plVar17 != (longlong *)0x0)) &&
         (0 < (int)plVar17[1])) {
        uVar7 = 0;
        iVar5 = (int)plVar17[1];
        do {
          iVar6 = iVar5;
          if (iVar6 == 0) {
            plVar17 = (longlong *)0x0;
            goto LAB_148600f3d;
          }
          LOCK();
          iVar5 = (int)plVar17[1];
          bVar18 = iVar6 == iVar5;
          if (bVar18) {
            *(int *)(plVar17 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          UNLOCK();
        } while (!bVar18);
        uVar7 = *(undefined8 *)(lVar13 + 0x250);
LAB_148600f3d:
        local_f8 = 0;
        lVar8 = FUN_140fa3a32(uVar7);
        if (lVar8 == 0) {
          FUN_140002266(local_98 + 2,L"Queued cloudscape transition: %s",&DAT_149e01fe8);
          FUN_147d8f316(param_2,local_98 + 2,&local_f8);
          puVar16 = local_98[2];
        }
        else {
          lVar8 = FUN_140fa3a32(uVar7);
          local_98[2] = *(undefined2 **)(lVar8 + 0x18);
          FUN_1400021e4(local_98 + 2,&local_a8);
          puVar16 = local_a8;
          if ((int)uStack_a0 == 0) {
            puVar16 = &DAT_149dfb77a;
          }
          FUN_140002266(local_98 + 2,L"Queued cloudscape transition: %s",puVar16);
          FUN_147d8f316(param_2,local_98 + 2,&local_f8);
          puVar16 = local_a8;
          if (local_98[2] != (undefined2 *)0x0) {
            FUN_1400020a8();
            puVar16 = local_a8;
          }
        }
        if (puVar16 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (iVar6 != 0) {
          LOCK();
          plVar2 = plVar17 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
        }
      }
    }
    lVar8 = *(longlong *)(lVar13 + 0x180);
    lVar3 = *(longlong *)(lVar13 + 0x188);
    local_98[4] = (undefined2 *)0x0;
    local_98[5] = (undefined2 *)0x0;
    local_98[2] = (undefined2 *)0x0;
    local_98[3] = (undefined2 *)0x0;
    local_98[0] = (undefined2 *)0x0;
    local_98[1] = (undefined2 *)0x0;
    local_a8 = (undefined2 *)0x0;
    uStack_a0 = 0;
    FUN_1400021e4(lVar13 + 400,&local_f8);
    local_140 = (undefined2 *)CONCAT44(uStack_f4,local_f8);
    local_150 = local_f0;
    local_98[2] = local_140;
    FUN_1400021e4(lVar13 + 0x198,&local_f8);
    puVar16 = (undefined2 *)CONCAT44(uStack_f4,local_f8);
    local_144 = local_f0;
    local_98[4] = puVar16;
    FUN_1400021e4(lVar13 + 0x1a0,&local_f8);
    local_138 = (undefined2 *)CONCAT44(uStack_f4,local_f8);
    local_14c = local_f0;
    local_a8 = local_138;
    FUN_1400021e4(lVar13 + 0x1a8,&local_f8);
    puVar15 = (undefined2 *)CONCAT44(uStack_f4,local_f8);
    local_98[0] = puVar15;
    if (lVar3 == 0) {
      if (lVar8 == 0) {
        local_118 = (undefined2 *)((ulonglong)local_118._4_4_ << 0x20);
        FUN_140056680(&local_f8,L"No time of day cycle is active.");
        goto LAB_14860131e;
      }
      local_128 = (undefined2 *)((ulonglong)local_128 & 0xffffffff00000000);
      puVar9 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar8 + 8) != (undefined4 *)0x0) {
        puVar9 = *(undefined4 **)(lVar8 + 8);
      }
      local_118 = (undefined2 *)0x0;
      uStack_110 = 0;
      FUN_1400b2348(puVar9,&local_118,1);
      puVar16 = local_118;
      if ((int)uStack_110 == 0) {
        puVar16 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_f8,L"Current Time of Day Cycle: %s",puVar16);
      FUN_147d8f316(param_2,&local_f8,&local_128);
      if (CONCAT44(uStack_f4,local_f8) != 0) {
        FUN_1400020a8();
      }
      if (local_118 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_118 = (undefined2 *)((ulonglong)local_118 & 0xffffffff00000000);
      puVar16 = local_140;
      if (local_150 == 0) {
        puVar16 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_f8,L"Current Base Layer: %s",puVar16);
      FUN_147d8f316(param_2,&local_f8,&local_118);
      if (CONCAT44(uStack_f4,local_f8) != 0) {
        FUN_1400020a8();
      }
      local_118 = (undefined2 *)((ulonglong)local_118 & 0xffffffff00000000);
      puVar16 = local_138;
      if (local_14c == 0) {
        puVar16 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_f8,L"Current Weather Layer: %s",puVar16);
      FUN_147d8f316(param_2,&local_f8,&local_118);
      if (CONCAT44(uStack_f4,local_f8) != 0) {
        FUN_1400020a8();
      }
      fVar19 = *(float *)(lVar13 + 0x244);
      if (0.0 < fVar19) {
        local_118 = (undefined2 *)((ulonglong)local_118 & 0xffffffff00000000);
        pwVar10 = L"Layer Transition Time Remaining: %.4f";
        goto LAB_148601309;
      }
    }
    else {
      local_148 = local_f0;
      local_fc = 0;
      puVar9 = *(undefined4 **)(lVar3 + 8);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = &DAT_14c9485f0;
      }
      local_118 = (undefined2 *)0x0;
      uStack_110 = 0;
      local_130 = lVar13;
      FUN_1400b2348(puVar9,&local_118,1);
      puVar14 = &DAT_149dfb77a;
      if ((int)uStack_110 != 0) {
        puVar14 = local_118;
      }
      puVar9 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar8 + 8) != (undefined4 *)0x0) {
        puVar9 = *(undefined4 **)(lVar8 + 8);
      }
      local_128 = (undefined2 *)0x0;
      uStack_120 = 0;
      FUN_1400b2348(puVar9,&local_128,1);
      puVar11 = &DAT_149dfb77a;
      if ((int)uStack_120 != 0) {
        puVar11 = local_128;
      }
      FUN_140002266(&local_f8,L"Transitioning from Time of Day Cycle %s to %s",puVar11,puVar14);
      FUN_147d8f316(param_2,&local_f8,&local_fc);
      if (CONCAT44(uStack_f4,local_f8) != 0) {
        FUN_1400020a8();
      }
      lVar13 = local_130;
      if (local_128 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_118 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_144 == 0) {
        puVar16 = &DAT_149dfb77a;
      }
      local_118 = (undefined2 *)((ulonglong)local_118 & 0xffffffff00000000);
      puVar14 = local_140;
      if (local_150 == 0) {
        puVar14 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_f8,L"Transitioning from Base Layer %s to %s",puVar14,puVar16);
      FUN_147d8f316(param_2,&local_f8,&local_118);
      if (CONCAT44(uStack_f4,local_f8) != 0) {
        FUN_1400020a8();
      }
      if (local_148 == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      local_118 = (undefined2 *)((ulonglong)local_118 & 0xffffffff00000000);
      puVar16 = local_138;
      if (local_14c == 0) {
        puVar16 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_f8,L"Transitioning from Weather Layer %s to %s",puVar16,puVar15);
      FUN_147d8f316(param_2,&local_f8,&local_118);
      if (CONCAT44(uStack_f4,local_f8) != 0) {
        FUN_1400020a8();
      }
      local_118 = (undefined2 *)((ulonglong)local_118 & 0xffffffff00000000);
      fVar19 = (float)FUN_1404fc0d6(lVar13);
      pwVar10 = L"Transition weight: %.4f";
LAB_148601309:
      FUN_140002266(&local_f8,pwVar10,(double)fVar19);
LAB_14860131e:
      FUN_147d8f316(param_2,&local_f8,&local_118);
      if (CONCAT44(uStack_f4,local_f8) != 0) {
        FUN_1400020a8();
      }
    }
    if (*(char *)(lVar13 + 0x51c) == '\x01') {
      local_118 = (undefined2 *)((ulonglong)local_118 & 0xffffffff00000000);
      FUN_140056680(&local_f8,L"Weather is being overridden by a weather override volume.");
      FUN_147d8f316(param_2,&local_f8,&local_118);
      if (CONCAT44(uStack_f4,local_f8) != 0) {
        FUN_1400020a8();
      }
    }
    lVar13 = 0x20;
    do {
      if (*(longlong *)((longlong)&local_b8 + lVar13) != 0) {
        FUN_1400020a8();
      }
      lVar13 = lVar13 + -0x10;
    } while (lVar13 != 0);
    lVar13 = 0x20;
    do {
      if (*(longlong *)((longlong)local_98 + lVar13) != 0) {
        FUN_1400020a8();
      }
      lVar13 = lVar13 + -0x10;
    } while (lVar13 != 0);
    if (local_e8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_d8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar12 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
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
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
LAB_148600ae2:
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14860161e FUN_14860161e body=40 status=ok
// SIG undefined FUN_14860161e(void)

undefined8 FUN_14860161e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14101b842(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148601654 FUN_148601654 body=212 status=ok
// SIG undefined FUN_148601654(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_148601654(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x180))();
  }
  FUN_1404d1e78(&local_30,uVar6);
  plVar3 = local_28;
  uVar8 = 0;
  if (((local_30 != 0) && (local_28 != (longlong *)0x0)) && (0 < (int)local_28[1])) {
    iVar5 = (int)local_28[1];
    do {
      uVar8 = _DAT_000001f4;
      if (iVar5 == 0) goto LAB_1486016ee;
      LOCK();
      iVar4 = (int)local_28[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar8 = *(undefined4 *)(local_30 + 500);
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1486016ee:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_28 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14860172a FUN_14860172a body=202 status=ok
// SIG undefined FUN_14860172a(void)

void FUN_14860172a(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1 != (longlong *)0x0) && (lVar5 = (**(code **)(*param_1 + 0x180))(), lVar5 != 0)) {
    FUN_1404d1e78(&local_20,lVar5);
    if ((local_20 != 0) && ((local_18 != (longlong *)0x0 && (0 < (int)local_18[1])))) {
      iVar4 = (int)local_18[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_18[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_18 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_18;
      } while (!bVar7);
      lVar5 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar5 = local_20;
      }
      FUN_1486017f6(lVar5);
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
    if (local_18 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_18 + 0x10))();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1486017f6 FUN_1486017f6 body=104 status=ok
// SIG undefined FUN_1486017f6(void)

void FUN_1486017f6(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x238);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x238);
    if (((char)plVar2[0x2f] == '\x03') && ((char)plVar2[0x9f] == '\0')) {
      (**(code **)(*plVar2 + 0x578))(plVar2);
      *(undefined1 *)(plVar2 + 0x9f) = 1;
      FUN_144a62f0c(plVar2,plVar2[5],0xd);
      return;
    }
  }
  return;
}



// FUNCTION 14860185e FUN_14860185e body=202 status=ok
// SIG undefined FUN_14860185e(void)

void FUN_14860185e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1 != (longlong *)0x0) && (lVar5 = (**(code **)(*param_1 + 0x180))(), lVar5 != 0)) {
    FUN_1404d1e78(&local_20,lVar5);
    if ((local_20 != 0) && ((local_18 != (longlong *)0x0 && (0 < (int)local_18[1])))) {
      iVar4 = (int)local_18[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_18[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_18 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_18;
      } while (!bVar7);
      lVar5 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar5 = local_20;
      }
      FUN_14860192a(lVar5);
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
    if (local_18 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_18 + 0x10))();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14860192a FUN_14860192a body=105 status=ok
// SIG undefined FUN_14860192a(void)

void FUN_14860192a(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x238);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x238);
    if (((char)plVar2[0x2f] == '\x03') && ((char)plVar2[0x9f] != '\0')) {
      (**(code **)(*plVar2 + 0x578))(plVar2);
      *(undefined1 *)(plVar2 + 0x9f) = 0;
      FUN_144a62f0c(plVar2,plVar2[5],0xd);
      return;
    }
  }
  return;
}



// FUNCTION 148601994 FUN_148601994 body=227 status=ok
// SIG undefined FUN_148601994(void)

void FUN_148601994(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x180))();
  }
  FUN_1404d1e78(&local_30,uVar5);
  if (((local_30 != 0) && (local_28 != (longlong *)0x0)) && (0 < (int)local_28[1])) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_28;
    } while (!bVar8);
    lVar6 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar6 = local_30;
    }
    FUN_1457d922a(lVar6,param_2,1);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148601a78 FUN_148601a78 body=1079 status=ok
// SIG undefined FUN_148601a78(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148601a78(longlong *param_1,longlong *param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0 [2];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x180))();
  }
  FUN_1404d1e78(&local_70,uVar6);
  if (((local_70 != 0) && (local_68 != (longlong *)0x0)) && (0 < (int)local_68[1])) {
    iVar5 = (int)local_68[1];
    do {
      if (iVar5 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_68[1];
      bVar12 = iVar5 == iVar3;
      if (bVar12) {
        *(int *)(local_68 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
      plVar10 = local_68;
    } while (!bVar12);
    lVar7 = 0;
    if (plVar10 != (longlong *)0x0) {
      lVar7 = local_70;
    }
    lVar7 = FUN_14479d2ce(lVar7 + 0x228);
    if (plVar10 != (longlong *)0x0) {
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
    if (lVar7 != 0) {
      lVar8 = FUN_140d3be2e(lVar7 + 0x3f0);
      if (lVar8 != 0) {
        if ((int)param_2[1] == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        else {
          puVar9 = (undefined2 *)*param_2;
        }
        FUN_1446f470e(&local_78,puVar9,1);
        if ((local_78 != 0) && ((longlong)*(int *)(lVar8 + 0x88) != 0)) {
          puVar11 = *(undefined8 **)(lVar8 + 0x80);
          lVar8 = (longlong)*(int *)(lVar8 + 0x88) * 0x90;
          do {
            puVar9 = &DAT_149dfb77a;
            if (*(int *)(puVar11 + 1) != 0) {
              puVar9 = (undefined2 *)*puVar11;
            }
            cVar4 = FUN_1402ca022(local_78,puVar9);
            if (cVar4 != '\0') {
              if (puVar11 != (undefined8 *)0x0) {
                if ((int)param_2[1] == 0) {
                  puVar9 = &DAT_149dfb77a;
                }
                else {
                  puVar9 = (undefined2 *)*param_2;
                }
                FUN_1446f470e(&local_80,puVar9,1);
                (**(code **)(*(longlong *)(lVar7 + 0x3c8) + 0x38))(lVar7 + 0x3c8,local_80,param_3);
                goto LAB_148601c40;
              }
              break;
            }
            puVar11 = puVar11 + 0x12;
            lVar8 = lVar8 + -0x90;
          } while (lVar8 != 0);
        }
      }
      local_b0[1] = 0;
      _uStack_a0 = 0;
      local_98 = 0x41200000;
      local_94 = 0;
      local_90 = 0x4120000000000000;
      local_88 = 0;
      if ((int)param_2[1] == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = (undefined2 *)*param_2;
      }
      FUN_1446f470e(local_b0 + 1,puVar9,1);
      _uStack_a0 = CONCAT44(param_3,uStack_a0);
      local_98 = param_3;
      local_88 = param_4;
      FUN_143c26506(lVar7,local_b0 + 1);
    }
LAB_148601c40:
    if (local_68 == (longlong *)0x0) {
LAB_148601c5f:
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)local_68[1];
      do {
        if (iVar5 == 0) goto LAB_148601c5f;
        LOCK();
        iVar3 = (int)local_68[1];
        bVar12 = iVar5 == iVar3;
        if (bVar12) {
          *(int *)(local_68 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar10 = local_68;
      } while (!bVar12);
    }
    lVar7 = 0;
    if (plVar10 != (longlong *)0x0) {
      lVar7 = local_70;
    }
    lVar7 = FUN_14479d2ce(lVar7 + 0x238);
    if (plVar10 != (longlong *)0x0) {
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
    if (lVar7 != 0) {
      lVar8 = FUN_140d3be2e(lVar7 + 0x410);
      if (lVar8 != 0) {
        if ((int)param_2[1] == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        else {
          puVar9 = (undefined2 *)*param_2;
        }
        FUN_1446f470e(local_b0,puVar9,1);
        if ((local_b0[0] != 0) && ((longlong)*(int *)(lVar8 + 0x88) != 0)) {
          puVar11 = *(undefined8 **)(lVar8 + 0x80);
          lVar8 = (longlong)*(int *)(lVar8 + 0x88) * 0x90;
          do {
            puVar9 = &DAT_149dfb77a;
            if (*(int *)(puVar11 + 1) != 0) {
              puVar9 = (undefined2 *)*puVar11;
            }
            cVar4 = FUN_1402ca022(local_b0[0],puVar9);
            if (cVar4 != '\0') {
              if (puVar11 != (undefined8 *)0x0) {
                if ((int)param_2[1] == 0) {
                  puVar9 = &DAT_149dfb77a;
                }
                else {
                  puVar9 = (undefined2 *)*param_2;
                }
                FUN_1446f470e(&local_b8,puVar9,1);
                (**(code **)(*(longlong *)(lVar7 + 0x3a0) + 0x38))(lVar7 + 0x3a0,local_b8,param_3);
                goto LAB_148601d90;
              }
              break;
            }
            puVar11 = puVar11 + 0x12;
            lVar8 = lVar8 + -0x90;
          } while (lVar8 != 0);
        }
      }
      local_b0[1] = 0;
      _uStack_a0 = 0;
      local_98 = 0x41200000;
      local_94 = 0;
      local_90 = 0x4120000000000000;
      local_88 = 0;
      if ((int)param_2[1] == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = (undefined2 *)*param_2;
      }
      FUN_1446f470e(local_b0 + 1,puVar9,1);
      _uStack_a0 = CONCAT44(param_3,uStack_a0);
      local_98 = param_3;
      local_88 = param_4;
      FUN_143c266a2(lVar7,local_b0 + 1);
    }
  }
LAB_148601d90:
  if (local_68 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_68 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148601eb0 FUN_148601eb0 body=21 status=ok
// SIG undefined FUN_148601eb0(void)

void FUN_148601eb0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148601ec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x3c8) + 0x38))(param_1 + 0x3c8);
  return;
}



// FUNCTION 148601ec6 FUN_148601ec6 body=21 status=ok
// SIG undefined FUN_148601ec6(void)

void FUN_148601ec6(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148601ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x3a0) + 0x38))(param_1 + 0x3a0);
  return;
}



// FUNCTION 148601edc FUN_148601edc body=1 status=ok
// SIG undefined FUN_148601edc(void)

void FUN_148601edc(void)

{
  return;
}



// FUNCTION 148601ede FUN_148601ede body=1 status=ok
// SIG undefined FUN_148601ede(void)

void FUN_148601ede(void)

{
  return;
}



// FUNCTION 148601ee0 FUN_148601ee0 body=256 status=ok
// SIG undefined FUN_148601ee0(void)

void FUN_148601ee0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x180))();
  }
  FUN_1404d1e78(&local_40,uVar5);
  if (((local_40 != 0) && (local_38 != (longlong *)0x0)) && (0 < (int)local_38[1])) {
    iVar4 = (int)local_38[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_38[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_38 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_38;
    } while (!bVar8);
    if (param_2 != 0) {
      lVar6 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar6 = local_40;
      }
      local_30 = 0;
      FUN_14485c47a(&local_30,param_2);
      FUN_1468ca300(lVar6 + 0x1e0,&local_30);
    }
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
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_38 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148601fe2 FUN_148601fe2 body=212 status=ok
// SIG undefined FUN_148601fe2(void)

void FUN_148601fe2(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x180))();
  }
  FUN_1404d1e78(&local_28,uVar5);
  if (((local_28 != 0) && (local_20 != (longlong *)0x0)) && (0 < (int)local_20[1])) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_20;
    } while (!bVar8);
    lVar6 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar6 = local_28;
    }
    FUN_1486020b8(lVar6,param_2);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1486020b8 FUN_1486020b8 body=101 status=ok
// SIG undefined FUN_1486020b8(void)

void FUN_1486020b8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28);
    local_20 = &local_28;
    FUN_1411dbb96(param_1 + 0x1e0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14860211e FUN_14860211e body=209 status=ok
// SIG undefined FUN_14860211e(void)

ulonglong FUN_14860211e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  ulonglong uVar7;
  bool bVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x180))();
  }
  FUN_1404d1e78(&local_28,uVar6);
  plVar3 = local_20;
  if (((local_28 == 0) || (local_20 == (longlong *)0x0)) || ((int)local_20[1] < 1)) {
    uVar7 = 0;
  }
  else {
    iVar5 = (int)local_20[1];
    do {
      uVar8 = (undefined7)((ulonglong)&local_28 >> 8);
      if (iVar5 == 0) {
        uVar7 = CONCAT71(uVar8,DAT_000001b0);
        goto LAB_1486021a9;
      }
      LOCK();
      iVar4 = (int)local_20[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(local_20 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar7 = CONCAT71(uVar8,*(undefined1 *)(local_28 + 0x1b0));
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1486021a9:
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_20 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1486021f0 FUN_1486021f0 body=761 status=ok
// SIG undefined FUN_1486021f0(void)

void FUN_1486021f0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  byte bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  int local_c0;
  longlong *local_b8;
  longlong local_b0;
  byte *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  longlong *local_90;
  undefined4 local_88 [6];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14093cdbe(param_3);
  *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_3 + 0x84);
  local_88[3] = *(undefined4 *)(param_3 + 0x218);
  local_88[4] = *(undefined4 *)(param_3 + 0x21c);
  local_88[5] = *(undefined4 *)(param_3 + 0x220);
  lVar12 = 0;
  lVar11 = param_3 + 0x88;
  do {
    FUN_14093cdbe(lVar11);
    *(undefined4 *)(lVar11 + 0x68) = local_88[lVar12 + 3];
    lVar12 = lVar12 + 1;
    lVar11 = lVar11 + 0x80;
  } while (lVar12 != 3);
  uVar6 = FUN_1447210f0(param_1);
  FUN_1404d1e78(&local_98,uVar6);
  if (((local_98 != 0) && (local_90 != (longlong *)0x0)) && (0 < (int)local_90[1])) {
    iVar8 = (int)local_90[1];
    do {
      if (iVar8 == 0) {
        local_b8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar10 = (int)local_90[1];
      bVar13 = iVar8 == iVar10;
      if (bVar13) {
        *(int *)(local_90 + 1) = iVar8 + 1;
        iVar10 = iVar8;
      }
      iVar8 = iVar10;
      UNLOCK();
      local_b8 = local_90;
    } while (!bVar13);
    lVar11 = 0;
    if (local_b8 != (longlong *)0x0) {
      lVar11 = local_98;
    }
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      pbVar9 = (byte *)*param_2;
      local_a8 = pbVar9 + (longlong)*(int *)(param_2 + 1) * 0x1c;
      local_b0 = lVar11 + 0x408;
LAB_148602331:
      if (*(int *)(lVar11 + 0x3d8) != *(int *)(lVar11 + 0x404)) {
        bVar4 = *pbVar9;
        lVar12 = *(longlong *)(lVar11 + 0x410);
        if (*(longlong *)(lVar11 + 0x410) == 0) {
          lVar12 = local_b0;
        }
        iVar8 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar11 + 0x418) - 1U & (uint)bVar4) * 4);
        if (iVar8 != -1) {
          lVar12 = *(longlong *)(lVar11 + 0x3d0);
          iVar10 = iVar8;
          do {
            if (*(byte *)(lVar12 + (longlong)iVar10 * 0x10) == bVar4) goto LAB_14860239d;
            iVar10 = *(int *)((longlong)iVar10 * 0x10 + lVar12 + 8);
          } while (iVar10 != -1);
        }
      }
      goto LAB_148602341;
    }
LAB_148602472:
    plVar5 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_90 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar8 = *(int *)(lVar7 + 8), iVar8 != -1) {
LAB_14860239d:
    lVar7 = lVar12 + (longlong)iVar8 * 0x10;
    if (*(byte *)(lVar12 + (longlong)iVar8 * 0x10) == bVar4) goto LAB_1486023b8;
  }
  lVar7 = 0;
LAB_1486023b8:
  fVar3 = *(float *)(lVar7 + 4);
  iVar8 = 0;
  do {
    fVar14 = (float)iVar8 + fVar3;
    if (pbVar9[1] == 1) {
      LOCK();
      UNLOCK();
      local_c0 = DAT_14c761474 + 1;
      local_c8 = 0;
      DAT_14c761474 = DAT_14c761474 + 1;
      FUN_1406507bc(param_3,local_88,fVar14,*(undefined4 *)(pbVar9 + 4));
    }
    if (pbVar9[8] == 1) {
      local_88[0] = *(undefined4 *)(pbVar9 + 0xc);
      local_88[1] = *(undefined4 *)(pbVar9 + 0x10);
      local_88[2] = *(undefined4 *)(pbVar9 + 0x14);
      lVar7 = 0;
      lVar12 = param_3 + 0x88;
      do {
        LOCK();
        UNLOCK();
        local_c0 = DAT_14c761474 + 1;
        local_c8 = 0;
        DAT_14c761474 = DAT_14c761474 + 1;
        FUN_1406507bc(lVar12,local_9c,fVar14,local_88[lVar7]);
        lVar7 = lVar7 + 1;
        lVar12 = lVar12 + 0x80;
      } while (lVar7 != 3);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 3);
LAB_148602341:
  pbVar9 = pbVar9 + 0x1c;
  if (pbVar9 == local_a8) goto LAB_148602472;
  goto LAB_148602331;
}



// FUNCTION 1486024ea FUN_1486024ea body=360 status=ok
// SIG undefined FUN_1486024ea(void)

void FUN_1486024ea(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140206818();
  uVar5 = FUN_1447210f0(param_1);
  FUN_1404d1e78(&local_48,uVar5);
  if (((local_48 != 0) && (local_40 != (longlong *)0x0)) && (0 < (int)local_40[1])) {
    FUN_1486021f0(param_1,param_1 + 0x3b0,param_1 + 0x3c0);
    if (local_40 == (longlong *)0x0) {
LAB_148602599:
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)local_40[1];
      do {
        if (iVar4 == 0) goto LAB_148602599;
        LOCK();
        iVar3 = (int)local_40[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_40 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_40;
      } while (!bVar8);
    }
    lVar6 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar6 = local_48;
    }
    FUN_148602654(lVar6,param_1 + 0x3a8);
    local_60 = &LAB_14860284a;
    local_58 = 0;
    FUN_14860274a(lVar6 + 0x318,local_50,param_1,&local_60);
    local_60 = &LAB_14860284a;
    local_58 = 0;
    FUN_14860274a(lVar6 + 0x330,local_50,param_1,&local_60);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148602654 FUN_148602654 body=244 status=ok
// SIG undefined FUN_148602654(void)

void FUN_148602654(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (longlong *)0x0) {
    if ((*(longlong *)(param_1 + 0x200) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
      FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
    }
    FUN_148607742(&local_38,param_2);
    iVar2 = *(int *)(param_1 + 0x440);
    *(uint *)(param_1 + 0x440) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x444) < iVar2 + 1U) {
      FUN_14860c402((longlong *)(param_1 + 0x438),iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x438) + (longlong)iVar2 * 0x10);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    cVar3 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar3 != '\0') {
      (**(code **)(*param_2 + 0x18))(param_2,*(undefined4 *)(param_1 + 500));
      (**(code **)(*param_2 + 0x20))(param_2,*(undefined4 *)(param_1 + 500));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14860274a FUN_14860274a body=254 status=ok
// SIG undefined FUN_14860274a(void)

undefined8
FUN_14860274a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14afe2b10;
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
  *local_48 = &PTR_FUN_14afe2aa0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1486091c6(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14860285e FUN_14860285e body=238 status=ok
// SIG undefined FUN_14860285e(void)

void FUN_14860285e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar6 = DAT_14caca278;
  if (DAT_14caca280 == 0) {
    plVar6 = (longlong *)0x0;
  }
  (**(code **)(*plVar6 + 0x58))(plVar6,param_1);
  uVar5 = FUN_1447210f0(param_1);
  FUN_1404d1e78(&local_28,uVar5);
  if (((local_28 != 0) && (local_20 != (longlong *)0x0)) && (0 < (int)local_20[1])) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar8);
    lVar7 = 0;
    if (plVar6 != (longlong *)0x0) {
      lVar7 = local_28;
    }
    FUN_14860294e(lVar7,param_1 + 0x3a8);
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
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14860294e FUN_14860294e body=150 status=ok
// SIG undefined FUN_14860294e(void)

void FUN_14860294e(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if ((*(longlong *)(param_1 + 0x200) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
      FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
    }
    FUN_148607742(local_38,param_2);
    local_28 = local_38;
    FUN_14860c488(param_1 + 0x438);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486029e6 FUN_1486029e6 body=136 status=ok
// SIG undefined FUN_1486029e6(void)

void FUN_1486029e6(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  
  FUN_14094637e();
  lVar4 = *(longlong *)(param_1 + 0x390);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(lVar4 + 0x2cc);
  uVar1 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d1)];
  bVar3 = *(byte *)(lVar4 + 0x2d3);
  uVar2 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d0)];
  *(undefined4 *)(param_1 + 0x5d8) = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d2)];
  *(undefined4 *)(param_1 + 0x5dc) = uVar1;
  *(undefined4 *)(param_1 + 0x5e0) = uVar2;
  *(float *)(param_1 + 0x5e4) = (float)bVar3 * 0.003921569;
  return;
}



// FUNCTION 148602a82 FUN_148602a82 body=216 status=ok
// SIG undefined FUN_148602a82(void)

void FUN_148602a82(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [7];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x90) < 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x9c);
  }
  else {
    uVar2 = FUN_1448c9f94(param_1 + 0x18,param_2,0);
  }
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  local_48[0] = param_1 + 0x220;
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x23c);
  local_48[1] = param_1 + 0x224;
  local_48[2] = param_1 + 0x228;
  param_1 = param_1 + 0xa0;
  lVar1 = 0;
  do {
    if (0 < *(int *)(param_1 + 0x78)) {
      uVar2 = FUN_1448c9f94(param_1,param_2,0);
      *(undefined4 *)local_48[lVar1] = uVar2;
    }
    lVar1 = lVar1 + 1;
    param_1 = param_1 + 0x80;
  } while (lVar1 != 3);
  if ((local_48[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148602b5c FUN_148602b5c body=95 status=ok
// SIG undefined FUN_148602b5c(void)

void FUN_148602b5c(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406f9290(*(undefined8 *)(param_1 + -0x18),*(undefined4 *)(param_1 + 0x98));
  local_28 = *(undefined4 *)(param_1 + 0x220);
  uStack_24 = *(undefined4 *)(param_1 + 0x224);
  uStack_20 = *(undefined4 *)(param_1 + 0x228);
  uStack_1c = *(undefined4 *)(param_1 + 0x22c);
  FUN_140802a50(*(undefined8 *)(param_1 + -0x18),&local_28,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148602bbc FUN_148602bbc body=95 status=ok
// SIG undefined FUN_148602bbc(void)

void FUN_148602bbc(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406f9290(*(undefined8 *)(param_1 + -0x18),*(undefined4 *)(param_1 + 0x9c));
  local_28 = *(undefined4 *)(param_1 + 0x230);
  uStack_24 = *(undefined4 *)(param_1 + 0x234);
  uStack_20 = *(undefined4 *)(param_1 + 0x238);
  uStack_1c = *(undefined4 *)(param_1 + 0x23c);
  FUN_140802a50(*(undefined8 *)(param_1 + -0x18),&local_28,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148602c1c FUN_148602c1c body=360 status=ok
// SIG undefined FUN_148602c1c(void)

void FUN_148602c1c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140206818();
  uVar5 = FUN_1447210f0(param_1);
  FUN_1404d1e78(&local_48,uVar5);
  if (((local_48 != 0) && (local_40 != (longlong *)0x0)) && (0 < (int)local_40[1])) {
    FUN_1486021f0(param_1,param_1 + 0x3b0,param_1 + 0x3c0);
    if (local_40 == (longlong *)0x0) {
LAB_148602ccb:
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)local_40[1];
      do {
        if (iVar4 == 0) goto LAB_148602ccb;
        LOCK();
        iVar3 = (int)local_40[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_40 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_40;
      } while (!bVar8);
    }
    lVar6 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar6 = local_48;
    }
    FUN_148602654(lVar6,param_1 + 0x3a8);
    local_60 = &LAB_148602e86;
    local_58 = 0;
    FUN_148602d86(lVar6 + 0x318,local_50,param_1,&local_60);
    local_60 = &LAB_148602e86;
    local_58 = 0;
    FUN_148602d86(lVar6 + 0x330,local_50,param_1,&local_60);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148602d86 FUN_148602d86 body=254 status=ok
// SIG undefined FUN_148602d86(void)

undefined8
FUN_148602d86(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14afe2b10;
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
  *local_48 = &PTR_FUN_14afe2b80;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1486091c6(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148602e9a FUN_148602e9a body=238 status=ok
// SIG undefined FUN_148602e9a(void)

void FUN_148602e9a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar6 = DAT_14caca278;
  if (DAT_14caca280 == 0) {
    plVar6 = (longlong *)0x0;
  }
  (**(code **)(*plVar6 + 0x58))(plVar6,param_1);
  uVar5 = FUN_1447210f0(param_1);
  FUN_1404d1e78(&local_28,uVar5);
  if (((local_28 != 0) && (local_20 != (longlong *)0x0)) && (0 < (int)local_20[1])) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar8);
    lVar7 = 0;
    if (plVar6 != (longlong *)0x0) {
      lVar7 = local_28;
    }
    FUN_14860294e(lVar7,param_1 + 0x3a8);
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
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148602f8a FUN_148602f8a body=136 status=ok
// SIG undefined FUN_148602f8a(void)

void FUN_148602f8a(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  
  thunk_FUN_14094637e();
  lVar4 = *(longlong *)(param_1 + 0x390);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(lVar4 + 0x2cc);
  uVar1 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d1)];
  bVar3 = *(byte *)(lVar4 + 0x2d3);
  uVar2 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d0)];
  *(undefined4 *)(param_1 + 0x5d8) = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d2)];
  *(undefined4 *)(param_1 + 0x5dc) = uVar1;
  *(undefined4 *)(param_1 + 0x5e0) = uVar2;
  *(float *)(param_1 + 0x5e4) = (float)bVar3 * 0.003921569;
  return;
}



// FUNCTION 148603026 FUN_148603026 body=216 status=ok
// SIG undefined FUN_148603026(void)

void FUN_148603026(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [7];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x90) < 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x9c);
  }
  else {
    uVar2 = FUN_1448c9f94(param_1 + 0x18,param_2,0);
  }
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  local_48[0] = param_1 + 0x220;
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x23c);
  local_48[1] = param_1 + 0x224;
  local_48[2] = param_1 + 0x228;
  param_1 = param_1 + 0xa0;
  lVar1 = 0;
  do {
    if (0 < *(int *)(param_1 + 0x78)) {
      uVar2 = FUN_1448c9f94(param_1,param_2,0);
      *(undefined4 *)local_48[lVar1] = uVar2;
    }
    lVar1 = lVar1 + 1;
    param_1 = param_1 + 0x80;
  } while (lVar1 != 3);
  if ((local_48[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148603100 FUN_148603100 body=95 status=ok
// SIG undefined FUN_148603100(void)

void FUN_148603100(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406f9290(*(undefined8 *)(param_1 + -0x18),*(undefined4 *)(param_1 + 0x98));
  local_28 = *(undefined4 *)(param_1 + 0x220);
  uStack_24 = *(undefined4 *)(param_1 + 0x224);
  uStack_20 = *(undefined4 *)(param_1 + 0x228);
  uStack_1c = *(undefined4 *)(param_1 + 0x22c);
  FUN_140802a50(*(undefined8 *)(param_1 + -0x18),&local_28,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148603160 FUN_148603160 body=95 status=ok
// SIG undefined FUN_148603160(void)

void FUN_148603160(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406f9290(*(undefined8 *)(param_1 + -0x18),*(undefined4 *)(param_1 + 0x9c));
  local_28 = *(undefined4 *)(param_1 + 0x230);
  uStack_24 = *(undefined4 *)(param_1 + 0x234);
  uStack_20 = *(undefined4 *)(param_1 + 0x238);
  uStack_1c = *(undefined4 *)(param_1 + 0x23c);
  FUN_140802a50(*(undefined8 *)(param_1 + -0x18),&local_28,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486031c0 FUN_1486031c0 body=360 status=ok
// SIG undefined FUN_1486031c0(void)

void FUN_1486031c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140206818();
  uVar5 = FUN_1447210f0(param_1);
  FUN_1404d1e78(&local_48,uVar5);
  if (((local_48 != 0) && (local_40 != (longlong *)0x0)) && (0 < (int)local_40[1])) {
    FUN_1486021f0(param_1,param_1 + 0x3b0,param_1 + 0x3c0);
    if (local_40 == (longlong *)0x0) {
LAB_14860326f:
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)local_40[1];
      do {
        if (iVar4 == 0) goto LAB_14860326f;
        LOCK();
        iVar3 = (int)local_40[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_40 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_40;
      } while (!bVar8);
    }
    lVar6 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar6 = local_48;
    }
    FUN_148602654(lVar6,param_1 + 0x3a8);
    local_60 = &LAB_14860342a;
    local_58 = 0;
    FUN_14860332a(lVar6 + 0x318,local_50,param_1,&local_60);
    local_60 = &LAB_14860342a;
    local_58 = 0;
    FUN_14860332a(lVar6 + 0x330,local_50,param_1,&local_60);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14860332a FUN_14860332a body=254 status=ok
// SIG undefined FUN_14860332a(void)

undefined8
FUN_14860332a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14afe2b10;
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
  *local_48 = &PTR_FUN_14afe2bf0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1486091c6(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14860343e FUN_14860343e body=238 status=ok
// SIG undefined FUN_14860343e(void)

void FUN_14860343e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar6 = DAT_14caca278;
  if (DAT_14caca280 == 0) {
    plVar6 = (longlong *)0x0;
  }
  (**(code **)(*plVar6 + 0x58))(plVar6,param_1);
  uVar5 = FUN_1447210f0(param_1);
  FUN_1404d1e78(&local_28,uVar5);
  if (((local_28 != 0) && (local_20 != (longlong *)0x0)) && (0 < (int)local_20[1])) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar8);
    lVar7 = 0;
    if (plVar6 != (longlong *)0x0) {
      lVar7 = local_28;
    }
    FUN_14860294e(lVar7,param_1 + 0x3a8);
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
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14860352e FUN_14860352e body=136 status=ok
// SIG undefined FUN_14860352e(void)

void FUN_14860352e(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  
  FUN_14094637e();
  lVar4 = *(longlong *)(param_1 + 0x390);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(lVar4 + 0x2cc);
  uVar1 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d1)];
  bVar3 = *(byte *)(lVar4 + 0x2d3);
  uVar2 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d0)];
  *(undefined4 *)(param_1 + 0x5d8) = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d2)];
  *(undefined4 *)(param_1 + 0x5dc) = uVar1;
  *(undefined4 *)(param_1 + 0x5e0) = uVar2;
  *(float *)(param_1 + 0x5e4) = (float)bVar3 * 0.003921569;
  return;
}



// FUNCTION 1486035ca FUN_1486035ca body=216 status=ok
// SIG undefined FUN_1486035ca(void)

void FUN_1486035ca(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [7];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x90) < 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x9c);
  }
  else {
    uVar2 = FUN_1448c9f94(param_1 + 0x18,param_2,0);
  }
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  local_48[0] = param_1 + 0x220;
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x23c);
  local_48[1] = param_1 + 0x224;
  local_48[2] = param_1 + 0x228;
  param_1 = param_1 + 0xa0;
  lVar1 = 0;
  do {
    if (0 < *(int *)(param_1 + 0x78)) {
      uVar2 = FUN_1448c9f94(param_1,param_2,0);
      *(undefined4 *)local_48[lVar1] = uVar2;
    }
    lVar1 = lVar1 + 1;
    param_1 = param_1 + 0x80;
  } while (lVar1 != 3);
  if ((local_48[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486036a4 FUN_1486036a4 body=95 status=ok
// SIG undefined FUN_1486036a4(void)

void FUN_1486036a4(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406f9290(*(undefined8 *)(param_1 + -0x18),*(undefined4 *)(param_1 + 0x98));
  local_28 = *(undefined4 *)(param_1 + 0x220);
  uStack_24 = *(undefined4 *)(param_1 + 0x224);
  uStack_20 = *(undefined4 *)(param_1 + 0x228);
  uStack_1c = *(undefined4 *)(param_1 + 0x22c);
  FUN_140802a50(*(undefined8 *)(param_1 + -0x18),&local_28,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148603704 FUN_148603704 body=95 status=ok
// SIG undefined FUN_148603704(void)

void FUN_148603704(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406f9290(*(undefined8 *)(param_1 + -0x18),*(undefined4 *)(param_1 + 0x9c));
  local_28 = *(undefined4 *)(param_1 + 0x230);
  uStack_24 = *(undefined4 *)(param_1 + 0x234);
  uStack_20 = *(undefined4 *)(param_1 + 0x238);
  uStack_1c = *(undefined4 *)(param_1 + 0x23c);
  FUN_140802a50(*(undefined8 *)(param_1 + -0x18),&local_28,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148603764 FUN_148603764 body=373 status=ok
// SIG undefined FUN_148603764(void)

longlong FUN_148603764(longlong param_1,undefined8 param_2,float param_3)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60 [2];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1486038da();
  iVar3 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar3 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x10);
    bVar5 = 1;
    lVar6 = 0;
    do {
      fVar2 = *(float *)(lVar7 + 4 + lVar6);
      *(bool *)(lVar7 + lVar6) = fVar2 < param_3;
      if (param_3 <= fVar2) {
        bVar5 = bVar5 & 1e-08 < ABS(fVar2 - param_3);
      }
      lVar6 = lVar6 + 0x30;
    } while ((longlong)iVar3 * 0x30 != lVar6);
    if ((bool)(bVar5 & 0 < (int)*(uint *)(param_1 + 0x18))) {
      FUN_14860399a(&local_80,
                    *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x30 +
                    -0x30);
      if (0 < *(int *)(param_1 + 0x18)) {
        lVar6 = 0x20;
        lVar7 = 0;
        do {
          lVar4 = *(longlong *)(param_1 + 0x10);
          if (param_3 < *(float *)(lVar4 + -0x1c + lVar6)) break;
          local_80 = *(ulonglong *)(lVar4 + -0x20 + lVar6);
          local_78 = *(undefined8 *)(lVar4 + -0x18 + lVar6);
          puVar1 = (undefined4 *)(lVar4 + -0x10 + lVar6);
          local_70 = *puVar1;
          uStack_6c = puVar1[1];
          uStack_68 = puVar1[2];
          uStack_64 = puVar1[3];
          FUN_144a787a6(local_60,lVar4 + lVar6);
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x30;
        } while (lVar7 < *(int *)(param_1 + 0x18));
      }
      local_80 = CONCAT44(param_3,(undefined4)local_80);
      local_80 = local_80 & 0xffffffffffffff00;
      FUN_148603a0c((longlong *)(param_1 + 0x10),&local_80,(int)param_3);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486038da FUN_1486038da body=192 status=ok
// SIG undefined FUN_1486038da(void)

undefined8 * FUN_1486038da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1486081cc(param_1 + 2,iVar1,0);
    FUN_14860823f(param_1[2],uVar2,iVar1);
  }
  param_1[4] = param_2[4];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 6);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar5;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  _Src = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14860399a FUN_14860399a body=114 status=ok
// SIG undefined FUN_14860399a(void)

undefined8 * FUN_14860399a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148603a0c FUN_148603a0c body=119 status=ok
// SIG undefined FUN_148603a0c(void)

int FUN_148603a0c(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148608c26(param_1,iVar1);
  }
  lVar2 = (longlong)param_3 * 0x30;
  memmove((void *)(*param_1 + lVar2 + 0x30),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) * 0x30);
  FUN_14860399a(lVar2 + *param_1,param_2);
  return param_3;
}



// FUNCTION 148603a84 FUN_148603a84 body=60 status=ok
// SIG undefined FUN_148603a84(void)

void FUN_148603a84(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_148608273(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148603ac0 FUN_148603ac0 body=171 status=ok
// SIG undefined FUN_148603ac0(void)

void FUN_148603ac0(longlong param_1,undefined4 param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  if (0.0 < param_3) {
    if (param_3 < 1.0) {
      fVar2 = (float)FUN_1448c9f94(param_1 + 0x60,param_2,0);
      fVar3 = (float)FUN_1448c9f94(param_1 + 0xf0,param_2,0);
      fVar2 = param_3 * (fVar3 - fVar2) + fVar2;
      goto LAB_148603af5;
    }
    lVar1 = param_1 + 0xf0;
  }
  else {
    lVar1 = param_1 + 0x60;
  }
  fVar2 = (float)FUN_1448c9f94(lVar1,param_2,0);
LAB_148603af5:
  if ((fVar2 != *(float *)(param_1 + 0x44)) || (NAN(fVar2) || NAN(*(float *)(param_1 + 0x44)))) {
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(float *)(param_1 + 0x44) = fVar2;
  }
  return;
}



// FUNCTION 148603b6c FUN_148603b6c body=132 status=ok
// SIG undefined FUN_148603b6c(void)

void FUN_148603b6c(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    local_28 = *(undefined4 *)(param_1 + 0x10);
    uStack_24 = *(undefined4 *)(param_1 + 0x14);
    uStack_20 = *(undefined4 *)(param_1 + 0x18);
    uStack_1c = *(undefined4 *)(param_1 + 0x1c);
    FUN_1404fd03e(param_1 + 0x28,&local_28,*(undefined4 *)(param_1 + 0x44));
    cVar1 = FUN_144729dda(param_1 + 0x20);
    if (cVar1 != '\0') {
      uVar2 = FUN_14479d2ce(param_1 + 0x20);
      FUN_14490d20c(uVar2,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x44));
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148603bf2 FUN_148603bf2 body=307 status=ok
// SIG undefined FUN_148603bf2(void)

bool FUN_148603bf2(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined **local_a0 [13];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 < 2) {
    param_1 = param_1 + (ulonglong)param_2 * 0x90;
    local_a8 = *(undefined4 *)(param_1 + 0x58);
    local_b0 = *(undefined8 *)(param_1 + 0x50);
    FUN_140501b78(local_a0);
    *param_3 = local_b0;
    *(undefined4 *)(param_3 + 1) = local_a8;
    *(undefined4 *)(param_3 + 0xf) = local_38;
    *(undefined1 *)((longlong)param_3 + 0x7c) = local_34;
    *(undefined1 *)((longlong)param_3 + 0x7d) = local_33;
    if (&local_b0 == param_3) {
      local_a0[0] = (undefined **)&DAT_14a176f00;
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_3[0x10] != 0) {
        FUN_1400020a8();
      }
      param_3[0x10] = local_30;
      local_30 = 0;
      *(undefined4 *)(param_3 + 0x11) = (undefined4)local_28;
      *(undefined4 *)((longlong)param_3 + 0x8c) = local_28._4_4_;
      local_28 = 0;
    }
    local_a0[0] = &PTR_FUN_14a177080;
    FUN_144a78a1a();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2 < 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148603d26 FUN_148603d26 body=493 status=ok
// SIG undefined FUN_148603d26(void)

void FUN_148603d26(longlong param_1,undefined4 param_2,float param_3)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 *local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pfVar1 = (float *)(param_1 + 0x2c);
  local_98 = *(undefined8 *)(param_1 + 0x2c);
  uStack_90 = *(undefined8 *)(param_1 + 0x34);
  if (0.0 < param_3) {
    local_80 = (longlong)&local_98 + 4;
    local_78 = &uStack_90;
    local_70 = (longlong)&uStack_90 + 4;
    local_88 = &local_98;
    if (1.0 <= param_3) {
      lVar2 = param_1 + 0x270;
      lVar3 = 0;
      do {
        uVar4 = FUN_1448c9f94(lVar2,param_2,0);
        *(undefined4 *)(&local_88)[lVar3] = uVar4;
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x80;
      } while (lVar3 != 4);
    }
    else {
      lVar2 = param_1 + 0x270;
      lVar3 = 0;
      do {
        fVar5 = (float)FUN_1448c9f94(lVar2 + -0x210,param_2,0);
        fVar6 = (float)FUN_1448c9f94(lVar2,param_2);
        *(float *)(&local_88)[lVar3] = (fVar6 - fVar5) * param_3 + fVar5;
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x80;
      } while (lVar3 != 4);
    }
  }
  else {
    local_88 = &local_98;
    local_80 = (longlong)&local_98 + 4;
    local_78 = &uStack_90;
    local_70 = (longlong)&uStack_90 + 4;
    lVar2 = param_1 + 0x60;
    lVar3 = 0;
    do {
      uVar4 = FUN_1448c9f94(lVar2,param_2,0);
      *(undefined4 *)(&local_88)[lVar3] = uVar4;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x80;
    } while (lVar3 != 4);
  }
  if (((float)local_98 == *pfVar1) && (!NAN((float)local_98) && !NAN(*pfVar1))) {
    if ((local_98._4_4_ == *(float *)(param_1 + 0x30)) &&
       (!NAN(local_98._4_4_) && !NAN(*(float *)(param_1 + 0x30)))) {
      if (((float)uStack_90 == *(float *)(param_1 + 0x34)) &&
         (!NAN((float)uStack_90) && !NAN(*(float *)(param_1 + 0x34)))) {
        if ((uStack_90._4_4_ == *(float *)(param_1 + 0x38)) &&
           (!NAN(uStack_90._4_4_) && !NAN(*(float *)(param_1 + 0x38)))) goto LAB_148603dfd;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  *pfVar1 = (float)local_98;
  *(float *)(param_1 + 0x30) = local_98._4_4_;
  *(float *)(param_1 + 0x34) = (float)uStack_90;
  *(float *)(param_1 + 0x38) = uStack_90._4_4_;
LAB_148603dfd:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148603f14 FUN_148603f14 body=68 status=ok
// SIG undefined FUN_148603f14(void)

void FUN_148603f14(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    cVar2 = FUN_144729dda(param_1 + 0x20);
    if (cVar2 != '\0') {
      uVar1 = FUN_14479d2ce(param_1 + 0x20);
      FUN_144938f46(uVar1,*(undefined8 *)(param_1 + 8),param_1 + 0x2c);
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148603f58 FUN_148603f58 body=227 status=ok
// SIG undefined FUN_148603f58(void)

bool FUN_148603f58(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined4 local_240;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (param_2 < 2) {
    param_1 = param_1 + (ulonglong)param_2 * 0x210;
    lVar1 = param_1 + 0x60;
    local_240 = *(undefined4 *)(param_1 + 0x58);
    puVar2 = local_238;
    local_248 = *(undefined8 *)(param_1 + 0x50);
    lVar3 = 4;
    do {
      FUN_140501b78(puVar2,lVar1);
      lVar1 = lVar1 + 0x80;
      puVar2 = puVar2 + 0x80;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined4 *)(param_3 + 1) = local_240;
    *param_3 = local_248;
    lVar1 = 0x10;
    do {
      FUN_14599ef06((longlong)param_3 + lVar1,(longlong)&local_248 + lVar1);
      lVar1 = lVar1 + 0x80;
    } while (lVar1 != 0x210);
    FUN_140b623da(&local_248);
  }
  if ((local_38 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2 < 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14860403c FUN_14860403c body=218 status=ok
// SIG undefined FUN_14860403c(void)

void FUN_14860403c(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = (ulonglong)*(int *)(param_1 + 0x138);
  if (0 < (longlong)uVar6) {
    iVar7 = -*(int *)(param_1 + 0x138);
    lVar5 = uVar6 * 0x30;
    do {
      lVar4 = *(longlong *)(param_1 + 0x130);
      if ((*(longlong *)(lVar4 + -0x20 + lVar5) == 0) ||
         (cVar2 = FUN_144729dda(lVar5 + lVar4 + -0x28), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar5 + lVar4 + -0x20);
      }
      if (lVar4 == param_2) {
        uVar3 = *(uint *)(param_1 + 0x138);
        if (uVar6 != uVar3) {
          memmove((void *)(*(longlong *)(param_1 + 0x130) + lVar5 + -0x30),
                  (void *)(*(longlong *)(param_1 + 0x130) + lVar5),
                  (longlong)(int)(uVar3 + iVar7) * 0x30);
          uVar3 = *(uint *)(param_1 + 0x138);
        }
        *(uint *)(param_1 + 0x138) = uVar3 - 1;
        FUN_148609aa8((longlong *)(param_1 + 0x130));
      }
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + -0x30;
      bVar1 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 148604116 FUN_148604116 body=154 status=ok
// SIG undefined FUN_148604116(void)

void FUN_148604116(longlong param_1,undefined4 param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  if (0.0 < param_3) {
    if (param_3 < 1.0) {
      fVar2 = (float)FUN_1448c9f94(param_1 + 0x20,param_2,0);
      fVar3 = (float)FUN_1448c9f94(param_1 + 0xb0,param_2,0);
      fVar2 = param_3 * (fVar3 - fVar2) + fVar2;
      goto LAB_14860414b;
    }
    lVar1 = param_1 + 0xb0;
  }
  else {
    lVar1 = param_1 + 0x20;
  }
  fVar2 = (float)FUN_1448c9f94(lVar1,param_2,0);
LAB_14860414b:
  *(float *)(param_1 + 8) = fVar2;
  return;
}



// FUNCTION 1486041b0 FUN_1486041b0 body=216 status=ok
// SIG undefined FUN_1486041b0(void)

void FUN_1486041b0(longlong param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x138);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x130);
    lVar8 = 0;
    do {
      if ((*(longlong *)(lVar4 + lVar8) != 0) && (*(longlong *)(lVar4 + 0x10 + lVar8) != 0)) {
        fVar1 = *(float *)(param_1 + 8);
        cVar7 = FUN_144729dda(lVar4 + 8 + lVar8);
        if ((cVar7 != '\0') &&
           ((pcVar5 = *(code **)(**(longlong **)(lVar4 + 0x10 + lVar8) + 0x10),
            pcVar5 == (code *)&LAB_14473dda0 || (cVar7 = (*pcVar5)(), cVar7 != '\0')))) {
          fVar2 = **(float **)(lVar4 + lVar8);
          if ((fVar2 != fVar1) || (NAN(fVar2) || NAN(fVar1))) {
            **(float **)(lVar4 + lVar8) = fVar1;
            plVar6 = *(longlong **)(lVar4 + 0x10 + lVar8);
            pcVar5 = *(code **)(*plVar6 + 0x20);
            if (pcVar5 == FUN_1404fd1c4) {
              FUN_1404fd1c4();
            }
            else {
              (*pcVar5)(plVar6,*(undefined8 *)(lVar4 + 0x20 + lVar8),
                        *(undefined8 *)(lVar4 + 0x18 + lVar8));
            }
          }
        }
      }
      lVar8 = lVar8 + 0x30;
    } while ((longlong)iVar3 * 0x30 != lVar8);
  }
  return;
}



// FUNCTION 148604288 FUN_148604288 body=307 status=ok
// SIG undefined FUN_148604288(void)

bool FUN_148604288(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined **local_a0 [13];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 < 2) {
    param_1 = param_1 + (ulonglong)param_2 * 0x90;
    local_a8 = *(undefined4 *)(param_1 + 0x18);
    local_b0 = *(undefined8 *)(param_1 + 0x10);
    FUN_140501b78(local_a0);
    *param_3 = local_b0;
    *(undefined4 *)(param_3 + 1) = local_a8;
    *(undefined4 *)(param_3 + 0xf) = local_38;
    *(undefined1 *)((longlong)param_3 + 0x7c) = local_34;
    *(undefined1 *)((longlong)param_3 + 0x7d) = local_33;
    if (&local_b0 == param_3) {
      local_a0[0] = (undefined **)&DAT_14a176f00;
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_3[0x10] != 0) {
        FUN_1400020a8();
      }
      param_3[0x10] = local_30;
      local_30 = 0;
      *(undefined4 *)(param_3 + 0x11) = (undefined4)local_28;
      *(undefined4 *)((longlong)param_3 + 0x8c) = local_28._4_4_;
      local_28 = 0;
    }
    local_a0[0] = &PTR_FUN_14a177080;
    FUN_144a78a1a();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2 < 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486043bc FUN_1486043bc body=148 status=ok
// SIG undefined FUN_1486043bc(void)

void FUN_1486043bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14afdf910;
  param_1[1] = 0;
  lVar2 = 0x9c;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x8c) = 0;
    *(undefined1 *)((longlong)param_1 + lVar2 + -0x84) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x54) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x4c) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x74);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x48) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x40) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x34) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x2c) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x24);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined ***)((longlong)param_1 + lVar2 + -0x7c) = &PTR_FUN_14a46be50;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -4) = 0x7fffffff;
    *(undefined1 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x90;
  } while (lVar2 != 0x1bc);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return;
}



// FUNCTION 148604450 FUN_148604450 body=218 status=ok
// SIG undefined FUN_148604450(void)

void FUN_148604450(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = (ulonglong)*(int *)(param_1 + 0x138);
  if (0 < (longlong)uVar6) {
    iVar7 = -*(int *)(param_1 + 0x138);
    lVar5 = uVar6 * 0x30;
    do {
      lVar4 = *(longlong *)(param_1 + 0x130);
      if ((*(longlong *)(lVar4 + -0x20 + lVar5) == 0) ||
         (cVar2 = FUN_144729dda(lVar5 + lVar4 + -0x28), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar5 + lVar4 + -0x20);
      }
      if (lVar4 == param_2) {
        uVar3 = *(uint *)(param_1 + 0x138);
        if (uVar6 != uVar3) {
          memmove((void *)(*(longlong *)(param_1 + 0x130) + lVar5 + -0x30),
                  (void *)(*(longlong *)(param_1 + 0x130) + lVar5),
                  (longlong)(int)(uVar3 + iVar7) * 0x30);
          uVar3 = *(uint *)(param_1 + 0x138);
        }
        *(uint *)(param_1 + 0x138) = uVar3 - 1;
        FUN_148609b56((longlong *)(param_1 + 0x130));
      }
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + -0x30;
      bVar1 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 14860452a FUN_14860452a body=328 status=ok
// SIG undefined FUN_14860452a(void)

bool FUN_14860452a(longlong param_1,uint param_2,undefined8 *param_3)

{
  void *_Src;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined **local_b0 [13];
  void *local_48;
  int local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 < 2) {
    param_1 = param_1 + (ulonglong)param_2 * 0x90;
    local_b8 = *(undefined4 *)(param_1 + 0x18);
    local_c0 = *(undefined8 *)(param_1 + 0x10);
    FUN_140a3da46(local_b0);
    _Src = local_48;
    *param_3 = local_c0;
    *(undefined4 *)(param_3 + 1) = local_b8;
    if (&local_c0 != param_3) {
      *(int *)(param_3 + 0x10) = local_40;
      if (local_40 == 0 && *(int *)((longlong)param_3 + 0x84) == 0) {
        *(undefined4 *)((longlong)param_3 + 0x84) = 0;
      }
      else {
        FUN_140a3dae8(param_3 + 0xf,local_40);
        if (local_40 != 0) {
          memcpy((void *)param_3[0xf],_Src,(longlong)local_40 << 3);
        }
      }
    }
    *(undefined1 *)((longlong)param_3 + 0x8c) = local_34;
    *(undefined4 *)(param_3 + 0x11) = local_38;
    local_b0[0] = &PTR_FUN_14a46be50;
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_b0[0] = &PTR_FUN_14a177080;
    FUN_144a78a1a();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2 < 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148604674 FUN_148604674 body=218 status=ok
// SIG undefined FUN_148604674(void)

void FUN_148604674(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = (ulonglong)*(int *)(param_1 + 0x138);
  if (0 < (longlong)uVar6) {
    iVar7 = -*(int *)(param_1 + 0x138);
    lVar5 = uVar6 * 0x30;
    do {
      lVar4 = *(longlong *)(param_1 + 0x130);
      if ((*(longlong *)(lVar4 + -0x20 + lVar5) == 0) ||
         (cVar2 = FUN_144729dda(lVar5 + lVar4 + -0x28), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar5 + lVar4 + -0x20);
      }
      if (lVar4 == param_2) {
        uVar3 = *(uint *)(param_1 + 0x138);
        if (uVar6 != uVar3) {
          memmove((void *)(*(longlong *)(param_1 + 0x130) + lVar5 + -0x30),
                  (void *)(*(longlong *)(param_1 + 0x130) + lVar5),
                  (longlong)(int)(uVar3 + iVar7) * 0x30);
          uVar3 = *(uint *)(param_1 + 0x138);
        }
        *(uint *)(param_1 + 0x138) = uVar3 - 1;
        FUN_148609c04((longlong *)(param_1 + 0x130));
      }
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + -0x30;
      bVar1 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 14860474e FUN_14860474e body=65 status=ok
// SIG undefined FUN_14860474e(void)

void FUN_14860474e(longlong param_1,undefined8 param_2,float param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0x20;
  if ((param_3 <= 0.5) || (lVar2 = 0xb0, 0.5 < param_3)) {
    iVar1 = FUN_144b233bc(lVar2 + param_1,param_2,0);
    *(bool *)(param_1 + 8) = iVar1 != 0;
  }
  return;
}



// FUNCTION 148604790 FUN_148604790 body=300 status=ok
// SIG undefined FUN_148604790(void)

void FUN_148604790(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((longlong)*(int *)(param_1 + 0x138) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x130);
    plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x138) * 6;
    do {
      if (plVar7[2] != 0) {
        cVar1 = *(char *)(param_1 + 8);
        cVar4 = FUN_144729dda(plVar7 + 1);
        if ((cVar4 != '\0') &&
           (((*(code **)(*(longlong *)plVar7[2] + 0x10) == (code *)&LAB_14473dda0 ||
             (cVar4 = (**(code **)(*(longlong *)plVar7[2] + 0x10))(), cVar4 != '\0')) &&
            (lVar3 = plVar7[3], lVar3 != 0)))) {
          lVar9 = *(longlong *)(lVar3 + 8);
          lVar5 = FUN_144a5ab96();
          if (*(ulonglong *)(lVar5 + 8) == 0) {
            bVar10 = lVar9 != 0;
            if (lVar9 != lVar5 && bVar10) {
              do {
                lVar9 = *(longlong *)(lVar9 + 0x30);
                bVar10 = lVar9 != 0;
                if (lVar9 == lVar5) break;
              } while (lVar9 != 0);
            }
            if (bVar10) goto LAB_148604818;
          }
          else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_148604818:
            bVar2 = *(byte *)(*plVar7 + (ulonglong)*(byte *)(lVar3 + 0x71));
            if ((bool)cVar1 != ((*(byte *)(lVar3 + 0x73) & bVar2) != 0)) {
              if (cVar1 == '\0') {
                bVar8 = 0;
              }
              else {
                bVar8 = *(byte *)(lVar3 + 0x72);
              }
              *(byte *)(*plVar7 + (ulonglong)*(byte *)(lVar3 + 0x71)) =
                   bVar2 & ~*(byte *)(lVar3 + 0x73) | bVar8;
              (**(code **)(*(longlong *)plVar7[2] + 0x20))
                        ((longlong *)plVar7[2],plVar7[4],plVar7[3]);
            }
          }
        }
      }
      plVar7 = plVar7 + 6;
    } while (plVar7 != plVar6);
  }
  return;
}



// FUNCTION 1486048bc FUN_1486048bc body=328 status=ok
// SIG undefined FUN_1486048bc(void)

bool FUN_1486048bc(longlong param_1,uint param_2,undefined8 *param_3)

{
  void *_Src;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined **local_b0 [13];
  void *local_48;
  int local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 < 2) {
    param_1 = param_1 + (ulonglong)param_2 * 0x90;
    local_b8 = *(undefined4 *)(param_1 + 0x18);
    local_c0 = *(undefined8 *)(param_1 + 0x10);
    FUN_140a3da46(local_b0);
    _Src = local_48;
    *param_3 = local_c0;
    *(undefined4 *)(param_3 + 1) = local_b8;
    if (&local_c0 != param_3) {
      *(int *)(param_3 + 0x10) = local_40;
      if (local_40 == 0 && *(int *)((longlong)param_3 + 0x84) == 0) {
        *(undefined4 *)((longlong)param_3 + 0x84) = 0;
      }
      else {
        FUN_140a3dae8(param_3 + 0xf,local_40);
        if (local_40 != 0) {
          memcpy((void *)param_3[0xf],_Src,(longlong)local_40 << 3);
        }
      }
    }
    *(undefined1 *)((longlong)param_3 + 0x8c) = local_34;
    *(undefined4 *)(param_3 + 0x11) = local_38;
    local_b0[0] = &PTR_FUN_14a46be50;
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_b0[0] = &PTR_FUN_14a177080;
    FUN_144a78a1a();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2 < 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148604a06 FUN_148604a06 body=218 status=ok
// SIG undefined FUN_148604a06(void)

void FUN_148604a06(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = (ulonglong)*(int *)(param_1 + 0x438);
  if (0 < (longlong)uVar6) {
    iVar7 = -*(int *)(param_1 + 0x438);
    lVar5 = uVar6 * 0x30;
    do {
      lVar4 = *(longlong *)(param_1 + 0x430);
      if ((*(longlong *)(lVar4 + -0x20 + lVar5) == 0) ||
         (cVar2 = FUN_144729dda(lVar5 + lVar4 + -0x28), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar5 + lVar4 + -0x20);
      }
      if (lVar4 == param_2) {
        uVar3 = *(uint *)(param_1 + 0x438);
        if (uVar6 != uVar3) {
          memmove((void *)(*(longlong *)(param_1 + 0x430) + lVar5 + -0x30),
                  (void *)(*(longlong *)(param_1 + 0x430) + lVar5),
                  (longlong)(int)(uVar3 + iVar7) * 0x30);
          uVar3 = *(uint *)(param_1 + 0x438);
        }
        *(uint *)(param_1 + 0x438) = uVar3 - 1;
        FUN_148609cb2((longlong *)(param_1 + 0x430));
      }
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + -0x30;
      bVar1 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 148604ae0 FUN_148604ae0 body=227 status=ok
// SIG undefined FUN_148604ae0(void)

bool FUN_148604ae0(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined4 local_240;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (param_2 < 2) {
    param_1 = param_1 + (ulonglong)param_2 * 0x210;
    lVar1 = param_1 + 0x20;
    local_240 = *(undefined4 *)(param_1 + 0x18);
    puVar2 = local_238;
    local_248 = *(undefined8 *)(param_1 + 0x10);
    lVar3 = 4;
    do {
      FUN_140501b78(puVar2,lVar1);
      lVar1 = lVar1 + 0x80;
      puVar2 = puVar2 + 0x80;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined4 *)(param_3 + 1) = local_240;
    *param_3 = local_248;
    lVar1 = 0x10;
    do {
      FUN_14599ef06((longlong)param_3 + lVar1,(longlong)&local_248 + lVar1);
      lVar1 = lVar1 + 0x80;
    } while (lVar1 != 0x210);
    FUN_140b623da(&local_248);
  }
  if ((local_38 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2 < 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148604bc4 FUN_148604bc4 body=207 status=ok
// SIG undefined FUN_148604bc4(void)

void FUN_148604bc4(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = (ulonglong)*(int *)(param_1 + 0x450);
  if (0 < (longlong)uVar6) {
    iVar7 = -*(int *)(param_1 + 0x450);
    lVar5 = uVar6 * 0x38;
    do {
      lVar4 = *(longlong *)(param_1 + 0x448);
      if ((*(longlong *)(lVar4 + -0x28 + lVar5) == 0) ||
         (cVar2 = FUN_144729dda(lVar5 + lVar4 + -0x30), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar5 + lVar4 + -0x28);
      }
      if (lVar4 == param_2) {
        uVar3 = *(uint *)(param_1 + 0x450);
        if (uVar6 != uVar3) {
          memmove((void *)(*(longlong *)(param_1 + 0x448) + lVar5 + -0x38),
                  (void *)(*(longlong *)(param_1 + 0x448) + lVar5),
                  (longlong)(int)(uVar3 + iVar7) * 0x38);
          uVar3 = *(uint *)(param_1 + 0x450);
        }
        *(uint *)(param_1 + 0x450) = uVar3 - 1;
        FUN_148609d60((longlong *)(param_1 + 0x448));
      }
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + -0x38;
      bVar1 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 148604c94 FUN_148604c94 body=380 status=ok
// SIG undefined FUN_148604c94(void)

void FUN_148604c94(longlong param_1,undefined4 param_2,float param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_98 [32];
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = param_1 + 8;
  if (0.0 < param_3) {
    local_78[1] = param_1 + 0xc;
    local_78[2] = param_1 + 0x10;
    local_78[3] = param_1 + 0x14;
    if (1.0 <= param_3) {
      param_1 = param_1 + 0x248;
      lVar1 = 0;
      do {
        uVar2 = FUN_1448c9f94(param_1,param_2,0);
        *(undefined4 *)local_78[lVar1] = uVar2;
        lVar1 = lVar1 + 1;
        param_1 = param_1 + 0x80;
      } while (lVar1 != 4);
    }
    else {
      param_1 = param_1 + 0x248;
      lVar1 = 0;
      do {
        fVar3 = (float)FUN_1448c9f94(param_1 + -0x210,param_2,0);
        fVar4 = (float)FUN_1448c9f94(param_1,param_2);
        *(float *)local_78[lVar1] = (fVar4 - fVar3) * param_3 + fVar3;
        lVar1 = lVar1 + 1;
        param_1 = param_1 + 0x80;
      } while (lVar1 != 4);
    }
  }
  else {
    local_78[1] = param_1 + 0xc;
    local_78[2] = param_1 + 0x10;
    local_78[3] = param_1 + 0x14;
    param_1 = param_1 + 0x38;
    lVar1 = 0;
    do {
      uVar2 = FUN_1448c9f94(param_1,param_2,0);
      *(undefined4 *)local_78[lVar1] = uVar2;
      lVar1 = lVar1 + 1;
      param_1 = param_1 + 0x80;
    } while (lVar1 != 4);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148604e12 FUN_148604e12 body=309 status=ok
// SIG undefined FUN_148604e12(void)

void FUN_148604e12(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  float *pfVar8;
  longlong *plVar9;
  char cVar10;
  longlong lVar11;
  
  iVar5 = *(int *)(param_1 + 0x450);
  if ((longlong)iVar5 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x448);
    lVar11 = 0;
    do {
      if ((*(longlong *)(lVar6 + lVar11) != 0) && (*(longlong *)(lVar6 + 0x10 + lVar11) != 0)) {
        fVar1 = *(float *)(param_1 + 8);
        fVar2 = *(float *)(param_1 + 0xc);
        fVar3 = *(float *)(param_1 + 0x10);
        fVar4 = *(float *)(param_1 + 0x14);
        cVar10 = FUN_144729dda(lVar6 + 8 + lVar11);
        if ((cVar10 != '\0') &&
           ((pcVar7 = *(code **)(**(longlong **)(lVar6 + 0x10 + lVar11) + 0x10),
            pcVar7 == (code *)&LAB_14473dda0 || (cVar10 = (*pcVar7)(), cVar10 != '\0')))) {
          pfVar8 = *(float **)(lVar6 + lVar11);
          if ((*pfVar8 == fVar1) && (!NAN(*pfVar8) && !NAN(fVar1))) {
            if ((pfVar8[1] == fVar2) && (!NAN(pfVar8[1]) && !NAN(fVar2))) {
              if ((pfVar8[2] == fVar3) && (!NAN(pfVar8[2]) && !NAN(fVar3))) {
                if ((pfVar8[3] == fVar4) && (!NAN(pfVar8[3]) && !NAN(fVar4))) goto LAB_148604edd;
              }
            }
          }
          *pfVar8 = fVar1;
          pfVar8[1] = fVar2;
          pfVar8[2] = fVar3;
          pfVar8[3] = fVar4;
          plVar9 = *(longlong **)(lVar6 + 0x10 + lVar11);
          (**(code **)(*plVar9 + 0x20))
                    (plVar9,*(undefined8 *)(lVar6 + 0x20 + lVar11),
                     *(undefined8 *)(lVar6 + 0x18 + lVar11));
        }
      }
LAB_148604edd:
      lVar11 = lVar11 + 0x38;
    } while ((longlong)iVar5 * 0x38 - lVar11 != 0);
  }
  return;
}



// FUNCTION 148604f48 FUN_148604f48 body=227 status=ok
// SIG undefined FUN_148604f48(void)

bool FUN_148604f48(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined4 local_240;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (param_2 < 2) {
    param_1 = param_1 + (ulonglong)param_2 * 0x210;
    lVar1 = param_1 + 0x38;
    local_240 = *(undefined4 *)(param_1 + 0x30);
    puVar2 = local_238;
    local_248 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = 4;
    do {
      FUN_140501b78(puVar2,lVar1);
      lVar1 = lVar1 + 0x80;
      puVar2 = puVar2 + 0x80;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined4 *)(param_3 + 1) = local_240;
    *param_3 = local_248;
    lVar1 = 0x10;
    do {
      FUN_14599ef06((longlong)param_3 + lVar1,(longlong)&local_248 + lVar1);
      lVar1 = lVar1 + 0x80;
    } while (lVar1 != 0x210);
    FUN_140b623da(&local_248);
  }
  if ((local_38 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2 < 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14860502c FUN_14860502c body=218 status=ok
// SIG undefined FUN_14860502c(void)

void FUN_14860502c(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = (ulonglong)*(int *)(param_1 + 0x478);
  if (0 < (longlong)uVar6) {
    iVar7 = -*(int *)(param_1 + 0x478);
    lVar5 = uVar6 * 0x50;
    do {
      lVar4 = *(longlong *)(param_1 + 0x470);
      if ((*(longlong *)(lVar4 + -0x40 + lVar5) == 0) ||
         (cVar2 = FUN_144729dda(lVar5 + lVar4 + -0x48), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar5 + lVar4 + -0x40);
      }
      if (lVar4 == param_2) {
        uVar3 = *(uint *)(param_1 + 0x478);
        if (uVar6 != uVar3) {
          memmove((void *)(*(longlong *)(param_1 + 0x470) + lVar5 + -0x50),
                  (void *)(*(longlong *)(param_1 + 0x470) + lVar5),
                  (longlong)(int)(uVar3 + iVar7) * 0x50);
          uVar3 = *(uint *)(param_1 + 0x478);
        }
        *(uint *)(param_1 + 0x478) = uVar3 - 1;
        FUN_148609e06((longlong *)(param_1 + 0x470));
      }
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + -0x50;
      bVar1 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 148605106 FUN_148605106 body=112 status=ok
// SIG undefined FUN_148605106(void)

void FUN_148605106(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 < 2) {
    param_1 = (ulonglong)param_2 * 0x210 + param_1;
    lVar2 = param_1 + 0xd0;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x50) = *param_3;
    lVar1 = 4;
    do {
      *(undefined2 *)(lVar2 + -4) = *(undefined2 *)((longlong)param_3 + 0x7c);
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(param_3 + 0xf);
      FUN_14093c00e(lVar2,param_3 + 0x10);
      lVar2 = lVar2 + 0x80;
      lVar1 = lVar1 + -1;
      param_3 = param_3 + 0x10;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148605176 FUN_148605176 body=227 status=ok
// SIG undefined FUN_148605176(void)

bool FUN_148605176(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined4 local_240;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (param_2 < 2) {
    param_1 = param_1 + (ulonglong)param_2 * 0x210;
    lVar1 = param_1 + 0x60;
    local_240 = *(undefined4 *)(param_1 + 0x58);
    puVar2 = local_238;
    local_248 = *(undefined8 *)(param_1 + 0x50);
    lVar3 = 4;
    do {
      FUN_140501b78(puVar2,lVar1);
      lVar1 = lVar1 + 0x80;
      puVar2 = puVar2 + 0x80;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined4 *)(param_3 + 1) = local_240;
    *param_3 = local_248;
    lVar1 = 0x10;
    do {
      FUN_14599ef06((longlong)param_3 + lVar1,(longlong)&local_248 + lVar1);
      lVar1 = lVar1 + 0x80;
    } while (lVar1 != 0x210);
    FUN_140b623da(&local_248);
  }
  if ((local_38 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2 < 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14860525a FUN_14860525a body=420 status=ok
// SIG undefined FUN_14860525a(void)

void FUN_14860525a(longlong *param_1,uint param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,char param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_498 [32];
  undefined4 local_478;
  undefined1 local_470 [528];
  undefined8 local_260;
  undefined4 local_258;
  float local_1e8;
  float local_168;
  float local_e8;
  float local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_498;
  if (1 < param_2) goto LAB_1486053ca;
  if ((param_6 == '\0') && ((char)param_1[(ulonglong)param_2 * 0x42 + 0xb] == '\x01')) {
    if ((param_3 == (undefined8 *)0x0) || (*(char *)(param_3 + 1) != '\x01')) goto LAB_1486053ca;
    FUN_14129df22(&local_260);
LAB_1486052e9:
    local_258 = *(undefined4 *)(param_3 + 1);
    local_260 = *param_3;
    lVar2 = 4;
    puVar1 = &local_260;
    do {
      *(undefined2 *)((longlong)puVar1 + 0x7c) = *(undefined2 *)((longlong)param_3 + 0x7c);
      *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)(param_3 + 0xf);
      FUN_14093c00e(puVar1 + 0x10,param_3 + 0x10);
      lVar2 = lVar2 + -1;
      param_3 = param_3 + 0x10;
      puVar1 = puVar1 + 0x10;
    } while (lVar2 != 0);
  }
  else {
    FUN_14129df22(&local_260);
    if (param_3 != (undefined8 *)0x0) goto LAB_1486052e9;
    local_1e8 = (float)(double)param_1[6];
    local_168 = (float)(double)param_1[7];
    local_e8 = (float)(double)param_1[8];
    local_68 = (float)(double)param_1[9];
  }
  local_478 = param_5;
  FUN_14130b975(local_470,param_1 + (ulonglong)param_2 * 0x42 + 10,&local_260,param_4);
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_470);
  FUN_140b623da(local_470);
  FUN_140b623da(&local_260);
LAB_1486053ca:
  if ((local_50 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148605400 FUN_148605400 body=94 status=ok
// SIG undefined FUN_148605400(void)

void FUN_148605400(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = param_1 + 0x5c;
  lVar1 = 4;
  do {
    *(undefined2 *)((longlong)plVar2 + -0x214) = *(undefined2 *)((longlong)plVar2 + -4);
    *(int *)(plVar2 + -0x43) = (int)plVar2[-1];
    FUN_14093c00e(plVar2 + -0x42,plVar2);
    plVar2 = plVar2 + 0x10;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
                    /* WARNING: Could not recover jumptable at 0x00014860545b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,1);
  return;
}



// FUNCTION 14860545e FUN_14860545e body=316 status=ok
// SIG undefined FUN_14860545e(void)

void FUN_14860545e(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_3 + 8) != 0) {
    if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xf0) + 8;
      lVar6 = (longlong)*(int *)(param_1 + 0xf8) * 0x30;
      do {
        if (*(longlong *)(lVar5 + 8) == 0) {
LAB_1486054c4:
          lVar4 = 0;
        }
        else {
          cVar3 = FUN_144729dda(lVar5);
          if (cVar3 == '\0') goto LAB_1486054c4;
          lVar4 = *(longlong *)(lVar5 + 8);
        }
        if (lVar4 == param_2) {
          if (lVar5 != 8) goto LAB_148605569;
          break;
        }
        lVar5 = lVar5 + 0x30;
        lVar6 = lVar6 + -0x30;
      } while (lVar6 != 0);
    }
    local_48 = 0;
    lStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_14860559c(&local_68,param_2,param_3);
    iVar2 = *(int *)(param_1 + 0xf8);
    *(uint *)(param_1 + 0xf8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xfc) < iVar2 + 1U) {
      FUN_148609eb4((longlong *)(param_1 + 0xf0),iVar2);
    }
    lVar6 = *(longlong *)(param_1 + 0xf0);
    lVar5 = (longlong)iVar2 * 0x30;
    *(undefined8 *)(lVar6 + 0x20 + lVar5) = local_48;
    puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar5);
    *puVar1 = (undefined4)local_58;
    puVar1[1] = local_58._4_4_;
    puVar1[2] = (undefined4)uStack_50;
    puVar1[3] = uStack_50._4_4_;
    puVar1 = (undefined4 *)(lVar6 + lVar5);
    *puVar1 = (undefined4)local_68;
    puVar1[1] = local_68._4_4_;
    puVar1[2] = (undefined4)uStack_60;
    puVar1[3] = uStack_60._4_4_;
    *(longlong *)(lVar6 + 0x28 + lVar5) = lStack_40;
    if ((lStack_40 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
LAB_148605569:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14860559c FUN_14860559c body=149 status=ok
// SIG undefined FUN_14860559c(void)

void FUN_14860559c(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_3 + 8) != 0) {
    param_1[3] = *(longlong *)(param_3 + 8);
    FUN_140d3b348(&local_30);
    *(undefined4 *)(param_1 + 1) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_2c;
    *(undefined4 *)(param_1 + 2) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_24;
    plVar2 = (longlong *)((longlong)*(int *)(param_1[3] + 0x44) + *(longlong *)(param_3 + 0x10));
    *param_1 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      lVar1 = *plVar2;
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *plVar2;
        }
      }
      param_1[5] = lVar1;
    }
    param_1[4] = *(undefined8 *)(param_3 + 0x18);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148605632 FUN_148605632 body=218 status=ok
// SIG undefined FUN_148605632(void)

void FUN_148605632(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = (ulonglong)*(int *)(param_1 + 0xf8);
  if (0 < (longlong)uVar6) {
    iVar7 = -*(int *)(param_1 + 0xf8);
    lVar5 = uVar6 * 0x30;
    do {
      lVar4 = *(longlong *)(param_1 + 0xf0);
      if ((*(longlong *)(lVar4 + -0x20 + lVar5) == 0) ||
         (cVar2 = FUN_144729dda(lVar5 + lVar4 + -0x28), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar5 + lVar4 + -0x20);
      }
      if (lVar4 == param_2) {
        uVar3 = *(uint *)(param_1 + 0xf8);
        if (uVar6 != uVar3) {
          memmove((void *)(*(longlong *)(param_1 + 0xf0) + lVar5 + -0x30),
                  (void *)(*(longlong *)(param_1 + 0xf0) + lVar5),
                  (longlong)(int)(uVar3 + iVar7) * 0x30);
          uVar3 = *(uint *)(param_1 + 0xf8);
        }
        *(uint *)(param_1 + 0xf8) = uVar3 - 1;
        FUN_148609f48((longlong *)(param_1 + 0xf0));
      }
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + -0x30;
      bVar1 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 14860570c FUN_14860570c body=241 status=ok
// SIG undefined FUN_14860570c(void)

void FUN_14860570c(longlong param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  
  lVar7 = param_1 + 0x60;
  if (0.0 < param_3) {
    lVar7 = param_1 + 0xa8;
  }
  lVar5 = (longlong)*(int *)(lVar7 + 0x18);
  if (lVar5 == 0) {
    cVar4 = FUN_144a7afa6((undefined4 *)(param_1 + 0x10),(undefined4 *)(lVar7 + 0x28));
    if (cVar4 == '\0') {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar7 + 0x20);
      uVar1 = *(undefined4 *)(lVar7 + 0x2c);
      uVar2 = *(undefined4 *)(lVar7 + 0x30);
      uVar3 = *(undefined4 *)(lVar7 + 0x34);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar7 + 0x28);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
      FUN_144a787a6(param_1 + 0x20,lVar7 + 0x38);
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
    lVar5 = (longlong)*(int *)(lVar7 + 0x18);
    if (lVar5 == 0) {
      return;
    }
  }
  pcVar8 = *(char **)(lVar7 + 0x10);
  pcVar6 = pcVar8 + lVar5 * 0x30;
  do {
    if ((*pcVar8 == '\0') &&
       (*(float *)(pcVar8 + 4) <= param_2 && param_2 != *(float *)(pcVar8 + 4))) {
      cVar4 = FUN_144a7afa6((undefined4 *)(param_1 + 0x10),pcVar8 + 0x10);
      if (cVar4 == '\0') {
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pcVar8 + 8);
        uVar1 = *(undefined4 *)(pcVar8 + 0x14);
        uVar2 = *(undefined4 *)(pcVar8 + 0x18);
        uVar3 = *(undefined4 *)(pcVar8 + 0x1c);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(pcVar8 + 0x10);
        *(undefined4 *)(param_1 + 0x14) = uVar1;
        *(undefined4 *)(param_1 + 0x18) = uVar2;
        *(undefined4 *)(param_1 + 0x1c) = uVar3;
        FUN_144a787a6(param_1 + 0x20,pcVar8 + 0x20);
        *(undefined1 *)(param_1 + 0x58) = 1;
      }
      *pcVar8 = '\x01';
    }
    pcVar8 = pcVar8 + 0x30;
  } while (pcVar8 != pcVar6);
  return;
}



// FUNCTION 1486057fe FUN_1486057fe body=594 status=ok
// SIG undefined FUN_1486057fe(void)

void FUN_1486057fe(longlong param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = param_1 + 0x60;
  if (0.0 < param_3) {
    lVar8 = param_1 + 0xa8;
  }
  if ((longlong)*(int *)(lVar8 + 0x18) < 1) {
LAB_148605870:
    lVar7 = lVar8 + 0x20;
  }
  else {
    lVar9 = *(longlong *)(lVar8 + 0x10);
    lVar10 = (longlong)*(int *)(lVar8 + 0x18) * 0x30;
    lVar7 = lVar9 + lVar10 + -0x30;
    do {
      bVar4 = param_2 != *(float *)(lVar9 + 4);
      bVar5 = *(float *)(lVar9 + 4) <= param_2;
      *(bool *)lVar9 = bVar5 && bVar4;
      if (bVar5 && bVar4) {
        lVar7 = lVar9;
      }
      lVar9 = lVar9 + 0x30;
      lVar10 = lVar10 + -0x30;
    } while (lVar10 != 0);
    if (lVar7 == 0) goto LAB_148605870;
    lVar7 = lVar7 + 8;
  }
  lVar8 = FUN_1401fe4bc(lVar7);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  puVar1 = (undefined8 *)(param_1 + 8);
  lVar9 = FUN_1401fe4bc(puVar1);
  if (lVar8 == lVar9) {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) goto LAB_148605a14;
  }
  else {
    if ((lVar8 == 0) || (DAT_14c950c29 == '\0')) {
      if (lVar8 != 0) goto LAB_1486058be;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (*(int *)(param_1 + 0x2c) < 0) {
        FUN_1446f8c06((undefined8 *)(param_1 + 0x20),0);
      }
      puVar3 = *(undefined2 **)(param_1 + 0x20);
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    else {
      FUN_1456cec3c(lVar8);
LAB_1486058be:
      FUN_1400bbfc4(&local_50,lVar8);
      *(undefined4 *)(param_1 + 0x10) = local_50;
      *(undefined4 *)(param_1 + 0x14) = uStack_4c;
      *(undefined4 *)(param_1 + 0x18) = uStack_48;
      *(undefined4 *)(param_1 + 0x1c) = uStack_44;
      if ((undefined4 *)(param_1 + 0x10) == &local_50) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x20) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x20) = local_40;
        local_40 = 0;
        *(undefined4 *)(param_1 + 0x28) = local_38;
        *(undefined4 *)(param_1 + 0x2c) = local_34;
      }
      cVar6 = (*(code *)PTR_FUN_14c758760)();
      if (cVar6 != '\0') {
        uVar2 = *(uint *)(lVar8 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        if ((*(uint *)(lVar9 + 8) & 0x8400000) != 0) {
          *(undefined8 *)(param_1 + 8) = 0;
          goto LAB_1486059bc;
        }
      }
      FUN_14485c47a(puVar1,lVar8);
    }
LAB_1486059bc:
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
    lVar9 = *(longlong *)(param_1 + 0xf0);
    lVar10 = (longlong)*(int *)(param_1 + 0xf8) * 0x30;
    do {
      local_58 = lVar8;
      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar8);
      }
      FUN_148605a52(lVar9,&local_58);
      lVar9 = lVar9 + 0x30;
      lVar10 = lVar10 + -0x30;
    } while (lVar10 != 0);
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
LAB_148605a14:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148605a52 FUN_148605a52 body=169 status=ok
// SIG undefined FUN_148605a52(void)

void FUN_148605a52(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if ((*param_1 != 0) && (param_1[2] != 0)) {
    cVar2 = FUN_144729dda(param_1 + 1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(longlong *)param_1[2] + 0x10))();
      if (cVar2 != '\0') {
        plVar1 = (longlong *)*param_1;
        lVar3 = *param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        if (*plVar1 != lVar3) {
          plVar1 = (longlong *)*param_1;
          lVar3 = *param_2;
          if (DAT_14c950c29 == 1) {
            if (lVar3 == 0) {
              lVar3 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar3 = *param_2;
            }
          }
          *plVar1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x000148605ad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)param_1[2] + 0x20))
                    ((longlong *)param_1[2],param_1[4],param_1[3]);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148605afc FUN_148605afc body=192 status=ok
// SIG undefined FUN_148605afc(void)

void FUN_148605afc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    lVar1 = FUN_1401fe4bc(param_1 + 8);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xf0);
      lVar3 = (longlong)*(int *)(param_1 + 0xf8) * 0x30;
      do {
        local_38 = lVar1;
        if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar1);
        }
        FUN_148605a52(lVar2,&local_38);
        lVar2 = lVar2 + 0x30;
        lVar3 = lVar3 + -0x30;
      } while (lVar3 != 0);
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148605bbe FUN_148605bbe body=115 status=ok
// SIG undefined FUN_148605bbe(void)

void FUN_148605bbe(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (1 < param_2) {
    return;
  }
  lVar1 = param_1 + 0x70 + (ulonglong)param_2 * 0x48;
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar1 + -0x10) = *param_3;
  FUN_1486082a2(lVar1,param_3 + 2);
  *(undefined8 *)(lVar1 + 0x10) = param_3[4];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)(param_3 + 6);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x34);
  *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(param_3 + 5);
  *(undefined4 *)(lVar1 + 0x1c) = uVar2;
  *(undefined4 *)(lVar1 + 0x20) = uVar3;
  *(undefined4 *)(lVar1 + 0x24) = uVar4;
  FUN_144a787a6(param_1 + (ulonglong)param_2 * 0x48 + 0x98,param_3 + 7);
  return;
}



// FUNCTION 148605c32 FUN_148605c32 body=214 status=ok
// SIG undefined FUN_148605c32(void)

bool FUN_148605c32(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 < 2) {
    FUN_1486038da(&local_70,param_1 + (ulonglong)param_2 * 0x48 + 0x60);
    *param_3 = local_70;
    *(undefined4 *)(param_3 + 1) = local_68;
    FUN_148608302(param_3 + 2,local_60);
    param_3[4] = local_50;
    *(undefined4 *)(param_3 + 5) = local_48;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_44;
    *(undefined4 *)(param_3 + 6) = uStack_40;
    *(undefined4 *)((longlong)param_3 + 0x34) = uStack_3c;
    if (&local_70 != param_3) {
      if (param_3[7] != 0) {
        FUN_1400020a8();
      }
      param_3[7] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_3 + 8) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_3 + 0x44) = local_30._4_4_;
      local_30 = 0;
    }
    FUN_148603a84(&local_70);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2 < 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148605d0a FUN_148605d0a body=510 status=ok
// SIG undefined FUN_148605d0a(void)

void FUN_148605d0a(longlong *param_1,uint param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 param_5,char param_6)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (1 < param_2) goto LAB_148605d6a;
  if ((param_6 == '\0') && ((char)param_1[(ulonglong)param_2 * 9 + 0xd] == '\x01')) {
    if ((param_3 == (undefined8 *)0x0) || (*(char *)(param_3 + 1) != '\x01')) goto LAB_148605d6a;
LAB_148605e26:
    local_58 = 0;
    uStack_60 = 0;
    local_68 = 0;
    uStack_70 = 0;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = 0;
    local_90 = *(uint *)(param_3 + 1);
    local_98 = *param_3;
    FUN_1486082a2(&local_88,param_3 + 2);
    local_78 = param_3[4];
    uStack_70 = param_3[5];
    local_68 = param_3[6];
    FUN_144a787a6(&uStack_60,param_3 + 7);
  }
  else {
    local_98 = 0;
    local_90 = local_90 & 0xffffff00;
    local_88 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    if (param_3 != (undefined8 *)0x0) goto LAB_148605e26;
    uStack_80 = 1;
    FUN_148608c26(&local_88,0);
    uVar1 = local_88;
    local_e0 = param_1[6];
    local_d8 = (undefined4)param_1[7];
    uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x3c);
    uStack_d0 = (undefined4)param_1[8];
    uStack_cc = *(undefined4 *)((longlong)param_1 + 0x44);
    local_c8 = (void *)0x0;
    local_c0 = (int)param_1[10];
    lVar2 = (longlong)local_c0;
    _Src = (void *)param_1[9];
    if (lVar2 == 0) {
      local_bc = 0;
    }
    else {
      FUN_1446dd670(&local_c8,local_c0,0);
      memcpy(local_c8,_Src,lVar2 * 2);
    }
    FUN_148608b9c(uVar1,0,&local_e0);
  }
  FUN_148603764(&local_e0,&local_98,param_4);
  (**(code **)(*param_1 + 0x18))(param_1,(ulonglong)param_2,&local_e0);
  FUN_148603a84(&local_e0);
  FUN_148603a84(&local_98);
LAB_148605d6a:
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148605f0a FUN_148605f0a body=119 status=ok
// SIG undefined FUN_148605f0a(void)

void FUN_148605f0a(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (1 < param_2) {
    return;
  }
  lVar1 = param_1 + (ulonglong)param_2 * 0x48;
  FUN_148608273(*(undefined8 *)(lVar1 + 0x70),*(undefined4 *)(lVar1 + 0x78));
  *(undefined4 *)(lVar1 + 0x78) = 0;
  if (*(int *)(lVar1 + 0x7c) != 0) {
    FUN_148609ff6(param_1 + (ulonglong)param_2 * 0x48 + 0x70);
  }
  *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(lVar1 + 0x88) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(lVar1 + 0x8c) = uVar2;
  *(undefined4 *)(lVar1 + 0x90) = uVar3;
  *(undefined4 *)(lVar1 + 0x94) = uVar4;
  FUN_144a787a6(lVar1 + 0x98,param_1 + 0x48);
  return;
}



// FUNCTION 148605f82 FUN_148605f82 body=190 status=ok
// SIG undefined FUN_148605f82(void)

void FUN_148605f82(longlong *param_1)

{
  int iVar1;
  void *_Src;
  
  *(int *)(param_1 + 0xd) = (int)param_1[0x16];
  param_1[0xc] = param_1[0x15];
  FUN_1486082a2(param_1 + 0xe,param_1 + 0x17);
  param_1[0x10] = param_1[0x19];
  *(int *)(param_1 + 0x11) = (int)param_1[0x1a];
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_1 + 0xd4);
  *(int *)(param_1 + 0x12) = (int)param_1[0x1b];
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_1 + 0xdc);
  iVar1 = (int)param_1[0x1d];
  _Src = (void *)param_1[0x1c];
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xa4) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x13,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x13],_Src,(longlong)iVar1 * 2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148606031. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,1);
  return;
}



// FUNCTION 148606040 FUN_148606040 body=58 status=ok
// SIG undefined FUN_148606040(void)

void FUN_148606040(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xf0);
    lVar2 = (longlong)*(int *)(param_1 + 0xf8) * 0x30;
    do {
      FUN_14860607a(lVar1);
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14860607a FUN_14860607a body=94 status=ok
// SIG undefined FUN_14860607a(void)

void FUN_14860607a(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(longlong *)(param_1 + 0x28);
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_148605a52(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486060da FUN_1486060da body=345 status=ok
// SIG undefined FUN_1486060da(void)

bool FUN_1486060da(longlong param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_2 < 2) {
    *param_3 = *(undefined8 *)(param_1 + 8);
    lVar5 = (ulonglong)param_2 * 0x10;
    *(bool *)(param_3 + 1) = 0 < *(int *)(param_1 + 0x58 + lVar5);
    lVar8 = (longlong)*(int *)(param_1 + 0x58 + lVar5);
    if (lVar8 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x50 + lVar5);
      lVar6 = 0;
      do {
        puVar2 = *(undefined4 **)(lVar7 + lVar6);
        iVar1 = *(int *)(param_3 + 3);
        lVar9 = (longlong)iVar1;
        *(uint *)(param_3 + 3) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0x1c) < iVar1 + 1U) {
          FUN_1404fc222(param_3 + 2,iVar1);
        }
        lVar3 = param_3[2];
        *(undefined4 *)(lVar3 + lVar9 * 0x18) = *puVar2;
        *(undefined8 *)(lVar3 + 8 + lVar9 * 0x18) = *(undefined8 *)(puVar2 + 2);
        lVar4 = *(longlong *)(puVar2 + 4);
        *(longlong *)(lVar3 + 0x10 + lVar9 * 0x18) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        lVar6 = lVar6 + 0x10;
      } while (lVar8 * 0x10 != lVar6);
    }
    if (((*(char *)(param_1 + 0x11) == '\0') || (*(int *)(param_1 + lVar5 + 0x58) == 0)) &&
       (lVar8 = (longlong)*(int *)(param_1 + 0x38 + lVar5), lVar8 != 0)) {
      lVar5 = *(longlong *)(param_1 + 0x30 + lVar5);
      lVar7 = 0;
      do {
        puVar2 = *(undefined4 **)(lVar5 + lVar7);
        iVar1 = *(int *)(param_3 + 3);
        lVar6 = (longlong)iVar1;
        *(uint *)(param_3 + 3) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0x1c) < iVar1 + 1U) {
          FUN_1404fc222(param_3 + 2,iVar1);
        }
        lVar9 = param_3[2];
        *(undefined4 *)(lVar9 + lVar6 * 0x18) = *puVar2;
        *(undefined8 *)(lVar9 + 8 + lVar6 * 0x18) = *(undefined8 *)(puVar2 + 2);
        lVar3 = *(longlong *)(puVar2 + 4);
        *(longlong *)(lVar9 + 0x10 + lVar6 * 0x18) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        lVar7 = lVar7 + 0x10;
      } while (lVar8 * 0x10 != lVar7);
    }
  }
  return param_2 < 2;
}


