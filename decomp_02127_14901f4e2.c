// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14901f4e2 FUN_14901f4e2 body=34 status=ok
// SIG undefined FUN_14901f4e2(void)

undefined8 FUN_14901f4e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14901f520 FUN_14901f520 body=101 status=ok
// SIG undefined FUN_14901f520(void)

void FUN_14901f520(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba6a6e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14901f586 FUN_14901f586 body=101 status=ok
// SIG undefined FUN_14901f586(void)

void FUN_14901f586(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba6a6e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14901f5ec FUN_14901f5ec body=134 status=ok
// SIG undefined FUN_14901f5ec(void)

void FUN_14901f5ec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba6a6e0;
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
                    /* WARNING: Could not recover jumptable at 0x00014901f663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14901f684 FUN_14901f684 body=25 status=ok
// SIG undefined FUN_14901f684(void)

undefined8 FUN_14901f684(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14901f69e FUN_14901f69e body=64 status=ok
// SIG undefined FUN_14901f69e(void)

void FUN_14901f69e(void)

{
  if (DAT_14cbf61b4 != 0) {
    DAT_14cbf61b4 = 0;
    FUN_1446f8d3c(&DAT_14cbf61a8,DAT_14cbf61b0,0,0x10,8);
  }
  return;
}



// FUNCTION 14901f6de FUN_14901f6de body=255 status=ok
// SIG undefined FUN_14901f6de(void)

void FUN_14901f6de(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))
                              (plVar2,param_2,param_3,param_4,param_5,param_6,param_7),
           cVar4 != '\0'))) {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14901f7a5;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14901f7a5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14901f7de FUN_14901f7de body=36 status=ok
// SIG undefined FUN_14901f7de(void)

undefined8 FUN_14901f7de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14901f81e FUN_14901f81e body=93 status=ok
// SIG undefined FUN_14901f81e(void)

void FUN_14901f81e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba6a750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901f87c FUN_14901f87c body=126 status=ok
// SIG undefined FUN_14901f87c(void)

void FUN_14901f87c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba6a750;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014901f8eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14901f8fa FUN_14901f8fa body=21 status=ok
// SIG undefined FUN_14901f8fa(void)

undefined8 FUN_14901f8fa(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14901f910 FUN_14901f910 body=44 status=ok
// SIG undefined FUN_14901f910(void)

longlong FUN_14901f910(longlong param_1,int param_2)

{
  FUN_1410c966c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1 + -8,0x18);
  }
  return param_1 + -8;
}



// FUNCTION 14901f93c FUN_14901f93c body=980 status=ok
// SIG undefined FUN_14901f93c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14901f93c(void)

{
  size_t sVar1;
  wchar_t *pwVar2;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1401afab0(&local_58);
  local_38 = local_58;
  if (local_50 == 0) {
    local_38 = L"";
  }
  if (local_38 == (wchar_t *)0x0) {
    uStack_30 = 0;
  }
  else {
    sVar1 = wcslen(local_38);
    uStack_30 = (int)sVar1;
  }
  local_28 = L"Binaries/ThirdParty/CEF3/Win64";
  local_20 = 0x1e;
  FUN_140bee87a(&local_48,&local_38,2);
  if (DAT_14cbf6230 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  DAT_14cbf6230 = local_48;
  local_48 = (wchar_t *)0x0;
  DAT_14cbf6238 = (int)local_40;
  _DAT_14cbf623c = local_40._4_4_;
  local_40 = 0;
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8(local_58);
  }
  pwVar2 = DAT_14cbf6230;
  if (DAT_14cbf6238 == 0) {
    pwVar2 = L"";
  }
  FUN_1458f4f8e(pwVar2);
  local_38 = L"";
  if (DAT_14cbf6238 != 0) {
    local_38 = DAT_14cbf6230;
  }
  if (local_38 == (wchar_t *)0x0) {
    uStack_30 = 0;
  }
  else {
    sVar1 = wcslen(local_38);
    uStack_30 = (int)sVar1;
  }
  local_28 = L"libcef.dll";
  local_20 = 10;
  FUN_140bee87a(&local_48,&local_38,2);
  DAT_14cbf6208 = FUN_1443f1e25(&local_48);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14cbf6208 != 0) {
    local_38 = DAT_14cbf6230;
    if (DAT_14cbf6238 == 0) {
      local_38 = L"";
    }
    if (local_38 == (wchar_t *)0x0) {
      uStack_30 = 0;
    }
    else {
      sVar1 = wcslen(local_38);
      uStack_30 = (int)sVar1;
    }
    local_28 = L"chrome_elf.dll";
    local_20 = 0xe;
    FUN_140bee87a(&local_48,&local_38,2);
    DAT_14cbf6210 = FUN_1443f1e25(&local_48);
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_38 = DAT_14cbf6230;
    if (DAT_14cbf6238 == 0) {
      local_38 = L"";
    }
    if (local_38 == (wchar_t *)0x0) {
      uStack_30 = 0;
    }
    else {
      sVar1 = wcslen(local_38);
      uStack_30 = (int)sVar1;
    }
    local_28 = L"d3dcompiler_47.dll";
    local_20 = 0x12;
    FUN_140bee87a(&local_48,&local_38,2);
    DAT_14cbf6218 = FUN_1443f1e25(&local_48);
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_38 = DAT_14cbf6230;
    if (DAT_14cbf6238 == 0) {
      local_38 = L"";
    }
    if (local_38 == (wchar_t *)0x0) {
      uStack_30 = 0;
    }
    else {
      sVar1 = wcslen(local_38);
      uStack_30 = (int)sVar1;
    }
    local_28 = L"libGLESv2.dll";
    local_20 = 0xd;
    FUN_140bee87a(&local_48,&local_38,2);
    DAT_14cbf6220 = FUN_1443f1e25(&local_48);
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_38 = DAT_14cbf6230;
    if (DAT_14cbf6238 == 0) {
      local_38 = L"";
    }
    if (local_38 == (wchar_t *)0x0) {
      uStack_30 = 0;
    }
    else {
      sVar1 = wcslen(local_38);
      uStack_30 = (int)sVar1;
    }
    local_28 = L"libEGL.dll";
    local_20 = 10;
    FUN_140bee87a(&local_48,&local_38,2);
    DAT_14cbf6228 = FUN_1443f1e25(&local_48);
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  pwVar2 = DAT_14cbf6230;
  if (DAT_14cbf6238 == 0) {
    pwVar2 = L"";
  }
  FUN_145be8130(pwVar2);
  FUN_1401aea18(&local_38,&DAT_14cbf6230);
  if (DAT_14cbf6230 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  DAT_14cbf6230 = local_38;
  DAT_14cbf6238 = uStack_30;
  _DAT_14cbf623c = uStack_2c;
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cbf6208 != 0;
}



// FUNCTION 14901fd11 FUN_14901fd11 body=108 status=ok
// SIG undefined FUN_14901fd11(void)

void FUN_14901fd11(void)

{
  FreeLibrary(DAT_14cbf6208);
  DAT_14cbf6208 = (HMODULE)0x0;
  FreeLibrary(DAT_14cbf6210);
  DAT_14cbf6210 = (HMODULE)0x0;
  FreeLibrary(DAT_14cbf6218);
  DAT_14cbf6218 = (HMODULE)0x0;
  FreeLibrary(DAT_14cbf6220);
  DAT_14cbf6220 = (HMODULE)0x0;
  FreeLibrary(DAT_14cbf6228);
  DAT_14cbf6228 = (HMODULE)0x0;
  return;
}



// FUNCTION 14901fd7d FUN_14901fd7d body=8 status=ok
// SIG undefined FUN_14901fd7d(void)

undefined8 FUN_14901fd7d(void)

{
  return DAT_14cbf6208;
}



// FUNCTION 14901fd86 FUN_14901fd86 body=116 status=ok
// SIG undefined FUN_14901fd86(void)

undefined8 * FUN_14901fd86(undefined8 *param_1)

{
  param_1[1] = &DAT_14ba6a9f8;
  param_1[3] = &DAT_14ba6aa00;
  *param_1 = &PTR_FUN_14ba6aa10;
  param_1[0xc] = &PTR_LAB_14ba6aa40;
  param_1[2] = &PTR_LAB_14ba6aa70;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 14901fe1a FUN_14901fe1a body=146 status=ok
// SIG undefined FUN_14901fe1a(void)

undefined8 * FUN_14901fe1a(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14ba6d600;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_2 != (char *)0x0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    sVar1 = strlen(param_2);
    FUN_140cd1a74(&local_48,param_2,sVar1);
    FUN_1490466b6(param_1,&local_48);
    FUN_1401d9a90(&local_48);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901feae FUN_14901feae body=56 status=ok
// SIG undefined FUN_14901feae(void)

void FUN_14901feae(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  lVar1 = 0;
  if (0 < param_2) {
    lVar1 = param_2;
  }
  *(longlong *)(param_1 + 0x40) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00014901fedf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 14901fee6 FUN_14901fee6 body=142 status=ok
// SIG undefined FUN_14901fee6(void)

ulonglong FUN_14901fee6(longlong param_1,float param_2,byte param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 unaff_RDI;
  undefined7 uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x50) < 0) {
    bVar3 = false;
    uVar4 = 0;
  }
  else {
    lVar1 = (longlong)(param_2 * -1000.0 + (float)*(longlong *)(param_1 + 0x50));
    lVar2 = lVar1;
    if (param_3 != 0) {
      lVar2 = -1;
    }
    bVar3 = lVar1 < 1;
    uVar4 = (undefined7)((ulonglong)unaff_RDI >> 8);
    if (lVar1 < 1) {
      lVar2 = -1;
    }
    *(longlong *)(param_1 + 0x50) = lVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((bVar3 | param_3) == 1) {
    cef_do_message_loop_work();
  }
  return CONCAT71(uVar4,bVar3 | param_3) & 0xffffffff;
}



// FUNCTION 14901ff74 FUN_14901ff74 body=194 status=ok
// SIG undefined FUN_14901ff74(void)

undefined8 * FUN_14901ff74(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  uint uVar2;
  undefined8 uVar3;
  
  param_1[1] = &DAT_14ba6ab20;
  *param_1 = &PTR_FUN_14ba6ab30;
  param_1[8] = &PTR_LAB_14ba6ab70;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  uVar2 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  *(uint *)((longlong)param_1 + 0x14) = uVar2;
  if (0 < (int)uVar2) {
    uVar3 = FUN_144a7d36f(uVar2 & 0x7fffffff);
    param_1[3] = uVar3;
    (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,uVar2 & 0x7fffffff,uVar3);
  }
  return param_1;
}



// FUNCTION 149020036 FUN_149020036 body=94 status=ok
// SIG undefined FUN_149020036(void)

void FUN_149020036(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x40) = &PTR_FUN_14ba6ab30;
  *(undefined ***)(param_1 + -0x38 + (longlong)*(int *)(*(longlong *)(param_1 + -0x38) + 4)) =
       &PTR_LAB_14ba6ab70;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x38) + 4);
  *(int *)(param_1 + -0x3c + (longlong)iVar1) = iVar1 + -0x38;
  if (*(longlong *)(param_1 + -0x28) != 0) {
    thunk_FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + -0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149020096 FUN_149020096 body=290 status=ok
// SIG undefined FUN_149020096(void)

void FUN_149020096(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined **local_50;
  longlong local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)*param_2;
  if (*(int *)(param_1 + 0x28) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x20);
  }
  FUN_1490201ba(&local_50,puVar3);
  (**(code **)(*plVar1 + 0x40))(plVar1,&local_50);
  local_50 = &PTR_FUN_14ba6d600;
  if ((local_48 != 0) && (local_40 == '\x01')) {
    cef_string_utf16_clear();
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,200);
  plVar1 = (longlong *)*param_2;
  FUN_14901fe1a(&local_50,&DAT_14b40a962);
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_50);
  local_50 = &PTR_FUN_14ba6d600;
  if ((local_48 != 0) && (local_40 == '\x01')) {
    cef_string_utf16_clear();
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  *param_3 = (longlong)*(int *)(param_1 + 0x14);
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490201ba FUN_1490201ba body=161 status=ok
// SIG undefined FUN_1490201ba(void)

undefined8 * FUN_1490201ba(undefined8 *param_1,wchar_t *param_2)

{
  size_t sVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14ba6d600;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_2 != (wchar_t *)0x0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    sVar1 = wcslen(param_2);
    FUN_145b284a4(&local_48,param_2,sVar1);
    FUN_1490467a0(param_1,&local_48);
    if (7 < uStack_30) {
      FUN_14600850e(&local_48,local_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902025c FUN_14902025c body=87 status=ok
// SIG undefined FUN_14902025c(void)

undefined8 FUN_14902025c(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  (*(code *)**(undefined8 **)*param_3)();
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 1;
}



// FUNCTION 1490202b4 FUN_1490202b4 body=111 status=ok
// SIG undefined FUN_1490202b4(void)

bool FUN_1490202b4(longlong param_1,void *param_2,uint param_3,uint *param_4,longlong *param_5)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  if ((int)param_3 <= (int)uVar2) {
    uVar2 = param_3;
  }
  *param_4 = uVar2;
  if (0 < (int)uVar2) {
    memcpy(param_2,(void *)((longlong)*(int *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x18)),
           (ulonglong)uVar2);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *param_4;
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return 0 < (int)uVar2;
}



// FUNCTION 149020324 FUN_149020324 body=800 status=ok
// SIG undefined FUN_149020324(void)

undefined8 *
FUN_149020324(undefined8 *param_1,undefined1 param_2,undefined1 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  param_1[1] = &DAT_14ba6abc4;
  param_1[3] = &DAT_14ba6abcc;
  param_1[5] = &DAT_14ba6abd4;
  param_1[7] = &DAT_14ba6abdc;
  param_1[9] = &DAT_14ba6abe4;
  param_1[0xb] = &DAT_14ba6abec;
  param_1[0xd] = &DAT_14ba6abf4;
  param_1[0xf] = &DAT_14ba6abfc;
  param_1[0x11] = &DAT_14ba6ac04;
  param_1[0x13] = &DAT_14ba6ac0c;
  param_1[0x15] = &DAT_14ba6ac14;
  param_1[0x17] = &DAT_14ba6ac1c;
  param_1[0x19] = &DAT_14ba6ac24;
  param_1[0x1b] = &DAT_14ba6ac2c;
  *param_1 = &PTR_LAB_14ba6ac40;
  param_1[0x3d] = &PTR_LAB_14ba6acd0;
  param_1[2] = &PTR_FUN_14ba6ad00;
  param_1[4] = &PTR_FUN_14ba6ad50;
  param_1[6] = &PTR_FUN_14ba6ad70;
  param_1[8] = &PTR_LAB_14ba6ad90;
  param_1[10] = &PTR_FUN_14ba6ae10;
  param_1[0xc] = &PTR_FUN_14ba6ae68;
  param_1[0xe] = &PTR_FUN_14ba6ae80;
  param_1[0x10] = &PTR_FUN_14ba6aea0;
  param_1[0x12] = &PTR_FUN_14ba6aec0;
  param_1[0x14] = &PTR_FUN_14ba6aed0;
  param_1[0x16] = &PTR_LAB_14ba6af10;
  param_1[0x18] = &PTR_FUN_14ba6af28;
  param_1[0x1a] = &PTR_FUN_14ba6af38;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x1c) = param_2;
  *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe2) = param_3;
  param_1[0x1d] = 0;
  iVar1 = *(int *)(param_4 + 1);
  uVar2 = *param_4;
  *(int *)(param_1 + 0x1e) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x1d,iVar1,0);
    FUN_140b8566a(param_1[0x1d],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  iVar1 = *(int *)(param_5 + 1);
  uVar2 = *param_5;
  *(int *)(param_1 + 0x21) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x20,iVar1,0);
    FUN_140b8566a(param_1[0x20],uVar2,iVar1);
  }
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  uVar3 = FUN_14054d46e(&DAT_14c846b20,L"CefAllowAllCookies");
  *(undefined1 *)((longlong)param_1 + 0xe1) = uVar3;
  return param_1;
}



// FUNCTION 149020644 FUN_149020644 body=133 status=ok
// SIG undefined FUN_149020644(void)

void FUN_149020644(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x1a8);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_149020693;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      FUN_1490206ca(*(longlong *)(param_1 + 0x1a0),param_3);
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
LAB_149020693:
  lVar4 = *param_2;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001490206b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  return;
}



// FUNCTION 1490206ca FUN_1490206ca body=214 status=ok
// SIG undefined FUN_1490206ca(void)

void FUN_1490206ca(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 ***pppuVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 **local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149021a64(param_2,local_48);
  pppuVar1 = local_48;
  if (7 < local_30) {
    pppuVar1 = (undefined8 ***)local_48[0];
  }
  FUN_14020fad6(param_1 + 0x50,pppuVar1);
  if (7 < local_30) {
    FUN_14600850e(local_48,local_48[0]);
  }
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 0x58);
  lVar2 = (longlong)local_50;
  _Src = *(void **)(param_1 + 0x50);
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar2 * 2);
  }
  FUN_1477cc232(param_1 + 200,&local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490207a2 FUN_1490207a2 body=199 status=ok
// SIG undefined FUN_1490207a2(void)

void FUN_1490207a2(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  
  cVar6 = (**(code **)(*(longlong *)*param_3 + 0x70))();
  if ((cVar6 != '\0') && (plVar3 = *(longlong **)(param_1 + 0x1a8), plVar3 != (longlong *)0x0)) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_14902080c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar7 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar8);
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      FUN_14902086a(*(longlong *)(param_1 + 0x1a0),param_4);
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
LAB_14902080c:
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  lVar4 = *param_3;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014902084e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  return;
}



// FUNCTION 14902086a FUN_14902086a body=222 status=ok
// SIG undefined FUN_14902086a(void)

void FUN_14902086a(longlong *param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 **local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149021a64(param_2,local_48);
  pppuVar3 = local_48;
  if (7 < local_30) {
    pppuVar3 = (undefined8 ***)local_48[0];
  }
  FUN_14020fad6(param_1 + 0xc,pppuVar3);
  if (7 < local_30) {
    FUN_14600850e(local_48,local_48[0]);
  }
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1);
  local_58 = (void *)0x0;
  local_50 = (int)param_1[0xd];
  lVar2 = (longlong)local_50;
  _Src = (void *)param_1[0xc];
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar2 * 2);
  }
  FUN_1477cc232(uVar1,&local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902094a FUN_14902094a body=127 status=ok
// SIG undefined FUN_14902094a(void)

undefined8 FUN_14902094a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x1a8);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_149020999;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      FUN_1490209ca(*(longlong *)(param_1 + 0x1a0),param_3);
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
LAB_149020999:
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  return 0;
}



// FUNCTION 1490209ca FUN_1490209ca body=387 status=ok
// SIG undefined FUN_1490209ca(void)

void FUN_1490209ca(longlong *param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  int local_50;
  undefined8 ***local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_149021a64(param_2,local_48);
  ppppuVar4 = local_48;
  if (7 < local_30) {
    ppppuVar4 = (undefined8 ****)local_48[0];
  }
  FUN_140056680(&local_58,ppppuVar4);
  if (7 < local_30) {
    FUN_14600850e(local_48,local_48[0]);
  }
  iVar1 = (int)param_1[0xf];
  if (iVar1 == local_50) {
    if (1 < iVar1) {
      lVar6 = 0;
      while( true ) {
        uVar7 = *(ushort *)(param_1[0xe] + lVar6);
        uVar8 = (ulonglong)uVar7;
        uVar3 = *(ushort *)(local_58 + lVar6);
        if (uVar7 != uVar3) break;
        if (uVar7 == 0) goto LAB_149020a92;
LAB_149020a5a:
        lVar6 = lVar6 + 2;
      }
      if ((uVar3 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar5 = (ulonglong)uVar3;
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar5]) goto LAB_149020a5a;
      }
      if (uVar7 != uVar3) goto LAB_149020ad2;
    }
  }
  else if (iVar1 + local_50 != 1) {
LAB_149020ad2:
    iVar1 = local_50 + -1;
    if (local_50 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_1 + 0xe,local_58,iVar1);
    uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    local_68 = (void *)0x0;
    local_60 = (int)param_1[0xf];
    lVar6 = (longlong)local_60;
    _Src = (void *)param_1[0xe];
    if (lVar6 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,_Src,lVar6 * 2);
    }
    FUN_1477cc232(uVar2,&local_68);
  }
LAB_149020a92:
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149020b4e FUN_149020b4e body=188 status=ok
// SIG undefined FUN_149020b4e(void)

undefined8
FUN_149020b4e(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *param_2;
  if (local_40 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_40 + 8) + 4) + local_40 + 8))();
  }
  local_50 = param_6;
  local_58 = param_5;
  FUN_149020c0c(param_1 + 400,&local_40,param_3,param_4);
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149020c0c FUN_149020c0c body=191 status=ok
// SIG undefined FUN_149020c0c(void)

void FUN_149020c0c(longlong *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_40 = *param_2;
    if (local_40 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_40 + 8) + 4) + local_40 + 8))();
    }
    local_50 = param_6;
    local_58 = param_5;
    (**(code **)(*param_1 + 0x60))(param_1,&local_40,param_3,param_4);
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149020ccc FUN_149020ccc body=1042 status=ok
// SIG undefined FUN_149020ccc(void)

void FUN_149020ccc(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = (**(code **)(*(longlong *)*param_2 + 0x58))();
  if (cVar4 == '\0') goto LAB_149020dc6;
  lVar2 = *(longlong *)(param_1 + 0x1a0);
  if (lVar2 == 0) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
LAB_149020d67:
    (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,&local_48);
    (**(code **)(*local_48 + 8))(local_48,1);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_48 + (longlong)*(int *)(local_48[1] + 4) + 8) + 8))
                ();
    }
  }
  else {
    local_38 = 0;
    plStack_30 = *(longlong **)(lVar2 + 0x1b8);
    if (plStack_30 != (longlong *)0x0) {
      iVar5 = (int)plStack_30[1];
      do {
        if (iVar5 == 0) {
          plStack_30 = (longlong *)0x0;
          goto LAB_149020e18;
        }
        LOCK();
        iVar3 = (int)plStack_30[1];
        bVar10 = iVar5 == iVar3;
        if (bVar10) {
          *(int *)(plStack_30 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar10);
      if (plStack_30 != (longlong *)0x0) {
        local_38 = *(longlong *)(lVar2 + 0x1b0);
      }
    }
LAB_149020e18:
    if ((((local_38 == 0) || (*(int *)(*(longlong *)(param_1 + 0x1a0) + 0x178) == 0)) ||
        (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x1a0) + 0x170), plVar6 == (longlong *)0x0)
        ) || (cVar4 = (**(code **)(*plVar6 + 0x30))(), cVar4 == '\0')) goto LAB_149020d67;
    lVar2 = param_1 + -0x20;
    plVar6 = (longlong *)FUN_14001cc68(0x10,0x10);
    local_50 = lVar2;
    if (lVar2 != 0) {
      lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4);
      (*(code *)**(undefined8 **)(param_1 + -0x18 + lVar7))(lVar2 + lVar7 + 8);
    }
    local_58 = *param_2;
    if (local_58 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_58 + 8) + 4) + local_58 + 8))();
    }
    FUN_1490210e0(plVar6,&local_58,&local_50);
    local_48 = plVar6;
    local_40 = (longlong *)FUN_14001cc68(0x18,0x10);
    local_40[1] = (longlong)&DAT_100000001;
    *local_40 = (longlong)&PTR_FUN_14ba6d610;
    local_40[2] = (longlong)plVar6;
    FUN_1446ddc76(&local_68,"WebBrowser",1);
    plVar6 = local_68;
    uVar8 = FUN_144a52528();
    plVar6 = (longlong *)FUN_14493e38c(uVar8,plVar6);
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x48))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_68,&local_38,&local_48);
    plVar6 = local_60;
    if (local_60 == (longlong *)0x0) {
      *(longlong **)(param_1 + 400) = local_68;
      plVar9 = *(longlong **)(param_1 + 0x198);
      if (plVar9 != (longlong *)0x0) {
LAB_149020f77:
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        *(longlong **)(param_1 + 0x198) = plVar6;
        if (plVar6 != (longlong *)0x0) goto LAB_149020fac;
      }
    }
    else {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 400) = local_68;
      if (*(longlong **)(param_1 + 0x198) != local_60) {
        LOCK();
        *(int *)((longlong)local_60 + 0xc) = *(int *)((longlong)local_60 + 0xc) + 1;
        UNLOCK();
        plVar9 = *(longlong **)(param_1 + 0x198);
        if (plVar9 != (longlong *)0x0) goto LAB_149020f77;
        *(longlong **)(param_1 + 0x198) = local_60;
      }
LAB_149020fac:
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    lVar2 = *(longlong *)(param_1 + 0x1a0);
    local_78 = *(undefined8 *)(param_1 + 0x1a8);
    local_70 = *(longlong **)(param_1 + 0x1b0);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
      UNLOCK();
    }
    local_88 = local_68;
    local_80 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_60 + 0xc) = *(int *)((longlong)local_60 + 0xc) + 1;
      UNLOCK();
    }
    if (*(int *)(lVar2 + 0x178) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(lVar2 + 0x170);
    }
    cVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,&local_88,&local_78);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    if (cVar4 == '\0') {
      (**(code **)(*local_68 + 0x118))(local_68,1,0);
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_60 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_40 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_40)(local_40);
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
  plVar6 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_30 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_149020dc6:
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490210e0 FUN_1490210e0 body=148 status=ok
// SIG undefined FUN_1490210e0(void)

longlong * FUN_1490210e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return param_1;
}



// FUNCTION 149021174 FUN_149021174 body=314 status=ok
// SIG undefined FUN_149021174(void)

undefined8 FUN_149021174(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  BOOL BVar7;
  HWND hWnd;
  HWND hWnd_00;
  HWND hWnd_01;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x198);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_1490211c7:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_1490211c7;
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    if (*(longlong *)(param_1 + 400) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 400) + 0x94) = 1;
    }
    bVar4 = false;
  }
  (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,&local_38);
  hWnd = (HWND)(**(code **)(*local_38 + 0x20))();
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_38 + (longlong)*(int *)(local_38[1] + 4) + 8) + 8))()
    ;
  }
  if ((hWnd != (HWND)0x0) && (hWnd_00 = GetParent(hWnd), hWnd_00 != (HWND)0x0)) {
    hWnd_01 = GetFocus();
    if ((hWnd_01 != (HWND)0x0) && ((hWnd_01 == hWnd || (BVar7 = IsChild(hWnd,hWnd_01), BVar7 != 0)))
       ) {
      SetFocus(hWnd_00);
    }
    SetParent(hWnd,(HWND)0x0);
  }
  if (!bVar4) {
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
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1490212b0 FUN_1490212b0 body=130 status=ok
// SIG undefined FUN_1490212b0(void)

void FUN_1490212b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x198);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1490212ff;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 400) != 0) {
      FUN_149021332();
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
LAB_1490212ff:
  lVar4 = *param_2;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014902131f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  return;
}



// FUNCTION 149021332 FUN_149021332 body=450 status=ok
// SIG undefined FUN_149021332(void)

void FUN_149021332(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x1c8))();
  if (((longlong *)*plVar7 != (longlong *)0x0 && (int)plVar7[1] != 0) &&
     (cVar5 = (**(code **)(*(longlong *)*plVar7 + 0x30))(), cVar5 != '\0')) {
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x1c8))();
    plVar7 = (longlong *)param_1[4];
    if (plVar7 == (longlong *)0x0) {
LAB_1490213dd:
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plVar7[1];
      do {
        if (iVar6 == 0) goto LAB_1490213dd;
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar7 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      lVar2 = param_1[3];
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar7)();
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      bVar10 = false;
      local_48 = lVar2;
      plStack_40 = plVar7;
    }
    plVar7 = plStack_40;
    if (*(int *)(puVar8 + 1) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)*puVar8;
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,&local_48);
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_40 + 0x10))();
      }
    }
    if (!bVar10) {
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
  lVar2 = *(longlong *)(param_1[0x68] + 0xd8);
  *(undefined8 *)(param_1[0x68] + 0xd8) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = param_1[0x6a];
  if (*(longlong *)(lVar2 + 0x30) != 0) {
    FUN_149027446(lVar2);
  }
  lVar3 = *(longlong *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  lVar2 = param_1[8];
  param_1[8] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490214f6 FUN_1490214f6 body=1389 status=ok
// SIG undefined FUN_1490214f6(void)

ulonglong FUN_1490214f6(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,longlong param_7,longlong *param_8,
                       longlong param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 ***pppuVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong unaff_RBP;
  undefined7 uVar16;
  ulonglong uVar15;
  undefined8 ****ppppuVar17;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 ***local_a8;
  ulonglong uStack_a0;
  void *local_98;
  uint local_90;
  void *local_88;
  int local_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 ***local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_149021a64(param_4,&local_68);
  ppppuVar17 = &local_68;
  if (7 < local_50) {
    ppppuVar17 = (undefined8 ****)local_68;
  }
  FUN_140056680(&local_88,ppppuVar17);
  if (7 < local_50) {
    FUN_14600850e(&local_68,local_68);
  }
  FUN_149021a64(param_5,&local_68);
  ppppuVar17 = &local_68;
  if (7 < local_50) {
    ppppuVar17 = (undefined8 ****)local_68;
  }
  FUN_140056680(&local_98,ppppuVar17);
  if (7 < local_50) {
    FUN_14600850e(&local_68,local_68);
  }
  if (((*(int *)(param_1 + 0x168) != 0) && (*(longlong **)(param_1 + 0x160) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0x30))(), pvVar4 = local_98,
     cVar6 != '\0')) {
    local_a8 = (undefined8 ****)0x0;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,local_90);
    if ((longlong)(int)local_90 == 0) {
      uStack_a0 = (ulonglong)local_90;
    }
    else {
      FUN_1446dd670(&local_a8,local_90,0);
      memcpy(local_a8,pvVar4,(longlong)(int)local_90 * 2);
    }
    pvVar4 = local_88;
    local_b8 = (void *)0x0;
    uStack_b0._0_4_ = local_80;
    if ((longlong)local_80 == 0) {
      uStack_b0._4_4_ = 0;
    }
    else {
      FUN_1446dd670(&local_b8,local_80,0);
      memcpy(local_b8,pvVar4,(longlong)local_80 * 2);
    }
    if (*(int *)(param_1 + 0x168) == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(param_1 + 0x160);
    }
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    local_a8 = (undefined8 ***)0x0;
    uStack_a0 = 0;
    local_78 = local_b8;
    uStack_70 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0);
    local_b8 = (void *)0x0;
    uStack_b0 = 0;
    cVar6 = (**(code **)(*plVar10 + 0x58))();
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (undefined8 ***)0x0) {
      FUN_1400020a8();
    }
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
    if (cVar6 != '\0') goto LAB_149021705;
  }
  uVar16 = (undefined7)(unaff_RBP >> 8);
  unaff_RBP = CONCAT71(uVar16,1);
  if (((*(int *)(param_1 + 0x178) != 0) && (*(longlong **)(param_1 + 0x170) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x30))(), cVar6 != '\0')) {
    lVar9 = FUN_14001cc68(0x30,0x10);
    FUN_149021ab4(lVar9,param_6);
    plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14ba6d630;
    plVar10[2] = lVar9;
    local_c0 = 0xffffffff;
    local_c8 = (undefined8 ****)((ulonglong)local_c8._4_4_ << 0x20);
    iVar7 = FUN_1447ee042(&local_88,L"chrome-devtools",0xf,1);
    if (iVar7 == -1) {
      uVar15 = CONCAT71(uVar16,*(char *)(param_1 + 0xe0));
      uVar8 = *(uint *)(param_9 + 0x110);
      uVar14 = 0;
      uVar13 = uVar8 & 0xff000000;
      if (*(char *)(param_1 + 0xe0) != '\0') {
        uVar13 = uVar14;
      }
    }
    else {
      uVar8 = *(uint *)(param_9 + 0x110);
      uVar14 = 1;
      uVar15 = 0;
      uVar13 = uVar8 & 0xff000000;
    }
    *(char *)(lVar9 + 0x2a) = (char)uVar14;
    *(uint *)(param_9 + 0x110) = uVar8 & 0xffffff | uVar13;
    lVar11 = FUN_14001cc68(0x1f0,0x10);
    local_c8 = &local_68;
    local_68 = (undefined8 ****)0x0;
    uStack_60 = 0;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    FUN_149020324(lVar11,uVar15 & 0xffffffff,1);
    if (lVar11 != 0) {
      lVar12 = (longlong)*(int *)(*(longlong *)(lVar11 + 8) + 4);
      (*(code *)**(undefined8 **)(lVar11 + 8 + lVar12))(lVar11 + lVar12 + 8);
    }
    FUN_1447a1747(0,0);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    pppuVar5 = local_68;
    FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
    if ((undefined8 ****)pppuVar5 != (undefined8 ****)0x0) {
      FUN_1400020a8(pppuVar5);
    }
    if (param_1 != 0) {
      (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 8) + 4) + 8))();
    }
    lVar12 = *(longlong *)(lVar11 + 0x1c0);
    *(longlong *)(lVar11 + 0x1c0) = param_1;
    if (lVar12 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar12 + 8) + 4) + lVar12 + 8) + 8))();
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    plVar3 = *(longlong **)(lVar11 + 0x1d0);
    *(longlong *)(lVar11 + 0x1c8) = lVar9;
    *(longlong **)(lVar11 + 0x1d0) = plVar10;
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
    if (lVar11 != 0) {
      lVar9 = (longlong)*(int *)(*(longlong *)(lVar11 + 8) + 4);
      (*(code *)**(undefined8 **)(lVar11 + 8 + lVar9))(lVar11 + lVar9 + 8);
    }
    lVar9 = *param_8;
    *param_8 = lVar11;
    if (lVar9 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar9 + 8) + 4) + lVar9 + 8) + 8))();
    }
    *(undefined8 *)(param_7 + 0x50) = 1;
    *(undefined8 *)(param_7 + 0x40) = 0;
    if (lVar11 != 0) {
      lVar9 = (longlong)*(int *)(*(longlong *)(lVar11 + 8) + 4);
      (**(code **)(*(longlong *)(lVar11 + 8 + lVar9) + 8))(lVar11 + lVar9 + 8);
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar10 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    unaff_RBP = 0;
  }
LAB_149021705:
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  lVar9 = *param_2;
  if (lVar9 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar9 + 8) + 4) + lVar9 + 8) + 8))();
  }
  lVar9 = *param_3;
  if (lVar9 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar9 + 8) + 4) + lVar9 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 149021a64 FUN_149021a64 body=80 status=ok
// SIG undefined FUN_149021a64(void)

undefined8 * FUN_149021a64(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((puVar1 == (undefined8 *)0x0) || (puVar1[1] == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 7;
  }
  else {
    uVar2 = *puVar1;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    FUN_145b284a4(param_2,uVar2);
  }
  return param_2;
}



// FUNCTION 149021ab4 FUN_149021ab4 body=116 status=ok
// SIG undefined FUN_149021ab4(void)

void FUN_149021ab4(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_14ba6b0a0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(bool *)((longlong)param_1 + 0xc) = *(int *)(param_2 + 0xc) != 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(bool *)((longlong)param_1 + 0x14) = *(int *)(param_2 + 0x14) != 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(bool *)((longlong)param_1 + 0x1c) = *(int *)(param_2 + 0x1c) != 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(bool *)((longlong)param_1 + 0x24) = *(int *)(param_2 + 0x24) != 0;
  *(bool *)((longlong)param_1 + 0x25) = *(int *)(param_2 + 0x28) != 0;
  *(bool *)((longlong)param_1 + 0x26) = *(int *)(param_2 + 0x2c) != 0;
  *(bool *)((longlong)param_1 + 0x27) = *(int *)(param_2 + 0x30) != 0;
  *(bool *)((longlong)param_1 + 0x29) = *(int *)(param_2 + 0x34) != 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  return;
}



// FUNCTION 149021b28 FUN_149021b28 body=329 status=ok
// SIG undefined FUN_149021b28(void)

undefined8
FUN_149021b28(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5,longlong *param_6)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined ***local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_50 [8];
  undefined **local_48;
  longlong local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14901fe1a(&local_48,"Certificate error");
  (**(code **)(*(longlong *)*param_2 + 0x68))((longlong *)*param_2,local_50);
  local_58 = *param_2;
  if (local_58 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_58 + 8) + 4) + local_58 + 8))();
  }
  local_68 = &local_48;
  local_60 = param_4;
  (**(code **)(*(longlong *)(param_1 + -0x20) + 0x18))
            ((longlong *)(param_1 + -0x20),&local_58,local_50,param_3);
  local_48 = &PTR_FUN_14ba6d600;
  if ((local_40 != 0) && (local_38 == '\x01')) {
    cef_string_utf16_clear();
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_6;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149021c72 FUN_149021c72 body=693 status=ok
// SIG undefined FUN_149021c72(void)

void FUN_149021c72(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  void *_Src;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  undefined2 *puVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  longlong local_88;
  int local_80;
  longlong local_78;
  int local_70;
  undefined8 ***local_68;
  int local_60;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar6 = (**(code **)(*(longlong *)*param_3 + 0x70))();
  if ((cVar6 == '\0') || (plVar3 = *(longlong **)(param_1 + 0x188), plVar3 == (longlong *)0x0))
  goto LAB_149021d0a;
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) goto LAB_149021d0a;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar11 = iVar7 == iVar5;
    if (bVar11) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
  } while (!bVar11);
  puVar4 = *(undefined8 **)(param_1 + 0x180);
  if (puVar4 != (undefined8 *)0x0) {
    if ((0 < (int)*(uint *)(param_1 + 0xc0)) &&
       (*(uint *)(param_1 + 200) < *(uint *)(param_1 + 0xc0))) {
      FUN_149021a64(param_6,&local_68);
      ppppuVar9 = &local_68;
      if (7 < local_50) {
        ppppuVar9 = (undefined8 ****)local_68;
      }
      FUN_140056680(&local_78,ppppuVar9);
      if (7 < local_50) {
        FUN_14600850e(&local_68,local_68);
      }
      local_88 = local_78;
      local_80 = local_70 + -1;
      if (local_70 == 0) {
        local_80 = 0;
      }
      FUN_141306ffc(&local_68);
      if (1 < local_60) {
        iVar7 = *(int *)(param_1 + 200);
        *(int *)(param_1 + 200) = iVar7 + 1;
        lVar8 = (longlong)iVar7 * 0x10;
        if (*(int *)(*(longlong *)(param_1 + 0xb8) + 8 + lVar8) == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        else {
          puVar10 = *(undefined2 **)(*(longlong *)(param_1 + 0xb8) + lVar8);
        }
        local_b8 = 1;
        FUN_140807d8e(&local_78,&local_98,local_68,puVar10);
        _Src = local_98;
        local_a8 = (void *)0x0;
        local_a0 = local_90;
        if ((longlong)local_90 == 0) {
          local_9c = 0;
        }
        else {
          FUN_1446dd670(&local_a8,local_90,0);
          memcpy(local_a8,_Src,(longlong)local_90 * 2);
        }
        (**(code **)*puVar4)(puVar4,&local_a8);
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
        if ((undefined8 ****)local_68 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        goto LAB_149021ced;
      }
      if ((undefined8 ****)local_68 != (undefined8 ****)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_149021f28(puVar4,param_4,param_5,param_6);
  }
LAB_149021ced:
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
LAB_149021d0a:
  lVar8 = *param_2;
  if (lVar8 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar8 + 8) + 4) + lVar8 + 8) + 8))();
  }
  lVar8 = *param_3;
  if (lVar8 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar8 + 8) + 4) + lVar8 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149021f28 FUN_149021f28 body=1543 status=ok
// SIG undefined FUN_149021f28(void)

void FUN_149021f28(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  void *_Src;
  longlong ****_Src_00;
  undefined8 uVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  wchar_t *****pppppwVar11;
  longlong *****ppppplVar12;
  undefined1 auStack_118 [32];
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong *local_a8;
  longlong *plStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  void *local_88;
  int local_80;
  longlong ****local_78;
  int local_70;
  ulonglong local_60;
  wchar_t ****local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_149021a64(param_4,&local_58);
  pppppwVar11 = &local_58;
  if (7 < CONCAT44(uStack_3c,local_40)) {
    pppppwVar11 = (wchar_t *****)local_58;
  }
  FUN_140056680(&local_88,pppppwVar11);
  if (7 < CONCAT44(uStack_3c,local_40)) {
    FUN_14600850e(&local_58,local_58);
  }
  if (param_2 == -3) {
    iVar3 = (int)param_1[100];
    if (1 < iVar3) {
      if (iVar3 == local_80) {
        lVar6 = 0;
        while( true ) {
          uVar7 = *(ushort *)(param_1[99] + lVar6);
          uVar8 = (ulonglong)uVar7;
          uVar9 = *(ushort *)((longlong)local_88 + lVar6);
          if (uVar7 != uVar9) break;
          if (uVar7 == 0) goto LAB_14902205f;
LAB_149022023:
          lVar6 = lVar6 + 2;
        }
        if ((uVar9 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar10 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_149022023;
        }
        if (uVar7 != uVar9) goto LAB_149021faa;
      }
      else if (local_80 + iVar3 != 1) goto LAB_149021faa;
LAB_14902205f:
      FUN_144a7e010();
      *(undefined1 *)(param_1 + 0x62) = 0;
      if (1 < (int)param_1[0x66]) {
        FUN_1490357d0(param_1);
      }
    }
  }
  else {
    if ((char)param_1[0x18] == '\x01') {
      local_98 = 0;
      uStack_90 = 0;
      FUN_140009b9a(&local_78,&local_88);
      local_58 = (wchar_t ****)CONCAT44(local_58._4_4_,4);
      FUN_14023423e(&local_48,&local_78);
      FUN_140056680(&local_a8,L"FailedUrl");
      FUN_140233eec(&local_98,&local_a8,&local_58);
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
        local_48 = (longlong *)0x0;
        local_40 = 0;
      }
      if ((longlong *****)local_78 != (longlong *****)0x0) {
        (*(code *)(*local_78)[2])();
      }
      FUN_149021a64(param_3,&local_78);
      ppppplVar12 = &local_78;
      if (7 < local_60) {
        ppppplVar12 = (longlong *****)local_78;
      }
      FUN_140056680(local_b8,ppppplVar12);
      FUN_140233b1a(&local_a8,local_b8);
      local_58 = (wchar_t ****)CONCAT44(local_58._4_4_,4);
      FUN_14023423e(&local_48,&local_a8);
      FUN_140056680(local_c8,L"ErrorText");
      FUN_140233eec(&local_98,local_c8,&local_58);
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
        local_48 = (longlong *)0x0;
        local_40 = 0;
      }
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      if (7 < local_60) {
        FUN_14600850e(&local_78,local_78);
      }
      local_a8 = (longlong *)0x0;
      plStack_a0 = (longlong *)0x0;
      FUN_1413a4536(&local_78,param_2,0);
      local_58 = (wchar_t ****)CONCAT44(local_58._4_4_,4);
      FUN_14023423e(&local_48,&local_78);
      FUN_140056680(local_b8,L"ErrorCode");
      FUN_140233eec(&local_98,local_b8,&local_58);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
        local_48 = (longlong *)0x0;
        local_40 = 0;
      }
      if ((longlong *****)local_78 != (longlong *****)0x0) {
        (*(code *)(*local_78)[2])();
      }
      plVar4 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_a0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = (wchar_t ****)0x14ba6b9be;
      local_50 = 0x13;
      FUN_1446e940c(&local_a8,&local_58);
      local_58 = (wchar_t ****)0x14ba6b9e6;
      local_50 = 0x11;
      FUN_1446e940c(local_b8,&local_58);
      FUN_140208bae(&local_78,local_b8,&local_a8,
                    L"Failed to load URL {FailedUrl} with error {ErrorText} ({ErrorCode}).");
      FUN_14023409e(local_d8,&local_78,1);
      FUN_140233c04(&local_58,local_d8,&local_98);
      if ((longlong *****)local_78 != (longlong *****)0x0) {
        (*(code *)(*local_78)[2])();
      }
      uVar5 = FUN_1447a1f4a(&local_58);
      FUN_140b1283a(&local_a8,L"<html><body bgcolor=\"white\"><h2>",uVar5);
      FUN_144a882a8(&local_78,&local_a8,L"</h2></body></html>");
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      _Src = local_88;
      local_e8 = (void *)0x0;
      local_e0 = local_80;
      if ((longlong)local_80 == 0) {
        local_dc = 0;
      }
      else {
        FUN_1446dd670(&local_e8,local_80,0);
        memcpy(local_e8,_Src,(longlong)local_80 * 2);
      }
      _Src_00 = local_78;
      local_f8 = (void *)0x0;
      local_f0 = local_70;
      if ((longlong)local_70 == 0) {
        local_ec = 0;
      }
      else {
        FUN_1446dd670(&local_f8,local_70,0);
        memcpy(local_f8,_Src_00,(longlong)local_70 * 2);
      }
      (**(code **)(*param_1 + 8))(param_1,&local_f8,&local_e8);
      if ((longlong *****)local_78 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
      if ((wchar_t *****)local_58 != (wchar_t *****)0x0) {
        (*(code *)(*local_58)[2])();
      }
      FUN_14010f8af(local_98,uStack_90 & 0xffffffff);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
    *(int *)((longlong)param_1 + 0x30c) = param_2;
    *(undefined4 *)(param_1 + 5) = 1;
    FUN_149048cc6(param_1 + 0x15,1);
  }
LAB_149021faa:
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149022530 FUN_149022530 body=79 status=ok
// SIG undefined FUN_149022530(void)

void FUN_149022530(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000149022574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    return;
  }
  return;
}



// FUNCTION 149022580 FUN_149022580 body=133 status=ok
// SIG undefined FUN_149022580(void)

void FUN_149022580(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x188);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1490225cf;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x180) != 0) {
      FUN_149022606(*(longlong *)(param_1 + 0x180),param_3);
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
LAB_1490225cf:
  lVar4 = *param_2;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001490225ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  return;
}



// FUNCTION 149022606 FUN_149022606 body=198 status=ok
// SIG undefined FUN_149022606(void)

void FUN_149022606(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x95) = 1;
    if (*(char *)((longlong)param_1 + 0x309) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x309) = 0;
      FUN_1490335f2(param_1,1);
      FUN_1490335f2(param_1,0);
    }
    FUN_140056680(local_28,
                  L"document.dispatchEvent(new CustomEvent(\'ue:ready\', {details: window.ue}));");
    (**(code **)(*param_1 + 0x110))(param_1);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
    if ((int)param_1[5] == 1) goto LAB_149022668;
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 5) = uVar1;
  FUN_149048cc6(param_1 + 0x15);
LAB_149022668:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490226ce FUN_1490226ce body=216 status=ok
// SIG undefined FUN_1490226ce(void)

undefined4 FUN_1490226ce(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  ulonglong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = FUN_144d731b0(0);
  if ((char)uVar2 != '\0') {
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    FUN_145787ae8(DAT_14c98e618,&local_a8);
    *(undefined4 *)(param_3 + 0x10) = local_a8;
    *(undefined4 *)(param_3 + 0x14) = local_a4;
    FUN_140ecb711(local_a0,uStack_98 & 0xffffffff);
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490227a8 FUN_1490227a8 body=266 status=ok
// SIG undefined FUN_1490227a8(void)

void FUN_1490227a8(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x178);
  if (plVar3 == (longlong *)0x0) {
LAB_14902280a:
    *(undefined8 *)(param_3 + 0xc) = 0x100000000;
    *(undefined4 *)(param_3 + 8) = 0;
    *(undefined4 *)(param_3 + 0x14) = 1;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14902280a;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *(longlong *)(param_1 + 0x170);
    if (lVar4 == 0) {
      *(undefined8 *)(param_3 + 0xc) = 0x100000000;
      *(undefined4 *)(param_3 + 8) = 0;
      *(undefined4 *)(param_3 + 0x14) = 1;
    }
    else {
      iVar6 = *(int *)(lVar4 + 0x80);
      if ((iVar6 == (int)DAT_14c967818) && (*(int *)(lVar4 + 0x84) == DAT_14c967818._4_4_)) {
        *(undefined1 **)(param_3 + 0x10) = &DAT_100000001;
      }
      else {
        if (iVar6 < 2) {
          iVar6 = 1;
        }
        *(int *)(param_3 + 0x10) = iVar6;
        iVar6 = 1;
        if (1 < *(int *)(lVar4 + 0x84)) {
          iVar6 = *(int *)(lVar4 + 0x84);
        }
        *(int *)(param_3 + 0x14) = iVar6;
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
  lVar4 = *param_2;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149022848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  return;
}



// FUNCTION 1490228b2 FUN_1490228b2 body=166 status=ok
// SIG undefined FUN_1490228b2(void)

void FUN_1490228b2(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x178);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14902292a;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x170) != 0) {
      FUN_1443f2450(*(longlong *)(param_1 + 0x170),param_3,param_4,param_5,param_6,param_7);
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
LAB_14902292a:
  lVar4 = *param_2;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014902294b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  return;
}



// FUNCTION 149022958 FUN_149022958 body=142 status=ok
// SIG undefined FUN_149022958(void)

void FUN_149022958(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x178);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1490229ba;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x170) != 0) {
      FUN_1443f2820(*(longlong *)(param_1 + 0x170),param_3,param_4,param_5);
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
LAB_1490229ba:
  lVar4 = *param_2;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001490229da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  return;
}



// FUNCTION 1490229e6 FUN_1490229e6 body=140 status=ok
// SIG undefined FUN_1490229e6(void)

undefined4 FUN_1490229e6(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x1a8);
  if (plVar3 == (longlong *)0x0) {
LAB_149022a3a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_149022a3a;
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
    if (*(longlong *)(param_1 + 0x1a0) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_149022a72(*(longlong *)(param_1 + 0x1a0),param_3,param_4);
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
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  return uVar7;
}



// FUNCTION 149022a72 FUN_149022a72 body=197 status=ok
// SIG undefined FUN_149022a72(void)

undefined8 FUN_149022a72(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x228) = 1;
  }
  else if (param_3 == 3) {
    *(undefined4 *)(param_1 + 0x228) = 2;
  }
  else if (param_3 == 0x25) {
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  else {
    cVar4 = FUN_149035968(param_1,param_3);
    if (cVar4 != '\0') {
      return 1;
    }
    plVar2 = *(longlong **)(DAT_14c968088 + 8);
    plVar3 = *(longlong **)(DAT_14c968088 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x58))(plVar2,0xe,param_2);
      *(undefined4 *)(param_1 + 0x228) = 0xe;
    }
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
  FUN_1469aa836(DAT_14c98e618);
  return 0;
}



// FUNCTION 149022b38 FUN_149022b38 body=168 status=ok
// SIG undefined FUN_149022b38(void)

void FUN_149022b38(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x178);
  if (plVar2 != (longlong *)0x0) {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_149022bb4;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    plVar3 = *(longlong **)(param_1 + 0x170);
    if (plVar3 != (longlong *)0x0) {
      if (param_3 == '\0') {
        *(undefined1 *)((longlong)plVar3 + 0x2fc) = 0;
        *(undefined1 *)(plVar3 + 0x61) = 0;
        uVar7 = (**(code **)(*plVar3 + 0x1d8))();
        FUN_1447f69b6(uVar7);
      }
      else {
        *(undefined1 *)(plVar3 + 0x61) = 1;
      }
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
LAB_149022bb4:
  lVar4 = *param_2;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149022bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  return;
}



// FUNCTION 149022be0 FUN_149022be0 body=134 status=ok
// SIG undefined FUN_149022be0(void)

void FUN_149022be0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x178);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_149022c3a;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x170) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x300) = *(undefined8 *)(param_3 + 8);
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
LAB_149022c3a:
  lVar4 = *param_2;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149022c5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  return;
}



// FUNCTION 149022c66 FUN_149022c66 body=545 status=ok
// SIG undefined FUN_149022c66(void)

undefined8 FUN_149022c66(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  ulonglong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar9 = *(longlong **)(param_1 + 0x178);
  if (plVar9 == (longlong *)0x0) {
LAB_149022e00:
    *(undefined4 *)(param_3 + 0xc) = 0x18;
    bVar10 = true;
    plVar9 = (longlong *)0x0;
LAB_149022e10:
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = (longlong *)0x0;
    uStack_b8 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_140c2d49a(&local_c8);
    uVar11 = FUN_145788320((float)(int)local_b0,(float)local_b0._4_4_);
    *(undefined4 *)(param_3 + 8) = uVar11;
    FUN_140ecb711(local_c0,uStack_b8 & 0xffffffff);
    if (local_c0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (bVar10) goto LAB_149022db5;
  }
  else {
    iVar8 = (int)plVar9[1];
    do {
      if (iVar8 == 0) goto LAB_149022e00;
      LOCK();
      iVar7 = (int)plVar9[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    plVar4 = *(longlong **)(param_1 + 0x170);
    *(undefined4 *)(param_3 + 0xc) = 0x18;
    if (plVar4 == (longlong *)0x0) {
LAB_149022e84:
      bVar10 = false;
      goto LAB_149022e10;
    }
    (**(code **)(*plVar4 + 0x150))(plVar4,&local_c8);
    plVar6 = local_c0;
    plVar3 = local_c8;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_149022e84;
    (**(code **)(*plVar4 + 0x150))(plVar4,&local_d8);
    FUN_14151e938(local_d8,&local_c8);
    uVar11 = (**(code **)(*local_c8 + 0xf8))();
    plVar4 = local_c0;
    *(undefined4 *)(param_3 + 8) = uVar11;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_c0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
  }
  LOCK();
  plVar4 = plVar9 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_149022db5:
  lVar5 = *param_2;
  if (lVar5 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar5 + 8) + 4) + lVar5 + 8) + 8))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 149022e88 FUN_149022e88 body=226 status=ok
// SIG undefined FUN_149022e88(void)

void FUN_149022e88(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x178);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_149022eec;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *(longlong *)(param_1 + 0x170);
    if (lVar4 != 0) {
      local_30 = *param_2;
      if (local_30 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_30 + 8) + 4) + local_30 + 8))();
      }
      FUN_149022f7e(lVar4,&local_30,param_4);
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
LAB_149022eec:
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149022f7e FUN_149022f7e body=204 status=ok
// SIG undefined FUN_149022f7e(void)

void FUN_149022f7e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    local_30 = *param_2;
    if (local_30 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_30 + 8) + 4) + local_30 + 8))();
    }
    cVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,&local_30);
    if (cVar4 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x350);
      lVar3 = *(longlong *)(lVar2 + 0x30);
      if (lVar3 != 0) {
        cVar4 = FUN_149027c8e(lVar3,param_3);
        if ((cVar4 != '\0') && (plVar1 = *(longlong **)(lVar2 + 0x40), plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902304c FUN_14902304c body=681 status=ok
// SIG undefined FUN_14902304c(void)

undefined8
FUN_14902304c(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar3 = (*(code *)**(undefined8 **)*param_4)();
  uVar6 = 1;
  if (cVar3 == '\0') {
    lVar1 = param_1 + -0xa0;
    local_c0 = FUN_14001cc68(0x80,0x10);
    lVar5 = *param_4;
    local_c8 = lVar1;
    local_b0 = lVar1;
    local_a8 = lVar5;
    if (lVar5 != 0) {
      (*(code *)**(undefined8 **)(lVar5 + *(int *)(*(longlong *)(lVar5 + 8) + 4) + 8))();
    }
    lVar1 = *param_3;
    local_a0 = lVar1;
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)(lVar1 + *(int *)(*(longlong *)(lVar1 + 8) + 4) + 8))();
    }
    lVar2 = *param_5;
    local_98 = lVar2;
    if (lVar2 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8))();
    }
    local_88[0] = (code *)0x0;
    puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
    *puVar4 = &PTR_FUN_14ba6d650;
    puVar4[1] = local_c8;
    puVar4[2] = lVar5;
    local_78 = puVar4;
    if (lVar5 != 0) {
      (*(code *)**(undefined8 **)(lVar5 + *(int *)(*(longlong *)(lVar5 + 8) + 4) + 8))();
    }
    puVar4[3] = lVar1;
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)(lVar1 + *(int *)(*(longlong *)(lVar1 + 8) + 4) + 8))();
    }
    puVar4[4] = lVar2;
    if (lVar2 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8))();
    }
    lVar1 = local_c0;
    if (puVar4 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_88[0] = FUN_1443f7924;
    }
    local_b8 = (undefined8 *)(local_c8 + *(int *)(*(longlong *)(param_1 + -0x98) + 4) + 8);
    if (local_b8 != (undefined8 *)0x0) {
      (**(code **)*local_b8)();
    }
    FUN_1490232f6(lVar1,&local_b8,local_88);
    local_90 = lVar1;
    if (lVar1 != 0) {
      lVar5 = (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4);
      (*(code *)**(undefined8 **)(lVar1 + 8 + lVar5))(lVar1 + lVar5 + 8);
    }
    FUN_144d731d0(0,&local_90);
    FUN_1443f3452(&local_b0);
    uVar6 = 2;
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490232f6 FUN_1490232f6 body=178 status=ok
// SIG undefined FUN_1490232f6(void)

undefined8 * FUN_1490232f6(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  
  param_1[1] = &DAT_14ba6c6f8;
  *param_1 = &PTR_FUN_14ba6c700;
  param_1[0xf] = &PTR_LAB_14ba6c710;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  puVar1 = (undefined8 *)*param_2;
  param_1[2] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  lVar2 = *param_3;
  param_1[4] = lVar2;
  param_1[6] = 0;
  if (lVar2 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,param_1 + 6);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 8))();
  }
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return param_1;
}



// FUNCTION 1490233a8 FUN_1490233a8 body=541 status=ok
// SIG undefined FUN_1490233a8(void)

void FUN_1490233a8(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong local_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_2;
  local_a8 = param_3;
  lVar2 = FUN_14001cc68(0x80,0x10);
  lVar1 = *param_4;
  local_a0 = param_4;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  local_88[0] = (code *)0x0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *puVar3 = &PTR_FUN_14ba6d690;
  puVar3[1] = param_1 + -0xa0;
  puVar3[2] = lVar1;
  local_78 = puVar3;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  *(undefined4 *)(puVar3 + 3) = param_6;
  puVar3[4] = param_7;
  if (puVar3 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_88[0] = FUN_1443f8672;
  }
  local_98 = (undefined8 *)
             (param_1 + -0xa0 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4) + 8);
  if (local_98 != (undefined8 *)0x0) {
    (**(code **)*local_98)(local_98);
  }
  FUN_1490232f6(lVar2,&local_98,local_88);
  local_90 = lVar2;
  if (lVar2 != 0) {
    lVar4 = (longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4);
    (*(code *)**(undefined8 **)(lVar2 + 8 + lVar4))(lVar2 + lVar4 + 8);
  }
  FUN_144d731d0(0,&local_90);
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *local_b0;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *local_a8;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *local_a0;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490235c6 FUN_1490235c6 body=483 status=ok
// SIG undefined FUN_1490235c6(void)

void FUN_1490235c6(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  longlong local_90;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = param_1 + -0xa0;
  lVar2 = FUN_14001cc68(0x80,0x10);
  lVar1 = *param_4;
  local_60 = lVar3;
  if (lVar1 == 0) {
    local_78 = 0;
    local_68 = &PTR_FUN_14ba6d6b0;
    local_58 = 0;
  }
  else {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
    local_78 = 0;
    local_68 = &PTR_FUN_14ba6d6b0;
    local_58 = lVar1;
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  local_88[0] = FUN_1443f896e;
  local_98 = (undefined8 *)(lVar3 + *(int *)(*(longlong *)(param_1 + -0x98) + 4) + 8);
  if (local_98 != (undefined8 *)0x0) {
    (**(code **)*local_98)(local_98);
  }
  FUN_1490232f6(lVar2,&local_98,local_88);
  local_90 = lVar2;
  if (lVar2 != 0) {
    lVar3 = (longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4);
    (*(code *)**(undefined8 **)(lVar2 + 8 + lVar3))(lVar2 + lVar3 + 8);
  }
  FUN_144d731d0(0,&local_90);
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  lVar3 = *param_3;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  lVar3 = *param_4;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  lVar3 = *param_5;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490237aa FUN_1490237aa body=200 status=ok
// SIG undefined FUN_1490237aa(void)

void FUN_1490237aa(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x168);
  if (plVar2 != (longlong *)0x0) {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_149023816;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    plVar3 = *(longlong **)(param_1 + 0x160);
    if (plVar3 != (longlong *)0x0) {
      if (*(char *)((longlong)plVar3 + 0x309) == '\x01') {
        *(undefined1 *)((longlong)plVar3 + 0x309) = 0;
        *(undefined4 *)((longlong)plVar3 + 0x30c) = 0xfffffffe;
        *(undefined4 *)(plVar3 + 5) = 1;
        FUN_149048cc6(plVar3 + 0x15,1);
      }
      *(undefined1 *)((longlong)plVar3 + 0x309) = 1;
      (**(code **)(*plVar3 + 0x100))(plVar3);
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
LAB_149023816:
  lVar4 = *param_2;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149023837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  return;
}



// FUNCTION 149023872 FUN_149023872 body=705 status=ok
// SIG undefined FUN_149023872(void)

undefined4
FUN_149023872(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  bool bVar9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined **local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98 [2];
  uint local_84;
  longlong *local_80;
  uint *local_78;
  undefined1 local_6c [4];
  undefined2 local_68;
  undefined6 uStack_66;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_84 = (**(code **)(*(longlong *)*param_4 + 0x98))();
  if ((local_84 < 7) && ((0x43U >> (local_84 & 0x1f) & 1) != 0)) {
    (**(code **)(*(longlong *)*param_4 + 8))((longlong *)*param_4,&local_b0);
    puVar8 = &local_68;
    FUN_149021a64(&local_b0,puVar8);
    if (7 < local_50) {
      puVar8 = (undefined2 *)CONCAT62(uStack_66,local_68);
    }
    FUN_140056680(local_98,puVar8);
    local_78 = &local_84;
    local_80 = local_98;
    FUN_14904729e(param_1 + 0xc0,local_6c);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (7 < local_50) {
      FUN_14600850e(&local_68,CONCAT62(uStack_66,local_68));
    }
    local_58 = 0;
    local_50 = 7;
    local_68 = 0;
    local_b0 = &PTR_FUN_14ba6d600;
    if (((local_a8 != 0) && (local_a0 == '\x01')) && (cef_string_utf16_clear(), local_a8 != 0)) {
      FUN_1400020a8();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x168);
  if (plVar3 == (longlong *)0x0) {
LAB_149023920:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_149023920;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x160);
    if (lVar4 == 0) {
      uVar7 = 0;
    }
    else {
      local_b8 = *param_4;
      if (local_b8 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_b8 + 8) + 4) + local_b8 + 8))();
      }
      local_c0 = *param_3;
      if (local_c0 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_c0 + 8) + 4) + local_c0 + 8))();
      }
      local_c8 = *param_2;
      if (local_c8 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_c8 + 8) + 4) + local_c8 + 8))();
      }
      local_d8 = param_6;
      uVar7 = FUN_149023b34(lVar4,&local_c8,&local_c0,&local_b8);
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
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  lVar4 = *param_3;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  lVar4 = *param_4;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 149023b34 FUN_149023b34 body=873 status=ok
// SIG undefined FUN_149023b34(void)

uint FUN_149023b34(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  byte param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  uint unaff_EBP;
  byte bVar8;
  byte *pbVar9;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  longlong local_68;
  byte local_60;
  char cStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  int iStack_5c;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)param_1[8];
  if (plVar5 != (longlong *)0x0) {
    local_68 = *param_2;
    if (local_68 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_68 + 8) + 4) + local_68 + 8))();
    }
    cVar3 = (**(code **)(*plVar5 + 0x50))(plVar5,&local_68);
    if (cVar3 != '\0') {
      (**(code **)(*(longlong *)param_1[8] + 0x68))((longlong *)param_1[8],&local_70);
      if (local_70 != 0) {
        plVar5 = (longlong *)(**(code **)(*param_1 + 400))(param_1);
        if ((longlong *)*plVar5 == (longlong *)0x0 || (int)plVar5[1] == 0) {
LAB_149023be6:
          if (local_70 == 0) goto LAB_149023c0d;
          bVar2 = true;
        }
        else {
          cVar3 = (**(code **)(*(longlong *)*plVar5 + 0x30))();
          if (cVar3 == '\0') goto LAB_149023be6;
          (**(code **)(*(longlong *)*param_4 + 8))((longlong *)*param_4,&local_98);
          pbVar9 = &local_60;
          FUN_149021a64(&local_98,pbVar9);
          if (7 < local_48) {
            pbVar9 = (byte *)CONCAT44(iStack_5c,
                                      CONCAT13(uStack_5d,
                                               CONCAT12(uStack_5e,CONCAT11(cStack_5f,local_60))));
          }
          FUN_140056680(&local_80,pbVar9);
          if (7 < local_48) {
            FUN_14600850e(&local_60,
                          CONCAT44(iStack_5c,
                                   CONCAT13(uStack_5d,
                                            CONCAT12(uStack_5e,CONCAT11(cStack_5f,local_60)))));
          }
          local_50 = 0;
          local_48 = 7;
          local_60 = 0;
          cStack_5f = 0;
          local_98 = &PTR_FUN_14ba6d600;
          if ((local_90 != 0) && (local_88 == '\x01')) {
            cef_string_utf16_clear();
            if (local_90 != 0) {
              FUN_1400020a8();
            }
          }
          cVar3 = (**(code **)(*(longlong *)*param_3 + 0x70))();
          local_60 = param_5;
          cStack_5f = cVar3;
          uVar4 = (**(code **)(*(longlong *)*param_4 + 0xa0))();
          uStack_5e = 0;
          iStack_5c = 0;
          if ((byte)uVar4 < 9) {
            uStack_5e = (&DAT_14ba6eca8)[uVar4 & 0xf];
            iStack_5c = *(int *)(&DAT_14ba6ecb4 + (ulonglong)(uVar4 & 0xf) * 4);
          }
          uVar4 = uVar4 & 0xffffff00;
          if ((int)uVar4 < 0x10000000) {
            iVar7 = -uVar4;
            if (SBORROW4(0,uVar4)) {
              local_58 = 6;
            }
            else if (uVar4 == 0x800000) {
              local_58 = 1;
            }
            else if (uVar4 == 0x1000000) {
              local_58 = 2;
            }
            else {
LAB_149023dcb:
              local_58 = 0;
            }
          }
          else {
            iVar7 = iStack_5c;
            if (uVar4 == 0x10000000) {
              local_58 = 3;
            }
            else if (uVar4 == 0x20000000) {
              local_58 = 4;
            }
            else {
              if (uVar4 != 0x40000000) goto LAB_149023dcb;
              local_58 = 5;
            }
          }
          if (cVar3 != '\0') {
            *(undefined1 *)(param_1 + 0x62) = 1;
          }
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 400))(param_1,iVar7);
          if (*(int *)(puVar6 + 1) == 0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = (longlong *)*puVar6;
          }
          unaff_EBP = (**(code **)(*plVar5 + 0x58))(plVar5,&local_80,&local_60);
          if (cVar3 != '\0') {
            bVar8 = (param_5 ^ 1) & (byte)unaff_EBP;
            *(byte *)(param_1 + 0x62) = bVar8;
            if (bVar8 == 0) {
              if (1 < (int)param_1[0x66]) {
                FUN_1490357d0(param_1);
              }
            }
            else {
              iVar7 = local_78 + -1;
              if (local_78 == 0) {
                iVar7 = 0;
              }
              FUN_1402980a2(param_1 + 99,local_80,iVar7);
            }
          }
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          if (local_70 == 0) goto LAB_149023c0f;
          bVar2 = false;
        }
        (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_70 + 8) + 4) + local_70 + 8) + 8))()
        ;
        if (!bVar2) goto LAB_149023c0f;
      }
    }
  }
LAB_149023c0d:
  unaff_EBP = 0;
LAB_149023c0f:
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return unaff_EBP & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149023e9e FUN_149023e9e body=917 status=ok
// SIG undefined FUN_149023e9e(void)

longlong *
FUN_149023e9e(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined ******ppppppuVar5;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90 [2];
  undefined **local_80;
  longlong local_78;
  char local_70;
  undefined *****local_68;
  longlong lStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,&local_68);
  puVar4 = DAT_14cbf6268;
  if (DAT_14cbf6270 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1490201ba(&local_80,puVar4);
  iVar1 = FUN_149044516(&local_68,&local_80);
  local_80 = &PTR_FUN_14ba6d600;
  if (((local_78 != 0) && (local_70 == '\x01')) && (cef_string_utf16_clear(), local_78 != 0)) {
    FUN_1400020a8();
  }
  local_68 = (undefined *****)&PTR_FUN_14ba6d600;
  if (((lStack_60 != 0) && ((char)local_58 == '\x01')) && (cef_string_utf16_clear(), lStack_60 != 0)
     ) {
    FUN_1400020a8();
  }
  if ((iVar1 == 0) &&
     ((**(code **)(*(longlong *)*param_5 + 0x40))((longlong *)*param_5,&local_68),
     local_68 != (undefined *****)0x0)) {
    (**(code **)(*(longlong *)*param_5 + 0x40))((longlong *)*param_5,&local_80);
    lVar2 = (**(code **)(*local_80 + 0x10))();
    if (local_80 != (undefined **)0x0) {
      (**(code **)(*(longlong *)((longlong)local_80 + (longlong)*(int *)(local_80[1] + 4) + 8) + 8))
                ();
    }
    if (local_68 != (undefined *****)0x0) {
      (**(code **)(*(longlong *)
                    ((longlong)local_68 + (longlong)*(int *)((longlong)local_68[1] + 4) + 8) + 8))()
      ;
    }
    if (lVar2 != 0) {
      FUN_140056680(&local_80,L"text/html");
      local_90[1] = 0;
      local_90[0] = FUN_14001cc68(0x50,0x10);
      *(longlong *)local_90[0] = local_90[0];
      *(longlong *)(local_90[0] + 8) = local_90[0];
      *(longlong *)(local_90[0] + 0x10) = local_90[0];
      *(undefined2 *)(local_90[0] + 0x18) = 0x101;
      (**(code **)(*(longlong *)*param_5 + 0x50))((longlong *)*param_5,local_90);
      FUN_1490201ba(&local_68,L"Content-Type");
      lVar2 = FUN_149046e8a(local_90,&local_68);
      local_68 = (undefined *****)&PTR_FUN_14ba6d600;
      if (((lStack_60 != 0) && ((char)local_58 == '\x01')) &&
         (cef_string_utf16_clear(), lStack_60 != 0)) {
        FUN_1400020a8();
      }
      if (lVar2 != local_90[0]) {
        FUN_149021a64(lVar2 + 0x38,&local_68);
        ppppppuVar5 = &local_68;
        if (7 < local_50) {
          ppppppuVar5 = (undefined ******)local_68;
        }
        FUN_14020fad6(&local_80,ppppppuVar5);
        if (7 < local_50) {
          FUN_14600850e(&local_68,local_68);
        }
      }
      local_68 = (undefined *****)0x0;
      lStack_60 = 0;
      local_58 = 0;
      (**(code **)(*(longlong *)*param_5 + 0x40))((longlong *)*param_5,&local_98);
      (**(code **)(*local_98 + 0x18))(local_98,&local_68);
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*(longlong *)((longlong)local_98 + (longlong)*(int *)(local_98[1] + 4) + 8) + 8
                    ))();
      }
      lVar2 = FUN_14001cc68(0x48,0x10);
      FUN_14901ff74(lVar2,local_68,&local_80);
      *param_2 = lVar2;
      if (lVar2 != 0) {
        lVar3 = (longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4);
        (*(code *)**(undefined8 **)(lVar2 + 8 + lVar3))(lVar2 + lVar3 + 8);
      }
      FUN_149041774(&local_68);
      FUN_149041800(*(undefined8 *)(local_90[0] + 8));
      FUN_1400020a8(local_90[0]);
      if (local_80 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      goto LAB_149023f7a;
    }
  }
  *param_2 = 0;
LAB_149023f7a:
  lVar2 = *param_3;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = *param_4;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = *param_5;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149024234 FUN_149024234 body=164 status=ok
// SIG undefined FUN_149024234(void)

longlong *
FUN_149024234(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x92) == '\x01') {
    lVar1 = param_1 + 0x50;
    (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 0x58) + 4) + 0x58))();
  }
  else {
    lVar1 = 0;
  }
  *param_2 = lVar1;
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return param_2;
}



// FUNCTION 1490242d8 FUN_1490242d8 body=52 status=ok
// SIG undefined FUN_1490242d8(void)

undefined8
FUN_1490242d8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_149024234(param_1 + -0x60,param_2,param_3,param_4,param_5,0,0);
  return param_2;
}



// FUNCTION 14902430c FUN_14902430c body=610 status=ok
// SIG undefined FUN_14902430c(void)

void FUN_14902430c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined **ppuVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  undefined **local_48;
  longlong local_40;
  char local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *param_2;
  *(longlong *)(param_1 + 0x1b0) = lVar4;
  plVar2 = (longlong *)param_2[1];
  plVar5 = *(longlong **)(param_1 + 0x1b8);
  if (plVar5 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x1b8);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x1b8) = plVar2;
    lVar4 = *param_2;
  }
  if (lVar4 != 0) {
    FUN_1490201ba(&local_48,L"CEF::STARTUP");
    FUN_144d77a80(&local_30,&local_48);
    local_48 = &PTR_FUN_14ba6d600;
    if ((local_40 != 0) && (local_38 == '\x01')) {
      cef_string_utf16_clear();
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    (**(code **)(*local_30 + 0x20))(local_30,&local_48);
    FUN_149024570(*param_2,&local_50);
    ppuVar3 = local_48;
    if (local_50 != 0) {
      local_58 = local_50;
      (*(code *)**(undefined8 **)(local_50 + *(int *)(*(longlong *)(local_50 + 8) + 4) + 8))();
      (**(code **)(*ppuVar3 + 0xd0))(ppuVar3,0,&local_58);
    }
    plVar2 = *(longlong **)(*param_2 + 0x40);
    if (plVar2 != (longlong *)0x0) {
      (*(code *)**(undefined8 **)((longlong)plVar2 + (longlong)*(int *)(plVar2[1] + 4) + 8))();
    }
    (**(code **)(*plVar2 + 0x68))(plVar2,&local_60);
    plVar5 = local_60;
    local_68 = local_30;
    if (local_30 != (longlong *)0x0) {
      (*(code *)**(undefined8 **)((longlong)local_30 + (longlong)*(int *)(local_30[1] + 4) + 8))();
    }
    (**(code **)(*plVar5 + 0xc0))(plVar5,1,&local_68);
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_60 + (longlong)*(int *)(local_60[1] + 4) + 8) + 8))
                ();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)plVar2 + (longlong)*(int *)(plVar2[1] + 4) + 8) + 8))();
    }
    if (local_50 != 0) {
      (**(code **)(*(longlong *)(local_50 + *(int *)(*(longlong *)(local_50 + 8) + 4) + 8) + 8))();
    }
    if (local_48 != (undefined **)0x0) {
      (**(code **)(*(longlong *)((longlong)local_48 + (longlong)*(int *)(local_48[1] + 4) + 8) + 8))
                ();
    }
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_30 + (longlong)*(int *)(local_30[1] + 4) + 8) + 8))
                ();
    }
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149024570 FUN_149024570 body=394 status=ok
// SIG undefined FUN_149024570(void)

undefined8 * FUN_149024570(longlong *param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined **local_50;
  longlong local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != '\0') {
    FUN_144d73bd0(&local_50);
    ppuVar1 = local_50;
    if (local_50 == (undefined **)0x0) {
      *param_2 = 0;
    }
    else {
      (*(code *)**(undefined8 **)((longlong)local_50 + (longlong)*(int *)(local_50[1] + 4) + 8))();
      *param_2 = ppuVar1;
      if (local_50 != (undefined **)0x0) {
        (**(code **)(*(longlong *)((longlong)local_50 + (longlong)*(int *)(local_50[1] + 4) + 8) + 8
                    ))();
      }
    }
    uVar3 = (**(code **)(*(longlong *)param_1[8] + 0x48))();
    FUN_14901fe1a(&local_50,"browser");
    (**(code **)(*ppuVar1 + 0xb8))(ppuVar1,&local_50,uVar3);
    local_50 = &PTR_FUN_14ba6d600;
    if ((local_48 != 0) && (local_40 == '\x01')) {
      cef_string_utf16_clear();
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_149029b54(param_1[0x68],local_58);
    FUN_14901fe1a(&local_50,"bindings");
    (**(code **)(*ppuVar1 + 0xd8))(ppuVar1,&local_50,local_58);
    local_50 = &PTR_FUN_14ba6d600;
    if ((local_48 != 0) && (local_40 == '\x01')) {
      cef_string_utf16_clear();
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490246fc FUN_1490246fc body=1277 status=ok
// SIG undefined FUN_1490246fc(void)

undefined4
FUN_1490246fc(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined **ppuVar5;
  undefined *****pppppuVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined ******ppppppuVar13;
  bool bVar14;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined **local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8 [2];
  code *local_a8 [2];
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  undefined **local_78;
  undefined *****local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  (**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,&local_d0);
  FUN_149021a64(&local_d0,&local_68);
  ppppppuVar13 = &local_68;
  if (7 < local_50) {
    ppppppuVar13 = (undefined ******)local_68;
  }
  FUN_140056680(local_b8,ppppppuVar13);
  if (7 < local_50) {
    FUN_14600850e(&local_68,local_68);
  }
  local_58 = 0;
  local_50 = 7;
  local_68 = (undefined *****)((ulonglong)local_68 & 0xffffffffffff0000);
  local_d0 = &PTR_FUN_14ba6d600;
  if (((local_c8 != 0) && (local_c0 == '\x01')) && (cef_string_utf16_clear(), local_c8 != 0)) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x1b8);
  if (plVar3 == (longlong *)0x0) {
LAB_149024829:
    uVar10 = 0;
    goto LAB_14902482b;
  }
  iVar9 = (int)plVar3[1];
  do {
    if (iVar9 == 0) goto LAB_149024829;
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar14 = iVar9 == iVar7;
    if (bVar14) {
      *(int *)(plVar3 + 1) = iVar9 + 1;
      iVar7 = iVar9;
    }
    iVar9 = iVar7;
    UNLOCK();
  } while (!bVar14);
  lVar4 = *(longlong *)(param_1 + 0x1b0);
  if (lVar4 == 0) {
LAB_149024808:
    uVar10 = 0;
  }
  else {
    cVar8 = FUN_144a791f8(local_b8,L"CEF::BROWSERCREATED",0x13,1);
    if (cVar8 != '\0') {
      FUN_1490201ba(&local_68,L"CEF::STARTUP");
      FUN_144d77a80(&local_d0,&local_68);
      local_68 = (undefined *****)&PTR_FUN_14ba6d600;
      if (((local_60 != 0) && ((char)local_58 == '\x01')) &&
         (cef_string_utf16_clear(), local_60 != 0)) {
        FUN_1400020a8();
      }
      (**(code **)(*local_d0 + 0x20))(local_d0,&local_68);
      FUN_149024570(lVar4,&local_d8);
      pppppuVar6 = local_68;
      if (local_d8 != 0) {
        local_e0 = local_d8;
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_d8 + 8) + 4) + local_d8 + 8))();
        (*(code *)(*pppppuVar6)[0x1a])(pppppuVar6,0,&local_e0);
      }
      local_110 = local_d8;
      lVar11 = FUN_14001cc68(0x80,0x10);
      lVar4 = *param_3;
      if (lVar4 != 0) {
        (*(code *)**(undefined8 **)(lVar4 + *(int *)(*(longlong *)(lVar4 + 8) + 4) + 8))();
      }
      ppuVar5 = local_d0;
      if (local_d0 != (undefined **)0x0) {
        (*(code *)**(undefined8 **)((longlong)local_d0 + (longlong)*(int *)(local_d0[1] + 4) + 8))()
        ;
      }
      local_98 = 0;
      local_88 = &PTR_FUN_14ba6d6d0;
      local_80 = lVar4;
      if (lVar4 != 0) {
        (*(code *)**(undefined8 **)(lVar4 + *(int *)(*(longlong *)(lVar4 + 8) + 4) + 8))();
      }
      local_78 = ppuVar5;
      if (ppuVar5 != (undefined **)0x0) {
        (*(code *)**(undefined8 **)((longlong)ppuVar5 + (longlong)*(int *)(ppuVar5[1] + 4) + 8))();
      }
      local_a8[0] = FUN_1443f8b08;
      local_f0 = (undefined8 *)((longlong)*(int *)(*(longlong *)(param_1 + 8) + 4) + param_1 + 8);
      if (local_f0 != (undefined8 *)0x0) {
        (**(code **)*local_f0)();
      }
      FUN_1490232f6(lVar11,&local_f0,local_a8);
      local_e8 = lVar11;
      if (lVar11 != 0) {
        lVar12 = (longlong)*(int *)(*(longlong *)(lVar11 + 8) + 4);
        (*(code *)**(undefined8 **)(lVar11 + 8 + lVar12))(lVar11 + lVar12 + 8);
      }
      FUN_144d731d0(0,&local_e8);
      if (ppuVar5 != (undefined **)0x0) {
        (**(code **)(*(longlong *)((longlong)ppuVar5 + (longlong)*(int *)(ppuVar5[1] + 4) + 8) + 8))
                  ();
      }
      if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + *(int *)(*(longlong *)(lVar4 + 8) + 4) + 8) + 8))();
      }
      if (local_110 != 0) {
        (**(code **)(*(longlong *)(local_110 + *(int *)(*(longlong *)(local_110 + 8) + 4) + 8) + 8))
                  ();
      }
      if (local_68 != (undefined *****)0x0) {
        (**(code **)(*(longlong *)
                      ((longlong)local_68 + (longlong)*(int *)((longlong)local_68[1] + 4) + 8) + 8))
                  ();
      }
      if (local_d0 != (undefined **)0x0) {
        (**(code **)(*(longlong *)((longlong)local_d0 + (longlong)*(int *)(local_d0[1] + 4) + 8) + 8
                    ))();
      }
      goto LAB_149024808;
    }
    local_f8 = *param_5;
    if (local_f8 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_f8 + 8) + 4) + local_f8 + 8))();
    }
    local_100 = *param_3;
    if (local_100 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_100 + 8) + 4) + local_100 + 8))();
    }
    local_108 = *param_2;
    if (local_108 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_108 + 8) + 4) + local_108 + 8))();
    }
    uVar10 = FUN_149024bfa(lVar4,&local_108,&local_100,&local_f8);
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
LAB_14902482b:
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  lVar4 = *param_3;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  lVar4 = *param_5;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 149024bfa FUN_149024bfa body=359 status=ok
// SIG undefined FUN_149024bfa(void)

ulonglong FUN_149024bfa(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x340);
  local_40 = *param_4;
  if (local_40 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_40 + 8) + 4) + local_40 + 8))();
  }
  local_48 = *param_2;
  if (local_48 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_48 + 8) + 4) + local_48 + 8))();
  }
  cVar3 = FUN_149028892(uVar1,&local_48,&local_40);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (cVar3 == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x350);
    local_50 = *param_4;
    if (local_50 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_50 + 8) + 4) + local_50 + 8))();
    }
    local_58 = *param_2;
    if (local_58 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_58 + 8) + 4) + local_58 + 8))();
    }
    uVar4 = FUN_149026d32(uVar1,&local_58,&local_50);
    uVar5 = (ulonglong)uVar4;
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = *param_3;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = *param_4;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149024d62 FUN_149024d62 body=951 status=ok
// SIG undefined FUN_149024d62(void)

uint FUN_149024d62(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 auStack_308 [32];
  undefined ***local_2e8;
  undefined ***local_2e0;
  undefined ***local_2d8;
  longlong *local_2d0;
  undefined ***local_2c8;
  undefined1 *local_2c0;
  longlong local_2b0;
  longlong *local_2a8;
  longlong local_2a0;
  undefined1 local_298 [15];
  undefined1 local_289;
  undefined **local_288;
  undefined8 local_280;
  undefined4 local_278 [53];
  undefined4 local_1a4;
  undefined4 local_178;
  longlong local_158;
  longlong local_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined **local_d8;
  ulonglong local_d0;
  ulonglong uStack_c8;
  ulonglong local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined **local_98;
  longlong local_90;
  char local_88;
  undefined **local_80;
  longlong local_78;
  char local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = &PTR_FUN_14ba6c738;
  FUN_14901fe1a(&local_80,"chrome-devtools://devtools/devtools.html");
  FUN_14901fe1a(&local_98);
  local_d8 = &PTR_FUN_14ba6d6f0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_a0 = 0;
  uStack_a4 = 1;
  local_e0 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_148 = &PTR_FUN_14ba6c748;
  local_150 = 0;
  local_288 = &PTR_FUN_14ba6d6f8;
  memset(local_278,0,0x128);
  local_280 = 0x128;
  local_289 = 0;
  local_d0 = local_d0 & 0xffffffff;
  uStack_c8 = uStack_c8 & 0xffffffff;
  local_c0 = local_c0 & 0xffffffff;
  uStack_b4 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  local_278[0] = 0x3c;
  local_1a4 = 2;
  local_178 = 0xffffffff;
  (**(code **)(*(longlong *)*param_2 + 0x70))((longlong *)*param_2,local_298);
  local_2a0 = *param_2;
  if (local_2a0 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_2a0 + 8) + 4) + local_2a0 + 8))();
  }
  local_2c0 = &local_289;
  local_2c8 = &local_288;
  local_2d0 = &local_150;
  local_2d8 = &local_148;
  local_2e0 = &local_d8;
  local_2e8 = &local_98;
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1,&local_2a0,local_298,&local_80);
  if ((char)uVar2 == '\0') {
    (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,&local_2a8);
    plVar1 = local_2a8;
    local_2b0 = local_150;
    if (local_150 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_150 + 8) + 4) + local_150 + 8))();
    }
    local_2e8 = &local_68;
    (**(code **)(*plVar1 + 0x90))(plVar1,&local_148,&local_2b0,&local_288);
    if (local_2a8 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_2a8 + (longlong)*(int *)(local_2a8[1] + 4) + 8) + 8
                  ))();
    }
  }
  local_288 = &PTR_FUN_14ba6d6f8;
  if (local_158 == 0) {
    FUN_149047796(&local_280);
  }
  if (local_150 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_150 + 8) + 4) + local_150 + 8) + 8))();
  }
  local_148 = &PTR_FUN_14ba6c750;
  if (local_e0 == 0) {
    cef_string_utf16_clear(&uStack_138);
  }
  local_98 = &PTR_FUN_14ba6d600;
  if ((local_90 != 0) && (local_88 == '\x01')) {
    cef_string_utf16_clear();
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  local_80 = &PTR_FUN_14ba6d600;
  if ((local_78 != 0) && (local_70 == '\x01')) {
    cef_string_utf16_clear();
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return uVar2 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902511a FUN_14902511a body=319 status=ok
// SIG undefined FUN_14902511a(void)

undefined4 FUN_14902511a(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(uint *)(param_3 + 8) < 4) && (*(uint *)(param_3 + 8) != 2)) &&
      (*(int *)(param_3 + 0xc) == 6)) &&
     ((*(int *)(param_3 + 0x10) == 0x49 || ((*(ushort *)(param_3 + 0x1e) | 0x20) == 0x69)))) {
    FUN_1446ddc76(&local_30,"WebBrowser",1);
    uVar8 = FUN_144a52528();
    plVar9 = (longlong *)FUN_14493e38c(uVar8,local_30);
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x48))(plVar9);
    cVar5 = (**(code **)(*plVar9 + 0x60))(plVar9);
    if (cVar5 != '\0') {
      uVar7 = FUN_149024d62(param_1 + -0x60,param_2);
      goto LAB_1490251f8;
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x158);
  if (plVar9 == (longlong *)0x0) {
LAB_1490251f6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar9[1];
    do {
      if (iVar6 == 0) goto LAB_1490251f6;
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar10 = iVar6 == iVar4;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar10);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_14902525a(*(longlong *)(param_1 + 0x150),param_3);
    }
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_1490251f8:
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14902525a FUN_14902525a body=1719 status=ok
// SIG undefined FUN_14902525a(void)

undefined4 FUN_14902525a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_a8 [32];
  undefined **local_88;
  ushort local_80;
  undefined1 local_7e;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = (**(code **)(*param_1 + 0x28))();
  if (cVar5 == '\0') {
LAB_1490256de:
    uVar6 = 0;
    goto LAB_1490256e0;
  }
  (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_88);
  lVar7 = (**(code **)(*local_88 + 0x20))();
  if (local_88 != (undefined **)0x0) {
    (**(code **)(*(longlong *)((longlong)local_88 + (longlong)*(int *)(local_88[1] + 4) + 8) + 8))()
    ;
  }
  uVar3 = *(uint *)(param_2 + 8);
  uVar6 = 0;
  if (1 < uVar3) {
    if (uVar3 != 2) {
      if (uVar3 != 3) goto LAB_1490256e0;
      if ((char)param_1[0x5e] != '\x01') {
        if (lVar7 != 0) {
          local_7c = FUN_1417201ca(DAT_14c98e618);
          uVar3 = *(uint *)(param_2 + 0xc);
          uVar4 = (ushort)uVar3;
          local_80 = (uVar4 & 0x84) + (uVar4 & 0xc) * 2 + (uVar4 & 8) * 4 |
                     (ushort)(uVar3 >> 1) & 0x40 | (ushort)((uVar3 & 1) << 8) |
                     (ushort)((uVar3 & 2) >> 1) | (ushort)(uVar3 & 2);
          local_7e = 0;
          local_70 = 0;
          local_88 = &PTR_FUN_149eda6b0;
          local_68 = CONCAT62(local_68._2_6_,*(undefined2 *)(param_2 + 0x1c));
          *(undefined1 *)((longlong)param_1 + 0x2fa) = 1;
          local_78 = local_7c;
          uVar6 = FUN_140bf0dd6(DAT_14c98e618);
          *(undefined1 *)((longlong)param_1 + 0x2fa) = 0;
          goto LAB_1490256e0;
        }
        goto LAB_1490256de;
      }
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x208))(param_1);
      if ((longlong *)*plVar8 == (longlong *)0x0 || (int)plVar8[1] == 0) {
LAB_149025859:
        *(undefined1 *)((longlong)param_1 + 0x2fa) = 1;
        uVar6 = FUN_140bf0dd6(DAT_14c98e618,param_1 + 0x59);
        *(undefined1 *)((longlong)param_1 + 0x2fa) = 0;
      }
      else {
        cVar5 = (**(code **)(*(longlong *)*plVar8 + 0x30))();
        if (cVar5 == '\0') goto LAB_149025859;
        puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x208))();
        if (*(int *)(puVar9 + 1) == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)*puVar9;
        }
        cVar5 = (**(code **)(*plVar8 + 0x58))(plVar8,param_1 + 0x59);
        uVar6 = 1;
        if (cVar5 == '\0') goto LAB_149025859;
      }
      if ((char)param_1[0x5e] == '\x01') {
        *(undefined1 *)(param_1 + 0x5e) = 0;
      }
      goto LAB_1490256e0;
    }
    if ((char)param_1[0x58] != '\x01') {
      if (lVar7 != 0) {
        uVar10 = FUN_1409efacc();
        FUN_1409efbf2(uVar10,&local_48,*(undefined4 *)(param_2 + 0x10),0);
        uVar6 = *(undefined4 *)(param_2 + 0x10);
        local_7c = FUN_1417201ca(DAT_14c98e618);
        plVar8 = local_38;
        uVar3 = *(uint *)(param_2 + 0xc);
        uVar4 = (ushort)uVar3;
        local_80 = (uVar4 & 0x84) + (uVar4 & 0xc) * 2 + (uVar4 & 8) * 4 |
                   (ushort)(uVar3 >> 1) & 0x40 | (ushort)((uVar3 & 1) << 8) |
                   (ushort)((uVar3 & 2) >> 1) | (ushort)(uVar3 & 2);
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        local_7e = 0;
        local_70 = 0;
        local_88 = &PTR_FUN_149eda6d0;
        local_68 = local_48;
        local_60 = local_40;
        local_58 = local_38;
        local_78 = local_7c;
        local_4c = uVar6;
        if (local_38 == (longlong *)0x0) {
          local_50 = 0;
        }
        else {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
          local_50 = 0;
          LOCK();
          plVar1 = local_38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        *(undefined1 *)((longlong)param_1 + 0x2f9) = 1;
        uVar6 = FUN_140dcb8ee(DAT_14c98e618,&local_88);
        *(undefined1 *)((longlong)param_1 + 0x2f9) = 0;
LAB_1490257e6:
        plVar8 = local_58;
        local_88 = &PTR_FUN_149eda6d0;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_58 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        goto LAB_14902580f;
      }
      goto LAB_1490256de;
    }
    plVar8 = (longlong *)(**(code **)(*param_1 + 0x200))(param_1);
    if ((longlong *)*plVar8 == (longlong *)0x0 || (int)plVar8[1] == 0) {
LAB_1490258a3:
      *(undefined1 *)((longlong)param_1 + 0x2f9) = 1;
      uVar6 = FUN_140dcb8ee(DAT_14c98e618,param_1 + 0x50);
      *(undefined1 *)((longlong)param_1 + 0x2f9) = 0;
    }
    else {
      cVar5 = (**(code **)(*(longlong *)*plVar8 + 0x30))();
      if (cVar5 == '\0') goto LAB_1490258a3;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x200))();
      if (*(int *)(puVar9 + 1) == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)*puVar9;
      }
      cVar5 = (**(code **)(*plVar8 + 0x58))(plVar8,param_1 + 0x50);
      uVar6 = 1;
      if (cVar5 == '\0') goto LAB_1490258a3;
    }
    if ((char)param_1[0x58] == '\x01') {
      param_1[0x50] = (longlong)&PTR_FUN_149eda6d0;
      plVar8 = (longlong *)param_1[0x56];
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
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
    goto LAB_1490256e0;
  }
  if ((char)param_1[0x4f] != '\x01') {
    if (lVar7 != 0) {
      uVar10 = FUN_1409efacc();
      uVar6 = 0;
      FUN_1409efbf2(uVar10,&local_48,*(undefined4 *)(param_2 + 0x10),0);
      cVar5 = FUN_1403e7f2a(&local_48);
      if (cVar5 != '\0') {
        uVar6 = *(undefined4 *)(param_2 + 0x10);
        local_7c = FUN_1417201ca(DAT_14c98e618);
        plVar8 = local_38;
        uVar3 = *(uint *)(param_2 + 0xc);
        uVar4 = (ushort)uVar3;
        local_80 = (uVar4 & 0x84) + (uVar4 & 0xc) * 2 + (uVar4 & 8) * 4 |
                   (ushort)(uVar3 >> 1) & 0x40 | (ushort)((uVar3 & 1) << 8) |
                   (ushort)((uVar3 & 2) >> 1) | (ushort)(uVar3 & 2);
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        local_7e = 0;
        local_70 = 0;
        local_88 = &PTR_FUN_149eda6d0;
        local_68 = local_48;
        local_60 = local_40;
        local_58 = local_38;
        local_78 = local_7c;
        local_4c = uVar6;
        if (local_38 == (longlong *)0x0) {
          local_50 = 0;
        }
        else {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
          local_50 = 0;
          LOCK();
          plVar1 = local_38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        *(undefined1 *)(param_1 + 0x5f) = 1;
        uVar6 = FUN_1409eff00(DAT_14c98e618,&local_88);
        *(undefined1 *)(param_1 + 0x5f) = 0;
        goto LAB_1490257e6;
      }
LAB_14902580f:
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_38 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      goto LAB_1490256e0;
    }
    goto LAB_1490256de;
  }
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x1f8))(param_1);
  if ((longlong *)*plVar8 == (longlong *)0x0 || (int)plVar8[1] == 0) {
LAB_149025719:
    *(undefined1 *)(param_1 + 0x5f) = 1;
    uVar6 = FUN_1409eff00(DAT_14c98e618,param_1 + 0x47);
    *(undefined1 *)(param_1 + 0x5f) = 0;
  }
  else {
    cVar5 = (**(code **)(*(longlong *)*plVar8 + 0x30))();
    if (cVar5 == '\0') goto LAB_149025719;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x1f8))();
    if (*(int *)(puVar9 + 1) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)*puVar9;
    }
    cVar5 = (**(code **)(*plVar8 + 0x58))(plVar8,param_1 + 0x47);
    uVar6 = 1;
    if (cVar5 == '\0') goto LAB_149025719;
  }
  if ((char)param_1[0x4f] == '\x01') {
    param_1[0x47] = (longlong)&PTR_FUN_149eda6d0;
    plVar8 = (longlong *)param_1[0x4d];
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
    *(undefined1 *)(param_1 + 0x4f) = 0;
  }
LAB_1490256e0:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149025912 FUN_149025912 body=321 status=ok
// SIG undefined FUN_149025912(void)

undefined4
FUN_149025912(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,longlong *param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0x148);
  if (plVar3 == (longlong *)0x0) {
LAB_1490259a5:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1490259a5;
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
    lVar4 = *(longlong *)(param_1 + 0x140);
    if (lVar4 == 0) {
      uVar7 = 0;
    }
    else {
      local_50 = *param_7;
      if (local_50 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_50 + 8) + 4) + local_50 + 8))();
      }
      local_60 = param_8;
      local_68 = &local_50;
      uVar7 = FUN_149025a54(lVar4,param_4,param_5,param_6);
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
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  lVar4 = *param_7;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 149025a54 FUN_149025a54 body=470 status=ok
// SIG undefined FUN_149025a54(void)

undefined8
FUN_149025a54(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5,undefined1 *param_6)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined7 uVar9;
  undefined8 uVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x1e0))();
  if ((longlong *)*plVar4 != (longlong *)0x0 && (int)plVar4[1] != 0) {
    cVar2 = (**(code **)(*(longlong *)*plVar4 + 0x30))();
    if (cVar2 != '\0') {
      lVar5 = FUN_14001cc68(0x40,0x10);
      local_48 = *param_5;
      if (local_48 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_48 + 8) + 4) + local_48 + 8))();
      }
      local_68 = &local_48;
      FUN_149034156(lVar5,param_2 & 0xffffffff,param_3,param_4);
      plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar4[1] = (longlong)&DAT_100000001;
      *plVar4 = (longlong)&PTR_FUN_14ba6d890;
      plVar4[2] = lVar5;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x1e0))();
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      if (*(int *)(puVar6 + 1) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)*puVar6;
      }
      local_58 = lVar5;
      local_50 = plVar4;
      iVar3 = (**(code **)(*plVar7 + 0x58))(plVar7,&local_58);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
      uVar9 = (undefined7)((param_2 & 0xffffffff) >> 8);
      if (iVar3 == 3) {
        uVar8 = CONCAT71(uVar9,1);
      }
      else {
        if (iVar3 == 2) {
LAB_149025bee:
          *param_6 = 1;
        }
        else if (iVar3 == 1) {
          if ((int)param_2 != 0) {
            uVar8 = CONCAT71(uVar9,1);
            (*(code *)**(undefined8 **)*param_5)((undefined8 *)*param_5,1,param_4);
            goto LAB_149025bf3;
          }
          goto LAB_149025bee;
        }
        uVar8 = 0;
      }
LAB_149025bf3:
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar4 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      goto LAB_149025aad;
    }
  }
  uVar8 = 0;
LAB_149025aad:
  lVar5 = *param_5;
  if (lVar5 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar5 + 8) + 4) + lVar5 + 8) + 8))();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149025c2c FUN_149025c2c body=282 status=ok
// SIG undefined FUN_149025c2c(void)

undefined4
FUN_149025c2c(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x148);
  if (plVar3 == (longlong *)0x0) {
LAB_149025ca7:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_149025ca7;
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
    lVar4 = *(longlong *)(param_1 + 0x140);
    if (lVar4 == 0) {
      uVar7 = 0;
    }
    else {
      local_40 = *param_5;
      if (local_40 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_40 + 8) + 4) + local_40 + 8))();
      }
      uVar7 = FUN_149025d48(lVar4,param_3,param_4,&local_40);
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
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  lVar4 = *param_5;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 149025d48 FUN_149025d48 body=539 status=ok
// SIG undefined FUN_149025d48(void)

ulonglong FUN_149025d48(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  undefined **local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  ulonglong local_38;
  undefined7 uVar12;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x1e0))();
  if ((longlong *)*plVar5 != (longlong *)0x0 && (int)plVar5[1] != 0) {
    cVar3 = (**(code **)(*(longlong *)*plVar5 + 0x30))();
    if (cVar3 != '\0') {
      ppuVar6 = (undefined **)FUN_14001cc68(0x40,0x10);
      local_40 = *param_4;
      if (local_40 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_40 + 8) + 4) + local_40 + 8))();
      }
      FUN_1490342b4(ppuVar6,param_2,param_3,&local_40);
      plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar5[1] = (longlong)&DAT_100000001;
      *plVar5 = (longlong)&PTR_FUN_14ba6d890;
      plVar5[2] = (longlong)ppuVar6;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x1e0))();
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
      }
      if (*(int *)(puVar7 + 1) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)*puVar7;
      }
      local_58 = ppuVar6;
      local_50 = plVar5;
      iVar4 = (**(code **)(*plVar9 + 0x58))(plVar9,&local_58);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
      uVar12 = (undefined7)((ulonglong)&local_58 >> 8);
      uVar11 = CONCAT71(uVar12,1);
      if (iVar4 != 3) {
        if (iVar4 == 2) {
          puVar7 = (undefined8 *)*param_4;
          puVar8 = (undefined8 *)*puVar7;
          uVar10 = 0;
        }
        else {
          if (iVar4 != 1) {
            uVar11 = 0;
            goto LAB_149025f31;
          }
          puVar7 = (undefined8 *)*param_4;
          puVar8 = (undefined8 *)*puVar7;
          uVar10 = 1;
        }
        local_48 = '\0';
        local_50 = (longlong *)0x0;
        local_58 = &PTR_FUN_14ba6d600;
        uVar11 = CONCAT71(uVar12,1);
        (*(code *)*puVar8)(puVar7,uVar10,&local_58);
        local_58 = &PTR_FUN_14ba6d600;
        if ((local_50 != (longlong *)0x0) && (local_48 == '\x01')) {
          cef_string_utf16_clear();
          if (local_50 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
LAB_149025f31:
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar5 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      goto LAB_149025d98;
    }
  }
  uVar11 = 0;
LAB_149025d98:
  lVar2 = *param_4;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149025f64 FUN_149025f64 body=158 status=ok
// SIG undefined FUN_149025f64(void)

void FUN_149025f64(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x148);
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_149025fd6;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x140) + 0x1e8))();
      if ((longlong *)*plVar6 != (longlong *)0x0 && (int)plVar6[1] != 0) {
        (**(code **)(*(longlong *)*plVar6 + 0x60))();
      }
    }
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_149025fd6:
  lVar3 = *param_2;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149025ff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  return;
}



// FUNCTION 149026002 FUN_149026002 body=345 status=ok
// SIG undefined FUN_149026002(void)

void FUN_149026002(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar2 = *(longlong **)(param_1 + 0x138);
  if (plVar2 != (longlong *)0x0) {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_1490260c9;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar10 = iVar6 == iVar4;
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x130);
    if (plVar9 != (longlong *)0x0) {
      plVar7 = (longlong *)(**(code **)(*plVar9 + 0x1f0))(plVar9);
      if (((longlong *)*plVar7 != (longlong *)0x0 && (int)plVar7[1] != 0) &&
         (cVar5 = (**(code **)(*(longlong *)*plVar7 + 0x30))(), cVar5 != '\0')) {
        puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x1f0))();
        if (*(int *)(puVar8 + 1) == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)*puVar8;
        }
        cVar5 = (**(code **)(*plVar9 + 0x58))();
        if (cVar5 != '\0') {
          (**(code **)(*(longlong *)*param_5 + 8))();
        }
      }
    }
    LOCK();
    plVar9 = plVar2 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_1490260c9:
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  lVar3 = *param_3;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  lVar3 = *param_4;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  lVar3 = *param_5;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149026148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  return;
}



// FUNCTION 14902615c FUN_14902615c body=472 status=ok
// SIG undefined FUN_14902615c(void)

void FUN_14902615c(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar7 = *(longlong **)(param_1 + 0x128);
  if (plVar7 != (longlong *)0x0) {
    iVar9 = (int)plVar7[1];
    do {
      if (iVar9 == 0) goto LAB_1490261c7;
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar15 = iVar9 == iVar3;
      if (bVar15) {
        *(int *)(plVar7 + 1) = iVar9 + 1;
        iVar3 = iVar9;
      }
      iVar9 = iVar3;
      UNLOCK();
    } while (!bVar15);
    lVar14 = *(longlong *)(param_1 + 0x120);
    if (lVar14 != 0) {
      local_58 = 0;
      uStack_50 = 0;
      lVar11 = *param_4;
      local_78 = lVar14;
      local_70 = param_2;
      local_68 = param_3;
      if (param_4[1] != lVar11) {
        uVar12 = 0;
        uVar13 = 1;
        local_60 = param_4;
        do {
          uVar8 = uStack_50;
          iVar9 = *(int *)(lVar11 + 0x18 + uVar12 * 0x28);
          iVar3 = *(int *)(lVar11 + 8 + uVar12 * 0x28);
          iVar4 = *(int *)(lVar11 + 0xc + uVar12 * 0x28);
          iVar5 = *(int *)(lVar11 + 0x14 + uVar12 * 0x28);
          iVar6 = *(int *)(lVar11 + 0x10 + uVar12 * 0x28);
          lVar14 = (longlong)(int)uStack_50;
          uVar10 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar10);
          if (uStack_50._4_4_ < uVar10) {
            FUN_1490477f8(&local_58,uVar8 & 0xffffffff);
            param_4 = local_60;
          }
          *(ulonglong *)(local_58 + lVar14 * 0x14) = CONCAT44(iVar4,iVar3);
          *(ulonglong *)(local_58 + 8 + lVar14 * 0x14) = CONCAT44(iVar5 + iVar4,iVar6 + iVar3);
          *(bool *)(local_58 + 0x10 + lVar14 * 0x14) = iVar9 != 0;
          lVar11 = *param_4;
          uVar12 = (param_4[1] - lVar11 >> 3) * -0x3333333333333333;
          bVar15 = uVar13 <= uVar12;
          lVar14 = uVar12 - uVar13;
          uVar12 = uVar13;
          uVar13 = (ulonglong)((int)uVar13 + 1);
        } while (bVar15 && lVar14 != 0);
      }
      FUN_149036b1a(local_78 + 0x360,&local_58);
      param_3 = local_68;
      param_2 = local_70;
      if (local_58 != 0) {
        FUN_1400020a8();
        param_3 = local_68;
        param_2 = local_70;
      }
    }
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
LAB_1490261c7:
  lVar14 = *param_2;
  if (lVar14 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar14 + 8) + 4) + lVar14 + 8) + 8))();
  }
  lVar14 = *param_3;
  if (lVar14 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar14 + 8) + 4) + lVar14 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149026336 FUN_149026336 body=586 status=ok
// SIG undefined FUN_149026336(void)

longlong *
FUN_149026336(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined **local_90;
  longlong local_88;
  char local_80;
  longlong local_78 [2];
  undefined8 ***local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*(longlong *)*param_5 + 8))((longlong *)*param_5,&local_90);
  FUN_149021a64(&local_90,&local_68);
  ppppuVar3 = &local_68;
  if (7 < local_50) {
    ppppuVar3 = (undefined8 ****)local_68;
  }
  FUN_140056680(local_78,ppppuVar3);
  if (7 < local_50) {
    FUN_14600850e(&local_68,local_68);
  }
  local_58 = 0;
  local_50 = 7;
  local_68 = (undefined8 ***)((ulonglong)local_68 & 0xffffffffffff0000);
  local_90 = &PTR_FUN_14ba6d600;
  if ((local_88 != 0) && (local_80 == '\x01')) {
    cef_string_utf16_clear();
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  local_68 = (undefined8 ***)0x0;
  uStack_60 = 0;
  iVar2 = FUN_1403de9f2(local_78,&local_68,&DAT_149e065c6,1);
  if (iVar2 < 2) {
LAB_1490264b4:
    *param_2 = 0;
  }
  else {
    local_a0 = 0xffffffff;
    local_a8 = 0;
    iVar2 = FUN_1447ee042(local_68 + 2,L".epicgames.com",0xe,1);
    if (iVar2 == -1) {
      local_a0 = 0xffffffff;
      local_a8 = 0;
      iVar2 = FUN_1447ee042(local_68 + 2,L".epicgames.net",0xe,1);
      if (iVar2 == -1) goto LAB_1490264b4;
    }
    *param_2 = param_1 + 0x20;
    (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 0x28) + 4) + 0x28))();
  }
  FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  if (local_68 != (undefined8 ***)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149026582 FUN_149026582 body=460 status=ok
// SIG undefined FUN_149026582(void)

ulonglong FUN_149026582(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                       longlong *param_5,longlong param_6)

{
  longlong lVar1;
  int iVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  longlong ***ppplVar5;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  longlong local_90;
  char local_88;
  undefined **local_80;
  longlong local_78;
  undefined1 local_70;
  longlong **local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_40;
  undefined7 uVar4;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (*(char *)(param_1 + 0x21) != '\0') goto LAB_1490265b8;
  if (*(longlong *)(param_6 + 0x10) == 0) {
    local_68 = (longlong **)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
LAB_149026690:
    local_80 = &PTR_FUN_14ba6d600;
    local_70 = 0;
    local_78 = param_6 + 8;
    FUN_14901fe1a(&local_98,"EPIC_SESSION_DIESEL");
    iVar2 = FUN_149044516(&local_80,&local_98);
    uVar3 = CONCAT71(uVar4,iVar2 != 0);
    local_98 = &PTR_FUN_14ba6d600;
    if ((local_90 != 0) && (local_88 == '\x01')) {
      cef_string_utf16_clear();
      if (local_90 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    FUN_149046eee(&local_68,param_6 + 8);
    if (local_58 != 0xb) goto LAB_149026690;
    ppplVar5 = &local_68;
    if (0xf < local_50) {
      ppplVar5 = (longlong ***)local_68;
    }
    if (*(longlong *)((longlong)ppplVar5 + 3) != 0x6e656b6f742d6572 ||
        *ppplVar5 != (longlong **)0x6f742d65726f7473) goto LAB_149026690;
    uVar3 = 0;
  }
  FUN_1401d9a90(&local_68);
LAB_1490265b8:
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149026750 FUN_149026750 body=942 status=ok
// SIG undefined FUN_149026750(void)

ulonglong FUN_149026750(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                       longlong param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  size_t sVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined **_Str;
  wchar_t ****ppppwVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  longlong local_a0 [2];
  undefined **local_90;
  int local_88;
  undefined4 uStack_84;
  char local_80;
  longlong local_78 [2];
  wchar_t ***local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_40;
  undefined7 uVar6;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (*(char *)(param_1 + 0x21) != '\0') goto LAB_149026789;
  (**(code **)(*(longlong *)*param_4 + 8))((longlong *)*param_4,&local_90);
  FUN_149021a64(&local_90,&local_68);
  ppppwVar7 = &local_68;
  if (7 < local_50) {
    ppppwVar7 = (wchar_t ****)local_68;
  }
  FUN_140056680(local_78,ppppwVar7);
  if (7 < local_50) {
    FUN_14600850e(&local_68,local_68);
  }
  local_58 = 0;
  local_50 = 7;
  local_68 = (wchar_t ***)((ulonglong)local_68 & 0xffffffffffff0000);
  local_90 = &PTR_FUN_14ba6d600;
  if (((CONCAT44(uStack_84,local_88) != 0) && (local_80 == '\x01')) &&
     (cef_string_utf16_clear(), CONCAT44(uStack_84,local_88) != 0)) {
    FUN_1400020a8();
  }
  (**(code **)(*(longlong *)*param_4 + 0x30))((longlong *)*param_4,&local_90);
  FUN_149021a64(&local_90,&local_68);
  ppppwVar7 = &local_68;
  if (7 < local_50) {
    ppppwVar7 = (wchar_t ****)local_68;
  }
  FUN_140056680(local_a0,ppppwVar7);
  if (7 < local_50) {
    FUN_14600850e(&local_68,local_68);
  }
  local_58 = 0;
  local_50 = 7;
  local_68 = (wchar_t ***)((ulonglong)local_68 & 0xffffffffffff0000);
  local_90 = &PTR_FUN_14ba6d600;
  if (((CONCAT44(uStack_84,local_88) != 0) && (local_80 == '\x01')) &&
     (cef_string_utf16_clear(), CONCAT44(uStack_84,local_88) != 0)) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_68,"marketplace-website-node-launcher-");
  ppppwVar7 = (wchar_t ****)local_68;
  if ((int)uStack_60 == 0) {
    ppppwVar7 = (wchar_t ****)&DAT_149dfb77a;
  }
  if (ppppwVar7 == (wchar_t ****)0x0) {
    uVar5 = 0;
  }
  else {
    sVar4 = wcslen((wchar_t *)ppppwVar7);
    local_b0 = 0xffffffff;
    local_b8 = 0;
    iVar3 = FUN_1447ee042(local_a0,ppppwVar7,sVar4 & 0xffffffff,1);
    if (iVar3 == -1) {
      uVar5 = 0;
    }
    else {
      FUN_1400b22c2(&local_90,"graphql.epicgames.com");
      _Str = (undefined **)&DAT_149dfb77a;
      if (local_88 != 0) {
        _Str = local_90;
      }
      if (_Str == (undefined **)0x0) {
        uVar5 = 0;
      }
      else {
        sVar4 = wcslen((wchar_t *)_Str);
        local_b0 = 0xffffffff;
        local_b8 = 0;
        iVar3 = FUN_1447ee042(local_78,_Str,sVar4 & 0xffffffff,1);
        uVar5 = CONCAT71(uVar6,iVar3 != -1);
      }
      if (local_90 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((wchar_t ****)local_68 != (wchar_t ****)0x0) {
    FUN_1400020a8();
  }
  if ((char)uVar5 == '\0') {
LAB_149026a6c:
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  else {
    if (*(longlong *)(param_5 + 0x10) == 0) {
      local_68 = (wchar_t ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0xf;
LAB_149026a62:
      FUN_1401d9a90(&local_68);
      goto LAB_149026a6c;
    }
    FUN_149046eee(&local_68,param_5 + 8);
    if (local_58 != 4) goto LAB_149026a62;
    ppppwVar7 = &local_68;
    if (0xf < local_50) {
      ppppwVar7 = (wchar_t ****)local_68;
    }
    uVar1 = *(uint *)ppppwVar7;
    uVar5 = (ulonglong)uVar1;
    FUN_1401d9a90(&local_68);
    if (uVar1 != 0x616d6365) goto LAB_149026a6c;
    uVar5 = 0;
  }
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
LAB_149026789:
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = *param_3;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = *param_4;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 149026b00 FUN_149026b00 body=234 status=ok
// SIG undefined FUN_149026b00(void)

undefined8 FUN_149026b00(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  size_t sVar6;
  undefined2 *puVar7;
  wchar_t *_Str;
  longlong lVar8;
  
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar4,puVar7);
  iVar3 = FUN_149046fd4((longlong *)(param_1 + 0x110),uVar2,param_2);
  if ((iVar3 == -1) ||
     (uVar5 = 1,
     (*(longlong *)(param_1 + 0x110) + (longlong)iVar3 * 0x20 + 0x10U & 0xffffffffffffffef) == 0)) {
    iVar3 = *(int *)(param_1 + 0x108);
    if ((longlong)iVar3 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x100);
      lVar8 = 0;
      do {
        _Str = L"";
        if (*(int *)(lVar1 + 8 + lVar8) != 0) {
          _Str = *(wchar_t **)(lVar1 + lVar8);
        }
        if (_Str != (wchar_t *)0x0) {
          sVar6 = wcslen(_Str);
          iVar4 = FUN_1447ee042(param_2,_Str,sVar6 & 0xffffffff,1,0,0xffffffff);
          if (iVar4 != -1) {
            return 1;
          }
        }
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar3 * 0x10 != lVar8);
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 149026c34 FUN_149026c34 body=134 status=ok
// SIG undefined FUN_149026c34(void)

undefined8 * FUN_149026c34(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = &PTR_FUN_14ba6c760;
  lVar1 = *param_2;
  puVar2[1] = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  *param_1 = puVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_14ba6d700;
  puVar3[2] = puVar2;
  param_1[1] = puVar3;
  return param_1;
}



// FUNCTION 149026cba FUN_149026cba body=119 status=ok
// SIG undefined FUN_149026cba(void)

undefined8 * FUN_149026cba(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *param_2;
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return param_1;
}



// FUNCTION 149026d32 FUN_149026d32 body=446 status=ok
// SIG undefined FUN_149026d32(void)

undefined4 FUN_149026d32(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined **local_80;
  longlong local_78;
  char local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 local_58 [8];
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*(longlong *)*param_3 + 0x18))((longlong *)*param_3,&local_80);
  FUN_149021a64(&local_80,local_58);
  FUN_140056680(&local_68);
  if (7 < local_40) {
    FUN_14600850e();
  }
  local_48 = 0;
  local_40 = 7;
  local_58[0] = 0;
  local_80 = &PTR_FUN_14ba6d600;
  if (((local_78 != 0) && (local_70 == '\x01')) && (cef_string_utf16_clear(), local_78 != 0)) {
    FUN_1400020a8();
  }
  puVar2 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar2 = local_68;
  }
  lVar3 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar2 + lVar3);
    uVar5 = (ulonglong)uVar4;
    uVar6 = *(ushort *)((longlong)L"UE::IME::FocusChanged" + lVar3);
    if (uVar4 != uVar6) break;
    if (uVar4 == 0) goto LAB_149026e52;
LAB_149026e23:
    lVar3 = lVar3 + 2;
  }
  if ((uVar6 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_149026e23;
  }
  if (uVar4 != uVar6) {
    uVar1 = 0;
    goto LAB_149026e75;
  }
LAB_149026e52:
  (**(code **)(*(longlong *)*param_3 + 0x20))((longlong *)*param_3,local_88);
  uVar1 = FUN_149026ef2(param_1,local_88);
LAB_149026e75:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  lVar3 = *param_3;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149026ef2 FUN_149026ef2 body=1009 status=ok
// SIG undefined FUN_149026ef2(void)

ulonglong FUN_149026ef2(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined2 *puVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  int local_80;
  undefined **local_78;
  longlong local_70;
  char local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 local_50;
  undefined6 uStack_4e;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0x38))();
  if ((lVar3 == 1) &&
     (iVar2 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,0), iVar2 == 5)) {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_149027446(param_1);
    }
    goto LAB_149026ffe;
  }
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0x38))();
  if (lVar3 == 8) {
    uVar5 = 0;
    iVar2 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,0);
    if (iVar2 != 5) goto LAB_149026ffe;
    iVar2 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,1);
    if ((((iVar2 == 5) &&
         (iVar2 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,2), iVar2 == 2))
        && (iVar2 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,3), iVar2 == 5)
        ) && (((iVar2 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,4),
               iVar2 == 3 &&
               (iVar2 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,5),
               iVar2 == 3)) &&
              ((iVar2 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,6),
               iVar2 == 3 &&
               (iVar2 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,7),
               iVar2 == 3)))))) {
      (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,&local_78,0);
      puVar6 = &local_50;
      FUN_149021a64(&local_78,puVar6);
      if (7 < local_38) {
        puVar6 = (undefined2 *)CONCAT62(uStack_4e,local_50);
      }
      FUN_140056680(&local_60,puVar6);
      if (7 < local_38) {
        FUN_14600850e(&local_50,CONCAT62(uStack_4e,local_50));
      }
      local_40 = 0;
      local_38 = 7;
      local_50 = 0;
      local_78 = &PTR_FUN_14ba6d600;
      if (((local_70 != 0) && (local_68 == '\x01')) && (cef_string_utf16_clear(), local_70 != 0)) {
        FUN_1400020a8();
      }
      (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,&local_78,1);
      puVar6 = &local_50;
      FUN_149021a64(&local_78,puVar6);
      if (7 < local_38) {
        puVar6 = (undefined2 *)CONCAT62(uStack_4e,local_50);
      }
      FUN_140056680(&local_88,puVar6);
      if (7 < local_38) {
        FUN_14600850e(&local_50,CONCAT62(uStack_4e,local_50));
      }
      local_40 = 0;
      local_38 = 7;
      local_50 = 0;
      local_78 = &PTR_FUN_14ba6d600;
      if (((local_70 != 0) && (local_68 == '\x01')) && (cef_string_utf16_clear(), local_70 != 0)) {
        FUN_1400020a8();
      }
      bVar1 = (**(code **)(*(longlong *)*param_2 + 0x60))((longlong *)*param_2,2);
      puVar4 = local_60;
      if (local_58 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      lVar3 = 0;
      while( true ) {
        uVar8 = *(ushort *)((longlong)puVar4 + lVar3);
        uVar5 = (ulonglong)uVar8;
        uVar9 = *(ushort *)((longlong)L"DOM_NODE_TYPE_ELEMENT" + lVar3);
        if (uVar8 != uVar9) break;
        if (uVar8 == 0) goto LAB_1490271ec;
LAB_1490271bd:
        lVar3 = lVar3 + 2;
      }
      puVar6 = (undefined2 *)(ulonglong)(uint)(uVar9 | uVar8);
      if ((uVar9 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar11 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar11]) goto LAB_1490271bd;
      }
      if (uVar8 != uVar9) goto LAB_149027296;
LAB_1490271ec:
      puVar4 = local_88;
      if (local_80 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      lVar3 = 0;
      while( true ) {
        uVar8 = *(ushort *)((longlong)puVar4 + lVar3);
        uVar5 = (ulonglong)uVar8;
        uVar9 = *(ushort *)((longlong)L"INPUT" + lVar3);
        if (uVar8 != uVar9) break;
        if (uVar8 == 0) goto joined_r0x0001490272d8;
LAB_149027220:
        lVar3 = lVar3 + 2;
      }
      puVar6 = (undefined2 *)(ulonglong)(uint)(uVar9 | uVar8);
      if ((uVar9 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar11 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar11]) goto LAB_149027220;
      }
      if (uVar8 != uVar9) {
        lVar3 = 0;
        goto LAB_149027255;
      }
      goto joined_r0x0001490272d8;
    }
  }
  uVar5 = 0;
  goto LAB_149026ffe;
LAB_149027255:
  uVar8 = *(ushort *)((longlong)puVar4 + lVar3);
  uVar7 = (uint)uVar8;
  uVar9 = *(ushort *)((longlong)L"TEXTAREA" + lVar3);
  uVar10 = (uint)uVar9;
  if (uVar8 != uVar9) {
    puVar6 = (undefined2 *)(ulonglong)(uint)(uVar9 | uVar8);
    if ((uVar9 | uVar8) < 0x80) {
      uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar8];
      uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar9];
      if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar9]) goto LAB_14902726a;
    }
    iVar2 = uVar7 - uVar10;
    goto LAB_1490272d0;
  }
  if (uVar8 == 0) goto LAB_1490272cd;
LAB_14902726a:
  lVar3 = lVar3 + 2;
  goto LAB_149027255;
LAB_1490272cd:
  iVar2 = 0;
LAB_1490272d0:
  bVar1 = bVar1 & iVar2 == 0;
joined_r0x0001490272d8:
  if (bVar1 != 0) {
    FUN_14902759e(param_1);
  }
LAB_149027296:
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar5 = CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
LAB_149026ffe:
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490272e4 FUN_1490272e4 body=353 status=ok
// SIG undefined FUN_1490272e4(void)

void FUN_1490272e4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(longlong **)(param_1 + 0x28) = param_2;
  if ((param_2 != (longlong *)0x0) && (lVar3 = *(longlong *)(param_1 + 0x30), lVar3 != 0)) {
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar4 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_38 = plVar4;
    }
    local_40 = lVar3;
    (**(code **)(*param_2 + 0x10))(param_2,&local_30,&local_40);
    plVar1 = local_28;
    if ((undefined8 *)(param_1 + 0x40) != &local_30) {
      *(undefined8 *)(param_1 + 0x40) = local_30;
      local_30 = 0;
      plVar5 = *(longlong **)(param_1 + 0x48);
      if (local_28 != plVar5) {
        local_28 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x48) = plVar1;
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
      }
    }
    plVar1 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_28 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar1 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_38 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_38)(local_38);
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
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149027446 FUN_149027446 body=343 status=ok
// SIG undefined FUN_149027446(void)

void FUN_149027446(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_149027954(param_1);
      plVar3 = *(longlong **)(param_1 + 0x28);
      local_30 = *(undefined8 *)(param_1 + 0x30);
      plVar4 = *(longlong **)(param_1 + 0x38);
      if (plVar4 == (longlong *)0x0) {
        local_28 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_28 = plVar4;
      }
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
      plVar3 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_28 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
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
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    plVar3 = *(longlong **)(param_1 + 0x48);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    *(undefined8 *)(param_1 + 0x30) = 0;
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902759e FUN_14902759e body=949 status=ok
// SIG undefined FUN_14902759e(void)

void FUN_14902759e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[5] == 0) goto LAB_1490275c1;
  FUN_149027446();
  plVar6 = (longlong *)param_1[1];
  if (plVar6 == (longlong *)0x0) {
LAB_1490275fb:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    do {
      if (iVar4 == 0) goto LAB_1490275fb;
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    local_48 = *param_1;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plStack_40 = plVar6;
    if ((int)*plVar7 == 0) {
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
  lVar5 = FUN_14001cc68(0xa0,0x10);
  FUN_1490316ca(lVar5,&local_48);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba6d7a0;
  plVar6[2] = lVar5;
  if (plVar6 == (longlong *)0x0) {
    param_1[6] = lVar5;
    plVar7 = (longlong *)param_1[7];
    if (plVar7 != (longlong *)0x0) {
      param_1[7] = 0;
LAB_149027682:
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
      if (plVar6 != (longlong *)0x0) goto LAB_1490276a6;
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[6] = lVar5;
    plVar7 = (longlong *)param_1[7];
    if (plVar6 == plVar7) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    else {
      param_1[7] = plVar6;
      if (plVar7 != (longlong *)0x0) goto LAB_149027682;
    }
LAB_1490276a6:
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  plVar6 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_40 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = (longlong *)param_1[5];
  if (plVar6 != (longlong *)0x0) {
    local_58 = param_1[6];
    plVar7 = (longlong *)param_1[7];
    if (plVar7 == (longlong *)0x0) {
      local_50 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_50 = plVar7;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_48,&local_58);
    plVar6 = plStack_40;
    if (param_1 + 8 != &local_48) {
      param_1[8] = local_48;
      local_48 = 0;
      plVar2 = (longlong *)param_1[9];
      if (plStack_40 != plVar2) {
        plStack_40 = (longlong *)0x0;
        param_1[9] = plVar6;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar2 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
    }
    plVar6 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    plVar6 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  plVar6 = (longlong *)param_1[8];
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6,0);
  }
  plVar6 = (longlong *)param_1[5];
  local_48 = param_1[6];
  plVar7 = (longlong *)param_1[7];
  if (plVar7 == (longlong *)0x0) {
    plStack_40 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    plStack_40 = plVar7;
  }
  (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
  plVar6 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_1490275c1:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149027954 FUN_149027954 body=360 status=ok
// SIG undefined FUN_149027954(void)

void FUN_149027954(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = *(longlong **)(param_1 + 0x28);
  if ((plVar6 != (longlong *)0x0) &&
     (plVar3 = *(longlong **)(param_1 + 0x30), plVar3 != (longlong *)0x0)) {
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar4 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x28);
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_38 = plVar4;
    }
    local_40 = plVar3;
    cVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_40);
    plVar6 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (cVar5 != '\0') {
      cVar5 = (**(code **)(*plVar3 + 8))(plVar3);
      if (cVar5 != '\0') {
        FUN_149027abe(plVar3);
        if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))();
        }
      }
      plVar6 = *(longlong **)(param_1 + 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_40 = plVar3;
      local_38 = plVar4;
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_40);
      plVar6 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_38 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149027abe FUN_149027abe body=127 status=ok
// SIG undefined FUN_149027abe(void)

void FUN_149027abe(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x60) = 0;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10);
  (**(code **)*puVar1)(puVar1,&local_20);
  (**(code **)(*local_20 + 0x170))();
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_20 + (longlong)*(int *)(local_20[1] + 4) + 8) + 8))()
    ;
  }
  FUN_14903173c(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149027b3e FUN_149027b3e body=232 status=ok
// SIG undefined FUN_149027b3e(void)

void FUN_149027b3e(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if ((plVar3 != (longlong *)0x0) && (lVar4 = *(longlong *)(param_1 + 0x30), lVar4 != 0)) {
    if (param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar5 == (longlong *)0x0) {
      local_20 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_20 = plVar5;
    }
    local_28 = lVar4;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_28);
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
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
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149027c36 FUN_149027c36 body=88 status=ok
// SIG undefined FUN_149027c36(void)

void FUN_149027c36(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30) + 0x28;
    cVar2 = FUN_146af7a0c(lVar3);
    if (cVar2 == '\0') {
      FUN_144b00ffc(lVar3,param_2);
      plVar1 = *(longlong **)(param_1 + 0x40);
      if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149027c8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 8))(plVar1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149027c8e FUN_149027c8e body=82 status=ok
// SIG undefined FUN_149027c8e(void)

ulonglong FUN_149027c8e(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    plVar3 = (longlong *)(param_1 + 0x78);
    cVar1 = FUN_14903178f(param_2,plVar3);
    if (cVar1 == '\0') {
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if (plVar3 != param_2) {
        FUN_149044922(plVar3,*param_2,param_2[1] - *param_2 >> 5);
      }
      goto LAB_149027c9d;
    }
  }
  uVar2 = 0;
LAB_149027c9d:
  return uVar2 & 0xffffffff;
}



// FUNCTION 149027ce0 FUN_149027ce0 body=898 status=ok
// SIG undefined FUN_149027ce0(void)

undefined8 *
FUN_149027ce0(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  ulonglong local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined **local_98;
  longlong local_90;
  char local_88;
  undefined **local_80;
  longlong local_78;
  char local_70;
  undefined **local_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = *(longlong **)(param_1 + 0xd0);
  if (plVar3 == (longlong *)0x0) {
LAB_149027d1e:
    local_68 = &PTR_FUN_14ba6c850;
    local_60 = 0;
    plStack_58 = (longlong *)0x0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_149027d1e;
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
    uVar4 = *(undefined8 *)(param_1 + 200);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_68 = &PTR_FUN_14ba6c850;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    local_60 = uVar4;
    plStack_58 = plVar3;
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
  FUN_149028064(param_4,param_3,&local_68);
  FUN_144d73bd0(param_2);
  plVar3 = (longlong *)*param_2;
  FUN_14901fe1a(&local_80,"struct");
  FUN_14901fe1a(&local_98,"$type");
  (**(code **)(*plVar3 + 200))(plVar3,&local_98,&local_80);
  local_98 = &PTR_FUN_14ba6d600;
  if (((local_90 != 0) && (local_88 == '\x01')) && (cef_string_utf16_clear(), local_90 != 0)) {
    FUN_1400020a8();
  }
  local_80 = &PTR_FUN_14ba6d600;
  if (((local_78 != 0) && (local_70 == '\x01')) && (cef_string_utf16_clear(), local_78 != 0)) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*param_2;
  local_b0 = param_3 | 1;
  if (((param_3 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_14689c22e(param_3 & 0xfffffffffffffffe);
  }
  FUN_1490280de(param_1,&local_a8,&local_b0);
  puVar7 = local_a8;
  if (local_a0 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  FUN_1490201ba(&local_80,puVar7);
  FUN_14901fe1a(&local_98,"$ue4Type");
  (**(code **)(*plVar3 + 200))(plVar3,&local_98,&local_80);
  local_98 = &PTR_FUN_14ba6d600;
  if (((local_90 != 0) && (local_88 == '\x01')) && (cef_string_utf16_clear(), local_90 != 0)) {
    FUN_1400020a8();
  }
  local_80 = &PTR_FUN_14ba6d600;
  if (local_78 != 0) {
    if ((local_70 == '\x01') && (cef_string_utf16_clear(), local_78 != 0)) {
      FUN_1400020a8();
    }
    local_78 = 0;
    local_70 = '\0';
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*param_2;
  local_b8 = local_40;
  if (local_40 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_40 + 8) + 4) + local_40 + 8))();
  }
  FUN_14901fe1a(&local_80,"$value");
  (**(code **)(*plVar3 + 0xd8))(plVar3,&local_80,&local_b8);
  local_80 = &PTR_FUN_14ba6d600;
  if (((local_78 != 0) && (local_70 == '\x01')) && (cef_string_utf16_clear(), local_78 != 0)) {
    FUN_1400020a8();
  }
  FUN_149028160(&local_68);
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149028064 FUN_149028064 body=121 status=ok
// SIG undefined FUN_149028064(void)

void FUN_149028064(void)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 local_60;
  longlong local_58;
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = &DAT_100000001;
  local_60 = 0;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  FUN_147de3270();
  if (local_58 != 0) {
    plVar1 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar1 = local_38;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490280de FUN_1490280de body=129 status=ok
// SIG undefined FUN_1490280de(void)

undefined8 FUN_1490280de(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    FUN_14689b058(param_3,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_14689b058(param_3,local_28);
  FUN_144a6c01e(local_28,param_2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149028160 FUN_149028160 body=125 status=ok
// SIG undefined FUN_149028160(void)

void FUN_149028160(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba6c850;
  lVar3 = param_1[5];
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  FUN_1490428ce(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x0001490281d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1490281de FUN_1490281de body=1086 status=ok
// SIG undefined FUN_1490281de(void)

undefined8 * FUN_1490281de(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined **ppuVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  uint local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined **local_80;
  longlong local_78;
  char local_70;
  undefined **local_68;
  undefined *local_60;
  uint local_58;
  undefined2 local_54;
  undefined1 local_52;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144d73bd0(param_2);
  FUN_14902861e(param_1,param_3);
  ppuVar1 = *(undefined ***)(param_3 + 0x10);
  local_c0 = param_3;
  FUN_144d754a0(&local_50);
  if (ppuVar1 == (undefined **)0x0) {
    local_60 = (undefined *)0x0;
  }
  else {
    local_60 = ppuVar1[9];
  }
  local_58 = 0xffffffff;
  local_54 = 0x101;
  local_52 = 0;
  local_b8 = param_2;
  local_68 = ppuVar1;
  FUN_14164c386(&local_68);
  if (local_60 != (undefined *)0x0) {
    lVar5 = 0;
    do {
      plVar2 = local_50;
      local_a8 = (uint)local_60 | 1;
      uStack_a4 = (uint)((ulonglong)local_60 >> 0x20);
      if ((((ulonglong)local_60 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
        FUN_14689c22e();
      }
      FUN_1490280de(param_1,&local_98,&local_a8);
      puVar4 = &DAT_149dfb77a;
      if ((int)uStack_90 != 0) {
        puVar4 = local_98;
      }
      FUN_1490201ba(&local_80,puVar4);
      (**(code **)(*plVar2 + 0xc0))(plVar2,lVar5,&local_80);
      local_80 = &PTR_FUN_14ba6d600;
      if (local_78 != 0) {
        if ((local_70 == '\x01') && (cef_string_utf16_clear(), local_78 != 0)) {
          FUN_1400020a8();
        }
        local_78 = 0;
        local_70 = '\0';
      }
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_60 = *(undefined **)(local_60 + 0x28);
      FUN_14164c386(&local_68);
      lVar5 = lVar5 + 1;
    } while (local_60 != (undefined *)0x0);
  }
  puVar3 = local_b8;
  plVar2 = (longlong *)*local_b8;
  FUN_14901fe1a(&local_68,"uobject");
  FUN_14901fe1a(&local_80,"$type");
  (**(code **)(*plVar2 + 200))(plVar2,&local_80,&local_68);
  local_80 = &PTR_FUN_14ba6d600;
  if (((local_78 != 0) && (local_70 == '\x01')) && (cef_string_utf16_clear(), local_78 != 0)) {
    FUN_1400020a8();
  }
  local_68 = &PTR_FUN_14ba6d600;
  if (((local_60 != (undefined *)0x0) && ((char)local_58 == '\x01')) &&
     (cef_string_utf16_clear(), local_60 != (undefined *)0x0)) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)*puVar3;
  local_a8 = (uint)*(undefined8 *)(param_1 + 0x10);
  uStack_a4 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  uStack_a0 = (undefined4)*(undefined8 *)(param_1 + 0x18);
  uStack_9c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  if (local_c0 == 0) {
    uStack_9c = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
  }
  else {
    local_a8 = (uint)((ulonglong)local_c0 >> 0x20) ^ local_a8;
    uStack_a4 = uStack_a4 ^ (uint)local_c0;
  }
  local_98 = (undefined2 *)0x0;
  uStack_90 = 0;
  FUN_1407c869a(&local_a8,&local_98,0);
  puVar4 = local_98;
  if ((int)uStack_90 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1490201ba(&local_68,puVar4);
  FUN_14901fe1a(&local_80,&DAT_14ba6b1c5);
  (**(code **)(*plVar2 + 200))(plVar2,&local_80,&local_68);
  local_80 = &PTR_FUN_14ba6d600;
  if (((local_78 != 0) && (local_70 == '\x01')) && (cef_string_utf16_clear(), local_78 != 0)) {
    FUN_1400020a8();
  }
  local_68 = &PTR_FUN_14ba6d600;
  if (local_60 != (undefined *)0x0) {
    if (((char)local_58 == '\x01') && (cef_string_utf16_clear(), local_60 != (undefined *)0x0)) {
      FUN_1400020a8();
    }
    local_60 = (undefined *)0x0;
    local_58 = local_58 & 0xffffff00;
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)*puVar3;
  local_b0 = local_50;
  if (local_50 != (longlong *)0x0) {
    (*(code *)**(undefined8 **)((longlong)local_50 + (longlong)*(int *)(local_50[1] + 4) + 8))();
  }
  FUN_14901fe1a(&local_68,"$methods");
  (**(code **)(*plVar2 + 0xe0))(plVar2,&local_68,&local_b0);
  local_68 = &PTR_FUN_14ba6d600;
  if (((local_60 != (undefined *)0x0) && ((char)local_58 == '\x01')) &&
     (cef_string_utf16_clear(), local_60 != (undefined *)0x0)) {
    FUN_1400020a8();
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_50 + (longlong)*(int *)(local_50[1] + 4) + 8) + 8))()
    ;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 14902861e FUN_14902861e body=626 status=ok
// SIG undefined FUN_14902861e(void)

void FUN_14902861e(longlong param_1,undefined8 ***param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 **local_48;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined8 **local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (undefined8 ***)0x0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(param_2);
  }
  local_38 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != (undefined8 ***)0x0) {
    FUN_14689c22e(param_2);
  }
  plVar4 = (longlong *)(param_1 + 0x20);
  if ((param_2 != (undefined8 ***)0x0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(param_2);
  }
  uVar1 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  iVar2 = FUN_1490428f4(plVar4,uVar1,&local_38);
  if (iVar2 == -1) {
    local_40[0] = 0;
    local_3c = 1;
    local_48 = param_2;
    if ((param_2 != (undefined8 ***)0x0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(param_2);
    }
    local_38 = &local_48;
    local_30 = local_40;
    FUN_1490429c2(plVar4,local_24);
  }
  else {
    if (DAT_14c950c29 == 1 && param_2 != (undefined8 ***)0x0) {
      FUN_14689c22e(param_2);
    }
    if ((~DAT_14c950c29 & 1) == 0 && param_2 != (undefined8 ***)0x0) {
      FUN_14689c22e(param_2);
    }
    local_38 = param_2;
    if ((~DAT_14c950c29 & 1) == 0 && param_2 != (undefined8 ***)0x0) {
      FUN_14689c22e(param_2);
    }
    if ((param_2 != (undefined8 ***)0x0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_14689c22e(param_2);
    }
    iVar2 = FUN_1490428f4(plVar4,uVar1,&local_38);
    if (iVar2 == -1) {
      lVar3 = 0;
    }
    else {
      lVar3 = (longlong)iVar2 * 0x18 + *plVar4;
    }
    if (*(char *)(lVar3 + 8) == '\0') {
      if (DAT_14c950c29 == 1 && param_2 != (undefined8 ***)0x0) {
        FUN_14689c22e(param_2);
      }
      if ((~DAT_14c950c29 & 1) == 0 && param_2 != (undefined8 ***)0x0) {
        FUN_14689c22e(param_2);
      }
      local_38 = param_2;
      if ((~DAT_14c950c29 & 1) == 0 && param_2 != (undefined8 ***)0x0) {
        FUN_14689c22e(param_2);
      }
      if ((param_2 != (undefined8 ***)0x0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_14689c22e(param_2);
      }
      iVar2 = FUN_1490428f4(plVar4,uVar1,&local_38);
      if (iVar2 == -1) {
        lVar3 = 0;
      }
      else {
        lVar3 = (longlong)iVar2 * 0x18 + *plVar4;
      }
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149028892 FUN_149028892 body=570 status=ok
// SIG undefined FUN_149028892(void)

undefined4 FUN_149028892(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined **local_78;
  longlong local_70;
  char local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 local_50 [8];
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*(longlong *)*param_3 + 0x18))((longlong *)*param_3,&local_78);
  FUN_149021a64(&local_78,local_50);
  FUN_140056680(&local_60);
  if (7 < local_38) {
    FUN_14600850e();
  }
  local_40 = 0;
  local_38 = 7;
  local_50[0] = 0;
  local_78 = &PTR_FUN_14ba6d600;
  if (((local_70 != 0) && (local_68 == '\x01')) && (cef_string_utf16_clear(), local_70 != 0)) {
    FUN_1400020a8();
  }
  puVar2 = local_60;
  if (local_58 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  lVar3 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar2 + lVar3);
    uVar5 = (ulonglong)uVar4;
    uVar6 = *(ushort *)((longlong)&DAT_14ba6b1d2 + lVar3);
    if (uVar4 != uVar6) break;
    if (uVar4 == 0) goto LAB_149028a0b;
LAB_149028989:
    lVar3 = lVar3 + 2;
  }
  if ((uVar6 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_149028989;
  }
  if (uVar4 != uVar6) {
    lVar3 = 0;
    goto LAB_1490289be;
  }
LAB_149028a0b:
  (**(code **)(*(longlong *)*param_3 + 0x20))((longlong *)*param_3,local_80);
  uVar1 = FUN_149028ace(param_1,local_80);
  goto LAB_149028a29;
LAB_1490289be:
  uVar4 = *(ushort *)((longlong)puVar2 + lVar3);
  uVar5 = (ulonglong)uVar4;
  uVar6 = *(ushort *)((longlong)L"UE::ReleaseUObject" + lVar3);
  if (uVar4 == uVar6) {
    if (uVar4 == 0) goto LAB_149028aac;
LAB_1490289d7:
    lVar3 = lVar3 + 2;
    goto LAB_1490289be;
  }
  if ((uVar6 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_1490289d7;
  }
  if (uVar4 != uVar6) {
    uVar1 = 0;
    goto LAB_149028a29;
  }
LAB_149028aac:
  (**(code **)(*(longlong *)*param_3 + 0x20))((longlong *)*param_3,local_88);
  uVar1 = FUN_1490298c4(param_1,local_88);
LAB_149028a29:
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  lVar3 = *param_3;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149028ace FUN_149028ace body=3573 status=ok
// SIG undefined FUN_149028ace(void)

/* WARNING: Removing unreachable block (ram,0x0001490292be) */
/* WARNING: Removing unreachable block (ram,0x0001490292cd) */
/* WARNING: Removing unreachable block (ram,0x0001490292d1) */

undefined4 FUN_149028ace(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong ****pppplVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong ****pppplVar13;
  undefined8 uVar14;
  undefined ***pppuVar15;
  undefined4 *puVar16;
  undefined **ppuVar17;
  longlong ******pppppplVar18;
  longlong ****pppplVar19;
  longlong *****ppppplVar20;
  undefined8 *puVar21;
  longlong *****ppppplVar22;
  undefined2 *puVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_228 [32];
  longlong *****local_208;
  ulonglong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong *plStack_1d0;
  longlong local_1c8;
  longlong *plStack_1c0;
  undefined2 *local_1b0;
  undefined2 *local_1a8;
  longlong local_1a0;
  longlong ****local_198;
  undefined1 local_190 [24];
  longlong local_178;
  longlong ****local_170;
  undefined4 local_168 [6];
  undefined8 local_150;
  undefined4 local_148 [4];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined2 *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *****local_d8;
  longlong ****local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  longlong ****pppplStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined **local_88;
  ulonglong uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_128 = 0;
  uStack_120 = 0;
  lVar11 = (**(code **)(*(longlong *)*param_2 + 0x38))();
  if (lVar11 != 4) goto LAB_149028b5e;
  uVar10 = 0;
  iVar9 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,0);
  if (iVar9 != 5) goto LAB_149028b60;
  iVar9 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,1);
  if (((iVar9 == 5) &&
      (iVar9 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,2), iVar9 == 5)) &&
     (iVar9 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,3), iVar9 == 8)) {
    (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,&local_88,0);
    FUN_149021a64(&local_88,&local_d8);
    pppppplVar18 = &local_d8;
    if (7 < uStack_c0) {
      pppppplVar18 = (longlong ******)local_d8;
    }
    FUN_140056680(&local_118,pppppplVar18);
    cVar8 = FUN_140b10a34(&local_118,&local_128);
    if (local_118 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (7 < uStack_c0) {
      FUN_14600850e(&local_d8,local_d8);
    }
    local_c8 = (undefined1 *)0x0;
    uStack_c0 = 7;
    local_d8 = (longlong *****)((ulonglong)local_d8 & 0xffffffffffff0000);
    local_88 = &PTR_FUN_14ba6d600;
    if (((uStack_80 != 0) && ((char)local_78 == '\x01')) &&
       (cef_string_utf16_clear(), uStack_80 != 0)) {
      FUN_1400020a8();
    }
    if (cVar8 != '\0') {
      local_138 = 0;
      uStack_130 = 0;
      (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,&local_88,2);
      FUN_149021a64(&local_88,&local_d8);
      pppppplVar18 = &local_d8;
      if (7 < uStack_c0) {
        pppppplVar18 = (longlong ******)local_d8;
      }
      FUN_140056680(&local_118,pppppplVar18);
      uVar10 = FUN_140b10a34(&local_118,&local_138);
      if (local_118 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (7 < uStack_c0) {
        FUN_14600850e(&local_d8,local_d8);
      }
      local_c8 = (undefined1 *)0x0;
      uStack_c0 = 7;
      local_d8 = (longlong *****)((ulonglong)local_d8 & 0xffffffffffff0000);
      local_88 = &PTR_FUN_14ba6d600;
      if (((uStack_80 != 0) && ((char)local_78 == '\x01')) &&
         (cef_string_utf16_clear(), uStack_80 != 0)) {
        FUN_1400020a8();
      }
      if ((char)uVar10 == '\0') goto LAB_149028b60;
      plVar12 = (longlong *)FUN_14902a8b6(param_1,&local_128);
      if (plVar12 == (longlong *)0x0) {
        FUN_140056680(&local_d8,L"Unknown UObject ID");
        puVar16 = local_148;
        uVar25 = local_138._4_4_;
        uVar26 = (undefined4)uStack_130;
        uVar27 = uStack_130._4_4_;
      }
      else {
        (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,&local_88,1);
        FUN_149021a64(&local_88,&local_d8);
        pppppplVar18 = &local_d8;
        if (7 < uStack_c0) {
          pppppplVar18 = (longlong ******)local_d8;
        }
        FUN_1446f470e(&local_150,pppppplVar18,1);
        if (7 < uStack_c0) {
          FUN_14600850e(&local_d8,local_d8);
        }
        local_c8 = (undefined1 *)0x0;
        uStack_c0 = 7;
        local_d8 = (longlong *****)((ulonglong)local_d8 & 0xffffffffffff0000);
        local_88 = &PTR_FUN_14ba6d600;
        if (((uStack_80 != 0) && ((char)local_78 == '\x01')) &&
           (cef_string_utf16_clear(), uStack_80 != 0)) {
          FUN_1400020a8();
        }
        local_208 = (longlong *****)FUN_14171b860(plVar12,local_150);
        if ((longlong ******)local_208 != (longlong ******)0x0) {
          local_170 = (longlong ****)0x0;
          if (*(short *)((longlong)local_208 + 0xb6) == 0) {
            lVar11 = 0;
LAB_149028f45:
            (**(code **)(*plVar12 + 0x248))(plVar12,local_208,lVar11);
            FUN_144d754a0(&local_178);
            if ((longlong *****)local_170 != (longlong *****)0x0) {
              local_d8 = (longlong *****)&DAT_100000001;
              local_d0 = (longlong ****)((ulonglong)local_d0 & 0xffffffff00000000);
              pppplStack_a0 = (longlong ****)&local_170;
              local_58 = local_98;
              uStack_54 = uStack_94;
              uStack_50 = uStack_90;
              uStack_4c = uStack_8c;
              local_78 = (longlong *)0x0;
              local_88 = (undefined **)0x0;
              uStack_80 = uStack_c0;
              local_b8 = (undefined ***)0x0;
              local_c8 = &LAB_1443f8c56;
              uVar5 = CONCAT44(uStack_10c,iStack_110);
              local_a8 = &PTR_LAB_14ba6d720;
              local_e8 = local_98;
              uStack_e4 = uStack_94;
              uStack_e0 = uStack_90;
              uStack_dc = uStack_8c;
              local_78 = (longlong *)0x0;
              local_88 = (undefined **)0x0;
              local_a8 = &PTR_LAB_14ba6d720;
              local_b8 = (undefined ***)0x0;
              local_c8 = &LAB_1443f8c56;
              local_d8 = (longlong *****)&DAT_100000001;
              uStack_fc = uStack_ac;
              uStack_100 = uStack_b0;
              local_108 = 0;
              uStack_10c = uStack_c0._4_4_;
              iStack_110 = (int)uStack_c0;
              local_118 = (undefined2 *)0x0;
              plVar12 = (longlong *)param_1[0x1a];
              uStack_c0 = uVar5;
              if (plVar12 == (longlong *)0x0) {
LAB_1490292e7:
                local_88 = &PTR_FUN_14ba6c850;
                uStack_80 = 0;
                local_78 = (longlong *)0x0;
                uStack_70 = 0;
                local_68 = 0;
                lStack_60 = 0;
              }
              else {
                iVar9 = (int)plVar12[1];
                do {
                  if (iVar9 == 0) goto LAB_1490292e7;
                  LOCK();
                  iVar7 = (int)plVar12[1];
                  bVar24 = iVar9 == iVar7;
                  if (bVar24) {
                    *(int *)(plVar12 + 1) = iVar9 + 1;
                    iVar7 = iVar9;
                  }
                  iVar9 = iVar7;
                  UNLOCK();
                } while (!bVar24);
                lVar4 = param_1[0x19];
                LOCK();
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                UNLOCK();
                LOCK();
                plVar3 = plVar12 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*plVar12)(plVar12);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar12 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar12 + 0x10))(plVar12);
                  }
                }
                LOCK();
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                UNLOCK();
                local_88 = &PTR_FUN_14ba6c850;
                LOCK();
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                UNLOCK();
                uStack_70 = 0;
                local_68 = 0;
                lStack_60 = 0;
                LOCK();
                plVar3 = plVar12 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                uStack_80 = lVar4;
                local_78 = plVar12;
                if ((int)*plVar3 == 0) {
                  (**(code **)*plVar12)(plVar12);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar12 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar12 + 0x10))(plVar12);
                  }
                }
                LOCK();
                plVar3 = plVar12 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*plVar12)(plVar12);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar12 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar12 + 0x10))(plVar12);
                  }
                }
              }
              FUN_147de3270(lVar11,local_208,&local_88,&local_d8);
              lVar4 = lStack_60;
              if (lStack_60 != 0) {
                (*(code *)**(undefined8 **)
                            (lStack_60 + *(int *)(*(longlong *)(lStack_60 + 8) + 4) + 8))();
              }
              local_198 = local_170;
              FUN_1490280de(param_1,&local_118);
              puVar23 = local_118;
              if (iStack_110 == 0) {
                puVar23 = &DAT_149dfb77a;
              }
              local_1e0 = lVar4;
              if (lVar4 != 0) {
                (*(code *)**(undefined8 **)(lVar4 + *(int *)(*(longlong *)(lVar4 + 8) + 4) + 8))();
              }
              local_1e8 = local_178;
              if (local_178 != 0) {
                (*(code *)**(undefined8 **)
                            (*(int *)(*(longlong *)(local_178 + 8) + 4) + local_178 + 8))();
              }
              FUN_1443f37d6(&local_1e8,&local_1e0,puVar23);
              if (local_118 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (lVar4 != 0) {
                (**(code **)(*(longlong *)(lVar4 + *(int *)(*(longlong *)(lVar4 + 8) + 4) + 8) + 8))
                          ();
              }
              FUN_149028160(&local_88);
              if (local_c8 != (undefined1 *)0x0) {
                pppuVar15 = local_b8;
                if (local_b8 == (undefined ***)0x0) {
                  pppuVar15 = &local_a8;
                }
                (*(code *)(*pppuVar15)[2])();
              }
            }
            local_1f8 = (undefined4)local_138;
            uStack_1f4 = local_138._4_4_;
            uStack_1f0 = (undefined4)uStack_130;
            uStack_1ec = uStack_130._4_4_;
            FUN_14902ae6e(param_1,&local_1f8,&local_178,0);
          }
          else {
            FUN_144d73bd0(&local_118);
            (**(code **)(*(longlong *)*param_2 + 0x90))((longlong *)*param_2,&local_178,3);
            local_d8 = local_208;
            local_d0 = local_208[10];
            local_c8 = (undefined1 *)CONCAT17(local_c8._7_1_,0x101ffffffff);
            FUN_144a2daf0(&local_d8);
            local_200 = 0;
            if ((longlong *****)local_d0 == (longlong *****)0x0) {
              ppppplVar20 = (longlong *****)0x0;
            }
            else {
              ppppplVar22 = (longlong *****)0x0;
              do {
                pppplVar6 = local_d0;
                ppppplVar20 = ppppplVar22;
                if ((char)local_d0[7] < '\0') {
                  if (((uint)local_d0[7] >> 10 & 1) == 0) {
                    pppplVar19 = (longlong ****)local_d0[1];
                    pppplVar13 = (longlong ****)FUN_1446dcc8c();
                    if (pppplVar13[1] == (longlong ***)0x0) {
                      bVar24 = pppplVar19 != (longlong ****)0x0;
                      if (pppplVar19 != pppplVar13 && bVar24) {
                        do {
                          pppplVar19 = (longlong ****)pppplVar19[6];
                          bVar24 = pppplVar19 != (longlong ****)0x0;
                          if (pppplVar19 == pppplVar13) break;
                        } while (pppplVar19 != (longlong ****)0x0);
                      }
                      if (bVar24) goto LAB_1490293f1;
                    }
                    else if (((ulonglong)pppplVar19[3] & (ulonglong)pppplVar13[1]) != 0) {
LAB_1490293f1:
                      pppplVar19 = (longlong ****)pppplVar6[0xe];
                      if (DAT_14cbf6568 == 0) {
                        uVar14 = FUN_14596ec61();
                        DAT_14cbf6568 = FUN_140002ddd(FUN_1466732c2,uVar14,L"WebJSResponse");
                        if (DAT_14cbf6568 == 0) goto LAB_14902945f;
                      }
                      if ((*(int *)(DAT_14cbf6568 + 0x38) <= *(int *)(pppplVar19 + 7)) &&
                         (ppppplVar20 = (longlong *****)pppplVar6,
                         pppplVar19[6][*(int *)(DAT_14cbf6568 + 0x38)] ==
                         (longlong **)(DAT_14cbf6568 + 0x30))) goto LAB_1490293a4;
                    }
LAB_14902945f:
                    local_198 = pppplVar6;
                    FUN_1490280de(param_1,&local_88,&local_198);
                    ppuVar17 = (undefined **)&DAT_149dfb77a;
                    if ((int)uStack_80 != 0) {
                      ppuVar17 = local_88;
                    }
                    FUN_1490201ba(local_190,ppuVar17);
                    local_1a0 = local_178;
                    if (local_178 != 0) {
                      (*(code *)**(undefined8 **)
                                  (*(int *)(*(longlong *)(local_178 + 8) + 4) + local_178 + 8))();
                    }
                    local_1a8 = local_118;
                    if (local_118 != (undefined2 *)0x0) {
                      (*(code *)**(undefined8 **)
                                  ((longlong)local_118 +
                                  (longlong)*(int *)(*(longlong *)(local_118 + 4) + 4) + 8))();
                    }
                    FUN_1443f359f(&local_1a8,&local_1a0,local_190,local_200);
                    if (local_88 != (undefined **)0x0) {
                      FUN_1400020a8();
                    }
                    local_200 = (ulonglong)((int)local_200 + 1);
                    ppppplVar20 = ppppplVar22;
                  }
                  else {
                    local_170 = local_d0;
                  }
                }
LAB_1490293a4:
                local_d0 = (longlong ****)local_d0[3];
                FUN_144a2daf0(&local_d8);
                ppppplVar22 = ppppplVar20;
              } while ((longlong *****)local_d0 != (longlong *****)0x0);
            }
            ppppplVar22 = local_208;
            lVar11 = FUN_14001cc68((longlong)
                                   (int)(-*(int *)((longlong)local_208 + 0x5c) &
                                        (*(int *)(local_208 + 0xb) +
                                        *(int *)((longlong)local_208 + 0x5c)) - 1U),0);
            (*(code *)(*ppppplVar22)[0x5d])(ppppplVar22,lVar11,1);
            local_1b0 = local_118;
            if (local_118 != (undefined2 *)0x0) {
              (*(code *)**(undefined8 **)
                          ((longlong)local_118 +
                          (longlong)*(int *)(*(longlong *)(local_118 + 4) + 4) + 8))();
            }
            plVar3 = (longlong *)param_1[0x1a];
            if (plVar3 == (longlong *)0x0) {
LAB_1490290cf:
              local_1c8 = 0;
              plStack_1c0 = (longlong *)0x0;
              FUN_14902ab18(&local_d8,&local_1c8,&local_1b0);
            }
            else {
              iVar9 = (int)plVar3[1];
              do {
                if (iVar9 == 0) goto LAB_1490290cf;
                LOCK();
                iVar7 = (int)plVar3[1];
                bVar24 = iVar9 == iVar7;
                if (bVar24) {
                  *(int *)(plVar3 + 1) = iVar9 + 1;
                  iVar7 = iVar9;
                }
                iVar9 = iVar7;
                UNLOCK();
              } while (!bVar24);
              lVar4 = param_1[0x19];
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
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
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
              local_1c8 = lVar4;
              plStack_1c0 = plVar3;
              FUN_14902ab18(&local_d8,&local_1c8,&local_1b0);
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
            FUN_14902ace4(lVar11,local_208,&local_d8);
            FUN_14902ad5e(&local_d8);
            if (local_178 != 0) {
              (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_178 + 8) + 4) + local_178 + 8)
                          + 8))();
            }
            if (local_118 != (undefined2 *)0x0) {
              (**(code **)(*(longlong *)
                            ((longlong)local_118 +
                            (longlong)*(int *)(*(longlong *)(local_118 + 4) + 4) + 8) + 8))();
            }
            if (ppppplVar20 == (longlong *****)0x0) goto LAB_149028f45;
            puVar21 = (undefined8 *)(lVar11 + *(int *)((longlong)ppppplVar20 + 0x44));
            if (puVar21 != (undefined8 *)0x0) {
              plVar3 = (longlong *)param_1[0x1a];
              if (plVar3 == (longlong *)0x0) {
LAB_1490297a3:
                local_1d8 = 0;
                plStack_1d0 = (longlong *)0x0;
                bVar24 = true;
              }
              else {
                iVar9 = (int)plVar3[1];
                do {
                  if (iVar9 == 0) goto LAB_1490297a3;
                  LOCK();
                  iVar7 = (int)plVar3[1];
                  bVar24 = iVar9 == iVar7;
                  if (bVar24) {
                    *(int *)(plVar3 + 1) = iVar9 + 1;
                    iVar7 = iVar9;
                  }
                  iVar9 = iVar7;
                  UNLOCK();
                } while (!bVar24);
                lVar4 = param_1[0x19];
                LOCK();
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                UNLOCK();
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
                LOCK();
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                UNLOCK();
                bVar24 = false;
                local_1d8 = lVar4;
                plStack_1d0 = plVar3;
              }
              plVar1 = plStack_1d0;
              FUN_14902adda(&local_d8,&local_1d8,&local_138);
              *puVar21 = local_d8;
              local_d8 = (longlong *****)0x0;
              plVar3 = (longlong *)puVar21[1];
              puVar21[1] = local_d0;
              local_d0 = (longlong ****)0x0;
              if (plVar3 == (longlong *)0x0) {
                *(undefined4 *)(puVar21 + 2) = (undefined4)local_c8;
                *(undefined4 *)((longlong)puVar21 + 0x14) = local_c8._4_4_;
                *(int *)(puVar21 + 3) = (int)uStack_c0;
                *(undefined4 *)((longlong)puVar21 + 0x1c) = uStack_c0._4_4_;
              }
              else {
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))();
                }
                *(undefined4 *)(puVar21 + 2) = (undefined4)local_c8;
                *(undefined4 *)((longlong)puVar21 + 0x14) = local_c8._4_4_;
                *(int *)(puVar21 + 3) = (int)uStack_c0;
                *(undefined4 *)((longlong)puVar21 + 0x1c) = uStack_c0._4_4_;
                if ((longlong *****)local_d0 != (longlong *****)0x0) {
                  LOCK();
                  piVar2 = (int *)((longlong)local_d0 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (*(code *)(*local_d0)[2])();
                  }
                }
              }
              if (!bVar24) {
                LOCK();
                plVar3 = plVar1 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*plVar1)(plVar1);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar1 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                  }
                }
              }
            }
            (**(code **)(*plVar12 + 0x248))(plVar12,local_208,lVar11);
            FUN_144d754a0(&local_178);
          }
          if (lVar11 != 0) {
            (*(code *)(*local_208)[0x5e])(local_208,lVar11,1);
            FUN_1400020a8(lVar11);
          }
          if (local_178 != 0) {
            (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_178 + 8) + 4) + local_178 + 8) +
                        8))();
          }
          goto LAB_149028b60;
        }
        FUN_140056680(&local_d8,L"Unknown UObject Function");
        puVar16 = local_168;
        uVar25 = local_138._4_4_;
        uVar26 = (undefined4)uStack_130;
        uVar27 = uStack_130._4_4_;
      }
      *puVar16 = (undefined4)local_138;
      puVar16[1] = uVar25;
      puVar16[2] = uVar26;
      puVar16[3] = uVar27;
      (**(code **)(*param_1 + 0x38))(param_1,puVar16,&local_d8);
      if ((longlong ******)local_d8 != (longlong ******)0x0) {
        FUN_1400020a8();
      }
      goto LAB_149028b60;
    }
  }
LAB_149028b5e:
  uVar10 = 0;
LAB_149028b60:
  lVar11 = *param_2;
  if (lVar11 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar11 + 8) + 4) + lVar11 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490298c4 FUN_1490298c4 body=392 status=ok
// SIG undefined FUN_1490298c4(void)

undefined8 FUN_1490298c4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [40];
  undefined **local_80;
  longlong local_78;
  char local_70;
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined6 uStack_46;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = (**(code **)(*(longlong *)*param_2 + 0x38))();
  if (lVar3 == 1) {
    uVar5 = 0;
    iVar1 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,0);
    if (iVar1 != 5) goto LAB_1490299d4;
    (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,&local_80,0);
    puVar4 = &local_48;
    FUN_149021a64(&local_80,puVar4);
    if (7 < local_30) {
      puVar4 = (undefined2 *)CONCAT62(uStack_46,local_48);
    }
    FUN_140056680(local_68,puVar4);
    uVar2 = FUN_140b10a34(local_68,&local_58);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (7 < local_30) {
      FUN_14600850e(&local_48,CONCAT62(uStack_46,local_48));
    }
    local_38 = 0;
    local_30 = 7;
    local_48 = 0;
    local_80 = &PTR_FUN_14ba6d600;
    if ((local_78 != 0) && (local_70 == '\x01')) {
      cef_string_utf16_clear();
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    if ((char)uVar2 != '\0') {
      lVar3 = FUN_14902a8b6(param_1,&local_58);
      if (lVar3 != 0) {
        FUN_14902a998(param_1,lVar3);
        uVar5 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
        goto LAB_1490299d4;
      }
    }
  }
  uVar5 = 0;
LAB_1490299d4:
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149029a4e FUN_149029a4e body=260 status=ok
// SIG undefined FUN_149029a4e(void)

void FUN_149029a4e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_28);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_28 + (longlong)*(int *)(local_28[1] + 4) + 8) + 8))
                ();
      (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x68))
                (*(longlong **)(param_1 + 0xd8),&local_28);
      plVar1 = local_28;
      local_30 = *param_2;
      if (local_30 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_30 + 8) + 4) + local_30 + 8))();
      }
      (**(code **)(*plVar1 + 0xc0))(plVar1,1,&local_30);
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*(longlong *)((longlong)local_28 + (longlong)*(int *)(local_28[1] + 4) + 8) + 8
                    ))();
      }
    }
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149029b54 FUN_149029b54 body=553 status=ok
// SIG undefined FUN_149029b54(void)

undefined8 * FUN_149029b54(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined **local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_144d73bd0(param_2);
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_149042f32(local_98,param_1 + 0x70);
  local_b0 = local_88;
  local_b8 = (undefined **)0x100000000;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  iVar7 = 0;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar7 = local_70;
  }
  local_c8 = local_a8;
  uVar3 = local_c8;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = local_98;
  local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  if ((local_c8._4_4_ != iVar7) || (local_b0 != local_88)) {
    iVar4 = local_c8._4_4_;
    local_c8 = uVar3;
    do {
      lVar1 = *local_e0;
      lVar6 = (longlong)iVar4 * 0x20;
      plVar2 = (longlong *)*param_2;
      FUN_1490281de(param_1,local_e8,*(undefined8 *)(lVar1 + 0x10 + lVar6));
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar6) != 0) {
        puVar5 = *(undefined2 **)(lVar1 + lVar6);
      }
      FUN_1490201ba(&local_b8,puVar5);
      (**(code **)(*plVar2 + 0xd8))(plVar2,&local_b8,local_e8);
      local_b8 = &PTR_FUN_14ba6d600;
      if ((local_b0 != (undefined1 *)0x0) && ((char)local_a8 == '\x01')) {
        cef_string_utf16_clear();
        if (local_b0 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
      FUN_1449c0562(&local_d8);
      iVar4 = local_c8._4_4_;
      uVar3 = local_c8;
    } while (local_e0 != local_98 || (local_d0 != local_88 || local_c8._4_4_ != iVar7));
  }
  local_c8 = uVar3;
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_147a8b2a2(local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149029d7e FUN_149029d7e body=1397 status=ok
// SIG undefined FUN_149029d7e(void)

void FUN_149029d7e(longlong param_1,undefined8 param_2,undefined2 **param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined **local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  undefined2 **local_78;
  undefined ***local_70;
  char local_68;
  longlong *local_60;
  longlong local_58;
  undefined2 *local_50;
  int local_48;
  undefined **local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = (undefined **)param_3;
  FUN_14902a2f4(param_1,&local_50,param_2);
  FUN_1490281de(param_1,&local_58,param_3);
  if ((char)param_4 != '\0') {
    if (param_3 != (undefined2 **)0x0 && DAT_14c950c29 == 1) {
      FUN_14689c22e(param_3);
    }
    if ((~DAT_14c950c29 & 1) == 0 && param_3 != (undefined2 **)0x0) {
      FUN_14689c22e(param_3);
    }
    local_78 = param_3;
    if ((~DAT_14c950c29 & 1) == 0 && param_3 != (undefined2 **)0x0) {
      FUN_14689c22e(param_3);
    }
    plVar1 = (longlong *)(param_1 + 0x20);
    if ((param_3 != (undefined2 **)0x0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_14689c22e(param_3);
    }
    uVar3 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    iVar4 = FUN_1490428f4(plVar1,uVar3 >> 0x10 ^ uVar3,&local_78);
    if (iVar4 == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)iVar4 * 0x18 + *plVar1;
    }
    if (*(char *)(lVar6 + 8) != '\0') goto LAB_149029ea3;
    puVar7 = local_50;
    if (local_48 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    iVar4 = local_48 + -1;
    if (local_48 == 0) {
      iVar4 = 0;
    }
    uVar5 = FUN_144a49b4a(iVar4,puVar7);
    iVar4 = FUN_148024f46(param_1 + 0x70,uVar5,&local_50);
    ppuVar2 = local_40;
    if (iVar4 != -1) goto LAB_149029ea3;
    if ((undefined2 **)local_40 != (undefined2 **)0x0 && DAT_14c950c29 == 1) {
      FUN_14689c22e(local_40);
    }
    if ((~DAT_14c950c29 & 1) == 0 && (undefined2 **)ppuVar2 != (undefined2 **)0x0) {
      FUN_14689c22e(ppuVar2);
    }
    local_78 = (undefined2 **)ppuVar2;
    if ((~DAT_14c950c29 & 1) == 0 && (undefined2 **)ppuVar2 != (undefined2 **)0x0) {
      FUN_14689c22e(ppuVar2);
    }
    if (((undefined2 **)ppuVar2 != (undefined2 **)0x0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_14689c22e(ppuVar2);
    }
    uVar3 = ((uint)((ulonglong)ppuVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)ppuVar2 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    iVar4 = FUN_1490428f4(plVar1,uVar3 >> 0x10 ^ uVar3,&local_78);
    if (iVar4 == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)iVar4 * 0x18 + *plVar1;
    }
    *(undefined1 *)(lVar6 + 8) = 1;
    *(undefined4 *)(lVar6 + 0xc) = 0xffffffff;
    local_70 = &local_40;
    local_78 = &local_50;
    FUN_148024c20(param_1 + 0x70,&local_a0,&local_78,0);
  }
  FUN_1490201ba(&local_78,L"UE::SetValue");
  FUN_144d77a80(&local_60,&local_78);
  local_78 = (undefined2 **)&PTR_FUN_14ba6d600;
  if (((local_70 != (undefined ***)0x0) && (local_68 == '\x01')) &&
     (cef_string_utf16_clear(), local_70 != (undefined ***)0x0)) {
    FUN_1400020a8();
  }
  (**(code **)(*local_60 + 0x20))(local_60,&local_80);
  FUN_144d73bd0(&local_88);
  plVar1 = local_88;
  puVar7 = local_50;
  if (local_48 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  FUN_1490201ba(&local_78,puVar7);
  FUN_14901fe1a(&local_a0,&DAT_14acb8ea6);
  (**(code **)(*plVar1 + 200))(plVar1,&local_a0,&local_78);
  local_a0 = &PTR_FUN_14ba6d600;
  if (((local_98 != 0) && (local_90 == '\x01')) && (cef_string_utf16_clear(), local_98 != 0)) {
    FUN_1400020a8();
  }
  local_78 = (undefined2 **)&PTR_FUN_14ba6d600;
  if (((local_70 != (undefined ***)0x0) && (local_68 == '\x01')) &&
     (cef_string_utf16_clear(), local_70 != (undefined ***)0x0)) {
    FUN_1400020a8();
  }
  plVar1 = local_88;
  local_a8 = local_58;
  if (local_58 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_58 + 8) + 4) + local_58 + 8))();
  }
  FUN_14901fe1a(&local_78,"value");
  (**(code **)(*plVar1 + 0xd8))(plVar1,&local_78,&local_a8);
  local_78 = (undefined2 **)&PTR_FUN_14ba6d600;
  if (((local_70 != (undefined ***)0x0) && (local_68 == '\x01')) &&
     (cef_string_utf16_clear(), local_70 != (undefined ***)0x0)) {
    FUN_1400020a8();
  }
  plVar1 = local_88;
  FUN_14901fe1a(&local_78,"permanent");
  (**(code **)(*plVar1 + 0xb0))(plVar1,&local_78,param_4);
  local_78 = (undefined2 **)&PTR_FUN_14ba6d600;
  if (((local_70 != (undefined ***)0x0) && (local_68 == '\x01')) &&
     (cef_string_utf16_clear(), local_70 != (undefined ***)0x0)) {
    FUN_1400020a8();
  }
  plVar1 = local_80;
  local_b0 = local_88;
  if (local_88 != (longlong *)0x0) {
    (*(code *)**(undefined8 **)((longlong)local_88 + (longlong)*(int *)(local_88[1] + 4) + 8))();
  }
  (**(code **)(*plVar1 + 0xd0))(plVar1,0,&local_b0);
  local_b8 = local_60;
  if (local_60 != (longlong *)0x0) {
    (*(code *)**(undefined8 **)((longlong)local_60 + (longlong)*(int *)(local_60[1] + 4) + 8))();
  }
  FUN_149029a4e(param_1,&local_b8);
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_88 + (longlong)*(int *)(local_88[1] + 4) + 8) + 8))()
    ;
  }
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_80 + (longlong)*(int *)(local_80[1] + 4) + 8) + 8))()
    ;
  }
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_60 + (longlong)*(int *)(local_60[1] + 4) + 8) + 8))()
    ;
  }
LAB_149029ea3:
  if (local_58 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_58 + 8) + 4) + local_58 + 8) + 8))();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14902a2f4 FUN_14902a2f4 body=104 status=ok
// SIG undefined FUN_14902a2f4(void)

undefined8 * FUN_14902a2f4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    FUN_144a2b0a4(param_3,param_2);
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  return param_2;
}



// FUNCTION 14902a35c FUN_14902a35c body=1368 status=ok
// SIG undefined FUN_14902a35c(void)

void FUN_14902a35c(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  uint local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined **local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  undefined **local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14902a2f4(param_1,&local_48,param_2);
  if (param_4 == '\0') {
    FUN_1490201ba(&local_68,L"UE::DeleteValue");
    FUN_144d77a80(&local_50,&local_68);
    local_68 = &PTR_FUN_14ba6d600;
    if (((local_60 != 0) && (local_58 == '\x01')) && (cef_string_utf16_clear(), local_60 != 0)) {
      FUN_1400020a8();
    }
    (**(code **)(*local_50 + 0x20))(local_50,&local_70);
    FUN_144d73bd0(&local_78);
    plVar1 = local_78;
    puVar6 = local_48;
    if (local_40 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_1490201ba(&local_68,puVar6);
    FUN_14901fe1a(&local_90,&DAT_14acb8ea6);
    (**(code **)(*plVar1 + 200))(plVar1,&local_90,&local_68);
    local_90 = &PTR_FUN_14ba6d600;
    if (((local_88 != 0) && (local_80 == '\x01')) && (cef_string_utf16_clear(), local_88 != 0)) {
      FUN_1400020a8();
    }
    local_68 = &PTR_FUN_14ba6d600;
    if (((local_60 != 0) && (local_58 == '\x01')) && (cef_string_utf16_clear(), local_60 != 0)) {
      FUN_1400020a8();
    }
    plVar1 = local_78;
    local_b8 = (uint)*(undefined8 *)(param_1 + 0x10);
    uStack_b4 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    uStack_b0 = (undefined4)*(undefined8 *)(param_1 + 0x18);
    uStack_ac = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
    if (param_3 == 0) {
      uStack_ac = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      local_b8 = 0;
    }
    else {
      local_b8 = (uint)((ulonglong)param_3 >> 0x20) ^ local_b8;
      uStack_b4 = uStack_b4 ^ (uint)param_3;
    }
    local_a8 = (undefined2 *)0x0;
    uStack_a0 = 0;
    FUN_1407c869a(&local_b8,&local_a8,0);
    puVar6 = local_a8;
    if ((int)uStack_a0 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_1490201ba(&local_68,puVar6);
    FUN_14901fe1a(&local_90,&DAT_14acb8ec8);
    (**(code **)(*plVar1 + 200))(plVar1,&local_90,&local_68);
    local_90 = &PTR_FUN_14ba6d600;
    if (((local_88 != 0) && (local_80 == '\x01')) && (cef_string_utf16_clear(), local_88 != 0)) {
      FUN_1400020a8();
    }
    local_68 = &PTR_FUN_14ba6d600;
    if (local_60 != 0) {
      if ((local_58 == '\x01') && (cef_string_utf16_clear(), local_60 != 0)) {
        FUN_1400020a8();
      }
      local_60 = 0;
      local_58 = '\0';
    }
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar1 = local_78;
    FUN_14901fe1a(&local_68,"permanent");
    (**(code **)(*plVar1 + 0xb0))(plVar1,&local_68,0);
    local_68 = &PTR_FUN_14ba6d600;
    if (((local_60 != 0) && (local_58 == '\x01')) && (cef_string_utf16_clear(), local_60 != 0)) {
      FUN_1400020a8();
    }
    plVar1 = local_70;
    local_c0 = local_78;
    if (local_78 != (longlong *)0x0) {
      (*(code *)**(undefined8 **)((longlong)local_78 + (longlong)*(int *)(local_78[1] + 4) + 8))();
    }
    (**(code **)(*plVar1 + 0xd0))(plVar1,0,&local_c0);
    local_c8 = local_50;
    if (local_50 != (longlong *)0x0) {
      (*(code *)**(undefined8 **)((longlong)local_50 + (longlong)*(int *)(local_50[1] + 4) + 8))();
    }
    FUN_149029a4e(param_1,&local_c8);
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_78 + (longlong)*(int *)(local_78[1] + 4) + 8) + 8))
                ();
    }
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_70 + (longlong)*(int *)(local_70[1] + 4) + 8) + 8))
                ();
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_50 + (longlong)*(int *)(local_50[1] + 4) + 8) + 8))
                ();
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x70);
    puVar6 = local_48;
    if (local_40 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    iVar4 = local_40 + -1;
    if (local_40 == 0) {
      iVar4 = 0;
    }
    uVar3 = FUN_144a49b4a(iVar4,puVar6);
    iVar4 = FUN_148024f46(plVar1,uVar3,&local_48);
    if (iVar4 != -1) {
      if (param_3 != 0) {
        puVar6 = local_48;
        if (local_40 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        uVar7 = 0;
        uVar5 = (ulonglong)(local_40 - 1);
        if (local_40 == 0) {
          uVar5 = uVar7;
        }
        uVar3 = FUN_144a49b4a(uVar5,puVar6);
        iVar4 = FUN_148024f46(plVar1,uVar3,&local_48);
        if (iVar4 != -1) {
          uVar7 = (longlong)iVar4 * 0x20 + *plVar1;
        }
        if (*(longlong *)(uVar7 + 0x10) != param_3) goto LAB_14902a47c;
      }
      puVar6 = local_48;
      if (local_40 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      iVar4 = local_40 + -1;
      if (local_40 == 0) {
        iVar4 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar4,puVar6);
      iVar4 = FUN_148024f46(plVar1,uVar3,&local_48);
      ppuVar2 = *(undefined ***)(*(longlong *)(param_1 + 0x70) + 0x10 + (longlong)iVar4 * 0x20);
      FUN_149047a48(plVar1);
      if (ppuVar2 != (undefined **)0x0 && DAT_14c950c29 == 1) {
        FUN_14689c22e(ppuVar2);
      }
      local_68 = ppuVar2;
      if ((ppuVar2 != (undefined **)0x0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_14689c22e(ppuVar2);
      }
      FUN_1490478c4(param_1 + 0x20,&local_68);
    }
  }
LAB_14902a47c:
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14902a8b6 FUN_14902a8b6 body=224 status=ok
// SIG undefined FUN_14902a8b6(void)

ulonglong FUN_14902a8b6(longlong param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = CONCAT44(*(uint *)(param_1 + 0x10) ^ *param_2,*(uint *)(param_1 + 0x14) ^ param_2[1]);
  if (uVar4 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(uVar4);
  }
  local_20 = uVar4;
  if ((~DAT_14c950c29 & 1) == 0 && uVar4 != 0) {
    FUN_14689c22e(uVar4);
  }
  if ((uVar4 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(uVar4);
  }
  uVar1 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  iVar2 = FUN_1490428f4(param_1 + 0x20,uVar1 >> 0x10 ^ uVar1,&local_20);
  uVar3 = 0;
  if (iVar2 != -1) {
    uVar3 = uVar4;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902a998 FUN_14902a998 body=382 status=ok
// SIG undefined FUN_14902a998(void)

void FUN_14902a998(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c950c29 == 1) {
    FUN_14689c22e(param_2);
  }
  local_28 = param_2;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_14689c22e(param_2);
  }
  plVar4 = (longlong *)(param_1 + 0x20);
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_14689c22e(param_2);
  }
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  iVar2 = FUN_1490428f4(plVar4,uVar1,&local_28);
  if (iVar2 != -1) {
    if (DAT_14c950c29 == 1) {
      FUN_14689c22e(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_14689c22e(param_2);
    }
    local_28 = param_2;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_14689c22e(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_14689c22e(param_2);
    }
    iVar2 = FUN_1490428f4(plVar4,uVar1,&local_28);
    if (iVar2 == -1) {
      lVar3 = 0;
    }
    else {
      lVar3 = (longlong)iVar2 * 0x18 + *plVar4;
    }
    if (*(char *)(lVar3 + 8) == '\0') {
      iVar2 = *(int *)(lVar3 + 0xc);
      *(int *)(lVar3 + 0xc) = iVar2 + -1;
      if (iVar2 < 2) {
        if (DAT_14c950c29 == 1) {
          FUN_14689c22e(param_2);
        }
        local_28 = param_2;
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_14689c22e(param_2);
        }
        FUN_1490478c4(plVar4,&local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902ab18 FUN_14902ab18 body=459 status=ok
// SIG undefined FUN_14902ab18(void)

undefined8 * FUN_14902ab18(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_LAB_14ba6c890;
  param_1[1] = *param_2;
  lVar2 = param_2[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  lVar2 = FUN_14001cc68(0x50,0x10);
  local_48 = *param_3;
  if (local_48 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_48 + 8) + 4) + local_48 + 8))();
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_1490430e0(lVar2,&local_58,&local_48);
  param_1[3] = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ba6c920;
  plVar3[2] = lVar2;
  param_1[4] = plVar3;
  if ((lVar2 == 0) ||
     (((*(longlong *)(lVar2 + 8) != 0 && (*(longlong *)(lVar2 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))))) goto LAB_14902ac72;
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) goto LAB_14902ac72;
LAB_14902ac27:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *(longlong **)(lVar2 + 0x10) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_14902ac72;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if (plVar4 != (longlong *)0x0) goto LAB_14902ac27;
      *(longlong **)(lVar2 + 0x10) = plVar3;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14902ac72:
  param_1[5] = 0;
  param_1[6] = 0;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  lVar2 = *param_3;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14902ace4 FUN_14902ace4 body=120 status=ok
// SIG undefined FUN_14902ace4(void)

undefined4 FUN_14902ace4(void)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 1;
  local_68 = 0;
  local_58 = (longlong *)0x0;
  uVar1 = FUN_1437cb374();
  if (local_68 != 0) {
    plVar2 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar2 = local_48;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902ad5e FUN_14902ad5e body=124 status=ok
// SIG undefined FUN_14902ad5e(void)

void FUN_14902ad5e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14ba6c890;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x00014902adce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14902adda FUN_14902adda body=147 status=ok
// SIG undefined FUN_14902adda(void)

undefined8 * FUN_14902adda(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = uVar3;
    param_1[1] = 0;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    *(undefined4 *)(param_1 + 2) = *param_3;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_1 + 3) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_1 = uVar3;
    param_1[1] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    *(undefined4 *)(param_1 + 2) = *param_3;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_1 + 3) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
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
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 14902ae6e FUN_14902ae6e body=520 status=ok
// SIG undefined FUN_14902ae6e(void)

void FUN_14902ae6e(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined **local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1490201ba(&local_60,L"UE::ExecuteJSFunction");
  FUN_144d77a80(&local_48,&local_60);
  local_60 = &PTR_FUN_14ba6d600;
  if (((local_58 != 0) && (local_50 == '\x01')) && (cef_string_utf16_clear(), local_58 != 0)) {
    FUN_1400020a8();
  }
  (**(code **)(*local_48 + 0x20))(local_48,&local_68);
  plVar1 = local_68;
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  FUN_1407c869a(param_2,&local_78,0);
  puVar2 = local_78;
  if ((int)uStack_70 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1490201ba(&local_60,puVar2);
  (**(code **)(*plVar1 + 0xc0))(plVar1,0,&local_60);
  local_60 = &PTR_FUN_14ba6d600;
  if (local_58 != 0) {
    if ((local_50 == '\x01') && (cef_string_utf16_clear(), local_58 != 0)) {
      FUN_1400020a8();
    }
    local_58 = 0;
    local_50 = '\0';
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = local_68;
  local_80 = *param_3;
  if (local_80 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_80 + 8) + 4) + local_80 + 8))();
  }
  (**(code **)(*plVar1 + 0xd8))(plVar1,1,&local_80);
  (**(code **)(*local_68 + 0xa8))(local_68,2,param_4);
  local_88 = local_48;
  if (local_48 != (longlong *)0x0) {
    (*(code *)**(undefined8 **)((longlong)local_48 + (longlong)*(int *)(local_48[1] + 4) + 8))();
  }
  FUN_149029a4e(param_1,&local_88);
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_68 + (longlong)*(int *)(local_68[1] + 4) + 8) + 8))()
    ;
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_48 + (longlong)*(int *)(local_48[1] + 4) + 8) + 8))()
    ;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14902b078 FUN_14902b078 body=235 status=ok
// SIG undefined FUN_14902b078(void)

void FUN_14902b078(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  longlong local_40;
  char local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144d754a0(&local_30);
  plVar1 = local_30;
  if (*(int *)(param_3 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_3;
  }
  FUN_1490201ba(&local_48,puVar2);
  (**(code **)(*plVar1 + 0xc0))(plVar1,0,&local_48);
  local_48 = &PTR_FUN_14ba6d600;
  if ((local_40 != 0) && (local_38 == '\x01')) {
    cef_string_utf16_clear();
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_14902ae6e(param_1,&local_58,&local_30,1);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_30 + (longlong)*(int *)(local_30[1] + 4) + 8) + 8))()
    ;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902b164 FUN_14902b164 body=238 status=ok
// SIG undefined FUN_14902b164(void)

void FUN_14902b164(undefined8 param_1,undefined4 *param_2,uint param_3,longlong param_4,
                  undefined1 param_5)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144d754a0(&local_50);
  if (0 < (int)param_3) {
    uVar1 = 0;
    do {
      local_58 = local_50;
      if (local_50 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_50 + 8) + 4) + local_50 + 8))();
      }
      FUN_14902b254(param_1,&local_58,uVar1 & 0xffffffff,param_4);
      uVar1 = uVar1 + 1;
      param_4 = param_4 + 0x10;
    } while (param_3 != uVar1);
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  FUN_14902ae6e(param_1,&local_68,&local_50,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  if (local_50 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_50 + 8) + 4) + local_50 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902b254 FUN_14902b254 body=1151 status=ok
// SIG undefined FUN_14902b254(void)

void FUN_14902b254(undefined8 param_1,longlong *param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  ulonglong uVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined1 auStack_f8 [40];
  undefined **local_d0;
  undefined **local_c8;
  undefined **local_c0;
  undefined **local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined **local_90;
  undefined **local_88;
  undefined **local_80;
  undefined **local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  switch(*param_4) {
  case 0:
    goto switchD_14902b29c_caseD_0;
  case 1:
    (**(code **)(*(longlong *)*param_2 + 0xa8))
              ((longlong *)*param_2,(longlong)param_3,*(undefined1 *)(param_4 + 2));
    break;
  case 2:
    (**(code **)(*(longlong *)*param_2 + 0xb0))((longlong *)*param_2,(longlong)param_3,param_4[2]);
    break;
  case 3:
    (**(code **)(*(longlong *)*param_2 + 0xb8))
              ((longlong *)*param_2,(longlong)param_3,*(undefined8 *)(param_4 + 2));
    break;
  case 4:
    if (*(int *)(*(undefined8 **)(param_4 + 2) + 1) == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)**(undefined8 **)(param_4 + 2);
    }
    FUN_1490201ba(&local_b8,puVar12);
    (**(code **)(*(longlong *)*param_2 + 0xc0))((longlong *)*param_2,(longlong)param_3,&local_b8);
    local_b8 = &PTR_FUN_14ba6d600;
    if (((CONCAT44(uStack_ac,local_b0) != 0) && ((char)uStack_a8 == '\x01')) &&
       (cef_string_utf16_clear(), CONCAT44(uStack_ac,local_b0) != 0)) {
      FUN_1400020a8();
    }
    break;
  case 5:
    if (*(longlong *)(param_4 + 2) != 0) {
      FUN_1490281de(param_1,&local_b8);
      plVar5 = (longlong *)*param_2;
      local_70 = local_b8;
      if (local_b8 != (undefined **)0x0) {
        (*(code *)**(undefined8 **)((longlong)local_b8 + (longlong)*(int *)(local_b8[1] + 4) + 8))()
        ;
      }
      lVar6 = *plVar5;
      pppuVar9 = &local_70;
      goto LAB_14902b652;
    }
    goto switchD_14902b29c_caseD_0;
  case 6:
    uVar7 = (**(code **)(**(longlong **)(param_4 + 2) + 0x10))();
    uVar8 = (**(code **)(**(longlong **)(param_4 + 2) + 8))();
    FUN_149027ce0(param_1,&local_b8,uVar8,uVar7);
    plVar5 = (longlong *)*param_2;
    local_78 = local_b8;
    if (local_b8 != (undefined **)0x0) {
      (*(code *)**(undefined8 **)((longlong)local_b8 + (longlong)*(int *)(local_b8[1] + 4) + 8))();
    }
    lVar6 = *plVar5;
    pppuVar9 = &local_78;
LAB_14902b652:
    (**(code **)(lVar6 + 0xd0))(plVar5,(longlong)param_3,pppuVar9);
    local_90 = local_b8;
    goto LAB_14902b3a3;
  case 7:
    FUN_144d754a0(&local_b8);
    plVar5 = *(longlong **)(param_4 + 2);
    if (0 < (int)plVar5[1]) {
      lVar6 = 0;
      uVar10 = 0;
      do {
        lVar1 = *plVar5;
        local_80 = local_b8;
        if (local_b8 != (undefined **)0x0) {
          (*(code *)**(undefined8 **)((longlong)local_b8 + (longlong)*(int *)(local_b8[1] + 4) + 8))
                    ();
        }
        FUN_14902b254(param_1,&local_80,uVar10 & 0xffffffff,lVar1 + lVar6);
        uVar10 = uVar10 + 1;
        plVar5 = *(longlong **)(param_4 + 2);
        lVar6 = lVar6 + 0x10;
      } while ((longlong)uVar10 < (longlong)(int)plVar5[1]);
    }
    plVar5 = (longlong *)*param_2;
    local_88 = local_b8;
    if (local_b8 != (undefined **)0x0) {
      (*(code *)**(undefined8 **)((longlong)local_b8 + (longlong)*(int *)(local_b8[1] + 4) + 8))();
    }
    (**(code **)(*plVar5 + 0xd8))(plVar5,(longlong)param_3,&local_88);
    local_90 = local_b8;
    goto LAB_14902b3a3;
  case 8:
    FUN_144d73bd0(&local_90);
    ppuVar2 = *(undefined ***)(param_4 + 2);
    local_d0 = ppuVar2 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = local_d0;
    if (*(int *)(ppuVar2 + 5) == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar11 = *(int *)(ppuVar2 + 5);
    }
    uStack_98 = CONCAT44(uStack_4c,uStack_50);
    local_a0 = local_58;
    uVar7 = local_a0;
    local_b0 = (undefined4)local_68;
    uStack_ac = local_68._4_4_;
    uStack_a8 = (undefined4)uStack_60;
    uStack_a4 = uStack_60._4_4_;
    local_a0._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar4 = local_a0._4_4_;
    local_b8 = ppuVar2;
    if ((local_a0._4_4_ != iVar11) || (local_a0 = uVar7, uStack_60 != local_d0)) {
      do {
        local_a0 = uVar7;
        puVar3 = *local_b8;
        lVar6 = (longlong)iVar4;
        if (*(int *)(puVar3 + lVar6 * 0x28 + 8) == 0) {
          puVar12 = &DAT_149dfb77a;
        }
        else {
          puVar12 = *(undefined2 **)(puVar3 + lVar6 * 0x28);
        }
        local_c0 = local_90;
        if (local_90 != (undefined **)0x0) {
          (*(code *)**(undefined8 **)((longlong)local_90 + (longlong)*(int *)(local_90[1] + 4) + 8))
                    ();
        }
        FUN_149047adc(param_1,&local_c0,puVar12,puVar3 + lVar6 * 0x28 + 0x10);
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_ac);
        FUN_1449c0562(&local_b0);
        iVar4 = local_a0._4_4_;
        uVar7 = local_a0;
      } while (local_b8 != ppuVar2 ||
               ((undefined **)CONCAT44(uStack_a4,uStack_a8) != local_d0 || local_a0._4_4_ != iVar11)
              );
    }
    plVar5 = (longlong *)*param_2;
    local_c8 = local_90;
    if (local_90 != (undefined **)0x0) {
      (*(code *)**(undefined8 **)((longlong)local_90 + (longlong)*(int *)(local_90[1] + 4) + 8))();
    }
    (**(code **)(*plVar5 + 0xd0))(plVar5,(longlong)param_3,&local_c8);
LAB_14902b3a3:
    if (local_90 != (undefined **)0x0) {
      (**(code **)(*(longlong *)((longlong)local_90 + (longlong)*(int *)(local_90[1] + 4) + 8) + 8))
                ();
    }
  }
switchD_14902b29c_default:
  lVar6 = *param_2;
  if (lVar6 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar6 + 8) + 4) + lVar6 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
switchD_14902b29c_caseD_0:
  (**(code **)(*(longlong *)*param_2 + 0xa0))((longlong *)*param_2,(longlong)param_3);
  goto switchD_14902b29c_default;
}



// FUNCTION 14902b6d4 FUN_14902b6d4 body=1658 status=ok
// SIG undefined FUN_14902b6d4(void)

undefined8 *
FUN_14902b6d4(longlong param_1,undefined8 *param_2,undefined4 *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined **local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_14902b76c:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_14902b76c;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar12 = iVar6 == iVar5;
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar12);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar2 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *param_2 = uVar3;
    param_2[1] = plVar2;
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar2 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  uVar11 = *(longlong *)(param_1 + 0x30) + 1;
  *(ulonglong *)(param_1 + 0x30) = uVar11;
  if (uVar11 == 0xffffffffffffffff) {
    *param_3 = 1;
    goto LAB_14902b816;
  }
  uVar7 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))();
  if (uVar7 <= uVar11) {
    *param_3 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar2 = (longlong *)param_2[1];
    *param_2 = uVar3;
    param_2[1] = lVar4;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar2 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
        }
      }
    }
    goto LAB_14902b816;
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    (*(code *)**(undefined8 **)((longlong)plVar2 + (longlong)*(int *)(plVar2[1] + 4) + 8))();
  }
  iVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar3);
  if (iVar6 - 1U < 5) {
    *param_3 = 5;
  }
  else if (iVar6 == 7) {
    (**(code **)(*plVar2 + 0x88))(plVar2,&local_50,uVar3);
    plVar8 = local_50;
    FUN_14901fe1a(&local_68,"$type");
    iVar6 = (**(code **)(*plVar8 + 0x58))(plVar8,&local_68);
    local_68 = &PTR_FUN_14ba6d600;
    if (((local_60 != 0) && (local_58 == '\x01')) && (cef_string_utf16_clear(), local_60 != 0)) {
      FUN_1400020a8();
    }
    if (iVar6 == 5) {
      *param_3 = 5;
    }
    else {
      plVar8 = (longlong *)FUN_14001cc68(0x50,0x10);
      local_70 = local_50;
      if (local_50 != (longlong *)0x0) {
        (*(code *)**(undefined8 **)((longlong)local_50 + (longlong)*(int *)(local_50[1] + 4) + 8))()
        ;
      }
      local_68 = (undefined **)*param_2;
      local_60 = param_2[1];
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      FUN_1490430e0(plVar8,&local_68,&local_70);
      plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14ba6c920;
      plVar9[2] = (longlong)plVar8;
      if ((plVar8 != (longlong *)0x0) &&
         (((plVar8[1] == 0 || (plVar8[2] == 0)) || (*(int *)(plVar8[2] + 8) < 1)))) {
        if (plVar9 == (longlong *)0x0) {
          plVar8[1] = (longlong)plVar8;
          plVar10 = (longlong *)plVar8[2];
          if (plVar10 != (longlong *)0x0) {
LAB_14902bc34:
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
            plVar8[2] = (longlong)plVar9;
            if (plVar9 != (longlong *)0x0) goto LAB_14902bc67;
          }
        }
        else {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          plVar8[1] = (longlong)plVar8;
          if ((longlong *)plVar8[2] != plVar9) {
            LOCK();
            *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
            UNLOCK();
            plVar10 = (longlong *)plVar8[2];
            if (plVar10 != (longlong *)0x0) goto LAB_14902bc34;
            plVar8[2] = (longlong)plVar9;
          }
LAB_14902bc67:
          LOCK();
          plVar10 = plVar9 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
      (**(code **)(*plVar8 + 8))(plVar8,&local_80,param_3,param_4);
      plVar8 = local_78;
      if (&local_80 != param_2) {
        *param_2 = local_80;
        local_80 = 0;
        plVar10 = (longlong *)param_2[1];
        if (local_78 != plVar10) {
          local_78 = (longlong *)0x0;
          param_2[1] = plVar8;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar10 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
      plVar8 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_78 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_50 + (longlong)*(int *)(local_50[1] + 4) + 8) + 8))
                ();
    }
  }
  else if (iVar6 == 8) {
    plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
    (**(code **)(*plVar2 + 0x90))(plVar2,&local_50,uVar3);
    local_68 = (undefined **)*param_2;
    local_60 = param_2[1];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    FUN_1490480ea(plVar8,&local_68,&local_50);
    plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14ba6d760;
    plVar9[2] = (longlong)plVar8;
    if ((plVar8 != (longlong *)0x0) &&
       (((plVar8[1] == 0 || (plVar8[2] == 0)) || (*(int *)(plVar8[2] + 8) < 1)))) {
      if (plVar9 == (longlong *)0x0) {
        plVar8[1] = (longlong)plVar8;
        plVar10 = (longlong *)plVar8[2];
        if (plVar10 != (longlong *)0x0) {
LAB_14902b98b:
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))();
          }
          plVar8[2] = (longlong)plVar9;
          if (plVar9 != (longlong *)0x0) goto LAB_14902ba6f;
        }
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        plVar8[1] = (longlong)plVar8;
        if ((longlong *)plVar8[2] != plVar9) {
          LOCK();
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
          UNLOCK();
          plVar10 = (longlong *)plVar8[2];
          if (plVar10 != (longlong *)0x0) goto LAB_14902b98b;
          plVar8[2] = (longlong)plVar9;
        }
LAB_14902ba6f:
        LOCK();
        plVar10 = plVar9 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
    (**(code **)(*plVar8 + 8))(plVar8,&local_80,param_3,param_4);
    plVar8 = local_78;
    if (&local_80 != param_2) {
      *param_2 = local_80;
      local_80 = 0;
      plVar10 = (longlong *)param_2[1];
      if (local_78 != plVar10) {
        local_78 = (longlong *)0x0;
        param_2[1] = plVar8;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar10 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
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
    plVar8 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_78 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  else {
    *param_3 = 3;
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)plVar2 + (longlong)*(int *)(plVar2[1] + 4) + 8) + 8))();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  *param_4 = 0;
  param_4[1] = 0;
LAB_14902b816:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14902bd52 FUN_14902bd52 body=4205 status=ok
// SIG undefined FUN_14902bd52(void)

ulonglong FUN_14902bd52(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong ****pppplVar3;
  longlong ****pppplVar4;
  longlong *plVar5;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong ****pppplVar18;
  ushort *puVar19;
  undefined8 *puVar20;
  longlong ****pppplVar21;
  longlong unaff_R13;
  undefined7 uVar23;
  ulonglong uVar22;
  undefined8 uVar24;
  bool bVar25;
  double dVar26;
  undefined1 auStack_108 [32];
  longlong ***local_e8;
  longlong ***local_e0;
  longlong ***local_d8;
  longlong ***local_d0;
  longlong ***local_c8;
  undefined8 *local_c0;
  longlong ***local_b8;
  longlong ***local_b0;
  longlong ***local_a8;
  longlong ***local_a0;
  longlong ***local_98;
  longlong ***local_90;
  longlong local_88;
  char local_80;
  longlong ***local_78;
  int local_70;
  longlong ***local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  pppplVar3 = *(longlong *****)(param_1 + 0x28);
  pppplVar4 = *(longlong *****)(param_1 + 0x30);
  if (pppplVar3 != (longlong ****)0x0) {
    (*(code *)**(undefined8 **)
                ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
  }
  pppplVar21 = (longlong ****)*param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (pppplVar3 != (longlong ****)0x0) {
    (*(code *)**(undefined8 **)
                ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
  }
  local_c8 = (longlong ***)pppplVar21;
  local_c0 = param_2;
  if (param_3 == 0) {
LAB_14902be97:
    bVar7 = 0;
    uVar24 = param_4;
  }
  else {
    unaff_R13 = *(longlong *)(param_3 + 8);
    lVar13 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar13 + 8) == 0) {
      bVar25 = unaff_R13 != 0;
      if (unaff_R13 != lVar13 && bVar25) {
        do {
          unaff_R13 = *(longlong *)(unaff_R13 + 0x30);
          bVar25 = unaff_R13 != 0;
          if (unaff_R13 == lVar13) break;
        } while (unaff_R13 != 0);
      }
      if (!bVar25) goto LAB_14902be97;
    }
    else if ((*(ulonglong *)(unaff_R13 + 0x18) & *(ulonglong *)(lVar13 + 8)) == 0)
    goto LAB_14902be97;
    local_68 = (longlong ***)pppplVar3;
    if (pppplVar3 != (longlong ****)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
    }
    iVar10 = FUN_1443f9d7c(&local_68,pppplVar4);
    lVar13 = FUN_1443f9dfb(param_3,param_4,param_5,param_6);
    if (lVar13 == 0) {
      bVar7 = 1;
      uVar24 = 0;
    }
    else {
      *(bool *)lVar13 = iVar10 != 0;
      bVar7 = 1;
      uVar24 = 1;
    }
  }
  uVar23 = (undefined7)((ulonglong)unaff_R13 >> 8);
  if (pppplVar3 == (longlong ****)0x0) {
    uVar22 = CONCAT71(uVar23,1);
    if ((bVar7 & (byte)uVar24) != 0) goto LAB_14902beca;
  }
  else {
    (**(code **)(*(longlong *)
                  ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8) + 8))()
    ;
    uVar22 = CONCAT71(uVar23,1);
    if ((bVar7 & (byte)uVar24) != 0) goto LAB_14902beca;
    (*(code *)**(undefined8 **)
                ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
  }
  uVar22 = CONCAT71(uVar23,1);
  iVar10 = (*(code *)(*pppplVar3)[10])(pppplVar3,pppplVar4);
  if (iVar10 == 5) {
    pppplVar21 = &local_90;
    (*(code *)(*pppplVar3)[0xf])(pppplVar3,pppplVar21,pppplVar4);
    FUN_149021a64(pppplVar21,&local_68);
    pppplVar18 = &local_68;
    if (7 < local_50) {
      pppplVar18 = (longlong ****)local_68;
    }
    FUN_140056680(&local_78,pppplVar18);
    if (7 < local_50) {
      FUN_14600850e(&local_68,local_68);
    }
    local_58 = 0;
    local_50 = 7;
    local_68 = (longlong ***)((ulonglong)local_68 & 0xffffffffffff0000);
    local_90 = (longlong ***)&PTR_FUN_14ba6d600;
    if (((local_88 != 0) && (local_80 == '\x01')) && (cef_string_utf16_clear(), local_88 != 0)) {
      FUN_1400020a8();
    }
    uVar22 = CONCAT71((int7)((ulonglong)pppplVar18 >> 8),1);
    if (param_3 == 0) goto LAB_14902cb9d;
    lVar13 = *(longlong *)(param_3 + 8);
    lVar17 = FUN_144a49f24();
    if (*(ulonglong *)(lVar17 + 8) == 0) {
      bVar25 = lVar13 != 0;
      if (lVar13 != lVar17 && bVar25) {
        do {
          lVar13 = *(longlong *)(lVar13 + 0x30);
          bVar25 = lVar13 != 0;
          if (lVar13 == lVar17) break;
        } while (lVar13 != 0);
      }
      if (bVar25) goto LAB_14902c4cb;
LAB_14902ca81:
      lVar13 = *(longlong *)(param_3 + 8);
      lVar17 = FUN_144a63fc8();
      if (*(ulonglong *)(lVar17 + 8) != 0) {
        if ((*(ulonglong *)(lVar13 + 0x18) & *(ulonglong *)(lVar17 + 8)) == 0) goto LAB_14902cae1;
LAB_14902ca99:
        pppplVar21 = (longlong ****)local_78;
        if (local_70 == 0) {
          pppplVar21 = (longlong ****)&DAT_149dfb77a;
        }
        FUN_1446f470e(&local_68,pppplVar21,1);
        puVar20 = (undefined8 *)FUN_1443f9dfb(param_3,param_4,param_5,param_6);
        pppplVar21 = (longlong ****)(ulonglong)(puVar20 != (undefined8 *)0x0);
        if (puVar20 != (undefined8 *)0x0) {
          *puVar20 = local_68;
        }
        goto LAB_14902cb9a;
      }
      bVar25 = lVar13 != 0;
      if (lVar13 != lVar17 && bVar25) {
        do {
          lVar13 = *(longlong *)(lVar13 + 0x30);
          bVar25 = lVar13 != 0;
          if (lVar13 == lVar17) break;
        } while (lVar13 != 0);
      }
      if (bVar25) goto LAB_14902ca99;
LAB_14902cae1:
      lVar13 = *(longlong *)(param_3 + 8);
      lVar17 = FUN_144a4a07e();
      if (*(ulonglong *)(lVar17 + 8) == 0) {
        bVar25 = lVar13 != 0;
        if (lVar13 != lVar17 && bVar25) {
          do {
            lVar13 = *(longlong *)(lVar13 + 0x30);
            bVar25 = lVar13 != 0;
            if (lVar13 == lVar17) break;
          } while (lVar13 != 0);
        }
        if (bVar25) goto LAB_14902cb01;
      }
      else if ((*(ulonglong *)(lVar13 + 0x18) & *(ulonglong *)(lVar17 + 8)) != 0) {
LAB_14902cb01:
        FUN_140009b9a(&local_68,&local_78);
        local_e8 = (longlong ***)&local_68;
        uVar12 = FUN_1443fa057(param_3,param_4,param_5,param_6);
        pppplVar21 = (longlong ****)(ulonglong)uVar12;
        if ((longlong ****)local_68 != (longlong ****)0x0) {
          (*(code *)(*local_68)[2])();
        }
        goto LAB_14902cb9a;
      }
      lVar13 = *(longlong *)(param_3 + 8);
      lVar17 = FUN_14475a8dc();
      if (*(ulonglong *)(lVar17 + 8) == 0) {
        bVar25 = lVar13 != 0;
        if (lVar13 != lVar17 && bVar25) {
          do {
            lVar13 = *(longlong *)(lVar13 + 0x30);
            bVar25 = lVar13 != 0;
            if (lVar13 == lVar17) break;
          } while (lVar13 != 0);
        }
        if (bVar25) goto LAB_14902cc46;
LAB_14902ccf1:
        pppplVar21 = *(longlong *****)(param_3 + 8);
        pppplVar18 = (longlong ****)FUN_144a7add4();
        if (pppplVar18[1] == (longlong ***)0x0) {
          bVar25 = pppplVar21 != (longlong ****)0x0;
          if (pppplVar21 != pppplVar18 && bVar25) {
            do {
              pppplVar21 = (longlong ****)pppplVar21[6];
              bVar25 = pppplVar21 != (longlong ****)0x0;
              if (pppplVar21 == pppplVar18) break;
            } while (pppplVar21 != (longlong ****)0x0);
          }
          if (bVar25) goto LAB_14902cd09;
        }
        else if (((ulonglong)pppplVar21[3] & (ulonglong)pppplVar18[1]) != 0) {
LAB_14902cd09:
          iVar10 = FUN_1401e9588(*(undefined8 *)(param_3 + 0x78),&local_78,0);
          if ((iVar10 != -1) &&
             (lVar13 = FUN_1443f9dfb(param_3,param_4,param_5,param_6), lVar13 != 0)) {
            (**(code **)(**(longlong **)(param_3 + 0x70) + 0x1f8))
                      (*(longlong **)(param_3 + 0x70),lVar13,
                       *(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_3 + 0x78) + 0x40) + 8 +
                        (longlong)iVar10 * 0x10));
            goto LAB_14902cbdb;
          }
          goto LAB_14902cd79;
        }
      }
      else {
        if ((*(ulonglong *)(lVar13 + 0x18) & *(ulonglong *)(lVar17 + 8)) == 0) goto LAB_14902ccf1;
LAB_14902cc46:
        if ((*(longlong *)(param_3 + 0x70) != 0) &&
           (iVar10 = FUN_1401e9588(*(longlong *)(param_3 + 0x70),&local_78,0), iVar10 != -1)) {
          uVar24 = *(undefined8 *)
                    (*(longlong *)(*(longlong *)(param_3 + 0x70) + 0x40) + 8 +
                    (longlong)iVar10 * 0x10);
          puVar15 = (undefined1 *)FUN_1443f9dfb(param_3,param_4,param_5,param_6);
          if (puVar15 != (undefined1 *)0x0) {
            *puVar15 = (char)uVar24;
          }
          pppplVar21 = (longlong ****)(ulonglong)(puVar15 != (undefined1 *)0x0);
          uVar22 = 0;
          goto LAB_14902cb9d;
        }
LAB_14902cd79:
        uVar22 = 0;
        pppplVar21 = (longlong ****)0x0;
      }
    }
    else {
      if ((*(ulonglong *)(lVar13 + 0x18) & *(ulonglong *)(lVar17 + 8)) == 0) goto LAB_14902ca81;
LAB_14902c4cb:
      pppplVar18 = (longlong ****)FUN_1443f9dfb(param_3,param_4,param_5,param_6);
      pppplVar21 = (longlong ****)(ulonglong)(pppplVar18 != (longlong ****)0x0);
      if (pppplVar18 != &local_78 && pppplVar18 != (longlong ****)0x0) {
        *(int *)(pppplVar18 + 1) = local_70;
        if (local_70 != 0 || *(int *)((longlong)pppplVar18 + 0xc) != 0) {
          local_d0 = local_78;
          FUN_1446dd670(pppplVar18,local_70);
          pppplVar21 = (longlong ****)&DAT_00000001;
          if (local_70 != 0) {
            memcpy(*pppplVar18,local_d0,(longlong)local_70 * 2);
          }
          goto LAB_14902cb9a;
        }
        *(undefined4 *)((longlong)pppplVar18 + 0xc) = 0;
LAB_14902cbdb:
        pppplVar21 = (longlong ****)&DAT_00000001;
      }
LAB_14902cb9a:
      uVar22 = 0;
    }
LAB_14902cb9d:
    if ((longlong ****)local_78 != (longlong ****)0x0) {
      FUN_1400020a8();
    }
    if ((char)uVar22 != '\0') goto LAB_14902bfa7;
    if (pppplVar3 != (longlong ****)0x0) goto LAB_14902bfae;
    uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
    if (((ulonglong)pppplVar21 & 1) != 0) goto LAB_14902beca;
  }
  else {
LAB_14902bfa7:
    if (pppplVar3 != (longlong ****)0x0) {
      pppplVar21 = (longlong ****)0x0;
LAB_14902bfae:
      (**(code **)(*(longlong *)
                    ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8) + 8))
                ();
      uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
      if (((ulonglong)pppplVar21 & 1) != 0) goto LAB_14902beca;
      (*(code *)**(undefined8 **)
                  ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
    }
  }
  if (param_3 != 0) {
    uVar22 = *(ulonglong *)(param_3 + 8);
    uVar14 = FUN_14475a8dc();
    if (*(ulonglong *)(uVar14 + 8) == 0) {
      bVar25 = uVar22 != 0;
      if (uVar22 != uVar14 && bVar25) {
        do {
          uVar22 = *(ulonglong *)(uVar22 + 0x30);
          bVar25 = uVar22 != 0;
          if (uVar22 == uVar14) break;
        } while (uVar22 != 0);
      }
      if (bVar25) goto LAB_14902c00b;
      goto LAB_14902c09b;
    }
    if ((*(ulonglong *)(uVar22 + 0x18) & *(ulonglong *)(uVar14 + 8)) == 0) goto LAB_14902c09b;
LAB_14902c00b:
    if (pppplVar3 != (longlong ****)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
    }
    iVar10 = (*(code *)(*pppplVar3)[10])(pppplVar3,pppplVar4);
    if (iVar10 == 4) {
      dVar26 = (double)(*(code *)(*pppplVar3)[0xe])(pppplVar3,pppplVar4);
      uVar6 = (undefined1)(int)dVar26;
    }
    else if (iVar10 == 3) {
      uVar6 = (*(code *)(*pppplVar3)[0xd])(pppplVar3,pppplVar4);
    }
    else if (iVar10 == 2) {
      uVar6 = (*(code *)(*pppplVar3)[0xc])(pppplVar3,pppplVar4);
    }
    else {
      uVar6 = 0;
    }
    if (pppplVar3 != (longlong ****)0x0) {
      (**(code **)(*(longlong *)
                    ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8) + 8))
                ();
      puVar15 = (undefined1 *)FUN_1443f9dfb(param_3,param_4,param_5,param_6);
      if (puVar15 == (undefined1 *)0x0) goto LAB_14902c0a0;
      *puVar15 = uVar6;
      bVar25 = true;
      goto LAB_14902c0a2;
    }
    puVar15 = (undefined1 *)FUN_1443f9dfb(param_3,param_4,param_5,param_6);
    if (puVar15 == (undefined1 *)0x0) goto LAB_14902c0d9;
LAB_14902c2d1:
    *puVar15 = uVar6;
LAB_14902c2d4:
    uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
    goto LAB_14902beca;
  }
LAB_14902c09b:
  if (pppplVar3 != (longlong ****)0x0) {
LAB_14902c0a0:
    bVar25 = false;
LAB_14902c0a2:
    (**(code **)(*(longlong *)
                  ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8) + 8))()
    ;
    uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
    if (bVar25) goto LAB_14902beca;
    (*(code *)**(undefined8 **)
                ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
  }
LAB_14902c0d9:
  if (param_3 == 0) {
LAB_14902c183:
    if (pppplVar3 != (longlong ****)0x0) {
LAB_14902c188:
      bVar25 = false;
      goto LAB_14902c18a;
    }
LAB_14902c1c1:
    if (param_3 != 0) goto LAB_14902c1ca;
LAB_14902c316:
    if (pppplVar3 != (longlong ****)0x0) {
LAB_14902c31b:
      bVar25 = false;
      goto LAB_14902c31d;
    }
LAB_14902c354:
    if (param_3 != 0) goto LAB_14902c35d;
LAB_14902c628:
    if (pppplVar3 != (longlong ****)0x0) {
      bVar25 = false;
      goto LAB_14902c633;
    }
    local_e8 = (longlong ***)&local_90;
    local_90 = (longlong ***)0x0;
    local_e0 = (longlong ***)pppplVar4;
    cVar8 = FUN_1443f8cb3(param_3,param_4,param_5,param_6);
    uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
    if (cVar8 != '\0') goto LAB_14902beca;
    local_e8 = (longlong ***)&local_78;
    local_78 = (longlong ***)0x0;
    local_e0 = (longlong ***)pppplVar4;
    cVar8 = FUN_1443f8ebd(param_3,param_4,param_5,param_6);
    if (cVar8 != '\0') goto LAB_14902beca;
    local_e8 = (longlong ***)&local_98;
    local_98 = (longlong ***)0x0;
    local_e0 = (longlong ***)pppplVar4;
    cVar8 = FUN_1443f901a(param_3,param_4,param_5,param_6);
    if (cVar8 != '\0') goto LAB_14902beca;
    local_e8 = (longlong ***)&local_a0;
    local_a0 = (longlong ***)0x0;
    local_e0 = (longlong ***)pppplVar4;
    cVar8 = FUN_1443f9224(param_3,param_4,param_5,param_6);
    if (cVar8 != '\0') goto LAB_14902beca;
    local_e8 = (longlong ***)&local_a8;
    local_a8 = (longlong ***)0x0;
    local_e0 = (longlong ***)pppplVar4;
    cVar8 = FUN_1443f9448(param_3,param_4,param_5,param_6);
    if (cVar8 != '\0') goto LAB_14902beca;
    local_e8 = (longlong ***)&local_b0;
    local_b0 = (longlong ***)0x0;
    local_e0 = (longlong ***)pppplVar4;
    cVar8 = FUN_1443f9660(param_3,param_4,param_5,param_6);
    if (cVar8 != '\0') goto LAB_14902beca;
    local_b8 = (longlong ***)0x0;
  }
  else {
    uVar22 = *(ulonglong *)(param_3 + 8);
    uVar14 = FUN_14093f012();
    if (*(ulonglong *)(uVar14 + 8) == 0) {
      bVar25 = uVar22 != 0;
      if (uVar22 != uVar14 && bVar25) {
        do {
          uVar22 = *(ulonglong *)(uVar22 + 0x30);
          bVar25 = uVar22 != 0;
          if (uVar22 == uVar14) break;
        } while (uVar22 != 0);
      }
      if (!bVar25) goto LAB_14902c183;
    }
    else if ((*(ulonglong *)(uVar22 + 0x18) & *(ulonglong *)(uVar14 + 8)) == 0) goto LAB_14902c183;
    if (pppplVar3 != (longlong ****)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
    }
    iVar10 = (*(code *)(*pppplVar3)[10])(pppplVar3,pppplVar4);
    if (iVar10 == 4) {
      dVar26 = (double)(*(code *)(*pppplVar3)[0xe])(pppplVar3,pppplVar4);
      uVar6 = (undefined1)(int)dVar26;
    }
    else if (iVar10 == 3) {
      uVar6 = (*(code *)(*pppplVar3)[0xd])(pppplVar3,pppplVar4);
    }
    else if (iVar10 == 2) {
      uVar6 = (*(code *)(*pppplVar3)[0xc])(pppplVar3,pppplVar4);
    }
    else {
      uVar6 = 0;
    }
    if (pppplVar3 != (longlong ****)0x0) {
      (**(code **)(*(longlong *)
                    ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8) + 8))
                ();
      puVar15 = (undefined1 *)FUN_1443f9dfb(param_3,param_4,param_5,param_6);
      if (puVar15 == (undefined1 *)0x0) goto LAB_14902c188;
      *puVar15 = uVar6;
      bVar25 = true;
LAB_14902c18a:
      (**(code **)(*(longlong *)
                    ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8) + 8))
                ();
      uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
      if (bVar25) goto LAB_14902beca;
      (*(code *)**(undefined8 **)
                  ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
      goto LAB_14902c1c1;
    }
    puVar15 = (undefined1 *)FUN_1443f9dfb(param_3,param_4,param_5,param_6);
    if (puVar15 != (undefined1 *)0x0) goto LAB_14902c2d1;
LAB_14902c1ca:
    uVar22 = *(ulonglong *)(param_3 + 8);
    uVar14 = FUN_14093f0c0();
    if (*(ulonglong *)(uVar14 + 8) == 0) {
      bVar25 = uVar22 != 0;
      if (uVar22 != uVar14 && bVar25) {
        do {
          uVar22 = *(ulonglong *)(uVar22 + 0x30);
          bVar25 = uVar22 != 0;
          if (uVar22 == uVar14) break;
        } while (uVar22 != 0);
      }
      if ((bool)(bVar25 ^ 1U | param_3 == 0)) goto LAB_14902c316;
    }
    else if ((*(ulonglong *)(uVar22 + 0x18) & *(ulonglong *)(uVar14 + 8)) == 0) goto LAB_14902c316;
    if (pppplVar3 != (longlong ****)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
    }
    iVar10 = (*(code *)(*pppplVar3)[10])(pppplVar3,pppplVar4);
    if (iVar10 == 4) {
      dVar26 = (double)(*(code *)(*pppplVar3)[0xe])(pppplVar3,pppplVar4);
      uVar9 = (ushort)(int)dVar26;
    }
    else if (iVar10 == 3) {
      uVar9 = (*(code *)(*pppplVar3)[0xd])(pppplVar3,pppplVar4);
    }
    else if (iVar10 == 2) {
      bVar7 = (*(code *)(*pppplVar3)[0xc])(pppplVar3,pppplVar4);
      uVar9 = (ushort)bVar7;
    }
    else {
      uVar9 = 0;
    }
    if (pppplVar3 != (longlong ****)0x0) {
      (**(code **)(*(longlong *)
                    ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8) + 8))
                ();
      puVar19 = (ushort *)FUN_1443f9dfb(param_3,param_4,param_5,param_6);
      if (puVar19 == (ushort *)0x0) goto LAB_14902c31b;
      *puVar19 = uVar9;
      bVar25 = true;
LAB_14902c31d:
      (**(code **)(*(longlong *)
                    ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8) + 8))
                ();
      uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
      if (bVar25) goto LAB_14902beca;
      (*(code *)**(undefined8 **)
                  ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
      goto LAB_14902c354;
    }
    puVar19 = (ushort *)FUN_1443f9dfb(param_3,param_4,param_5,param_6);
    if (puVar19 != (ushort *)0x0) {
      *puVar19 = uVar9;
      goto LAB_14902c2d4;
    }
LAB_14902c35d:
    uVar22 = *(ulonglong *)(param_3 + 8);
    uVar14 = FUN_144a7452c();
    if (*(ulonglong *)(uVar14 + 8) == 0) {
      bVar25 = uVar22 != 0;
      if (uVar22 != uVar14 && bVar25) {
        do {
          uVar22 = *(ulonglong *)(uVar22 + 0x30);
          bVar25 = uVar22 != 0;
          if (uVar22 == uVar14) break;
        } while (uVar22 != 0);
      }
      if (!(bool)(bVar25 ^ 1U | param_3 == 0)) goto LAB_14902c37d;
      goto LAB_14902c628;
    }
    if ((*(ulonglong *)(uVar22 + 0x18) & *(ulonglong *)(uVar14 + 8)) == 0) goto LAB_14902c628;
LAB_14902c37d:
    local_68 = (longlong ***)pppplVar3;
    if (pppplVar3 != (longlong ****)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
    }
    uVar11 = FUN_1443f9d7c(&local_68,pppplVar4);
    puVar16 = (undefined4 *)FUN_1443f9dfb(param_3,param_4,param_5,param_6);
    if (puVar16 == (undefined4 *)0x0) goto LAB_14902c628;
    *puVar16 = uVar11;
    bVar25 = true;
    if (pppplVar3 == (longlong ****)0x0) goto LAB_14902c2d4;
LAB_14902c633:
    (**(code **)(*(longlong *)
                  ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8) + 8))()
    ;
    uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
    if (bVar25) goto LAB_14902beca;
    local_90 = (longlong ***)pppplVar3;
    (*(code *)**(undefined8 **)
                ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
    local_e8 = (longlong ***)&local_90;
    local_e0 = (longlong ***)pppplVar4;
    cVar8 = FUN_1443f8cb3(param_3,param_4,param_5,param_6);
    if (cVar8 != '\0') goto LAB_14902beca;
    local_78 = (longlong ***)pppplVar3;
    (*(code *)**(undefined8 **)
                ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
    local_e8 = (longlong ***)&local_78;
    local_e0 = (longlong ***)pppplVar4;
    cVar8 = FUN_1443f8ebd(param_3,param_4,param_5,param_6);
    if (cVar8 != '\0') goto LAB_14902beca;
    local_98 = (longlong ***)pppplVar3;
    (*(code *)**(undefined8 **)
                ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
    local_e8 = (longlong ***)&local_98;
    local_e0 = (longlong ***)pppplVar4;
    cVar8 = FUN_1443f901a(param_3,param_4,param_5,param_6);
    if (cVar8 != '\0') goto LAB_14902beca;
    local_a0 = (longlong ***)pppplVar3;
    (*(code *)**(undefined8 **)
                ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
    local_e8 = (longlong ***)&local_a0;
    local_e0 = (longlong ***)pppplVar4;
    cVar8 = FUN_1443f9224(param_3,param_4,param_5,param_6);
    if (cVar8 != '\0') goto LAB_14902beca;
    local_a8 = (longlong ***)pppplVar3;
    (*(code *)**(undefined8 **)
                ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
    local_e8 = (longlong ***)&local_a8;
    local_e0 = (longlong ***)pppplVar4;
    cVar8 = FUN_1443f9448(param_3,param_4,param_5,param_6);
    if (cVar8 != '\0') goto LAB_14902beca;
    local_b0 = (longlong ***)pppplVar3;
    (*(code *)**(undefined8 **)
                ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
    local_e8 = (longlong ***)&local_b0;
    local_e0 = (longlong ***)pppplVar4;
    cVar8 = FUN_1443f9660(param_3,param_4,param_5,param_6);
    if (cVar8 != '\0') goto LAB_14902beca;
    local_b8 = (longlong ***)pppplVar3;
    (*(code *)**(undefined8 **)
                ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8))();
  }
  local_68 = local_c8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_e0 = (longlong ***)&local_b8;
  local_e8 = (longlong ***)CONCAT44(local_e8._4_4_,param_6);
  local_d8 = (longlong ***)pppplVar4;
  local_60 = plVar5;
  uVar12 = FUN_1443f987e(&local_68,param_3,param_4,param_5);
  uVar22 = (ulonglong)uVar12;
LAB_14902beca:
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
  puVar20 = local_c0;
  if (pppplVar3 != (longlong ****)0x0) {
    (**(code **)(*(longlong *)
                  ((longlong)pppplVar3 + (longlong)*(int *)((longlong)pppplVar3[1] + 4) + 8) + 8))()
    ;
  }
  plVar5 = (longlong *)puVar20[1];
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
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar22 & 0xffffffff;
}



// FUNCTION 14902cdc0 FUN_14902cdc0 body=1968 status=ok
// SIG undefined FUN_14902cdc0(void)

longlong * FUN_14902cdc0(longlong param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined *****pppppuVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined **local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined ****local_68;
  longlong local_60;
  char local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_14902ce66:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_14902ce66;
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar14 = iVar7 == iVar6;
      if (bVar14) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar14);
    lVar3 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar2 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *param_2 = lVar3;
    param_2[1] = (longlong)plVar2;
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar2 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  uVar8 = *(longlong *)(param_1 + 0x30) + 1;
  *(ulonglong *)(param_1 + 0x30) = uVar8;
  if (uVar8 == 0xffffffffffffffff) {
    *param_3 = 7;
    goto LAB_14902cf05;
  }
  if ((ulonglong)
      ((*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) * -0x5555555555555555)
      <= uVar8) {
    *param_3 = 6;
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar2 = (longlong *)param_2[1];
    *param_2 = lVar3;
    param_2[1] = lVar4;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar2 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
        }
      }
    }
    goto LAB_14902cf05;
  }
  local_a0 = &PTR_FUN_14ba6d600;
  local_98 = 0;
  local_90 = '\0';
  puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x38) + 8 + uVar8 * 0x18);
  uVar13 = 0;
  uVar11 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    uVar11 = *puVar5;
    uVar13 = puVar5[1];
  }
  FUN_149048250(&local_a0,uVar11,uVar13,1);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    (*(code *)**(undefined8 **)((longlong)plVar2 + (longlong)*(int *)(plVar2[1] + 4) + 8))();
  }
  iVar7 = (**(code **)(*plVar2 + 0x58))(plVar2,&local_a0);
  if (iVar7 - 1U < 5) {
    *param_3 = 5;
  }
  else if (iVar7 == 7) {
    (**(code **)(*plVar2 + 0x90))(plVar2,&local_70,&local_a0);
    plVar9 = local_70;
    FUN_14901fe1a(&local_68,"$type");
    iVar7 = (**(code **)(*plVar9 + 0x58))(plVar9,&local_68);
    local_68 = (undefined ****)&PTR_FUN_14ba6d600;
    if (((local_60 != 0) && (local_58 == '\x01')) && (cef_string_utf16_clear(), local_60 != 0)) {
      FUN_1400020a8();
    }
    if (iVar7 == 5) {
      *param_3 = 5;
    }
    else {
      plVar9 = (longlong *)FUN_14001cc68(0x50,0x10);
      local_78 = local_70;
      if (local_70 != (longlong *)0x0) {
        (*(code *)**(undefined8 **)((longlong)local_70 + (longlong)*(int *)(local_70[1] + 4) + 8))()
        ;
      }
      local_68 = (undefined ****)*param_2;
      local_60 = param_2[1];
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      FUN_1490430e0(plVar9,&local_68,&local_78);
      local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
      local_a8[1] = (longlong)&DAT_100000001;
      *local_a8 = (longlong)&PTR_FUN_14ba6c920;
      local_a8[2] = (longlong)plVar9;
      if ((plVar9 != (longlong *)0x0) &&
         (((plVar9[1] == 0 || (plVar9[2] == 0)) || (*(int *)(plVar9[2] + 8) < 1)))) {
        if (local_a8 == (longlong *)0x0) {
          plVar9[1] = (longlong)plVar9;
          plVar10 = (longlong *)plVar9[2];
          if (plVar10 != (longlong *)0x0) {
LAB_14902d4a0:
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
            plVar9[2] = (longlong)local_a8;
            if (local_a8 != (longlong *)0x0) goto LAB_14902d508;
          }
        }
        else {
          LOCK();
          *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
          UNLOCK();
          plVar9[1] = (longlong)plVar9;
          if ((longlong *)plVar9[2] != local_a8) {
            LOCK();
            *(int *)((longlong)local_a8 + 0xc) = *(int *)((longlong)local_a8 + 0xc) + 1;
            UNLOCK();
            plVar10 = (longlong *)plVar9[2];
            if (plVar10 != (longlong *)0x0) goto LAB_14902d4a0;
            plVar9[2] = (longlong)local_a8;
          }
LAB_14902d508:
          LOCK();
          plVar10 = local_a8 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar1 = (int *)((longlong)local_a8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_a8 + 0x10))();
            }
          }
        }
      }
      (**(code **)(*plVar9 + 8))(plVar9,&local_88,param_3,param_4);
      plVar9 = local_80;
      if (&local_88 != param_2) {
        *param_2 = local_88;
        local_88 = 0;
        plVar10 = (longlong *)param_2[1];
        if (local_80 != plVar10) {
          local_80 = (longlong *)0x0;
          param_2[1] = (longlong)plVar9;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar10 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
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
      plVar9 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_80 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_a8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_a8)();
          LOCK();
          piVar1 = (int *)((longlong)local_a8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a8 + 0x10))();
          }
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_70 + (longlong)*(int *)(local_70[1] + 4) + 8) + 8))
                ();
    }
  }
  else if (iVar7 == 8) {
    plVar9 = (longlong *)FUN_14001cc68(0x38,0x10);
    (**(code **)(*plVar2 + 0x98))(plVar2,&local_70,&local_a0);
    local_68 = (undefined ****)*param_2;
    local_60 = param_2[1];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    FUN_1490480ea(plVar9,&local_68,&local_70);
    local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
    local_a8[1] = (longlong)&DAT_100000001;
    *local_a8 = (longlong)&PTR_FUN_14ba6d760;
    local_a8[2] = (longlong)plVar9;
    if ((plVar9 != (longlong *)0x0) &&
       (((plVar9[1] == 0 || (plVar9[2] == 0)) || (*(int *)(plVar9[2] + 8) < 1)))) {
      if (local_a8 == (longlong *)0x0) {
        plVar9[1] = (longlong)plVar9;
        plVar10 = (longlong *)plVar9[2];
        if (plVar10 != (longlong *)0x0) {
LAB_14902d449:
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))();
          }
          plVar9[2] = (longlong)local_a8;
          if (local_a8 != (longlong *)0x0) goto LAB_14902d4ce;
        }
      }
      else {
        LOCK();
        *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
        UNLOCK();
        plVar9[1] = (longlong)plVar9;
        if ((longlong *)plVar9[2] != local_a8) {
          LOCK();
          *(int *)((longlong)local_a8 + 0xc) = *(int *)((longlong)local_a8 + 0xc) + 1;
          UNLOCK();
          plVar10 = (longlong *)plVar9[2];
          if (plVar10 != (longlong *)0x0) goto LAB_14902d449;
          plVar9[2] = (longlong)local_a8;
        }
LAB_14902d4ce:
        LOCK();
        plVar10 = local_a8 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)local_a8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a8 + 0x10))();
          }
        }
      }
    }
    (**(code **)(*plVar9 + 8))(plVar9,&local_88,param_3,param_4);
    plVar9 = local_80;
    if (&local_88 != param_2) {
      *param_2 = local_88;
      local_88 = 0;
      plVar10 = (longlong *)param_2[1];
      if (local_80 != plVar10) {
        local_80 = (longlong *)0x0;
        param_2[1] = (longlong)plVar9;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar10 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
    plVar9 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_80 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_a8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_a8)();
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_a8 + 0x10))();
        }
      }
    }
  }
  else {
    *param_3 = 3;
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)plVar2 + (longlong)*(int *)(plVar2[1] + 4) + 8) + 8))();
  }
  local_a0 = &PTR_FUN_14ba6d600;
  if (local_98 != 0) {
    if ((local_90 == '\x01') && (cef_string_utf16_clear(), local_98 != 0)) {
      FUN_1400020a8();
    }
    local_98 = 0;
    local_90 = '\0';
  }
  FUN_149021a64(*(longlong *)(param_1 + 0x30) * 0x18 + *(longlong *)(param_1 + 0x38),&local_68);
  pppppuVar12 = &local_68;
  if (7 < local_50) {
    pppppuVar12 = (undefined *****)local_68;
  }
  FUN_14020fad6(param_4,pppppuVar12);
  if (7 < local_50) {
    FUN_14600850e(&local_68,local_68);
  }
LAB_14902cf05:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14902d574 FUN_14902d574 body=5974 status=ok
// SIG undefined FUN_14902d574(void)

ulonglong FUN_14902d574(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined *****pppppuVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined ***pppuVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  ushort *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined7 uVar23;
  undefined ******ppppppuVar24;
  ulonglong uVar25;
  bool bVar26;
  double dVar27;
  undefined1 auStack_238 [32];
  undefined *****local_218;
  undefined *****local_210;
  undefined ***local_208;
  undefined8 local_200;
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined **local_1e8;
  undefined8 *local_1e0;
  char local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined ****local_1c0;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined ****local_1a0;
  undefined ****local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined ****local_180;
  undefined ****local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined ****local_160;
  undefined ****local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined ****local_140;
  undefined ****local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined ****local_120;
  undefined ****local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined ****local_100;
  undefined **local_f8;
  undefined8 *local_f0;
  char local_e8;
  undefined **local_e0;
  undefined8 *local_d8;
  char local_d0;
  undefined **local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined **local_b0;
  longlong local_a8;
  char local_a0;
  undefined **local_98;
  undefined8 *local_90;
  char local_88;
  undefined ****local_80;
  undefined8 *local_78;
  char local_70;
  undefined *****local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1e8 = &PTR_FUN_14ba6d600;
  local_1e0 = (undefined8 *)0x0;
  local_1d8 = '\0';
  puVar14 = *(undefined8 **)
             (*(longlong *)(param_1 + 0x38) + 8 + *(longlong *)(param_1 + 0x30) * 0x18);
  uVar19 = 0;
  uVar18 = 0;
  if (puVar14 != (undefined8 *)0x0) {
    uVar18 = *puVar14;
    uVar19 = puVar14[1];
  }
  uVar23 = (undefined7)((ulonglong)param_4 >> 8);
  FUN_149048250(&local_1e8,uVar18,uVar19,CONCAT71(uVar23,1));
  pppppuVar3 = *(undefined ******)(param_1 + 0x28);
  if (pppppuVar3 != (undefined *****)0x0) {
    (*(code *)**(undefined8 **)
                ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
  }
  uVar18 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_98 = &PTR_FUN_14ba6d600;
  local_90 = (undefined8 *)0x0;
  local_88 = '\0';
  uVar22 = 0;
  uVar19 = 0;
  if (local_1e0 != (undefined8 *)0x0) {
    uVar19 = *local_1e0;
    uVar22 = local_1e0[1];
  }
  FUN_149048250(&local_98,uVar19,uVar22,1);
  if (pppppuVar3 != (undefined *****)0x0) {
    (*(code *)**(undefined8 **)
                ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
  }
  local_1f0 = uVar18;
  if (param_3 == 0) {
LAB_14902d6a9:
    bVar7 = 0;
  }
  else {
    lVar21 = *(longlong *)(param_3 + 8);
    lVar12 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar12 + 8) == 0) {
      bVar26 = lVar21 != 0;
      if (lVar21 != lVar12 && bVar26) {
        do {
          lVar21 = *(longlong *)(lVar21 + 0x30);
          bVar26 = lVar21 != 0;
          if (lVar21 == lVar12) break;
        } while (lVar21 != 0);
      }
      if (!bVar26) goto LAB_14902d6a9;
    }
    else if ((*(ulonglong *)(lVar21 + 0x18) & *(ulonglong *)(lVar12 + 8)) == 0) goto LAB_14902d6a9;
    local_68 = (undefined *****)&PTR_FUN_14ba6d600;
    local_60 = 0;
    local_58 = local_58 & 0xffffffffffffff00;
    uVar19 = 0;
    uVar18 = 0;
    if (local_90 != (undefined8 *)0x0) {
      uVar18 = *local_90;
      uVar19 = local_90[1];
    }
    bVar7 = 1;
    FUN_149048250(&local_68,uVar18,uVar19,1);
    local_80 = (undefined ****)pppppuVar3;
    if (pppppuVar3 != (undefined *****)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
    }
    iVar9 = FUN_1443fb695(&local_80,&local_68);
    lVar21 = FUN_1443f9dfb(param_3,param_4,param_5,param_6);
    if (lVar21 == 0) {
      uVar18 = 0;
    }
    else {
      *(bool *)lVar21 = iVar9 != 0;
      bVar7 = 1;
      uVar18 = 1;
    }
  }
  if (pppppuVar3 != (undefined *****)0x0) {
    (**(code **)(*(longlong *)
                  ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8) + 8))
              ();
  }
  local_98 = &PTR_FUN_14ba6d600;
  if (local_90 != (undefined8 *)0x0) {
    if ((local_88 == '\x01') && (cef_string_utf16_clear(), local_90 != (undefined8 *)0x0)) {
      FUN_1400020a8();
    }
    local_90 = (undefined8 *)0x0;
    local_88 = '\0';
  }
  uVar25 = CONCAT71(uVar23,1);
  local_200 = param_4;
  if ((bVar7 & (byte)uVar18) != 0) goto LAB_14902d724;
  local_b0 = &PTR_FUN_14ba6d600;
  local_a8 = 0;
  local_a0 = '\0';
  uVar19 = 0;
  uVar18 = 0;
  if (local_1e0 != (undefined8 *)0x0) {
    uVar18 = *local_1e0;
    uVar19 = local_1e0[1];
  }
  FUN_149048250(&local_b0,uVar18,uVar19,1);
  if (pppppuVar3 != (undefined *****)0x0) {
    (*(code *)**(undefined8 **)
                ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
  }
  iVar9 = (*(code *)(*pppppuVar3)[0xb])(pppppuVar3,&local_b0);
  if (iVar9 == 5) {
    (*(code *)(*pppppuVar3)[0x10])(pppppuVar3,&local_80,&local_b0);
    FUN_149021a64(&local_80,&local_68);
    ppppppuVar24 = &local_68;
    if (7 < local_50) {
      ppppppuVar24 = (undefined ******)local_68;
    }
    FUN_140056680(&local_c8,ppppppuVar24);
    if (7 < local_50) {
      FUN_14600850e(&local_68,local_68);
    }
    local_58 = 0;
    local_50 = 7;
    local_68 = (undefined *****)((ulonglong)local_68 & 0xffffffffffff0000);
    local_80 = (undefined ****)&PTR_FUN_14ba6d600;
    if (((local_78 != (undefined8 *)0x0) && (local_70 == '\x01')) &&
       (cef_string_utf16_clear(), local_78 != (undefined8 *)0x0)) {
      FUN_1400020a8();
    }
    uVar25 = CONCAT71((int7)((ulonglong)&local_80 >> 8),1);
    if (param_3 == 0) goto LAB_14902e5eb;
    lVar21 = *(longlong *)(param_3 + 8);
    lVar12 = FUN_144a49f24();
    if (*(ulonglong *)(lVar12 + 8) == 0) {
      bVar26 = lVar21 != 0;
      if (lVar21 != lVar12 && bVar26) {
        do {
          lVar21 = *(longlong *)(lVar21 + 0x30);
          bVar26 = lVar21 != 0;
          if (lVar21 == lVar12) break;
        } while (lVar21 != 0);
      }
      if (bVar26) goto LAB_14902e32d;
LAB_14902e4cc:
      lVar21 = *(longlong *)(param_3 + 8);
      lVar12 = FUN_144a63fc8();
      uVar18 = local_200;
      if (*(ulonglong *)(lVar12 + 8) != 0) {
        if ((*(ulonglong *)(lVar21 + 0x18) & *(ulonglong *)(lVar12 + 8)) == 0) goto LAB_14902e52c;
LAB_14902e4e4:
        ppuVar20 = local_c8;
        if ((int)local_c0 == 0) {
          ppuVar20 = (undefined **)&DAT_149dfb77a;
        }
        FUN_1446f470e(&local_68,ppuVar20,1);
        puVar14 = (undefined8 *)FUN_1443f9dfb(param_3,uVar18,param_5,param_6);
        ppppppuVar24 = (undefined ******)(ulonglong)(puVar14 != (undefined8 *)0x0);
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = local_68;
        }
        goto LAB_14902e5e8;
      }
      bVar26 = lVar21 != 0;
      if (lVar21 != lVar12 && bVar26) {
        do {
          lVar21 = *(longlong *)(lVar21 + 0x30);
          bVar26 = lVar21 != 0;
          if (lVar21 == lVar12) break;
        } while (lVar21 != 0);
      }
      if (bVar26) goto LAB_14902e4e4;
LAB_14902e52c:
      lVar21 = *(longlong *)(param_3 + 8);
      lVar12 = FUN_144a4a07e();
      if (*(ulonglong *)(lVar12 + 8) == 0) {
        bVar26 = lVar21 != 0;
        if (lVar21 != lVar12 && bVar26) {
          do {
            lVar21 = *(longlong *)(lVar21 + 0x30);
            bVar26 = lVar21 != 0;
            if (lVar21 == lVar12) break;
          } while (lVar21 != 0);
        }
        if (bVar26) goto LAB_14902e54c;
      }
      else if ((*(ulonglong *)(lVar21 + 0x18) & *(ulonglong *)(lVar12 + 8)) != 0) {
LAB_14902e54c:
        FUN_140009b9a(&local_68,&local_c8);
        local_218 = (undefined *****)&local_68;
        uVar10 = FUN_1443fa057(param_3,local_200,param_5,param_6);
        ppppppuVar24 = (undefined ******)(ulonglong)uVar10;
        if ((undefined ******)local_68 != (undefined ******)0x0) {
          (*(code *)(*local_68)[2])();
        }
        goto LAB_14902e5e8;
      }
      lVar21 = *(longlong *)(param_3 + 8);
      lVar12 = FUN_14475a8dc();
      if (*(ulonglong *)(lVar12 + 8) == 0) {
        bVar26 = lVar21 != 0;
        if (lVar21 != lVar12 && bVar26) {
          do {
            lVar21 = *(longlong *)(lVar21 + 0x30);
            bVar26 = lVar21 != 0;
            if (lVar21 == lVar12) break;
          } while (lVar21 != 0);
        }
        if (bVar26) goto LAB_14902e67a;
LAB_14902e715:
        lVar21 = *(longlong *)(param_3 + 8);
        lVar12 = FUN_144a7add4();
        if (*(ulonglong *)(lVar12 + 8) != 0) {
          if ((*(ulonglong *)(lVar21 + 0x18) & *(ulonglong *)(lVar12 + 8)) == 0) goto LAB_14902e5eb;
LAB_14902e731:
          iVar9 = FUN_1401e9588(*(undefined8 *)(param_3 + 0x78),&local_c8,0);
          if (iVar9 != -1) {
            lVar21 = FUN_1443f9dfb(param_3,local_200,param_5,param_6);
            if (lVar21 != 0) {
              (**(code **)(**(longlong **)(param_3 + 0x70) + 0x1f8))
                        (*(longlong **)(param_3 + 0x70),lVar21,
                         *(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_3 + 0x78) + 0x40) + 8 +
                          (longlong)iVar9 * 0x10));
              goto LAB_14902e613;
            }
          }
          goto LAB_14902e7a4;
        }
        bVar26 = lVar21 != 0;
        if (lVar21 != lVar12 && bVar26) {
          do {
            lVar21 = *(longlong *)(lVar21 + 0x30);
            bVar26 = lVar21 != 0;
            if (lVar21 == lVar12) break;
          } while (lVar21 != 0);
        }
        if (bVar26) goto LAB_14902e731;
      }
      else {
        if ((*(ulonglong *)(lVar21 + 0x18) & *(ulonglong *)(lVar12 + 8)) == 0) goto LAB_14902e715;
LAB_14902e67a:
        if ((*(longlong *)(param_3 + 0x70) != 0) &&
           (iVar9 = FUN_1401e9588(*(longlong *)(param_3 + 0x70),&local_c8,0), iVar9 != -1)) {
          uVar18 = *(undefined8 *)
                    (*(longlong *)(*(longlong *)(param_3 + 0x70) + 0x40) + 8 +
                    (longlong)iVar9 * 0x10);
          puVar15 = (undefined1 *)FUN_1443f9dfb(param_3,local_200,param_5,param_6);
          if (puVar15 != (undefined1 *)0x0) {
            *puVar15 = (char)uVar18;
            goto LAB_14902e613;
          }
        }
LAB_14902e7a4:
        uVar25 = 0;
        ppppppuVar24 = (undefined ******)0x0;
      }
    }
    else {
      if ((*(ulonglong *)(lVar21 + 0x18) & *(ulonglong *)(lVar12 + 8)) == 0) goto LAB_14902e4cc;
LAB_14902e32d:
      pppuVar13 = (undefined ***)FUN_1443f9dfb(param_3,local_200,param_5,param_6);
      ppppppuVar24 = (undefined ******)(ulonglong)(pppuVar13 != (undefined ***)0x0);
      if (pppuVar13 != &local_c8 && pppuVar13 != (undefined ***)0x0) {
        iVar9 = (int)local_c0;
        lVar21 = (longlong)(int)local_c0;
        *(int *)(pppuVar13 + 1) = (int)local_c0;
        if ((int)local_c0 != 0 || *(int *)((longlong)pppuVar13 + 0xc) != 0) {
          local_1f8 = local_c8;
          FUN_1446dd670(pppuVar13,(ulonglong)local_c0 & 0xffffffff);
          ppppppuVar24 = (undefined ******)&DAT_00000001;
          if (iVar9 != 0) {
            memcpy(*pppuVar13,local_1f8,lVar21 * 2);
          }
          goto LAB_14902e5e8;
        }
        *(undefined4 *)((longlong)pppuVar13 + 0xc) = 0;
LAB_14902e613:
        ppppppuVar24 = (undefined ******)&DAT_00000001;
      }
LAB_14902e5e8:
      uVar25 = 0;
    }
LAB_14902e5eb:
    if (local_c8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if ((char)uVar25 != '\0') goto LAB_14902d956;
  }
  else {
LAB_14902d956:
    ppppppuVar24 = (undefined ******)0x0;
  }
  if (pppppuVar3 != (undefined *****)0x0) {
    (**(code **)(*(longlong *)
                  ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8) + 8))
              ();
  }
  local_b0 = &PTR_FUN_14ba6d600;
  if (local_a8 != 0) {
    if ((local_a0 == '\x01') && (cef_string_utf16_clear(), local_a8 != 0)) {
      FUN_1400020a8();
    }
    local_a8 = 0;
    local_a0 = '\0';
  }
  uVar25 = CONCAT71((int7)(uVar25 >> 8),1);
  if (((ulonglong)ppppppuVar24 & 1) != 0) goto LAB_14902d724;
  local_80 = (undefined ****)&PTR_FUN_14ba6d600;
  local_78 = (undefined8 *)0x0;
  local_70 = '\0';
  uVar19 = 0;
  uVar18 = 0;
  if (local_1e0 != (undefined8 *)0x0) {
    uVar18 = *local_1e0;
    uVar19 = local_1e0[1];
  }
  FUN_149048250(&local_80,uVar18,uVar19,1);
  uVar18 = local_200;
  if (pppppuVar3 != (undefined *****)0x0) {
    (*(code *)**(undefined8 **)
                ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
  }
  if (param_3 == 0) {
LAB_14902da54:
    bVar26 = false;
  }
  else {
    lVar21 = *(longlong *)(param_3 + 8);
    lVar12 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar12 + 8) == 0) {
      bVar26 = lVar21 != 0;
      if (lVar21 != lVar12 && bVar26) {
        do {
          lVar21 = *(longlong *)(lVar21 + 0x30);
          bVar26 = lVar21 != 0;
          if (lVar21 == lVar12) break;
        } while (lVar21 != 0);
      }
      if (bVar26) goto LAB_14902e3f4;
      goto LAB_14902da54;
    }
    if ((*(ulonglong *)(lVar21 + 0x18) & *(ulonglong *)(lVar12 + 8)) == 0) goto LAB_14902da54;
LAB_14902e3f4:
    local_68 = (undefined *****)&PTR_FUN_14ba6d600;
    local_60 = 0;
    local_58 = local_58 & 0xffffffffffffff00;
    uVar22 = 0;
    uVar19 = 0;
    if (local_78 != (undefined8 *)0x0) {
      uVar19 = *local_78;
      uVar22 = local_78[1];
    }
    FUN_149048250(&local_68,uVar19,uVar22,1);
    if (pppppuVar3 != (undefined *****)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
    }
    iVar9 = (*(code *)(*pppppuVar3)[0xb])(pppppuVar3,&local_68);
    if (iVar9 == 4) {
      dVar27 = (double)(*(code *)(*pppppuVar3)[0xf])(pppppuVar3,&local_68);
      uVar6 = (undefined1)(int)dVar27;
    }
    else if (iVar9 == 3) {
      uVar6 = (*(code *)(*pppppuVar3)[0xe])(pppppuVar3,&local_68);
    }
    else if (iVar9 == 2) {
      uVar6 = (*(code *)(*pppppuVar3)[0xd])(pppppuVar3,&local_68);
    }
    else {
      uVar6 = 0;
    }
    if (pppppuVar3 != (undefined *****)0x0) {
      (**(code **)(*(longlong *)
                    ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8) + 8
                  ))();
    }
    local_68 = (undefined *****)&PTR_FUN_14ba6d600;
    if (local_60 != 0) {
      if (((char)local_58 == '\x01') && (cef_string_utf16_clear(), local_60 != 0)) {
        FUN_1400020a8();
      }
      local_60 = 0;
      local_58 = local_58 & 0xffffffffffffff00;
    }
    puVar15 = (undefined1 *)FUN_1443f9dfb(param_3,uVar18,param_5,param_6);
    if (puVar15 == (undefined1 *)0x0) goto LAB_14902da54;
    *puVar15 = uVar6;
    bVar26 = true;
  }
  if (pppppuVar3 != (undefined *****)0x0) {
    (**(code **)(*(longlong *)
                  ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8) + 8))
              ();
  }
  local_80 = (undefined ****)&PTR_FUN_14ba6d600;
  if (local_78 != (undefined8 *)0x0) {
    if ((local_70 == '\x01') && (cef_string_utf16_clear(), local_78 != (undefined8 *)0x0)) {
      FUN_1400020a8();
    }
    local_78 = (undefined8 *)0x0;
    local_70 = '\0';
  }
  uVar23 = (undefined7)((ulonglong)uVar18 >> 8);
  uVar25 = CONCAT71(uVar23,1);
  if (bVar26) goto LAB_14902d724;
  local_c8 = &PTR_FUN_14ba6d600;
  local_c0 = (undefined8 *)0x0;
  local_b8 = '\0';
  uVar19 = 0;
  uVar18 = 0;
  if (local_1e0 != (undefined8 *)0x0) {
    uVar18 = *local_1e0;
    uVar19 = local_1e0[1];
  }
  FUN_149048250(&local_c8,uVar18,uVar19,1);
  if (pppppuVar3 != (undefined *****)0x0) {
    (*(code *)**(undefined8 **)
                ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
  }
  if (param_3 == 0) {
LAB_14902db4b:
    bVar26 = false;
  }
  else {
    lVar21 = *(longlong *)(param_3 + 8);
    lVar12 = FUN_14093f012();
    if (*(ulonglong *)(lVar12 + 8) == 0) {
      bVar26 = lVar21 != 0;
      if (lVar21 != lVar12 && bVar26) {
        do {
          lVar21 = *(longlong *)(lVar21 + 0x30);
          bVar26 = lVar21 != 0;
          if (lVar21 == lVar12) break;
        } while (lVar21 != 0);
      }
      if (bVar26) goto LAB_14902e7dd;
      goto LAB_14902db4b;
    }
    if ((*(ulonglong *)(lVar21 + 0x18) & *(ulonglong *)(lVar12 + 8)) == 0) goto LAB_14902db4b;
LAB_14902e7dd:
    local_68 = (undefined *****)&PTR_FUN_14ba6d600;
    local_60 = 0;
    local_58 = local_58 & 0xffffffffffffff00;
    uVar19 = 0;
    uVar18 = 0;
    if (local_c0 != (undefined8 *)0x0) {
      uVar18 = *local_c0;
      uVar19 = local_c0[1];
    }
    FUN_149048250(&local_68,uVar18,uVar19,1);
    if (pppppuVar3 != (undefined *****)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
    }
    iVar9 = (*(code *)(*pppppuVar3)[0xb])(pppppuVar3,&local_68);
    if (iVar9 == 4) {
      dVar27 = (double)(*(code *)(*pppppuVar3)[0xf])(pppppuVar3,&local_68);
      uVar6 = (undefined1)(int)dVar27;
    }
    else if (iVar9 == 3) {
      uVar6 = (*(code *)(*pppppuVar3)[0xe])(pppppuVar3,&local_68);
    }
    else if (iVar9 == 2) {
      uVar6 = (*(code *)(*pppppuVar3)[0xd])(pppppuVar3,&local_68);
    }
    else {
      uVar6 = 0;
    }
    if (pppppuVar3 != (undefined *****)0x0) {
      (**(code **)(*(longlong *)
                    ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8) + 8
                  ))();
    }
    local_68 = (undefined *****)&PTR_FUN_14ba6d600;
    if (local_60 != 0) {
      if (((char)local_58 == '\x01') && (cef_string_utf16_clear(), local_60 != 0)) {
        FUN_1400020a8();
      }
      local_60 = 0;
      local_58 = local_58 & 0xffffffffffffff00;
    }
    puVar15 = (undefined1 *)FUN_1443f9dfb(param_3,local_200,param_5,param_6);
    if (puVar15 == (undefined1 *)0x0) goto LAB_14902db4b;
    *puVar15 = uVar6;
    bVar26 = true;
  }
  if (pppppuVar3 != (undefined *****)0x0) {
    (**(code **)(*(longlong *)
                  ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8) + 8))
              ();
  }
  local_c8 = &PTR_FUN_14ba6d600;
  if (local_c0 != (undefined8 *)0x0) {
    if ((local_b8 == '\x01') && (cef_string_utf16_clear(), local_c0 != (undefined8 *)0x0)) {
      FUN_1400020a8();
    }
    local_c0 = (undefined8 *)0x0;
    local_b8 = '\0';
  }
  uVar25 = CONCAT71(uVar23,1);
  if (bVar26) goto LAB_14902d724;
  local_e0 = &PTR_FUN_14ba6d600;
  local_d8 = (undefined8 *)0x0;
  local_d0 = '\0';
  uVar19 = 0;
  uVar18 = 0;
  if (local_1e0 != (undefined8 *)0x0) {
    uVar18 = *local_1e0;
    uVar19 = local_1e0[1];
  }
  FUN_149048250(&local_e0,uVar18,uVar19,1);
  if (pppppuVar3 != (undefined *****)0x0) {
    (*(code *)**(undefined8 **)
                ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
  }
  if (param_3 == 0) {
LAB_14902dc42:
    bVar26 = false;
  }
  else {
    lVar21 = *(longlong *)(param_3 + 8);
    lVar12 = FUN_14093f0c0();
    if (*(ulonglong *)(lVar12 + 8) == 0) {
      bVar26 = lVar21 != 0;
      if (lVar21 != lVar12 && bVar26) {
        do {
          lVar21 = *(longlong *)(lVar21 + 0x30);
          bVar26 = lVar21 != 0;
          if (lVar21 == lVar12) break;
        } while (lVar21 != 0);
      }
      if (bVar26) goto LAB_14902e9b0;
      goto LAB_14902dc42;
    }
    if ((*(ulonglong *)(lVar21 + 0x18) & *(ulonglong *)(lVar12 + 8)) == 0) goto LAB_14902dc42;
LAB_14902e9b0:
    local_68 = (undefined *****)&PTR_FUN_14ba6d600;
    local_60 = 0;
    local_58 = local_58 & 0xffffffffffffff00;
    uVar19 = 0;
    uVar18 = 0;
    if (local_d8 != (undefined8 *)0x0) {
      uVar18 = *local_d8;
      uVar19 = local_d8[1];
    }
    FUN_149048250(&local_68,uVar18,uVar19,1);
    if (pppppuVar3 != (undefined *****)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
    }
    iVar9 = (*(code *)(*pppppuVar3)[0xb])(pppppuVar3,&local_68);
    if (iVar9 == 4) {
      dVar27 = (double)(*(code *)(*pppppuVar3)[0xf])(pppppuVar3,&local_68);
      uVar8 = (ushort)(int)dVar27;
    }
    else if (iVar9 == 3) {
      uVar8 = (*(code *)(*pppppuVar3)[0xe])(pppppuVar3,&local_68);
    }
    else if (iVar9 == 2) {
      bVar7 = (*(code *)(*pppppuVar3)[0xd])(pppppuVar3,&local_68);
      uVar8 = (ushort)bVar7;
    }
    else {
      uVar8 = 0;
    }
    if (pppppuVar3 != (undefined *****)0x0) {
      (**(code **)(*(longlong *)
                    ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8) + 8
                  ))();
    }
    local_68 = (undefined *****)&PTR_FUN_14ba6d600;
    if (local_60 != 0) {
      if (((char)local_58 == '\x01') && (cef_string_utf16_clear(), local_60 != 0)) {
        FUN_1400020a8();
      }
      local_60 = 0;
      local_58 = local_58 & 0xffffffffffffff00;
    }
    puVar17 = (ushort *)FUN_1443f9dfb(param_3,local_200,param_5,param_6);
    if (puVar17 == (ushort *)0x0) goto LAB_14902dc42;
    *puVar17 = uVar8;
    bVar26 = true;
  }
  if (pppppuVar3 != (undefined *****)0x0) {
    (**(code **)(*(longlong *)
                  ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8) + 8))
              ();
  }
  local_e0 = &PTR_FUN_14ba6d600;
  if (local_d8 != (undefined8 *)0x0) {
    if ((local_d0 == '\x01') && (cef_string_utf16_clear(), local_d8 != (undefined8 *)0x0)) {
      FUN_1400020a8();
    }
    local_d8 = (undefined8 *)0x0;
    local_d0 = '\0';
  }
  uVar25 = CONCAT71(uVar23,1);
  if (bVar26) goto LAB_14902d724;
  local_f8 = &PTR_FUN_14ba6d600;
  local_f0 = (undefined8 *)0x0;
  local_e8 = '\0';
  uVar19 = 0;
  uVar18 = 0;
  if (local_1e0 != (undefined8 *)0x0) {
    uVar18 = *local_1e0;
    uVar19 = local_1e0[1];
  }
  FUN_149048250(&local_f8,uVar18,uVar19,1);
  if (pppppuVar3 != (undefined *****)0x0) {
    (*(code *)**(undefined8 **)
                ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
  }
  if (param_3 == 0) {
LAB_14902dd39:
    bVar26 = false;
  }
  else {
    lVar21 = *(longlong *)(param_3 + 8);
    lVar12 = FUN_144a7452c();
    if (*(ulonglong *)(lVar12 + 8) == 0) {
      bVar26 = lVar21 != 0;
      if (lVar21 != lVar12 && bVar26) {
        do {
          lVar21 = *(longlong *)(lVar21 + 0x30);
          bVar26 = lVar21 != 0;
          if (lVar21 == lVar12) break;
        } while (lVar21 != 0);
      }
      if (bVar26) goto LAB_14902eb50;
      goto LAB_14902dd39;
    }
    if ((*(ulonglong *)(lVar21 + 0x18) & *(ulonglong *)(lVar12 + 8)) == 0) goto LAB_14902dd39;
LAB_14902eb50:
    local_68 = (undefined *****)&PTR_FUN_14ba6d600;
    local_60 = 0;
    local_58 = local_58 & 0xffffffffffffff00;
    uVar19 = 0;
    uVar18 = 0;
    if (local_f0 != (undefined8 *)0x0) {
      uVar18 = *local_f0;
      uVar19 = local_f0[1];
    }
    FUN_149048250(&local_68,uVar18,uVar19,1);
    local_118 = (undefined ****)pppppuVar3;
    if (pppppuVar3 != (undefined *****)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
    }
    uVar11 = FUN_1443fb695(&local_118,&local_68);
    puVar16 = (undefined4 *)FUN_1443f9dfb(param_3,local_200,param_5,param_6);
    if (puVar16 == (undefined4 *)0x0) goto LAB_14902dd39;
    *puVar16 = uVar11;
    bVar26 = true;
  }
  if (pppppuVar3 != (undefined *****)0x0) {
    (**(code **)(*(longlong *)
                  ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8) + 8))
              ();
  }
  local_f8 = &PTR_FUN_14ba6d600;
  if (local_f0 != (undefined8 *)0x0) {
    if ((local_e8 == '\x01') && (cef_string_utf16_clear(), local_f0 != (undefined8 *)0x0)) {
      FUN_1400020a8();
    }
    local_f0 = (undefined8 *)0x0;
    local_e8 = '\0';
  }
  uVar25 = CONCAT71(uVar23,1);
  if (!bVar26) {
    local_68 = (undefined *****)&PTR_FUN_14ba6d600;
    local_60 = 0;
    local_58 = local_58 & 0xffffffffffffff00;
    uVar19 = 0;
    uVar18 = 0;
    if (local_1e0 != (undefined8 *)0x0) {
      uVar18 = *local_1e0;
      uVar19 = local_1e0[1];
    }
    FUN_149048250(&local_68,uVar18,uVar19,1);
    local_100 = (undefined ****)pppppuVar3;
    if (pppppuVar3 != (undefined *****)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
    }
    local_218 = &local_100;
    local_210 = (undefined *****)&local_68;
    cVar5 = FUN_1443fa104(param_3,local_200,param_5,param_6);
    if (cVar5 == '\0') {
      local_118 = (undefined ****)&PTR_FUN_14ba6d600;
      local_110 = 0;
      local_108 = 0;
      uVar19 = 0;
      uVar18 = 0;
      if (local_1e0 != (undefined8 *)0x0) {
        uVar18 = *local_1e0;
        uVar19 = local_1e0[1];
      }
      uVar25 = CONCAT71(uVar23,1);
      FUN_149048250(&local_118,uVar18,uVar19,1);
      local_120 = (undefined ****)pppppuVar3;
      if (pppppuVar3 != (undefined *****)0x0) {
        (*(code *)**(undefined8 **)
                    ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
      }
      local_218 = &local_120;
      local_210 = &local_118;
      cVar5 = FUN_1443fa3d7(param_3,local_200,param_5,param_6);
      if (cVar5 == '\0') {
        local_138 = (undefined ****)&PTR_FUN_14ba6d600;
        local_130 = 0;
        local_128 = 0;
        uVar19 = 0;
        uVar18 = 0;
        if (local_1e0 != (undefined8 *)0x0) {
          uVar18 = *local_1e0;
          uVar19 = local_1e0[1];
        }
        uVar25 = CONCAT71(uVar23,1);
        FUN_149048250(&local_138,uVar18,uVar19,1);
        local_140 = (undefined ****)pppppuVar3;
        if (pppppuVar3 != (undefined *****)0x0) {
          (*(code *)**(undefined8 **)
                      ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))
                    ();
        }
        local_218 = &local_140;
        local_210 = &local_138;
        cVar5 = FUN_1443fa603(param_3,local_200,param_5,param_6);
        if (cVar5 == '\0') {
          local_158 = (undefined ****)&PTR_FUN_14ba6d600;
          local_150 = 0;
          local_148 = 0;
          uVar19 = 0;
          uVar18 = 0;
          if (local_1e0 != (undefined8 *)0x0) {
            uVar18 = *local_1e0;
            uVar19 = local_1e0[1];
          }
          uVar25 = CONCAT71(uVar23,1);
          FUN_149048250(&local_158,uVar18,uVar19,1);
          local_160 = (undefined ****)pppppuVar3;
          if (pppppuVar3 != (undefined *****)0x0) {
            (*(code *)**(undefined8 **)
                        ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8)
            )();
          }
          local_218 = &local_160;
          local_210 = &local_158;
          cVar5 = FUN_1443fa8db(param_3,local_200,param_5,param_6);
          if (cVar5 == '\0') {
            local_178 = (undefined ****)&PTR_FUN_14ba6d600;
            local_170 = 0;
            local_168 = 0;
            uVar19 = 0;
            uVar18 = 0;
            if (local_1e0 != (undefined8 *)0x0) {
              uVar18 = *local_1e0;
              uVar19 = local_1e0[1];
            }
            uVar25 = CONCAT71(uVar23,1);
            FUN_149048250(&local_178,uVar18,uVar19,1);
            local_180 = (undefined ****)pppppuVar3;
            if (pppppuVar3 != (undefined *****)0x0) {
              (*(code *)**(undefined8 **)
                          ((longlong)pppppuVar3 +
                          (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
            }
            local_218 = &local_180;
            local_210 = &local_178;
            cVar5 = FUN_1443fabc6(param_3,local_200,param_5,param_6);
            if (cVar5 == '\0') {
              local_198 = (undefined ****)&PTR_FUN_14ba6d600;
              local_190 = 0;
              local_188 = 0;
              uVar19 = 0;
              uVar18 = 0;
              if (local_1e0 != (undefined8 *)0x0) {
                uVar18 = *local_1e0;
                uVar19 = local_1e0[1];
              }
              uVar25 = CONCAT71(uVar23,1);
              FUN_149048250(&local_198,uVar18,uVar19,1);
              local_1a0 = (undefined ****)pppppuVar3;
              if (pppppuVar3 != (undefined *****)0x0) {
                (*(code *)**(undefined8 **)
                            ((longlong)pppppuVar3 +
                            (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
              }
              local_218 = &local_1a0;
              local_210 = &local_198;
              cVar5 = FUN_1443faea4(param_3,local_200,param_5,param_6);
              if (cVar5 == '\0') {
                local_1b8 = &PTR_FUN_14ba6d600;
                local_1b0 = 0;
                local_1a8 = 0;
                uVar19 = 0;
                uVar18 = 0;
                if (local_1e0 != (undefined8 *)0x0) {
                  uVar18 = *local_1e0;
                  uVar19 = local_1e0[1];
                }
                FUN_149048250(&local_1b8,uVar18,uVar19,1);
                local_1c0 = (undefined ****)pppppuVar3;
                if (pppppuVar3 != (undefined *****)0x0) {
                  (*(code *)**(undefined8 **)
                              ((longlong)pppppuVar3 +
                              (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8))();
                }
                local_1d0 = local_1f0;
                if (plVar4 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                  UNLOCK();
                }
                local_210 = &local_1c0;
                local_218 = (undefined *****)CONCAT44(local_218._4_4_,param_6);
                local_208 = &local_1b8;
                local_1c8 = plVar4;
                uVar10 = FUN_1443fb18b(&local_1d0,param_3,local_200,param_5);
                uVar25 = (ulonglong)uVar10;
              }
            }
          }
        }
      }
    }
  }
LAB_14902d724:
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
  if (pppppuVar3 != (undefined *****)0x0) {
    (**(code **)(*(longlong *)
                  ((longlong)pppppuVar3 + (longlong)*(int *)((longlong)pppppuVar3[1] + 4) + 8) + 8))
              ();
  }
  local_1e8 = &PTR_FUN_14ba6d600;
  if (local_1e0 != (undefined8 *)0x0) {
    if ((local_1d8 == '\x01') && (cef_string_utf16_clear(), local_1e0 != (undefined8 *)0x0)) {
      FUN_1400020a8();
    }
    local_1e0 = (undefined8 *)0x0;
    local_1d8 = '\0';
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar25 & 0xffffffff;
}



// FUNCTION 14902ecd2 FUN_14902ecd2 body=83 status=ok
// SIG undefined FUN_14902ecd2(void)

undefined8 * FUN_14902ecd2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 14902ed2c FUN_14902ed2c body=229 status=ok
// SIG undefined FUN_14902ed2c(void)

bool FUN_14902ed2c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3,&local_38,param_2,param_1 + 0x28);
    plVar1 = local_30;
    if ((undefined8 *)(param_1 + 0x18) != &local_38) {
      *(undefined8 *)(param_1 + 0x18) = local_38;
      local_38 = 0;
      plVar4 = *(longlong **)(param_1 + 0x20);
      if (local_30 != plVar4) {
        local_30 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x20) = plVar1;
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
      }
    }
    plVar1 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar3 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902ee12 FUN_14902ee12 body=116 status=ok
// SIG undefined FUN_14902ee12(void)

void FUN_14902ee12(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_1 + 8);
  plVar1 = *(longlong **)(param_1 + 0x18);
  local_10 = *(longlong *)(param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  local_20 = param_5;
  local_28 = param_4;
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_18,param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902ee88 FUN_14902ee88 body=119 status=ok
// SIG undefined FUN_14902ee88(void)

void FUN_14902ee88(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_24);
  if (cVar1 != '\0') {
    iVar2 = 1;
    do {
      if (local_24 == 1) {
        iVar2 = iVar2 + 1;
      }
      else if (local_24 == 0) {
        iVar2 = iVar2 + -1;
      }
      cVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_24);
    } while ((cVar1 != '\0') && (0 < iVar2));
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902ef00 FUN_14902ef00 body=120 status=ok
// SIG undefined FUN_14902ef00(void)

void FUN_14902ef00(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_24);
  if (cVar1 != '\0') {
    iVar2 = 1;
    do {
      if (local_24 == 7) {
        iVar2 = iVar2 + 1;
      }
      else if (local_24 == 6) {
        iVar2 = iVar2 + -1;
      }
      cVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_24);
    } while ((cVar1 != '\0') && (0 < iVar2));
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902f350 FUN_14902f350 body=445 status=ok
// SIG undefined FUN_14902f350(void)

void FUN_14902f350(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  undefined **local_68;
  longlong local_60;
  char local_58;
  undefined **local_50;
  longlong local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)(*(int *)(param_1 + 0x20) + -1) * 0x28)
  ;
  if (*piVar1 == 1) {
    plVar2 = *(longlong **)(piVar1 + 8);
    if ((int)param_3[1] == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_3;
    }
    FUN_1490201ba(&local_50,puVar4);
    uVar3 = (**(code **)(**(longlong **)(piVar1 + 8) + 0x38))();
    (**(code **)(*plVar2 + 0xc0))(plVar2,uVar3,&local_50);
  }
  else {
    if (*piVar1 != 0) goto LAB_14902f395;
    puVar4 = &DAT_149dfb77a;
    if ((int)param_3[1] != 0) {
      puVar4 = (undefined2 *)*param_3;
    }
    plVar2 = *(longlong **)(piVar1 + 6);
    FUN_1490201ba(&local_50,puVar4);
    local_68 = *(undefined ***)(param_2 + 0x20);
    FUN_1490280de(*(undefined8 *)(param_1 + 8),&local_78);
    puVar4 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar4 = local_78;
    }
    FUN_1490201ba(&local_68,puVar4);
    (**(code **)(*plVar2 + 200))(plVar2,&local_68,&local_50);
    local_68 = &PTR_FUN_14ba6d600;
    if (local_60 != 0) {
      if ((local_58 == '\x01') && (cef_string_utf16_clear(), local_60 != 0)) {
        FUN_1400020a8();
      }
      local_60 = 0;
      local_58 = '\0';
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_50 = &PTR_FUN_14ba6d600;
  if (((local_48 != 0) && (local_40 == '\x01')) && (cef_string_utf16_clear(), local_48 != 0)) {
    FUN_1400020a8();
  }
LAB_14902f395:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14902f660 FUN_14902f660 body=258 status=ok
// SIG undefined FUN_14902f660(void)

void FUN_14902f660(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  undefined8 local_50 [5];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144d754a0(&local_28);
  local_58 = local_28;
  if (local_28 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_28 + 8) + 4) + local_28 + 8))();
  }
  local_50[0] = *(undefined8 *)(param_2 + 0x20);
  FUN_1490280de(*(undefined8 *)(param_1 + 8),local_68);
  FUN_14902f764(local_50,local_68,&local_58);
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_149048356((longlong *)(param_1 + 0x18),iVar1);
  }
  FUN_1490482d8((longlong)iVar1 * 0x28 + *(longlong *)(param_1 + 0x18),local_50);
  FUN_14902f812(local_50);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_28 + 8) + 4) + local_28 + 8) + 8))();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902f764 FUN_14902f764 body=173 status=ok
// SIG undefined FUN_14902f764(void)

undefined4 * FUN_14902f764(undefined4 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  lVar2 = *param_3;
  *(longlong *)(param_1 + 8) = lVar2;
  if (lVar2 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8))();
    lVar2 = *param_3;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
    }
  }
  return param_1;
}



// FUNCTION 14902f812 FUN_14902f812 body=94 status=ok
// SIG undefined FUN_14902f812(void)

void FUN_14902f812(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14902f870 FUN_14902f870 body=788 status=ok
// SIG undefined FUN_14902f870(void)

void FUN_14902f870(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68 [5];
  longlong local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar2 = *(longlong **)(param_2 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    if (*(longlong *)(param_2 + 0x20) == 0) {
      FUN_144d73bd0(local_68);
      lVar4 = local_68[0];
      if (local_68[0] != 0) {
        (*(code *)**(undefined8 **)(local_68[0] + *(int *)(*(longlong *)(local_68[0] + 8) + 4) + 8))
                  ();
      }
      lVar3 = *(longlong *)(param_1 + 0x28);
      *(longlong *)(param_1 + 0x28) = lVar4;
      if (lVar3 != 0) {
        (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
      }
      if (local_68[0] != 0) {
        (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_68[0] + 8) + 4) + local_68[0] + 8) +
                    8))();
      }
      local_80 = *(longlong *)(param_1 + 0x28);
      if (local_80 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_80 + 8) + 4) + local_80 + 8))();
      }
      local_38[0] = 0;
      local_38[1] = 0;
      FUN_14902fb86(local_68,local_38,&local_80);
      iVar1 = *(int *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
        FUN_149048356((longlong *)(param_1 + 0x18),iVar1);
      }
      FUN_1490482d8((longlong)iVar1 * 0x28 + *(longlong *)(param_1 + 0x18),local_68);
      FUN_14902f812(local_68);
    }
    else {
      FUN_144d73bd0(&local_40);
      local_78 = local_40;
      if (local_40 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_40 + 8) + 4) + local_40 + 8))();
      }
      local_68[0] = *(longlong *)(param_2 + 0x20);
      FUN_1490280de(*(undefined8 *)(param_1 + 8),local_38);
      FUN_14902fb86(local_68,local_38,&local_78);
      iVar1 = *(int *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
        FUN_149048356((longlong *)(param_1 + 0x18),iVar1);
      }
      FUN_1490482d8((longlong)iVar1 * 0x28 + *(longlong *)(param_1 + 0x18),local_68);
      FUN_14902f812(local_68);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      if (local_40 != 0) {
        (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_40 + 8) + 4) + local_40 + 8) + 8))()
        ;
      }
    }
  }
  else {
    local_38[0] = 0;
    local_38[1] = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_90 = 0;
    local_98 = 0;
    (**(code **)(*plVar2 + 0xf0))(plVar2,local_38,*(undefined8 *)(param_2 + 8),0);
    FUN_144d73bd0(&local_40);
    local_70 = local_40;
    if (local_40 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_40 + 8) + 4) + local_40 + 8))();
    }
    FUN_14902fb86(local_68,local_38,&local_70);
    iVar1 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
      FUN_149048356((longlong *)(param_1 + 0x18),iVar1);
    }
    FUN_1490482d8((longlong)iVar1 * 0x28 + *(longlong *)(param_1 + 0x18),local_68);
    FUN_14902f812(local_68);
    if (local_40 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_40 + 8) + 4) + local_40 + 8) + 8))();
    }
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14902fb86 FUN_14902fb86 body=173 status=ok
// SIG undefined FUN_14902fb86(void)

undefined4 * FUN_14902fb86(undefined4 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 * 2);
  }
  lVar2 = *param_3;
  *(longlong *)(param_1 + 6) = lVar2;
  if (lVar2 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8))();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  lVar2 = *param_3;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  return param_1;
}



// FUNCTION 14902fc34 FUN_14902fc34 body=321 status=ok
// SIG undefined FUN_14902fc34(void)

void FUN_14902fc34(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined **local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined1 local_40 [8];
  undefined2 *local_38;
  int local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14902fd76(param_1 + 0x18,local_40);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)(*(int *)(param_1 + 0x20) + -1) * 0x28)
  ;
  if (*piVar1 == 1) {
    plVar2 = *(longlong **)(piVar1 + 8);
    local_68 = local_20;
    plVar4 = plVar2;
    if (local_20 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_20 + 8) + 4) + local_20 + 8))();
      plVar4 = *(longlong **)(piVar1 + 8);
    }
    uVar3 = (**(code **)(*plVar4 + 0x38))();
    (**(code **)(*plVar2 + 0xd8))(plVar2,uVar3,&local_68);
  }
  else if (*piVar1 == 0) {
    plVar2 = *(longlong **)(piVar1 + 6);
    local_48 = local_20;
    if (local_20 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_20 + 8) + 4) + local_20 + 8))();
    }
    if (local_30 == 0) {
      local_38 = &DAT_149dfb77a;
    }
    FUN_1490201ba(&local_60,local_38);
    (**(code **)(*plVar2 + 0xe0))(plVar2,&local_60,&local_48);
    local_60 = &PTR_FUN_14ba6d600;
    if (((local_58 != 0) && (local_50 == '\x01')) && (cef_string_utf16_clear(), local_58 != 0)) {
      FUN_1400020a8();
    }
  }
  FUN_14902f812(local_40);
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14902fd76 FUN_14902fd76 body=139 status=ok
// SIG undefined FUN_14902fd76(void)

undefined8 FUN_14902fd76(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  
  FUN_1490482d8(param_2,*param_1 + (longlong)(int)param_1[1] * 0x28 + -0x28);
  iVar3 = (int)param_1[1];
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)iVar3 * 0x28 + -0x28);
  FUN_14902f812(_Dst);
  iVar2 = (int)param_1[1] - iVar3;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)iVar3 * 0x28),(longlong)iVar2 * 0x28);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  FUN_1490483ea(param_1);
  return param_2;
}



// FUNCTION 14902fe02 FUN_14902fe02 body=330 status=ok
// SIG undefined FUN_14902fe02(void)

void FUN_14902fe02(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined **local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined1 local_40 [8];
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14902fd76((longlong *)(param_1 + 0x18),local_40);
  if (0 < (longlong)*(int *)(param_1 + 0x20)) {
    lVar1 = *(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 0x28;
    if (*(int *)(lVar1 + -0x28) == 1) {
      plVar2 = *(longlong **)(lVar1 + -8);
      local_68 = local_28;
      plVar4 = plVar2;
      if (local_28 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_28 + 8) + 4) + local_28 + 8))();
        plVar4 = *(longlong **)(lVar1 + -8);
      }
      uVar3 = (**(code **)(*plVar4 + 0x38))();
      (**(code **)(*plVar2 + 0xd0))(plVar2,uVar3,&local_68);
    }
    else if (*(int *)(lVar1 + -0x28) == 0) {
      plVar2 = *(longlong **)(lVar1 + -0x10);
      local_48 = local_28;
      if (local_28 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_28 + 8) + 4) + local_28 + 8))();
      }
      if (local_30 == 0) {
        local_38 = &DAT_149dfb77a;
      }
      FUN_1490201ba(&local_60,local_38);
      (**(code **)(*plVar2 + 0xd8))(plVar2,&local_60,&local_48);
      local_60 = &PTR_FUN_14ba6d600;
      if (((local_58 != 0) && (local_50 == '\x01')) && (cef_string_utf16_clear(), local_58 != 0)) {
        FUN_1400020a8();
      }
    }
  }
  FUN_14902f812(local_40);
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14902ff50 FUN_14902ff50 body=1643 status=ok
// SIG undefined FUN_14902ff50(void)

void FUN_14902ff50(undefined8 param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  void **ppvVar9;
  longlong lVar10;
  undefined2 *puVar11;
  bool bVar12;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  void *local_a0 [2];
  void *local_90;
  int local_88;
  undefined4 local_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  void *local_70 [2];
  void *local_60 [2];
  void *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar10 = *(longlong *)(param_2 + 0x30);
  lVar3 = FUN_144a5ab96();
  if (lVar10 == lVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
  }
  lVar10 = *(longlong *)(param_2 + 0x30);
  lVar3 = FUN_144a7add4();
  if (lVar10 == lVar3) {
    lVar10 = *(longlong *)(param_2 + 0x20);
    lVar3 = *(longlong *)(lVar10 + 0x78);
    uVar6 = (**(code **)(**(longlong **)(lVar10 + 0x70) + 0x220))
                      (*(longlong **)(lVar10 + 0x70),
                       (longlong)param_3 * (longlong)*(int *)(lVar10 + 0x34) +
                       (longlong)*(int *)(lVar10 + 0x44) + *(longlong *)(param_2 + 0x18));
    ppvVar9 = local_50;
LAB_149030336:
    FUN_1401cfad2(lVar3,ppvVar9,uVar6);
  }
  else {
    lVar10 = *(longlong *)(param_2 + 0x30);
    lVar3 = FUN_14475a8dc();
    if (lVar10 == lVar3) {
      plVar1 = *(longlong **)(param_2 + 0x20);
      lVar10 = (**(code **)(*plVar1 + 0x1f0))(plVar1);
      if (lVar10 == 0) goto LAB_1490303a3;
      lVar3 = plVar1[0xe];
      uVar6 = (ulonglong)
              *(byte *)((longlong)param_3 * (longlong)*(int *)((longlong)plVar1 + 0x34) +
                       (longlong)*(int *)((longlong)plVar1 + 0x44) + *(longlong *)(param_2 + 0x18));
      ppvVar9 = local_60;
      goto LAB_149030336;
    }
    lVar10 = *(longlong *)(param_2 + 0x30);
    lVar3 = FUN_144a49fc8();
    if ((lVar10 == lVar3) ||
       (lVar10 = *(longlong *)(param_2 + 0x30), lVar3 = FUN_144a64e42(), lVar10 == lVar3)) {
LAB_1490303a3:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
    }
    lVar10 = *(longlong *)(param_2 + 0x30);
    lVar3 = FUN_144a7452c();
    if ((lVar10 == lVar3) ||
       ((lVar10 = *(longlong *)(param_2 + 0x30), lVar3 = FUN_14093f012(), lVar10 == lVar3 ||
        (lVar10 = *(longlong *)(param_2 + 0x30), lVar3 = FUN_14093f0c0(), lVar10 == lVar3)))) {
LAB_149030413:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
    }
    lVar10 = *(longlong *)(param_2 + 0x30);
    lVar3 = FUN_144a83f76();
    if (lVar10 == lVar3) goto LAB_1490303a3;
    lVar10 = *(longlong *)(param_2 + 0x30);
    lVar3 = FUN_140e98e1a();
    if (lVar10 == lVar3) goto LAB_149030413;
    lVar10 = *(longlong *)(param_2 + 0x30);
    lVar3 = FUN_144a8cc30();
    if ((lVar10 == lVar3) ||
       (lVar10 = *(longlong *)(param_2 + 0x30), lVar3 = FUN_144aa1f9a(), lVar10 == lVar3))
    goto LAB_1490303a3;
    lVar10 = *(longlong *)(param_2 + 0x30);
    lVar3 = FUN_144a63fc8();
    if (lVar10 == lVar3) {
      ppvVar9 = local_70;
      FUN_1400021e4((longlong)param_3 * (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) +
                    (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                    *(longlong *)(param_2 + 0x18),ppvVar9);
    }
    else {
      lVar10 = *(longlong *)(param_2 + 0x30);
      lVar3 = FUN_144a49f24();
      if (lVar10 == lVar3) {
        lVar10 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                 *(longlong *)(param_2 + 0x18);
        lVar3 = (longlong)param_3 * (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34);
        local_80 = (void *)0x0;
        local_78 = *(int *)(lVar3 + 8 + lVar10);
        lVar4 = (longlong)local_78;
        pvVar2 = *(void **)(lVar3 + lVar10);
        if (lVar4 == 0) {
          local_74 = 0;
        }
        else {
          FUN_1446dd670(&local_80,local_78,0);
          memcpy(local_80,pvVar2,lVar4 * 2);
        }
        ppvVar9 = &local_80;
      }
      else {
        lVar10 = *(longlong *)(param_2 + 0x30);
        lVar4 = FUN_144a4a07e();
        lVar3 = *(longlong *)(param_2 + 0x20);
        if (lVar10 != lVar4) {
          if (lVar3 != 0) {
            lVar10 = *(longlong *)(lVar3 + 8);
            lVar4 = FUN_140019cf2();
            if (*(ulonglong *)(lVar4 + 8) == 0) {
              bVar12 = lVar10 != 0;
              if (lVar10 != lVar4 && bVar12) {
                do {
                  lVar10 = *(longlong *)(lVar10 + 0x30);
                  bVar12 = lVar10 != 0;
                  if (lVar10 == lVar4) break;
                } while (lVar10 != 0);
              }
              if (bVar12) goto LAB_1490301f6;
            }
            else if ((*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) {
LAB_1490301f6:
              ppvVar9 = local_a0;
              FUN_14010318a(*(undefined8 *)
                             ((longlong)param_3 * (longlong)*(int *)(lVar3 + 0x34) +
                             (longlong)*(int *)(lVar3 + 0x44) + *(longlong *)(param_2 + 0x18)),
                            ppvVar9,0);
              goto LAB_149030344;
            }
            if (*(longlong *)(param_2 + 0x20) != 0) {
              lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 8);
              lVar3 = FUN_144a810c6();
              if (*(ulonglong *)(lVar3 + 8) == 0) {
                bVar12 = lVar10 != 0;
                if (lVar10 != lVar3 && bVar12) {
                  do {
                    lVar10 = *(longlong *)(lVar10 + 0x30);
                    bVar12 = lVar10 != 0;
                    if (lVar10 == lVar3) break;
                  } while (lVar10 != 0);
                }
                if (bVar12) goto LAB_1490302af;
              }
              else if ((*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1490302af:
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
              }
            }
          }
          uVar5 = FUN_144a82cde();
          local_c0 = *(undefined2 **)(*(longlong *)(param_2 + 0x28) + 0x18);
          FUN_1400021e4(&local_c0,&local_b0);
          puVar8 = local_b0;
          if (local_a8 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          if (*(longlong *)(param_2 + 0x20) == 0) {
            FUN_140056680(&local_c0,&DAT_149e01fe8);
          }
          else {
            FUN_1400021e4(*(longlong *)(param_2 + 0x20) + 0x20,&local_c0);
          }
          puVar11 = local_c0;
          if (local_b8 == 0) {
            puVar11 = &DAT_149dfb77a;
          }
          local_c8 = puVar8;
          FUN_146816218(uVar5,3,
                        L"FCEFJSStructSerializerBackend: Property %s cannot be serialized, because its type (%s) is not supported"
                        ,puVar11);
          if (local_c0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_b0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_14903017e;
        }
        puVar7 = (undefined8 *)
                 FUN_1447a1f4a((longlong)param_3 * (longlong)*(int *)(lVar3 + 0x34) +
                               (longlong)*(int *)(lVar3 + 0x44) + *(longlong *)(param_2 + 0x18));
        local_90 = (void *)0x0;
        local_88 = *(int *)(puVar7 + 1);
        lVar10 = (longlong)local_88;
        pvVar2 = (void *)*puVar7;
        if (lVar10 == 0) {
          local_84 = 0;
        }
        else {
          FUN_1446dd670(&local_90,local_88,0);
          memcpy(local_90,pvVar2,lVar10 * 2);
        }
        ppvVar9 = &local_90;
      }
    }
  }
LAB_149030344:
  FUN_14902f350(param_1,param_2,ppvVar9);
LAB_14903017e:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14903064d FUN_14903064d body=2154 status=ok
// SIG undefined FUN_14903064d(void)

undefined8 * FUN_14903064d(undefined8 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6288) {
    FUN_144b3d300(&DAT_14cbf6288);
    if (DAT_14cbf6288 == -1) {
      FUN_140056680(&DAT_14cbf6278,L"MAIN_FRAME");
      atexit((_func_5014 *)&LAB_1443f3b17);
      _Init_thread_footer(&DAT_14cbf6288);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf62a0) {
    FUN_144b3d300(&DAT_14cbf62a0);
    if (DAT_14cbf62a0 == -1) {
      FUN_140056680(&DAT_14cbf6290,L"SUB_FRAME");
      atexit((_func_5014 *)&LAB_1443f3b28);
      _Init_thread_footer(&DAT_14cbf62a0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf62b8) {
    FUN_144b3d300(&DAT_14cbf62b8);
    if (DAT_14cbf62b8 == -1) {
      FUN_140056680(&DAT_14cbf62a8,L"STYLESHEET");
      atexit((_func_5014 *)&LAB_1443f3b39);
      _Init_thread_footer(&DAT_14cbf62b8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf62d0) {
    FUN_144b3d300(&DAT_14cbf62d0);
    if (DAT_14cbf62d0 == -1) {
      FUN_140056680(&DAT_14cbf62c0,L"SCRIPT");
      atexit((_func_5014 *)&LAB_1443f3b4a);
      _Init_thread_footer(&DAT_14cbf62d0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf62e8) {
    FUN_144b3d300(&DAT_14cbf62e8);
    if (DAT_14cbf62e8 == -1) {
      FUN_140056680(&DAT_14cbf62d8,L"IMAGE");
      atexit((_func_5014 *)&LAB_1443f3b5b);
      _Init_thread_footer(&DAT_14cbf62e8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6300) {
    FUN_144b3d300(&DAT_14cbf6300);
    if (DAT_14cbf6300 == -1) {
      FUN_140056680(&DAT_14cbf62f0,L"FONT_RESOURCE");
      atexit((_func_5014 *)&LAB_1443f3b6c);
      _Init_thread_footer(&DAT_14cbf6300);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6318) {
    FUN_144b3d300(&DAT_14cbf6318);
    if (DAT_14cbf6318 == -1) {
      FUN_140056680(&DAT_14cbf6308,L"SUB_RESOURCE");
      atexit((_func_5014 *)&LAB_1443f3b7d);
      _Init_thread_footer(&DAT_14cbf6318);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6330) {
    FUN_144b3d300(&DAT_14cbf6330);
    if (DAT_14cbf6330 == -1) {
      FUN_140056680(&DAT_14cbf6320,L"OBJECT");
      atexit((_func_5014 *)&LAB_1443f3b8e);
      _Init_thread_footer(&DAT_14cbf6330);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6348) {
    FUN_144b3d300(&DAT_14cbf6348);
    if (DAT_14cbf6348 == -1) {
      FUN_140056680(&DAT_14cbf6338,L"MEDIA");
      atexit((_func_5014 *)&LAB_1443f3b9f);
      _Init_thread_footer(&DAT_14cbf6348);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6360) {
    FUN_144b3d300(&DAT_14cbf6360);
    if (DAT_14cbf6360 == -1) {
      FUN_140056680(&DAT_14cbf6350,L"WORKER");
      atexit((_func_5014 *)&LAB_1443f3bb0);
      _Init_thread_footer(&DAT_14cbf6360);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6378) {
    FUN_144b3d300(&DAT_14cbf6378);
    if (DAT_14cbf6378 == -1) {
      FUN_140056680(&DAT_14cbf6368,L"SHARED_WORKER");
      atexit((_func_5014 *)&LAB_1443f3bc1);
      _Init_thread_footer(&DAT_14cbf6378);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6390) {
    FUN_144b3d300(&DAT_14cbf6390);
    if (DAT_14cbf6390 == -1) {
      FUN_140056680(&DAT_14cbf6380,L"PREFETCH");
      atexit((_func_5014 *)&LAB_1443f3bd2);
      _Init_thread_footer(&DAT_14cbf6390);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf63a8) {
    FUN_144b3d300(&DAT_14cbf63a8);
    if (DAT_14cbf63a8 == -1) {
      FUN_140056680(&DAT_14cbf6398,L"FAVICON");
      atexit((_func_5014 *)&LAB_1443f3be3);
      _Init_thread_footer(&DAT_14cbf63a8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf63c0) {
    FUN_144b3d300(&DAT_14cbf63c0);
    if (DAT_14cbf63c0 == -1) {
      FUN_140056680(&DAT_14cbf63b0,&DAT_14ba6b54c);
      atexit((_func_5014 *)&LAB_1443f3bf4);
      _Init_thread_footer(&DAT_14cbf63c0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf63d8) {
    FUN_144b3d300(&DAT_14cbf63d8);
    if (DAT_14cbf63d8 == -1) {
      FUN_140056680(&DAT_14cbf63c8,L"PING");
      atexit((_func_5014 *)&LAB_1443f3c05);
      _Init_thread_footer(&DAT_14cbf63d8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf63f0) {
    FUN_144b3d300(&DAT_14cbf63f0);
    if (DAT_14cbf63f0 == -1) {
      FUN_140056680(&DAT_14cbf63e0,L"SERVICE_WORKER");
      atexit((_func_5014 *)&LAB_1443f3c16);
      _Init_thread_footer(&DAT_14cbf63f0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6408) {
    FUN_144b3d300(&DAT_14cbf6408);
    if (DAT_14cbf6408 == -1) {
      FUN_140056680(&DAT_14cbf63f8,L"CSP_REPORT");
      atexit((_func_5014 *)&LAB_1443f3c27);
      _Init_thread_footer(&DAT_14cbf6408);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6420) {
    FUN_144b3d300(&DAT_14cbf6420);
    if (DAT_14cbf6420 == -1) {
      FUN_140056680(&DAT_14cbf6410,L"PLUGIN_RESOURCE");
      atexit((_func_5014 *)&LAB_1443f3c38);
      _Init_thread_footer(&DAT_14cbf6420);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6438) {
    FUN_144b3d300(&DAT_14cbf6438);
    if (DAT_14cbf6438 == -1) {
      FUN_140056680(&DAT_14cbf6428,L"UNKNOWN");
      atexit((_func_5014 *)&LAB_1443f3c49);
      _Init_thread_footer(&DAT_14cbf6438);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((ulonglong)*param_2 < 0x12) {
    puVar1 = (undefined8 *)(&PTR_DAT_14ba6ecd8)[*param_2];
  }
  else {
    puVar1 = &DAT_14cbf6428;
  }
  FUN_144a787a6(param_1,puVar1);
  return param_1;
}



// FUNCTION 149030eb8 FUN_149030eb8 body=592 status=ok
// SIG undefined FUN_149030eb8(void)

undefined8
FUN_149030eb8(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 *local_98;
  longlong local_90;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = (*(code *)**(undefined8 **)*param_4)();
  uVar6 = 1;
  if (cVar4 == '\0') {
    local_a0 = FUN_14001cc68(0x80,0x10);
    lVar2 = *param_4;
    if (lVar2 != 0) {
      (*(code *)**(undefined8 **)(lVar2 + *(int *)(*(longlong *)(lVar2 + 8) + 4) + 8))();
    }
    lVar1 = param_1 + -0x10;
    lVar3 = *param_5;
    if (lVar3 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8))();
    }
    local_78 = 0;
    local_68 = &PTR_FUN_14ba6d780;
    local_60 = lVar1;
    local_58 = lVar2;
    if (lVar2 != 0) {
      (*(code *)**(undefined8 **)(lVar2 + *(int *)(*(longlong *)(lVar2 + 8) + 4) + 8))();
    }
    local_50 = lVar3;
    if (lVar3 != 0) {
      (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8))();
    }
    local_88[0] = FUN_1443fb726;
    local_98 = (undefined8 *)(lVar1 + *(int *)(*(longlong *)(param_1 + -8) + 4) + 8);
    if (local_98 != (undefined8 *)0x0) {
      (**(code **)*local_98)(local_98);
    }
    lVar1 = local_a0;
    FUN_1490232f6(local_a0,&local_98,local_88);
    local_90 = lVar1;
    if (lVar1 != 0) {
      lVar5 = (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4);
      (*(code *)**(undefined8 **)(lVar1 + 8 + lVar5))(lVar1 + lVar5 + 8);
    }
    FUN_144d731d0(0,&local_90);
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
    }
    uVar6 = 2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)(lVar2 + *(int *)(*(longlong *)(lVar2 + 8) + 4) + 8) + 8))();
    }
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = *param_3;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = *param_4;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = *param_5;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903110a FUN_14903110a body=146 status=ok
// SIG undefined FUN_14903110a(void)

longlong *
FUN_14903110a(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  
  *param_2 = param_1 + 0x10;
  (*(code *)**(undefined8 **)(param_1 + *(int *)(*(longlong *)(param_1 + 0x18) + 4) + 0x18))();
  lVar1 = *param_3;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return param_2;
}



// FUNCTION 14903119c FUN_14903119c body=554 status=ok
// SIG undefined FUN_14903119c(void)

void FUN_14903119c(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  char local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  char local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar3[1] = &DAT_14ba6c968;
  *puVar3 = &PTR_FUN_14ba6c938;
  puVar3[5] = &PTR_FUN_14ba6c940;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  puVar3[2] = param_4;
  *(undefined4 *)(puVar3 + 3) = 0;
  if (puVar3 == (undefined8 *)0x0) {
    local_48 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1;
    UNLOCK();
    local_48 = puVar3;
    (*(code *)**(undefined8 **)((longlong)puVar3 + (longlong)*(int *)(puVar3[1] + 4) + 8))
              ((longlong)puVar3 + (longlong)*(int *)(puVar3[1] + 4) + 8);
  }
  puVar5 = &DAT_149dfb77a;
  puVar4 = &DAT_149dfb77a;
  if ((int)param_3[1] != 0) {
    puVar4 = (undefined2 *)*param_3;
  }
  FUN_1490201ba(&local_60,puVar4);
  if ((int)param_2[1] != 0) {
    puVar5 = (undefined2 *)*param_2;
  }
  FUN_1490201ba(&local_78,puVar5);
  FUN_144d73270(&local_78,&local_60,&local_48);
  local_78 = &PTR_FUN_14ba6d600;
  if ((CONCAT44(uStack_6c,local_70) != 0) && (local_68 == '\x01')) {
    cef_string_utf16_clear();
    if (CONCAT44(uStack_6c,local_70) != 0) {
      FUN_1400020a8();
    }
  }
  local_60 = &PTR_FUN_14ba6d600;
  if ((CONCAT44(uStack_54,local_58) != 0) && (local_50 == '\x01')) {
    cef_string_utf16_clear();
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149048498(param_1,iVar1);
  }
  lVar2 = *param_1;
  local_40 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)((longlong)puVar3 + (longlong)*(int *)(puVar3[1] + 4) + 8))
              ((longlong)puVar3 + (longlong)*(int *)(puVar3[1] + 4) + 8);
  }
  local_60 = (undefined **)*param_3;
  *param_3 = 0;
  local_58 = (undefined4)param_3[1];
  uStack_54 = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_78 = (undefined **)*param_2;
  *param_2 = 0;
  local_70 = (undefined4)param_2[1];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_149031612(lVar2 + (longlong)iVar1 * 0x28,&local_78,&local_60,&local_40);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)(*(longlong *)((longlong)puVar3 + (longlong)*(int *)(puVar3[1] + 4) + 8) + 8))
              ((longlong)puVar3 + (longlong)*(int *)(puVar3[1] + 4) + 8);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490313c8 FUN_1490313c8 body=248 status=ok
// SIG undefined FUN_1490313c8(void)

void FUN_1490313c8(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    iVar12 = 0;
    bVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x10) == param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = (longlong *)(lVar2 + 0x48 + lVar10 * 0x28);
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 5;
        iVar6 = iVar5;
      } while (bVar7 == (*(longlong *)(lVar3 + 0x10) == param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove((void *)(lVar2 + (longlong)iVar12 * 0x28),(void *)(lVar2 + lVar10 * 0x28),
                  (longlong)iVar8 * 0x28);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_149045da1(lVar2 + lVar10 * 0x28,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 1490314c0 FUN_1490314c0 body=336 status=ok
// SIG undefined FUN_1490314c0(void)

void FUN_1490314c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  undefined **local_80;
  longlong local_78;
  char local_70;
  undefined **local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*param_2 != 0) && (lVar3 = param_1[1], (longlong)(int)lVar3 != 0)) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      plVar2 = (longlong *)*param_2;
      local_50 = *(longlong *)(lVar1 + 0x20 + lVar5);
      if (local_50 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_50 + 8) + 4) + local_50 + 8))();
      }
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 0x18 + lVar5) != 0) {
        puVar4 = *(undefined2 **)(lVar1 + 0x10 + lVar5);
      }
      FUN_1490201ba(&local_68,puVar4);
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar5) != 0) {
        puVar4 = *(undefined2 **)(lVar1 + lVar5);
      }
      FUN_1490201ba(&local_80,puVar4);
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_80,&local_68,&local_50);
      local_80 = &PTR_FUN_14ba6d600;
      if ((local_78 != 0) && (local_70 == '\x01')) {
        cef_string_utf16_clear();
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      local_68 = &PTR_FUN_14ba6d600;
      if ((local_60 != 0) && (local_58 == '\x01')) {
        cef_string_utf16_clear();
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      lVar5 = lVar5 + 0x28;
    } while ((longlong)(int)lVar3 * 0x28 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149031612 FUN_149031612 body=183 status=ok
// SIG undefined FUN_149031612(void)

longlong * FUN_149031612(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = *param_3;
  *param_3 = 0;
  *(int *)(param_1 + 3) = (int)param_3[1];
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  lVar1 = *param_4;
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return param_1;
}



// FUNCTION 1490316ca FUN_1490316ca body=114 status=ok
// SIG undefined FUN_1490316ca(void)

undefined8 * FUN_1490316ca(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba6b5c0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_14570e3a0(param_1 + 5);
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 14903173c FUN_14903173c body=83 status=ok
// SIG undefined FUN_14903173c(void)

void FUN_14903173c(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_144a7e010(param_1 + 0x90);
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
  }
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  return;
}



// FUNCTION 14903178f FUN_14903178f body=96 status=ok
// SIG undefined FUN_14903178f(void)

undefined8 FUN_14903178f(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  
  lVar3 = *param_1;
  lVar1 = param_1[1];
  if (lVar1 - lVar3 == param_2[1] - *param_2) {
    uVar2 = CONCAT71((int7)((ulonglong)(lVar1 - lVar3) >> 8),1);
    if (lVar3 != lVar1) {
      piVar4 = (int *)(*param_2 + 0x14);
      do {
        if ((((*(int *)(lVar3 + 8) != piVar4[-3]) || (*(int *)(lVar3 + 0xc) != piVar4[-2])) ||
            (*(int *)(lVar3 + 0x10) != piVar4[-1])) || (*(int *)(lVar3 + 0x14) != *piVar4))
        goto LAB_1490317eb;
        lVar3 = lVar3 + 0x20;
        piVar4 = piVar4 + 8;
      } while (lVar3 != lVar1);
    }
  }
  else {
LAB_1490317eb:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14903181a FUN_14903181a body=336 status=ok
// SIG undefined FUN_14903181a(void)

void FUN_14903181a(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_c8 [32];
  undefined ***local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  *(undefined4 *)(param_1 + 0x70) = param_3;
  *(undefined4 *)(param_1 + 0x74) = param_4;
  if (*(int *)(param_1 + 0x98) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 0x90);
  }
  FUN_1490201ba(&local_48,puVar2);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10);
  (**(code **)*puVar1)(puVar1,&local_70);
  local_80 = *(undefined8 *)(param_1 + 0x6c);
  local_a8 = &local_88;
  local_78 = 0;
  local_88 = &PTR_FUN_14ba6cae8;
  local_90 = 0;
  local_a0 = &PTR_FUN_14ba6cae8;
  local_98 = 0xffffffffffffffff;
  (**(code **)(*local_70 + 0x158))(local_70,&local_48,&local_68);
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_70 + (longlong)*(int *)(local_70[1] + 4) + 8) + 8))()
    ;
  }
  FUN_149044c02(&local_68);
  local_48 = &PTR_FUN_14ba6d600;
  if ((local_40 != 0) && (local_38 == '\x01')) {
    cef_string_utf16_clear();
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903196c FUN_14903196c body=136 status=ok
// SIG undefined FUN_14903196c(void)

void FUN_14903196c(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63a7c(param_1 + 0x90,&local_28,param_2,param_3);
  if (&local_28 == param_4) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
    *param_4 = local_28;
    *(undefined4 *)(param_4 + 1) = local_20;
    *(undefined4 *)((longlong)param_4 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490319f6 FUN_1490319f6 body=572 status=ok
// SIG undefined FUN_1490319f6(void)

void FUN_1490319f6(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_d8 [32];
  undefined ***local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60;
  int iStack_58;
  undefined4 uStack_54;
  char local_50;
  undefined **local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = (undefined **)0x0;
  uStack_40 = 0;
  if (param_2 != 0) {
    FUN_144a63a7c(param_1 + 0x90,&local_60,0,param_2);
    local_48 = local_60;
    uStack_40 = CONCAT44(uStack_54,iStack_58);
  }
  iVar3 = *(int *)(param_4 + 1) + -1;
  if (*(int *)(param_4 + 1) == 0) {
    iVar3 = 0;
  }
  FUN_1400020e8(&local_48,*param_4,iVar3);
  puVar1 = (undefined8 *)(param_1 + 0x90);
  iVar3 = *(int *)(param_1 + 0x98) + -1;
  if (*(int *)(param_1 + 0x98) == 0) {
    iVar3 = 0;
  }
  if (param_3 + param_2 < iVar3) {
    FUN_144a63a7c(puVar1,&local_60,param_3 + param_2);
    iVar3 = iStack_58 + -1;
    if (iStack_58 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(&local_48,local_60,iVar3);
    if (local_60 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  iVar3 = (int)uStack_40 + -1;
  if ((int)uStack_40 == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(puVar1,local_48,iVar3);
  if (*(int *)(param_1 + 0x98) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FUN_1490201ba(&local_60,puVar2);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10);
  (**(code **)*puVar1)(puVar1,&local_80);
  local_8c = 0;
  if (CONCAT44(uStack_54,iStack_58) != 0) {
    local_8c = *(undefined4 *)(CONCAT44(uStack_54,iStack_58) + 8);
  }
  local_b8 = &local_98;
  local_88 = 0;
  local_98 = &PTR_FUN_14ba6cae8;
  local_90 = 0;
  local_a0 = 0;
  local_b0 = &PTR_FUN_14ba6cae8;
  local_a8 = 0xffffffffffffffff;
  (**(code **)(*local_80 + 0x158))(local_80,&local_60,&local_78);
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_80 + (longlong)*(int *)(local_80[1] + 4) + 8) + 8))()
    ;
  }
  FUN_149044c02(&local_78);
  local_60 = &PTR_FUN_14ba6d600;
  if ((CONCAT44(uStack_54,iStack_58) != 0) && (local_50 == '\x01')) {
    cef_string_utf16_clear();
    if (CONCAT44(uStack_54,iStack_58) != 0) {
      FUN_1400020a8();
    }
  }
  if (local_48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149031c34 FUN_149031c34 body=375 status=ok
// SIG undefined FUN_149031c34(void)

ulonglong FUN_149031c34(longlong param_1,double *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  lVar4 = *(longlong *)(param_1 + 0x80) - lVar1;
  if (lVar4 != 0) {
    fVar7 = 1.0 / (*(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x50) -
                  *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x48));
    fVar8 = *(float *)(param_1 + 0x50) * fVar7;
    fVar9 = -*(float *)(param_1 + 0x4c) * fVar7;
    fVar9 = fVar8 * (float)*param_2 + fVar9 * (float)param_2[1] +
            (-*(float *)(param_1 + 0x54) * fVar8 - fVar9 * *(float *)(param_1 + 0x58));
    fVar8 = -*(float *)(param_1 + 0x48) * fVar7;
    fVar7 = fVar7 * *(float *)(param_1 + 0x44);
    fVar8 = fVar8 * (float)*param_2 + fVar7 * (float)param_2[1] +
            (-*(float *)(param_1 + 0x54) * fVar8 - *(float *)(param_1 + 0x58) * fVar7);
    uVar5 = 0;
    do {
      iVar3 = *(int *)(lVar1 + 8 + uVar5 * 0x20);
      iVar2 = (int)((ulonglong)(longlong)ROUND(fVar9 + fVar9 + 0.5) >> 1);
      if ((iVar3 <= iVar2) && (lVar6 = uVar5 * 0x20 + lVar1, iVar2 < iVar3 + *(int *)(lVar6 + 0x10))
         ) {
        iVar3 = (int)((ulonglong)(longlong)ROUND(fVar8 + fVar8 + 0.5) >> 1);
        if ((*(int *)(lVar6 + 0xc) <= iVar3) &&
           (iVar3 < *(int *)(lVar6 + 0xc) + *(int *)(lVar6 + 0x14))) {
          return uVar5;
        }
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (uVar5 < (ulonglong)(lVar4 >> 5));
  }
  return 0xffffffff;
}



// FUNCTION 149031dac FUN_149031dac body=488 status=ok
// SIG undefined FUN_149031dac(void)

undefined8 FUN_149031dac(longlong *param_1,uint param_2,int param_3,double *param_4,double *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  lVar6 = param_1[0xf];
  uVar10 = param_1[0x10] - lVar6 >> 5;
  uVar11 = (ulonglong)param_2;
  if (uVar11 <= uVar10) {
    uVar7 = param_3 + param_2;
    if (uVar7 <= uVar10) {
      if (param_2 < uVar7) {
        lVar8 = uVar7 - uVar11;
        piVar9 = (int *)(uVar11 * 0x20 + lVar6 + 0x14);
        uVar18 = 0xe0000000;
        uVar19 = 0x47efffff;
        uVar20 = 0xe0000000;
        uVar21 = 0xc7efffff;
        dVar16 = -3.4028234663852886e+38;
        dVar17 = 3.4028234663852886e+38;
        do {
          dVar12 = (double)piVar9[-3];
          dVar13 = (double)(piVar9[-3] + piVar9[-1]);
          if ((double)CONCAT44(uVar19,uVar18) <= dVar12) {
            dVar12 = (double)CONCAT44(uVar19,uVar18);
          }
          if (dVar13 <= (double)CONCAT44(uVar21,uVar20)) {
            dVar13 = (double)CONCAT44(uVar21,uVar20);
          }
          dVar15 = (double)piVar9[-2];
          dVar14 = (double)(piVar9[-2] + *piVar9);
          if (dVar17 <= dVar15) {
            dVar15 = dVar17;
          }
          if (dVar14 <= dVar16) {
            dVar14 = dVar16;
          }
          piVar9 = piVar9 + 8;
          uVar18 = SUB84(dVar12,0);
          uVar19 = (undefined4)((ulonglong)dVar12 >> 0x20);
          uVar20 = SUB84(dVar13,0);
          uVar21 = (undefined4)((ulonglong)dVar13 >> 0x20);
          lVar8 = lVar8 + -1;
          dVar16 = dVar14;
          dVar17 = dVar15;
        } while (lVar8 != 0);
      }
      else {
        dVar12 = 3.4028234663852886e+38;
        dVar13 = -3.4028234663852886e+38;
        dVar14 = -3.4028234663852886e+38;
        dVar15 = 3.4028234663852886e+38;
      }
      fVar1 = *(float *)(param_1 + 10);
      fVar2 = *(float *)(param_1 + 9);
      fVar3 = *(float *)(param_1 + 0xb);
      *param_4 = (double)((float)dVar12 * *(float *)((longlong)param_1 + 0x44) +
                          (float)dVar15 * *(float *)((longlong)param_1 + 0x4c) +
                         *(float *)((longlong)param_1 + 0x54));
      param_4[1] = (double)(fVar2 * (float)dVar12 + fVar1 * (float)dVar15 + fVar3);
      *param_5 = dVar13 - dVar12;
      param_5[1] = dVar14 - dVar15;
      return 0;
    }
  }
  if (param_1[0x10] != lVar6) {
    iVar4 = *(int *)(lVar6 + 0xc);
    iVar5 = *(int *)(lVar6 + 8);
    fVar1 = *(float *)(param_1 + 10);
    fVar2 = *(float *)(param_1 + 9);
    fVar3 = *(float *)(param_1 + 0xb);
    *param_4 = (double)((float)iVar5 * *(float *)((longlong)param_1 + 0x44) +
                        (float)iVar4 * *(float *)((longlong)param_1 + 0x4c) +
                       *(float *)((longlong)param_1 + 0x54));
    param_4[1] = (double)(fVar2 * (float)iVar5 + fVar1 * (float)iVar4 + fVar3);
    iVar4 = *(int *)(param_1[0xf] + 0x14);
    *param_5 = (double)*(int *)(param_1[0xf] + 0x10);
    param_5[1] = (double)iVar4;
    return 0;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_4);
  return 1;
}



// FUNCTION 149031fec FUN_149031fec body=481 status=ok
// SIG undefined FUN_149031fec(void)

undefined8 * FUN_149031fec(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar2 = *(longlong **)(param_1 + 0x20), plVar2 == (longlong *)0x0)) || ((int)plVar2[1] < 1))
  {
    lVar3 = *(longlong *)(param_1 + 8);
    plVar2 = *(longlong **)(lVar3 + 0x20);
    if (plVar2 == (longlong *)0x0) {
LAB_14903215d:
      *param_2 = 0;
      param_2[1] = 0;
LAB_149032163:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_14903215d;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      plVar7 = DAT_14c98e618;
      UNLOCK();
    } while (!bVar8);
    lVar3 = *(longlong *)(lVar3 + 0x18);
    if (lVar3 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      local_48 = lVar3;
      local_40 = plVar2;
      (**(code **)(*plVar7 + 0x28))(plVar7,&local_38);
      LOCK();
      plVar7 = plVar2 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      plVar4 = local_30;
      *(longlong *)(param_1 + 0x18) = local_38;
      plVar7 = *(longlong **)(param_1 + 0x20);
      if (plVar7 != local_30) {
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar7 = *(longlong **)(param_1 + 0x20);
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
        }
        *(longlong **)(param_1 + 0x20) = plVar4;
      }
      if (local_38 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        FUN_14151e938(local_38,param_2);
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_30 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
    }
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  else {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) {
        FUN_14151e938(0,param_2);
        goto LAB_149032163;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    FUN_14151e938(*(undefined8 *)(param_1 + 0x18),param_2);
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        goto LAB_149032163;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490321e2 FUN_1490321e2 body=330 status=ok
// SIG undefined FUN_1490321e2(void)

void FUN_1490321e2(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined **local_38;
  longlong local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
    if (*(int *)(param_1 + 0x98) - 2U < 0x7fffffff) {
      FUN_1490201ba(&local_38,*(undefined8 *)(param_1 + 0x90));
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10);
      (**(code **)*puVar1)(puVar1,&local_40);
      local_48 = 0;
      local_58 = &PTR_FUN_14ba6cae8;
      local_50 = 0xffffffffffffffff;
      (**(code **)(*local_40 + 0x160))(local_40,&local_38,&local_58,0);
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*(longlong *)((longlong)local_40 + (longlong)*(int *)(local_40[1] + 4) + 8) + 8
                    ))();
      }
      local_38 = &PTR_FUN_14ba6d600;
      if ((local_30 != 0) && (local_28 == '\x01')) {
        cef_string_utf16_clear();
        if (local_30 != 0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10);
      (**(code **)*puVar1)(puVar1,&local_38);
      (**(code **)(*local_38 + 0x170))();
      if (local_38 != (undefined **)0x0) {
        (**(code **)(*(longlong *)((longlong)local_38 + (longlong)*(int *)(local_38[1] + 4) + 8) + 8
                    ))();
      }
    }
    FUN_14903173c(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903232e FUN_14903232e body=1708 status=ok
// SIG undefined FUN_14903232e(void)

undefined8 *
FUN_14903232e(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba6b640;
  *(undefined4 *)(param_1 + 5) = 3;
  lVar4 = *param_2;
  param_1[8] = lVar4;
  if (lVar4 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8))();
  }
  lVar4 = *param_3;
  param_1[9] = lVar4;
  local_88 = param_3;
  if (lVar4 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8))();
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar2 = (int)param_4[1];
  _Src = (void *)*param_4;
  *(int *)(param_1 + 0xd) = iVar2;
  local_80 = param_4;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar2,0);
    memcpy((void *)param_1[0xc],_Src,(longlong)iVar2 * 2);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = DAT_14c967818;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x94) = 0;
  FUN_141121e90(param_1 + 0x13,param_5);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 2;
  *(undefined1 *)(param_1 + 0x18) = param_6;
  *(undefined1 *)((longlong)param_1 + 0xc1) = param_7;
  *(undefined1 *)((longlong)param_1 + 0xc2) = param_8;
  *(undefined1 *)((longlong)param_1 + 0xc3) = param_10;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 2;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x200000000;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 2;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x200000000;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x45] = 0x1000000000001;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2fc) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x309) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  lVar4 = FUN_14001cc68(0xe0,0x10);
  local_68 = *param_2;
  if (local_68 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_68 + 8) + 4) + local_68 + 8))();
  }
  FUN_1490329dc(lVar4,&local_68,CONCAT71((int7)((ulonglong)_Src >> 8),param_9) & 0xffffffff);
  param_1[0x68] = lVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba6d7c0;
  plVar5[2] = lVar4;
  param_1[0x69] = plVar5;
  if ((lVar4 != 0) &&
     (((*(longlong *)(lVar4 + 200) == 0 || (*(longlong *)(lVar4 + 0xd0) == 0)) ||
      (*(int *)(*(longlong *)(lVar4 + 0xd0) + 8) < 1)))) {
    if (plVar5 == (longlong *)0x0) {
      *(longlong *)(lVar4 + 200) = lVar4;
      plVar6 = *(longlong **)(lVar4 + 0xd0);
      if (plVar6 != (longlong *)0x0) {
LAB_14903289b:
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        *(longlong **)(lVar4 + 0xd0) = plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_149032924;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(longlong *)(lVar4 + 200) = lVar4;
      if (*(longlong **)(lVar4 + 0xd0) != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(lVar4 + 0xd0);
        if (plVar6 != (longlong *)0x0) goto LAB_14903289b;
        *(longlong **)(lVar4 + 0xd0) = plVar5;
      }
LAB_149032924:
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  plVar5 = (longlong *)FUN_14001cc68(0x50,0x10);
  local_70 = *param_2;
  if (local_70 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_70 + 8) + 4) + local_70 + 8))();
  }
  FUN_149026cba(plVar5,&local_70);
  param_1[0x6a] = plVar5;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ba6d7e0;
  plVar6[2] = (longlong)plVar5;
  param_1[0x6b] = plVar6;
  if ((plVar5 == (longlong *)0x0) ||
     (((*plVar5 != 0 && (plVar5[1] != 0)) && (0 < *(int *)(plVar5[1] + 8))))) goto LAB_149032725;
  if (plVar6 == (longlong *)0x0) {
    *plVar5 = (longlong)plVar5;
    plVar7 = (longlong *)plVar5[1];
    if (plVar7 == (longlong *)0x0) goto LAB_149032725;
LAB_1490328ec:
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    plVar5[1] = (longlong)plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_149032725;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *plVar5 = (longlong)plVar5;
    if ((longlong *)plVar5[1] != plVar6) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar7 = (longlong *)plVar5[1];
      if (plVar7 != (longlong *)0x0) goto LAB_1490328ec;
      plVar5[1] = (longlong)plVar6;
    }
  }
  LOCK();
  plVar5 = plVar6 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_149032725:
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x379) = 0;
  *(undefined8 *)((longlong)param_1 + 0x381) = 0;
  cVar3 = FUN_149032a4e(param_1);
  if (cVar3 == '\0') {
    FUN_149032c50(param_1);
  }
  (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_78);
  lVar4 = (**(code **)(*local_78 + 0x20))();
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_78 + (longlong)*(int *)(local_78[1] + 4) + 8) + 8))()
    ;
  }
  plVar5 = local_80;
  if (lVar4 != 0) {
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  lVar4 = *local_88;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  if (*plVar5 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)((longlong)param_5 + 0xc) != -1) {
    if (*param_5 != 0) {
      FUN_1400020a8();
    }
    *param_5 = 0;
    param_5[1] = -0x100000000;
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490329dc FUN_1490329dc body=114 status=ok
// SIG undefined FUN_1490329dc(void)

undefined8 * FUN_1490329dc(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  FUN_149036b6a(param_1,param_3);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14ba6cd30;
  lVar1 = *param_2;
  param_1[0x1b] = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
  }
  return param_1;
}



// FUNCTION 149032a4e FUN_149032a4e body=513 status=ok
// SIG undefined FUN_149032a4e(void)

ulonglong FUN_149032a4e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14c98e618 != 0) &&
     (plVar1 = *(longlong **)(DAT_14c98e618 + 0x20), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x198))(plVar1);
    if (cVar2 == '\0') {
      if (*(char *)(param_1 + 0xc3) == '\x01') {
        if (DAT_14ca83900 != (longlong *)0x0) {
          cVar2 = FUN_14903663a();
          if (cVar2 != '\0') {
            iVar4 = (**(code **)(*DAT_14ca83900 + 0x28))();
            if ((iVar4 == 2) && (*(longlong *)(param_1 + 0x380) == 0)) {
              puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
              *puVar6 = &PTR_FUN_14ba6cdb0;
              FUN_14570e3a0(puVar6 + 1);
              *(undefined8 **)(param_1 + 0x380) = puVar6;
            }
          }
        }
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
        goto LAB_149032a95;
      }
      local_58 = (undefined4 *)0x0;
      uStack_50 = 4;
      uVar7 = 0;
      FUN_1447403be(&local_58,0);
      *local_58 = 0;
      uVar5 = (**(code **)(*plVar1 + 0x120))(plVar1,1,1);
      *(undefined8 *)(param_1 + 0x30) = uVar5;
      cVar2 = (**(code **)(*plVar1 + 0x198))(plVar1);
      if (cVar2 == '\0') {
        local_68 = 0;
        uStack_60 = 0;
        local_78 = &local_68;
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))
                  (*(longlong **)(param_1 + 0x30),1,1,local_58);
        cVar2 = (**(code **)(*plVar1 + 0x198))(plVar1);
        if (cVar2 == '\0') {
          uVar5 = (**(code **)(*plVar1 + 0x120))(plVar1,1,1);
          *(undefined8 *)(param_1 + 0x38) = uVar5;
          cVar2 = (**(code **)(*plVar1 + 0x198))(plVar1);
          if (cVar2 == '\0') {
            local_68 = 0;
            uStack_60 = 0;
            local_78 = &local_68;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
                      (*(longlong **)(param_1 + 0x38),1,1,local_58);
            uVar3 = (**(code **)(*plVar1 + 0x198))(plVar1);
            uVar7 = (ulonglong)uVar3 ^ 1;
            goto LAB_149032b33;
          }
        }
        uVar7 = 0;
      }
LAB_149032b33:
      if (local_58 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_149032a95;
    }
  }
  uVar7 = 0;
LAB_149032a95:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149032c50 FUN_149032c50 body=220 status=ok
// SIG undefined FUN_149032c50(void)

void FUN_149032c50(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = 0;
  bVar3 = true;
  do {
    bVar5 = bVar3;
    lVar1 = *(longlong *)(param_1 + 0x30 + lVar6 * 8);
    if (lVar1 != 0) {
      cVar4 = FUN_144a61b4f();
      if (cVar4 == '\0') {
        cVar4 = FUN_14273280c();
        if (cVar4 != '\0') {
          local_78 = 0;
          local_68 = &PTR_LAB_14ba6d800;
          local_88[0] = &LAB_1443fc040;
          local_60 = lVar1;
          FUN_1407461b0(1,local_88);
        }
      }
      else if ((DAT_14c98e618 != 0) &&
              (plVar2 = *(longlong **)(DAT_14c98e618 + 0x20), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x130))(plVar2,lVar1);
      }
      *(undefined8 *)(param_1 + 0x30 + lVar6 * 8) = 0;
    }
    lVar6 = 1;
    bVar3 = false;
  } while (bVar5);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149032d2e FUN_149032d2e body=175 status=ok
// SIG undefined FUN_149032d2e(void)

void FUN_149032d2e(undefined8 param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (void *)0x0;
  local_50 = (int)param_2[1];
  lVar1 = (longlong)local_50;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  FUN_149032dde(param_1,&local_58,&local_48);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149032dde FUN_149032dde body=341 status=ok
// SIG undefined FUN_149032dde(void)

void FUN_149032dde(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  void *_Src;
  int iVar2;
  char cVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  void *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = (**(code **)(*param_1 + 0x28))();
  if (cVar3 != '\0') {
    (**(code **)(*(longlong *)param_1[8] + 0x68))((longlong *)param_1[8],&local_50);
    if (local_50 != 0) {
      uVar1 = *(uint *)(param_3 + 1);
      local_48 = (void *)0x0;
      if ((int)uVar1 < 2) {
        local_40 = 0xffffffff00000000;
      }
      else {
        _Src = (void *)*param_3;
        local_40 = CONCAT44(local_40._4_4_,uVar1);
        FUN_1446dd670(&local_48,(ulonglong)uVar1,0);
        memcpy(local_48,_Src,(ulonglong)uVar1 * 2);
      }
      FUN_140bc2be4(param_1 + 0x13,&local_48);
      if ((local_40._4_4_ != -1) && (local_48 != (void *)0x0)) {
        FUN_1400020a8();
      }
      iVar2 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar2 = 0;
      }
      FUN_1402980a2(param_1 + 0x65,*param_2,iVar2);
      if ((char)param_1[0x62] == '\0') {
        FUN_1490357d0(param_1);
      }
      if (local_50 != 0) {
        (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_50 + 8) + 4) + local_50 + 8) + 8))()
        ;
      }
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149032f34 FUN_149032f34 body=263 status=ok
// SIG undefined FUN_149032f34(void)

void FUN_149032f34(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (void *)0x0;
  local_40 = (int)param_2[1];
  lVar2 = (longlong)local_40;
  pvVar1 = (void *)*param_2;
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar1,lVar2 * 2);
  }
  local_58 = (void *)0x0;
  local_50 = (int)param_3[1];
  lVar2 = (longlong)local_50;
  pvVar1 = (void *)*param_3;
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar1,lVar2 * 2);
  }
  FUN_149032dde(param_1,&local_58,&local_48);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903303c FUN_14903303c body=378 status=ok
// SIG undefined FUN_14903303c(void)

undefined8 * FUN_14903303c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_288 [32];
  undefined1 *local_268;
  undefined1 local_251;
  undefined1 *local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined1 local_238 [465];
  undefined1 local_67;
  byte local_65;
  byte local_62;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_145aad25c(local_238);
  local_67 = 0;
  local_65 = *(byte *)(param_1 + 0xc2);
  local_62 = local_65 ^ 1;
  local_250 = &LAB_1490332b0;
  local_248 = 0;
  FUN_1490331b8(local_238,param_1);
  local_268 = &local_251;
  FUN_145aad862(&local_250,"SViewport",".\\Runtime/WebBrowser/Private/CEF/CEFWebBrowserWindow.cpp",
                0x249);
  FUN_145aaccd2(&local_250,param_2,local_238);
  plVar4 = (longlong *)CONCAT44(uStack_244,local_248);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_145aad09e(local_238);
  lVar2 = *(longlong *)(param_1 + 0x350);
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    plVar5 = *(longlong **)(lVar2 + 0x20);
    if (plVar5 == (longlong *)0x0) goto LAB_14903318d;
LAB_149033144:
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    *(longlong **)(lVar2 + 0x20) = plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_14903318d;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    if (*(longlong **)(lVar2 + 0x20) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar2 + 0x20);
      if (plVar5 != (longlong *)0x0) goto LAB_149033144;
      *(longlong **)(lVar2 + 0x20) = plVar4;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_14903318d:
  if ((local_28 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490331b8 FUN_1490331b8 body=246 status=ok
// SIG undefined FUN_1490331b8(void)

longlong FUN_1490331b8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_50 = *(undefined4 *)(param_3 + 1);
  local_58 = *param_3;
  FUN_1490486c6(local_68,param_2,&local_58);
  local_40 = '\0';
  local_3c = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_140a51ef4(&local_38,local_68);
  if (&local_58 != (undefined8 *)(param_1 + 0xb0)) {
    if (local_40 == '\x01') {
      *(undefined8 *)(param_1 + 0xc0) = local_48;
      *(undefined4 *)(param_1 + 0xb0) = (undefined4)local_58;
      *(undefined4 *)(param_1 + 0xb4) = local_58._4_4_;
      *(undefined4 *)(param_1 + 0xb8) = uStack_50;
      *(undefined4 *)(param_1 + 0xbc) = uStack_4c;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 200) != '\x01') goto LAB_149033247;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 200) = uVar1;
  }
LAB_149033247:
  *(undefined1 *)(param_1 + 0xcc) = local_3c;
  FUN_144a450dc(param_1 + 0xd0,&local_38);
  FUN_1449db362(&local_38);
  if (local_40 == '\x01') {
    local_40 = '\0';
  }
  FUN_1449db362(local_68);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149033300 FUN_149033300 body=752 status=ok
// SIG undefined FUN_149033300(void)

void FUN_149033300(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  HWND hWnd;
  HWND hWnd_00;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  undefined1 auStackY_b8 [32];
  undefined1 local_78 [8];
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStackY_b8;
  if (*(char *)((longlong)param_1 + 0x22c) == '\0') {
    FUN_1490335f2(param_1,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x22e) = 1;
  plVar4 = (longlong *)param_1[0x6f];
  fVar11 = 1.0;
  if (plVar4 != (longlong *)0x0) {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_1490333fd;
      LOCK();
      iVar8 = (int)plVar4[1];
      bVar10 = iVar7 == iVar8;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar8 = iVar7;
      }
      iVar7 = iVar8;
      UNLOCK();
    } while (!bVar10);
    if (param_1[0x6e] == 0) {
      fVar11 = 1.0;
    }
    else {
      FUN_14151e938(param_1[0x6e],local_78);
      fVar11 = (float)(**(code **)(*(longlong *)local_78 + 0xf8))();
      plVar1 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_70 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_1490333fd:
  *(int *)(param_1 + 0x11) = (int)param_3;
  iVar7 = (int)((ulonglong)param_3 >> 0x20);
  *(int *)((longlong)param_1 + 0x8c) = iVar7;
  iVar9 = (int)param_2;
  iVar8 = (int)((ulonglong)param_2 >> 0x20);
  if ((iVar8 < 1 || iVar9 < 1) ||
     ((iVar6 = (int)param_1[0x10], (int)param_1[0x10] == iVar9 &&
      (iVar6 = iVar9, *(int *)((longlong)param_1 + 0x84) == iVar8)))) {
    if ((fVar11 == *(float *)(param_1 + 0x12)) && (!NAN(fVar11) && !NAN(*(float *)(param_1 + 0x12)))
       ) goto LAB_1490335ac;
    iVar6 = (int)param_1[0x10];
  }
  if (iVar6 == (int)DAT_14c967818) {
    bVar10 = *(int *)((longlong)param_1 + 0x84) == DAT_14c967818._4_4_;
  }
  else {
    bVar10 = false;
  }
  param_1[0x10] = param_2;
  *(float *)(param_1 + 0x12) = fVar11;
  cVar5 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar5 != '\0') {
    (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],local_78);
    hWnd = (HWND)(**(code **)(*(longlong *)local_78 + 0x20))();
    if (local_78 != (undefined1  [8])0x0) {
      (**(code **)(*(longlong *)
                    ((longlong)local_78 +
                    (longlong)*(int *)(*(longlong *)((longlong)local_78 + 8) + 4) + 8) + 8))();
    }
    if (hWnd != (HWND)0x0) {
      hWnd_00 = GetParent(hWnd);
      local_78 = (undefined1  [8])0x0;
      plStack_70 = (longlong *)0x0;
      if (hWnd_00 == (HWND)0x0) {
        local_78._0_4_ = 0;
        local_78._4_4_ = 0;
      }
      else {
        GetWindowRect(hWnd_00,(LPRECT)local_78);
      }
      SetWindowPos(hWnd,(HWND)0x0,(int)param_3 - local_78._0_4_,iVar7 - local_78._4_4_,
                   (int)((ulonglong)
                         (longlong)ROUND((float)iVar9 * fVar11 + (float)iVar9 * fVar11 + 0.5) >> 1),
                   (int)((ulonglong)
                         (longlong)ROUND((float)iVar8 * fVar11 + (float)iVar8 * fVar11 + 0.5) >> 1),
                   0);
    }
    if (bVar10) {
      (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],local_78);
      (**(code **)(*(longlong *)local_78 + 0xe0))();
      if (local_78 != (undefined1  [8])0x0) {
        (**(code **)(*(longlong *)
                      ((longlong)local_78 +
                      (longlong)*(int *)(*(longlong *)((longlong)local_78 + 8) + 4) + 8) + 8))();
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x22f) = 1;
    }
  }
LAB_1490335ac:
  if ((local_60 ^ (ulonglong)auStackY_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490335f2 FUN_1490335f2 body=658 status=ok
// SIG undefined FUN_1490335f2(void)

void FUN_1490335f2(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  BOOL BVar10;
  HWND hWnd;
  HWND pHVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStackY_88 [32];
  undefined1 local_48 [8];
  longlong *plStack_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_88;
  if (*(char *)((longlong)param_1 + 0x22d) != param_2) {
    *(char *)((longlong)param_1 + 0x22d) = param_2;
    cVar8 = (**(code **)(*param_1 + 0x28))();
    if (cVar8 != '\0') {
      (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_38);
      hWnd = (HWND)(**(code **)(*local_38 + 0x20))();
      if (hWnd == (HWND)0x0) {
        (**(code **)(*local_38 + 0xe8))(local_38,*(undefined1 *)((longlong)param_1 + 0x22d));
      }
      else {
        ShowWindow(hWnd,(*(byte *)((longlong)param_1 + 0x22d) ^ 1) * 5);
        if (*(char *)((longlong)param_1 + 0x22d) == '\x01') {
          plVar12 = (longlong *)param_1[0x6f];
          bVar4 = true;
          if (plVar12 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
            lVar13 = 0;
          }
          else {
            iVar9 = (int)plVar12[1];
            lVar13 = 0;
            do {
              if (iVar9 == 0) {
                plVar12 = (longlong *)0x0;
                goto LAB_1490337b9;
              }
              LOCK();
              iVar7 = (int)plVar12[1];
              bVar14 = iVar9 == iVar7;
              if (bVar14) {
                *(int *)(plVar12 + 1) = iVar9 + 1;
                iVar7 = iVar9;
              }
              iVar9 = iVar7;
              UNLOCK();
            } while (!bVar14);
            lVar13 = param_1[0x6e];
            bVar4 = false;
          }
LAB_1490337b9:
          BVar10 = IsWindowEnabled(hWnd);
          if (lVar13 != 0 && BVar10 != 0) {
            FUN_14151e938(lVar13,local_48);
            pHVar11 = (HWND)(**(code **)(*(longlong *)local_48 + 0xc0))();
            SetFocus(pHVar11);
            plVar3 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_40 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_40)(plStack_40);
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
          SetWindowPos(hWnd,(HWND)0x0,0,0,0,0,0x16);
          if (!bVar4) {
            LOCK();
            plVar3 = plVar12 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
        }
        else {
          pHVar11 = GetParent(hWnd);
          local_48 = (undefined1  [8])0x0;
          plStack_40 = (longlong *)0x0;
          if (pHVar11 == (HWND)0x0) {
            local_48._0_4_ = 0;
            local_48._4_4_ = 0;
          }
          else {
            GetWindowRect(pHVar11,(LPRECT)local_48);
          }
          fVar5 = (float)(int)((ulonglong)param_1[0x10] >> 0x20) * *(float *)(param_1 + 0x12);
          fVar6 = (float)(int)param_1[0x10] * *(float *)(param_1 + 0x12);
          SetWindowPos(hWnd,(HWND)0x0,(int)param_1[0x11] - local_48._0_4_,
                       *(int *)((longlong)param_1 + 0x8c) - local_48._4_4_,
                       (int)((ulonglong)(longlong)ROUND(fVar6 + fVar6 + 0.5) >> 1),
                       (int)((ulonglong)(longlong)ROUND(fVar5 + fVar5 + 0.5) >> 1),0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*(longlong *)((longlong)local_38 + (longlong)*(int *)(local_38[1] + 4) + 8) + 8
                    ))();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStackY_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14903389e FUN_14903389e body=9 status=ok
// SIG undefined FUN_14903389e(void)

bool FUN_14903389e(longlong param_1)

{
  return *(longlong *)(param_1 + 0x40) != 0;
}



// FUNCTION 1490338bc FUN_1490338bc body=83 status=ok
// SIG undefined FUN_1490338bc(void)

undefined8 * FUN_1490338bc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  _Src = *(void **)(param_1 + 0x50);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 149033910 FUN_149033910 body=193 status=ok
// SIG undefined FUN_149033910(void)

undefined8 * FUN_149033910(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = *(longlong **)(param_1 + 0x40);
  if ((plVar2 == (longlong *)0x0) ||
     ((**(code **)(*plVar2 + 0x68))(plVar2,&local_28), local_28 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x68);
    _Src = *(void **)(param_1 + 0x60);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
      if (local_28 == 0) goto LAB_149033992;
    }
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_28 + 8) + 4) + local_28 + 8) + 8))();
  }
LAB_149033992:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490339d2 FUN_1490339d2 body=490 status=ok
// SIG undefined FUN_1490339d2(void)

void FUN_1490339d2(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 *local_70;
  longlong local_68;
  longlong *local_58 [2];
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 == '\0') {
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    pcVar1 = (code *)*param_2;
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    uVar4 = (**(code **)(*plVar7 + 8))();
    (*pcVar1)(uVar4,&local_88);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    (**(code **)(*(longlong *)param_1[8] + 0x68))((longlong *)param_1[8],&local_88);
    plVar7 = local_88;
    puVar3 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    local_68 = *param_2;
    local_58[0] = (longlong *)0x0;
    if (local_68 == 0) {
      lVar5 = 0;
    }
    else {
      plVar6 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar6 = (longlong *)param_2[2];
      }
      (**(code **)*plVar6)(plVar6,local_58);
      lVar5 = local_68;
    }
    puVar3[1] = &DAT_14ba6cdb8;
    *puVar3 = &PTR_FUN_14ba6cdc0;
    puVar3[0xd] = &PTR_FUN_14ba6cdd0;
    *(undefined4 *)((longlong)puVar3 + 100) = 0;
    puVar3[2] = lVar5;
    puVar3[4] = 0;
    if (lVar5 == 0) {
      *(undefined4 *)(puVar3 + 10) = 0;
    }
    else {
      plVar6 = local_58[0];
      if (local_58[0] == (longlong *)0x0) {
        plVar6 = local_48;
      }
      (**(code **)*plVar6)(plVar6,puVar3 + 4);
      *(undefined4 *)(puVar3 + 10) = 0;
      if (local_68 != 0) {
        plVar6 = local_48;
        if (local_58[0] != (longlong *)0x0) {
          plVar6 = local_58[0];
        }
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    local_70 = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)((longlong)puVar3 + (longlong)*(int *)(puVar3[1] + 4) + 8))
                ((longlong)puVar3 + (longlong)*(int *)(puVar3[1] + 4) + 8);
    }
    (**(code **)(*plVar7 + 0x48))(plVar7,&local_70);
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_88 + (longlong)*(int *)(local_88[1] + 4) + 8) + 8))
                ();
    }
  }
  if (*param_2 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149033bbe FUN_149033bbe body=548 status=ok
// SIG undefined FUN_149033bbe(void)

ushort FUN_149033bbe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ushort uVar24;
  ushort uVar25;
  bool bVar26;
  
  uVar24 = *(ushort *)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0x20);
  plVar4 = *(longlong **)(param_1 + 0x30);
  lVar6 = DAT_14c965178;
  lVar7 = DAT_14c965190;
  lVar8 = DAT_14c9651a8;
  lVar9 = DAT_14c9651c0;
  lVar10 = DAT_14c9651d8;
  lVar11 = DAT_14c9651f0;
  lVar12 = DAT_14c965208;
  lVar13 = DAT_14c965220;
  lVar14 = DAT_14c965238;
  lVar15 = DAT_14c965250;
  lVar16 = DAT_14c965418;
  lVar17 = DAT_14c965430;
  lVar18 = DAT_14c965448;
  lVar19 = DAT_14c965460;
  lVar20 = DAT_14c965478;
  lVar21 = DAT_14c965490;
  lVar22 = DAT_14c9654a8;
  lVar23 = DAT_14c9654c0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar23 = DAT_14c9654c0;
    lVar22 = DAT_14c9654a8;
    lVar21 = DAT_14c965490;
    lVar20 = DAT_14c965478;
    lVar19 = DAT_14c965460;
    lVar18 = DAT_14c965448;
    lVar17 = DAT_14c965430;
    lVar16 = DAT_14c965418;
    lVar15 = DAT_14c965250;
    lVar14 = DAT_14c965238;
    lVar13 = DAT_14c965220;
    lVar12 = DAT_14c965208;
    lVar11 = DAT_14c9651f0;
    lVar10 = DAT_14c9651d8;
    lVar9 = DAT_14c9651c0;
    lVar8 = DAT_14c9651a8;
    lVar7 = DAT_14c965190;
    lVar6 = DAT_14c965178;
    UNLOCK();
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
  bVar26 = (uVar24 & 3) != 0;
  uVar25 = bVar26 + 4 + (ushort)bVar26;
  if ((uVar24 & 0xc) == 0) {
    uVar25 = (ushort)bVar26 * 2;
  }
  uVar5 = uVar25 + 8;
  if ((uVar24 & 0x30) == 0) {
    uVar5 = uVar25;
  }
  uVar25 = uVar5 | 0x80;
  if ((uVar24 & 0xc0) == 0) {
    uVar25 = uVar5;
  }
  uVar25 = uVar24 >> 8 & 1 | uVar25;
  uVar24 = uVar25 | 0x400;
  if (lVar3 == lVar16) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar18) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar22) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar20) {
    uVar25 = uVar24;
  }
  uVar24 = uVar25 | 0x800;
  if (lVar3 == lVar17) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar19) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar23) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar21) {
    uVar25 = uVar24;
  }
  uVar24 = uVar25 | 0x200;
  if (lVar3 == lVar15) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar14) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar13) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar12) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar11) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar10) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar9) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar8) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar7) {
    uVar25 = uVar24;
  }
  if (lVar3 == lVar6) {
    uVar25 = uVar24;
  }
  return uVar25;
}



// FUNCTION 149033de2 FUN_149033de2 body=233 status=ok
// SIG undefined FUN_149033de2(void)

undefined8 FUN_149033de2(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined **local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (((cVar1 == '\0') || ((char)param_1[0x71] != '\0')) || ((char)param_1[0x5f] != '\0')) {
    uVar2 = 0;
  }
  else {
    if (param_1 + 0x47 != param_2) {
      FUN_149048ba4(param_1 + 0x47,param_2);
    }
    local_58 = &PTR_FUN_14ba6d888;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_48 = (ulonglong)*(uint *)((longlong)param_2 + 0x3c);
    local_4c = FUN_149033bbe(param_2);
    local_50 = 0;
    (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_60);
    (**(code **)(*local_60 + 0x108))(local_60,&local_58);
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_60 + (longlong)*(int *)(local_60[1] + 4) + 8) + 8))
                ();
    }
    uVar2 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149033ecc FUN_149033ecc body=237 status=ok
// SIG undefined FUN_149033ecc(void)

undefined8 FUN_149033ecc(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined **local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (((cVar1 == '\0') || ((char)param_1[0x71] != '\0')) ||
     (*(char *)((longlong)param_1 + 0x2f9) != '\0')) {
    uVar2 = 0;
  }
  else {
    if (param_1 + 0x50 != param_2) {
      FUN_149048ba4(param_1 + 0x50,param_2);
    }
    local_50 = &PTR_FUN_14ba6d888;
    uStack_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_40 = (ulonglong)*(uint *)((longlong)param_2 + 0x3c);
    local_44 = FUN_149033bbe(param_2);
    local_48 = 2;
    (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_58);
    (**(code **)(*local_58 + 0x108))(local_58,&local_50);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_58 + (longlong)*(int *)(local_58[1] + 4) + 8) + 8))
                ();
    }
    uVar2 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149033fba FUN_149033fba body=411 status=ok
// SIG undefined FUN_149033fba(void)

undefined8 FUN_149033fba(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  HKL dwhkl;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined **local_50;
  undefined4 local_48;
  uint local_44;
  ulonglong local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (((cVar2 == '\0') || ((char)param_1[0x71] != '\0')) ||
     (*(char *)((longlong)param_1 + 0x2fa) != '\0')) {
    uVar5 = 0;
  }
  else {
    if (param_1 + 0x59 != param_2) {
      param_1[0x59] = (longlong)&PTR_FUN_149eda670;
      lVar1 = param_2[2];
      param_1[0x5a] = param_2[1];
      param_1[0x5b] = lVar1;
      param_1[0x5c] = param_2[3];
      param_1[0x59] = (longlong)&PTR_FUN_149eda6b0;
      *(short *)(param_1 + 0x5d) = (short)param_2[4];
      *(undefined1 *)(param_1 + 0x5e) = 1;
    }
    local_50 = &PTR_FUN_14ba6d888;
    uStack_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_40 = (ulonglong)*(ushort *)(param_2 + 4);
    local_48 = 3;
    uVar3 = *(ushort *)(param_2 + 1);
    uVar6 = (uint)((uVar3 & 3) != 0);
    bVar7 = (uVar3 & 0xc) == 0;
    uVar4 = uVar6 * 2 + 4;
    if (bVar7) {
      uVar4 = uVar6 * 2;
    }
    bVar8 = (uVar3 & 0x30) == 0;
    uVar6 = uVar4 + 8;
    if (bVar8) {
      uVar6 = uVar4;
    }
    uVar4 = uVar6 | 0x80;
    if ((uVar3 & 0xc0) == 0) {
      uVar4 = uVar6;
    }
    uVar6 = uVar3 >> 8 & 1;
    local_44 = uVar6 | uVar4;
    if (!bVar8 && !bVar7) {
      dwhkl = GetKeyboardLayout(0);
      uVar3 = VkKeyScanExW(*(WCHAR *)(param_2 + 4),dwhkl);
      if ((uVar3 & 0xff00) == 0x600) {
        local_44 = uVar6 | uVar4 & 0xffffeff3 | 0x1000;
      }
    }
    (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_58);
    (**(code **)(*local_58 + 0x108))(local_58,&local_50);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_58 + (longlong)*(int *)(local_58[1] + 4) + 8) + 8))
                ();
    }
    uVar5 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149034156 FUN_149034156 body=349 status=ok
// SIG undefined FUN_149034156(void)

undefined8 *
FUN_149034156(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined8 **local_50 [3];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14ba6ce00;
  *(undefined4 *)(param_1 + 1) = param_2;
  FUN_149021a64(param_3,local_50);
  pppuVar2 = local_50;
  if (7 < local_38) {
    pppuVar2 = (undefined8 ***)local_50[0];
  }
  FUN_140056680(local_60,pppuVar2);
  FUN_140233b1a(param_1 + 2,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (7 < local_38) {
    FUN_14600850e(local_50,local_50[0]);
  }
  FUN_149021a64(param_4,local_50);
  pppuVar2 = local_50;
  if (7 < local_38) {
    pppuVar2 = (undefined8 ***)local_50[0];
  }
  FUN_140056680(local_60,pppuVar2);
  FUN_140233b1a(param_1 + 4,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (7 < local_38) {
    FUN_14600850e(local_50,local_50[0]);
  }
  *(undefined1 *)(param_1 + 6) = 0;
  lVar1 = *param_5;
  param_1[7] = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
    lVar1 = *param_5;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490342b4 FUN_1490342b4 body=296 status=ok
// SIG undefined FUN_1490342b4(void)

undefined8 *
FUN_1490342b4(undefined8 *param_1,undefined8 param_2,undefined1 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 **local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14ba6ce00;
  *(undefined4 *)(param_1 + 1) = 0x7f;
  FUN_149021a64(param_2,local_58);
  pppuVar4 = local_58;
  if (7 < local_40) {
    pppuVar4 = (undefined8 ***)local_58[0];
  }
  FUN_140056680(local_68,pppuVar4);
  FUN_140233b1a(param_1 + 2,local_68);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (7 < local_40) {
    FUN_14600850e(local_58,local_58[0]);
  }
  plVar3 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar3;
  param_1[4] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 5) = (int)plVar3[1];
  *(undefined1 *)(param_1 + 6) = param_3;
  lVar2 = *param_4;
  param_1[7] = lVar2;
  if (lVar2 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8))();
    lVar2 = *param_4;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490343de FUN_1490343de body=577 status=ok
// SIG undefined FUN_1490343de(void)

undefined1 *
FUN_1490343de(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  char cVar9;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined1 local_120 [8];
  int local_118;
  int local_114;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  cVar5 = (**(code **)(*param_1 + 0x28))(param_1);
  if ((cVar5 != '\0') && ((char)param_1[0x71] == '\0')) {
    lVar6 = *(longlong *)(param_4 + 0x40);
    plVar3 = *(longlong **)(param_4 + 0x50);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    lVar4 = DAT_14c966e98;
    if (((lVar6 == DAT_14c966e98) || (lVar6 == DAT_14c966fa0)) || (lVar6 == DAT_14c966fb8)) {
      cVar5 = (lVar6 == DAT_14c966fa0) + '\x01';
      local_128 = CONCAT31(local_128._1_3_,param_5);
      FUN_149034620(param_1,local_120,param_3,param_4);
      cVar9 = '\0';
      if ((lVar6 == lVar4) && (lVar6 = (longlong)(int)param_1[0x6d], cVar5 = cVar9, 0 < lVar6)) {
        pcVar8 = (char *)(param_1[0x6c] + lVar6 * 0x14 + -4);
        uVar7 = lVar6 + 1;
        do {
          if (((*(int *)(pcVar8 + -0x10) <= local_118) && (local_118 < *(int *)(pcVar8 + -8))) &&
             ((*(int *)(pcVar8 + -0xc) <= local_114 && (local_114 < *(int *)(pcVar8 + -4))))) {
            if (*pcVar8 == '\x01') {
              *(undefined1 *)(param_1 + 0x46) = 1;
            }
            break;
          }
          pcVar8 = pcVar8 + -0x14;
          uVar7 = uVar7 - 1;
        } while (1 < uVar7);
      }
      (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_100);
      local_128 = 1;
      (**(code **)(*(longlong *)CONCAT71(uStack_ff,local_100) + 0x110))
                ((longlong *)CONCAT71(uStack_ff,local_100),local_120,cVar5,0);
      lVar6 = CONCAT71(uStack_ff,local_100);
      if (lVar6 != 0) {
        (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar6 + 8) + 4) + lVar6 + 8) + 8))();
      }
      local_100 = 1;
      local_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      memset(local_d8,0,0x88);
      local_50 = 0x20702;
      local_4c = 0;
      FUN_1403d4924(param_2,&local_100);
      FUN_14493db24(&local_100);
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
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149034620 FUN_149034620 body=885 status=ok
// SIG undefined FUN_149034620(void)

undefined8 *
FUN_149034620(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,char param_5
             )

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined4 *local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *param_2 = &PTR_FUN_14ba6d8a8;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  local_98 = param_3[6];
  local_c8 = *(undefined4 *)param_3;
  uStack_c4 = *(undefined4 *)((longlong)param_3 + 4);
  fStack_c0 = *(float *)(param_3 + 1);
  uStack_bc = *(undefined4 *)((longlong)param_3 + 0xc);
  local_b8 = *(undefined4 *)(param_3 + 2);
  uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_b0 = *(undefined4 *)(param_3 + 3);
  fStack_ac = *(float *)((longlong)param_3 + 0x1c);
  local_a8 = *(float *)(param_3 + 4);
  fStack_a4 = *(float *)((longlong)param_3 + 0x24);
  fStack_a0 = *(float *)(param_3 + 5);
  fStack_9c = *(float *)((longlong)param_3 + 0x2c);
  if (*(char *)(param_1 + 0xc3) == '\x01') {
    local_158 = &local_140;
    local_140 = 0x3f0000003f000000;
    local_118 = 0x3f800000;
    uStack_110 = 0xbf80000000000000;
    local_108 = 0;
    local_148 = (longlong)param_3 + 0x1c;
    local_120 = *(undefined8 *)((longlong)param_3 + 0xc);
    local_124 = *(undefined4 *)(param_3 + 1);
    local_150 = &local_124;
    local_130 = 0x3f800000;
    local_128 = 0;
    local_138 = *param_3;
    FUN_146978c22(&local_100,&local_138,&local_130);
    FUN_144b00ffc(&local_c8,&local_100);
  }
  fVar10 = fStack_c0;
  plVar3 = *(longlong **)(param_1 + 0x378);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_149034783;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar6 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x370) != 0) {
      FUN_14151e938(*(longlong *)(param_1 + 0x370),&local_100);
      fVar8 = (float)(**(code **)(*local_100 + 0xf8))();
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar2 = (int *)((longlong)local_f8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_f8 + 0x10))(local_f8);
          }
        }
      }
      fVar10 = fVar10 / fVar8;
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
LAB_149034783:
  fVar9 = 1.0 / (fStack_ac * fStack_a0 - fStack_a4 * local_a8);
  fVar8 = (-local_a8 * fVar9 * *(float *)(param_4 + 0x20) +
           fStack_ac * fVar9 * *(float *)(param_4 + 0x24) +
          (-fStack_9c * -local_a8 * fVar9 - fStack_ac * fVar9 * (float)local_98)) * fVar10;
  fVar10 = (fVar9 * fStack_a0 * *(float *)(param_4 + 0x20) +
            -fStack_a4 * fVar9 * *(float *)(param_4 + 0x24) +
           (-fStack_9c * fVar9 * fStack_a0 - (float)local_98 * -fStack_a4 * fVar9)) * fVar10;
  if (param_5 != '\0') {
    fVar10 = fVar10 + (float)(int)*(undefined8 *)(param_1 + 0x300);
    fVar8 = fVar8 + (float)(int)((ulonglong)*(undefined8 *)(param_1 + 0x300) >> 0x20);
  }
  *(int *)(param_2 + 1) = (int)fVar10;
  *(int *)((longlong)param_2 + 0xc) = (int)fVar8;
  uVar5 = FUN_14903651a(param_4);
  *(undefined4 *)(param_2 + 2) = uVar5;
  if ((local_90 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149034996 FUN_149034996 body=608 status=ok
// SIG undefined FUN_149034996(void)

undefined1 *
FUN_149034996(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined1 local_118 [32];
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  cVar5 = (**(code **)(*param_1 + 0x28))(param_1);
  if ((cVar5 == '\0') || ((char)param_1[0x71] != '\0')) goto LAB_149034a0d;
  lVar3 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (((lVar3 == DAT_14c966e98) || (lVar3 == DAT_14c966fa0)) || (lVar3 == DAT_14c966fb8)) {
    cVar5 = (lVar3 == DAT_14c966fa0) + '\x01';
    if (lVar3 == DAT_14c966e98) {
      *(undefined1 *)(param_1 + 0x46) = 0;
      cVar5 = '\0';
    }
    local_128 = CONCAT31(local_128._1_3_,param_5);
    FUN_149034620(param_1,local_118,param_3,param_4);
    (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_f8);
    local_128 = 1;
    (**(code **)(*(longlong *)CONCAT71(uStack_f7,local_f8) + 0x110))
              ((longlong *)CONCAT71(uStack_f7,local_f8),local_118,cVar5,1);
    lVar3 = CONCAT71(uStack_f7,local_f8);
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
    }
LAB_149034aac:
    local_f8 = 1;
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    memset(local_d0,0,0x88);
    local_48 = 0x20702;
    local_44 = 0;
    FUN_1403d4924(param_2,&local_f8);
    FUN_14493db24(&local_f8);
  }
  else if ((lVar3 == DAT_14c964d40) && (*(char *)((longlong)param_1 + 0xc1) == '\x01')) {
    cVar5 = (**(code **)(*param_1 + 0xd8))(param_1);
    if (cVar5 != '\0') {
      (**(code **)(*param_1 + 0xe0))(param_1);
      goto LAB_149034aac;
    }
  }
  else if ((lVar3 == DAT_14c964d58) &&
          ((*(char *)((longlong)param_1 + 0xc1) == '\x01' &&
           (cVar5 = (**(code **)(*param_1 + 0xe8))(param_1), cVar5 != '\0')))) {
    (**(code **)(*param_1 + 0xf0))(param_1);
    goto LAB_149034aac;
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
LAB_149034a0d:
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149034bf8 FUN_149034bf8 body=467 status=ok
// SIG undefined FUN_149034bf8(void)

undefined1 *
FUN_149034bf8(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined1 local_118 [32];
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  cVar5 = (**(code **)(*param_1 + 0x28))(param_1);
  if ((cVar5 != '\0') && ((char)param_1[0x71] == '\0')) {
    lVar3 = *(longlong *)(param_4 + 0x40);
    plVar4 = *(longlong **)(param_4 + 0x50);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (((lVar3 == DAT_14c966e98) || (lVar3 == DAT_14c966fa0)) || (lVar3 == DAT_14c966fb8)) {
      cVar5 = (lVar3 == DAT_14c966fa0) + '\x01';
      if (lVar3 == DAT_14c966e98) {
        cVar5 = '\0';
      }
      local_128 = CONCAT31(local_128._1_3_,param_5);
      FUN_149034620(param_1,local_118,param_3,param_4);
      (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_f8);
      local_128 = 2;
      (**(code **)(*(longlong *)CONCAT71(uStack_f7,local_f8) + 0x110))
                ((longlong *)CONCAT71(uStack_f7,local_f8),local_118,cVar5,0);
      lVar3 = CONCAT71(uStack_f7,local_f8);
      if (lVar3 != 0) {
        (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
      }
      local_f8 = 1;
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      local_44 = 0;
      FUN_1403d4924(param_2,&local_f8);
      FUN_14493db24(&local_f8);
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
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149034dcc FUN_149034dcc body=501 status=ok
// SIG undefined FUN_149034dcc(void)

undefined1 *
FUN_149034dcc(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  undefined1 local_108 [32];
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  cVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if ((cVar2 == '\0') || ((char)param_1[0x71] != '\0')) goto LAB_149034e3f;
  local_128 = param_5;
  FUN_149034620(param_1,local_108,param_3,param_4);
  if ((char)param_1[0x46] == '\x01') {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x210))(param_1);
    if (((longlong *)*plVar3 == (longlong *)0x0 || (int)plVar3[1] == 0) ||
       (cVar2 = (**(code **)(*(longlong *)*plVar3 + 0x30))(), cVar2 == '\0')) goto LAB_149034f16;
    local_120 = (undefined4)DAT_14c966e98;
    uStack_11c = DAT_14c966e98._4_4_;
    uStack_118 = (undefined4)DAT_14c966ea0;
    uStack_114 = DAT_14c966ea0._4_4_;
    local_110 = DAT_14c966ea8;
    if (DAT_14c966ea8 != 0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
      UNLOCK();
    }
    cVar2 = FUN_1407c9dec(param_4,&local_120);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x46) = 0;
      goto LAB_149034f16;
    }
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x210))();
    if (*(int *)(puVar4 + 1) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)*puVar4;
    }
    cVar2 = (**(code **)(*plVar3 + 0x58))();
    if (cVar2 == '\0') goto LAB_149034f16;
  }
  else {
LAB_149034f16:
    (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_e8);
    (**(code **)(*(longlong *)CONCAT71(uStack_e7,local_e8) + 0x118))
              ((longlong *)CONCAT71(uStack_e7,local_e8),local_108,0);
    lVar1 = CONCAT71(uStack_e7,local_e8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
  }
  local_e8 = 1;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  memset(local_c0,0,0x88);
  local_38 = 0x20702;
  local_34 = 0;
  FUN_1403d4924(param_2,&local_e8);
  FUN_14493db24(&local_e8);
LAB_149034e3f:
  if ((local_30 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149034fc2 FUN_149034fc2 body=201 status=ok
// SIG undefined FUN_149034fc2(void)

void FUN_149034fc2(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined **local_40;
  undefined8 local_38;
  uint local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14ba6d600;
  local_38 = 0;
  local_30 = local_30 & 0xffffff00;
  FUN_1490209ca(param_1,&local_40);
  local_40 = &PTR_FUN_14ba6d8a8;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if ((cVar1 != '\0') && ((char)param_1[0x71] == '\0')) {
    (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_48);
    (**(code **)(*local_48 + 0x118))(local_48,&local_40,1);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_48 + (longlong)*(int *)(local_48[1] + 4) + 8) + 8))
                ();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903509c FUN_14903509c body=367 status=ok
// SIG undefined FUN_14903509c(void)

undefined1 *
FUN_14903509c(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4,
             undefined1 param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_118 [32];
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  cVar4 = (**(code **)(*param_1 + 0x28))(param_1);
  if ((((cVar4 != '\0') && (*(char *)((longlong)param_1 + 0x2fd) == '\x01')) &&
      ((char)param_1[0x71] == '\0')) && (*(char *)(param_4 + 0x65) == '\x01')) {
    fVar1 = *(float *)(param_4 + 0x6c);
    fVar2 = *(float *)(param_4 + 0x68);
    local_128 = param_5;
    FUN_149034620(param_1,local_118,param_3,param_4);
    (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_f8);
    (**(code **)(*(longlong *)CONCAT71(uStack_f7,local_f8) + 0x120))
              ((longlong *)CONCAT71(uStack_f7,local_f8),local_118,(int)fVar2,(int)fVar1);
    lVar3 = CONCAT71(uStack_f7,local_f8);
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
    }
    local_f8 = 1;
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    memset(local_d0,0,0x88);
    local_48 = 0x20702;
    FUN_1403d4924(param_2,&local_f8);
    FUN_14493db24(&local_f8);
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903520c FUN_14903520c body=416 status=ok
// SIG undefined FUN_14903520c(void)

undefined1 *
FUN_14903520c(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4,
             undefined1 param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong *local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [136];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x2fd) == '\x01')) &&
     ((char)param_1[0x71] == '\0')) {
    fVar4 = *(float *)(param_4 + 0x6c) * 120.0;
    if (0.001 < ABS(fVar4)) {
      local_118 = param_5;
      FUN_149034620(param_1,local_108,param_3,param_4);
      (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_110);
      uVar3 = *(ushort *)(param_4 + 8) & 3;
      uVar2 = (uint)fVar4;
      if ((*(ushort *)(param_4 + 8) & 3) != 0) {
        uVar3 = uVar2;
        uVar2 = 0;
      }
      (**(code **)(*local_110 + 0x120))(local_110,local_108,uVar3,uVar2);
      if (local_110 != (longlong *)0x0) {
        (**(code **)(*(longlong *)((longlong)local_110 + (longlong)*(int *)(local_110[1] + 4) + 8) +
                    8))();
      }
    }
    local_108[0] = 1;
    local_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    memset(local_e0,0,0x88);
    local_58 = 0x20702;
    FUN_1403d4924(param_2,local_108);
    FUN_14493db24(local_108);
  }
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490353ae FUN_1490353ae body=220 status=ok
// SIG undefined FUN_1490353ae(void)

void FUN_1490353ae(longlong *param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  bVar1 = (byte)param_2;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if (param_3 == '\0') {
    *(byte *)((longlong)param_1 + 0x2fb) = bVar1;
    lVar3 = param_1[0x6a];
    uVar4 = CONCAT71(uVar5,~*(byte *)((longlong)param_1 + 0x2fc) & bVar1);
  }
  else {
    *(byte *)((longlong)param_1 + 0x2fc) = bVar1;
    lVar3 = param_1[0x6a];
    if (bVar1 == 0) {
      uVar4 = CONCAT71(uVar5,*(undefined1 *)((longlong)param_1 + 0x2fb));
    }
    else {
      uVar4 = 0;
    }
  }
  FUN_149027b3e(lVar3,uVar4 & 0xffffffffffffff01);
  cVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if ((cVar2 != '\0') && (*(char *)((longlong)param_1 + 0x2fc) == '\0')) {
    (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_20);
    (**(code **)(*local_20 + 0x130))(local_20,*(undefined1 *)((longlong)param_1 + 0x2fb));
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_20 + (longlong)*(int *)(local_20[1] + 4) + 8) + 8))
                ();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903548c FUN_14903548c body=119 status=ok
// SIG undefined FUN_14903548c(void)

void FUN_14903548c(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_18);
    (**(code **)(*local_18 + 0x138))();
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_18 + (longlong)*(int *)(local_18[1] + 4) + 8) + 8))
                ();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149035504 FUN_149035504 body=42 status=ok
// SIG undefined FUN_149035504(void)

undefined8 FUN_149035504(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000149035522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)param_1[8] + 8))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 14903552e FUN_14903552e body=41 status=ok
// SIG undefined FUN_14903552e(void)

void FUN_14903552e(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014903554c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 149035558 FUN_149035558 body=42 status=ok
// SIG undefined FUN_149035558(void)

undefined8 FUN_149035558(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000149035576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)param_1[8] + 0x18))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 149035582 FUN_149035582 body=41 status=ok
// SIG undefined FUN_149035582(void)

void FUN_149035582(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001490355a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[8] + 0x20))();
    return;
  }
  return;
}



// FUNCTION 1490355ac FUN_1490355ac body=42 status=ok
// SIG undefined FUN_1490355ac(void)

undefined8 FUN_1490355ac(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001490355ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)param_1[8] + 0x28))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 1490355d6 FUN_1490355d6 body=41 status=ok
// SIG undefined FUN_1490355d6(void)

void FUN_1490355d6(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001490355f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[8] + 0x30))();
    return;
  }
  return;
}



// FUNCTION 149035600 FUN_149035600 body=41 status=ok
// SIG undefined FUN_149035600(void)

void FUN_149035600(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014903561e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[8] + 0x40))();
    return;
  }
  return;
}



// FUNCTION 14903562a FUN_14903562a body=413 status=ok
// SIG undefined FUN_14903562a(void)

void FUN_14903562a(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  size_t sVar3;
  wchar_t *_Str;
  undefined1 auStack_118 [40];
  undefined **local_f0;
  longlong local_e8;
  char local_e0;
  undefined **local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != '\0') {
    (**(code **)(*(longlong *)param_1[8] + 0x68))((longlong *)param_1[8],&local_c0);
    plVar1 = local_c0;
    (**(code **)(*local_c0 + 0x98))(local_c0,&local_d8);
    if (*(int *)(param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_2;
    }
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_14901fe1a(&local_f0,local_30);
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_f0,&local_d8,0);
    local_f0 = &PTR_FUN_14ba6d600;
    if (local_e8 != 0) {
      if (local_e0 == '\x01') {
        cef_string_utf16_clear();
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
      }
      local_e8 = 0;
      local_e0 = '\0';
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_d8 = &PTR_FUN_14ba6d600;
    if ((local_d0 != 0) && (local_c8 == '\x01')) {
      cef_string_utf16_clear();
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_c0 + (longlong)*(int *)(local_c0[1] + 4) + 8) + 8))
                ();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490357d0 FUN_1490357d0 body=254 status=ok
// SIG undefined FUN_1490357d0(void)

void FUN_1490357d0(longlong *param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined **local_38;
  longlong local_30;
  char local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (((cVar1 != '\0') && ((char)param_1[0x62] == '\0')) && (1 < (int)param_1[0x66])) {
    (**(code **)(*(longlong *)param_1[8] + 0x68))((longlong *)param_1[8],&local_20);
    if (local_20 != (longlong *)0x0) {
      if ((int)param_1[0x66] == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)param_1[0x65];
      }
      FUN_1490201ba(&local_38,puVar2);
      FUN_144a7e010(param_1 + 0x65);
      (**(code **)(*local_20 + 0x60))(local_20,&local_38);
      local_38 = &PTR_FUN_14ba6d600;
      if ((local_30 != 0) && (local_28 == '\x01')) {
        cef_string_utf16_clear();
        if (local_30 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*(longlong *)((longlong)local_20 + (longlong)*(int *)(local_20[1] + 4) + 8) + 8
                    ))();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490358d0 FUN_1490358d0 body=152 status=ok
// SIG undefined FUN_1490358d0(void)

void FUN_1490358d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x338);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    if (*(int *)((longlong)plVar1 + 0x1c) < 1) {
      *(undefined4 *)(plVar1 + 3) = 0;
    }
    else {
      lVar2 = *(longlong *)(*plVar1 + (longlong)*(int *)((longlong)plVar1 + 0x14) * 8);
      *(undefined8 *)(*plVar1 + (longlong)*(int *)((longlong)plVar1 + 0x14) * 8) = 0;
      *(int *)((longlong)plVar1 + 0x14) = (*(int *)((longlong)plVar1 + 0x14) + 1) % (int)plVar1[1];
      *(int *)((longlong)plVar1 + 0x1c) = *(int *)((longlong)plVar1 + 0x1c) + -1;
      *(undefined4 *)(plVar1 + 3) = 0;
      if (lVar2 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x40))(*(longlong **)(param_1 + 0x30),lVar2);
        if (((DAT_14c98e618 != 0) && (*(longlong **)(DAT_14c98e618 + 0x20) != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x198))(), cVar3 == '\0'))
        {
          return;
        }
        FUN_149032c50(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149035968 FUN_149035968 body=261 status=ok
// SIG undefined FUN_149035968(void)

ulonglong FUN_149035968(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  HINSTANCE hInstance;
  HCURSOR hCursor;
  LPCWSTR lpCursorName;
  ulonglong uVar4;
  
  hInstance = (HINSTANCE)FUN_14901fd7d();
  if (hInstance != (HINSTANCE)0x0) {
    uVar4 = 0;
    switch(param_2) {
    case 0x14:
      lpCursorName = (LPCWSTR)0x64f7;
      break;
    case 0x15:
      lpCursorName = (LPCWSTR)0x64f6;
      break;
    case 0x16:
      lpCursorName = (LPCWSTR)0x64fa;
      break;
    case 0x17:
      lpCursorName = (LPCWSTR)0x64fb;
      break;
    case 0x18:
      lpCursorName = (LPCWSTR)0x64fc;
      break;
    case 0x19:
      lpCursorName = (LPCWSTR)0x64fd;
      break;
    case 0x1a:
      lpCursorName = (LPCWSTR)0x64fe;
      break;
    case 0x1b:
      lpCursorName = (LPCWSTR)0x64ff;
      break;
    case 0x1c:
      lpCursorName = (LPCWSTR)0x6500;
      break;
    default:
      goto switchD_14903599e_caseD_1d;
    case 0x2b:
      lpCursorName = (LPCWSTR)0x64f9;
      break;
    case 0x2c:
      lpCursorName = (LPCWSTR)0x64f8;
    }
    hCursor = LoadCursorW(hInstance,lpCursorName);
    if (hCursor != (HCURSOR)0x0) {
      plVar2 = *(longlong **)(DAT_14c968088 + 8);
      plVar3 = *(longlong **)(DAT_14c968088 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x58))(plVar2,0xe,hCursor);
        *(undefined4 *)(param_1 + 0x228) = 0xe;
        SetCursor(hCursor);
      }
      uVar4 = CONCAT71((int7)((ulonglong)hCursor >> 8),1);
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
      goto switchD_14903599e_caseD_1d;
    }
  }
  uVar4 = 0;
switchD_14903599e_caseD_1d:
  return uVar4 & 0xffffffff;
}



// FUNCTION 149035a6d FUN_149035a6d body=614 status=ok
// SIG undefined FUN_149035a6d(void)

undefined8 * FUN_149035a6d(undefined8 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6450) {
    FUN_144b3d300(&DAT_14cbf6450);
    if (DAT_14cbf6450 == -1) {
      FUN_140056680(&DAT_14cbf6440,L"SUCCESS");
      atexit((_func_5014 *)&LAB_1443f4877);
      _Init_thread_footer(&DAT_14cbf6450);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6468) {
    FUN_144b3d300(&DAT_14cbf6468);
    if (DAT_14cbf6468 == -1) {
      FUN_140056680(&DAT_14cbf6458,L"IO_PENDING");
      atexit((_func_5014 *)&LAB_1443f4888);
      _Init_thread_footer(&DAT_14cbf6468);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6480) {
    FUN_144b3d300(&DAT_14cbf6480);
    if (DAT_14cbf6480 == -1) {
      FUN_140056680(&DAT_14cbf6470,L"CANCELED");
      atexit((_func_5014 *)&LAB_1443f4899);
      _Init_thread_footer(&DAT_14cbf6480);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6498) {
    FUN_144b3d300(&DAT_14cbf6498);
    if (DAT_14cbf6498 == -1) {
      FUN_140056680(&DAT_14cbf6488,L"FAILED");
      atexit((_func_5014 *)&LAB_1443f48aa);
      _Init_thread_footer(&DAT_14cbf6498);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf64b0) {
    FUN_144b3d300(&DAT_14cbf64b0);
    if (DAT_14cbf64b0 == -1) {
      FUN_140056680(&DAT_14cbf64a0,L"UNKNOWN");
      atexit((_func_5014 *)&LAB_1443f48bb);
      _Init_thread_footer(&DAT_14cbf64b0);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((ulonglong)*param_2 < 5) {
    puVar1 = (undefined8 *)(&PTR_DAT_14ba6ed68)[*param_2];
  }
  else {
    puVar1 = &DAT_14cbf64a0;
  }
  FUN_144a787a6(param_1,puVar1);
  return param_1;
}



// FUNCTION 149035cd4 FUN_149035cd4 body=199 status=ok
// SIG undefined FUN_149035cd4(void)

void FUN_149035cd4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 ***pppuVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [20];
  undefined4 local_5c;
  undefined8 **local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_5c = param_3;
  FUN_14903064d(local_70);
  FUN_149021a64(param_2,local_58);
  pppuVar1 = local_58;
  if (7 < local_40) {
    pppuVar1 = (undefined8 ***)local_58[0];
  }
  FUN_140056680(local_80,pppuVar1);
  local_88 = param_5;
  FUN_149035d9c(param_1 + 0x158,local_80,local_70,param_4);
  if (7 < local_40) {
    FUN_14600850e(local_58,local_58[0]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149035d9c FUN_149035d9c body=183 status=ok
// SIG undefined FUN_149035d9c(void)

void FUN_149035d9c(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_28 = *param_3;
    *param_3 = 0;
    local_20 = (undefined4)param_3[1];
    local_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
    local_38 = *param_2;
    *param_2 = 0;
    local_30 = (undefined4)param_2[1];
    local_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    local_48 = param_5;
    (**(code **)(*param_1 + 0x60))();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149035e54 FUN_149035e54 body=234 status=ok
// SIG undefined FUN_149035e54(void)

void FUN_149035e54(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 ***pppuVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 **local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = param_3;
  local_5c = param_4;
  FUN_149035a6d(local_70);
  FUN_14903064d(local_80,&local_60);
  FUN_149021a64(param_2,local_58);
  pppuVar1 = local_58;
  if (7 < local_40) {
    pppuVar1 = (undefined8 ***)local_58[0];
  }
  FUN_140056680(local_90,pppuVar1);
  local_98 = param_5;
  FUN_149035f40(param_1 + 0x168,local_90,local_80,local_70);
  if (7 < local_40) {
    FUN_14600850e(local_58,local_58[0]);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149035f40 FUN_149035f40 body=239 status=ok
// SIG undefined FUN_149035f40(void)

void FUN_149035f40(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_30 = *param_4;
    *param_4 = 0;
    local_28 = (undefined4)param_4[1];
    local_24 = *(undefined4 *)((longlong)param_4 + 0xc);
    param_4[1] = 0;
    local_40 = *param_3;
    *param_3 = 0;
    local_38 = (undefined4)param_3[1];
    local_34 = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
    local_50 = *param_2;
    *param_2 = 0;
    local_48 = (undefined4)param_2[1];
    local_44 = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    local_58 = param_5;
    (**(code **)(*param_1 + 0x60))();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149036030 FUN_149036030 body=353 status=ok
// SIG undefined FUN_149036030(void)

void FUN_149036030(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong local_90 [2];
  longlong local_80 [2];
  undefined8 **local_70 [3];
  ulonglong local_58;
  undefined8 **local_50 [3];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = 0;
  if (param_3 - 1U < 5) {
    uVar3 = *(undefined4 *)(&DAT_14ba6ed90 + (ulonglong)(param_3 - 1U) * 4);
  }
  FUN_149021a64(param_5,local_50);
  pppuVar4 = local_50;
  if (7 < local_38) {
    pppuVar4 = (undefined8 ***)local_50[0];
  }
  FUN_140056680(local_80,pppuVar4);
  FUN_149021a64(param_4,local_70);
  pppuVar4 = local_70;
  if (7 < local_58) {
    pppuVar4 = (undefined8 ***)local_70[0];
  }
  FUN_140056680(local_90,pppuVar4);
  if ((*(int *)(param_1 + 0x180) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x178), plVar1 != (longlong *)0x0)) {
    local_98 = uVar3;
    (**(code **)(*plVar1 + 0x60))(plVar1,local_90,local_80,param_6);
  }
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (7 < local_58) {
    FUN_14600850e(local_70,local_70[0]);
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (7 < local_38) {
    FUN_14600850e(local_50,local_50[0]);
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149036192 FUN_149036192 body=902 status=ok
// SIG undefined FUN_149036192(void)

undefined8 *
FUN_149036192(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  void *_Src;
  undefined8 ***pppuVar6;
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  undefined **local_90;
  longlong local_88;
  char local_80;
  longlong local_78 [2];
  undefined8 **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)((longlong)param_1 + 0xa4) == -1) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x198))(param_1);
    if ((longlong *)*plVar4 != (longlong *)0x0 && (int)plVar4[1] != 0) {
      cVar3 = (**(code **)(*(longlong *)*plVar4 + 0x30))();
      if (cVar3 != '\0') {
        (**(code **)(*(longlong *)*param_4 + 0x18))((longlong *)*param_4,&local_90);
        FUN_149021a64(&local_90,&local_68);
        pppuVar6 = &local_68;
        if (7 < local_50) {
          pppuVar6 = (undefined8 ***)local_68;
        }
        FUN_140056680(local_78,pppuVar6);
        if (7 < local_50) {
          FUN_14600850e(&local_68,local_68);
        }
        local_58 = 0;
        local_50 = 7;
        local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffffffff0000);
        local_90 = &PTR_FUN_14ba6d600;
        if ((local_88 != 0) && (local_80 == '\x01')) {
          cef_string_utf16_clear();
          if (local_88 != 0) {
            FUN_1400020a8();
          }
        }
        (**(code **)(*(longlong *)*param_4 + 8))((longlong *)*param_4,&local_90);
        FUN_149021a64(&local_90,&local_68);
        pppuVar6 = &local_68;
        if (7 < local_50) {
          pppuVar6 = (undefined8 ***)local_68;
        }
        FUN_140056680(local_a0,pppuVar6);
        if (7 < local_50) {
          FUN_14600850e(&local_68,local_68);
        }
        local_58 = 0;
        local_50 = 7;
        local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffffffff0000);
        local_90 = &PTR_FUN_14ba6d600;
        if ((local_88 != 0) && (local_80 == '\x01')) {
          cef_string_utf16_clear();
          if (local_88 != 0) {
            FUN_1400020a8();
          }
        }
        local_68 = (undefined8 ***)0x0;
        uStack_60 = 0;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x198))();
        if (*(int *)(puVar5 + 1) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = (longlong *)*puVar5;
        }
        cVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,local_78,local_a0,&local_68);
        if (cVar3 != '\0') {
          *param_2 = local_68;
          local_68 = (undefined8 ***)0x0;
          *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
          if (local_a0[0] != 0) {
            FUN_1400020a8();
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          goto LAB_149036272;
        }
        if ((undefined8 ***)local_68 != (undefined8 ***)0x0) {
          FUN_1400020a8();
        }
        if (local_a0[0] != 0) {
          FUN_1400020a8();
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
    *param_2 = 0;
    param_2[1] = 0xffffffff00000000;
    goto LAB_149036272;
  }
  local_68 = (undefined8 **)0x0;
  uVar1 = *(uint *)(param_1 + 0x14);
  _Src = (void *)param_1[0x13];
  uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
  if ((longlong)(int)uVar1 == 0) {
    uStack_60 = (ulonglong)uVar1;
LAB_14903622a:
    if (_Src != (void *)0x0) {
      FUN_1400020a8(_Src);
    }
    param_1[0x13] = 0;
    param_1[0x14] = -0x100000000;
  }
  else {
    FUN_1446dd670(&local_68,uVar1,0);
    memcpy(local_68,_Src,(longlong)(int)uVar1 * 2);
    if (*(int *)((longlong)param_1 + 0xa4) != -1) {
      _Src = (void *)param_1[0x13];
      goto LAB_14903622a;
    }
  }
  *param_2 = local_68;
  local_68 = (undefined8 ***)0x0;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
LAB_149036272:
  lVar2 = *param_3;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  lVar2 = *param_4;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903651a FUN_14903651a body=287 status=ok
// SIG undefined FUN_14903651a(void)

ushort FUN_14903651a(longlong param_1)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *(ushort *)(param_1 + 8);
  local_38 = (undefined4)DAT_14c966e98;
  uStack_34 = DAT_14c966e98._4_4_;
  uStack_30 = (undefined4)DAT_14c966ea0;
  uStack_2c = DAT_14c966ea0._4_4_;
  local_28 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  cVar2 = FUN_1407c9dec(param_1,&local_38);
  local_50 = (undefined4)DAT_14c966fb8;
  uStack_4c = DAT_14c966fb8._4_4_;
  uStack_48 = (undefined4)DAT_14c966fc0;
  uStack_44 = DAT_14c966fc0._4_4_;
  local_40 = DAT_14c966fc8;
  if (DAT_14c966fc8 != 0) {
    LOCK();
    *(int *)(DAT_14c966fc8 + 8) = *(int *)(DAT_14c966fc8 + 8) + 1;
    UNLOCK();
  }
  cVar3 = FUN_1407c9dec(param_1,&local_50);
  local_68 = (undefined4)DAT_14c966fa0;
  uStack_64 = DAT_14c966fa0._4_4_;
  uStack_60 = (undefined4)DAT_14c966fa8;
  uStack_5c = DAT_14c966fa8._4_4_;
  local_58 = DAT_14c966fb0;
  if (DAT_14c966fb0 != 0) {
    LOCK();
    *(int *)(DAT_14c966fb0 + 8) = *(int *)(DAT_14c966fb0 + 8) + 1;
    UNLOCK();
  }
  bVar6 = (uVar4 & 3) != 0;
  uVar5 = bVar6 + 4 + (ushort)bVar6;
  if ((uVar4 & 0xc) == 0) {
    uVar5 = (ushort)bVar6 * 2;
  }
  uVar1 = uVar5 + 8;
  if ((uVar4 & 0x30) == 0) {
    uVar1 = uVar5;
  }
  uVar5 = uVar1 | 0x80;
  if ((uVar4 & 0xc0) == 0) {
    uVar5 = uVar1;
  }
  uVar5 = uVar4 >> 8 & 1 | uVar5;
  uVar4 = uVar5 | 0x10;
  if (cVar2 == '\0') {
    uVar4 = uVar5;
  }
  uVar5 = uVar4 | 0x20;
  if (cVar3 == '\0') {
    uVar5 = uVar4;
  }
  cVar2 = FUN_1407c9dec(param_1,&local_68);
  uVar4 = uVar5 | 0x40;
  if (cVar2 == '\0') {
    uVar4 = uVar5;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903663a FUN_14903663a body=290 status=ok
// SIG undefined FUN_14903663a(void)

undefined1 FUN_14903663a(void)

{
  undefined1 uVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf64b8) && (FUN_144b3d300(&DAT_14cbf64b8), DAT_14cbf64b8 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14cbf64b4 = FUN_14054d46e(&DAT_14c846b20,L"nocefaccelpaint");
    _Init_thread_footer(&DAT_14cbf64b8);
  }
  if (DAT_14cbf64b4 == '\0') {
    uVar1 = DAT_14cbf64bc;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbf64c0) &&
       (FUN_144b3d300(&DAT_14cbf64c0), uVar1 = DAT_14cbf64bc, DAT_14cbf64c0 == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14cbf64bc = FUN_14054d46e(&DAT_14c846b20,L"forcecefaccelpaint");
      _Init_thread_footer(&DAT_14cbf64c0);
      uVar1 = DAT_14cbf64bc;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14903675c FUN_14903675c body=223 status=ok
// SIG undefined FUN_14903675c(void)

void FUN_14903675c(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)((longlong)param_1 + 0x22d) == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x28))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
      if ((cVar1 == '\0') &&
         (((int)param_1[0x10] != (int)DAT_14c967818 ||
          (*(int *)((longlong)param_1 + 0x84) != DAT_14c967818._4_4_)))) {
        if (*(char *)((longlong)param_1 + 0x22e) == '\0') {
          FUN_1490335f2(param_1,1);
        }
        else if (*(char *)((longlong)param_1 + 0x22f) == '\x01') {
          *(undefined1 *)((longlong)param_1 + 0x22f) = 0;
          (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_20);
          (**(code **)(*local_20 + 0xe0))();
          if (local_20 != (longlong *)0x0) {
            (**(code **)(*(longlong *)((longlong)local_20 + (longlong)*(int *)(local_20[1] + 4) + 8)
                        + 8))();
          }
        }
        *(undefined1 *)((longlong)param_1 + 0x22e) = 0;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903689a FUN_14903689a body=547 status=ok
// SIG undefined FUN_14903689a(void)

void FUN_14903689a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  HWND hWndChild;
  longlong lVar5;
  HWND hWndNewParent;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[0x6e] = *param_2;
  plVar7 = (longlong *)param_2[1];
  plVar6 = (longlong *)param_1[0x6f];
  if (plVar6 != plVar7) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar6 = (longlong *)param_1[0x6f];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    param_1[0x6f] = (longlong)plVar7;
  }
  cVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar3 != '\0') {
    (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_48);
    hWndChild = (HWND)(**(code **)(*local_48 + 0x20))();
    if (hWndChild != (HWND)0x0) {
      plVar7 = (longlong *)param_1[0x6f];
      if (plVar7 == (longlong *)0x0) {
LAB_149036961:
        lVar5 = param_1[0x6e];
        bVar9 = true;
        plVar7 = (longlong *)0x0;
        lVar8 = 0;
      }
      else {
        iVar4 = (int)plVar7[1];
        do {
          if (iVar4 == 0) goto LAB_149036961;
          LOCK();
          iVar2 = (int)plVar7[1];
          bVar9 = iVar4 == iVar2;
          if (bVar9) {
            *(int *)(plVar7 + 1) = iVar4 + 1;
            iVar2 = iVar4;
          }
          iVar4 = iVar2;
          UNLOCK();
        } while (!bVar9);
        lVar5 = param_1[0x6e];
        bVar9 = false;
        lVar8 = lVar5;
      }
      if (((lVar5 != 0) && (param_1[0x6f] != 0)) && (0 < *(int *)(param_1[0x6f] + 8))) {
        FUN_14151e938(lVar8,&local_58);
        if (local_58 == 0) {
          hWndNewParent = (HWND)0x0;
        }
        else {
          FUN_14151e938(lVar8,&local_68);
          hWndNewParent = (HWND)(**(code **)(*local_68 + 0xc0))();
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_60 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)local_60 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_60 + 0x10))(local_60);
              }
            }
          }
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_50 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        if (hWndNewParent != (HWND)0x0) {
          SetParent(hWndChild,hWndNewParent);
        }
      }
      if (!bVar9) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_48 + (longlong)*(int *)(local_48[1] + 4) + 8) + 8))
                ();
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149036aee FUN_149036aee body=43 status=ok
// SIG undefined FUN_149036aee(void)

void FUN_149036aee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x350);
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FUN_149027446(lVar1);
  }
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}



// FUNCTION 149036b1a FUN_149036b1a body=79 status=ok
// SIG undefined FUN_149036b1a(void)

undefined8 * FUN_149036b1a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149048e0c(param_1,iVar1);
      FUN_149048e7f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149036b6a FUN_149036b6a body=150 status=ok
// SIG undefined FUN_149036b6a(void)

undefined8 * FUN_149036b6a(undefined8 *param_1,undefined1 param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_LAB_14ba6cd70;
  FUN_1412e3d1e(param_1 + 2);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return param_1;
}



// FUNCTION 149036c00 FUN_149036c00 body=147 status=ok
// SIG undefined FUN_149036c00(void)

undefined8 * FUN_149036c00(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = uVar3;
    param_1[1] = 0;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    *(undefined4 *)(param_1 + 2) = *param_3;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_1 + 3) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_1 = uVar3;
    param_1[1] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    *(undefined4 *)(param_1 + 2) = *param_3;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_1 + 3) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
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
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 149036c94 FUN_149036c94 body=214 status=ok
// SIG undefined FUN_149036c94(void)

undefined8 * FUN_149036c94(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14ba6bbe0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  return param_1;
}



// FUNCTION 149036d6a FUN_149036d6a body=271 status=ok
// SIG undefined FUN_149036d6a(void)

void FUN_149036d6a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba6bbe0;
  FUN_1449db362(param_1 + 0x69);
  FUN_1449db362(param_1 + 0x67);
  FUN_1449db362(param_1 + 0x65);
  FUN_1449db362(param_1 + 99);
  FUN_1449db362(param_1 + 0x61);
  FUN_1449db362(param_1 + 0x5f);
  FUN_1449db362(param_1 + 0x5d);
  FUN_1449db362(param_1 + 0x5b);
  FUN_1449db362(param_1 + 0x59);
  FUN_1449db362(param_1 + 0x57);
  FUN_1449db362(param_1 + 0x55);
  FUN_1449db362(param_1 + 0x53);
  FUN_1449db362(param_1 + 0x51);
  plVar3 = (longlong *)param_1[0x50];
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
  plVar3 = (longlong *)param_1[0x4e];
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
  FUN_14171f70c(param_1);
  return;
}



// FUNCTION 149036e7a FUN_149036e7a body=6898 status=ok
// SIG undefined FUN_149036e7a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_149036e7a(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined1 auStack_2d08 [32];
  undefined1 *local_2ce8;
  undefined8 local_2ce0;
  longlong local_2cd8;
  undefined8 local_2cd0;
  undefined8 local_2cc8;
  undefined8 local_2cc0;
  longlong local_2cb8;
  longlong local_2cb0;
  longlong local_2ca8;
  longlong local_2ca0;
  longlong local_2c98;
  longlong local_2c90;
  longlong local_2c88;
  longlong local_2c80;
  longlong local_2c78;
  longlong local_2c70;
  longlong local_2c68;
  longlong local_2c60;
  longlong local_2c58;
  undefined8 local_2c50;
  undefined1 local_2c41;
  undefined1 local_2c40 [8];
  longlong *local_2c38;
  undefined1 local_2c21;
  undefined1 local_2c20 [8];
  longlong *local_2c18;
  undefined1 local_2c01;
  code *local_2c00;
  undefined4 local_2bf8;
  undefined4 uStack_2bf4;
  undefined1 local_2be8 [4];
  undefined1 local_2be4 [4];
  longlong *local_2be0 [2];
  undefined1 local_2bd0 [16];
  undefined1 local_2bc0;
  undefined8 local_2bb8;
  undefined8 uStack_2bb0;
  undefined8 local_2ba8;
  longlong *local_2ba0;
  undefined8 local_2b98;
  longlong *local_2b90;
  undefined8 local_2b88;
  undefined8 local_2b80;
  longlong *local_2b78;
  undefined4 local_2b68;
  undefined4 uStack_2b64;
  undefined4 uStack_2b60;
  undefined4 uStack_2b5c;
  undefined1 local_2b58;
  undefined8 local_2b50;
  undefined4 local_2b48;
  void *local_2b38;
  int local_2b30;
  undefined4 local_2b2c;
  undefined8 local_2b28;
  longlong local_2b20;
  undefined8 local_2b18;
  longlong *local_2b10;
  undefined8 local_2b08;
  longlong *local_2b00;
  undefined8 local_2af8;
  longlong *local_2af0;
  undefined8 local_2ae8;
  longlong *local_2ae0;
  undefined1 local_2ad1;
  undefined1 local_2ad0 [8];
  longlong *local_2ac8;
  undefined1 local_2ab1;
  undefined8 local_2ab0;
  longlong *local_2aa8;
  undefined2 local_2a98;
  undefined8 local_2a90;
  undefined8 uStack_2a88;
  undefined2 local_2a80;
  undefined8 local_2a78;
  undefined8 uStack_2a70;
  undefined2 local_2a68;
  undefined8 local_2a60;
  undefined8 uStack_2a58;
  undefined2 local_2a50;
  undefined8 local_2a48;
  undefined8 uStack_2a40;
  undefined8 local_2a38;
  longlong *local_2a30;
  undefined8 local_2a28;
  longlong *local_2a20;
  undefined1 local_2a11;
  undefined1 local_2a10 [8];
  longlong *local_2a08;
  undefined1 local_29f1;
  undefined1 local_29f0 [8];
  longlong *local_29e8;
  undefined4 local_29d8;
  undefined1 local_29d4;
  undefined8 local_29d0;
  undefined8 uStack_29c8;
  undefined2 local_29c0;
  undefined8 local_29b8;
  undefined8 uStack_29b0;
  undefined8 local_29a8;
  longlong *local_29a0;
  undefined8 local_2998;
  longlong *local_2990;
  undefined4 local_2988;
  undefined1 local_2984;
  undefined8 local_2980;
  undefined8 uStack_2978;
  undefined1 local_2969;
  undefined1 local_2968 [8];
  longlong *local_2960;
  undefined8 local_2950;
  longlong *local_2948;
  undefined8 local_2940;
  longlong *local_2938;
  undefined1 local_2929;
  undefined1 local_2928 [8];
  longlong *local_2920;
  undefined1 local_2910 [4];
  undefined1 local_290c [4];
  longlong *local_2908 [2];
  undefined1 local_28f8 [16];
  undefined1 local_28e8;
  undefined8 local_28e0;
  undefined8 uStack_28d8;
  undefined8 local_28d0;
  longlong *local_28c8;
  undefined8 local_28c0;
  longlong *plStack_28b8;
  undefined1 local_28a9;
  undefined1 local_28a8 [8];
  longlong *local_28a0;
  undefined1 local_2890 [4];
  undefined1 local_288c [4];
  longlong *local_2888 [2];
  undefined1 local_2878 [16];
  undefined1 local_2868;
  undefined8 local_2860;
  undefined8 uStack_2858;
  undefined8 local_2850;
  longlong *local_2848;
  undefined8 local_2840;
  longlong *plStack_2838;
  undefined2 local_2830;
  undefined8 local_2828;
  undefined8 uStack_2820;
  undefined8 local_2818;
  longlong *local_2810;
  undefined8 local_2808;
  longlong *local_2800;
  undefined2 local_27f8;
  undefined8 local_27f0;
  undefined8 uStack_27e8;
  undefined8 local_27e0;
  longlong *local_27d8;
  undefined8 local_27d0;
  longlong *local_27c8;
  undefined8 local_27c0;
  longlong *local_27b8;
  undefined8 local_27b0;
  longlong *local_27a8;
  undefined1 local_27a0 [64];
  undefined4 local_2760;
  undefined1 local_275c;
  undefined4 local_2758;
  undefined1 local_2754;
  undefined1 local_2748 [88];
  code *local_26f0;
  undefined4 local_26e8;
  undefined4 local_2538;
  undefined1 local_2518 [16];
  undefined1 local_2508 [16];
  code *local_24f8;
  undefined4 local_24f0;
  undefined1 local_2340 [32];
  undefined1 local_2320;
  undefined1 local_231f;
  undefined1 local_231d;
  undefined4 local_231c;
  undefined4 local_2318;
  undefined1 local_2314;
  char local_2313;
  undefined4 local_22b0;
  undefined4 uStack_22ac;
  undefined4 uStack_22a8;
  undefined4 uStack_22a4;
  undefined1 local_22a0;
  undefined1 local_2298 [16];
  undefined1 local_2288 [16];
  undefined1 local_2278 [16];
  undefined1 local_2268 [16];
  undefined1 local_2258 [16];
  undefined1 local_2248 [16];
  undefined1 local_2238 [16];
  undefined1 local_2228 [16];
  undefined1 local_2218 [16];
  undefined1 local_2208 [16];
  undefined1 local_21f8 [16];
  undefined1 local_21e8 [16];
  undefined1 local_21d8 [16];
  undefined1 local_21c8 [32];
  undefined1 local_21a8 [64];
  undefined1 local_2168 [16];
  undefined1 local_2158 [440];
  undefined1 local_1fa0 [192];
  code *local_1ee0;
  undefined8 uStack_1ed8;
  undefined1 local_1ed0;
  undefined8 local_1ec8;
  undefined8 uStack_1ec0;
  undefined2 local_1e70;
  undefined1 local_1e68 [744];
  undefined2 local_1b80;
  undefined1 local_1b78 [16];
  undefined2 local_1b68;
  undefined1 local_1b60 [16];
  undefined2 local_1b50;
  undefined1 local_1b48 [112];
  undefined1 local_1ad8 [320];
  undefined1 local_1998 [24];
  undefined4 local_1980;
  undefined4 uStack_197c;
  undefined4 uStack_1978;
  undefined4 uStack_1974;
  undefined1 local_1970;
  undefined1 local_1968 [16];
  undefined4 local_1958;
  undefined1 local_1954;
  undefined4 local_1950;
  undefined1 local_194c;
  code *local_18d8;
  undefined4 local_18d0;
  undefined2 local_1868;
  undefined1 local_1860 [920];
  undefined4 local_14c8;
  undefined1 local_14c4;
  undefined1 local_14c0 [88];
  undefined1 local_1468 [192];
  undefined1 local_13a8 [544];
  undefined1 local_1188 [336];
  undefined1 local_1038 [192];
  undefined1 local_f78 [880];
  undefined1 local_c08 [192];
  undefined1 local_b48 [880];
  undefined1 local_7d8 [192];
  undefined1 local_718 [112];
  undefined2 local_6a8;
  undefined1 local_6a0 [320];
  undefined1 local_560 [24];
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined1 local_538;
  undefined1 local_530 [144];
  undefined1 local_4a0 [112];
  undefined2 local_430;
  undefined1 local_428 [320];
  undefined1 local_2e8 [192];
  undefined1 local_228 [440];
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x149036e90;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2d08;
  local_2c80 = param_1 + 0x288;
  local_2c50 = param_3;
  FUN_14009d848(local_2c80,param_2 + 0x218);
  local_2c88 = param_1 + 0x298;
  FUN_14009d848(local_2c88,param_2 + 0x228);
  local_2c90 = param_1 + 0x2a8;
  FUN_14009d848(local_2c90,param_2 + 0x238);
  local_2c98 = param_1 + 0x2b8;
  FUN_14628081e(local_2c98,param_2 + 0x248);
  local_2ca0 = param_1 + 0x2c8;
  FUN_14628081e(local_2ca0,param_2 + 600);
  local_2c60 = param_1 + 0x318;
  FUN_1490469b0(local_2c60,param_2 + 0x298);
  local_2c68 = param_1 + 0x328;
  FUN_149046a34(local_2c68,param_2 + 0x2a8);
  local_2c70 = param_1 + 0x338;
  FUN_149046ab8(local_2c70,param_2 + 0x2b8);
  local_2c78 = param_1 + 0x348;
  FUN_14009d848(local_2c78,param_2 + 0x2c8);
  local_2ca8 = param_1 + 0x2d8;
  FUN_149046824(local_2ca8,param_2 + 0x268);
  local_2c58 = param_1 + 0x2e8;
  FUN_149046d4c(local_2c58,param_2 + 0x2f8);
  local_2cb0 = param_1 + 0x2f8;
  FUN_1490468a8(local_2cb0,param_2 + 0x278);
  local_2cb8 = param_1 + 0x308;
  FUN_14904692c(local_2cb8,param_2 + 0x288);
  *(undefined1 *)(param_1 + 0x358) = *(undefined1 *)(param_2 + 0x1dd);
  FUN_1407679b0(local_228);
  FUN_145aafb3e(local_2e8);
  local_2cc0 = FUN_145aaf900(local_2e8);
  FUN_140a5296a(local_4a0);
  puVar5 = &DAT_14c96b1e1;
  if (((*(byte *)(param_2 + 0x1d9) | *(byte *)(param_2 + 0x1d8)) & 1) != 0) {
    puVar5 = &DAT_14c96b238;
  }
  local_27f8 = CONCAT11(1,*puVar5);
  local_27f0 = 0;
  uStack_27e8 = 0;
  local_430 = local_27f8;
  FUN_144a450dc(local_428,&local_27f0);
  FUN_1449db362(&local_27f0);
  FUN_140a50426(local_560);
  local_1ee0 = (code *)0x40a0000000000000;
  uStack_1ed8 = 0x40a0000000000000;
  local_1ed0 = 1;
  local_1ec8 = 0;
  uStack_1ec0 = 0;
  local_538 = 1;
  local_548 = 0;
  uStack_544 = 0x40a00000;
  uStack_540 = 0;
  uStack_53c = 0x40a00000;
  FUN_144a450dc(local_530,&local_1ec8);
  FUN_1449db362(&local_1ec8);
  local_2cc8 = FUN_140a52578(local_560);
  FUN_140a5296a(local_718);
  puVar5 = &DAT_14c96b1e1;
  if (*(char *)(param_2 + 0x1d8) != '\0') {
    puVar5 = &DAT_14c96b238;
  }
  local_2830 = CONCAT11(1,*puVar5);
  local_2828 = 0;
  uStack_2820 = 0;
  local_6a8 = local_2830;
  FUN_144a450dc(local_6a0,&local_2828);
  FUN_1449db362(&local_2828);
  FUN_140a50426(local_7d8);
  local_2ce0 = FUN_140a52578(local_7d8);
  FUN_145ab3d24(local_b48);
  local_1ee0 = (code *)0x149f212ee;
  uStack_1ed8._0_4_ = 4;
  FUN_1446e940c(local_288c,&local_1ee0);
  local_1ee0 = (code *)0x14ba6be20;
  uStack_1ed8._0_4_ = 10;
  FUN_1446e940c(local_2890,&local_1ee0);
  FUN_140208bae(local_2888,local_2890,local_288c,L"Back");
  FUN_14023423e(local_2878,local_2888);
  local_2868 = 1;
  local_2860 = 0;
  uStack_2858 = 0;
  lVar6 = FUN_1469d324e(local_b48,local_2878);
  local_1ee0 = (code *)&LAB_149038a18;
  uStack_1ed8._0_4_ = 0;
  FUN_14903896e(lVar6,param_1,&local_1ee0);
  local_18d8 = FUN_149038a3e;
  local_18d0 = 0;
  local_2cd8 = param_1;
  FUN_149049348(&local_1ee0,param_1);
  FUN_144a450dc(lVar6 + 0x220,&local_1ee0);
  FUN_1449db362(&local_1ee0);
  local_2ce8 = &local_28a9;
  FUN_145ab3730(local_28a8,"SButton",".\\Runtime/WebBrowser/Private/SWebBrowser.cpp",0x35);
  FUN_145ab34ca(local_28a8,&local_2850,lVar6);
  local_2840 = local_2850;
  plStack_2838 = local_2848;
  if (local_2848 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2848 + 1) = (int)local_2848[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fe8e(local_2ce0,&local_2840);
  local_2ce0 = FUN_140a52392(local_718,uVar7);
  FUN_140a50426(local_c08);
  local_2cd0 = FUN_140a52578(local_c08);
  FUN_145ab3d24(local_f78);
  local_1ee0 = (code *)0x14a1fb4f0;
  uStack_1ed8._0_4_ = 7;
  FUN_1446e940c(local_290c,&local_1ee0);
  local_1ee0 = (code *)0x14ba6be20;
  uStack_1ed8._0_4_ = 10;
  FUN_1446e940c(local_2910,&local_1ee0);
  FUN_140208bae(local_2908,local_2910,local_290c,L"Forward");
  FUN_14023423e(local_28f8,local_2908);
  local_28e8 = 1;
  local_28e0 = 0;
  uStack_28d8 = 0;
  lVar8 = FUN_1469d324e(local_f78,local_28f8);
  lVar6 = local_2cd8;
  local_1ee0 = (code *)&LAB_149038aa4;
  uStack_1ed8._0_4_ = 0;
  FUN_14903896e(lVar8,local_2cd8,&local_1ee0);
  local_18d8 = FUN_149038aca;
  local_18d0 = 0;
  FUN_149049348(&local_1ee0,lVar6);
  FUN_144a450dc(lVar8 + 0x220,&local_1ee0);
  FUN_1449db362(&local_1ee0);
  local_2ce8 = &local_2929;
  FUN_145ab3730(local_2928,"SButton",".\\Runtime/WebBrowser/Private/SWebBrowser.cpp",0x3d);
  FUN_145ab34ca(local_2928,&local_28d0,lVar8);
  local_28c0 = local_28d0;
  plStack_28b8 = local_28c8;
  if (local_28c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28c8 + 1) = (int)local_28c8[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fe8e(local_2cd0,&local_28c0);
  uVar7 = FUN_140a52392(local_2ce0,uVar7);
  FUN_140a50426(local_1038);
  uVar9 = FUN_140a52578(local_1038);
  FUN_145ab3d24(local_13a8);
  lVar6 = local_2cd8;
  local_1ee0 = FUN_149038c08;
  uStack_1ed8 = (ulonglong)uStack_1ed8._4_4_ << 0x20;
  FUN_149038b30(local_13a8,local_2cd8);
  local_18d8 = FUN_149038e1e;
  local_18d0 = 0;
  FUN_149049348(&local_1ee0,lVar6);
  FUN_144a450dc(local_1188,&local_1ee0);
  FUN_1449db362(&local_1ee0);
  local_2ce8 = &local_2969;
  FUN_145ab3730(local_2968,"SButton",".\\Runtime/WebBrowser/Private/SWebBrowser.cpp",0x45);
  FUN_145ab34ca(local_2968,&local_2950,local_13a8);
  local_2940 = local_2950;
  local_2938 = local_2948;
  if (local_2948 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2948 + 1) = (int)local_2948[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_140a4fe8e(uVar9,&local_2940);
  local_2ce0 = FUN_140a52392(uVar7,uVar9);
  FUN_140a50426(local_1468);
  local_2988 = 0x3f800000;
  local_2984 = 1;
  local_2980 = 0;
  uStack_2978 = 0;
  lVar6 = FUN_140a5475a(local_1468);
  *(undefined4 *)(lVar6 + 0x48) = 2;
  *(undefined1 *)(lVar6 + 0x4c) = 1;
  *(undefined4 *)(lVar6 + 0x40) = 3;
  *(undefined1 *)(lVar6 + 0x44) = 1;
  local_1ee0 = (code *)0x40a0000040a00000;
  uStack_1ed8 = 0x40a0000040a00000;
  local_1ed0 = 1;
  local_1ec8 = 0;
  uStack_1ec0 = 0;
  *(undefined1 *)(lVar6 + 0x28) = 1;
  *(undefined4 *)(lVar6 + 0x18) = 0x40a00000;
  *(undefined4 *)(lVar6 + 0x1c) = 0x40a00000;
  *(undefined4 *)(lVar6 + 0x20) = 0x40a00000;
  *(undefined4 *)(lVar6 + 0x24) = 0x40a00000;
  FUN_144a450dc(lVar6 + 0x30,&local_1ec8);
  FUN_1449db362(&local_1ec8);
  FUN_140a570d8(&local_18d8);
  puVar5 = &DAT_14c96b238;
  if (*(char *)(param_2 + 0x1d9) != '\0') {
    puVar5 = &DAT_14c96b1e1;
  }
  local_29c0 = CONCAT11(1,*puVar5);
  local_29b8 = 0;
  uStack_29b0 = 0;
  local_1868 = local_29c0;
  FUN_144a450dc(local_1860,&local_29b8);
  FUN_1449db362(&local_29b8);
  local_1ee0 = FUN_149038f98;
  uStack_1ed8 = uStack_1ed8 & 0xffffffff00000000;
  FUN_149038ec0(&local_18d8,local_2cd8,&local_1ee0);
  local_29d8 = 2;
  local_29d4 = 1;
  local_29d0 = 0;
  uStack_29c8 = 0;
  local_14c8 = 2;
  local_14c4 = 1;
  FUN_144a450dc(local_14c0,&local_29d0);
  FUN_1449db362(&local_29d0);
  local_2ce8 = &local_29f1;
  FUN_140a54526(local_29f0,"STextBlock",".\\Runtime/WebBrowser/Private/SWebBrowser.cpp",0x4f);
  FUN_140a52852(local_29f0,&local_29a8,&local_18d8);
  local_2998 = local_29a8;
  local_2990 = local_29a0;
  if (local_29a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_29a0 + 1) = (int)local_29a0[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fe8e(lVar6,&local_2998);
  uVar7 = FUN_140a52392(local_2ce0,uVar7);
  local_2ce8 = &local_2a11;
  FUN_140a541dc(local_2a10,"SHorizontalBox",".\\Runtime/WebBrowser/Private/SWebBrowser.cpp",0x30);
  FUN_140a50ec6(local_2a10,&local_2818,uVar7);
  local_2808 = local_2818;
  local_2800 = local_2810;
  if (local_2810 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2810 + 1) = (int)local_2810[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fe8e(local_2cc8,&local_2808);
  uVar7 = FUN_140a52392(local_4a0,uVar7);
  FUN_140a50426(local_1998);
  local_1950 = 2;
  local_194c = 1;
  local_1958 = 0;
  local_1954 = 1;
  local_1ee0 = (code *)0x40a0000040a00000;
  uStack_1ed8 = 0x40a0000040a00000;
  local_1ed0 = 1;
  local_1ec8 = 0;
  uStack_1ec0 = 0;
  local_1970 = 1;
  local_1980 = 0x40a00000;
  uStack_197c = 0x40a00000;
  uStack_1978 = 0x40a00000;
  uStack_1974 = 0x40a00000;
  FUN_144a450dc(local_1968,&local_1ec8);
  FUN_1449db362(&local_1ec8);
  FUN_146a10de6(&local_1ee0);
  puVar5 = &DAT_14c96b1e1;
  if (*(char *)(param_2 + 0x1d9) != '\0') {
    puVar5 = &DAT_14c96b238;
  }
  local_2a50 = CONCAT11(1,*puVar5);
  local_2a48 = 0;
  uStack_2a40 = 0;
  local_1e70 = local_2a50;
  FUN_144a450dc(local_1e68,&local_2a48);
  FUN_1449db362(&local_2a48);
  lVar6 = local_2cd8;
  local_26f0 = FUN_149039058;
  local_26e8 = 0;
  FUN_149049d12(&local_24f8,local_2cd8);
  FUN_144a450dc(local_1ad8,&local_24f8);
  FUN_1449db362(&local_24f8);
  local_24f8 = FUN_1490391d2;
  local_24f0 = 0;
  FUN_1490390fa(&local_1ee0,lVar6,&local_24f8);
  local_2a68 = 0x101;
  local_2a60 = 0;
  uStack_2a58 = 0;
  local_1b80 = 0x101;
  FUN_144a450dc(local_1b78,&local_2a60);
  FUN_1449db362(&local_2a60);
  local_2a80 = 0x101;
  local_2a78 = 0;
  uStack_2a70 = 0;
  local_1b50 = 0x101;
  FUN_144a450dc(local_1b48,&local_2a78);
  FUN_1449db362(&local_2a78);
  local_2a98 = 0x101;
  local_2a90 = 0;
  uStack_2a88 = 0;
  local_1b68 = 0x101;
  FUN_144a450dc(local_1b60,&local_2a90);
  FUN_1449db362(&local_2a90);
  local_2ce8 = &local_2ab1;
  FUN_146a400a4(&local_2ab0,"SEditableTextBox",".\\Runtime/WebBrowser/Private/SWebBrowser.cpp",0x5b)
  ;
  if (local_2aa8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2aa8 + 1) = (int)local_2aa8[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(lVar6 + 0x280);
  *(undefined8 *)(lVar6 + 0x278) = local_2ab0;
  *(longlong **)(lVar6 + 0x280) = local_2aa8;
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
  FUN_146a1115e(&local_2ab0,&local_2a38,&local_1ee0);
  local_2a28 = local_2a38;
  local_2a20 = local_2a30;
  if (local_2a30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2a30 + 1) = (int)local_2a30[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_140a4fe8e(local_1998,&local_2a28);
  FUN_140a52392(uVar7,uVar9);
  local_2ce8 = &local_2ad1;
  FUN_140a541dc(local_2ad0,"SHorizontalBox",".\\Runtime/WebBrowser/Private/SWebBrowser.cpp",0x2a);
  FUN_140a50ec6(local_2ad0,&local_27e0);
  local_27d0 = local_27e0;
  local_27c8 = local_27d8;
  if (local_27d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_27d8 + 1) = (int)local_27d8[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_145aaf878(local_2cc0,&local_27d0);
  uVar7 = FUN_145aaf822(local_228,uVar7);
  FUN_145aafb3e(local_1fa0);
  FUN_140a504fe(local_2158);
  FUN_140a4fdf2(local_2748,0);
  FUN_14903921a(&local_24f8);
  local_2b28 = *(undefined8 *)(param_2 + 0x1a8);
  local_2b20 = *(longlong *)(param_2 + 0x1b0);
  if (local_2b20 != 0) {
    LOCK();
    *(int *)(local_2b20 + 8) = *(int *)(local_2b20 + 8) + 1;
    UNLOCK();
  }
  FUN_149039398(&local_24f8,&local_2b28);
  local_2b38 = (void *)0x0;
  local_2b30 = *(int *)(param_2 + 0x1c0);
  lVar8 = (longlong)local_2b30;
  _Src = *(void **)(param_2 + 0x1b8);
  if (lVar8 == 0) {
    local_2b2c = 0;
    iVar11 = 0;
  }
  else {
    FUN_1446dd670(&local_2b38,local_2b30,0);
    memcpy(local_2b38,_Src,lVar8 * 2);
    iVar11 = local_2b30;
  }
  iVar4 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar4 = 0;
  }
  FUN_1402980a2(local_2340,local_2b38,iVar4);
  if (local_2b38 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_141121e90(local_2508,param_2 + 0x1c8);
  FUN_14903941e(&local_24f8,local_2508);
  local_2320 = *(undefined1 *)(param_2 + 0x1da);
  local_231f = *(undefined1 *)(param_2 + 0x1db);
  local_231d = *(undefined1 *)(param_2 + 0x1dc);
  local_231c = *(undefined4 *)(param_2 + 0x1e0);
  if (*(char *)(param_2 + 0x1e9) == '\0') {
    if (local_2313 == '\x01') {
      local_2313 = '\0';
    }
  }
  else {
    local_2314 = *(undefined1 *)(param_2 + 0x1e8);
    local_2313 = '\x01';
  }
  local_2b58 = *(undefined1 *)(param_2 + 0x200);
  local_2b68 = *(undefined4 *)(param_2 + 0x1f0);
  uStack_2b64 = *(undefined4 *)(param_2 + 500);
  uStack_2b60 = *(undefined4 *)(param_2 + 0x1f8);
  uStack_2b5c = *(undefined4 *)(param_2 + 0x1fc);
  local_2b50 = 0;
  local_2b48 = 0;
  FUN_140a51be2(&local_2b50,param_2 + 0x208);
  local_22a0 = local_2b58;
  local_22b0 = local_2b68;
  uStack_22ac = uStack_2b64;
  uStack_22a8 = uStack_2b60;
  uStack_22a4 = uStack_2b5c;
  FUN_144a450dc(local_2298,&local_2b50);
  FUN_1449db362(&local_2b50);
  FUN_14009d848(local_2288,local_2c80);
  FUN_14009d848(local_2278,local_2c88);
  FUN_14009d848(local_2268,local_2c90);
  FUN_14628081e(local_2258,local_2c98);
  FUN_14628081e(local_2248,local_2ca0);
  FUN_149046824(local_2238,local_2ca8);
  FUN_1490468a8(local_2228,local_2cb0);
  FUN_14904692c(local_2218,local_2cb8);
  FUN_1490469b0(local_2208,local_2c60);
  FUN_149046a34(local_21f8,local_2c68);
  FUN_149046ab8(local_21e8,local_2c70);
  FUN_14009d848(local_21d8,local_2c78);
  local_26f0 = FUN_14903950c;
  local_26e8 = 0;
  FUN_149039468(&local_24f8,lVar6);
  FUN_14096c7c0(local_21c8,param_2 + 0x2d8);
  FUN_149046bc0(local_21a8,param_2 + 0x2e8);
  FUN_149046d4c(local_2168,local_2c58);
  local_2318 = *(undefined4 *)(param_2 + 0x1e4);
  local_2b88 = local_2c50;
  FUN_14904a1b4(&local_2b80);
  if (local_2b78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2b78 + 1) = (int)local_2b78[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(lVar6 + 0x270);
  *(undefined8 *)(lVar6 + 0x268) = local_2b80;
  *(longlong **)(lVar6 + 0x270) = local_2b78;
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
  FUN_14903956a(&local_2b80,&local_2b18,&local_24f8);
  local_2b08 = local_2b18;
  local_2b00 = local_2b10;
  if (local_2b10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2b10 + 1) = (int)local_2b10[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_140a4fd40(local_2748,&local_2b08);
  uVar9 = FUN_140a5058c(local_2158,uVar9);
  FUN_140a4fdf2(local_27a0,0);
  local_2760 = 2;
  local_275c = 1;
  local_2758 = 2;
  local_2754 = 1;
  FUN_146a735e0(&local_26f0);
  local_2538 = 0x41200000;
  local_2c00 = (code *)0x14ba6be94;
  local_2bf8 = 0x16;
  FUN_1446e940c(local_2be4,&local_2c00);
  local_2c00 = (code *)0x14ba6be20;
  local_2bf8 = 10;
  FUN_1446e940c(local_2be8,&local_2c00);
  FUN_140208bae(local_2be0,local_2be8,local_2be4,L"Loading page...");
  FUN_14023423e(local_2bd0,local_2be0);
  local_2bc0 = 1;
  local_2bb8 = 0;
  uStack_2bb0 = 0;
  uVar10 = FUN_146a737c6(&local_26f0,local_2bd0);
  lVar6 = local_2cd8;
  local_2c00 = FUN_149039688;
  local_2bf8 = 0;
  FUN_1490395e4(uVar10,local_2cd8,&local_2c00);
  local_2ce8 = &local_2c01;
  FUN_146a82d28(&local_2c00,"SCircularThrobber",".\\Runtime/WebBrowser/Private/SWebBrowser.cpp",0x89
               );
  FUN_146a73810(&local_2c00,&local_2ba8,uVar10);
  local_2b98 = local_2ba8;
  local_2b90 = local_2ba0;
  if (local_2ba0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2ba0 + 1) = (int)local_2ba0[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fd40(local_27a0,&local_2b98);
  uVar9 = FUN_140a5058c(uVar9,uVar10);
  local_2ce8 = &local_2c21;
  FUN_140a536a8(local_2c20,"SOverlay",".\\Runtime/WebBrowser/Private/SWebBrowser.cpp",0x66);
  FUN_140a4ff16(local_2c20,&local_2af8,uVar9);
  local_2ae8 = local_2af8;
  local_2ae0 = local_2af0;
  if (local_2af0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2af0 + 1) = (int)local_2af0[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_145aaf878(local_1fa0,&local_2ae8);
  uVar7 = FUN_145aaf822(uVar7,uVar9);
  local_2ce8 = &local_2c41;
  FUN_14076837c(local_2c40,"SVerticalBox",".\\Runtime/WebBrowser/Private/SWebBrowser.cpp",0x26);
  FUN_14076784c(local_2c40,&local_27c0,uVar7);
  local_27b0 = local_27c0;
  local_27a8 = local_27b8;
  if (local_27b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_27b8 + 1) = (int)local_27b8[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(lVar6 + 0x1e0,&local_27b0);
  plVar3 = local_27a8;
  if (local_27a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_27a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_27a8)(local_27a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_27b8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_27b8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_27b8)(local_27b8);
      LOCK();
      piVar2 = (int *)((longlong)local_27b8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_27b8 + 0x10))(local_27b8);
      }
    }
  }
  if (local_2c38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2c38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2c38)(local_2c38);
      LOCK();
      piVar2 = (int *)((longlong)local_2c38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2c38 + 0x10))(local_2c38);
      }
    }
  }
  plVar3 = local_2ae0;
  if (local_2ae0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2ae0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2ae0)(local_2ae0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_2af0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2af0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2af0)(local_2af0);
      LOCK();
      piVar2 = (int *)((longlong)local_2af0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2af0 + 0x10))(local_2af0);
      }
    }
  }
  if (local_2c18 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2c18 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2c18)(local_2c18);
      LOCK();
      piVar2 = (int *)((longlong)local_2c18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2c18 + 0x10))(local_2c18);
      }
    }
  }
  plVar3 = local_2b90;
  if (local_2b90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2b90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2b90)(local_2b90);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_2ba0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2ba0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2ba0)(local_2ba0);
      LOCK();
      piVar2 = (int *)((longlong)local_2ba0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2ba0 + 0x10))(local_2ba0);
      }
    }
  }
  plVar3 = (longlong *)CONCAT44(uStack_2bf4,local_2bf8);
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
  if (local_2be0[0] != (longlong *)0x0) {
    (**(code **)(*local_2be0[0] + 0x10))();
  }
  FUN_1449db362(local_2518);
  FUN_140a4ff8c(&local_26f0);
  FUN_1415b5e50(local_27a0);
  plVar3 = local_2b00;
  if (local_2b00 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2b00 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2b00)(local_2b00);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_2b10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2b10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2b10)(local_2b10);
      LOCK();
      piVar2 = (int *)((longlong)local_2b10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2b10 + 0x10))(local_2b10);
      }
    }
  }
  if (local_2b78 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2b78 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2b78)(local_2b78);
      LOCK();
      piVar2 = (int *)((longlong)local_2b78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2b78 + 0x10))(local_2b78);
      }
    }
  }
  FUN_1490396d4(&local_24f8);
  FUN_1415b5e50(local_2748);
  FUN_1415b5e16(local_2158);
  FUN_140767f30(local_1fa0);
  plVar3 = local_27c8;
  if (local_27c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_27c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_27c8)(local_27c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_27d8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_27d8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_27d8)(local_27d8);
      LOCK();
      piVar2 = (int *)((longlong)local_27d8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_27d8 + 0x10))(local_27d8);
      }
    }
  }
  if (local_2ac8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2ac8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2ac8)(local_2ac8);
      LOCK();
      piVar2 = (int *)((longlong)local_2ac8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2ac8 + 0x10))(local_2ac8);
      }
    }
  }
  plVar3 = local_2a20;
  if (local_2a20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2a20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2a20)(local_2a20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_2a30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2a30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2a30)(local_2a30);
      LOCK();
      piVar2 = (int *)((longlong)local_2a30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2a30 + 0x10))(local_2a30);
      }
    }
  }
  if (local_2aa8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2aa8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2aa8)(local_2aa8);
      LOCK();
      piVar2 = (int *)((longlong)local_2aa8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2aa8 + 0x10))(local_2aa8);
      }
    }
  }
  FUN_146a111d2(&local_1ee0);
  FUN_140a509a6(local_1998);
  plVar3 = local_2800;
  if (local_2800 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2800 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2800)(local_2800);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_2810 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2810 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2810)(local_2810);
      LOCK();
      piVar2 = (int *)((longlong)local_2810 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2810 + 0x10))(local_2810);
      }
    }
  }
  if (local_2a08 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2a08 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2a08)(local_2a08);
      LOCK();
      piVar2 = (int *)((longlong)local_2a08 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2a08 + 0x10))(local_2a08);
      }
    }
  }
  plVar3 = local_2990;
  if (local_2990 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2990 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2990)(local_2990);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_29a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_29a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_29a0)(local_29a0);
      LOCK();
      piVar2 = (int *)((longlong)local_29a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_29a0 + 0x10))(local_29a0);
      }
    }
  }
  if (local_29e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_29e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_29e8)(local_29e8);
      LOCK();
      piVar2 = (int *)((longlong)local_29e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_29e8 + 0x10))(local_29e8);
      }
    }
  }
  FUN_140a59ae6(&local_18d8);
  FUN_140a509a6(local_1468);
  plVar3 = local_2938;
  if (local_2938 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2938 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2938)(local_2938);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_2948 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2948 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2948)(local_2948);
      LOCK();
      piVar2 = (int *)((longlong)local_2948 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2948 + 0x10))(local_2948);
      }
    }
  }
  if (local_2960 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2960 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2960)(local_2960);
      LOCK();
      piVar2 = (int *)((longlong)local_2960 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2960 + 0x10))(local_2960);
      }
    }
  }
  FUN_145ab35f4(local_13a8);
  FUN_140a509a6(local_1038);
  plVar3 = plStack_28b8;
  if (plStack_28b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28b8)(plStack_28b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_28c8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28c8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28c8)(local_28c8);
      LOCK();
      piVar2 = (int *)((longlong)local_28c8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28c8 + 0x10))(local_28c8);
      }
    }
  }
  if (local_2920 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2920 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2920)(local_2920);
      LOCK();
      piVar2 = (int *)((longlong)local_2920 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2920 + 0x10))(local_2920);
      }
    }
  }
  if (local_2908[0] != (longlong *)0x0) {
    (**(code **)(*local_2908[0] + 0x10))();
  }
  FUN_145ab35f4(local_f78);
  FUN_140a509a6(local_c08);
  plVar3 = plStack_2838;
  if (plStack_2838 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_2838 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_2838)(plStack_2838);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_2848 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2848 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2848)(local_2848);
      LOCK();
      piVar2 = (int *)((longlong)local_2848 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2848 + 0x10))(local_2848);
      }
    }
  }
  if (local_28a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28a0)(local_28a0);
      LOCK();
      piVar2 = (int *)((longlong)local_28a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28a0 + 0x10))(local_28a0);
      }
    }
  }
  if (local_2888[0] != (longlong *)0x0) {
    (**(code **)(*local_2888[0] + 0x10))();
  }
  FUN_145ab35f4(local_b48);
  FUN_140a509a6(local_7d8);
  FUN_145ab33da(local_718);
  FUN_140a509a6(local_560);
  FUN_145ab33da(local_4a0);
  FUN_140767f30(local_2e8);
  FUN_14149255e(local_228);
  if ((local_70 ^ (ulonglong)auStack_2d08) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903896e FUN_14903896e body=169 status=ok
// SIG undefined FUN_14903896e(void)

longlong FUN_14903896e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_149048eac(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x100);
  local_30 = 0;
  local_28 = 0;
  FUN_14096c7c0(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x88) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x90,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149038a3e FUN_149038a3e body=102 status=ok
// SIG undefined FUN_149038a3e(void)

undefined1 * FUN_149038a3e(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  
  if ((*(longlong *)(param_1 + 0x268) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x268) + 0x268), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0xe0))();
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 149038aca FUN_149038aca body=102 status=ok
// SIG undefined FUN_149038aca(void)

undefined1 * FUN_149038aca(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  
  if ((*(longlong *)(param_1 + 0x268) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x268) + 0x268), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0xf0))();
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 149038b30 FUN_149038b30 body=215 status=ok
// SIG undefined FUN_149038b30(void)

longlong FUN_149038b30(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_149049830(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1f8,&local_50);
  *(undefined1 *)(param_1 + 0x208) = local_40;
  FUN_144a450dc(param_1 + 0x210,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149038c08 FUN_149038c08 body=532 status=ok
// SIG undefined FUN_149038c08(void)

undefined8 * FUN_149038c08(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf64e8) {
    FUN_144b3d300(&DAT_14cbf64e8);
    if (DAT_14cbf64e8 == -1) {
      local_40 = L"Reload";
      local_38 = 6;
      FUN_1446e940c(local_44,&local_40);
      local_40 = L"WebBrowser";
      local_38 = 10;
      FUN_1446e940c(local_48,&local_40);
      FUN_140208bae(&DAT_14cbf64d8,local_48,local_44,L"Reload");
      atexit((_func_5014 *)&LAB_1443f48dd);
      _Init_thread_footer(&DAT_14cbf64e8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf6500) {
    FUN_144b3d300(&DAT_14cbf6500);
    if (DAT_14cbf6500 == -1) {
      local_40 = L"StopText";
      local_38 = 8;
      FUN_1446e940c(local_44,&local_40);
      local_40 = L"WebBrowser";
      local_38 = 10;
      FUN_1446e940c(local_48,&local_40);
      FUN_140208bae(&DAT_14cbf64f0,local_48,local_44,L"Stop");
      atexit((_func_5014 *)&LAB_1443f48f1);
      _Init_thread_footer(&DAT_14cbf6500);
    }
  }
  if ((*(longlong *)(param_1 + 0x268) != 0) &&
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x268) + 0x268), plVar2 != (longlong *)0x0)) {
    iVar1 = (**(code **)(*plVar2 + 0x40))();
    plVar2 = DAT_14cbf64f0;
    if (iVar1 == 2) {
      *param_2 = DAT_14cbf64f0;
      puVar3 = &DAT_14cbf64f8;
      goto LAB_149038cb9;
    }
  }
  plVar2 = DAT_14cbf64d8;
  *param_2 = DAT_14cbf64d8;
  puVar3 = (undefined4 *)&DAT_14cbf64e0;
LAB_149038cb9:
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *puVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149038e1e FUN_149038e1e body=161 status=ok
// SIG undefined FUN_149038e1e(void)

undefined1 * FUN_149038e1e(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x268) != 0) &&
     (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x268) + 0x268), plVar3 != (longlong *)0x0)) {
    iVar1 = (**(code **)(*plVar3 + 0x40))();
    lVar2 = *(longlong *)(param_1 + 0x268);
    if (iVar1 == 2) {
      if (lVar2 == 0) goto LAB_149038e83;
      plVar3 = *(longlong **)(lVar2 + 0x268);
      lVar2 = 0x108;
    }
    else {
      if (lVar2 == 0) goto LAB_149038e83;
      plVar3 = *(longlong **)(lVar2 + 0x268);
      lVar2 = 0x100;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + lVar2))();
    }
  }
LAB_149038e83:
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 149038ec0 FUN_149038ec0 body=215 status=ok
// SIG undefined FUN_149038ec0(void)

longlong FUN_149038ec0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_149049830(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149038f98 FUN_149038f98 body=189 status=ok
// SIG undefined FUN_149038f98(void)

undefined8 FUN_149038f98(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FUN_149039a30(*(longlong *)(param_1 + 0x268),param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  local_30 = L"InvalidWindow";
  local_28 = 0xd;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"WebBrowser";
  local_28 = 10;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Browser Window is not valid/supported");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149039058 FUN_149039058 body=161 status=ok
// SIG undefined FUN_149039058(void)

void FUN_149039058(undefined8 param_1,undefined8 param_2,int param_3)

{
  void *_Src;
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 1) {
    puVar1 = (undefined8 *)FUN_1447a1f4a(param_2);
    local_38 = (void *)0x0;
    local_30 = *(int *)(puVar1 + 1);
    lVar2 = (longlong)local_30;
    _Src = (void *)*puVar1;
    if (lVar2 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar2 * 2);
    }
    FUN_1490398a4(param_1,&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490390fa FUN_1490390fa body=215 status=ok
// SIG undefined FUN_1490390fa(void)

longlong FUN_1490390fa(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_149049830(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1b0,&local_50);
  *(undefined1 *)(param_1 + 0x1c0) = local_40;
  FUN_144a450dc(param_1 + 0x1c8,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490391d2 FUN_1490391d2 body=72 status=ok
// SIG undefined FUN_1490391d2(void)

longlong * FUN_1490391d2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x268) == 0) {
    plVar2 = (longlong *)FUN_140e82300();
    plVar1 = (longlong *)*plVar2;
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar2[1];
  }
  else {
    FUN_149039b00(*(longlong *)(param_1 + 0x268),param_2);
  }
  return param_2;
}



// FUNCTION 14903921a FUN_14903921a body=382 status=ok
// SIG undefined FUN_14903921a(void)

longlong FUN_14903921a(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  FUN_140056680(param_1 + 0x1b8,L"https://www.google.com");
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x1d8) = 0xffffffff01010001;
  *(undefined4 *)(param_1 + 0x1e0) = 0x18;
  *(undefined1 *)(param_1 + 0x1e5) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  uVar1 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0x248) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0x250) = uVar1;
  *(undefined1 *)(param_1 + 600) = 1;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x26c) = 0;
  *(undefined8 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  return param_1;
}



// FUNCTION 149039398 FUN_149039398 body=133 status=ok
// SIG undefined FUN_149039398(void)

longlong FUN_149039398(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(longlong *)(param_1 + 0x1b0) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 14903941e FUN_14903941e body=74 status=ok
// SIG undefined FUN_14903941e(void)

longlong FUN_14903941e(longlong param_1,longlong *param_2)

{
  FUN_14054da5a(param_1 + 0x1c8);
  if (*(int *)((longlong)param_2 + 0xc) != -1) {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = 0;
    param_2[1] = -0x100000000;
  }
  return param_1;
}



// FUNCTION 149039468 FUN_149039468 body=163 status=ok
// SIG undefined FUN_149039468(void)

longlong FUN_149039468(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_14904a3d8(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903950c FUN_14903950c body=93 status=ok
// SIG undefined FUN_14903950c(void)

undefined1 * FUN_14903950c(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 *puVar3;
  
  if (*(char *)(param_1 + 0x358) == '\x01') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x268) + 0x268);
    if (plVar1 == (longlong *)0x0) {
      puVar3 = &DAT_14c96b23b;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x30))();
      puVar3 = &DAT_14c96b23b;
      if (cVar2 != '\0') {
        puVar3 = &DAT_14c96b238;
      }
    }
  }
  else {
    puVar3 = &DAT_14c96b238;
  }
  *param_2 = *puVar3;
  return param_2;
}



// FUNCTION 14903956a FUN_14903956a body=122 status=ok
// SIG undefined FUN_14903956a(void)

longlong * FUN_14903956a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14903a3aa(*param_1,param_3,*(undefined8 *)param_1[2]);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1490395e4 FUN_1490395e4 body=163 status=ok
// SIG undefined FUN_1490395e4(void)

longlong FUN_1490395e4(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_14904a3d8(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149039688 FUN_149039688 body=75 status=ok
// SIG undefined FUN_149039688(void)

undefined1 * FUN_149039688(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 *puVar3;
  
  if (*(char *)(param_1 + 0x358) == '\x01') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x268) + 0x268);
    puVar3 = &DAT_14c96b238;
    if (plVar1 == (longlong *)0x0) goto LAB_1490396c5;
    cVar2 = (**(code **)(*plVar1 + 0x30))();
    if (cVar2 == '\0') goto LAB_1490396c5;
  }
  puVar3 = &DAT_14c96b23b;
LAB_1490396c5:
  *param_2 = *puVar3;
  return param_2;
}



// FUNCTION 1490396d4 FUN_1490396d4 body=463 status=ok
// SIG undefined FUN_1490396d4(void)

void FUN_1490396d4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x390);
  FUN_1449db362(param_1 + 0x380);
  FUN_1449db362(param_1 + 0x370);
  FUN_1449db362(param_1 + 0x360);
  FUN_1449db362(param_1 + 0x350);
  FUN_1449db362(param_1 + 0x340);
  FUN_1449db362(param_1 + 0x330);
  FUN_1449db362(param_1 + 800);
  FUN_1449db362(param_1 + 0x310);
  FUN_1449db362(param_1 + 0x300);
  FUN_1449db362(param_1 + 0x2f0);
  FUN_1449db362(param_1 + 0x2e0);
  FUN_1449db362(param_1 + 0x2d0);
  FUN_1449db362(param_1 + 0x2c0);
  FUN_1449db362(param_1 + 0x2b0);
  FUN_1449db362(param_1 + 0x2a0);
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x270);
  FUN_1449db362(param_1 + 0x260);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x240));
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x230) == '\x01') {
    FUN_14903f31a(param_1 + 0x1e8);
    *(undefined1 *)(param_1 + 0x230) = 0;
  }
  if (*(char *)(param_1 + 0x1e5) == '\x01') {
    *(undefined1 *)(param_1 + 0x1e5) = 0;
  }
  if (*(int *)(param_1 + 0x1d4) != -1) {
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0xffffffff00000000;
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1490398a4 FUN_1490398a4 body=176 status=ok
// SIG undefined FUN_1490398a4(void)

void FUN_1490398a4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x268);
  if (lVar1 != 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_2[1];
    lVar2 = (longlong)local_38;
    _Src = (void *)*param_2;
    if (lVar2 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,_Src,lVar2 * 2);
    }
    FUN_149039956(lVar1,&local_40);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149039956 FUN_149039956 body=216 status=ok
// SIG undefined FUN_149039956(void)

void FUN_149039956(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140009b9a(local_40);
  FUN_140008f88(param_1 + 0x2e0,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x268);
  if (puVar1 != (undefined8 *)0x0) {
    local_50 = (void *)0x0;
    local_48 = (int)param_2[1];
    lVar2 = (longlong)local_48;
    _Src = (void *)*param_2;
    if (lVar2 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,_Src,lVar2 * 2);
    }
    (**(code **)*puVar1)(puVar1,&local_50);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149039a30 FUN_149039a30 body=207 status=ok
// SIG undefined FUN_149039a30(void)

undefined8 FUN_149039a30(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x268);
  if (plVar1 == (longlong *)0x0) {
    local_30 = L"InvalidWindow";
    local_28 = 0xd;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"WebBrowser";
    local_28 = 10;
    FUN_1446e940c(local_38,&local_30);
    FUN_140208bae(param_2,local_38,local_34,L"Browser Window is not valid/supported");
  }
  else {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_30);
    FUN_140233b1a(param_2,&local_30);
    if (local_30 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149039b00 FUN_149039b00 body=96 status=ok
// SIG undefined FUN_149039b00(void)

longlong * FUN_149039b00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x268) == 0) {
    plVar2 = (longlong *)FUN_140e82300();
    plVar1 = (longlong *)*plVar2;
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar2 = plVar2 + 1;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x2e0);
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar2 = (longlong *)(param_1 + 0x2e8);
  }
  *(int *)(param_2 + 1) = (int)*plVar2;
  return param_2;
}



// FUNCTION 149039b60 FUN_149039b60 body=352 status=ok
// SIG undefined FUN_149039b60(void)

undefined8 * FUN_149039b60(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14ba6bf50;
  *(undefined1 *)((longlong)param_1 + 0x2d9) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  FUN_144a5dc74(param_1 + 0x5c);
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  return param_1;
}



// FUNCTION 149039cc0 FUN_149039cc0 body=1769 status=ok
// SIG undefined FUN_149039cc0(void)

void FUN_149039cc0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  
  *param_1 = &PTR_FUN_14ba6bf50;
  if ((longlong *)param_1[0x4d] != (longlong *)0x0) {
    uVar8 = (**(code **)(*(longlong *)param_1[0x4d] + 0x168))();
    FUN_140457ffc(uVar8,param_1);
    uVar8 = (**(code **)(*(longlong *)param_1[0x4d] + 0x188))();
    FUN_140457ffc(uVar8,param_1);
    uVar8 = (**(code **)(*(longlong *)param_1[0x4d] + 0x170))();
    FUN_140457ffc(uVar8,param_1);
    uVar8 = (**(code **)(*(longlong *)param_1[0x4d] + 0x178))();
    FUN_140457ffc(uVar8,param_1);
    uVar8 = (**(code **)(*(longlong *)param_1[0x4d] + 0x180))();
    FUN_140457ffc(uVar8,param_1);
    uVar8 = (**(code **)(*(longlong *)param_1[0x4d] + 0x1d0))();
    FUN_140457ffc(uVar8,param_1);
    uVar8 = (**(code **)(*(longlong *)param_1[0x4d] + 0x1d8))();
    FUN_140457ffc(uVar8,param_1);
    plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x4d] + 0x1e0))();
    puVar2 = (undefined8 *)*plVar9;
    if (puVar2 != (undefined8 *)0x0 && (int)plVar9[1] != 0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar9,0,0,0x10);
      *(undefined4 *)(plVar9 + 1) = 0;
    }
    plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x4d] + 0x1e8))();
    puVar2 = (undefined8 *)*plVar9;
    if (puVar2 != (undefined8 *)0x0 && (int)plVar9[1] != 0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar9,0,0,0x10);
      *(undefined4 *)(plVar9 + 1) = 0;
    }
    plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x4d] + 0x1c0))();
    puVar2 = (undefined8 *)*plVar9;
    if (puVar2 != (undefined8 *)0x0 && (int)plVar9[1] != 0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar9,0,0,0x10);
      *(undefined4 *)(plVar9 + 1) = 0;
    }
    plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x4d] + 0x1c8))();
    puVar2 = (undefined8 *)*plVar9;
    if (puVar2 != (undefined8 *)0x0 && (int)plVar9[1] != 0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar9,0,0,0x10);
      *(undefined4 *)(plVar9 + 1) = 0;
    }
    plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x4d] + 0x1f0))();
    puVar2 = (undefined8 *)*plVar9;
    if (puVar2 != (undefined8 *)0x0 && (int)plVar9[1] != 0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar9,0,0,0x10);
      *(undefined4 *)(plVar9 + 1) = 0;
    }
    plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x4d] + 0x210))();
    puVar2 = (undefined8 *)*plVar9;
    if (puVar2 != (undefined8 *)0x0 && (int)plVar9[1] != 0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar9,0,0,0x10);
      *(undefined4 *)(plVar9 + 1) = 0;
    }
    plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x4d] + 0x1b8))();
    puVar2 = (undefined8 *)*plVar9;
    if (puVar2 != (undefined8 *)0x0 && (int)plVar9[1] != 0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar9,0,0,0x10);
      *(undefined4 *)(plVar9 + 1) = 0;
    }
    plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x4d] + 400))();
    if (((param_1 != (undefined8 *)0x0) &&
        (plVar3 = (longlong *)*plVar9, plVar3 != (longlong *)0x0 && (int)plVar9[1] != 0)) &&
       (cVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1), cVar6 != '\0')) {
      plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x4d] + 400))();
      puVar2 = (undefined8 *)*plVar9;
      if (puVar2 != (undefined8 *)0x0 && (int)plVar9[1] != 0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72(plVar9,0,0,0x10);
        *(undefined4 *)(plVar9 + 1) = 0;
      }
    }
    plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x4d] + 0x198))();
    if (((param_1 != (undefined8 *)0x0) &&
        (plVar3 = (longlong *)*plVar9, plVar3 != (longlong *)0x0 && (int)plVar9[1] != 0)) &&
       (cVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1), cVar6 != '\0')) {
      plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x4d] + 0x198))();
      puVar2 = (undefined8 *)*plVar9;
      if (puVar2 != (undefined8 *)0x0 && (int)plVar9[1] != 0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72(plVar9,0,0,0x10);
        *(undefined4 *)(plVar9 + 1) = 0;
      }
    }
    plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x4d] + 0x1a0))();
    if (((param_1 != (undefined8 *)0x0) &&
        (plVar3 = (longlong *)*plVar9, plVar3 != (longlong *)0x0 && (int)plVar9[1] != 0)) &&
       (cVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1), cVar6 != '\0')) {
      plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x4d] + 0x1a0))();
      puVar2 = (undefined8 *)*plVar9;
      if (puVar2 != (undefined8 *)0x0 && (int)plVar9[1] != 0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72(plVar9,0,0,0x10);
        *(undefined4 *)(plVar9 + 1) = 0;
      }
    }
  }
  plVar9 = (longlong *)param_1[0x50];
  if (plVar9 != (longlong *)0x0) {
    iVar7 = (int)plVar9[1];
    do {
      if (iVar7 == 0) goto LAB_149039cf4;
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    lVar4 = param_1[0x4f];
    if (lVar4 != 0) {
      FUN_140457ffc(lVar4 + 0x560,param_1);
      FUN_140457ffc(lVar4 + 0x538,param_1);
    }
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
LAB_149039cf4:
  FUN_1449db362(param_1 + 0x82);
  FUN_1449db362(param_1 + 0x80);
  FUN_1449db362(param_1 + 0x7e);
  FUN_1449db362(param_1 + 0x7c);
  FUN_1449db362(param_1 + 0x7a);
  FUN_1449db362(param_1 + 0x78);
  FUN_1449db362(param_1 + 0x76);
  FUN_1449db362(param_1 + 0x74);
  FUN_1449db362(param_1 + 0x72);
  FUN_1449db362(param_1 + 0x70);
  FUN_1449db362(param_1 + 0x6e);
  FUN_1449db362(param_1 + 0x6c);
  FUN_1449db362(param_1 + 0x6a);
  FUN_1449db362(param_1 + 0x68);
  FUN_1449db362(param_1 + 0x66);
  FUN_1449db362(param_1 + 100);
  FUN_1449db362(param_1 + 0x62);
  FUN_1449db362(param_1 + 0x60);
  FUN_1449db362(param_1 + 0x5e);
  if ((longlong *)param_1[0x5c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5c] + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0x2d9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2d9) = 0;
  }
  plVar9 = (longlong *)param_1[0x5a];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  FUN_14904a8a6(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  plVar9 = (longlong *)param_1[0x56];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar9 = (longlong *)param_1[0x54];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar9 = (longlong *)param_1[0x52];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar9 = (longlong *)param_1[0x50];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  plVar9 = (longlong *)param_1[0x4e];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  FUN_14171f70c(param_1);
  return;
}



// FUNCTION 14903a3aa FUN_14903a3aa body=3892 status=ok
// SIG undefined FUN_14903a3aa(void)

void FUN_14903a3aa(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  code **ppcVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  longlong *local_120;
  undefined8 *local_118;
  longlong *local_110;
  char local_108;
  undefined7 uStack_107;
  longlong *local_100;
  code *local_f8;
  longlong *local_f0;
  code *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 uStack_d8;
  undefined8 uStack_d7;
  undefined2 local_cf;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined1 local_a8 [72];
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_14009d848(param_1 + 0x2f0,param_2 + 0x270);
  FUN_14009d848((longlong *)(param_1 + 0x300),param_2 + 0x280);
  FUN_14009d848(param_1 + 0x310,param_2 + 0x290);
  FUN_14628081e(param_1 + 800,param_2 + 0x2a0);
  FUN_14628081e(param_1 + 0x330,param_2 + 0x2b0);
  FUN_1490469b0(param_1 + 0x370,param_2 + 0x2f0);
  FUN_149046a34(param_1 + 0x380,param_2 + 0x300);
  FUN_149046ab8(param_1 + 0x390,param_2 + 0x310);
  FUN_14009d848(param_1 + 0x3a0,param_2 + 800);
  FUN_149046824(param_1 + 0x340,param_2 + 0x2c0);
  FUN_1490468a8((longlong *)(param_1 + 0x350),param_2 + 0x2d0);
  local_120 = (longlong *)(param_1 + 0x360);
  FUN_14904692c(local_120,param_2 + 0x2e0);
  FUN_140009b9a(&local_e8,param_2 + 0x1b8);
  FUN_140008f88(param_1 + 0x2e0,&local_e8);
  if (local_e8 != (code *)0x0) {
    (**(code **)(*(longlong *)local_e8 + 0x10))();
  }
  if ((undefined1 *)(param_2 + 0x1e4) != (undefined1 *)(param_1 + 0x2d8)) {
    if (*(char *)(param_2 + 0x1e5) == '\x01') {
      *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(param_2 + 0x1e4);
      uVar5 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x2d9) != '\x01') goto LAB_14903a518;
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x2d9) = uVar5;
  }
LAB_14903a518:
  FUN_149046c44(param_1 + 0x3e0,param_2 + 0x360);
  FUN_149046c44(param_1 + 0x3f0,param_2 + 0x370);
  FUN_149046cc8(param_1 + 0x400,param_2 + 0x380);
  FUN_149046d4c(param_1 + 0x410,param_2 + 0x390);
  pcVar8 = (code *)*param_3;
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  ppcVar2 = (code **)(param_1 + 0x268);
  plVar10 = *(longlong **)(param_1 + 0x270);
  *(code **)(param_1 + 0x268) = pcVar8;
  *(longlong *)(param_1 + 0x270) = lVar4;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    pcVar8 = *ppcVar2;
  }
  if (pcVar8 == (code *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbf6508) && (FUN_144b3d300(&DAT_14cbf6508), DAT_14cbf6508 == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar7 = FUN_14054d46e(&DAT_14c846b20,L"nocef");
      DAT_14cbf6504 = bVar7 ^ 1;
      _Init_thread_footer(&DAT_14cbf6508);
    }
    local_108 = '\x01';
    local_128 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"Browser",L"bEnabled");
    if ((DAT_14cbf6504 == 1) && (local_108 == '\x01')) {
      uStack_d8 = 0;
      uStack_d7 = 0;
      local_e8 = (code *)0x0;
      uStack_e0 = 0;
      uStack_dc = 0;
      local_cf = 1;
      local_c8 = 0;
      local_c0 = 0xffffffff00000000;
      local_b8 = 1;
      local_b4 = 0x18ffffffff;
      local_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      FUN_144a787a6(&uStack_e0,param_2 + 0x1b8);
      uStack_d7 = CONCAT17(*(undefined1 *)(param_2 + 0x1d9),(undefined7)uStack_d7);
      local_cf = *(undefined2 *)(param_2 + 0x1da);
      FUN_14054da5a(&local_c8,param_2 + 0x1c8);
      local_b8 = *(undefined1 *)(param_2 + 0x1d8);
      local_b4 = *(undefined8 *)(param_2 + 0x1dc);
      FUN_14903b2e0(local_a8,param_2 + 0x1e8);
      FUN_140bee9ec(&local_58,param_2 + 0x238);
      uVar9 = FUN_144a52528();
      FUN_1446ddc76(&local_f8,"WebBrowser",1);
      cVar6 = FUN_14011feae(uVar9,local_f8);
      if (cVar6 != '\0') {
        FUN_1446ddc76(&local_f8,"WebBrowser",1);
        pcVar8 = local_f8;
        uVar9 = FUN_144a52528();
        plVar10 = (longlong *)FUN_14493e38c(uVar9,pcVar8);
        cVar6 = (**(code **)(*plVar10 + 0x50))(plVar10);
        if (cVar6 != '\0') {
          FUN_1446ddc76(&local_f8,"WebBrowser",1);
          pcVar8 = local_f8;
          uVar9 = FUN_144a52528();
          plVar10 = (longlong *)FUN_14493e38c(uVar9,pcVar8);
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x48))(plVar10);
          (**(code **)(*plVar10 + 0x10))(plVar10,&local_f8,&local_e8);
          plVar10 = local_f0;
          if (ppcVar2 != &local_f8) {
            *(code **)(param_1 + 0x268) = local_f8;
            local_f8 = (code *)0x0;
            plVar12 = *(longlong **)(param_1 + 0x270);
            if (local_f0 != plVar12) {
              local_f0 = (longlong *)0x0;
              *(longlong **)(param_1 + 0x270) = plVar10;
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                plVar10 = plVar12 + 1;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)*plVar10 == 0) {
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
          }
          plVar10 = local_f0;
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_f0 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)*local_f0)(local_f0);
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
      FUN_14903b332(&local_e8);
    }
  }
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x1a8);
  plVar10 = *(longlong **)(param_2 + 0x1b0);
  plVar12 = *(longlong **)(param_1 + 0x280);
  if (plVar12 != plVar10) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      plVar12 = *(longlong **)(param_1 + 0x280);
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
    *(longlong **)(param_1 + 0x280) = plVar10;
  }
  if (*ppcVar2 == (code *)0x0) {
    if ((*(int *)(param_1 + 0x308) != 0) &&
       (plVar10 = *(longlong **)(param_1 + 0x300), plVar10 != (longlong *)0x0)) {
      (**(code **)(*plVar10 + 0x60))();
    }
    goto LAB_14903a631;
  }
  FUN_14903303c(*ppcVar2,&local_108);
  local_e8 = (code *)CONCAT71(uStack_107,local_108);
  uStack_e0 = SUB84(local_100,0);
  uStack_dc = (undefined4)((ulonglong)local_100 >> 0x20);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_e8);
  plVar10 = (longlong *)CONCAT44(uStack_dc,uStack_e0);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  plVar10 = local_100;
  if (local_100 == (longlong *)0x0) {
    *(ulonglong *)(param_1 + 0x2a8) = CONCAT71(uStack_107,local_108);
    plVar12 = *(longlong **)(param_1 + 0x2b0);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x2b0) = 0;
LAB_14903b239:
      LOCK();
      plVar10 = plVar12 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x00014903b10e:
        if (iVar3 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
    *(ulonglong *)(param_1 + 0x2a8) = CONCAT71(uStack_107,local_108);
    plVar12 = *(longlong **)(param_1 + 0x2b0);
    if (local_100 == plVar12) {
      LOCK();
      plVar12 = local_100 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar12 = plVar10;
        goto joined_r0x00014903b10e;
      }
    }
    else {
      *(longlong **)(param_1 + 0x2b0) = local_100;
      if (plVar12 != (longlong *)0x0) goto LAB_14903b239;
    }
  }
  if (((*(int *)(param_1 + 0x358) != 0) &&
      (plVar10 = *(longlong **)(param_1 + 0x350), plVar10 != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*plVar10 + 0x30))(), cVar6 != '\0')) {
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x1c0))();
    local_e8 = FUN_14903b4f6;
    uStack_e0 = 0;
    FUN_14903b3bc(uVar9,param_1);
  }
  if (((*(int *)(param_1 + 0x368) != 0) && ((longlong *)*local_120 != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)*local_120 + 0x30))(), cVar6 != '\0')) {
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x1c8))();
    local_e8 = FUN_14903b694;
    uStack_e0 = 0;
    FUN_14903b55a(uVar9,param_1);
  }
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x168))();
  local_f8 = FUN_14903b6f0;
  local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
  FUN_14904b0c4(&local_e8,param_1);
  FUN_14904afdc(uVar9,&local_f8,&local_e8);
  FUN_1449db362(&local_e8);
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x188))();
  local_f8 = FUN_14903b87e;
  local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
  FUN_14904b574(&local_e8,param_1,&local_f8);
  FUN_1448b6402(uVar9,&local_f8,&local_e8);
  FUN_1449db362(&local_e8);
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x170))();
  local_f8 = FUN_14903b964;
  local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
  FUN_14904ba10(&local_e8,param_1,&local_f8);
  FUN_145cb5c78(uVar9,&local_f8,&local_e8);
  FUN_1449db362(&local_e8);
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x178))();
  local_f8 = FUN_14903b9e4;
  local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
  FUN_14904ba10(&local_e8,param_1,&local_f8);
  FUN_145cb5c78(uVar9,&local_f8,&local_e8);
  FUN_1449db362(&local_e8);
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x180))();
  local_f8 = FUN_14903ba7c;
  local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
  FUN_14904ba10(&local_e8,param_1,&local_f8);
  FUN_145cb5c78(uVar9,&local_f8,&local_e8);
  FUN_1449db362(&local_e8);
  FUN_149046b3c(param_1 + 0x3c0,param_2 + 0x340);
  plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x268) + 400))();
  if (((longlong *)*plVar10 == (longlong *)0x0 || (int)plVar10[1] == 0) ||
     (cVar6 = (**(code **)(*(longlong *)*plVar10 + 0x30))(), cVar6 == '\0')) {
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 400))();
    local_e8 = FUN_14903bd38;
    uStack_e0 = 0;
    FUN_14903bbfe(uVar9,param_1);
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)*ppcVar2 + 0x198))();
  if (((longlong *)*plVar10 == (longlong *)0x0 || (int)plVar10[1] == 0) ||
     (cVar6 = (**(code **)(*(longlong *)*plVar10 + 0x30))(), cVar6 == '\0')) {
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x198))();
    local_e8 = FUN_14903bed6;
    uStack_e0 = 0;
    FUN_14903bd9c(uVar9,param_1);
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)*ppcVar2 + 0x1a0))();
  if (((longlong *)*plVar10 == (longlong *)0x0 || (int)plVar10[1] == 0) ||
     (cVar6 = (**(code **)(*(longlong *)*plVar10 + 0x30))(), cVar6 == '\0')) {
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x1a0))();
    local_e8 = FUN_14903c082;
    uStack_e0 = 0;
    FUN_14903bf48(uVar9,param_1);
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)*ppcVar2 + 0x1f8))();
  if (((longlong *)*plVar10 == (longlong *)0x0 || (int)plVar10[1] == 0) ||
     (cVar6 = (**(code **)(*(longlong *)*plVar10 + 0x30))(), cVar6 == '\0')) {
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x1f8))();
    local_e8 = FUN_14903c35a;
    uStack_e0 = 0;
    FUN_14903c220(uVar9,param_1);
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)*ppcVar2 + 0x200))();
  if (((longlong *)*plVar10 == (longlong *)0x0 || (int)plVar10[1] == 0) ||
     (cVar6 = (**(code **)(*(longlong *)*plVar10 + 0x30))(), cVar6 == '\0')) {
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x200))();
    local_e8 = FUN_14903c3b6;
    uStack_e0 = 0;
    FUN_14903c220(uVar9,param_1);
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)*ppcVar2 + 0x208))();
  if (((longlong *)*plVar10 == (longlong *)0x0 || (int)plVar10[1] == 0) ||
     (cVar6 = (**(code **)(*(longlong *)*plVar10 + 0x30))(), cVar6 == '\0')) {
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x208))();
    local_e8 = FUN_14903c54c;
    uStack_e0 = 0;
    FUN_14903c412(uVar9,param_1);
  }
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x1e0))();
  local_e8 = FUN_14903c6e2;
  uStack_e0 = 0;
  FUN_14903c5a8(uVar9,param_1,&local_e8);
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x1e8))();
  local_e8 = (code *)&LAB_14903c878;
  uStack_e0 = 0;
  FUN_14903c73e(uVar9,param_1,&local_e8);
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x1d0))();
  local_f8 = FUN_14903c896;
  local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
  FUN_14904d6a0(&local_e8,param_1);
  FUN_14904d5b8(uVar9,&local_f8,&local_e8);
  FUN_1449db362(&local_e8);
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x1d8))();
  local_f8 = FUN_14903d04e;
  local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
  FUN_14904b574(&local_e8,param_1,&local_f8);
  FUN_1448b6402(uVar9,&local_f8,&local_e8);
  FUN_1449db362(&local_e8);
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x1f0))();
  local_e8 = FUN_14903d2f4;
  uStack_e0 = 0;
  FUN_14903d1ba(uVar9,param_1,&local_e8);
  FUN_14096c7c0(param_1 + 0x3b0,param_2 + 0x330);
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x210))();
  local_e8 = FUN_14903d47e;
  uStack_e0 = 0;
  FUN_14903d344(uVar9,param_1,&local_e8);
  FUN_149046bc0(param_1 + 0x3d0,param_2 + 0x350);
  plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x268) + 0x1b8))();
  if (((longlong *)*plVar10 == (longlong *)0x0 || (int)plVar10[1] == 0) ||
     (cVar6 = (**(code **)(*(longlong *)*plVar10 + 0x30))(), cVar6 == '\0')) {
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x1b8))();
    local_e8 = (code *)&LAB_14903d614;
    uStack_e0 = 0;
    FUN_14903d4da(uVar9,param_1);
  }
  puVar11 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x268);
  plVar10 = *(longlong **)(param_1 + 0x270);
  if (plVar10 == (longlong *)0x0) {
    *puVar11 = &PTR_FUN_14ba6cf60;
    puVar11[1] = uVar9;
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    *puVar11 = &PTR_FUN_14ba6cf60;
    puVar11[1] = uVar9;
    puVar11[2] = plVar10;
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    *(undefined1 *)(puVar11 + 3) = 0;
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba6e750;
  plVar12[2] = (longlong)puVar11;
  *(undefined8 **)(param_1 + 0x288) = puVar11;
  plVar10 = *(longlong **)(param_1 + 0x290);
  if (plVar12 == plVar10) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x00014903b17f:
        if (iVar3 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      goto LAB_14903b18a;
    }
  }
  else {
    *(longlong **)(param_1 + 0x290) = plVar12;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar12 = plVar10;
        goto joined_r0x00014903b17f;
      }
    }
LAB_14903b18a:
    puVar11 = *(undefined8 **)(param_1 + 0x288);
    plVar10 = *(longlong **)(param_1 + 0x290);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x2a8);
  local_118 = puVar11;
  if (plVar10 == (longlong *)0x0) {
    local_110 = (longlong *)0x0;
    FUN_1456f2bd8(uVar9);
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    local_110 = plVar10;
    FUN_1456f2bd8(uVar9);
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  FUN_14903d634(param_1);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_100 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_100 + 0x10))(local_100);
      }
    }
  }
LAB_14903a631:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14903b2e0 FUN_14903b2e0 body=82 status=ok
// SIG undefined FUN_14903b2e0(void)

longlong FUN_14903b2e0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x48) == '\x01') {
      if (*(char *)(param_1 + 0x48) != '\0') {
        FUN_14903f31a(param_1);
      }
      FUN_14903f1c8(param_1,param_2);
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x48) == '\0') {
        return param_1;
      }
      FUN_14903f31a(param_1);
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x48) = uVar1;
  }
  return param_1;
}



// FUNCTION 14903b332 FUN_14903b332 body=138 status=ok
// SIG undefined FUN_14903b332(void)

void FUN_14903b332(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    FUN_14903f31a(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != -1) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0xffffffff00000000;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14903b3bc FUN_14903b3bc body=313 status=ok
// SIG undefined FUN_14903b3bc(void)

void FUN_14903b3bc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14903b4bc:
    *puVar5 = &PTR_LAB_14ba6dbf0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14ba6db80;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14903b4bc;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ba6dbf0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14ba6db80;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00014903b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14903b4f6 FUN_14903b4f6 body=100 status=ok
// SIG undefined FUN_14903b4f6(void)

undefined8 FUN_14903b4f6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x358) != 0) && (*(longlong **)(param_1 + 0x350) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x358) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x350);
      }
                    /* WARNING: Could not recover jumptable at 0x00014903b549. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}


