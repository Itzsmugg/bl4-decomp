// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14658ed02 FUN_14658ed02 body=405 status=ok
// SIG undefined FUN_14658ed02(void)

longlong FUN_14658ed02(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar6 = *(int *)(param_2 + 1);
  if (iVar6 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  iVar4 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar4 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar4,puVar9);
  iVar6 = FUN_1457511aa((longlong *)(param_1 + 0x1c0),uVar5,param_2);
  if (iVar6 == -1) {
LAB_14658ee8e:
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x1c0);
    lVar1 = lVar3 + (longlong)iVar6 * 0x28;
    if ((lVar1 == 0) || (lVar3 + (longlong)iVar6 * 0x28 == -0x10)) goto LAB_14658ee8e;
    local_38 = (undefined2 *)0x0;
    uVar2 = *(uint *)(lVar1 + 0x18);
    _Src = *(void **)(lVar1 + 0x10);
    uStack_30 = CONCAT44(uStack_30._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      uStack_30 = (ulonglong)uVar2;
    }
    else {
      FUN_1446dd670(&local_38,uVar2,0);
      memcpy(local_38,_Src,(longlong)(int)uVar2 * 2);
      if (1 < (int)uStack_30) {
        plVar7 = (longlong *)(param_1 + 0xf8);
        uVar5 = FUN_144a49b4a((int)uStack_30 + -1,local_38);
        iVar6 = FUN_1413fe28c(plVar7,uVar5,&local_38);
        if (iVar6 != -1) {
          puVar9 = local_38;
          if ((int)uStack_30 == 0) {
            puVar9 = &DAT_149dfb77a;
          }
          uVar10 = 0;
          uVar8 = (ulonglong)((int)uStack_30 - 1);
          if ((int)uStack_30 == 0) {
            uVar8 = uVar10;
          }
          uVar5 = FUN_144a49b4a(uVar8,puVar9);
          iVar6 = FUN_1413fe28c(plVar7,uVar5,&local_38);
          if (iVar6 != -1) {
            uVar10 = (longlong)iVar6 * 0x20 + *plVar7;
          }
          plVar7 = (longlong *)(uVar10 + 0x10);
          if (uVar10 == 0) {
            plVar7 = (longlong *)0x0;
          }
          param_1 = *plVar7;
          goto LAB_14658ee4d;
        }
      }
    }
  }
  param_1 = param_1 + 0x68;
LAB_14658ee4d:
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14658ee98 FUN_14658ee98 body=100 status=ok
// SIG undefined FUN_14658ee98(void)

void FUN_14658ee98(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if (lVar1 != 0) {
    if (DAT_14cb99c48 == (undefined8 *)0x0) {
      DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
    FUN_14480f766(DAT_14cb99c48,lVar1);
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 14658eefc FUN_14658eefc body=300 status=ok
// SIG undefined FUN_14658eefc(void)

void FUN_14658eefc(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b526910;
  FUN_144760e21(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14658f028 FUN_14658f028 body=107 status=ok
// SIG undefined FUN_14658f028(void)

void FUN_14658f028(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined **local_28;
  undefined1 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0xe1) != '\x02') {
    *(undefined1 *)(param_1 + 0xe1) = 2;
    local_28 = &PTR_FUN_14b525ad0;
    local_20 = 2;
    local_18 = param_1;
    FUN_145a9f81e(param_1 + 0x20);
    FUN_145c9fe7c(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14658f094 FUN_14658f094 body=248 status=ok
// SIG undefined FUN_14658f094(void)

void FUN_14658f094(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b5269c0;
  FUN_144760e21(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14658f18c FUN_14658f18c body=236 status=ok
// SIG undefined FUN_14658f18c(void)

void FUN_14658f18c(undefined8 *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined1 local_b0 [128];
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  vx_req_sessiongroup_set_tx_session_create(&local_b8);
  if (*(int *)(param_1 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
  }
  local_30 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_28 = 0;
    local_20 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_b0,_Str,sVar1 & 0xffffffff,1);
  }
  uVar2 = vx_strdup(local_28);
  *(undefined8 *)(local_b8 + 0x30) = uVar2;
  if (local_30 != 0) {
    FUN_1400020a8(local_30);
  }
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_1412f579e(local_b8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14658f27a FUN_14658f27a body=211 status=ok
// SIG undefined FUN_14658f27a(void)

LPCRITICAL_SECTION
FUN_14658f27a(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined8 *param_3)

{
  DWORD DVar1;
  undefined8 uVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  _LIST_ENTRY *p_Var5;
  
  DVar1 = *(DWORD *)(param_3 + 1);
  uVar2 = *param_3;
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var3 = param_1[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_14a3cb240;
  LOCK();
  UNLOCK();
  p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar4 = DAT_14c758608 + 1;
  if (p_Var5 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  (p_Var3->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var3 = &PTR_FUN_14b527f20;
  (p_Var3->ProcessLocksList).Blink = param_2;
  p_Var3->EntryCount = (int)uVar2;
  p_Var3->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3->Flags = DVar1;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14658f34e FUN_14658f34e body=231 status=ok
// SIG undefined FUN_14658f34e(void)

void FUN_14658f34e(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
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
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14b527f90;
  local_28[3] = &DAT_14cb99c40;
  local_28[4] = FUN_145c6a47a;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14658f436 FUN_14658f436 body=3417 status=ok
// SIG undefined FUN_14658f436(void)

undefined4
FUN_14658f436(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined4 param_4,
             byte param_5,char param_6,longlong *param_7,longlong *param_8,longlong *param_9,
             undefined8 param_10)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined1 auStack_228 [36];
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  wchar_t *local_1f0;
  int local_1e8;
  longlong *local_180;
  undefined8 local_178;
  longlong *plStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158 [2];
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128 [2];
  wchar_t *local_118;
  int local_110;
  longlong local_108 [2];
  wchar_t *local_f8;
  int local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong *plStack_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_204 = param_4;
  FUN_140d60302(param_2);
  vx_req_account_anonymous_login_create(&local_e8);
  if (*(int *)(param_1 + 1) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*param_1;
  }
  local_60 = 0;
  if (pwVar7 == (wchar_t *)0x0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    sVar4 = wcslen(pwVar7);
    FUN_1446fe5a4(&local_e0,pwVar7,sVar4 & 0xffffffff,1);
  }
  uVar5 = vx_strdup(local_58);
  *(undefined8 *)(local_e8 + 0x30) = uVar5;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_3 + 1) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*param_3;
  }
  local_60 = 0;
  if (pwVar7 == (wchar_t *)0x0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    sVar4 = wcslen(pwVar7);
    FUN_1446fe5a4(&local_e0,pwVar7,sVar4 & 0xffffffff,1);
  }
  uVar5 = vx_strdup(local_58);
  *(undefined8 *)(local_e8 + 0x88) = uVar5;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_14588d72e(param_2,&local_1f0);
  pwVar7 = local_1f0;
  if (local_1e8 == 0) {
    pwVar7 = L"";
  }
  local_60 = 0;
  if (pwVar7 == (wchar_t *)0x0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    sVar4 = wcslen(pwVar7);
    FUN_1446fe5a4(&local_e0,pwVar7,sVar4 & 0xffffffff,1);
  }
  uVar5 = vx_strdup(local_58);
  *(undefined8 *)(local_e8 + 0x78) = uVar5;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_1f0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  iVar3 = *(int *)(param_2 + 0x48);
  if (iVar3 < 2) {
    FUN_1400b22c2(&local_e0,&DAT_149e02088);
  }
  else {
    FUN_1400b22c2(local_108,L".Preview");
    FUN_1407ec8fc(&local_e0,param_2 + 0x40,local_108);
  }
  FUN_1400b22c2(&local_180,L".Preview");
  FUN_1400b22c2(local_138,L".Preview");
  FUN_1400b22c2(local_158,L".Preview");
  FUN_144a7dea0(local_148,local_158,param_2 + 0x20);
  FUN_1401c7f3e(local_128,local_148,local_138);
  FUN_144a7dea0(&local_118,local_128,param_2 + 0x10);
  FUN_1401c7f3e(&local_1f0,&local_118,&local_180);
  FUN_1401c7f3e(&local_f8,&local_1f0,&local_e0);
  if (local_1f0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_118 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  if (local_138[0] != 0) {
    FUN_1400020a8();
  }
  if (local_180 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if ((1 < iVar3) && (local_108[0] != 0)) {
    FUN_1400020a8();
  }
  pwVar7 = local_f8;
  if (local_f0 == 0) {
    pwVar7 = L"";
  }
  local_60 = 0;
  if (pwVar7 == (wchar_t *)0x0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    sVar4 = wcslen(pwVar7);
    FUN_1446fe5a4(&local_e0,pwVar7,sVar4 & 0xffffffff,1);
  }
  uVar5 = vx_strdup(local_58);
  *(undefined8 *)(local_e8 + 0x80) = uVar5;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_2 + 0x38) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = *(wchar_t **)(param_2 + 0x30);
  }
  local_60 = 0;
  if (pwVar7 == (wchar_t *)0x0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    sVar4 = wcslen(pwVar7);
    FUN_1446fe5a4(&local_e0,pwVar7,sVar4 & 0xffffffff,1);
  }
  uVar5 = vx_strdup(local_58);
  *(undefined8 *)(local_e8 + 0x38) = uVar5;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_144a8b2a0(&local_1f0,param_2 + 0x60,&DAT_149e06196);
  pwVar7 = local_1f0;
  if (local_1e8 == 0) {
    pwVar7 = L"";
  }
  local_60 = 0;
  if (pwVar7 == (wchar_t *)0x0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    sVar4 = wcslen(pwVar7);
    FUN_1446fe5a4(&local_e0,pwVar7,sVar4 & 0xffffffff,1);
  }
  uVar5 = vx_strdup(local_58);
  *(undefined8 *)(local_e8 + 0xb0) = uVar5;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_1f0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(local_e8 + 0x40) = local_204;
  *(uint *)(local_e8 + 0x44) = (uint)param_5;
  uVar5 = local_168;
  if (param_5 != 0) {
    iVar6 = (uint)(param_6 != '\x01') * 2 + 2;
    iVar3 = 0;
    if (param_6 == '\0') {
      iVar6 = 0;
    }
    *(int *)(local_e8 + 0x48) = iVar6;
    iVar6 = (int)param_7[1] - *(int *)((longlong)param_7 + 0x34);
    if (iVar6 != 0) {
      uVar5 = vx_calloc((longlong)(iVar6 + 1),8);
      *(undefined8 *)(local_e8 + 0x90) = uVar5;
      plVar1 = param_7 + 2;
      local_e0 = 0x100000000;
      local_d0 = 0xffffffff;
      uStack_c8 = 0;
      plStack_d8 = plVar1;
      if ((int)param_7[5] != 0) {
        FUN_1449c0562(&local_e0);
        iVar3 = (int)param_7[5];
      }
      local_178 = local_e0;
      plStack_170 = plStack_d8;
      local_168 = local_d0;
      uVar5 = local_168;
      uStack_160 = CONCAT44(uStack_c4,uStack_c8);
      local_180 = param_7;
      local_168._4_4_ = (int)((ulonglong)local_d0 >> 0x20);
      if ((local_168._4_4_ != iVar3) || (plStack_d8 != plVar1)) {
        lVar8 = 0;
        iVar6 = local_168._4_4_;
        local_168 = uVar5;
        do {
          FUN_140d600ee(&local_1f0,(longlong)iVar6 * 0x78 + *local_180);
          FUN_14588d72e(&local_1f0,&local_118);
          pwVar7 = L"";
          if (local_110 != 0) {
            pwVar7 = local_118;
          }
          local_60 = 0;
          if (pwVar7 == (wchar_t *)0x0) {
            local_58 = 0;
            local_50 = 0;
          }
          else {
            sVar4 = wcslen(pwVar7);
            FUN_1446fe5a4(&local_e0,pwVar7,sVar4 & 0xffffffff,1);
          }
          uVar5 = vx_strdup(local_58);
          *(undefined8 *)(*(longlong *)(local_e8 + 0x90) + lVar8) = uVar5;
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          if (local_118 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          FUN_140d5fbf2(&local_1f0);
          local_168 = CONCAT44(local_168._4_4_,(uint)local_168 & ~local_178._4_4_);
          FUN_1449c0562(&local_178);
          lVar8 = lVar8 + 8;
          iVar6 = local_168._4_4_;
          uVar5 = local_168;
        } while (local_180 != param_7 || (plStack_170 != plVar1 || local_168._4_4_ != iVar3));
      }
    }
    local_168 = uVar5;
    iVar3 = (int)param_8[1] - *(int *)((longlong)param_8 + 0x34);
    uVar5 = local_168;
    if (iVar3 != 0) {
      uVar5 = vx_calloc((longlong)(iVar3 + 1),8);
      *(undefined8 *)(local_e8 + 0x98) = uVar5;
      plVar1 = param_8 + 2;
      local_e0 = 0x100000000;
      local_d0 = 0xffffffff;
      uStack_c8 = 0;
      plStack_d8 = plVar1;
      if ((int)param_8[5] == 0) {
        iVar3 = 0;
      }
      else {
        FUN_1449c0562(&local_e0);
        iVar3 = (int)param_8[5];
      }
      uStack_160 = CONCAT44(uStack_c4,uStack_c8);
      local_168 = local_d0;
      uVar5 = local_168;
      local_178 = local_e0;
      plStack_170 = plStack_d8;
      local_180 = param_8;
      local_168._4_4_ = (int)((ulonglong)local_d0 >> 0x20);
      if ((local_168._4_4_ != iVar3) || (plStack_d8 != plVar1)) {
        lVar8 = 0;
        iVar6 = local_168._4_4_;
        local_168 = uVar5;
        do {
          FUN_140d600ee(&local_1f0,(longlong)iVar6 * 0x78 + *local_180);
          FUN_14588d72e(&local_1f0,&local_118);
          pwVar7 = L"";
          if (local_110 != 0) {
            pwVar7 = local_118;
          }
          local_60 = 0;
          if (pwVar7 == (wchar_t *)0x0) {
            local_58 = 0;
            local_50 = 0;
          }
          else {
            sVar4 = wcslen(pwVar7);
            FUN_1446fe5a4(&local_e0,pwVar7,sVar4 & 0xffffffff,1);
          }
          uVar5 = vx_strdup(local_58);
          *(undefined8 *)(*(longlong *)(local_e8 + 0x98) + lVar8) = uVar5;
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          if (local_118 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          FUN_140d5fbf2(&local_1f0);
          local_168 = CONCAT44(local_168._4_4_,(uint)local_168 & ~local_178._4_4_);
          FUN_1449c0562(&local_178);
          lVar8 = lVar8 + 8;
          iVar6 = local_168._4_4_;
          uVar5 = local_168;
        } while (local_180 != param_8 || (plStack_170 != plVar1 || local_168._4_4_ != iVar3));
      }
    }
    local_168 = uVar5;
    iVar3 = (int)param_9[1] - *(int *)((longlong)param_9 + 0x34);
    uVar5 = local_168;
    if (iVar3 != 0) {
      uVar5 = vx_calloc((longlong)(iVar3 + 1),8);
      *(undefined8 *)(local_e8 + 0xa8) = uVar5;
      plVar1 = param_9 + 2;
      local_e0 = 0x100000000;
      local_d0 = 0xffffffff;
      uStack_c8 = 0;
      plStack_d8 = plVar1;
      if ((int)param_9[5] == 0) {
        iVar3 = 0;
      }
      else {
        FUN_1449c0562(&local_e0);
        iVar3 = (int)param_9[5];
      }
      uStack_160 = CONCAT44(uStack_c4,uStack_c8);
      local_168 = local_d0;
      uVar5 = local_168;
      local_178 = local_e0;
      plStack_170 = plStack_d8;
      local_180 = param_9;
      local_168._4_4_ = (int)((ulonglong)local_d0 >> 0x20);
      if ((local_168._4_4_ != iVar3) || (plStack_d8 != plVar1)) {
        lVar8 = 0;
        iVar6 = local_168._4_4_;
        local_168 = uVar5;
        do {
          FUN_140d600ee(&local_1f0,(longlong)iVar6 * 0x78 + *local_180);
          FUN_14588d72e(&local_1f0,&local_118);
          pwVar7 = L"";
          if (local_110 != 0) {
            pwVar7 = local_118;
          }
          local_60 = 0;
          if (pwVar7 == (wchar_t *)0x0) {
            local_58 = 0;
            local_50 = 0;
          }
          else {
            sVar4 = wcslen(pwVar7);
            FUN_1446fe5a4(&local_e0,pwVar7,sVar4 & 0xffffffff,1);
          }
          uVar5 = vx_strdup(local_58);
          *(undefined8 *)(*(longlong *)(local_e8 + 0xa8) + lVar8) = uVar5;
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          if (local_118 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          FUN_140d5fbf2(&local_1f0);
          local_168 = CONCAT44(local_168._4_4_,(uint)local_168 & ~local_178._4_4_);
          FUN_1449c0562(&local_178);
          lVar8 = lVar8 + 8;
          iVar6 = local_168._4_4_;
          uVar5 = local_168;
        } while (local_180 != param_9 || (plStack_170 != plVar1 || local_168._4_4_ != iVar3));
      }
    }
  }
  local_168 = uVar5;
  local_200 = 0;
  local_1f8 = 0;
  FUN_1412f566c(&local_200,param_10);
  uVar2 = FUN_1412f579e(local_e8,&local_200);
  if (local_f8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_10);
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146590190 FUN_146590190 body=66 status=ok
// SIG undefined FUN_146590190(void)

undefined8 * FUN_146590190(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b525dd0;
  FUN_140d5fbf2(param_1 + 8);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465901d2 FUN_1465901d2 body=29 status=ok
// SIG undefined FUN_1465901d2(void)

undefined8 FUN_1465901d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465901f0 FUN_1465901f0 body=29 status=ok
// SIG undefined FUN_1465901f0(void)

undefined8 FUN_1465901f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659020e FUN_14659020e body=109 status=ok
// SIG undefined FUN_14659020e(void)

int FUN_14659020e(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_1414b3116(lVar1 + (longlong)iVar4 * 0x78,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x70 + (longlong)iVar4 * 0x78);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14659027c FUN_14659027c body=93 status=ok
// SIG undefined FUN_14659027c(void)

void FUN_14659027c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b527f90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1465902da FUN_1465902da body=231 status=ok
// SIG undefined FUN_1465902da(void)

void FUN_1465902da(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
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
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14b528a90;
  local_28[3] = &DAT_14cb99c70;
  local_28[4] = FUN_145a2cca2;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465903d0 FUN_1465903d0 body=31 status=ok
// SIG undefined FUN_1465903d0(void)

undefined8 FUN_1465903d0(undefined8 param_1,undefined8 param_2)

{
  FUN_14145706a(param_1,param_2,0,3);
  return param_2;
}



// FUNCTION 1465903f0 FUN_1465903f0 body=34 status=ok
// SIG undefined FUN_1465903f0(void)

undefined8 FUN_1465903f0(undefined8 param_1,undefined8 param_2)

{
  FUN_14145706a(param_1,param_2,1,3);
  return param_2;
}



// FUNCTION 146590412 FUN_146590412 body=31 status=ok
// SIG undefined FUN_146590412(void)

undefined8 FUN_146590412(undefined8 param_1,undefined8 param_2)

{
  FUN_14145706a(param_1,param_2,1,0);
  return param_2;
}



// FUNCTION 146590432 FUN_146590432 body=110 status=ok
// SIG undefined FUN_146590432(void)

void FUN_146590432(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  if ((plVar1 != (longlong *)0x0) && (*(int *)(param_1 + 0xa0) == 2)) {
    plVar2 = (longlong *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar2 + 0x80))(plVar2,param_1 + 0x70);
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x30))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000146590495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x80))(plVar1,param_1 + 0x70,*(code **)(*plVar1 + 0x80));
    return;
  }
  return;
}



// FUNCTION 1465904a0 FUN_1465904a0 body=75 status=ok
// SIG undefined FUN_1465904a0(void)

void FUN_1465904a0(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1465904ec FUN_1465904ec body=29 status=ok
// SIG undefined FUN_1465904ec(void)

undefined8 FUN_1465904ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659050a FUN_14659050a body=93 status=ok
// SIG undefined FUN_14659050a(void)

void FUN_14659050a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b528a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146590568 FUN_146590568 body=29 status=ok
// SIG undefined FUN_146590568(void)

undefined8 FUN_146590568(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146590586 FUN_146590586 body=156 status=ok
// SIG undefined FUN_146590586(void)

undefined8 * FUN_146590586(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 146590622 FUN_146590622 body=132 status=ok
// SIG undefined FUN_146590622(void)

void FUN_146590622(longlong param_1,int param_2)

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



// FUNCTION 1465906a6 FUN_1465906a6 body=87 status=ok
// SIG undefined FUN_1465906a6(void)

undefined8 * FUN_1465906a6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b528bb0;
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
  *param_1 = &PTR_LAB_14b528c20;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465906fd FUN_1465906fd body=49 status=ok
// SIG undefined FUN_1465906fd(void)

longlong FUN_1465906fd(void)

{
  if (DAT_14cb99c80 == 0) {
    FUN_140f50038(&DAT_14cb99c80,&PTR_s__Script_GbxDefaultLoadingScreen_14b529117_1_14b5290f8);
  }
  return DAT_14cb99c80;
}



// FUNCTION 14659072e FUN_14659072e body=47 status=ok
// SIG undefined FUN_14659072e(void)

longlong FUN_14659072e(void)

{
  if (DAT_14cb99c90 == 0) {
    FUN_1409ce572(&DAT_14cb99c90,&PTR_FUN_14b5291b0);
  }
  return DAT_14cb99c90;
}



// FUNCTION 14659075d FUN_14659075d body=86 status=ok
// SIG undefined FUN_14659075d(void)

void FUN_14659075d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b529500;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined1 *)(puVar1 + 0x10) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x84) = 0x40000000;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return;
}



// FUNCTION 1465907b3 FUN_1465907b3 body=47 status=ok
// SIG undefined FUN_1465907b3(void)

longlong FUN_1465907b3(void)

{
  if (DAT_14cb99cb0 == 0) {
    FUN_14073dd9a(&DAT_14cb99cb0,&PTR_LAB_14b5294b8);
  }
  return DAT_14cb99cb0;
}



// FUNCTION 1465907ea FUN_1465907ea body=47 status=ok
// SIG undefined FUN_1465907ea(void)

longlong FUN_1465907ea(void)

{
  if (DAT_14cb99cc8 == 0) {
    FUN_14073dd9a(&DAT_14cb99cc8,&PTR_LAB_14b529818);
  }
  return DAT_14cb99cc8;
}



// FUNCTION 14659081a FUN_14659081a body=97 status=ok
// SIG undefined FUN_14659081a(void)

bool FUN_14659081a(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140aa7b7e(*(undefined8 *)(param_1 + 0x10),&local_28,0);
  iVar1 = (int)uStack_20;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14659087c FUN_14659087c body=192 status=ok
// SIG undefined FUN_14659087c(void)

void FUN_14659087c(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b52a220;
  puVar1[3] = &DAT_14cb99ce0;
  puVar1[4] = FUN_1459a6732;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14659093e FUN_14659093e body=40 status=ok
// SIG undefined FUN_14659093e(void)

undefined8 FUN_14659093e(undefined8 param_1,int param_2)

{
  FUN_1459840ea();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146590966 FUN_146590966 body=29 status=ok
// SIG undefined FUN_146590966(void)

bool FUN_146590966(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146590984 FUN_146590984 body=26 status=ok
// SIG undefined FUN_146590984(void)

bool FUN_146590984(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14659099e FUN_14659099e body=24 status=ok
// SIG undefined FUN_14659099e(void)

bool FUN_14659099e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1465909b6 FUN_1465909b6 body=24 status=ok
// SIG undefined FUN_1465909b6(void)

bool FUN_1465909b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1465909ce FUN_1465909ce body=29 status=ok
// SIG undefined FUN_1465909ce(void)

bool FUN_1465909ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1465909ec FUN_1465909ec body=24 status=ok
// SIG undefined FUN_1465909ec(void)

bool FUN_1465909ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146590a04 FUN_146590a04 body=29 status=ok
// SIG undefined FUN_146590a04(void)

bool FUN_146590a04(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146590a22 FUN_146590a22 body=24 status=ok
// SIG undefined FUN_146590a22(void)

bool FUN_146590a22(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146590a3a FUN_146590a3a body=29 status=ok
// SIG undefined FUN_146590a3a(void)

bool FUN_146590a3a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146590a58 FUN_146590a58 body=29 status=ok
// SIG undefined FUN_146590a58(void)

bool FUN_146590a58(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146590a76 FUN_146590a76 body=93 status=ok
// SIG undefined FUN_146590a76(void)

void FUN_146590a76(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b52a220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146590ad4 FUN_146590ad4 body=29 status=ok
// SIG undefined FUN_146590ad4(void)

undefined8 FUN_146590ad4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146590af2 FUN_146590af2 body=192 status=ok
// SIG undefined FUN_146590af2(void)

void FUN_146590af2(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b52a980;
  puVar1[3] = &DAT_14cb99ce4;
  puVar1[4] = FUN_1459d0210;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146590bb4 FUN_146590bb4 body=93 status=ok
// SIG undefined FUN_146590bb4(void)

void FUN_146590bb4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b52a980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146590c12 FUN_146590c12 body=29 status=ok
// SIG undefined FUN_146590c12(void)

undefined8 FUN_146590c12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146590c30 FUN_146590c30 body=146 status=ok
// SIG undefined FUN_146590c30(void)

void FUN_146590c30(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146590cc8 FUN_146590cc8 body=47 status=ok
// SIG undefined FUN_146590cc8(void)

longlong FUN_146590cc8(void)

{
  if (DAT_14cb99d50 == 0) {
    FUN_14073dd9a(&DAT_14cb99d50,&PTR_LAB_14b52ace0);
  }
  return DAT_14cb99d50;
}



// FUNCTION 146590cf7 FUN_146590cf7 body=47 status=ok
// SIG undefined FUN_146590cf7(void)

longlong FUN_146590cf7(void)

{
  if (DAT_14cb99d40 == 0) {
    FUN_14000fc22(&DAT_14cb99d40,&PTR_FUN_14b52abd0);
  }
  return DAT_14cb99d40;
}



// FUNCTION 146590d26 FUN_146590d26 body=34 status=ok
// SIG undefined FUN_146590d26(void)

void FUN_146590d26(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a870be();
  FUN_14069c8d6(uVar1,&PTR_s_AddChildToGameResponsivePanel_14b52ac10,1);
  return;
}



// FUNCTION 146590d48 FUN_146590d48 body=47 status=ok
// SIG undefined FUN_146590d48(void)

longlong FUN_146590d48(void)

{
  if (DAT_14cb99d68 == 0) {
    FUN_14073dd9a(&DAT_14cb99d68,&PTR_LAB_14b52b128);
  }
  return DAT_14cb99d68;
}



// FUNCTION 146590d77 FUN_146590d77 body=49 status=ok
// SIG undefined FUN_146590d77(void)

longlong FUN_146590d77(void)

{
  if (DAT_14cb99db8 == 0) {
    FUN_14073dd9a(&DAT_14cb99db8,&PTR_LAB_14b52bac0);
  }
  return DAT_14cb99db8;
}



// FUNCTION 146590da8 FUN_146590da8 body=47 status=ok
// SIG undefined FUN_146590da8(void)

longlong FUN_146590da8(void)

{
  if (DAT_14cb99d78 == 0) {
    FUN_14000fc22(&DAT_14cb99d78,&PTR_FUN_14b52b4a0);
  }
  return DAT_14cb99d78;
}



// FUNCTION 146590dd7 FUN_146590dd7 body=47 status=ok
// SIG undefined FUN_146590dd7(void)

longlong FUN_146590dd7(void)

{
  if (DAT_14cb99d80 == 0) {
    FUN_14000fc22(&DAT_14cb99d80,&PTR_FUN_14b52b530);
  }
  return DAT_14cb99d80;
}



// FUNCTION 146590e06 FUN_146590e06 body=47 status=ok
// SIG undefined FUN_146590e06(void)

longlong FUN_146590e06(void)

{
  if (DAT_14cb99d88 == 0) {
    FUN_14000fc22(&DAT_14cb99d88,&PTR_FUN_14b52b5b0);
  }
  return DAT_14cb99d88;
}



// FUNCTION 146590e35 FUN_146590e35 body=47 status=ok
// SIG undefined FUN_146590e35(void)

longlong FUN_146590e35(void)

{
  if (DAT_14cb99d90 == 0) {
    FUN_14000fc22(&DAT_14cb99d90,&PTR_FUN_14b52b6a0);
  }
  return DAT_14cb99d90;
}



// FUNCTION 146590e64 FUN_146590e64 body=47 status=ok
// SIG undefined FUN_146590e64(void)

longlong FUN_146590e64(void)

{
  if (DAT_14cb99d98 == 0) {
    FUN_14000fc22(&DAT_14cb99d98,&PTR_FUN_14b52b738);
  }
  return DAT_14cb99d98;
}



// FUNCTION 146590e93 FUN_146590e93 body=47 status=ok
// SIG undefined FUN_146590e93(void)

longlong FUN_146590e93(void)

{
  if (DAT_14cb99da0 == 0) {
    FUN_14000fc22(&DAT_14cb99da0,&PTR_FUN_14b52b7c0);
  }
  return DAT_14cb99da0;
}



// FUNCTION 146590ec2 FUN_146590ec2 body=47 status=ok
// SIG undefined FUN_146590ec2(void)

longlong FUN_146590ec2(void)

{
  if (DAT_14cb99da8 == 0) {
    FUN_14000fc22(&DAT_14cb99da8,&PTR_FUN_14b52b858);
  }
  return DAT_14cb99da8;
}



// FUNCTION 146590ef2 FUN_146590ef2 body=34 status=ok
// SIG undefined FUN_146590ef2(void)

void FUN_146590ef2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1410ec244();
  FUN_14069c8d6(uVar1,&PTR_s_GetDescriptionRichText_14b52b8a0,7);
  return;
}



// FUNCTION 146590f21 FUN_146590f21 body=99 status=ok
// SIG undefined FUN_146590f21(void)

void FUN_146590f21(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fbcba4(puVar1);
  *puVar1 = &PTR_FUN_14b52bea0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 2;
  FUN_144a5dc74(puVar1 + 0x2a);
  *(undefined1 *)(puVar1 + 0x2f) = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  *(undefined4 *)(puVar1 + 0x2e) = 0;
  return;
}



// FUNCTION 146590f8f FUN_146590f8f body=47 status=ok
// SIG undefined FUN_146590f8f(void)

longlong FUN_146590f8f(void)

{
  if (DAT_14cb99dd0 == 0) {
    FUN_14073dd9a(&DAT_14cb99dd0,&PTR_LAB_14b52be58);
  }
  return DAT_14cb99dd0;
}



// FUNCTION 146590fc9 FUN_146590fc9 body=47 status=ok
// SIG undefined FUN_146590fc9(void)

longlong FUN_146590fc9(void)

{
  if (DAT_14cb99de8 == 0) {
    FUN_14073dd9a(&DAT_14cb99de8,&PTR_LAB_14b52c298);
  }
  return DAT_14cb99de8;
}



// FUNCTION 146590ff8 FUN_146590ff8 body=74 status=ok
// SIG undefined FUN_146590ff8(void)

void FUN_146590ff8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fbcba4(puVar1);
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  *puVar1 = &PTR_FUN_14b52c680;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 2;
  FUN_144a5dc74(puVar1 + 0x2c);
  return;
}



// FUNCTION 146591047 FUN_146591047 body=47 status=ok
// SIG undefined FUN_146591047(void)

longlong FUN_146591047(void)

{
  if (DAT_14cb99e00 == 0) {
    FUN_14073dd9a(&DAT_14cb99e00,&PTR_LAB_14b52c638);
  }
  return DAT_14cb99e00;
}



// FUNCTION 146591076 FUN_146591076 body=47 status=ok
// SIG undefined FUN_146591076(void)

longlong FUN_146591076(void)

{
  if (DAT_14cb99e38 == 0) {
    FUN_14073dd9a(&DAT_14cb99e38,&PTR_LAB_14b52cc30);
  }
  return DAT_14cb99e38;
}



// FUNCTION 1465910a5 FUN_1465910a5 body=47 status=ok
// SIG undefined FUN_1465910a5(void)

longlong FUN_1465910a5(void)

{
  if (DAT_14cb99e18 == 0) {
    FUN_14000fc22(&DAT_14cb99e18,&PTR_FUN_14b52ca60);
  }
  return DAT_14cb99e18;
}



// FUNCTION 1465910d4 FUN_1465910d4 body=47 status=ok
// SIG undefined FUN_1465910d4(void)

longlong FUN_1465910d4(void)

{
  if (DAT_14cb99e28 == 0) {
    FUN_14000fc22(&DAT_14cb99e28,&PTR_FUN_14b52cb30);
  }
  return DAT_14cb99e28;
}



// FUNCTION 146591103 FUN_146591103 body=71 status=ok
// SIG undefined FUN_146591103(void)

void FUN_146591103(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e2f36c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b52cc70;
  puVar1[5] = &PTR_FUN_14b52d120;
  puVar1[0x2d] = &PTR_FUN_14b52d160;
  puVar1[0x5a] = 0;
  return;
}



// FUNCTION 146591154 FUN_146591154 body=47 status=ok
// SIG undefined FUN_146591154(void)

longlong FUN_146591154(void)

{
  if (DAT_14cb99e50 == 0) {
    FUN_14073dd9a(&DAT_14cb99e50,&PTR_LAB_14b52d568);
  }
  return DAT_14cb99e50;
}



// FUNCTION 146591183 FUN_146591183 body=49 status=ok
// SIG undefined FUN_146591183(void)

longlong FUN_146591183(void)

{
  if (DAT_14cb99e60 == 0) {
    FUN_14086a14e(&DAT_14cb99e60,&PTR_FUN_14b52ddd8);
  }
  return DAT_14cb99e60;
}



// FUNCTION 1465911b4 FUN_1465911b4 body=48 status=ok
// SIG undefined FUN_1465911b4(void)

void FUN_1465911b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000003a0;
  *puVar1 = &PTR_FUN_14b5380f0;
  return;
}



// FUNCTION 1465911e4 FUN_1465911e4 body=47 status=ok
// SIG undefined FUN_1465911e4(void)

longlong FUN_1465911e4(void)

{
  if (DAT_14cb99e90 == 0) {
    FUN_14073dd9a(&DAT_14cb99e90,&PTR_LAB_14b52e030);
  }
  return DAT_14cb99e90;
}



// FUNCTION 146591213 FUN_146591213 body=47 status=ok
// SIG undefined FUN_146591213(void)

longlong FUN_146591213(void)

{
  if (DAT_14cb99e80 == 0) {
    FUN_14000fc22(&DAT_14cb99e80,&PTR_FUN_14b52dee0);
  }
  return DAT_14cb99e80;
}



// FUNCTION 146591247 FUN_146591247 body=85 status=ok
// SIG undefined FUN_146591247(void)

void FUN_146591247(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14585e076(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b52e6d0;
  puVar1[5] = &PTR_LAB_14b52eba0;
  puVar1[0x2d] = &PTR_LAB_14b52ebe0;
  puVar1[0x5f] = &PTR_LAB_14b52ec10;
  puVar1[0x65] = 0;
  return;
}



// FUNCTION 14659129c FUN_14659129c body=49 status=ok
// SIG undefined FUN_14659129c(void)

longlong FUN_14659129c(void)

{
  if (DAT_14cb99ea8 == 0) {
    FUN_14073dd9a(&DAT_14cb99ea8,&PTR_LAB_14b52e688);
  }
  return DAT_14cb99ea8;
}



// FUNCTION 1465912cd FUN_1465912cd body=107 status=ok
// SIG undefined FUN_1465912cd(void)

void FUN_1465912cd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14585e076(puVar1,param_1);
  puVar1[0x65] = 0;
  *puVar1 = &PTR_FUN_14b52eec0;
  puVar1[5] = &PTR_LAB_14b52f390;
  puVar1[0x2d] = &PTR_LAB_14b52f3d0;
  puVar1[0x5f] = &PTR_LAB_14b52f400;
  puVar1[0x66] = 0;
  puVar1[0x67] = 0;
  puVar1[0x68] = 0;
  puVar1[0x69] = 0;
  puVar1[0x6a] = 0;
  return;
}



// FUNCTION 146591342 FUN_146591342 body=47 status=ok
// SIG undefined FUN_146591342(void)

longlong FUN_146591342(void)

{
  if (DAT_14cb99ec0 == 0) {
    FUN_14073dd9a(&DAT_14cb99ec0,&PTR_LAB_14b52ee78);
  }
  return DAT_14cb99ec0;
}



// FUNCTION 146591371 FUN_146591371 body=49 status=ok
// SIG undefined FUN_146591371(void)

longlong FUN_146591371(void)

{
  if (DAT_14cb99f08 == 0) {
    FUN_14073dd9a(&DAT_14cb99f08,&PTR_LAB_14b52f8d0);
  }
  return DAT_14cb99f08;
}



// FUNCTION 1465913a2 FUN_1465913a2 body=47 status=ok
// SIG undefined FUN_1465913a2(void)

longlong FUN_1465913a2(void)

{
  if (DAT_14cb99ed0 == 0) {
    FUN_14000fc22(&DAT_14cb99ed0,&PTR_FUN_14b52f450);
  }
  return DAT_14cb99ed0;
}



// FUNCTION 1465913d1 FUN_1465913d1 body=47 status=ok
// SIG undefined FUN_1465913d1(void)

longlong FUN_1465913d1(void)

{
  if (DAT_14cb99ed8 == 0) {
    FUN_14000fc22(&DAT_14cb99ed8,&PTR_FUN_14b52f4f0);
  }
  return DAT_14cb99ed8;
}



// FUNCTION 146591400 FUN_146591400 body=47 status=ok
// SIG undefined FUN_146591400(void)

longlong FUN_146591400(void)

{
  if (DAT_14cb99ee8 == 0) {
    FUN_14000fc22(&DAT_14cb99ee8,&PTR_FUN_14b52f5b8);
  }
  return DAT_14cb99ee8;
}



// FUNCTION 14659142f FUN_14659142f body=47 status=ok
// SIG undefined FUN_14659142f(void)

longlong FUN_14659142f(void)

{
  if (DAT_14cb99ef8 == 0) {
    FUN_14000fc22(&DAT_14cb99ef8,&PTR_FUN_14b52f658);
  }
  return DAT_14cb99ef8;
}



// FUNCTION 14659145e FUN_14659145e body=34 status=ok
// SIG undefined FUN_14659145e(void)

void FUN_14659145e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a871aa();
  FUN_14069c8d6(uVar1,&PTR_s_HandleSliderCaptureEnded_14b52f6a0,2);
  return;
}



// FUNCTION 146591480 FUN_146591480 body=102 status=ok
// SIG undefined FUN_146591480(void)

void FUN_146591480(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14585e076(puVar1,param_1);
  puVar1[0x65] = 0;
  *puVar1 = &PTR_FUN_14b52f910;
  puVar1[5] = &PTR_LAB_14b52fde0;
  puVar1[0x2d] = &PTR_LAB_14b52fe20;
  puVar1[0x5f] = &PTR_LAB_14b52fe50;
  puVar1[0x66] = 0;
  puVar1[0x67] = 0;
  puVar1[0x68] = 0;
  puVar1[0x69] = 0;
  return;
}



// FUNCTION 1465914eb FUN_1465914eb body=47 status=ok
// SIG undefined FUN_1465914eb(void)

longlong FUN_1465914eb(void)

{
  if (DAT_14cb99f30 == 0) {
    FUN_14073dd9a(&DAT_14cb99f30,&PTR_LAB_14b530030);
  }
  return DAT_14cb99f30;
}



// FUNCTION 14659151a FUN_14659151a body=47 status=ok
// SIG undefined FUN_14659151a(void)

longlong FUN_14659151a(void)

{
  if (DAT_14cb99f20 == 0) {
    FUN_14000fc22(&DAT_14cb99f20,&PTR_FUN_14b52fec0);
  }
  return DAT_14cb99f20;
}



// FUNCTION 146591549 FUN_146591549 body=95 status=ok
// SIG undefined FUN_146591549(void)

void FUN_146591549(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14585e076(puVar1,param_1);
  puVar1[0x65] = 0;
  *puVar1 = &PTR_FUN_14b530070;
  puVar1[5] = &PTR_LAB_14b530540;
  puVar1[0x2d] = &PTR_LAB_14b530580;
  puVar1[0x5f] = &PTR_LAB_14b5305b0;
  puVar1[0x66] = 0;
  puVar1[0x67] = 0;
  return;
}



// FUNCTION 1465915a8 FUN_1465915a8 body=47 status=ok
// SIG undefined FUN_1465915a8(void)

longlong FUN_1465915a8(void)

{
  if (DAT_14cb99f58 == 0) {
    FUN_14073dd9a(&DAT_14cb99f58,&PTR_LAB_14b5307a0);
  }
  return DAT_14cb99f58;
}



// FUNCTION 1465915d7 FUN_1465915d7 body=47 status=ok
// SIG undefined FUN_1465915d7(void)

longlong FUN_1465915d7(void)

{
  if (DAT_14cb99f48 == 0) {
    FUN_14000fc22(&DAT_14cb99f48,&PTR_FUN_14b530620);
  }
  return DAT_14cb99f48;
}



// FUNCTION 146591606 FUN_146591606 body=95 status=ok
// SIG undefined FUN_146591606(void)

void FUN_146591606(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14585e076(puVar1,param_1);
  puVar1[0x65] = 0;
  *puVar1 = &PTR_FUN_14b5307e0;
  puVar1[5] = &PTR_LAB_14b530cb0;
  puVar1[0x2d] = &PTR_LAB_14b530cf0;
  puVar1[0x5f] = &PTR_LAB_14b530d20;
  puVar1[0x66] = 0;
  puVar1[0x67] = 0;
  return;
}



// FUNCTION 14659166a FUN_14659166a body=47 status=ok
// SIG undefined FUN_14659166a(void)

longlong FUN_14659166a(void)

{
  if (DAT_14cb99f70 == 0) {
    FUN_14073dd9a(&DAT_14cb99f70,&PTR_LAB_14b530ed8);
  }
  return DAT_14cb99f70;
}



// FUNCTION 146591699 FUN_146591699 body=47 status=ok
// SIG undefined FUN_146591699(void)

longlong FUN_146591699(void)

{
  if (DAT_14cb99f90 == 0) {
    FUN_14073dd9a(&DAT_14cb99f90,&PTR_LAB_14b531870);
  }
  return DAT_14cb99f90;
}



// FUNCTION 1465916c8 FUN_1465916c8 body=47 status=ok
// SIG undefined FUN_1465916c8(void)

longlong FUN_1465916c8(void)

{
  if (DAT_14cb99f80 == 0) {
    FUN_14000fc22(&DAT_14cb99f80,&PTR_FUN_14b531470);
  }
  return DAT_14cb99f80;
}



// FUNCTION 1465916fd FUN_1465916fd body=47 status=ok
// SIG undefined FUN_1465916fd(void)

longlong FUN_1465916fd(void)

{
  if (DAT_14cb99fa8 == 0) {
    FUN_14073dd9a(&DAT_14cb99fa8,&PTR_LAB_14b531e38);
  }
  return DAT_14cb99fa8;
}



// FUNCTION 146591739 FUN_146591739 body=47 status=ok
// SIG undefined FUN_146591739(void)

longlong FUN_146591739(void)

{
  if (DAT_14cb99fc0 == 0) {
    FUN_14073dd9a(&DAT_14cb99fc0,&PTR_LAB_14b5325d8);
  }
  return DAT_14cb99fc0;
}



// FUNCTION 146591768 FUN_146591768 body=47 status=ok
// SIG undefined FUN_146591768(void)

longlong FUN_146591768(void)

{
  if (DAT_14cb99fe8 == 0) {
    FUN_14073dd9a(&DAT_14cb99fe8,&PTR_LAB_14b532a50);
  }
  return DAT_14cb99fe8;
}



// FUNCTION 146591797 FUN_146591797 body=47 status=ok
// SIG undefined FUN_146591797(void)

longlong FUN_146591797(void)

{
  if (DAT_14cb99fd8 == 0) {
    FUN_14000fc22(&DAT_14cb99fd8,&PTR_FUN_14b5329b8);
  }
  return DAT_14cb99fd8;
}



// FUNCTION 1465917c6 FUN_1465917c6 body=49 status=ok
// SIG undefined FUN_1465917c6(void)

longlong FUN_1465917c6(void)

{
  if (DAT_14cb9a060 == 0) {
    FUN_14073dd9a(&DAT_14cb9a060,&PTR_LAB_14b5338a0);
  }
  return DAT_14cb9a060;
}



// FUNCTION 1465917f7 FUN_1465917f7 body=47 status=ok
// SIG undefined FUN_1465917f7(void)

longlong FUN_1465917f7(void)

{
  if (DAT_14cb9a010 == 0) {
    FUN_14000fc22(&DAT_14cb9a010,&PTR_FUN_14b533118);
  }
  return DAT_14cb9a010;
}



// FUNCTION 146591826 FUN_146591826 body=47 status=ok
// SIG undefined FUN_146591826(void)

longlong FUN_146591826(void)

{
  if (DAT_14cb9a018 == 0) {
    FUN_14000fc22(&DAT_14cb9a018,&PTR_FUN_14b5331b8);
  }
  return DAT_14cb9a018;
}



// FUNCTION 146591855 FUN_146591855 body=47 status=ok
// SIG undefined FUN_146591855(void)

longlong FUN_146591855(void)

{
  if (DAT_14cb9a020 == 0) {
    FUN_14000fc22(&DAT_14cb9a020,&PTR_FUN_14b533208);
  }
  return DAT_14cb9a020;
}



// FUNCTION 146591884 FUN_146591884 body=47 status=ok
// SIG undefined FUN_146591884(void)

longlong FUN_146591884(void)

{
  if (DAT_14cb9a028 == 0) {
    FUN_14000fc22(&DAT_14cb9a028,&PTR_FUN_14b533350);
  }
  return DAT_14cb9a028;
}



// FUNCTION 1465918b3 FUN_1465918b3 body=47 status=ok
// SIG undefined FUN_1465918b3(void)

longlong FUN_1465918b3(void)

{
  if (DAT_14cb9a030 == 0) {
    FUN_14000fc22(&DAT_14cb9a030,&PTR_FUN_14b5333f0);
  }
  return DAT_14cb9a030;
}



// FUNCTION 1465918e2 FUN_1465918e2 body=47 status=ok
// SIG undefined FUN_1465918e2(void)

longlong FUN_1465918e2(void)

{
  if (DAT_14cb9a038 == 0) {
    FUN_14000fc22(&DAT_14cb9a038,&PTR_FUN_14b533488);
  }
  return DAT_14cb9a038;
}



// FUNCTION 146591911 FUN_146591911 body=47 status=ok
// SIG undefined FUN_146591911(void)

longlong FUN_146591911(void)

{
  if (DAT_14cb9a040 == 0) {
    FUN_14000fc22(&DAT_14cb9a040,&PTR_FUN_14b533578);
  }
  return DAT_14cb9a040;
}



// FUNCTION 146591940 FUN_146591940 body=47 status=ok
// SIG undefined FUN_146591940(void)

longlong FUN_146591940(void)

{
  if (DAT_14cb9a050 == 0) {
    FUN_14000fc22(&DAT_14cb9a050,&PTR_FUN_14b533668);
  }
  return DAT_14cb9a050;
}



// FUNCTION 146591970 FUN_146591970 body=34 status=ok
// SIG undefined FUN_146591970(void)

void FUN_146591970(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a87382();
  FUN_14069c8d6(uVar1,&PTR_s_ApplyChanges_14b5336b0,8);
  return;
}



// FUNCTION 146591992 FUN_146591992 body=82 status=ok
// SIG undefined FUN_146591992(void)

void FUN_146591992(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a2d40e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5338e0;
  puVar1[5] = &PTR_LAB_14b533df0;
  puVar1[0x2d] = &PTR_LAB_14b533e30;
  FUN_145a35a2a(puVar1 + 0x86);
  puVar1[0x92] = 0;
  puVar1[0x93] = 0;
  return;
}



// FUNCTION 1465919e4 FUN_1465919e4 body=39 status=ok
// SIG undefined FUN_1465919e4(void)

void FUN_1465919e4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fbcba4(puVar1);
  *puVar1 = &PTR_FUN_14b533f10;
  *(undefined1 *)(puVar1 + 0x21) = 1;
  return;
}



// FUNCTION 146591a15 FUN_146591a15 body=49 status=ok
// SIG undefined FUN_146591a15(void)

longlong FUN_146591a15(void)

{
  if (DAT_14cb9a078 == 0) {
    FUN_14073dd9a(&DAT_14cb9a078,&PTR_LAB_14b533ec8);
  }
  return DAT_14cb9a078;
}



// FUNCTION 146591a46 FUN_146591a46 body=49 status=ok
// SIG undefined FUN_146591a46(void)

longlong FUN_146591a46(void)

{
  if (DAT_14cb9a0a8 == 0) {
    FUN_14073dd9a(&DAT_14cb9a0a8,&PTR_LAB_14b534530);
  }
  return DAT_14cb9a0a8;
}



// FUNCTION 146591a77 FUN_146591a77 body=47 status=ok
// SIG undefined FUN_146591a77(void)

longlong FUN_146591a77(void)

{
  if (DAT_14cb9a088 == 0) {
    FUN_14000fc22(&DAT_14cb9a088,&PTR_FUN_14b5342b8);
  }
  return DAT_14cb9a088;
}



// FUNCTION 146591aa6 FUN_146591aa6 body=47 status=ok
// SIG undefined FUN_146591aa6(void)

longlong FUN_146591aa6(void)

{
  if (DAT_14cb9a090 == 0) {
    FUN_14000fc22(&DAT_14cb9a090,&PTR_FUN_14b534350);
  }
  return DAT_14cb9a090;
}



// FUNCTION 146591ad5 FUN_146591ad5 body=47 status=ok
// SIG undefined FUN_146591ad5(void)

longlong FUN_146591ad5(void)

{
  if (DAT_14cb9a098 == 0) {
    FUN_14000fc22(&DAT_14cb9a098,&PTR_FUN_14b534428);
  }
  return DAT_14cb9a098;
}



// FUNCTION 146591b04 FUN_146591b04 body=34 status=ok
// SIG undefined FUN_146591b04(void)

void FUN_146591b04(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1410e4a74();
  FUN_14069c8d6(uVar1,&PTR_s_GetDiscreteOptionDefaultIndex_14b534470,3);
  return;
}



// FUNCTION 146591b2b FUN_146591b2b body=39 status=ok
// SIG undefined FUN_146591b2b(void)

void FUN_146591b2b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fbcba4(puVar1);
  *(undefined1 *)(puVar1 + 0x21) = 1;
  *puVar1 = &PTR_FUN_14b534570;
  return;
}



// FUNCTION 146591b52 FUN_146591b52 body=94 status=ok
// SIG undefined FUN_146591b52(void)

void FUN_146591b52(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fbcba4(puVar1);
  *(undefined1 *)(puVar1 + 0x21) = 1;
  *puVar1 = &PTR_FUN_14b534980;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x154) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x15c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x164) = 0xffffffff;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  return;
}



// FUNCTION 146591bb5 FUN_146591bb5 body=49 status=ok
// SIG undefined FUN_146591bb5(void)

longlong FUN_146591bb5(void)

{
  if (DAT_14cb9a0c0 == 0) {
    FUN_14073dd9a(&DAT_14cb9a0c0,&PTR_LAB_14b534938);
  }
  return DAT_14cb9a0c0;
}



// FUNCTION 146591beb FUN_146591beb body=49 status=ok
// SIG undefined FUN_146591beb(void)

longlong FUN_146591beb(void)

{
  if (DAT_14cb9a0d8 == 0) {
    FUN_14073dd9a(&DAT_14cb9a0d8,&PTR_LAB_14b534d28);
  }
  return DAT_14cb9a0d8;
}



// FUNCTION 146591c1c FUN_146591c1c body=94 status=ok
// SIG undefined FUN_146591c1c(void)

void FUN_146591c1c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fbcba4(puVar1);
  *(undefined1 *)(puVar1 + 0x21) = 1;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x154) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x15c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x164) = 0xffffffff;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  *puVar1 = &PTR_FUN_14b535160;
  return;
}



// FUNCTION 146591c7f FUN_146591c7f body=47 status=ok
// SIG undefined FUN_146591c7f(void)

longlong FUN_146591c7f(void)

{
  if (DAT_14cb9a0f0 == 0) {
    FUN_14073dd9a(&DAT_14cb9a0f0,&PTR_LAB_14b535118);
  }
  return DAT_14cb9a0f0;
}



// FUNCTION 146591cae FUN_146591cae body=94 status=ok
// SIG undefined FUN_146591cae(void)

void FUN_146591cae(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fbcba4(puVar1);
  *(undefined1 *)(puVar1 + 0x21) = 1;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x154) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x15c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x164) = 0xffffffff;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  *puVar1 = &PTR_FUN_14b535550;
  return;
}



// FUNCTION 146591d11 FUN_146591d11 body=47 status=ok
// SIG undefined FUN_146591d11(void)

longlong FUN_146591d11(void)

{
  if (DAT_14cb9a108 == 0) {
    FUN_14073dd9a(&DAT_14cb9a108,&PTR_LAB_14b535508);
  }
  return DAT_14cb9a108;
}



// FUNCTION 146591d40 FUN_146591d40 body=94 status=ok
// SIG undefined FUN_146591d40(void)

void FUN_146591d40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fbcba4(puVar1);
  *(undefined1 *)(puVar1 + 0x21) = 1;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x154) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x15c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x164) = 0xffffffff;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  *puVar1 = &PTR_FUN_14b535940;
  return;
}



// FUNCTION 146591da3 FUN_146591da3 body=47 status=ok
// SIG undefined FUN_146591da3(void)

longlong FUN_146591da3(void)

{
  if (DAT_14cb9a120 == 0) {
    FUN_14073dd9a(&DAT_14cb9a120,&PTR_LAB_14b5358f8);
  }
  return DAT_14cb9a120;
}



// FUNCTION 146591dd2 FUN_146591dd2 body=94 status=ok
// SIG undefined FUN_146591dd2(void)

void FUN_146591dd2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fbcba4(puVar1);
  *(undefined1 *)(puVar1 + 0x21) = 1;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x154) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x15c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x164) = 0xffffffff;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  *puVar1 = &PTR_FUN_14b535d30;
  return;
}



// FUNCTION 146591e30 FUN_146591e30 body=47 status=ok
// SIG undefined FUN_146591e30(void)

longlong FUN_146591e30(void)

{
  if (DAT_14cb9a138 == 0) {
    FUN_14073dd9a(&DAT_14cb9a138,&PTR_LAB_14b535ce8);
  }
  return DAT_14cb9a138;
}



// FUNCTION 146591e5f FUN_146591e5f body=39 status=ok
// SIG undefined FUN_146591e5f(void)

void FUN_146591e5f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fbcba4(puVar1);
  *(undefined1 *)(puVar1 + 0x21) = 1;
  *puVar1 = &PTR_FUN_14b5361f0;
  return;
}



// FUNCTION 146591e86 FUN_146591e86 body=47 status=ok
// SIG undefined FUN_146591e86(void)

longlong FUN_146591e86(void)

{
  if (DAT_14cb9a150 == 0) {
    FUN_14073dd9a(&DAT_14cb9a150,&PTR_LAB_14b5361a8);
  }
  return DAT_14cb9a150;
}



// FUNCTION 146591ebb FUN_146591ebb body=47 status=ok
// SIG undefined FUN_146591ebb(void)

longlong FUN_146591ebb(void)

{
  if (DAT_14cb9a168 == 0) {
    FUN_14073dd9a(&DAT_14cb9a168,&PTR_LAB_14b5365c8);
  }
  return DAT_14cb9a168;
}



// FUNCTION 146591eea FUN_146591eea body=55 status=ok
// SIG undefined FUN_146591eea(void)

void FUN_146591eea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a180 == 0) {
    uVar1 = FUN_1413f8744();
    DAT_14cb9a180 = FUN_140002ddd(FUN_146591f21,uVar1,L"GameSettingClassExtensions");
  }
  return;
}



// FUNCTION 146591f21 FUN_146591f21 body=47 status=ok
// SIG undefined FUN_146591f21(void)

longlong FUN_146591f21(void)

{
  if (DAT_14cb9a178 == 0) {
    FUN_14086a14e(&DAT_14cb9a178,&PTR_FUN_14b536a70);
  }
  return DAT_14cb9a178;
}



// FUNCTION 146591f50 FUN_146591f50 body=48 status=ok
// SIG undefined FUN_146591f50(void)

void FUN_146591f50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b538250;
  return;
}



// FUNCTION 146591f80 FUN_146591f80 body=55 status=ok
// SIG undefined FUN_146591f80(void)

void FUN_146591f80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a198 == 0) {
    uVar1 = FUN_1413f8744();
    DAT_14cb9a198 = FUN_140002ddd(FUN_146591fb7,uVar1,L"GameSettingNameExtensions");
  }
  return;
}



// FUNCTION 146591fb7 FUN_146591fb7 body=47 status=ok
// SIG undefined FUN_146591fb7(void)

longlong FUN_146591fb7(void)

{
  if (DAT_14cb9a190 == 0) {
    FUN_14086a14e(&DAT_14cb9a190,&PTR_FUN_14b536bf8);
  }
  return DAT_14cb9a190;
}



// FUNCTION 146591fe6 FUN_146591fe6 body=48 status=ok
// SIG undefined FUN_146591fe6(void)

void FUN_146591fe6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b5383b0;
  return;
}



// FUNCTION 14659201b FUN_14659201b body=47 status=ok
// SIG undefined FUN_14659201b(void)

longlong FUN_14659201b(void)

{
  if (DAT_14cb9a1b0 == 0) {
    FUN_14073dd9a(&DAT_14cb9a1b0,&PTR_LAB_14b537098);
  }
  return DAT_14cb9a1b0;
}



// FUNCTION 14659204a FUN_14659204a body=47 status=ok
// SIG undefined FUN_14659204a(void)

longlong FUN_14659204a(void)

{
  if (DAT_14cb9a1d8 == 0) {
    FUN_14073dd9a(&DAT_14cb9a1d8,&PTR_LAB_14b5375f0);
  }
  return DAT_14cb9a1d8;
}



// FUNCTION 146592079 FUN_146592079 body=47 status=ok
// SIG undefined FUN_146592079(void)

longlong FUN_146592079(void)

{
  if (DAT_14cb9a1c8 == 0) {
    FUN_14000fc22(&DAT_14cb9a1c8,&PTR_FUN_14b537530);
  }
  return DAT_14cb9a1c8;
}



// FUNCTION 1465920a8 FUN_1465920a8 body=34 status=ok
// SIG undefined FUN_1465920a8(void)

void FUN_1465920a8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459f1ea0();
  FUN_14069c8d6(uVar1,&PTR_s_ExecuteActionForSetting_14b537570,1);
  return;
}



// FUNCTION 1465920cf FUN_1465920cf body=70 status=ok
// SIG undefined FUN_1465920cf(void)

void FUN_1465920cf(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145acf434(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b537a40;
  puVar1[5] = &PTR_FUN_14b537f30;
  puVar1[0x2d] = &PTR_FUN_14b537f70;
  puVar1[0x8f] = 0;
  puVar1[0x90] = 0;
  return;
}



// FUNCTION 146592115 FUN_146592115 body=47 status=ok
// SIG undefined FUN_146592115(void)

longlong FUN_146592115(void)

{
  if (DAT_14cb9a1f0 == 0) {
    FUN_14073dd9a(&DAT_14cb9a1f0,&PTR_LAB_14b5379f8);
  }
  return DAT_14cb9a1f0;
}



// FUNCTION 146592144 FUN_146592144 body=231 status=ok
// SIG undefined FUN_146592144(void)

void FUN_146592144(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
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
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14b538690;
  local_28[3] = &DAT_14cb9a200;
  local_28[4] = FUN_1459d023e;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14659222c FUN_14659222c body=244 status=ok
// SIG undefined FUN_14659222c(void)

ulonglong FUN_14659222c(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(int *)(param_1 + 0x164) == -1) {
    uVar5 = CONCAT71(uVar6,1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))
              (*(longlong **)(param_1 + 0x138),&local_30);
    iVar4 = *(int *)(param_1 + 0x160);
    if (iVar4 == local_28) {
      if (iVar4 < 2) {
        uVar5 = CONCAT71(uVar6,1);
      }
      else {
        lVar7 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x158) + lVar7);
          uVar3 = (uint)uVar1;
          uVar2 = *(ushort *)(local_30 + lVar7);
          uVar8 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1465922af;
            }
            iVar4 = uVar3 - uVar8;
            goto LAB_1465922da;
          }
          if (uVar1 == 0) break;
LAB_1465922af:
          lVar7 = lVar7 + 2;
        }
        iVar4 = 0;
LAB_1465922da:
        uVar5 = CONCAT71(uVar6,iVar4 == 0);
      }
    }
    else {
      uVar5 = CONCAT71(uVar6,local_28 + iVar4 == 1);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146592322 FUN_146592322 body=220 status=ok
// SIG undefined FUN_146592322(void)

ulonglong FUN_146592322(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))(*(longlong **)(param_1 + 0x138),&local_30);
  iVar4 = *(int *)(param_1 + 0x170);
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (iVar4 == local_28) {
    uVar5 = CONCAT71(uVar6,1);
    if (1 < iVar4) {
      lVar7 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x168) + lVar7);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)(local_30 + lVar7);
        uVar8 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1465923ca;
          }
          iVar4 = uVar3 - uVar8;
          goto LAB_1465923f5;
        }
        if (uVar1 == 0) break;
LAB_1465923ca:
        lVar7 = lVar7 + 2;
      }
      iVar4 = 0;
LAB_1465923f5:
      uVar5 = CONCAT71(uVar6,iVar4 == 0);
    }
  }
  else {
    uVar5 = CONCAT71(uVar6,local_28 + iVar4 == 1);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146592400 FUN_146592400 body=389 status=ok
// SIG undefined FUN_146592400(void)

ulonglong FUN_146592400(longlong *param_1)

{
  longlong *plVar1;
  void *_Src;
  uint uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  longlong *local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)param_1[0x27] + 0x18))((longlong *)param_1[0x27],&local_48,param_1[0xb])
  ;
  _Src = local_48;
  local_58 = (void *)0x0;
  local_50 = local_40;
  local_60 = param_1;
  if ((longlong)local_40 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_40,0);
    memcpy(local_58,_Src,(longlong)local_40 * 2);
  }
  uVar6 = 0xffffffff;
  if ((longlong)(int)param_1[0x30] == 0) {
LAB_14659250e:
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((int)uVar6 == -1) {
      uVar2 = (**(code **)(*param_1 + 0x328))(param_1);
      uVar6 = (ulonglong)uVar2;
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar6;
  }
  plVar1 = (longlong *)param_1[0x2f];
  plVar7 = plVar1;
LAB_1465924ad:
  if (local_50 != (int)plVar7[1]) {
    if ((int)plVar7[1] + local_50 == 1) goto LAB_146592504;
    goto LAB_146592558;
  }
  if (1 < local_50) {
    lVar8 = 0;
    do {
      uVar3 = *(ushort *)((longlong)local_58 + lVar8);
      uVar4 = (ulonglong)uVar3;
      uVar5 = *(ushort *)(*plVar7 + lVar8);
      if (uVar3 == uVar5) {
        if (uVar3 == 0) break;
      }
      else {
        if (0x7f < (uVar5 | uVar3)) goto LAB_146592552;
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar9 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar9]) goto LAB_146592552;
      }
      lVar8 = lVar8 + 2;
    } while( true );
  }
  goto LAB_146592504;
LAB_146592552:
  if (uVar3 == uVar5) {
LAB_146592504:
    uVar6 = (ulonglong)((longlong)plVar7 - (longlong)plVar1) >> 4 & 0xffffffff;
    goto LAB_14659250e;
  }
LAB_146592558:
  plVar7 = plVar7 + 2;
  if (plVar7 == plVar1 + (longlong)(int)param_1[0x30] * 2) goto LAB_14659250e;
  goto LAB_1465924ad;
}



// FUNCTION 146592586 FUN_146592586 body=268 status=ok
// SIG undefined FUN_146592586(void)

longlong * FUN_146592586(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x120) < 1) {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 400);
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1406fd828(param_2,iVar1,0);
      FUN_1406fd7df(*param_2,uVar2,iVar1);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    if (0 < *(int *)(param_1 + 0x180)) {
      lVar8 = 0;
      lVar7 = 0;
      do {
        cVar6 = FUN_144a23846(param_1 + 0x118,*(longlong *)(param_1 + 0x178) + lVar8);
        if (cVar6 == '\0') {
          lVar3 = *(longlong *)(param_1 + 0x188);
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_14001d63e(param_2,iVar1);
          }
          lVar4 = *param_2;
          plVar5 = *(longlong **)(lVar3 + lVar8);
          *(longlong **)(lVar4 + (longlong)iVar1 * 0x10) = plVar5;
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 8))();
          }
          *(undefined4 *)(lVar4 + (longlong)iVar1 * 0x10 + 8) = *(undefined4 *)(lVar3 + 8 + lVar8);
        }
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while (lVar7 < *(int *)(param_1 + 0x180));
    }
  }
  return param_2;
}



// FUNCTION 146592692 FUN_146592692 body=63 status=ok
// SIG undefined FUN_146592692(void)

byte FUN_146592692(longlong *param_1)

{
  double dVar1;
  byte bVar2;
  double dVar3;
  
  if ((char)param_1[0x2c] == '\x01') {
    dVar1 = (double)param_1[0x2b];
    dVar3 = (double)(**(code **)(*param_1 + 0x328))();
    bVar2 = -(dVar3 == dVar1) & 1;
  }
  else {
    bVar2 = 1;
  }
  return bVar2;
}



// FUNCTION 1465926d2 FUN_1465926d2 body=58 status=ok
// SIG undefined FUN_1465926d2(void)

bool FUN_1465926d2(longlong *param_1)

{
  double extraout_XMM0_Qa;
  
  (**(code **)(*param_1 + 0x328))();
  return ABS((double)param_1[0x2d] - extraout_XMM0_Qa) <= 1e-08;
}



// FUNCTION 14659270c FUN_14659270c body=40 status=ok
// SIG undefined FUN_14659270c(void)

undefined8 FUN_14659270c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592734 FUN_146592734 body=40 status=ok
// SIG undefined FUN_146592734(void)

undefined8 FUN_146592734(undefined8 param_1,int param_2)

{
  FUN_140ee3dc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659275c FUN_14659275c body=40 status=ok
// SIG undefined FUN_14659275c(void)

undefined8 FUN_14659275c(undefined8 param_1,int param_2)

{
  FUN_140cdcea6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592784 FUN_146592784 body=110 status=ok
// SIG undefined FUN_146592784(void)

undefined8 * FUN_146592784(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b52e070;
  param_1[5] = &PTR_LAB_14b52e540;
  param_1[0x2d] = &PTR_LAB_14b52e580;
  param_1[0x5f] = &PTR_LAB_14b52e5b0;
  if ((longlong *)param_1[0x62] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x62] + 0x10))();
  }
  FUN_14117c118(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465927f2 FUN_1465927f2 body=110 status=ok
// SIG undefined FUN_1465927f2(void)

undefined8 * FUN_1465927f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b52e070;
  param_1[5] = &PTR_LAB_14b52e540;
  param_1[0x2d] = &PTR_LAB_14b52e580;
  param_1[0x5f] = &PTR_LAB_14b52e5b0;
  if ((longlong *)param_1[0x62] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x62] + 0x10))();
  }
  FUN_14117c118(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592860 FUN_146592860 body=110 status=ok
// SIG undefined FUN_146592860(void)

undefined8 * FUN_146592860(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b52e070;
  param_1[5] = &PTR_LAB_14b52e540;
  param_1[0x2d] = &PTR_LAB_14b52e580;
  param_1[0x5f] = &PTR_LAB_14b52e5b0;
  if ((longlong *)param_1[0x62] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x62] + 0x10))();
  }
  FUN_14117c118(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465928ce FUN_1465928ce body=110 status=ok
// SIG undefined FUN_1465928ce(void)

undefined8 * FUN_1465928ce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b52e070;
  param_1[5] = &PTR_LAB_14b52e540;
  param_1[0x2d] = &PTR_LAB_14b52e580;
  param_1[0x5f] = &PTR_LAB_14b52e5b0;
  if ((longlong *)param_1[0x62] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x62] + 0x10))();
  }
  FUN_14117c118(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659293c FUN_14659293c body=110 status=ok
// SIG undefined FUN_14659293c(void)

undefined8 * FUN_14659293c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b52e070;
  param_1[5] = &PTR_LAB_14b52e540;
  param_1[0x2d] = &PTR_LAB_14b52e580;
  param_1[0x5f] = &PTR_LAB_14b52e5b0;
  if ((longlong *)param_1[0x62] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x62] + 0x10))();
  }
  FUN_14117c118(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465929aa FUN_1465929aa body=110 status=ok
// SIG undefined FUN_1465929aa(void)

undefined8 * FUN_1465929aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b52e070;
  param_1[5] = &PTR_LAB_14b52e540;
  param_1[0x2d] = &PTR_LAB_14b52e580;
  param_1[0x5f] = &PTR_LAB_14b52e5b0;
  if ((longlong *)param_1[0x62] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x62] + 0x10))();
  }
  FUN_14117c118(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592a18 FUN_146592a18 body=40 status=ok
// SIG undefined FUN_146592a18(void)

undefined8 FUN_146592a18(undefined8 param_1,int param_2)

{
  FUN_14597cd82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592a40 FUN_146592a40 body=40 status=ok
// SIG undefined FUN_146592a40(void)

undefined8 FUN_146592a40(undefined8 param_1,int param_2)

{
  FUN_145b21608();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592a68 FUN_146592a68 body=90 status=ok
// SIG undefined FUN_146592a68(void)

undefined8 * FUN_146592a68(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5338e0;
  param_1[5] = &PTR_LAB_14b533df0;
  param_1[0x2d] = &PTR_LAB_14b533e30;
  FUN_14597cbde(param_1 + 0x86);
  FUN_1414dee26(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592ac2 FUN_146592ac2 body=40 status=ok
// SIG undefined FUN_146592ac2(void)

undefined8 FUN_146592ac2(undefined8 param_1,int param_2)

{
  FUN_140ee3dc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592aea FUN_146592aea body=40 status=ok
// SIG undefined FUN_146592aea(void)

undefined8 FUN_146592aea(undefined8 param_1,int param_2)

{
  FUN_140ee3dc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592b12 FUN_146592b12 body=40 status=ok
// SIG undefined FUN_146592b12(void)

undefined8 FUN_146592b12(undefined8 param_1,int param_2)

{
  FUN_1410bf6a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592b3a FUN_146592b3a body=40 status=ok
// SIG undefined FUN_146592b3a(void)

undefined8 FUN_146592b3a(undefined8 param_1,int param_2)

{
  FUN_1410bf6a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592b62 FUN_146592b62 body=40 status=ok
// SIG undefined FUN_146592b62(void)

undefined8 FUN_146592b62(undefined8 param_1,int param_2)

{
  FUN_1410bf6a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592b8a FUN_146592b8a body=40 status=ok
// SIG undefined FUN_146592b8a(void)

undefined8 FUN_146592b8a(undefined8 param_1,int param_2)

{
  FUN_1410bf6a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592bb2 FUN_146592bb2 body=40 status=ok
// SIG undefined FUN_146592bb2(void)

undefined8 FUN_146592bb2(undefined8 param_1,int param_2)

{
  FUN_1410bf6a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592bda FUN_146592bda body=40 status=ok
// SIG undefined FUN_146592bda(void)

undefined8 FUN_146592bda(undefined8 param_1,int param_2)

{
  FUN_140ee3dc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592c02 FUN_146592c02 body=40 status=ok
// SIG undefined FUN_146592c02(void)

undefined8 FUN_146592c02(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592c2a FUN_146592c2a body=40 status=ok
// SIG undefined FUN_146592c2a(void)

undefined8 FUN_146592c2a(undefined8 param_1,int param_2)

{
  FUN_145bfd4ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146592c52 FUN_146592c52 body=34 status=ok
// SIG undefined FUN_146592c52(void)

undefined8 FUN_146592c52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146592c74 FUN_146592c74 body=34 status=ok
// SIG undefined FUN_146592c74(void)

undefined8 FUN_146592c74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146592c96 FUN_146592c96 body=34 status=ok
// SIG undefined FUN_146592c96(void)

undefined8 FUN_146592c96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146592cb8 FUN_146592cb8 body=34 status=ok
// SIG undefined FUN_146592cb8(void)

undefined8 FUN_146592cb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146592cda FUN_146592cda body=29 status=ok
// SIG undefined FUN_146592cda(void)

bool FUN_146592cda(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146592cf8 FUN_146592cf8 body=26 status=ok
// SIG undefined FUN_146592cf8(void)

bool FUN_146592cf8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146592d12 FUN_146592d12 body=29 status=ok
// SIG undefined FUN_146592d12(void)

bool FUN_146592d12(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146592d30 FUN_146592d30 body=26 status=ok
// SIG undefined FUN_146592d30(void)

bool FUN_146592d30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146592d4a FUN_146592d4a body=93 status=ok
// SIG undefined FUN_146592d4a(void)

void FUN_146592d4a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b538690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146592da8 FUN_146592da8 body=51 status=ok
// SIG undefined FUN_146592da8(void)

void FUN_146592da8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 4);
  if (lVar1 != 0) {
    FUN_140457ffc(lVar1 + 0x28,param_1);
    *(undefined8 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 146592ddc FUN_146592ddc body=58 status=ok
// SIG undefined FUN_146592ddc(void)

void FUN_146592ddc(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(longlong *)(param_1 + 0x268) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x268) + 0x30), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x2a0))();
  }
  FUN_14594f400(param_1 + 0x2d8);
  return;
}



// FUNCTION 146592e16 FUN_146592e16 body=91 status=ok
// SIG undefined FUN_146592e16(void)

void FUN_146592e16(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140f14cc6();
  *(undefined8 *)(param_1 + 0x188) = 0;
  plVar3 = *(longlong **)(param_1 + 400);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 400) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000146592e6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146592e72 FUN_146592e72 body=27 status=ok
// SIG undefined FUN_146592e72(void)

void FUN_146592e72(longlong param_1)

{
  FUN_140bc9634();
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 146592e8e FUN_146592e8e body=55 status=ok
// SIG undefined FUN_146592e8e(void)

void FUN_146592e8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a4c0 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a4c0 = FUN_140002ddd(FUN_146592ec5,uVar1,L"GbxGameSettingData_Action");
  }
  return;
}



// FUNCTION 146592ec5 FUN_146592ec5 body=47 status=ok
// SIG undefined FUN_146592ec5(void)

longlong FUN_146592ec5(void)

{
  if (DAT_14cb9a4b8 == 0) {
    FUN_14086a14e(&DAT_14cb9a4b8,&PTR_FUN_14b539ba0);
  }
  return DAT_14cb9a4b8;
}



// FUNCTION 146592ef4 FUN_146592ef4 body=49 status=ok
// SIG undefined FUN_146592ef4(void)

longlong FUN_146592ef4(void)

{
  if (DAT_14cb9a530 == 0) {
    FUN_14086a14e(&DAT_14cb9a530,&PTR_FUN_14b53a6d0);
  }
  return DAT_14cb9a530;
}



// FUNCTION 146592f26 FUN_146592f26 body=48 status=ok
// SIG undefined FUN_146592f26(void)

void FUN_146592f26(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14b53db90;
  return;
}



// FUNCTION 146592f56 FUN_146592f56 body=55 status=ok
// SIG undefined FUN_146592f56(void)

void FUN_146592f56(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a4d8 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a4d8 = FUN_140002ddd(FUN_146592f8d,uVar1,L"GbxGameSettingData_Collection");
  }
  return;
}



// FUNCTION 146592f8d FUN_146592f8d body=47 status=ok
// SIG undefined FUN_146592f8d(void)

longlong FUN_146592f8d(void)

{
  if (DAT_14cb9a4d0 == 0) {
    FUN_14086a14e(&DAT_14cb9a4d0,&PTR_FUN_14b539d98);
  }
  return DAT_14cb9a4d0;
}



// FUNCTION 146592fbc FUN_146592fbc body=48 status=ok
// SIG undefined FUN_146592fbc(void)

void FUN_146592fbc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14b53dd20;
  return;
}



// FUNCTION 146592fec FUN_146592fec body=46 status=ok
// SIG undefined FUN_146592fec(void)

void FUN_146592fec(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b539ed0;
  FUN_140febbd8(puVar1 + 6);
  return;
}



// FUNCTION 146593025 FUN_146593025 body=47 status=ok
// SIG undefined FUN_146593025(void)

longlong FUN_146593025(void)

{
  if (DAT_14cb9a4f0 == 0) {
    FUN_14073dd9a(&DAT_14cb9a4f0,&PTR_LAB_14b539e88);
  }
  return DAT_14cb9a4f0;
}



// FUNCTION 146593054 FUN_146593054 body=55 status=ok
// SIG undefined FUN_146593054(void)

void FUN_146593054(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a508 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a508 = FUN_140002ddd(FUN_14659308b,uVar1,L"GbxGameSettingEditConditionData");
  }
  return;
}



// FUNCTION 14659308b FUN_14659308b body=47 status=ok
// SIG undefined FUN_14659308b(void)

longlong FUN_14659308b(void)

{
  if (DAT_14cb9a500 == 0) {
    FUN_14086a14e(&DAT_14cb9a500,&PTR_FUN_14b53a2c0);
  }
  return DAT_14cb9a500;
}



// FUNCTION 1465930ba FUN_1465930ba body=49 status=ok
// SIG undefined FUN_1465930ba(void)

longlong FUN_1465930ba(void)

{
  if (DAT_14cb9a560 == 0) {
    FUN_14086a14e(&DAT_14cb9a560,&PTR_FUN_14b53a868);
  }
  return DAT_14cb9a560;
}



// FUNCTION 1465930eb FUN_1465930eb body=49 status=ok
// SIG undefined FUN_1465930eb(void)

longlong FUN_1465930eb(void)

{
  if (DAT_14cb9a5f0 == 0) {
    FUN_14086a14e(&DAT_14cb9a5f0,&PTR_FUN_14b53b058);
  }
  return DAT_14cb9a5f0;
}



// FUNCTION 14659311c FUN_14659311c body=48 status=ok
// SIG undefined FUN_14659311c(void)

void FUN_14659311c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b53de80;
  return;
}



// FUNCTION 14659314c FUN_14659314c body=55 status=ok
// SIG undefined FUN_14659314c(void)

void FUN_14659314c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a520 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a520 = FUN_140002ddd(FUN_146593183,uVar1,L"GbxGameSettingEditDependencyData");
  }
  return;
}



// FUNCTION 146593183 FUN_146593183 body=47 status=ok
// SIG undefined FUN_146593183(void)

longlong FUN_146593183(void)

{
  if (DAT_14cb9a518 == 0) {
    FUN_14086a14e(&DAT_14cb9a518,&PTR_FUN_14b53a3b8);
  }
  return DAT_14cb9a518;
}



// FUNCTION 1465931b2 FUN_1465931b2 body=48 status=ok
// SIG undefined FUN_1465931b2(void)

void FUN_1465931b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14b53dfe0;
  return;
}



// FUNCTION 1465931e2 FUN_1465931e2 body=55 status=ok
// SIG undefined FUN_1465931e2(void)

void FUN_1465931e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a538 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a538 = FUN_140002ddd(FUN_146592ef4,uVar1,L"GbxGameSettingData");
  }
  return;
}



// FUNCTION 14659321a FUN_14659321a body=48 status=ok
// SIG undefined FUN_14659321a(void)

void FUN_14659321a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b53e140;
  return;
}



// FUNCTION 14659324a FUN_14659324a body=47 status=ok
// SIG undefined FUN_14659324a(void)

longlong FUN_14659324a(void)

{
  if (DAT_14cb9a548 == 0) {
    FUN_1409ce572(&DAT_14cb9a548,&PTR_FUN_14b53a7e0);
  }
  return DAT_14cb9a548;
}



// FUNCTION 14659327a FUN_14659327a body=55 status=ok
// SIG undefined FUN_14659327a(void)

void FUN_14659327a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a568 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a568 = FUN_140002ddd(FUN_1465930ba,uVar1,L"GbxGameSettingEditCondition");
  }
  return;
}



// FUNCTION 1465932b2 FUN_1465932b2 body=48 status=ok
// SIG undefined FUN_1465932b2(void)

void FUN_1465932b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b53e370;
  return;
}



// FUNCTION 1465932e2 FUN_1465932e2 body=55 status=ok
// SIG undefined FUN_1465932e2(void)

void FUN_1465932e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a580 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a580 = FUN_140002ddd(FUN_146593319,uVar1,L"GbxGameSettingEditCondition_Attribute");
  }
  return;
}



// FUNCTION 146593319 FUN_146593319 body=47 status=ok
// SIG undefined FUN_146593319(void)

longlong FUN_146593319(void)

{
  if (DAT_14cb9a578 == 0) {
    FUN_14086a14e(&DAT_14cb9a578,&PTR_FUN_14b53a960);
  }
  return DAT_14cb9a578;
}



// FUNCTION 146593348 FUN_146593348 body=48 status=ok
// SIG undefined FUN_146593348(void)

void FUN_146593348(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b53e550;
  return;
}



// FUNCTION 146593378 FUN_146593378 body=55 status=ok
// SIG undefined FUN_146593378(void)

void FUN_146593378(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a598 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a598 = FUN_140002ddd(FUN_1465933af,uVar1,L"GbxGameSettingEditCondition_PlatformTrait");
  }
  return;
}



// FUNCTION 1465933af FUN_1465933af body=47 status=ok
// SIG undefined FUN_1465933af(void)

longlong FUN_1465933af(void)

{
  if (DAT_14cb9a590 == 0) {
    FUN_14086a14e(&DAT_14cb9a590,&PTR_FUN_14b53aad0);
  }
  return DAT_14cb9a590;
}



// FUNCTION 1465933de FUN_1465933de body=48 status=ok
// SIG undefined FUN_1465933de(void)

void FUN_1465933de(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b53e6d0;
  return;
}



// FUNCTION 14659340e FUN_14659340e body=55 status=ok
// SIG undefined FUN_14659340e(void)

void FUN_14659340e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a5b0 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a5b0 = FUN_140002ddd(FUN_146593445,uVar1,L"GbxGameSettingEditCondition_PrimaryPlayer");
  }
  return;
}



// FUNCTION 146593445 FUN_146593445 body=47 status=ok
// SIG undefined FUN_146593445(void)

longlong FUN_146593445(void)

{
  if (DAT_14cb9a5a8 == 0) {
    FUN_14086a14e(&DAT_14cb9a5a8,&PTR_FUN_14b53abe8);
  }
  return DAT_14cb9a5a8;
}



// FUNCTION 146593474 FUN_146593474 body=48 status=ok
// SIG undefined FUN_146593474(void)

void FUN_146593474(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b53e850;
  return;
}



// FUNCTION 1465934a4 FUN_1465934a4 body=47 status=ok
// SIG undefined FUN_1465934a4(void)

longlong FUN_1465934a4(void)

{
  if (DAT_14cb9a5c0 == 0) {
    FUN_1409ce572(&DAT_14cb9a5c0,&PTR_FUN_14b53acc0);
  }
  return DAT_14cb9a5c0;
}



// FUNCTION 1465934d4 FUN_1465934d4 body=55 status=ok
// SIG undefined FUN_1465934d4(void)

void FUN_1465934d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a5e0 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a5e0 =
         FUN_140002ddd(FUN_14659350b,uVar1,L"GbxGameSettingEditCondition_GameSettingValue");
  }
  return;
}



// FUNCTION 14659350b FUN_14659350b body=47 status=ok
// SIG undefined FUN_14659350b(void)

longlong FUN_14659350b(void)

{
  if (DAT_14cb9a5d8 == 0) {
    FUN_14086a14e(&DAT_14cb9a5d8,&PTR_FUN_14b53aec0);
  }
  return DAT_14cb9a5d8;
}



// FUNCTION 14659353a FUN_14659353a body=48 status=ok
// SIG undefined FUN_14659353a(void)

void FUN_14659353a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b53ec10;
  return;
}



// FUNCTION 14659356a FUN_14659356a body=55 status=ok
// SIG undefined FUN_14659356a(void)

void FUN_14659356a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a5f8 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a5f8 = FUN_140002ddd(FUN_1465930eb,uVar1,L"GbxGameSettingEditConditionResponse");
  }
  return;
}



// FUNCTION 1465935a2 FUN_1465935a2 body=48 status=ok
// SIG undefined FUN_1465935a2(void)

void FUN_1465935a2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b53ed90;
  return;
}



// FUNCTION 1465935d2 FUN_1465935d2 body=55 status=ok
// SIG undefined FUN_1465935d2(void)

void FUN_1465935d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a610 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a610 =
         FUN_140002ddd(FUN_146593609,uVar1,L"GbxGameSettingEditConditionResponse_HideSetting");
  }
  return;
}



// FUNCTION 146593609 FUN_146593609 body=47 status=ok
// SIG undefined FUN_146593609(void)

longlong FUN_146593609(void)

{
  if (DAT_14cb9a608 == 0) {
    FUN_14086a14e(&DAT_14cb9a608,&PTR_FUN_14b53b170);
  }
  return DAT_14cb9a608;
}



// FUNCTION 146593638 FUN_146593638 body=48 status=ok
// SIG undefined FUN_146593638(void)

void FUN_146593638(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b53ef70;
  return;
}



// FUNCTION 146593668 FUN_146593668 body=55 status=ok
// SIG undefined FUN_146593668(void)

void FUN_146593668(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a628 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a628 =
         FUN_140002ddd(FUN_14659369f,uVar1,L"GbxGameSettingEditConditionResponse_DisableSetting");
  }
  return;
}



// FUNCTION 14659369f FUN_14659369f body=47 status=ok
// SIG undefined FUN_14659369f(void)

longlong FUN_14659369f(void)

{
  if (DAT_14cb9a620 == 0) {
    FUN_14086a14e(&DAT_14cb9a620,&PTR_FUN_14b53b298);
  }
  return DAT_14cb9a620;
}



// FUNCTION 1465936ce FUN_1465936ce body=48 status=ok
// SIG undefined FUN_1465936ce(void)

void FUN_1465936ce(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b53f0f0;
  return;
}



// FUNCTION 1465936fe FUN_1465936fe body=55 status=ok
// SIG undefined FUN_1465936fe(void)

void FUN_1465936fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a640 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a640 =
         FUN_140002ddd(FUN_146593735,uVar1,L"GbxGameSettingEditConditionResponse_HideOption");
  }
  return;
}



// FUNCTION 146593735 FUN_146593735 body=47 status=ok
// SIG undefined FUN_146593735(void)

longlong FUN_146593735(void)

{
  if (DAT_14cb9a638 == 0) {
    FUN_14086a14e(&DAT_14cb9a638,&PTR_FUN_14b53b3a0);
  }
  return DAT_14cb9a638;
}



// FUNCTION 146593764 FUN_146593764 body=48 status=ok
// SIG undefined FUN_146593764(void)

void FUN_146593764(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b53f270;
  return;
}



// FUNCTION 146593799 FUN_146593799 body=47 status=ok
// SIG undefined FUN_146593799(void)

longlong FUN_146593799(void)

{
  if (DAT_14cb9a658 == 0) {
    FUN_14073dd9a(&DAT_14cb9a658,&PTR_LAB_14b53b6c8);
  }
  return DAT_14cb9a658;
}



// FUNCTION 1465937c8 FUN_1465937c8 body=40 status=ok
// SIG undefined FUN_1465937c8(void)

void FUN_1465937c8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e3421a(puVar1);
  *puVar1 = &PTR_FUN_14b53bac0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1465937f5 FUN_1465937f5 body=47 status=ok
// SIG undefined FUN_1465937f5(void)

longlong FUN_1465937f5(void)

{
  if (DAT_14cb9a670 == 0) {
    FUN_14073dd9a(&DAT_14cb9a670,&PTR_LAB_14b53ba78);
  }
  return DAT_14cb9a670;
}



// FUNCTION 146593824 FUN_146593824 body=47 status=ok
// SIG undefined FUN_146593824(void)

longlong FUN_146593824(void)

{
  if (DAT_14cb9a698 == 0) {
    FUN_1409ce572(&DAT_14cb9a698,&PTR_FUN_14b53beb0);
  }
  return DAT_14cb9a698;
}



// FUNCTION 146593854 FUN_146593854 body=55 status=ok
// SIG undefined FUN_146593854(void)

void FUN_146593854(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a6b8 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a6b8 = FUN_140002ddd(FUN_14659388b,uVar1,L"GbxGameSettingData_Value");
  }
  return;
}



// FUNCTION 14659388b FUN_14659388b body=49 status=ok
// SIG undefined FUN_14659388b(void)

longlong FUN_14659388b(void)

{
  if (DAT_14cb9a6b0 == 0) {
    FUN_14086a14e(&DAT_14cb9a6b0,&PTR_FUN_14b53c120);
  }
  return DAT_14cb9a6b0;
}



// FUNCTION 1465938bc FUN_1465938bc body=48 status=ok
// SIG undefined FUN_1465938bc(void)

void FUN_1465938bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14b53f5c0;
  return;
}



// FUNCTION 1465938ec FUN_1465938ec body=47 status=ok
// SIG undefined FUN_1465938ec(void)

longlong FUN_1465938ec(void)

{
  if (DAT_14cb9a6c8 == 0) {
    FUN_1409ce572(&DAT_14cb9a6c8,&PTR_FUN_14b53c210);
  }
  return DAT_14cb9a6c8;
}



// FUNCTION 14659391c FUN_14659391c body=55 status=ok
// SIG undefined FUN_14659391c(void)

void FUN_14659391c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a6e8 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a6e8 = FUN_140002ddd(FUN_146593953,uVar1,L"GbxGameSettingData_ScalarLimits");
  }
  return;
}



// FUNCTION 146593953 FUN_146593953 body=47 status=ok
// SIG undefined FUN_146593953(void)

longlong FUN_146593953(void)

{
  if (DAT_14cb9a6e0 == 0) {
    FUN_14086a14e(&DAT_14cb9a6e0,&PTR_FUN_14b53c3d0);
  }
  return DAT_14cb9a6e0;
}



// FUNCTION 146593982 FUN_146593982 body=48 status=ok
// SIG undefined FUN_146593982(void)

void FUN_146593982(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b53f940;
  return;
}



// FUNCTION 1465939b2 FUN_1465939b2 body=55 status=ok
// SIG undefined FUN_1465939b2(void)

void FUN_1465939b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a700 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a700 = FUN_140002ddd(FUN_1465939e9,uVar1,L"GbxGameSettingData_Scalar");
  }
  return;
}



// FUNCTION 1465939e9 FUN_1465939e9 body=47 status=ok
// SIG undefined FUN_1465939e9(void)

longlong FUN_1465939e9(void)

{
  if (DAT_14cb9a6f8 == 0) {
    FUN_14086a14e(&DAT_14cb9a6f8,&PTR_FUN_14b53c6e0);
  }
  return DAT_14cb9a6f8;
}



// FUNCTION 146593a18 FUN_146593a18 body=48 status=ok
// SIG undefined FUN_146593a18(void)

void FUN_146593a18(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000e0;
  *puVar1 = &PTR_FUN_14b53fab0;
  return;
}



// FUNCTION 146593a48 FUN_146593a48 body=55 status=ok
// SIG undefined FUN_146593a48(void)

void FUN_146593a48(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a718 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a718 = FUN_140002ddd(FUN_146593a7f,uVar1,L"GbxGameSettingData_Bool");
  }
  return;
}



// FUNCTION 146593a7f FUN_146593a7f body=47 status=ok
// SIG undefined FUN_146593a7f(void)

longlong FUN_146593a7f(void)

{
  if (DAT_14cb9a710 == 0) {
    FUN_14086a14e(&DAT_14cb9a710,&PTR_FUN_14b53c8a8);
  }
  return DAT_14cb9a710;
}


