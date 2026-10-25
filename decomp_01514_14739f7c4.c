// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14739f7c4 FUN_14739f7c4 body=89 status=ok
// SIG undefined FUN_14739f7c4(void)

void FUN_14739f7c4(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca77be8);
  uVar3 = (**(code **)(*DAT_14ca77be0 + 8))(DAT_14ca77be0,0,param_1,0);
  puVar2 = DAT_14ca77bf0;
  if (DAT_14ca77bf0 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*DAT_14ca77bf0;
    DAT_14ca77bf0 = (undefined8 *)uVar3;
    (*(code *)*puVar1)(puVar2,1);
    uVar3 = DAT_14ca77bf0;
  }
  DAT_14ca77bf0 = (undefined8 *)uVar3;
                    /* WARNING: Could not recover jumptable at 0x00014739f816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca77be8);
  return;
}



// FUNCTION 14739f81e FUN_14739f81e body=213 status=ok
// SIG undefined FUN_14739f81e(void)

undefined8
FUN_14739f81e(PSRWLOCK param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  DWORD DVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  PSRWLOCK *local_70;
  undefined1 local_68;
  PSRWLOCK local_58;
  int local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DVar1 = GetCurrentThreadId();
  FUN_140002266(local_48,L"FVulkanChunkedPipelineCacheManager: GetOrAddCache tot %d ",DVar1);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  local_58 = param_1;
  AcquireSRWLockShared(param_1);
  local_78 = param_5;
  local_68 = 0;
  local_70 = &local_58;
  uVar2 = FUN_14739f8f4(param_1,param_2,param_3,param_4);
  if (local_50 == 0) {
    ReleaseSRWLockShared(local_58);
  }
  else {
    ReleaseSRWLockExclusive(local_58);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739f8f4 FUN_14739f8f4 body=511 status=ok
// SIG undefined FUN_14739f8f4(void)

longlong FUN_14739f8f4(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4,
                      uint *param_5,undefined8 *param_6,char param_7)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 auStack_b8 [32];
  uint *local_98;
  undefined8 *local_90;
  undefined1 local_88;
  longlong local_80;
  undefined4 *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = *(longlong *)(*param_3 + 0x4b8);
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    lVar3 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xa8);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xb0) - 1U &
                             (int)local_60 + (int)((ulonglong)local_60 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 0x18);
        if (*plVar1 == local_60) {
          if ((plVar1 != (longlong *)0x0) && (puVar4 = (uint *)(plVar1 + 1), puVar4 != (uint *)0x0))
          {
            if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x44)) goto LAB_14739fa09;
            lVar3 = param_1 + 0x48;
            if (*(longlong *)(param_1 + 0x50) != 0) {
              lVar3 = *(longlong *)(param_1 + 0x50);
            }
            uVar5 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & *puVar4) * 4);
            if (uVar5 == 0xffffffff) goto LAB_14739fa09;
            goto LAB_14739fa79;
          }
          break;
        }
        iVar2 = (int)plVar1[2];
      } while (iVar2 != -1);
    }
  }
  if (param_7 == '\0') {
    *param_4 = 0;
    if (*(int *)(param_6 + 1) == 0) {
      ReleaseSRWLockShared((PSRWLOCK)*param_6);
      AcquireSRWLockExclusive((PSRWLOCK)*param_6);
      *(undefined4 *)(param_6 + 1) = 1;
    }
    local_90 = param_6;
    local_98 = param_5;
    local_88 = 1;
    FUN_14739f8f4(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
  }
  goto LAB_14739f9ac;
  while (uVar5 = puVar6[4], uVar5 != 0xffffffff) {
LAB_14739fa79:
    puVar6 = (uint *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar5 * 0x18);
    if (*puVar6 == *puVar4) goto LAB_14739fa0b;
  }
LAB_14739fa09:
  puVar6 = (uint *)0x0;
LAB_14739fa0b:
  lVar3 = *(longlong *)(puVar6 + 2);
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  UNLOCK();
  *param_4 = 2;
  *param_5 = *puVar4;
  if (lVar3 != 0) goto LAB_14739fa24;
LAB_14739f9ac:
  local_80 = param_1;
  local_78 = param_4;
  local_70 = param_3;
  local_68 = param_2;
  lVar3 = FUN_14739fafc();
  *param_5 = *(uint *)(param_1 + 8);
  local_58 = &local_60;
  local_50 = param_1 + 8;
  FUN_1402eaea6((longlong *)(param_1 + 0x68),local_44,&local_58,0);
LAB_14739fa24:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14739fafc FUN_14739fafc body=524 status=ok
// SIG undefined FUN_14739fafc(void)

longlong FUN_14739fafc(longlong *param_1)

{
  longlong *plVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_54;
  int *local_50;
  longlong *local_48;
  int local_3c;
  ulonglong local_38;
  uint uVar10;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = *param_1;
  plVar1 = (longlong *)(lVar7 + 0x10);
  uVar10 = *(uint *)(lVar7 + 8);
  if (*(int *)(lVar7 + 0x18) != *(int *)(lVar7 + 0x44)) {
    lVar4 = lVar7 + 0x48;
    if (*(longlong *)(lVar7 + 0x50) != 0) {
      lVar4 = *(longlong *)(lVar7 + 0x50);
    }
    uVar8 = *(uint *)(lVar4 + (ulonglong)(*(int *)(lVar7 + 0x58) - 1U & uVar10) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*plVar1 + (longlong)(int)uVar8 * 0x18);
        if (*puVar2 == uVar10) {
          if ((puVar2 + 2 != (uint *)0x0 && puVar2 != (uint *)0x0) &&
             (lVar4 = *(longlong *)(puVar2 + 2), lVar4 != 0)) {
            cVar3 = FUN_14739fd0a(lVar4);
            if (cVar3 == '\0') goto LAB_14739fc80;
            uVar10 = *(uint *)(lVar7 + 8);
          }
          break;
        }
        uVar8 = puVar2[4];
      } while (uVar8 != 0xffffffff);
    }
  }
  iVar9 = uVar10 + 1;
  *(int *)(lVar7 + 8) = iVar9;
  local_54 = iVar9;
  piVar5 = (int *)FUN_14001cc68(0x18,0x10);
  *piVar5 = iVar9;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar7 + 0xb8);
  piVar5[2] = 0;
  piVar5[3] = 0;
  piVar5[4] = 0;
  piVar5[5] = 0;
  EnterCriticalSection(lpCriticalSection);
  if (piVar5 != (int *)0x0) {
    lVar4 = *(longlong *)(lVar7 + 0xe8);
    if (lVar4 == 0) {
      plVar6 = (longlong *)(lVar7 + 0xf0);
    }
    else {
      *(longlong *)(piVar5 + 2) = lVar4;
      plVar6 = (longlong *)(lVar4 + 0x10);
    }
    *plVar6 = (longlong)piVar5;
    *(int **)(lVar7 + 0xe8) = piVar5;
    (**(code **)(*(longlong *)(lVar7 + 0xe0) + 8))(lVar7 + 0xe0,*(int *)(lVar7 + 0xf8) + 1);
  }
  lVar7 = FUN_141447c1b(0x100,0x40);
  FUN_14739ebcc(lVar7,piVar5);
  local_48 = &local_60;
  local_50 = &local_54;
  local_60 = lVar7;
  FUN_14739ef90(plVar1,&local_3c);
  lVar7 = local_60;
  lVar4 = *(longlong *)(*plVar1 + 8 + (longlong)local_3c * 0x18);
  if (local_60 != 0) {
    FUN_14739e7e4(local_60);
    thunk_FUN_1400020a8(lVar7,0x100,0x40);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  FUN_143191218(lVar4);
LAB_14739fc80:
  cVar3 = FUN_14739fd5c(lVar4,*(undefined8 *)param_1[2],param_1[3]);
  if (cVar3 == '\0') {
    *(undefined4 *)param_1[1] = 1;
  }
  else {
    FUN_143191346(lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 14739fd0a FUN_14739fd0a body=81 status=ok
// SIG undefined FUN_14739fd0a(void)

ulonglong FUN_14739fd0a(longlong param_1)

{
  int iVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x10));
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  iVar1 = *(int *)(param_1 + 0xc0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x10));
  return CONCAT71((int7)((ulonglong)param_1 >> 8),iVar1 != 2) & 0xffffffff;
}



// FUNCTION 14739fd5c FUN_14739fd5c body=144 status=ok
// SIG undefined FUN_14739fd5c(void)

bool FUN_14739fd5c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar5 = true;
  if ((*(byte *)(*(longlong *)(DAT_14ca79348 + 0x48) + 0x20fd) & 0x10) != 0) {
    local_30 = *(undefined8 *)(param_1 + 0x20);
    local_20 = param_1 + 0x10;
    local_28 = 0;
    pcVar1 = (code *)*param_3;
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    local_38 = param_2;
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    iVar2 = (*pcVar1)(uVar3,&local_38);
    bVar5 = iVar2 != 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739fdee FUN_14739fdee body=189 status=ok
// SIG undefined FUN_14739fdee(void)

undefined8 FUN_14739fdee(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined1 local_48 [16];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)FUN_1400dbadc();
  if (*plVar1 == 0) {
    lVar2 = FUN_140e92164();
    *plVar1 = lVar2;
  }
  FUN_1412e3d1e(local_48);
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1407c869a(local_48,local_38,0);
  FUN_140056680(local_58,L"VulkanPSO_");
  FUN_1401c7f3e(param_1,local_58,local_38);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739feac FUN_14739feac body=194 status=ok
// SIG undefined FUN_14739feac(void)

void FUN_14739feac(longlong param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca77c48) {
    FUN_144b3d300(&DAT_14ca77c48);
    if (DAT_14ca77c48 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77c20);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca77c20,4000);
      atexit((_func_5014 *)&LAB_1431913e8);
      _Init_thread_footer(&DAT_14ca77c48);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77c20);
  *(undefined4 *)(param_1 + 0xc0) = 4;
  FUN_14739e8ec();
  FUN_1431913f6(param_1,DAT_14ca77bf8);
  FUN_14739e8ec();
  FUN_1473a0180();
                    /* WARNING: Could not recover jumptable at 0x00014739ff17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77c20);
  return;
}



// FUNCTION 14739ff6e FUN_14739ff6e body=201 status=ok
// SIG undefined FUN_14739ff6e(void)

void FUN_14739ff6e(longlong param_1)

{
  DWORD DVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DVar1 = GetCurrentThreadId();
  FUN_140002266(local_28,L"FVulkanChunkedPipelineCacheManager: ReinstateDriverBlobInternal tot %d ",
                DVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14739e8ec();
  FUN_1473a0038(local_40,*(undefined4 *)(param_1 + 8));
  if (local_38 == (undefined8 *)0x0) {
    FUN_14739f78c(local_30);
  }
  else {
    FUN_14739ec40(param_1,local_40,0,1);
    *(undefined4 *)(param_1 + 0xc0) = 5;
    FUN_14739f78c(local_30);
    if (local_38 != (undefined8 *)0x0) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a0038 FUN_1473a0038 body=328 status=ok
// SIG undefined FUN_1473a0038(void)

longlong * FUN_1473a0038(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  
  param_2 = param_2 & 0xffffffff;
  if ((DAT_14c760c20 & 1) == 0) {
    plVar3 = (longlong *)FUN_14054d1d4();
    FUN_14739f468();
    puVar4 = DAT_14ca77c08;
    if (DAT_14ca77c10 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,puVar4,4);
    *param_1 = 0;
    param_1[1] = (longlong)plVar3;
    param_1[2] = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x1a0))(plVar3,param_2);
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    FUN_14739e8ec();
    *puVar2 = &DAT_14ca77be8;
    *(undefined4 *)(puVar2 + 1) = 0;
    AcquireSRWLockShared((PSRWLOCK)&DAT_14ca77be8);
    lVar1 = *(longlong *)(DAT_14ca77bf0 + 0x10);
    lVar5 = param_2 + *(longlong *)(DAT_14ca77bf0 + 8);
    plVar3 = (longlong *)FUN_14001cc68(0xb0);
    memset(plVar3,0,0x90);
    FUN_144869430(plVar3);
    plVar3[0x12] = 0;
    *plVar3 = (longlong)&PTR_FUN_149e1ddc0;
    plVar3[0x13] = lVar5;
    plVar3[0x14] = lVar1 - param_2;
    plVar3[0x15] = 0x7fffffffffffffff;
    FUN_140996f94(plVar3,1);
    (**(code **)(*plVar3 + 0xf0))(plVar3,0);
    *param_1 = lVar5;
    param_1[1] = (longlong)plVar3;
    param_1[2] = (longlong)puVar2;
  }
  return param_1;
}



// FUNCTION 1473a0180 FUN_1473a0180 body=100 status=ok
// SIG undefined FUN_1473a0180(void)

void FUN_1473a0180(void)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = DAT_14ca77bf8;
  (**(code **)(*DAT_14ca77bf8 + 0x1f0))(DAT_14ca77bf8);
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  (**(code **)(*plVar1 + 0x1a0))(plVar1,0);
  FUN_14739f5fc(plVar1,uVar2);
  (**(code **)(*plVar1 + 0x1a0))(plVar1,uVar2);
  (**(code **)(*plVar1 + 0x1f0))(plVar1);
  FUN_14739f7c4(uVar2);
  return;
}



// FUNCTION 1473a01e4 FUN_1473a01e4 body=130 status=ok
// SIG undefined FUN_1473a01e4(void)

void FUN_1473a01e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar5 = FUN_1402cb330();
  while (uVar5 != 0) {
    lVar3 = *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar5 >> 0xe) * 8);
    uVar4 = *(undefined8 *)(lVar3 + 8 + (ulonglong)(uVar5 & 0x3fff) * 0x18);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1456bd870(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar4;
    uVar2 = *(uint *)(lVar3 + (ulonglong)(uVar5 & 0x3fff) * 0x18 + 0x10);
    FUN_1447d080c(uVar5);
    uVar5 = uVar2;
  }
  return;
}



// FUNCTION 1473a0266 FUN_1473a0266 body=79 status=ok
// SIG undefined FUN_1473a0266(void)

void FUN_1473a0266(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x30),
              (longlong)*(int *)((longlong)param_1 + 0x38) * 0x18);
      FUN_1446efa72((longlong)param_1 + 0x30,0,0,0x18);
      return;
    }
  }
  return;
}



// FUNCTION 1473a02b6 FUN_1473a02b6 body=141 status=ok
// SIG undefined FUN_1473a02b6(void)

void FUN_1473a02b6(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,param_4);
  return;
}



// FUNCTION 1473a0344 FUN_1473a0344 body=75 status=ok
// SIG undefined FUN_1473a0344(void)

void FUN_1473a0344(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x20),
              (longlong)*(int *)((longlong)param_1 + 0x28) << 4);
      FUN_1446efa72((longlong)param_1 + 0x20,0,0,0x10);
      return;
    }
  }
  return;
}



// FUNCTION 1473a0390 FUN_1473a0390 body=133 status=ok
// SIG undefined FUN_1473a0390(void)

void FUN_1473a0390(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 1473a0416 FUN_1473a0416 body=147 status=ok
// SIG undefined FUN_1473a0416(void)

void FUN_1473a0416(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473a04aa FUN_1473a04aa body=113 status=ok
// SIG undefined FUN_1473a04aa(void)

void FUN_1473a04aa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1473a051c FUN_1473a051c body=179 status=ok
// SIG undefined FUN_1473a051c(void)

int * FUN_1473a051c(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*piVar1 == *param_3) {
          if (piVar1 != (int *)0x0) goto LAB_1473a05b2;
          break;
        }
        iVar2 = piVar1[4];
      } while (iVar2 != -1);
    }
  }
  local_28 = param_3;
  FUN_1473a05d0(param_1,&local_1c,param_2);
  piVar1 = (int *)(*param_1 + (longlong)local_1c * 0x18);
LAB_1473a05b2:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar1 + 2;
}



// FUNCTION 1473a05d0 FUN_1473a05d0 body=279 status=ok
// SIG undefined FUN_1473a05d0(void)

undefined4 * FUN_1473a05d0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1473a06e8(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  local_40[4] = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_1473a07ce(param_1,param_3,local_40,local_48);
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
      local_40[5] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[4] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1473a08ec(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a06e8 FUN_1473a06e8 body=230 status=ok
// SIG undefined FUN_1473a06e8(void)

int * FUN_1473a06e8(longlong *param_1,int *param_2)

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



// FUNCTION 1473a07ce FUN_1473a07ce body=148 status=ok
// SIG undefined FUN_1473a07ce(void)

void FUN_1473a07ce(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1473a0862(iVar2,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1473a0838;
        }
        iVar8 = piVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1473a0838:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1473a0862 FUN_1473a0862 body=138 status=ok
// SIG undefined FUN_1473a0862(void)

void FUN_1473a0862(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1473a08ec FUN_1473a08ec body=419 status=ok
// SIG undefined FUN_1473a08ec(void)

void FUN_1473a08ec(longlong *param_1)

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



// FUNCTION 1473a0a90 FUN_1473a0a90 body=68 status=ok
// SIG undefined FUN_1473a0a90(void)

void FUN_1473a0a90(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1473a0ad4();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1473a0ad4 FUN_1473a0ad4 body=322 status=ok
// SIG undefined FUN_1473a0ad4(void)

void FUN_1473a0ad4(longlong *param_1)

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



// FUNCTION 1473a0c18 FUN_1473a0c18 body=132 status=ok
// SIG undefined FUN_1473a0c18(void)

void FUN_1473a0c18(longlong param_1,int param_2)

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



// FUNCTION 1473a0c9e FUN_1473a0c9e body=96 status=ok
// SIG undefined FUN_1473a0c9e(void)

void FUN_1473a0c9e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1473a0cfe FUN_1473a0cfe body=112 status=ok
// SIG undefined FUN_1473a0cfe(void)

void FUN_1473a0cfe(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar3 = (ulonglong)uVar1;
  if ((int)uVar1 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  iVar4 = 0x10;
  if (0x10 < uVar1) {
    if (0x10 < *(uint *)(param_1 + 0x8c)) {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(uVar3 << 3,0);
    iVar2 = (int)(uVar3 >> 3);
    iVar4 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar4 = iVar2;
    }
  }
  *(int *)(param_1 + 0x8c) = iVar4;
  FUN_1473a0d70(param_1);
  return;
}



// FUNCTION 1473a0d70 FUN_1473a0d70 body=106 status=ok
// SIG undefined FUN_1473a0d70(void)

void FUN_1473a0d70(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[0x10];
  if (param_2 < 0x11) {
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    *param_1 = *puVar1;
    uVar2 = 0;
    param_2 = 0;
  }
  else {
    if (puVar1 == (undefined8 *)0x0) {
      FUN_1446efa72(param_1 + 0x10,0,param_2,8);
      *(undefined8 *)param_1[0x10] = *param_1;
      return;
    }
    uVar2 = 1;
  }
  FUN_1446efa72(param_1 + 0x10,uVar2,param_2,8);
  return;
}



// FUNCTION 1473a0dda FUN_1473a0dda body=96 status=ok
// SIG undefined FUN_1473a0dda(void)

void FUN_1473a0dda(longlong param_1,int param_2)

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



// FUNCTION 1473a0e3a FUN_1473a0e3a body=14 status=ok
// SIG undefined FUN_1473a0e3a(void)

void FUN_1473a0e3a(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_1431916f0();
  return;
}



// FUNCTION 1473a0e48 FUN_1473a0e48 body=85 status=ok
// SIG undefined FUN_1473a0e48(void)

void FUN_1473a0e48(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_1431916f0();
  return;
}



// FUNCTION 1473a0e9e FUN_1473a0e9e body=62 status=ok
// SIG undefined FUN_1473a0e9e(void)

void FUN_1473a0e9e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473a0edc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1473a0edc FUN_1473a0edc body=93 status=ok
// SIG undefined FUN_1473a0edc(void)

ulonglong FUN_1473a0edc(uint param_1,uint param_2)

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



// FUNCTION 1473a0f3a FUN_1473a0f3a body=132 status=ok
// SIG undefined FUN_1473a0f3a(void)

void FUN_1473a0f3a(longlong param_1,int param_2)

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



// FUNCTION 1473a0fbf FUN_1473a0fbf body=272 status=ok
// SIG undefined FUN_1473a0fbf(void)

void FUN_1473a0fbf(float *param_1,longlong param_2,ushort *param_3,longlong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  ushort *local_68;
  float *local_60;
  undefined4 *local_58;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (float)DAT_14c866ff8;
  uVar3 = (uint)*param_3 & *(uint *)(param_2 + 0x10);
  local_68 = param_3;
  if (uVar3 != 0) {
    do {
      uVar2 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      uVar4 = (ulonglong)uVar2;
      uVar1 = *(undefined8 *)(param_4 + uVar4 * 8);
      local_60 = &local_4c;
      local_58 = param_1;
      FUN_1473a10d0(uVar1,uVar4,*(undefined8 *)(param_2 + 0x58),&local_60);
      local_60 = param_1;
      FUN_1473a115c(uVar1,uVar2,*(undefined8 *)(param_2 + 0x18),&local_60);
      local_60 = param_1;
      FUN_1473a11d4(uVar1,uVar4,*(undefined8 *)(param_2 + 0x68),&local_60);
      local_60 = param_1;
      FUN_1473a1250(uVar1,uVar2,*(undefined8 *)(param_2 + 0x28),&local_60);
      local_60 = param_1;
      FUN_1473a12d3(uVar1,uVar2,*(undefined8 *)(param_2 + 0x38),&local_60);
      uVar3 = uVar3 - 1 & uVar3;
    } while (uVar3 != 0);
  }
  *local_68 = 0;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a10d0 FUN_1473a10d0 body=140 status=ok
// SIG undefined FUN_1473a10d0(void)

void FUN_1473a10d0(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  double dVar8;
  
  if ((param_3 != 0) && (uVar5 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar5 != 0)
     ) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(param_3 + uVar5 * 4);
    uVar4 = *puVar7;
    do {
      puVar7 = puVar7 + 1;
      uVar6 = uVar4 >> 8 & 0xffff;
      if ((int)uVar6 < iVar1) {
        dVar8 = (double)*(float *)*param_4;
        lVar3 = *(longlong *)(lVar2 + (ulonglong)uVar6 * 8);
        if ((*(double *)(lVar3 + 0x58) != dVar8) || (NAN(*(double *)(lVar3 + 0x58)) || NAN(dVar8)))
        {
          *(double *)(lVar3 + 0x58) = dVar8;
        }
        FUN_1473a134c(param_4[1],lVar3,uVar4 & 0xff);
      }
      uVar4 = *puVar7;
    } while (uVar4 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 1473a115c FUN_1473a115c body=120 status=ok
// SIG undefined FUN_1473a115c(void)

void FUN_1473a115c(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  
  if ((param_3 != 0) && (uVar5 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar5 != 0)
     ) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(param_3 + uVar5 * 4);
    uVar4 = *puVar7;
    do {
      puVar7 = puVar7 + 1;
      uVar6 = uVar4 >> 8 & 0xffff;
      if (((int)uVar6 < iVar1) && (lVar3 = *param_4, *(char *)(lVar3 + 0x18) == '\0')) {
        FUN_1473b0f42(*(undefined8 *)(lVar3 + 0x10),
                      CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0xc)),
                      uVar4 & 0xff,*(undefined8 *)(lVar2 + (ulonglong)uVar6 * 8));
      }
      uVar4 = *puVar7;
    } while (uVar4 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 1473a11d4 FUN_1473a11d4 body=124 status=ok
// SIG undefined FUN_1473a11d4(void)

void FUN_1473a11d4(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  
  if ((param_3 != 0) && (uVar5 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar5 != 0)
     ) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(param_3 + uVar5 * 4);
    uVar4 = *puVar7;
    do {
      puVar7 = puVar7 + 1;
      uVar6 = uVar4 >> 8 & 0xffff;
      if (((int)uVar6 < iVar1) && (lVar3 = *param_4, *(char *)(lVar3 + 0x18) == '\0')) {
        FUN_1473b0f42(*(undefined8 *)(lVar3 + 0x10),
                      CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0xc)),
                      uVar4 & 0xff,
                      *(undefined8 *)(*(longlong *)(lVar2 + (ulonglong)uVar6 * 8) + 0x28));
      }
      uVar4 = *puVar7;
    } while (uVar4 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 1473a1250 FUN_1473a1250 body=131 status=ok
// SIG undefined FUN_1473a1250(void)

void FUN_1473a1250(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  
  if ((param_3 != 0) && (uVar5 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar5 != 0)
     ) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(param_3 + uVar5 * 4);
    uVar4 = *puVar7;
    do {
      puVar7 = puVar7 + 1;
      uVar6 = uVar4 >> 8 & 0xffff;
      if (((int)uVar6 < iVar1) && (lVar3 = *param_4, *(char *)(lVar3 + 0x18) == '\0')) {
        FUN_14739d0b8(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x90),
                      CONCAT31((int3)(uVar6 >> 8),*(undefined1 *)(lVar3 + 0xc)),uVar4 & 0xff,
                      *(undefined8 *)(lVar2 + (ulonglong)uVar6 * 8));
      }
      uVar4 = *puVar7;
    } while (uVar4 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 1473a12d3 FUN_1473a12d3 body=120 status=ok
// SIG undefined FUN_1473a12d3(void)

void FUN_1473a12d3(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  
  if ((param_3 != 0) && (uVar5 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar5 != 0)
     ) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(param_3 + uVar5 * 4);
    uVar4 = *puVar7;
    do {
      puVar7 = puVar7 + 1;
      uVar6 = uVar4 >> 8 & 0xffff;
      if (((int)uVar6 < iVar1) && (lVar3 = *param_4, *(char *)(lVar3 + 0x18) == '\0')) {
        FUN_1473b0faa(*(undefined8 *)(lVar3 + 0x10),
                      CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0xc)),
                      uVar4 & 0xff,*(undefined8 *)(lVar2 + (ulonglong)uVar6 * 8));
      }
      uVar4 = *puVar7;
    } while (uVar4 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 1473a134c FUN_1473a134c body=142 status=ok
// SIG undefined FUN_1473a134c(void)

void FUN_1473a134c(longlong *param_1,longlong *param_2,undefined2 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((char)param_1[3] == '\0') {
    uVar3 = (**(code **)(*param_2 + 0x30))(param_2);
    uVar2 = 0x60;
    if ((char)param_1[1] == '\x05') {
      uVar2 = 0x10;
    }
    lVar1 = *(longlong *)(*param_1 + 0x150);
    if (*(longlong *)(lVar1 + 0x80) != 0) {
      FUN_14739859c(lVar1,0,0);
    }
    uVar2 = FUN_147397304(*(undefined8 *)(lVar1 + 0x78),uVar3,uVar2);
    FUN_14739cef8(*(undefined8 *)(param_1[2] + 0x90),*(undefined1 *)((longlong)param_1 + 0xc),
                  param_3,uVar3,uVar2);
  }
  return;
}



// FUNCTION 1473a13da FUN_1473a13da body=272 status=ok
// SIG undefined FUN_1473a13da(void)

void FUN_1473a13da(float *param_1,longlong param_2,ushort *param_3,longlong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  ushort *local_68;
  float *local_60;
  undefined4 *local_58;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (float)DAT_14c866ff8;
  uVar3 = (uint)*param_3 & *(uint *)(param_2 + 0x10);
  local_68 = param_3;
  if (uVar3 != 0) {
    do {
      uVar2 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      uVar4 = (ulonglong)uVar2;
      uVar1 = *(undefined8 *)(param_4 + uVar4 * 8);
      local_60 = &local_4c;
      local_58 = param_1;
      FUN_1473a14eb(uVar1,uVar4,*(undefined8 *)(param_2 + 0x58),&local_60);
      local_60 = param_1;
      FUN_1473a1577(uVar1,uVar2,*(undefined8 *)(param_2 + 0x18),&local_60);
      local_60 = param_1;
      FUN_1473a15ef(uVar1,uVar4,*(undefined8 *)(param_2 + 0x68),&local_60);
      local_60 = param_1;
      FUN_1473a166b(uVar1,uVar2,*(undefined8 *)(param_2 + 0x28),&local_60);
      local_60 = param_1;
      FUN_1473a16eb(uVar1,uVar2,*(undefined8 *)(param_2 + 0x38),&local_60);
      uVar3 = uVar3 - 1 & uVar3;
    } while (uVar3 != 0);
  }
  *local_68 = 0;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a14eb FUN_1473a14eb body=140 status=ok
// SIG undefined FUN_1473a14eb(void)

void FUN_1473a14eb(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  double dVar8;
  
  if ((param_3 != 0) && (uVar5 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar5 != 0)
     ) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(param_3 + uVar5 * 4);
    uVar4 = *puVar7;
    do {
      puVar7 = puVar7 + 1;
      uVar6 = uVar4 >> 8 & 0xffff;
      if ((int)uVar6 < iVar1) {
        dVar8 = (double)*(float *)*param_4;
        lVar3 = *(longlong *)(lVar2 + (ulonglong)uVar6 * 8);
        if ((*(double *)(lVar3 + 0x58) != dVar8) || (NAN(*(double *)(lVar3 + 0x58)) || NAN(dVar8)))
        {
          *(double *)(lVar3 + 0x58) = dVar8;
        }
        FUN_1473a1764(param_4[1],lVar3,uVar4 & 0xff);
      }
      uVar4 = *puVar7;
    } while (uVar4 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 1473a1577 FUN_1473a1577 body=120 status=ok
// SIG undefined FUN_1473a1577(void)

void FUN_1473a1577(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  
  if ((param_3 != 0) && (uVar5 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar5 != 0)
     ) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(param_3 + uVar5 * 4);
    uVar4 = *puVar7;
    do {
      puVar7 = puVar7 + 1;
      uVar6 = uVar4 >> 8 & 0xffff;
      if (((int)uVar6 < iVar1) && (lVar3 = *param_4, *(char *)(lVar3 + 0x18) == '\0')) {
        FUN_1473afc60(*(undefined8 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0xc),uVar4 & 0xff,
                      *(undefined8 *)(lVar2 + (ulonglong)uVar6 * 8));
      }
      uVar4 = *puVar7;
    } while (uVar4 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 1473a15ef FUN_1473a15ef body=124 status=ok
// SIG undefined FUN_1473a15ef(void)

void FUN_1473a15ef(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  
  if ((param_3 != 0) && (uVar5 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar5 != 0)
     ) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(param_3 + uVar5 * 4);
    uVar4 = *puVar7;
    do {
      puVar7 = puVar7 + 1;
      uVar6 = uVar4 >> 8 & 0xffff;
      if (((int)uVar6 < iVar1) && (lVar3 = *param_4, *(char *)(lVar3 + 0x18) == '\0')) {
        FUN_1473afc60(*(undefined8 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0xc),uVar4 & 0xff,
                      *(undefined8 *)(*(longlong *)(lVar2 + (ulonglong)uVar6 * 8) + 0x28));
      }
      uVar4 = *puVar7;
    } while (uVar4 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 1473a166b FUN_1473a166b body=128 status=ok
// SIG undefined FUN_1473a166b(void)

void FUN_1473a166b(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  
  if ((param_3 != 0) && (uVar5 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar5 != 0)
     ) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(param_3 + uVar5 * 4);
    uVar4 = *puVar7;
    do {
      puVar7 = puVar7 + 1;
      uVar6 = uVar4 >> 8 & 0xffff;
      if (((int)uVar6 < iVar1) && (lVar3 = *param_4, *(char *)(lVar3 + 0x18) == '\0')) {
        FUN_14739d0b8(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x10),
                      CONCAT31((int3)(uVar6 >> 8),*(undefined1 *)(lVar3 + 0xc)),uVar4 & 0xff,
                      *(undefined8 *)(lVar2 + (ulonglong)uVar6 * 8));
      }
      uVar4 = *puVar7;
    } while (uVar4 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 1473a16eb FUN_1473a16eb body=120 status=ok
// SIG undefined FUN_1473a16eb(void)

void FUN_1473a16eb(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  
  if ((param_3 != 0) && (uVar5 = (ulonglong)*(uint *)(param_3 + (ulonglong)param_2 * 4), uVar5 != 0)
     ) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(param_3 + uVar5 * 4);
    uVar4 = *puVar7;
    do {
      puVar7 = puVar7 + 1;
      uVar6 = uVar4 >> 8 & 0xffff;
      if (((int)uVar6 < iVar1) && (lVar3 = *param_4, *(char *)(lVar3 + 0x18) == '\0')) {
        FUN_1473afe4e(*(undefined8 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0xc),uVar4 & 0xff,
                      *(undefined8 *)(lVar2 + (ulonglong)uVar6 * 8));
      }
      uVar4 = *puVar7;
    } while (uVar4 >> 0x18 == param_2);
  }
  return;
}



// FUNCTION 1473a1764 FUN_1473a1764 body=139 status=ok
// SIG undefined FUN_1473a1764(void)

void FUN_1473a1764(longlong *param_1,longlong *param_2,undefined2 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((char)param_1[3] == '\0') {
    uVar3 = (**(code **)(*param_2 + 0x30))(param_2);
    uVar2 = 0x60;
    if ((char)param_1[1] == '\x05') {
      uVar2 = 0x10;
    }
    lVar1 = *(longlong *)(*param_1 + 0x150);
    if (*(longlong *)(lVar1 + 0x80) != 0) {
      FUN_14739859c(lVar1,0,0);
    }
    uVar2 = FUN_147397304(*(undefined8 *)(lVar1 + 0x78),uVar3,uVar2);
    FUN_14739cef8(*(undefined8 *)(param_1[2] + 0x10),*(undefined1 *)((longlong)param_1 + 0xc),
                  param_3,uVar3,uVar2);
  }
  return;
}



// FUNCTION 1473a17ef FUN_1473a17ef body=97 status=ok
// SIG undefined FUN_1473a17ef(void)

undefined8 * FUN_1473a17ef(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
switchD_1473a1817_caseD_4:
    *param_1 = 0xffffffffff;
  }
  else {
    switch(*(undefined1 *)((longlong)param_2 + 10)) {
    case 0:
      (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
      break;
    case 1:
    case 2:
    case 5:
      (**(code **)(*plVar1 + 8))(plVar1,param_1);
      break;
    case 3:
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      break;
    default:
      goto switchD_1473a1817_caseD_4;
    }
  }
  return param_1;
}



// FUNCTION 1473a1850 FUN_1473a1850 body=217 status=ok
// SIG undefined FUN_1473a1850(void)

undefined8
FUN_1473a1850(longlong *param_1,ulonglong param_2,ulonglong param_3,int param_4,ulonglong param_5,
             ulonglong param_6,undefined4 param_7)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  param_2 = param_2 & 0xffffffff;
  FUN_1473b77a8();
  puVar2 = *(ulonglong **)(*param_1 + 0x30 + param_2 * 0x40);
  if (DAT_14c760db4 < 2) {
    lVar3 = param_1[4];
    piVar1 = (int *)(lVar3 + param_2 * 0xc);
    if (*piVar1 == param_4) {
      uVar7 = 0;
    }
    else {
      *piVar1 = param_4;
      *puVar2 = param_3;
      uVar7 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
    if (piVar1[1] != (int)param_5) {
      piVar1[1] = (int)param_5;
      puVar2[1] = param_5;
      uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    }
    if (piVar1[2] != (int)param_6) {
      piVar1[2] = (int)param_6;
      puVar2[2] = param_6;
      uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | (byte)uVar7;
  }
  else {
    uVar6 = *puVar2;
    *puVar2 = param_3;
    uVar4 = puVar2[1];
    puVar2[1] = param_5;
    uVar5 = puVar2[2];
    puVar2[2] = param_6;
    uVar6 = uVar5 ^ param_6 | uVar4 ^ param_5 | uVar6 ^ param_3;
    uVar7 = CONCAT71((int7)(uVar6 >> 8),uVar6 != 0);
  }
  *(undefined4 *)(param_1[2] + (ulonglong)*(byte *)(param_1[1] + param_2) * 4) = param_7;
  return uVar7;
}



// FUNCTION 1473a192a FUN_1473a192a body=187 status=ok
// SIG undefined FUN_1473a192a(void)

undefined8
FUN_1473a192a(longlong *param_1,ulonglong param_2,ulonglong param_3,int param_4,ulonglong param_5,
             ulonglong param_6)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  param_2 = param_2 & 0xffffffff;
  FUN_1473b77a8();
  puVar2 = *(ulonglong **)(*param_1 + 0x30 + param_2 * 0x40);
  if (DAT_14c760db4 < 2) {
    piVar1 = (int *)(param_1[4] + param_2 * 0xc);
    if (*piVar1 == param_4) {
      uVar6 = 0;
    }
    else {
      *piVar1 = param_4;
      *puVar2 = param_3;
      uVar6 = CONCAT71((int7)(param_2 * 3 >> 8),1);
    }
    if (piVar1[1] != (int)param_5) {
      piVar1[1] = (int)param_5;
      puVar2[1] = param_5;
      uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
    if (piVar1[2] != (int)param_6) {
      piVar1[2] = (int)param_6;
      puVar2[2] = param_6;
      uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | (byte)uVar6;
  }
  else {
    uVar5 = *puVar2;
    *puVar2 = param_3;
    uVar3 = puVar2[1];
    puVar2[1] = param_5;
    uVar4 = puVar2[2];
    puVar2[2] = param_6;
    uVar5 = uVar4 ^ param_6 | uVar3 ^ param_5 | uVar5 ^ param_3;
    uVar6 = CONCAT71((int7)(uVar5 >> 8),uVar5 != 0);
  }
  return uVar6;
}



// FUNCTION 1473a19e6 FUN_1473a19e6 body=289 status=ok
// SIG undefined FUN_1473a19e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1473a19e6(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  longlong lVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 in_XMM3 [16];
  undefined1 auVar6 [16];
  
  *param_1 = param_2;
  uVar2 = FUN_143191fd2(param_2);
  *(undefined1 *)(param_1 + 1) = uVar2;
  param_1[2] = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 6);
  lVar3 = 0x380;
  do {
    lpCriticalSection[-1].OwningThread = (HANDLE)0x7fffffff;
    *(undefined4 *)&lpCriticalSection[-1].LockSemaphore = 1;
    lpCriticalSection[-1].SpinCount = 0;
    InitializeCriticalSection(lpCriticalSection);
    SetCriticalSectionSpinCount(lpCriticalSection,4000);
    *(undefined4 *)&lpCriticalSection[1].DebugInfo = 0xffffffff;
    *(undefined8 *)((longlong)&lpCriticalSection[1].DebugInfo + 4) = 0;
    *(undefined8 *)&lpCriticalSection[1].RecursionCount = 0;
    *(undefined8 *)((longlong)&lpCriticalSection[1].OwningThread + 4) = 0;
    *(undefined8 *)((longlong)&lpCriticalSection[1].LockSemaphore + 4) = 0;
    lpCriticalSection[1].SpinCount = 0;
    lpCriticalSection[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[2].SpinCount;
    lVar3 = lVar3 + -0x70;
  } while (lVar3 != 0);
  param_1[0x9a] = 0;
  lVar3 = 0;
  memset(param_1 + 0x73,0,0x110);
  auVar1 = _DAT_149931e80;
  auVar4 = pmovsxbq(extraout_XMM0,0x100);
  auVar6 = pmovsxbq(in_XMM3,0x202);
  do {
    if (SUB168(auVar4 ^ auVar1,0) < -0x7ffffffffffffff7) {
      *(int *)((longlong)param_1 + lVar3 * 4 + 0x4a8) = (int)lVar3;
    }
    if (SUB168(auVar4 ^ auVar1,8) < -0x7ffffffffffffff7) {
      *(int *)((longlong)param_1 + lVar3 * 4 + 0x4ac) = (int)lVar3 + 1;
    }
    lVar3 = lVar3 + 2;
    lVar5 = auVar4._8_8_;
    auVar4._0_8_ = auVar4._0_8_ + auVar6._0_8_;
    auVar4._8_8_ = lVar5 + auVar6._8_8_;
  } while (lVar3 != 10);
  return param_1;
}



// FUNCTION 1473a1b08 FUN_1473a1b08 body=258 status=ok
// SIG undefined FUN_1473a1b08(void)

void FUN_1473a1b08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    uVar1 = *(undefined8 *)*param_1;
    (*DAT_14ca78dc8)(uVar1,param_1[0x9a],0);
    param_1[0x9a] = 0;
    lVar3 = 0x68;
    do {
      if (*(int *)((longlong)param_1 + lVar3 + -0x50) != 0x7fffffff) {
        (*DAT_14ca79200)(uVar1,*(undefined8 *)((longlong)param_1 + lVar3 + -0x40),0);
        *(undefined8 *)((longlong)param_1 + lVar3 + -0x40) = 0;
        (*DAT_14ca78e20)(uVar1,*(undefined8 *)((longlong)param_1 + lVar3 + -8));
        *(undefined8 *)((longlong)param_1 + lVar3 + -8) = 0;
        (*DAT_14ca78ea8)(uVar1,*(undefined8 *)((longlong)param_1 + lVar3));
        (*DAT_14ca78e98)(uVar1,*(undefined8 *)((longlong)param_1 + lVar3));
        *(undefined8 *)((longlong)param_1 + lVar3) = 0;
      }
      lVar3 = lVar3 + 0x70;
    } while (lVar3 != 1000);
    (*DAT_14ca79200)(uVar1,param_1[0x73],0);
    param_1[0x73] = 0;
    (*DAT_14ca79200)(uVar1,param_1[2],0);
    param_1[2] = 0;
    puVar2 = (undefined8 *)param_1[0x74];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    param_1[0x74] = 0;
  }
  return;
}



// FUNCTION 1473a1c0a FUN_1473a1c0a body=2069 status=ok
// SIG undefined FUN_1473a1c0a(void)

ulonglong FUN_1473a1c0a(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  int *piVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  longlong *plVar22;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  longlong *local_140;
  undefined8 local_130;
  longlong *local_128;
  int *local_120;
  longlong *local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  uint local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_cc;
  undefined4 local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  int iStack_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  longlong local_68;
  ulonglong local_60;
  
  uVar10 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_60 = uVar10;
  if ((char)param_1[1] == '\x01') {
    puVar3 = (undefined8 *)*param_1;
    uVar4 = *puVar3;
    puVar11 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    uVar6 = DAT_14c760c44;
    uVar2 = *(undefined4 *)(puVar3 + 0x467);
    puVar11[1] = puVar3;
    *puVar11 = &PTR_FUN_14a35c718;
    *(undefined4 *)(puVar11 + 2) = uVar6;
    *(undefined4 *)((longlong)puVar11 + 0x14) = uVar2;
    *(undefined4 *)(puVar11 + 3) = 0x420000;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    InitializeSRWLock((PSRWLOCK)(puVar11 + 9));
    uVar12 = FUN_1431a05a2(puVar11);
    puVar11[4] = uVar12;
    param_1[0x74] = (longlong)puVar11;
    local_a8._0_4_ = 0x20;
    local_a8._4_4_ = 0;
    uStack_a0._0_4_ = 0;
    uStack_a0._4_4_ = 0;
    uStack_94 = 0;
    uStack_90._0_4_ = 0;
    uStack_90._4_4_ = 0;
    uStack_98 = 0x10;
    plVar15 = param_1 + 2;
    local_130 = uVar4;
    iVar9 = (*DAT_14ca79390)(uVar4,&local_a8,0,plVar15);
    if (iVar9 != 0) {
      FUN_1431b4552(iVar9,
                    "VulkanRHI::vkCreateDescriptorSetLayout(DeviceHandle, &EmptyDescriptorSetLayoutCreateInfo, VULKAN_CPU_ALLOCATOR, &EmptyDescriptorSetLayout)"
                    ,".\\Runtime/VulkanRHI/Private/VulkanDescriptorSets.cpp",0x16b);
    }
    plVar20 = param_1 + 3;
    local_118 = param_1 + 0x75;
    local_120 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    uVar10 = 0;
    local_128 = plVar20;
    local_110 = plVar15;
    do {
      uVar13 = 0x5c0002400;
      plVar22 = plVar20 + uVar10 * 0xe;
      if (uVar10 == 7) {
        lVar14 = *param_1;
        if ((~*(ulonglong *)(lVar14 + 0x20f8) & 0x5c0002400) == 0 &&
            (*(ulonglong *)(lVar14 + 0x20f8) & 0x1800) != 0) {
          *(int *)plVar22 = 0x3b9d13f0;
          iVar9 = FUN_143192134(lVar14);
          piVar16 = &DAT_14c760c40;
          goto LAB_1473a1dd1;
        }
        *(int *)plVar22 = 7;
        lVar17 = DAT_14ca77d20;
        if (*local_120 == 0x40000002) {
          uVar13 = 0;
        }
        else {
          bVar7 = FUN_144a61b4f();
          uVar13 = (ulonglong)(bVar7 ^ 1);
        }
        *(int *)((longlong)plVar22 + 0x44) =
             *(int *)(lVar14 + 0x23d0 + (ulonglong)(0 < *(int *)(lVar17 + uVar13 * 4)) * 8);
        iVar9 = 0x10;
        plVar20 = local_128;
      }
      else {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar10 & 0xff) {
        case 0:
          *(int *)plVar22 = 0;
          iVar9 = FUN_143192134(*param_1);
          piVar16 = &DAT_14c760c24;
          break;
        case 8:
          if ((uint)uVar10 < 8) {
            iVar9 = *(int *)((longlong)plVar22 + 4);
            switch(uVar10 & 0xffffffff) {
            case 0:
              lVar14 = 0x2380;
              break;
            case 1:
              goto switchD_1431921a5_caseD_1;
            case 2:
              lVar14 = 0x2390;
              break;
            case 3:
              lVar14 = 0x2398;
              break;
            case 4:
              lVar14 = (ulonglong)(0 < iVar9) * 8 + 0x23a0;
              break;
            case 5:
              lVar14 = (ulonglong)(0 < iVar9) * 8 + 0x23b0;
              break;
            case 6:
              lVar14 = (ulonglong)(0 < iVar9) * 8 + 0x23c0;
              break;
            case 7:
              lVar14 = (ulonglong)(0 < iVar9) * 8 + 0x23d0;
            }
          }
          else {
            if ((uint)uVar10 != 0x3b9d13f0) goto switchD_1431921a5_caseD_1;
            lVar14 = 0x23e8;
          }
          uVar13 = (ulonglong)*(uint *)((longlong)plVar20 + lVar14);
switchD_1431921a5_caseD_1:
          return uVar13 & 0xffffffff;
        }
LAB_1473a1dd1:
        *(int *)((longlong)plVar22 + 0x44) = iVar9;
        iVar9 = *piVar16;
      }
      *(int *)((longlong)plVar22 + 4) = iVar9;
      if ((int)*plVar22 == 0x7fffffff) {
        plVar22[2] = *plVar15;
      }
      else {
        local_c8 = 0;
        uStack_bc = 0x7fffffff;
        uStack_b8 = 0;
        uStack_b4 = 0;
        local_cc = 0;
        local_a8._0_4_ = 0x3b9d3ee8;
        uStack_94 = 0;
        local_a8._4_4_ = 0;
        uStack_a0._0_4_ = 0;
        uStack_a0._4_4_ = 0;
        uStack_98 = 1;
        uStack_90 = &local_cc;
        local_108 = 0x20;
        uStack_104 = 0;
        uStack_f0 = (undefined8 *)&local_c8;
        local_f8 = 0x10;
        uStack_f4 = 1;
        local_b0 = 0;
        iStack_c4 = (int)*plVar22;
        iStack_c0 = iVar9;
        uStack_100 = &local_a8;
        iVar9 = (*DAT_14ca79390)(local_130,&local_108,0,&local_b0);
        if (iVar9 != 0) {
          FUN_1431b4552(iVar9,
                        "VulkanRHI::vkCreateDescriptorSetLayout(DeviceHandle, &DescriptorSetLayoutCreateInfo, VULKAN_CPU_ALLOCATOR, &DescriptorSetLayout)"
                        ,".\\Runtime/VulkanRHI/Private/VulkanDescriptorSets.cpp",0x19b);
        }
        plVar22[2] = local_b0;
        if ((int)*plVar22 != 0x7fffffff) {
          iVar19 = (uint)((int)*plVar22 != 0) * 0x200000 + 0x220003;
          iVar9 = *(int *)((longlong)plVar22 + 4) * *(int *)((longlong)plVar22 + 0x44);
          FUN_1401211f6(plVar22 + 0xc,iVar9,1);
          uVar4 = local_130;
          local_b0 = 0;
          (*DAT_14ca79168)(local_130,plVar22[2],&local_b0);
          local_a8._0_4_ = 0xc;
          local_84 = 0;
          uStack_7c = 0;
          uStack_94 = 0;
          local_a8._4_4_ = 0;
          uStack_a0._0_4_ = 0;
          uStack_a0._4_4_ = 0;
          uStack_98 = 0;
          local_74 = 0;
          uStack_90._4_4_ = 0;
          plVar15 = plVar22 + 9;
          uStack_90._0_4_ = iVar9;
          iStack_88 = iVar19;
          iVar9 = (*DAT_14ca793e8)(uVar4,&local_a8,0,plVar15);
          if (iVar9 != 0) {
            FUN_1431b4552(iVar9,
                          "VulkanRHI::vkCreateBuffer(DeviceHandle, &BufferCreateInfo, VULKAN_CPU_ALLOCATOR, &InOutState.BufferHandle)"
                          ,".\\Runtime/VulkanRHI/Private/VulkanDescriptorSets.cpp",0x1eb);
          }
          local_108 = 0;
          uStack_104 = 0;
          uStack_100._0_4_ = 0;
          uStack_100._4_4_ = 0;
          local_f8 = 0;
          uStack_f4 = 0;
          (*DAT_14ca78e10)(local_130,*plVar15,&local_108);
          lVar14 = *param_1;
          uVar21 = 0xfffffff8;
          if (*(char *)(lVar14 + 0x390) == '\0') {
            cVar8 = FUN_1473dd576();
            if ((cVar8 != '\0') && ((ulonglong)*(uint *)(lVar14 + 0x170) != 0)) {
              uVar13 = 0;
              do {
                if (*(int *)(lVar14 + 0x174 + uVar13 * 8) == 7) goto LAB_1473a200c;
                uVar13 = uVar13 + 1;
              } while (*(uint *)(lVar14 + 0x170) != uVar13);
            }
            uVar21 = 0xfffffff9;
          }
LAB_1473a200c:
          if (local_f8 != 0 && (ulonglong)*(uint *)(lVar14 + 0x170) != 0) {
            uVar13 = 0;
            uVar18 = local_f8;
            do {
              if (((uVar18 & 1) != 0) &&
                 ((*(uint *)(lVar14 + 0x174 + uVar13 * 8) | uVar21) == 0xffffffff))
              goto LAB_1473a207a;
              uVar13 = uVar13 + 1;
            } while ((uVar13 < *(uint *)(lVar14 + 0x170)) &&
                    (bVar5 = 1 < uVar18, uVar18 = uVar18 >> 1, bVar5));
          }
          FUN_1431b4552(0xfffffff8,
                        "Device->GetDeviceMemoryManager().GetMemoryTypeFromProperties(BufferMemoryReqs.memoryTypeBits, GetDescriptorBufferMemoryType(Device), &MemoryTypeIndex)"
                        ,".\\Runtime/VulkanRHI/Private/VulkanDescriptorSets.cpp",0x1f6);
          uVar13 = 0;
LAB_1473a207a:
          local_c8 = 0x3b9bb460;
          iStack_c4 = 0;
          iStack_c0 = 0;
          uStack_bc = 0;
          uStack_b4 = 0;
          uStack_b8 = 2;
          local_a8._0_4_ = 5;
          uStack_90._4_4_ = 0;
          local_a8._4_4_ = 0;
          uStack_98 = local_108;
          uStack_94 = uStack_104;
          uStack_90._0_4_ = (int)uVar13;
          uStack_a0 = &local_c8;
          iVar9 = (*DAT_14ca78e90)(local_130,&local_a8,0,plVar22 + 10);
          if (iVar9 != 0) {
            FUN_1431b4552(iVar9,
                          "VulkanRHI::vkAllocateMemory(DeviceHandle, &AllocateInfo, VULKAN_CPU_ALLOCATOR, &InOutState.MemoryHandle)"
                          ,".\\Runtime/VulkanRHI/Private/VulkanDescriptorSets.cpp",0x202);
          }
          iVar9 = (*DAT_14ca78e18)(local_130,*plVar15,plVar22[10],0);
          if (iVar9 != 0) {
            FUN_1431b4552(iVar9,
                          "VulkanRHI::vkBindBufferMemory(DeviceHandle, InOutState.BufferHandle, InOutState.MemoryHandle, 0)"
                          ,".\\Runtime/VulkanRHI/Private/VulkanDescriptorSets.cpp",0x203);
          }
          local_148 = 0;
          local_140 = plVar22 + 0xb;
          iVar9 = (*DAT_14ca78ea0)(local_130,plVar22[10],0,0xffffffffffffffff);
          if (iVar9 != 0) {
            FUN_1431b4552(iVar9,
                          "VulkanRHI::vkMapMemory(DeviceHandle, InOutState.MemoryHandle, 0, VK_WHOLE_SIZE, 0, (void**)&InOutState.MappedPointer)"
                          ,".\\Runtime/VulkanRHI/Private/VulkanDescriptorSets.cpp",0x204);
          }
          plVar20 = local_118 + uVar10 * 4;
          memset((void *)plVar22[0xb],0,CONCAT44(uStack_94,uStack_98));
          local_a8._0_4_ = 0x3b9e8321;
          uStack_a0._4_4_ = 0;
          local_a8._4_4_ = 0;
          uStack_a0._0_4_ = 0;
          uStack_98 = (undefined4)*plVar15;
          uStack_94 = (undefined4)((ulonglong)*plVar15 >> 0x20);
          *(undefined4 *)plVar20 = 0x3b9f9c6b;
          *(undefined8 *)((longlong)plVar20 + 4) = 0;
          *(undefined8 *)((longlong)plVar20 + 0xc) = 0;
          plVar20[2] = 0;
          plVar20[3] = 0;
          lVar14 = (*DAT_14ca79240)(local_130);
          plVar20[2] = lVar14;
          *(int *)(plVar20 + 3) = iVar19;
          plVar20 = local_128;
          plVar15 = local_110;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 8);
    local_108 = 0;
    uStack_104 = 0;
    uStack_100._0_4_ = 0;
    uStack_100._4_4_ = 0;
    FUN_1473a9298();
    lVar14 = 0;
    lVar17 = 0;
    do {
      *(int *)(CONCAT44(uStack_104,local_108) + lVar14) = (int)lVar17;
      *(undefined4 *)(CONCAT44(uStack_104,local_108) + 4 + lVar14) = 6;
      *(undefined4 *)(CONCAT44(uStack_104,local_108) + 8 + lVar14) = 1;
      *(undefined4 *)(CONCAT44(uStack_104,local_108) + 0xc + lVar14) = 0x7fffffff;
      lVar17 = lVar17 + 1;
      lVar14 = lVar14 + 0x18;
    } while (lVar17 != 0x60);
    local_a8._0_4_ = 0x20;
    local_a8._4_4_ = 0;
    uStack_90._0_4_ = local_108;
    uStack_90._4_4_ = uStack_104;
    uStack_98 = 0x10;
    uStack_94 = 0x60;
    uStack_a0._0_4_ = 0;
    uStack_a0._4_4_ = 0;
    local_c8 = 0;
    iStack_c4 = 0;
    iVar9 = (*DAT_14ca79390)(local_130,&local_a8,0);
    if (iVar9 != 0) {
      FUN_1431b4552(iVar9,
                    "VulkanRHI::vkCreateDescriptorSetLayout(DeviceHandle, &DescriptorSetLayoutCreateInfo, VULKAN_CPU_ALLOCATOR, &DescriptorSetLayout)"
                    ,".\\Runtime/VulkanRHI/Private/VulkanDescriptorSets.cpp",0x1b8);
    }
    lVar14 = CONCAT44(iStack_c4,local_c8);
    if (CONCAT44(uStack_104,local_108) != 0) {
      FUN_1400020a8();
    }
    param_1[0x73] = lVar14;
    plVar15 = param_1 + 5;
    lVar17 = 0;
    do {
      lVar1 = plVar15[0xe];
      (&local_a8)[lVar17] = *plVar15;
      (&uStack_a0)[lVar17] = lVar1;
      lVar17 = lVar17 + 2;
      plVar15 = plVar15 + 0x1c;
    } while (lVar17 != 8);
    local_108 = 0x1e;
    uStack_104 = 0;
    uStack_100._0_4_ = 0;
    uStack_100._4_4_ = 0;
    local_f8 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_f4 = 9;
    local_68 = lVar14;
    uStack_f0 = &local_a8;
    uVar10 = (*DAT_14ca78dd0)(local_130,&local_108,0,param_1 + 0x9a);
    if ((int)uVar10 != 0) {
      uVar10 = FUN_1431b4552(uVar10 & 0xffffffff,
                             "VulkanRHI::vkCreatePipelineLayout(DeviceHandle, &PipelineLayoutCreateInfo, VULKAN_CPU_ALLOCATOR, &BindlessPipelineLayout)"
                             ,".\\Runtime/VulkanRHI/Private/VulkanDescriptorSets.cpp",0x246);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a24f0 FUN_1473a24f0 body=86 status=ok
// SIG undefined FUN_1473a24f0(void)

undefined8 *
FUN_1473a24f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_14a35c718;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 3) = param_5;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 9));
  uVar1 = FUN_1431a05a2(param_1);
  param_1[4] = uVar1;
  return param_1;
}



// FUNCTION 1473a2546 FUN_1473a2546 body=292 status=ok
// SIG undefined FUN_1473a2546(void)

void FUN_1473a2546(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (*DAT_14ca78dd8)(param_2,8,param_1 + 0x3a8);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if ((char)param_3 < '\0') {
    local_80 = param_1 + 0x4a8;
    local_78 = &local_68;
    local_88 = 8;
    (*DAT_14ca78de0)(param_2,0,*(undefined8 *)(param_1 + 0x4d0),0);
  }
  if ((param_3 >> 0xb & 1) != 0) {
    local_80 = param_1 + 0x4a8;
    local_78 = &local_68;
    local_88 = 8;
    (*DAT_14ca78de0)(param_2,1,*(undefined8 *)(param_1 + 0x4d0),0);
  }
  if ((param_3 >> 0x15 & 1) != 0) {
    local_80 = param_1 + 0x4a8;
    local_78 = &local_68;
    local_88 = 8;
    (*DAT_14ca78de0)(param_2,0x3b9d4e88,*(undefined8 *)(param_1 + 0x4d0),0);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a266c FUN_1473a266c body=702 status=ok
// SIG undefined FUN_1473a266c(void)

void FUN_1473a266c(longlong *param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  longlong *local_250;
  undefined8 *local_248;
  ulonglong local_238;
  undefined4 local_22c;
  longlong *local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong *local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  undefined8 uStack_1ec;
  undefined4 local_1e4;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  ulonglong local_198;
  undefined1 local_188 [256];
  undefined4 local_88;
  undefined8 local_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  ulonglong local_60;
  
  lVar9 = DAT_14ca77d20;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar6 = *param_1;
  local_22c = param_3;
  local_210 = param_4;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar4 ^ 1);
  }
  uVar5 = *(ulonglong *)(lVar6 + 0x23c0 + (ulonglong)(0 < *(int *)(lVar9 + uVar5 * 4)) * 8);
  memcpy(local_188,param_1 + 0x75,0x100);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  lVar6 = param_1[0x74];
  local_228 = param_1;
  local_220 = param_2;
  FUN_1473a8d6a(lVar6,&local_1f8,(int)uVar5 * 0x60,param_2);
  plVar3 = local_228;
  local_88 = 0x3b9f9c6b;
  local_84 = 0;
  uStack_7c = 0;
  uVar2 = *(undefined8 *)(CONCAT44(uStack_1f4,local_1f8) + 0x30);
  uStack_78 = (undefined4)uVar2;
  uStack_74 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_70 = (ulonglong)*(uint *)(lVar6 + 0x18);
  local_198 = (ulonglong)uStack_1f0;
  lVar9 = local_198 + *(longlong *)(CONCAT44(uStack_1f4,local_1f8) + 0x28);
  local_218 = uVar5 << 4;
  local_238 = 0;
  lVar6 = 0;
  do {
    iVar1 = *(int *)(local_210 + 8 + lVar6 * 0x10);
    local_208 = lVar6;
    if ((iVar1 != 0) && (0 < iVar1)) {
      lVar8 = 0;
      lVar10 = 0;
      uVar7 = local_238;
      local_200 = (longlong *)(local_210 + lVar6 * 0x10);
      do {
        local_1e0 = *local_200 + lVar8;
        local_1f8 = 0x3b9f9c64;
        uStack_1f4 = 0;
        uStack_1f0 = 0;
        local_1e4 = 0;
        uStack_1ec = 0x600000000;
        (*DAT_14ca78de8)(*(undefined8 *)*plVar3,&local_1f8,uVar5 & 0xffffffff,
                         (uVar7 & 0xffffffff) + lVar9);
        lVar10 = lVar10 + 1;
        uVar7 = uVar7 + uVar5;
        lVar8 = lVar8 + 0x28;
      } while (lVar10 < (int)local_200[1]);
    }
    lVar8 = local_220;
    lVar6 = local_208 + 1;
    local_238 = local_238 + local_218;
  } while (lVar6 != 6);
  (*DAT_14ca78dd8)(*(undefined8 *)(local_220 + 0x88),9,local_188);
  local_250 = local_228 + 0x95;
  local_248 = &local_1d8;
  local_258 = 9;
  (*DAT_14ca78de0)(*(undefined8 *)(lVar8 + 0x88),local_22c,local_228[0x9a],0);
  if ((local_60 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a292c FUN_1473a292c body=134 status=ok
// SIG undefined FUN_1473a292c(void)

undefined8 * FUN_1473a292c(longlong param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 8) != '\x01') {
    *param_2 = 0xffffffffff;
    return param_2;
  }
  switch(param_3) {
  case 0:
    bVar1 = 0;
    break;
  case 2:
    bVar1 = 4;
    break;
  case 3:
    bVar1 = 3;
    break;
  case 4:
    bVar1 = 6;
    break;
  case 5:
    bVar1 = 5;
    break;
  case 6:
    bVar1 = 2;
    break;
  case 7:
    bVar1 = 1;
    break;
  default:
    if (param_3 == 0x3b9d13f0) {
      bVar1 = 7;
      break;
    }
  case 1:
    bVar1 = 9;
  }
  uVar2 = FUN_143192236(param_1,param_1 + (ulonglong)bVar1 * 0x70 + 0x18);
  *(undefined4 *)param_2 = uVar2;
  *(byte *)((longlong)param_2 + 4) = bVar1;
  return param_2;
}



// FUNCTION 1473a29b2 FUN_1473a29b2 body=634 status=ok
// SIG undefined FUN_1473a29b2(void)

void FUN_1473a29b2(longlong *param_1,ulonglong param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  void *_Dst;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined4 local_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 local_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined8 local_64;
  longlong lStack_5c;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar5 = param_2 >> 0x20 & 0xff;
  iVar1 = *(int *)((longlong)param_1 + uVar5 * 0x70 + 0x5c);
  uVar7 = iVar1 * (int)param_2;
  local_68 = 0x3b9f9c64;
  local_64 = 0;
  local_54 = 0;
  lStack_5c = (ulonglong)*(uint *)(param_1 + uVar5 * 0xe + 3) << 0x20;
  lVar8 = (longlong)(int)uVar7;
  local_50 = param_3;
  (*DAT_14ca78de8)(*(undefined8 *)*param_1,&local_68,iVar1,param_1[uVar5 * 0xe + 0xf] + lVar8);
  if (param_4 == '\0') {
    lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x20c8) + 0x150);
    if (*(longlong *)(lVar3 + 0x80) != 0) {
      FUN_14739859c(lVar3,0,0);
    }
    lVar3 = *(longlong *)(lVar3 + 0x78);
    if (*(char *)(lVar3 + 0x74) != '\x02') {
      lVar6 = FUN_143192298(*param_1 + 0x5d0,
                            *(undefined4 *)((longlong)param_1 + uVar5 * 0x70 + 0x5c),1,4);
      uVar2 = *(uint *)((longlong)param_1 + uVar5 * 0x70 + 0x5c);
      lVar4 = param_1[uVar5 * 0xe + 0xf];
      local_70 = lVar6;
      _Dst = (void *)FUN_1473a804a(lVar6 + 0x18,*(undefined8 *)(lVar6 + 0x10));
      memcpy(_Dst,(void *)(lVar4 + lVar8),(ulonglong)uVar2);
      uStack_c8 = &local_a0;
      local_a0 = 0x3b9f9490;
      local_9c = 0;
      local_94 = 0;
      local_90 = 0x10000;
      local_88 = 0x20000018000;
      local_80 = 0x1000;
      local_78 = 0x1800;
      local_e0 = 0x3b9f9493;
      uStack_c0 = 0;
      local_dc = 0;
      uStack_d4 = 0;
      local_bc = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      local_cc = 1;
      (*DAT_14ca78df0)(*(undefined8 *)(lVar3 + 0x88),&local_e0);
      local_f0 = (ulonglong)uVar7;
      local_108 = &local_f8;
      local_f8 = 0;
      local_e8 = (ulonglong)*(uint *)((longlong)param_1 + uVar5 * 0x70 + 0x5c);
      (*DAT_14ca793f0)(*(undefined8 *)(lVar3 + 0x88),*(undefined8 *)(lVar6 + 0x38),
                       param_1[uVar5 * 0xe + 0xc],1);
      local_90 = 0x1000;
      local_88 = 0x1800;
      local_80 = 0x10000;
      local_78 = 0x20000000000;
      (*DAT_14ca78df0)(*(undefined8 *)(lVar3 + 0x88),&local_e0);
      FUN_1473a2c42(*param_1 + 0x5d0,lVar3,&local_70);
      goto LAB_1473a2a57;
    }
  }
  memcpy((void *)((ulonglong)uVar7 + param_1[uVar5 * 0xe + 0xe]),
         (void *)(param_1[uVar5 * 0xe + 0xf] + lVar8),
         (ulonglong)*(uint *)((longlong)param_1 + uVar5 * 0x70 + 0x5c));
LAB_1473a2a57:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a2c2e FUN_1473a2c2e body=13 status=ok
// SIG undefined FUN_1473a2c2e(void)

void FUN_1473a2c2e(longlong param_1)

{
  FUN_1473a804a(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1473a2c3c FUN_1473a2c3c body=5 status=ok
// SIG undefined FUN_1473a2c3c(void)

undefined8 FUN_1473a2c3c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 1473a2c42 FUN_1473a2c42 body=285 status=ok
// SIG undefined FUN_1473a2c42(void)

void FUN_1473a2c42(LPCRITICAL_SECTION param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ULONG_PTR UVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  EnterCriticalSection(param_1);
  FUN_1473a83ec(param_1 + 1,param_3,0);
  uVar4 = DAT_14c7590b0;
  if (param_2 == 0) {
    uVar2 = *param_3;
    iVar1 = *(int *)&param_1[2].DebugInfo;
    *(uint *)&param_1[2].DebugInfo = iVar1 + 1U;
    if (*(uint *)((longlong)&param_1[2].DebugInfo + 4) < iVar1 + 1U) {
      FUN_1473ae8ce(&param_1[1].SpinCount,iVar1);
    }
    UVar3 = param_1[1].SpinCount;
    *(undefined8 *)(UVar3 + (longlong)iVar1 * 0x10) = uVar2;
    *(undefined4 *)(UVar3 + 8 + (longlong)iVar1 * 0x10) = uVar4;
  }
  else {
    lVar7 = (longlong)*(int *)&param_1[1].LockSemaphore;
    if (0 < lVar7) {
      plVar5 = param_1[1].OwningThread;
      do {
        if (*plVar5 == param_2) goto LAB_1473a2c9b;
        plVar5 = plVar5 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    plVar5 = (longlong *)FUN_1473a9c50();
    *plVar5 = param_2;
LAB_1473a2c9b:
    lVar7 = *(longlong *)(param_2 + 0xe0);
    lVar8 = (longlong)(int)plVar5[2];
    if (0 < lVar8) {
      plVar6 = (longlong *)plVar5[1];
      do {
        if (*plVar6 == lVar7) goto LAB_1473a2cce;
        plVar6 = plVar6 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    plVar6 = (longlong *)FUN_1473a9d2c(plVar5 + 1);
    *plVar6 = lVar7;
LAB_1473a2cce:
    iVar1 = (int)plVar6[2];
    *(uint *)(plVar6 + 2) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar6 + 0x14) < iVar1 + 1U) {
      FUN_1473ae7ac(plVar6 + 1,iVar1);
    }
    *(undefined8 *)(plVar6[1] + (longlong)iVar1 * 8) = *param_3;
  }
  *param_3 = 0;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473a2d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1473a2d60 FUN_1473a2d60 body=144 status=ok
// SIG undefined FUN_1473a2d60(void)

void FUN_1473a2d60(longlong param_1,ulonglong param_2,undefined8 param_3,char param_4,
                  undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 8) == '\x01') {
    uVar1 = 5;
    if (param_4 != '\0') {
      uVar1 = 0x3b9f9490;
    }
    local_10 = 1;
    if ((param_2 & 0xff00000000) != 0x300000000) {
      local_10 = uVar1;
    }
    local_20 = 0;
    local_18 = param_3;
    FUN_1473a29b2(param_1,param_2,&local_20,CONCAT71((int7)(local_8 >> 8),param_5) & 0xffffffff);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a2df2 FUN_1473a2df2 body=188 status=ok
// SIG undefined FUN_1473a2df2(void)

void FUN_1473a2df2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 1) == '\x01') {
    local_60 = 0x3b9e8321;
    local_5c = 0;
    local_54 = 0;
    local_50 = param_3;
    lVar1 = (*DAT_14ca79240)(*(undefined8 *)*param_1);
    if (*(char *)(param_1 + 1) == '\x01') {
      uStack_38 = lVar1 + param_4;
      local_48 = 0x3b9f9c63;
      local_44 = 0;
      uStack_3c = 0;
      uStack_28 = 0;
      local_24 = 0;
      uStack_30 = (undefined4)param_5;
      uStack_2c = (undefined4)((ulonglong)param_5 >> 0x20);
      FUN_1473a29b2(param_1,param_2,&local_48,param_6);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a2eb0 FUN_1473a2eb0 body=113 status=ok
// SIG undefined FUN_1473a2eb0(void)

void FUN_1473a2eb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_30 = 0x3b9f9c63;
    local_2c = 0;
    uStack_24 = 0;
    uStack_10 = 0;
    local_c = 0;
    uStack_20 = (undefined4)param_3;
    uStack_1c = (undefined4)((ulonglong)param_3 >> 0x20);
    uStack_18 = (undefined4)param_4;
    uStack_14 = (undefined4)((ulonglong)param_4 >> 0x20);
    FUN_1473a29b2(0,param_2,&local_30,CONCAT71((int7)(local_8 >> 8),param_5) & 0xffffffff);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a2f22 FUN_1473a2f22 body=192 status=ok
// SIG undefined FUN_1473a2f22(void)

void FUN_1473a2f22(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 1) == '\x01') {
    local_48 = 0x3b9e8321;
    local_3c = 0;
    local_44 = 0;
    local_38 = *(undefined8 *)(param_3 + 0x18);
    uStack_60 = (*DAT_14ca79240)(*(undefined8 *)*param_1);
    local_70 = 0x3b9f9c63;
    local_6c = 0;
    uStack_64 = 0;
    local_4c = 0;
    uStack_60 = uStack_60 + *(longlong *)(param_3 + 0x28);
    uStack_58 = (undefined4)*(undefined8 *)(param_3 + 0x30);
    uStack_54 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
    uStack_50 = *(undefined4 *)(param_3 + 0x20);
    FUN_1473a29b2(param_1,param_2,&local_70,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a2fe4 FUN_1473a2fe4 body=128 status=ok
// SIG undefined FUN_1473a2fe4(void)

void FUN_1473a2fe4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 1) == '\x01') {
    local_38 = 0x3b9d13f2;
    local_34 = 0;
    local_2c = 0;
    local_28 = param_3;
    uVar1 = (*DAT_14ca792d0)(*(undefined8 *)*param_1);
    FUN_1473a29b2(param_1,param_2,uVar1,param_4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a3066 FUN_1473a3066 body=150 status=ok
// SIG undefined FUN_1473a3066(void)

void FUN_1473a3066(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = (int)param_2;
  if ((char)(param_2 >> 0x20) != -1 && iVar4 != -1) {
    lVar6 = (param_2 >> 0x20 & 0xff) * 0x70;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + lVar6 + 0x30));
    uVar1 = *(undefined4 *)(param_1 + 0x58 + lVar6);
    uVar2 = *(uint *)(param_1 + 0x5c + lVar6);
    *(int *)(param_1 + 0x58 + lVar6) = iVar4;
    lVar3 = *(longlong *)(param_1 + 0x78 + lVar6);
    lVar5 = (longlong)(int)(uVar2 * iVar4);
    memset((void *)(lVar3 + lVar5),0,(ulonglong)uVar2);
    *(undefined4 *)(lVar3 + lVar5) = uVar1;
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + lVar6 + 0x30);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473a30e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  return;
}



// FUNCTION 1473a30fc FUN_1473a30fc body=509 status=ok
// SIG undefined FUN_1473a30fc(void)

void FUN_1473a30fc(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  PSRWLOCK local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = (PSRWLOCK)(param_1 + 0x48);
  AcquireSRWLockExclusive(local_98);
  if (0 < (longlong)*(int *)(param_1 + 0x30)) {
    local_a0 = (longlong *)(param_1 + 0x38);
    uVar9 = (longlong)*(int *)(param_1 + 0x30);
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + -8 + uVar9 * 8);
      lVar1 = lVar3 + 0x48;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      iVar8 = 0;
      local_60 = lVar1;
      if (*(int *)(lVar3 + 0x60) != 0) {
        FUN_1449c0562(&local_68);
        iVar8 = *(int *)(lVar3 + 0x60);
      }
      plVar2 = (longlong *)(lVar3 + 0x38);
      local_78 = local_58;
      uVar5 = local_78;
      local_70 = local_50;
      local_6c = local_4c;
      local_88 = local_68;
      local_80 = local_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar6 = local_78._4_4_;
      local_90 = plVar2;
      if ((local_78._4_4_ != iVar8) || (local_78 = uVar5, local_60 != lVar1)) {
        do {
          local_78 = uVar5;
          if (*(ulonglong *)(*(longlong *)(*local_90 + (longlong)iVar6 * 0x18) + 0xe0) <=
              *(ulonglong *)(*local_90 + 8 + (longlong)iVar6 * 0x18)) goto LAB_1473a32a4;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar6 = local_78._4_4_;
          uVar5 = local_78;
        } while ((local_80 != lVar1 || local_78._4_4_ != iVar8) || local_90 != plVar2);
      }
      FUN_1473af230(plVar2);
      LOCK();
      *(undefined4 *)(lVar3 + 0x88) = 0;
      UNLOCK();
      uVar7 = *(uint *)(param_1 + 0x30);
      if (uVar9 != uVar7) {
        iVar8 = uVar7 - (int)uVar9;
        if (0 < iVar8) {
          iVar8 = 1;
        }
        memmove((void *)(*(longlong *)(param_1 + 0x28) + (uVar9 - 1) * 8),
                (void *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)(uVar7 - iVar8) * 8),
                (longlong)iVar8 << 3);
        uVar7 = *(uint *)(param_1 + 0x30);
      }
      *(uint *)(param_1 + 0x30) = uVar7 - 1;
      iVar8 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar8 + 1U) {
        FUN_1473af1aa(local_a0,iVar8);
      }
      *(longlong *)(*local_a0 + (longlong)iVar8 * 8) = lVar3;
LAB_1473a32a4:
      bVar4 = 1 < (longlong)uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar4);
  }
  ReleaseSRWLockExclusive(local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473a32fa FUN_1473a32fa body=317 status=ok
// SIG undefined FUN_1473a32fa(void)

void FUN_1473a32fa(uint *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined1 local_114 [4];
  uint *local_110;
  undefined1 local_108 [224];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = 0x3b9bb078;
  memset(local_114,0,0xec);
  local_110 = param_1 + 0x38;
  param_1[0x38] = 0x31;
  if (0x401fff < param_3) {
    *(uint **)(param_1 + 0x3a) = param_1 + 0x48;
    param_1[0x48] = 0x33;
    if (0x402fff < param_3) {
      *(uint **)(param_1 + 0x4a) = param_1 + 0x7c;
      param_1[0x7c] = 0x35;
    }
  }
  (*DAT_14ca79400)(param_2,&local_118);
  memcpy(param_1,local_108,0xdc);
  lVar1 = DAT_14ca77d20;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  *param_1 = (uint)(0 < *(int *)(lVar1 + uVar3 * 4));
  param_1[0x34] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a3438 FUN_1473a3438 body=140 status=ok
// SIG undefined FUN_1473a3438(void)

undefined8 * FUN_1473a3438(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x37a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x382) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x75));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x75),4000);
  memset(param_1 + 0xb,0,0x318);
  return param_1;
}



// FUNCTION 1473a34c4 FUN_1473a34c4 body=197 status=ok
// SIG undefined FUN_1473a34c4(void)

longlong * FUN_1473a34c4(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  param_1[3] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 4),4000);
  memset(param_1 + 9,0,0x100);
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x29));
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = -1;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2f),4000);
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 1473a358a FUN_1473a358a body=103 status=ok
// SIG undefined FUN_1473a358a(void)

longlong FUN_1473a358a(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    InitializeSRWLock((PSRWLOCK)(param_1 + lVar2));
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x60);
  lVar2 = 0xa8;
  do {
    *(undefined8 *)(param_1 + -0x28 + lVar2) = 0;
    *(undefined4 *)(param_1 + -0x20 + lVar2) = 0;
    puVar1 = (undefined8 *)(param_1 + -0x48 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + -0x1c + lVar2) = 0xffffffff00000080;
    *(undefined4 *)(param_1 + -0x14 + lVar2) = 0;
    *(undefined8 *)(param_1 + -8 + lVar2) = 0;
    *(undefined4 *)(param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0x468);
  return param_1;
}



// FUNCTION 1473a35f2 FUN_1473a35f2 body=294 status=ok
// SIG undefined FUN_1473a35f2(void)

void FUN_1473a35f2(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_1473a3718(param_1);
    *param_1 = 0;
  }
  if (param_1[0x4ba] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x418) = 0;
  if (param_1[0x417] != 0) {
    FUN_1400020a8();
  }
  FUN_1473a9454(param_1 + 0x40f);
  if (param_1[0x34b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x349] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x348) = 0;
  if (param_1[0x347] != 0) {
    FUN_1400020a8();
  }
  FUN_1473a9604(param_1 + 0x33f);
  if (param_1[0x227] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c5] != 0) {
    FUN_1400020a8();
  }
  FUN_1473d168e(param_1 + 0xd7);
  FUN_1473a3b3e(param_1 + 200);
  FUN_1473a3b76(param_1 + 0xba);
  FUN_1473a3bc4(param_1 + 0xb2);
  FUN_1473a3bee(param_1 + 0x7b);
  FUN_1473a3c7c(param_1 + 1);
  return;
}



// FUNCTION 1473a3718 FUN_1473a3718 body=1061 status=ok
// SIG undefined FUN_1473a3718(void)

void FUN_1473a3718(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_1[0x4bc] != 0) {
    pcVar5 = (code *)(*DAT_14ca79378)(*param_1,"vkDestroyValidationCacheEXT");
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(*param_1,param_1[0x4bc],0);
      param_1[0x4bc] = 0;
    }
  }
  FUN_1473be5b6(param_1[0x419]);
  if ((param_1[0x41a] != 0) && (param_1[0x41a] != param_1[0x419])) {
    FUN_1473be5b6();
  }
  lVar2 = param_1[0xd3];
  if (lVar2 != 0) {
    FUN_145c7e5a2(lVar2);
    FUN_1400020a8(lVar2);
    param_1[0xd3] = 0;
  }
  FUN_144ad9cc6(&DAT_14ca85100,3,0);
  lVar2 = param_1[0xd4];
  if (lVar2 != 0) {
    FUN_1473b1086(lVar2);
    FUN_1400020a8(lVar2);
  }
  param_1[0xd4] = 0;
  lVar2 = param_1[0xd5];
  if (lVar2 != 0) {
    FUN_1473af974(lVar2);
    FUN_1400020a8(lVar2);
  }
  param_1[0xd5] = 0;
  param_1[0x15b] = 0;
  puVar6 = (undefined8 *)param_1[0x15c];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  param_1[0x15c] = 0;
  if (0 < (longlong)*(int *)(param_1 + 0x41c)) {
    uVar7 = (longlong)*(int *)(param_1 + 0x41c) + 1;
    do {
      puVar6 = *(undefined8 **)(param_1[0x41b] + -0x10 + uVar7 * 8);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  *(undefined4 *)(param_1 + 0x41c) = 0;
  if (*(int *)((longlong)param_1 + 0x20e4) < 0) {
    FUN_1473aa6be(param_1 + 0x41b);
  }
  puVar6 = (undefined8 *)param_1[0x419];
  puVar3 = (undefined8 *)param_1[0x41a];
  if (puVar3 != (undefined8 *)0x0 && puVar3 != puVar6) {
    (**(code **)*puVar3)(puVar3,1);
    puVar6 = (undefined8 *)param_1[0x419];
  }
  param_1[0x41a] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  param_1[0x419] = 0;
  lVar2 = param_1[0xd2];
  if (lVar2 != 0) {
    FUN_1473bae44(lVar2);
    FUN_1400020a8(lVar2);
  }
  param_1[0xd2] = 0;
  iVar1 = *(int *)(param_1 + 0x34a);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[0x349];
    lVar8 = 0;
    do {
      puVar6 = *(undefined8 **)(lVar2 + lVar8);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  FUN_1473a48de(param_1 + 0x349);
  iVar1 = *(int *)(param_1 + 0x34c);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[0x34b];
    lVar8 = 0;
    do {
      puVar6 = *(undefined8 **)(lVar2 + lVar8);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  FUN_1473a48de(param_1 + 0x34b);
  lVar2 = param_1[0x4bd];
  if (lVar2 != 0) {
    FUN_1473b2128(lVar2);
    FUN_1400020a8(lVar2);
  }
  param_1[0x4bd] = 0;
  FUN_1473a83aa(param_1 + 0xba,1,1);
  cVar4 = FUN_1474121fd();
  if (cVar4 != '\0') {
    if (param_1[0x353] != 0) {
      (*DAT_14ca78e20)(*param_1,param_1[0x353],0);
      param_1[0x353] = 0;
    }
    lVar2 = param_1[0x354];
    if (lVar2 != 0) {
      (*DAT_14ca78ea8)(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
      *(undefined8 *)(lVar2 + 0x18) = 0;
      FUN_143197808(param_1 + 1,param_1 + 0x354);
    }
  }
  FUN_1431a02cc(param_1 + 0xb2,1);
  FUN_1473a1b08(param_1[0xd6]);
  lVar2 = param_1[0xd6];
  if (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x388 + lVar8) != 0) {
        FUN_1400020a8();
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x340 + lVar8));
      lVar8 = lVar8 + -0x70;
    } while (lVar8 != -0x380);
    FUN_1400020a8(lVar2);
  }
  param_1[0xd6] = 0;
  FUN_1473a4944(param_1 + 0x7b);
  lVar2 = param_1[0x350];
  if (lVar2 != 0) {
    FUN_1473b87b2(lVar2);
    FUN_1400020a8(lVar2);
  }
  lVar2 = param_1[0x34f];
  if (lVar2 != 0) {
    FUN_1473b87b2(lVar2);
    FUN_1400020a8(lVar2);
  }
  lVar2 = param_1[0x34e];
  if (lVar2 != 0) {
    FUN_1473b87b2(lVar2);
    FUN_1400020a8(lVar2);
  }
  FUN_1473a49cc(param_1 + 200);
  FUN_14319be54(param_1 + 1,1);
  *(undefined4 *)(param_1 + 0x71) = 0;
  FUN_147398922();
  (*DAT_14ca78e28)(*param_1,0);
  *param_1 = 0;
  return;
}



// FUNCTION 1473a3b3e FUN_1473a3b3e body=55 status=ok
// SIG undefined FUN_1473a3b3e(void)

void FUN_1473a3b3e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001473a3b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1473a3b76 FUN_1473a3b76 body=77 status=ok
// SIG undefined FUN_1473a3b76(void)

void FUN_1473a3b76(LPCRITICAL_SECTION param_1)

{
  if (param_1[1].SpinCount != 0) {
    FUN_1400020a8();
  }
  FUN_1473a9e95(param_1[1].OwningThread,*(undefined4 *)&param_1[1].LockSemaphore);
  if (param_1[1].OwningThread != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001473a3bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 1473a3bc4 FUN_1473a3bc4 body=41 status=ok
// SIG undefined FUN_1473a3bc4(void)

void FUN_1473a3bc4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001473a3be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1473a3bee FUN_1473a3bee body=142 status=ok
// SIG undefined FUN_1473a3bee(void)

void FUN_1473a3bee(longlong param_1)

{
  longlong lVar1;
  
  FUN_1473a4944();
  FUN_1473a6c90(param_1 + 0x178);
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x138;
  do {
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0xb8);
  lVar1 = 0xb8;
  do {
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x38);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473a3c7c FUN_1473a3c7c body=107 status=ok
// SIG undefined FUN_1473a3c7c(void)

void FUN_1473a3c7c(longlong param_1)

{
  FUN_14319be54(param_1,1);
  *(undefined4 *)(param_1 + 0x380) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a8));
  FUN_1473ad92d(*(undefined8 *)(param_1 + 0x390),*(undefined4 *)(param_1 + 0x398));
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1473a9aba(param_1);
  return;
}



// FUNCTION 1473a3ce8 FUN_1473a3ce8 body=71 status=ok
// SIG undefined FUN_1473a3ce8(void)

void FUN_1473a3ce8(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473a9f92();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1473aa018();
      return;
    }
  }
  return;
}



// FUNCTION 1473a3d30 FUN_1473a3d30 body=286 status=ok
// SIG undefined FUN_1473a3d30(void)

uint * FUN_1473a3d30(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 auStack_58 [36];
  uint local_34;
  uint *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_2;
  if (param_2 < 0xb9) {
    puVar2 = (uint *)(param_1 + (ulonglong)param_2 * 0xc + 0x1148);
  }
  else {
    if (*(int *)(param_1 + 0x1a00) != *(int *)(param_1 + 0x1a2c)) {
      lVar1 = param_1 + 0x1a30;
      if (*(longlong *)(param_1 + 0x1a38) != 0) {
        lVar1 = *(longlong *)(param_1 + 0x1a38);
      }
      uVar3 = *(uint *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x1a40) - 1U & param_2) * 4);
      if (uVar3 != 0xffffffff) {
        do {
          puVar2 = (uint *)(*(longlong *)(param_1 + 0x19f8) + (longlong)(int)uVar3 * 0x18);
          if (*puVar2 == param_2) {
            if (puVar2 != (uint *)0x0) {
              puVar2 = puVar2 + 1;
              goto LAB_1473a3d66;
            }
            break;
          }
          uVar3 = puVar2[4];
        } while (uVar3 != 0xffffffff);
      }
    }
    local_30 = &local_34;
    FUN_1473aa0b4((longlong *)(param_1 + 0x19f8),&local_24,&local_30,0);
    lVar1 = *(longlong *)(param_1 + 0x19f8) + (longlong)local_24 * 0x18;
    puVar2 = (uint *)(lVar1 + 4);
    *(undefined4 *)(lVar1 + 0xc) = 0;
    puVar2[0] = 0;
    puVar2[1] = 0;
    (*DAT_14ca78e00)(*(undefined8 *)(param_1 + 0xae8),local_34,puVar2);
  }
LAB_1473a3d66:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a3e50 FUN_1473a3e50 body=100 status=ok
// SIG undefined FUN_1473a3e50(void)

void FUN_1473a3e50(undefined8 param_1,longlong param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = FUN_1473a3d30(param_1,param_4);
  uVar1 = *(uint *)(lVar3 + 8);
  if (uVar1 != 0) {
    uVar2 = (uVar1 & 0x40) * 0x200 + (uVar1 & 0x38) * 0x4000 + 0x4000;
    if (((~uVar1 & 0x18) == 0) && ((param_4 == 0x62 || (param_4 == 0x4a)))) {
      uVar2 = uVar2 | 0x10000;
    }
    (&DAT_14ca78010)[param_3 & 0xff] = param_4;
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | uVar2;
  }
  return;
}



// FUNCTION 1473a3eb4 FUN_1473a3eb4 body=11 status=ok
// SIG undefined FUN_1473a3eb4(void)

undefined8 FUN_1473a3eb4(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x6b0) >> 8),
                  *(undefined1 *)(*(longlong *)(param_1 + 0x6b0) + 8));
}



// FUNCTION 1473a3ec0 FUN_1473a3ec0 body=229 status=ok
// SIG undefined FUN_1473a3ec0(void)

void FUN_1473a3ec0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  
  *(undefined8 **)(param_1 + 0x378) = param_2;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined1 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x370) = *param_2;
  FUN_14319bd1c();
  *(undefined4 *)(param_1 + 0x3a0) = 0xffffffff;
  if ((ulonglong)*(uint *)(param_1 + 0x26c) != 0) {
    puVar1 = (ulonglong *)(param_1 + 0x270);
    uVar2 = 0;
    iVar5 = 0;
    uVar3 = 0;
    do {
      if ((puVar1[1] & 1) == 0) {
        iVar5 = iVar5 + 1;
      }
      else if (uVar3 < *puVar1) {
        *(int *)(param_1 + 0x3a0) = (int)uVar2;
        uVar3 = *puVar1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 2;
    } while (*(uint *)(param_1 + 0x26c) != uVar2);
    if (iVar5 != 0) goto LAB_1473a3f0f;
  }
  *(undefined4 *)(param_1 + 0x3a0) = 0xffffffff;
LAB_1473a3f0f:
  *(undefined1 *)(param_1 + 0x389) = 0;
  if ((ulonglong)*(uint *)(param_1 + 0x168) != 0) {
    uVar3 = 0;
    bVar4 = 0;
    do {
      if (bVar4 != 0) break;
      bVar4 = *(byte *)(param_1 + 0x16c + uVar3 * 8) >> 4 & 1;
      *(byte *)(param_1 + 0x389) = bVar4;
      uVar3 = uVar3 + 1;
    } while (*(uint *)(param_1 + 0x168) != uVar3);
  }
  FUN_1473a5878(param_1 + 0x390);
  return;
}



// FUNCTION 1473a3fa6 FUN_1473a3fa6 body=1241 status=ok
// SIG undefined FUN_1473a3fa6(void)

void FUN_1473a3fa6(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar11 = *(uint *)(lVar2 + 0x168);
  iVar7 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar7 + uVar11;
  if ((uint)(*(int *)(param_1 + 0x1c) - iVar7) < uVar11) {
    FUN_1473ae52a((longlong *)(param_1 + 0x10));
  }
  uVar12 = ~(-1 << ((byte)uVar11 & 0x1f));
  iVar9 = 0;
  memset((void *)((longlong)iVar7 * 8 + *(longlong *)(param_1 + 0x10)),0,(longlong)(int)uVar11 << 3)
  ;
  uVar8 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x168);
  if (uVar11 != 0 && uVar8 != 0) {
    uVar6 = 0;
    uVar10 = uVar12;
    do {
      if (((uVar10 & 1) != 0) &&
         ((~*(uint *)(*(longlong *)(param_1 + 8) + 0x16c + uVar6 * 8) & 6) == 0)) {
        iVar9 = (int)uVar6;
        goto LAB_1473a408c;
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 < uVar8) && (bVar3 = 1 < uVar10, uVar10 = uVar10 >> 1, bVar3));
  }
  FUN_1431b4552(0xfffffff8,
                "DeviceMemoryManager->GetMemoryTypeFromProperties(TypeBits, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT, &TypeIndex)"
                ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x82a);
LAB_1473a408c:
  uVar5 = FUN_14001cc68(0x108,0x10);
  FUN_1473a60e2(uVar5,param_1,iVar9,0x2000000);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 8) = uVar5;
  lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 8);
  iVar7 = *(int *)(lVar13 + 0x50);
  *(uint *)(lVar13 + 0x50) = iVar7 + 1U;
  if (*(uint *)(lVar13 + 0x54) < iVar7 + 1U) {
    FUN_1473ae5b0(lVar13,iVar7);
  }
  puVar1 = (undefined8 *)(lVar13 + (longlong)iVar7 * 0x10);
  *puVar1 = 0x2000000;
  puVar1[1] = 0x302000000;
  iVar7 = *(int *)(lVar13 + 0x50);
  *(uint *)(lVar13 + 0x50) = iVar7 + 1U;
  if (*(uint *)(lVar13 + 0x54) < iVar7 + 1U) {
    FUN_1473ae5b0(lVar13,iVar7);
  }
  puVar1 = (undefined8 *)(lVar13 + (longlong)iVar7 * 0x10);
  *puVar1 = 0xffffffffffffffff;
  puVar1[1] = 0x300000000;
  lVar13 = *(longlong *)(param_1 + 8);
  uVar8 = (ulonglong)*(uint *)(lVar13 + 0x168);
  if (uVar8 != 0 && uVar11 != 0) {
    uVar6 = 0;
    iVar7 = 0;
    uVar11 = uVar12;
    do {
      if (((uVar11 & 1) != 0) && ((~*(uint *)(lVar13 + 0x16c + uVar6 * 8) & 10) == 0)) {
        bVar3 = true;
        iVar7 = (int)uVar6;
        break;
      }
      uVar6 = uVar6 + 1;
      bVar3 = false;
      if (uVar8 <= uVar6) {
        iVar7 = 0;
        bVar3 = false;
        break;
      }
      bVar4 = 1 < uVar11;
      uVar11 = uVar11 >> 1;
    } while (bVar4);
    uVar6 = 0;
    do {
      if (((uVar12 & 1) != 0) && ((*(byte *)(lVar13 + 0x16c + uVar6 * 8) & 2) != 0)) {
        iVar9 = (int)uVar6;
        if (bVar3) {
          iVar9 = iVar7;
        }
        goto LAB_1473a41d2;
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 < uVar8) && (bVar4 = 1 < uVar12, uVar12 = uVar12 >> 1, bVar4));
    iVar9 = iVar7;
    if (bVar3) goto LAB_1473a41d2;
  }
  FUN_140033559(".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x848,
                L"No Memory Type found supporting VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT!");
  iVar9 = 0;
LAB_1473a41d2:
  uVar5 = FUN_14001cc68(0x108,0x10);
  FUN_1473a60e2(uVar5,param_1,iVar9,0x2000000);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 8) = uVar5;
  lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 8);
  iVar7 = *(int *)(lVar13 + 0x50);
  *(uint *)(lVar13 + 0x50) = iVar7 + 1U;
  if (*(uint *)(lVar13 + 0x54) < iVar7 + 1U) {
    FUN_1473ae5b0(lVar13,iVar7);
  }
  puVar1 = (undefined8 *)(lVar13 + (longlong)iVar7 * 0x10);
  *puVar1 = 0x2000000;
  puVar1[1] = 0x302000000;
  iVar7 = *(int *)(lVar13 + 0x50);
  *(uint *)(lVar13 + 0x50) = iVar7 + 1U;
  if (*(uint *)(lVar13 + 0x54) < iVar7 + 1U) {
    FUN_1473ae5b0(lVar13,iVar7);
  }
  puVar1 = (undefined8 *)(lVar13 + (longlong)iVar7 * 0x10);
  *puVar1 = 0xffffffffffffffff;
  puVar1[1] = 0x300000000;
  uVar11 = *(uint *)(lVar2 + 0x168);
  if (uVar11 != 0) {
    uVar8 = 0;
    do {
      lVar13 = (longlong)(int)uVar8;
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar13 * 8) == 0) {
        uVar6 = *(ulonglong *)(lVar2 + 0x270 + (longlong)*(int *)(lVar2 + 0x170 + uVar8 * 8) * 0x10)
        ;
        uVar5 = FUN_14001cc68(0x108,0x10);
        FUN_1473a60e2(uVar5,param_1,uVar8 & 0xffffffff,0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar13 * 8) = uVar5;
        *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar13 * 8) + 100) =
             *(byte *)(lVar2 + 0x16c + uVar8 * 8) >> 3 & 1;
        *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar13 * 8) + 0x65) =
             *(byte *)(lVar2 + 0x16c + uVar8 * 8) >> 4 & 1;
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar13 * 8);
        uVar6 = uVar6 >> 3;
        if (0x7ffffff < uVar6) {
          uVar6 = 0x8000000;
        }
        iVar7 = *(int *)(lVar13 + 0x50);
        *(uint *)(lVar13 + 0x50) = iVar7 + 1U;
        if (*(uint *)(lVar13 + 0x54) < iVar7 + 1U) {
          FUN_1473ae5b0(lVar13,iVar7);
        }
        *(undefined8 *)(lVar13 + (longlong)iVar7 * 0x10) = 0x200000;
        *(undefined8 *)(lVar13 + 8 + (longlong)iVar7 * 0x10) = 0x100800000;
        iVar7 = *(int *)(lVar13 + 0x50);
        *(uint *)(lVar13 + 0x50) = iVar7 + 1U;
        if (*(uint *)(lVar13 + 0x54) < iVar7 + 1U) {
          FUN_1473ae5b0(lVar13,iVar7);
        }
        lVar14 = (longlong)iVar7 * 0x10;
        *(undefined8 *)(lVar13 + lVar14) = 0x4000000;
        *(int *)(lVar13 + 8 + lVar14) = (int)uVar6;
        *(undefined4 *)(lVar13 + 0xc + lVar14) = 1;
        iVar7 = *(int *)(lVar13 + 0x50);
        *(uint *)(lVar13 + 0x50) = iVar7 + 1U;
        if (*(uint *)(lVar13 + 0x54) < iVar7 + 1U) {
          FUN_1473ae5b0(lVar13,iVar7);
        }
        *(undefined8 *)(lVar13 + (longlong)iVar7 * 0x10) = 0x200000;
        *(undefined8 *)(lVar13 + 8 + (longlong)iVar7 * 0x10) = 0x200800000;
        iVar7 = *(int *)(lVar13 + 0x50);
        *(uint *)(lVar13 + 0x50) = iVar7 + 1U;
        if (*(uint *)(lVar13 + 0x54) < iVar7 + 1U) {
          FUN_1473ae5b0(lVar13,iVar7);
        }
        lVar14 = (longlong)iVar7 * 0x10;
        *(undefined8 *)(lVar13 + lVar14) = 0x4000000;
        *(int *)(lVar13 + 8 + lVar14) = (int)uVar6;
        *(undefined4 *)(lVar13 + 0xc + lVar14) = 2;
        iVar7 = *(int *)(lVar13 + 0x50);
        *(uint *)(lVar13 + 0x50) = iVar7 + 1U;
        if (*(uint *)(lVar13 + 0x54) < iVar7 + 1U) {
          FUN_1473ae5b0(lVar13,iVar7);
        }
        puVar1 = (undefined8 *)(lVar13 + (longlong)iVar7 * 0x10);
        *puVar1 = 0xffffffffffffffff;
        puVar1[1] = 0x300000000;
        uVar11 = *(uint *)(lVar2 + 0x168);
      }
      uVar8 = uVar8 + 1;
    } while ((uint)uVar8 < uVar11);
  }
  return;
}



// FUNCTION 1473a4480 FUN_1473a4480 body=159 status=ok
// SIG undefined FUN_1473a4480(void)

void FUN_1473a4480(longlong param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  ulonglong uVar2;
  
  if (param_3 != 0 && (ulonglong)*(uint *)(param_1 + 0x168) != 0) {
    uVar2 = 0;
    do {
      if (((param_3 & 1) != 0) && ((~*(uint *)(param_1 + 0x16c + uVar2 * 8) & 6) == 0))
      goto LAB_1473a44f4;
      uVar2 = uVar2 + 1;
    } while ((uVar2 < *(uint *)(param_1 + 0x168)) &&
            (bVar1 = 1 < param_3, param_3 = param_3 >> 1, bVar1));
  }
  FUN_1431b4552(0xfffffff8,
                "this->GetMemoryTypeFromProperties(MemoryTypeBits, MemoryPropertyFlags, &MemoryTypeIndex)"
                ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x30c);
  uVar2 = 0xffffffff;
LAB_1473a44f4:
  FUN_14319c19c(param_1,0,param_2,uVar2,0,0x3f000000,0);
  return;
}



// FUNCTION 1473a4520 FUN_1473a4520 body=94 status=ok
// SIG undefined FUN_1473a4520(void)

undefined8 FUN_1473a4520(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    iVar1 = (*DAT_14ca78ea0)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),0,param_2,
                             0,(undefined8 *)(param_1 + 0x18));
    if (iVar1 != 0) {
      FUN_1431b4552(iVar1,
                    "VulkanRHI::vkMapMemory(DeviceHandle, Handle, Offset, InSize, 0, &MappedPointer)"
                    ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x523);
    }
  }
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 1473a457e FUN_1473a457e body=121 status=ok
// SIG undefined FUN_1473a457e(void)

undefined8 * FUN_1473a457e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  InitializeSRWLock((PSRWLOCK)(param_1 + 1));
  InitializeSRWLock((PSRWLOCK)(param_1 + 2));
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 1473a45f8 FUN_1473a45f8 body=656 status=ok
// SIG undefined FUN_1473a45f8(void)

/* WARNING: Removing unreachable block (ram,0x0001473a4813) */

longlong * FUN_1473a45f8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  int local_a8;
  longlong local_98;
  int local_90;
  longlong local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1400b22c2(&local_68,"Windows");
  FUN_140f7cd62(&local_98);
  FUN_1412cfe60(&local_88,&local_98,(local_90 == 0) + '\x06');
  FUN_1401aebe8(&local_88,L"Build",5);
  FUN_1412cfe60(&local_78,&local_88,(local_80 == 0) + '\r');
  FUN_1401aebe8(&local_78,L"ShaderCaches",0xc);
  iVar6 = (int)uStack_60 + -1;
  if ((int)uStack_60 == 0) {
    iVar6 = 0;
  }
  FUN_1412cfe60(&local_58,&local_78,iVar6 + 1 + (uint)((int)local_70 == 0));
  FUN_1401aebe8(&local_58,local_68,iVar6);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  uStack_60 = 0;
  plVar4 = (longlong *)FUN_14054d1d4();
  puVar8 = local_58;
  if (local_50 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar4 + 0x70))(plVar4,&local_68,puVar8,L"cache");
  lVar2 = local_68;
  lVar11 = (longlong)(int)uStack_60;
  if (lVar11 == 0) {
    uVar5 = 0;
  }
  else {
    lVar9 = 0;
    uVar3 = local_70;
    do {
      local_70 = uVar3;
      iVar6 = *(int *)(lVar2 + 8 + lVar9);
      iVar7 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar7 = 0;
      }
      local_a8 = iVar7 + 1 + (uint)(local_50 == 0);
      local_78 = 0;
      FUN_14125bce8(&local_78,local_58,local_50,0);
      FUN_1401aebe8(&local_78,*(undefined8 *)(lVar2 + lVar9),iVar7);
      iVar6 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
        FUN_1447a1bd6(param_1,iVar6);
      }
      lVar1 = *param_1;
      lVar10 = (longlong)iVar6 * 0x10;
      *(undefined8 *)(lVar1 + lVar10) = 0;
      *(longlong *)(lVar1 + lVar10) = local_78;
      *(int *)(lVar1 + 8 + lVar10) = (int)local_70;
      *(undefined4 *)(lVar1 + 0xc + lVar10) = local_70._4_4_;
      local_70 = 0;
      uVar3 = local_70;
      local_70 = 0;
      local_78 = 0;
      lVar9 = lVar9 + 0x10;
    } while (lVar11 * 0x10 != lVar9);
    uVar5 = uStack_60 & 0xffffffff;
  }
  FUN_1447a1747(local_68,uVar5);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a488a thunk_FUN_1473a4890 body=5 status=ok
// SIG undefined thunk_FUN_1473a4890(void)

void thunk_FUN_1473a4890(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_14ca78e30)(*param_1);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1,"VulkanRHI::vkDeviceWaitIdle(Device)",
                  ".\\Runtime/VulkanRHI/Private/VulkanDevice.cpp",0x57f);
  }
  FUN_147399c44(*(longlong *)(param_1[0x419] + 0x150) + 0x10,0);
  return;
}



// FUNCTION 1473a4890 FUN_1473a4890 body=78 status=ok
// SIG undefined FUN_1473a4890(void)

void FUN_1473a4890(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_14ca78e30)(*param_1);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1,"VulkanRHI::vkDeviceWaitIdle(Device)",
                  ".\\Runtime/VulkanRHI/Private/VulkanDevice.cpp",0x57f);
  }
  FUN_147399c44(*(longlong *)(param_1[0x419] + 0x150) + 0x10,0);
  return;
}



// FUNCTION 1473a48de FUN_1473a48de body=101 status=ok
// SIG undefined FUN_1473a48de(void)

void FUN_1473a48de(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (-1 < (longlong)iVar1) {
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)-iVar1) {
    FUN_1473aa6ee(param_1);
  }
  memset((void *)((longlong)iVar1 * 8 + *param_1),0,(ulonglong)(uint)-iVar1 << 3);
  return;
}



// FUNCTION 1473a4944 FUN_1473a4944 body=135 status=ok
// SIG undefined FUN_1473a4944(void)

void FUN_1473a4944(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1473a6cb6(param_1,1);
  FUN_14319e38e(param_1);
  plVar1 = (longlong *)(param_1 + 0x10);
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar4 = 0;
    do {
      lVar3 = *plVar1;
      lVar2 = *(longlong *)(lVar3 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_1473a6186(lVar2);
        FUN_1400020a8(lVar2);
        lVar3 = *plVar1;
      }
      *(undefined8 *)(lVar3 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1473ae5d0(plVar1);
    return;
  }
  return;
}



// FUNCTION 1473a49cc FUN_1473a49cc body=123 status=ok
// SIG undefined FUN_1473a49cc(void)

void FUN_1473a49cc(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  iVar1 = *(int *)(param_1 + 7);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[6];
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      (*DAT_14ca78f18)(*(undefined8 *)*param_1,*puVar3,0);
      *puVar3 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        FUN_1400020a8(puVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001473a4a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 1473a4a48 FUN_1473a4a48 body=122 status=ok
// SIG undefined FUN_1473a4a48(void)

void FUN_1473a4a48(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_3 != '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20c8) + 0x160);
    if (lVar1 != 0) {
      if ((ulonglong)*(uint *)(lVar1 + 0x44) != 0) {
        uVar2 = 0;
        do {
          if (*(longlong *)(lVar1 + 0x48 + uVar2 * 8) == param_2) goto LAB_1473a4aa1;
          uVar2 = uVar2 + 1;
        } while (*(uint *)(lVar1 + 0x44) != uVar2);
      }
      if (*(longlong *)(lVar1 + 200) == param_2) {
LAB_1473a4aa1:
        *(undefined8 *)(*(longlong *)(param_1 + 0x20c8) + 0x160) = 0;
      }
    }
    FUN_1473bb87c(*(undefined8 *)(param_1 + 0x690),param_2);
  }
  FUN_1473a4ac2(*(undefined8 *)(param_1 + 0x20c8),param_2);
  return;
}



// FUNCTION 1473a4ac2 FUN_1473a4ac2 body=93 status=ok
// SIG undefined FUN_1473a4ac2(void)

void FUN_1473a4ac2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x150);
  lVar2 = *(longlong *)(lVar1 + 0x80);
  if (lVar2 != 0) {
    thunk_FUN_14739e122(lVar2 + 0x108,param_2);
  }
  lVar1 = *(longlong *)(lVar1 + 0x78);
  if (lVar1 != 0) {
    thunk_FUN_14739e122(lVar1 + 0x108,param_2);
  }
  FUN_1473b88b8(*(undefined8 *)(param_1 + 0x128),param_2);
  return;
}



// FUNCTION 1473a4b20 FUN_1473a4b20 body=12 status=ok
// SIG undefined FUN_1473a4b20(void)

void FUN_1473a4b20(longlong param_1)

{
  FUN_14739b464(*(undefined8 *)(param_1 + 0x20c8));
  return;
}



// FUNCTION 1473a4b2c FUN_1473a4b2c body=120 status=ok
// SIG undefined FUN_1473a4b2c(void)

void FUN_1473a4b2c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    local_20 = 0;
    local_18 = 0;
    FUN_14318eafa(lVar1);
  }
  FUN_14739639c(lVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a4ba6 FUN_1473a4ba6 body=52 status=ok
// SIG undefined FUN_1473a4ba6(void)

void FUN_1473a4ba6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20d0) != *(longlong *)(param_1 + 0x20c8)) {
    FUN_1473a4b2c(param_1,*(longlong *)(param_1 + 0x20d0));
  }
  FUN_1473a4b2c();
  return;
}



// FUNCTION 1473a4bda FUN_1473a4bda body=131 status=ok
// SIG undefined FUN_1473a4bda(void)

void FUN_1473a4bda(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20d0);
  if (((lVar1 != 0) && (lVar1 != *(longlong *)(param_1 + 0x20c8))) &&
     (*(longlong *)(lVar1 + 0x178) != 0)) {
    FUN_1473a9816(*(longlong *)(lVar1 + 0x178) + 0x18,param_2);
  }
  if ((*(longlong *)(param_1 + 0x20c8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20c8) + 0x178), lVar1 != 0)) {
    FUN_1473a9816(lVar1 + 0x18,param_2);
  }
  if (*(longlong *)(param_1 + 0x25e8) != 0) {
    FUN_1473b5662(*(longlong *)(param_1 + 0x25e8),param_2);
    return;
  }
  return;
}



// FUNCTION 1473a4c5e FUN_1473a4c5e body=134 status=ok
// SIG undefined FUN_1473a4c5e(void)

undefined8 FUN_1473a4c5e(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77d58);
  iVar1 = *(int *)(param_1 + 0x20e0);
  if ((longlong)iVar1 == 0) {
    uVar2 = FUN_14001cc68(0x588,0x10);
    FUN_1473be18c(uVar2,DAT_14ca79348,param_1,*(undefined8 *)(param_1 + 0x1a70),
                  *(undefined8 *)(param_1 + 0x20c8));
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x20d8) + -8 + (longlong)iVar1 * 8);
    *(int *)(param_1 + 0x20e0) = iVar1 + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77d58);
  return uVar2;
}



// FUNCTION 1473a4ce4 FUN_1473a4ce4 body=103 status=ok
// SIG undefined FUN_1473a4ce4(void)

void FUN_1473a4ce4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77d58);
  iVar1 = *(int *)(param_1 + 0x20e0);
  *(uint *)(param_1 + 0x20e0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x20e4) < iVar1 + 1U) {
    FUN_1473aa638((longlong *)(param_1 + 0x20d8),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20d8) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001473a4d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77d58);
  return;
}



// FUNCTION 1473a4d4c FUN_1473a4d4c body=38 status=ok
// SIG undefined FUN_1473a4d4c(void)

void FUN_1473a4d4c(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x698) == 0) {
    uVar1 = FUN_1473d84ee();
    *(undefined8 *)(param_1 + 0x698) = uVar1;
  }
  return;
}



// FUNCTION 1473a4d72 FUN_1473a4d72 body=407 status=ok
// SIG undefined FUN_1473a4d72(void)

ulonglong * FUN_1473a4d72(undefined8 *param_1,ulonglong *param_2)

{
  double dVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(byte *)((longlong)param_1 + 0x20f9) & 0x40) != 0) {
    local_70 = 0x3b9d98c0;
    local_6c = 0;
    uStack_64 = 0;
    local_5c = 0;
    local_78 = 0;
    local_88 = &local_80;
    local_80 = 0;
    iVar2 = (*DAT_14ca78e38)(*param_1,1);
    if (iVar2 != 0) {
      FUN_1431b4552(iVar2,
                    "VulkanRHI::vkGetCalibratedTimestampsEXT(Device, 1, &TimestampInfo, &GPUTimestamp, &MaxDeviation)"
                    ,".\\Runtime/VulkanRHI/Private/VulkanDevice.cpp",0x61a);
    }
    dVar1 = ((((double)CONCAT44(0x43300000,(int)local_78) - 4503599627370496.0) +
             ((double)CONCAT44(0x45300000,(int)((ulonglong)local_78 >> 0x20)) -
             1.9342813113834067e+25)) /
            (((double)CONCAT44(0x43300000,(int)DAT_14ca813c0) - 4503599627370496.0) +
            ((double)CONCAT44(0x45300000,(int)((ulonglong)DAT_14ca813c0 >> 0x20)) -
            1.9342813113834067e+25))) * 1000.0 * 1000.0;
    uVar3 = (ulonglong)dVar1;
    *param_2 = (longlong)(dVar1 - 9.223372036854776e+18) & (longlong)uVar3 >> 0x3f | uVar3;
    QueryPerformanceCounter(&local_58);
    dVar1 = (((double)CONCAT44(0x43300000,local_58.s.LowPart) - 4503599627370496.0) +
            ((double)CONCAT44(0x45300000,local_58.s.HighPart) - 1.9342813113834067e+25)) *
            DAT_14c83f418 * 1000000.0;
    uVar3 = (ulonglong)dVar1;
    param_2[1] = (longlong)(dVar1 - 9.223372036854776e+18) & (longlong)uVar3 >> 0x3f | uVar3;
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a4f0a FUN_1473a4f0a body=83 status=ok
// SIG undefined FUN_1473a4f0a(void)

int FUN_1473a4f0a(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (param_1 != 1) {
    uVar2 = FUN_14118da1c();
    cVar1 = FUN_14054d46e(uVar2,L"FeatureLevelES31");
    if (cVar1 == '\0') {
      uVar2 = FUN_14118da1c();
      cVar1 = FUN_14054d46e(uVar2,L"FeatureLevelES3_1");
      iVar3 = param_1;
      if (cVar1 != '\0') {
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}



// FUNCTION 1473a4f5e FUN_1473a4f5e body=73 status=ok
// SIG undefined FUN_1473a4f5e(void)

undefined8 FUN_1473a4f5e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  if ((((*(int *)(param_2 + 1) < 5) || (piVar1 = (int *)*param_2, *piVar1 != 0x20)) ||
      (piVar1[1] != 1)) ||
     (((piVar1[2] != *(int *)(param_1 + 0xaf8) || (piVar1[3] != *(int *)(param_1 + 0xafc))) ||
      (*(undefined1 (*) [16])(piVar1 + 4) != *(undefined1 (*) [16])(param_1 + 0xc04))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 1473a4fa8 FUN_1473a4fa8 body=230 status=ok
// SIG undefined FUN_1473a4fa8(void)

longlong * FUN_1473a4fa8(longlong *param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L".%x.%x",*(undefined4 *)(param_2 + 0xaf8),
                *(undefined4 *)(param_2 + 0xafc));
  iVar3 = local_28 + -1;
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
    iVar3 = 0;
  }
  cVar1 = FUN_144a38768(param_3,puVar2,iVar3,1);
  if (cVar1 == '\0') {
    iVar3 = local_28 + -1;
    if (local_28 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(param_3,local_30,iVar3);
  }
  *param_1 = *param_3;
  *param_3 = 0;
  *(int *)(param_1 + 1) = (int)param_3[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  if ((local_30 != (undefined2 *)0x0) && (FUN_1400020a8(), *param_3 != 0)) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a5090 FUN_1473a5090 body=1270 status=ok
// SIG undefined FUN_1473a5090(void)

void FUN_1473a5090(void)

{
  DAT_14ca79358 = 0;
  DAT_14ca79420 = 0;
  DAT_14ca78e58 = 0;
  DAT_14ca78e00 = 0;
  DAT_14ca79408 = 0;
  DAT_14ca78e60 = 0;
  DAT_14ca78e68 = 0;
  DAT_14ca78e08 = 0;
  DAT_14ca79410 = 0;
  DAT_14ca78e70 = 0;
  DAT_14ca79370 = 0;
  DAT_14ca79400 = 0;
  DAT_14ca78e78 = 0;
  DAT_14ca79418 = 0;
  DAT_14ca78e28 = 0;
  DAT_14ca79388 = 0;
  DAT_14ca78e80 = 0;
  DAT_14ca792b8 = 0;
  DAT_14ca792c0 = 0;
  DAT_14ca78e88 = 0;
  DAT_14ca78e30 = 0;
  DAT_14ca78e90 = 0;
  DAT_14ca78e98 = 0;
  DAT_14ca78ea0 = 0;
  DAT_14ca78ea8 = 0;
  DAT_14ca78eb0 = 0;
  DAT_14ca78eb8 = 0;
  DAT_14ca78ec0 = 0;
  DAT_14ca78e18 = 0;
  DAT_14ca78ec8 = 0;
  DAT_14ca78ed0 = 0;
  DAT_14ca78ed8 = 0;
  DAT_14ca78e10 = 0;
  DAT_14ca78ee0 = 0;
  DAT_14ca78ee8 = 0;
  DAT_14ca78ef0 = 0;
  DAT_14ca78ef8 = 0;
  DAT_14ca78f00 = 0;
  DAT_14ca78f08 = 0;
  DAT_14ca78f10 = 0;
  DAT_14ca78f18 = 0;
  DAT_14ca78f20 = 0;
  DAT_14ca78f28 = 0;
  DAT_14ca78f30 = 0;
  DAT_14ca78f38 = 0;
  DAT_14ca78f40 = 0;
  DAT_14ca79258 = 0;
  DAT_14ca79268 = 0;
  DAT_14ca79270 = 0;
  DAT_14ca78f48 = 0;
  DAT_14ca79280 = 0;
  DAT_14ca79248 = 0;
  DAT_14ca79260 = 0;
  DAT_14ca79278 = 0;
  DAT_14ca793e8 = 0;
  DAT_14ca78e20 = 0;
  DAT_14ca78f50 = 0;
  DAT_14ca78f58 = 0;
  DAT_14ca78f60 = 0;
  DAT_14ca78f68 = 0;
  DAT_14ca78f70 = 0;
  DAT_14ca78f78 = 0;
  DAT_14ca78f80 = 0;
  DAT_14ca78f88 = 0;
  DAT_14ca78f90 = 0;
  DAT_14ca79210 = 0;
  DAT_14ca79208 = 0;
  DAT_14ca79220 = 0;
  DAT_14ca79218 = 0;
  DAT_14ca79228 = 0;
  DAT_14ca79230 = 0;
  DAT_14ca79238 = 0;
  DAT_14ca78dd0 = 0;
  DAT_14ca78dc8 = 0;
  DAT_14ca78f98 = 0;
  DAT_14ca79350 = 0;
  DAT_14ca79390 = 0;
  DAT_14ca79200 = 0;
  DAT_14ca791b8 = 0;
  DAT_14ca791c0 = 0;
  DAT_14ca791c8 = 0;
  DAT_14ca791d0 = 0;
  DAT_14ca78fa0 = 0;
  DAT_14ca791f8 = 0;
  DAT_14ca78fa8 = 0;
  DAT_14ca78fb0 = 0;
  DAT_14ca79438 = 0;
  DAT_14ca78fb8 = 0;
  DAT_14ca78fc0 = 0;
  DAT_14ca78fc8 = 0;
  DAT_14ca78fd0 = 0;
  DAT_14ca78fd8 = 0;
  DAT_14ca78fe0 = 0;
  DAT_14ca78fe8 = 0;
  DAT_14ca78ff0 = 0;
  DAT_14ca78ff8 = 0;
  DAT_14ca79000 = 0;
  DAT_14ca79008 = 0;
  DAT_14ca79318 = 0;
  DAT_14ca791e0 = 0;
  DAT_14ca791e8 = 0;
  DAT_14ca79010 = 0;
  DAT_14ca79018 = 0;
  DAT_14ca79020 = 0;
  DAT_14ca79028 = 0;
  DAT_14ca79030 = 0;
  DAT_14ca79038 = 0;
  DAT_14ca791f0 = 0;
  DAT_14ca793b0 = 0;
  DAT_14ca79040 = 0;
  DAT_14ca791d8 = 0;
  DAT_14ca79048 = 0;
  DAT_14ca79050 = 0;
  DAT_14ca79058 = 0;
  DAT_14ca79060 = 0;
  DAT_14ca79068 = 0;
  DAT_14ca79070 = 0;
  DAT_14ca793f0 = 0;
  DAT_14ca79078 = 0;
  DAT_14ca79080 = 0;
  DAT_14ca79088 = 0;
  DAT_14ca79330 = 0;
  DAT_14ca79090 = 0;
  DAT_14ca79338 = 0;
  DAT_14ca79098 = 0;
  DAT_14ca790a0 = 0;
  DAT_14ca790a8 = 0;
  DAT_14ca790b0 = 0;
  DAT_14ca79298 = 0;
  DAT_14ca790b8 = 0;
  DAT_14ca790c0 = 0;
  DAT_14ca79290 = 0;
  DAT_14ca792a0 = 0;
  DAT_14ca792a8 = 0;
  DAT_14ca79288 = 0;
  DAT_14ca792b0 = 0;
  DAT_14ca790c8 = 0;
  DAT_14ca790d0 = 0;
  DAT_14ca790d8 = 0;
  DAT_14ca79340 = 0;
  DAT_14ca790e0 = 0;
  DAT_14ca790e8 = 0;
  DAT_14ca78e48 = 0;
  DAT_14ca78e50 = 0;
  DAT_14ca790f0 = 0;
  DAT_14ca790f8 = 0;
  DAT_14ca78e40 = 0;
  DAT_14ca79100 = 0;
  DAT_14ca792c8 = 0;
  DAT_14ca79110 = 0;
  DAT_14ca792e0 = 0;
  DAT_14ca793e0 = 0;
  DAT_14ca792d0 = 0;
  DAT_14ca79320 = 0;
  DAT_14ca79328 = 0;
  DAT_14ca792f0 = 0;
  DAT_14ca793f8 = 0;
  DAT_14ca79310 = 0;
  DAT_14ca792d8 = 0;
  DAT_14ca79430 = 0;
  DAT_14ca79120 = 0;
  DAT_14ca79128 = 0;
  DAT_14ca79250 = 0;
  DAT_14ca78df0 = 0;
  DAT_14ca79160 = 0;
  DAT_14ca78e38 = 0;
  DAT_14ca79240 = 0;
  DAT_14ca79168 = 0;
  DAT_14ca78dd8 = 0;
  DAT_14ca78de0 = 0;
  DAT_14ca78de8 = 0;
  DAT_14ca792e8 = 0;
  DAT_14ca79308 = 0;
  DAT_14ca79428 = 0;
  DAT_14ca792f8 = 0;
  DAT_14ca79300 = 0;
  DAT_14ca79178 = 0;
  DAT_14ca79188 = 0;
  DAT_14ca791a0 = 0;
  DAT_14ca78df8 = 0;
  DAT_14ca791a8 = 0;
  return;
}



// FUNCTION 1473a5586 FUN_1473a5586 body=95 status=ok
// SIG undefined FUN_1473a5586(void)

ulonglong FUN_1473a5586(void)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_14ca77e28;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(lVar1 + uVar4 * 4) == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_14118da1c();
    uVar4 = FUN_14054d46e(uVar3,L"SkipVulkanProfileCheck");
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 1473a55e6 FUN_1473a55e6 body=130 status=ok
// SIG undefined FUN_1473a55e6(void)

undefined8 FUN_1473a55e6(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14631b720(local_30);
  FUN_140ba7826(param_1,L"VP_UE_Vulkan_",local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (param_3 != '\0') {
    FUN_1400020e8(param_1,&DAT_14a35ab4e,3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a566a FUN_1473a566a body=204 status=ok
// SIG undefined FUN_1473a566a(void)

void FUN_1473a566a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = DAT_14ca77e10;
  uVar1 = *(uint *)(param_1 + 1);
  pvVar2 = (void *)*param_1;
  lVar5 = (longlong)DAT_14ca77e10;
  iVar4 = DAT_14ca77e10 + uVar1;
  if ((uint)(DAT_14ca77e14 - DAT_14ca77e10) < uVar1) {
    DAT_14ca77e10 = iVar4;
    FUN_140ca86cc(&DAT_14ca77e08,iVar3);
  }
  else {
    DAT_14ca77e10 = iVar4;
    if (uVar1 == 0) goto LAB_1473a56cb;
  }
  memcpy((void *)(lVar5 * 8 + DAT_14ca77e08),pvVar2,(longlong)(int)uVar1 << 3);
LAB_1473a56cb:
  iVar3 = DAT_14ca77e38;
  uVar1 = *(uint *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  lVar5 = (longlong)DAT_14ca77e38;
  DAT_14ca77e38 = DAT_14ca77e38 + uVar1;
  if ((uint)(DAT_14ca77e3c - iVar3) < uVar1) {
    FUN_140ca86cc(&DAT_14ca77e30,iVar3);
  }
  else if (uVar1 == 0) {
    return;
  }
  memcpy((void *)(lVar5 * 8 + DAT_14ca77e30),pvVar2,(longlong)(int)uVar1 << 3);
  return;
}



// FUNCTION 1473a5736 FUN_1473a5736 body=204 status=ok
// SIG undefined FUN_1473a5736(void)

void FUN_1473a5736(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = DAT_14ca77e00;
  uVar1 = *(uint *)(param_1 + 1);
  pvVar2 = (void *)*param_1;
  lVar5 = (longlong)DAT_14ca77e00;
  iVar4 = DAT_14ca77e00 + uVar1;
  if ((uint)(DAT_14ca77e04 - DAT_14ca77e00) < uVar1) {
    DAT_14ca77e00 = iVar4;
    FUN_140ca86cc(&DAT_14ca77df8,iVar3);
  }
  else {
    DAT_14ca77e00 = iVar4;
    if (uVar1 == 0) goto LAB_1473a5797;
  }
  memcpy((void *)(lVar5 * 8 + DAT_14ca77df8),pvVar2,(longlong)(int)uVar1 << 3);
LAB_1473a5797:
  iVar3 = DAT_14ca77e48;
  uVar1 = *(uint *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  lVar5 = (longlong)DAT_14ca77e48;
  DAT_14ca77e48 = DAT_14ca77e48 + uVar1;
  if ((uint)(DAT_14ca77e4c - iVar3) < uVar1) {
    FUN_140ca86cc(&DAT_14ca77e40,iVar3);
  }
  else if (uVar1 == 0) {
    return;
  }
  memcpy((void *)(lVar5 * 8 + DAT_14ca77e40),pvVar2,(longlong)(int)uVar1 << 3);
  return;
}



// FUNCTION 1473a5802 FUN_1473a5802 body=118 status=ok
// SIG undefined FUN_1473a5802(void)

void FUN_1473a5802(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_14118da1c();
  cVar2 = FUN_14054d46e(uVar1,L"vktrace");
  if (cVar2 != '\0') {
    cVar2 = FUN_14319b720("VK_LAYER_LUNARG_gfxreconstruct",param_2,param_3,param_4);
    uVar3 = 1;
    if (cVar2 == '\0') {
      cVar2 = FUN_14319b720("VK_LAYER_LUNARG_vktrace",param_2,param_3,param_4);
      uVar3 = 2;
      if (cVar2 == '\0') {
        return;
      }
    }
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  return;
}



// FUNCTION 1473a5878 FUN_1473a5878 body=65 status=ok
// SIG undefined FUN_1473a5878(void)

void FUN_1473a5878(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1473ad970(param_1,iVar1);
  }
  FUN_1473ad95c((longlong)iVar1 * 0x20 + *param_1,param_2);
  return;
}



// FUNCTION 1473a58ba FUN_1473a58ba body=25 status=ok
// SIG undefined FUN_1473a58ba(void)

char FUN_1473a58ba(longlong param_1)

{
  return (*(int *)(*(longlong *)(param_1 + 0x378) + 0x1a94) == 0x1002) * '\x02';
}



// FUNCTION 1473a58d4 FUN_1473a58d4 body=192 status=ok
// SIG undefined FUN_1473a58d4(void)

void FUN_1473a58d4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    return;
  }
  lVar7 = 0;
  bVar4 = false;
  do {
    uVar5 = (uint)lVar7;
    lVar7 = (longlong)(int)uVar5;
    lVar1 = *param_1 + lVar7 * 8;
    lVar9 = 0;
    while (*(longlong *)(lVar1 + lVar9 * 8) != *param_2) {
      lVar2 = lVar7 + lVar9;
      lVar9 = lVar9 + 1;
      if ((longlong)iVar3 <= lVar2 + 1) {
        if (!bVar4) {
          return;
        }
        goto LAB_1473a5980;
      }
    }
    iVar8 = (int)lVar9;
    if (~uVar5 + iVar3 != iVar8) {
      iVar6 = (~uVar5 + iVar3) - iVar8;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      memmove((void *)(lVar1 + lVar9 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar6) * 8),
              (longlong)iVar6 << 3);
      iVar3 = (int)param_1[1];
    }
    lVar7 = lVar7 + lVar9;
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 1) = iVar3;
    bVar4 = true;
  } while ((int)(uVar5 + iVar8) < iVar3);
LAB_1473a5980:
  FUN_1473ae17e(param_1);
  return;
}



// FUNCTION 1473a5994 FUN_1473a5994 body=715 status=ok
// SIG undefined FUN_1473a5994(void)

void FUN_1473a5994(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1473a5c60(param_2,0);
  if (0 < (int)param_1[0x73]) {
    local_c0 = param_1 + 0x4e;
    local_d0 = param_1 + 2;
    uVar12 = 0;
    local_b8 = param_2;
    do {
      uVar16 = 0;
      if ((ulonglong)*(uint *)(param_1 + 0x2d) != 0) {
        uVar6 = 0;
        uVar16 = 0;
        do {
          if (uVar12 == *(uint *)(param_1 + uVar6 + 0x2e)) {
            uVar16 = uVar16 | *(uint *)((longlong)param_1 + uVar6 * 8 + 0x16c);
          }
          uVar6 = uVar6 + 1;
        } while (*(uint *)(param_1 + 0x2d) != uVar6);
      }
      lVar15 = (longlong)*(int *)(param_1[0x72] + 0x18 + uVar12 * 0x20);
      if (lVar15 < 1) {
        lVar15 = 0;
        lVar13 = 0;
      }
      else {
        lVar7 = 0;
        lVar13 = 0;
        do {
          lVar13 = lVar13 + **(longlong **)
                              (*(longlong *)(param_1[0x72] + uVar12 * 0x20 + 0x10) + lVar7 * 8);
          lVar7 = lVar7 + 1;
        } while (lVar15 != lVar7);
      }
      local_b0 = local_c0[uVar12 * 2];
      local_80 = 0x100000000;
      uStack_78 = local_d0;
      local_70 = 0xffffffff;
      uStack_68 = 0;
      if ((int)param_1[5] == 0) {
        iVar11 = 0;
      }
      else {
        FUN_1449c0562(&local_80);
        iVar11 = (int)param_1[5];
      }
      uStack_88 = CONCAT44(uStack_64,uStack_68);
      local_90 = local_70;
      uVar3 = local_90;
      local_a0 = (undefined4)local_80;
      uStack_9c = local_80._4_4_;
      uStack_98 = (undefined4)uStack_78;
      uStack_94 = uStack_78._4_4_;
      local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
      local_d8 = lVar15;
      local_a8 = param_1;
      local_90 = uVar3;
      if ((local_90._4_4_ == iVar11) && (uStack_78 == local_d0)) {
        lVar17 = 0;
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        lVar17 = 0;
        iVar4 = local_90._4_4_;
        do {
          if (uVar12 == *(uint *)(param_1 +
                                 (ulonglong)*(uint *)(*local_a8 + (longlong)iVar4 * 0x38) + 0x2e)) {
            lVar8 = *local_a8 + (longlong)iVar4 * 0x38;
            lVar10 = (longlong)*(int *)(lVar8 + 0x28);
            if (lVar10 != 0) {
              lVar9 = 0;
              lVar14 = 0;
              do {
                lVar7 = lVar7 + **(longlong **)(*(longlong *)(lVar8 + 0x20) + lVar14);
                lVar14 = lVar14 + 0x10;
                lVar9 = lVar9 + -1;
              } while (lVar10 * 0x10 != lVar14);
              local_d8 = local_d8 - lVar9;
              lVar17 = lVar17 - lVar9;
            }
          }
          local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_9c);
          FUN_1449c0562(&local_a0);
          iVar4 = local_90._4_4_;
        } while (local_a8 != param_1 ||
                 ((longlong *)CONCAT44(uStack_94,uStack_98) != local_d0 || local_90._4_4_ != iVar11)
                );
      }
      plVar2 = local_b8;
      lVar10 = (longlong)(int)local_b8[1];
      uVar5 = (int)local_b8[1] + 1;
      *(uint *)(local_b8 + 1) = uVar5;
      if (*(uint *)((longlong)local_b8 + 0xc) < uVar5) {
        local_c8 = lVar10;
        FUN_1473ae240(local_b8,lVar10);
        lVar10 = local_c8;
      }
      lVar8 = *plVar2;
      *(longlong *)(lVar8 + lVar10 * 0x48) = lVar15;
      *(longlong *)(lVar8 + 8 + lVar10 * 0x48) = lVar17;
      *(longlong *)(lVar8 + 0x10 + lVar10 * 0x48) = lVar7;
      *(longlong *)(lVar8 + 0x18 + lVar10 * 0x48) = lVar13;
      *(longlong *)(lVar8 + 0x20 + lVar10 * 0x48) = local_b0;
      *(longlong *)(lVar8 + 0x28 + lVar10 * 0x48) = local_d8;
      puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar10 * 0x48);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(uint *)(lVar8 + 0x40 + lVar10 * 0x48) = uVar16;
      uVar12 = uVar12 + 1;
    } while ((longlong)uVar12 < (longlong)(int)param_1[0x73]);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473a5c60 FUN_1473a5c60 body=110 status=ok
// SIG undefined FUN_1473a5c60(void)

void FUN_1473a5c60(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473ae240(param_1,iVar1);
    }
    FUN_1473ae219((longlong)iVar1 * 0x48 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1473ae2d4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473a5cd0 FUN_1473a5cd0 body=60 status=ok
// SIG undefined FUN_1473a5cd0(void)

longlong FUN_1473a5cd0(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((ulonglong)*(uint *)(param_1 + 0x26c) == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = 0;
    lVar1 = 0;
    do {
      if ((*(byte *)(param_1 + 0x278 + lVar2) & 1) == param_2) {
        lVar1 = lVar1 + *(longlong *)(param_1 + 0x270 + lVar2);
      }
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)*(uint *)(param_1 + 0x26c) << 4 != lVar2);
  }
  return lVar1;
}



// FUNCTION 1473a5d0c FUN_1473a5d0c body=143 status=ok
// SIG undefined FUN_1473a5d0c(void)

void FUN_1473a5d0c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x21) & 2) == 0) {
    local_30 = 6;
    local_2c = 0;
    local_24 = 0;
    local_20 = *(undefined8 *)(param_1 + 0x10);
    local_18 = param_2;
    local_10 = param_3;
    iVar1 = (*DAT_14ca78eb0)(*(undefined8 *)(param_1 + 8),1,&local_30);
    if (iVar1 != 0) {
      FUN_1431b4552(iVar1,"VulkanRHI::vkFlushMappedMemoryRanges(DeviceHandle, 1, &Range)",
                    ".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x53a);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a5d9c FUN_1473a5d9c body=143 status=ok
// SIG undefined FUN_1473a5d9c(void)

void FUN_1473a5d9c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x21) & 2) == 0) {
    local_30 = 6;
    local_2c = 0;
    local_24 = 0;
    local_20 = *(undefined8 *)(param_1 + 0x10);
    local_18 = param_2;
    local_10 = param_3;
    iVar1 = (*DAT_14ca78eb8)(*(undefined8 *)(param_1 + 8),1,&local_30);
    if (iVar1 != 0) {
      FUN_1431b4552(iVar1,"VulkanRHI::vkInvalidateMappedMemoryRanges(DeviceHandle, 1, &Range)",
                    ".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x549);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a5e2c FUN_1473a5e2c body=339 status=ok
// SIG undefined FUN_1473a5e2c(void)

uint FUN_1473a5e2c(longlong *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *_Src;
  longlong lVar4;
  
  _Src = (int *)*param_1;
  if (param_3 == 0) {
    if (*_Src == param_2[1] + *param_2) {
      *_Src = *param_2;
      _Src[1] = _Src[1] + param_2[1];
    }
    else {
      uVar1 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar1 + 1;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
        FUN_1473ae382(param_1,(ulonglong)uVar1);
        _Src = (int *)*param_1;
      }
      memmove(_Src + 2,_Src,(ulonglong)uVar1 << 3);
      *(undefined8 *)*param_1 = *(undefined8 *)param_2;
    }
    param_3 = 0;
  }
  else {
    lVar4 = (longlong)(int)param_3;
    iVar3 = _Src[lVar4 * 2 + -2];
    iVar2 = *param_2;
    if (_Src[lVar4 * 2 + -1] + iVar3 == iVar2) {
      iVar2 = param_2[1] + _Src[lVar4 * 2 + -1];
      _Src[(lVar4 + -1) * 2 + 1] = iVar2;
      if (iVar3 + iVar2 == _Src[lVar4 * 2]) {
        _Src[(lVar4 + -1) * 2 + 1] = iVar2 + _Src[lVar4 * 2 + 1];
        iVar3 = (int)param_1[1];
        if (~param_3 + iVar3 != 0) {
          memmove((void *)(*param_1 + lVar4 * 8),(void *)(*param_1 + lVar4 * 8 + 8),
                  (longlong)(int)(~param_3 + iVar3) << 3);
          iVar3 = (int)param_1[1];
        }
        param_3 = param_3 - 1;
        *(int *)(param_1 + 1) = iVar3 + -1;
        FUN_1473ae408(param_1);
      }
    }
    else if (param_2[1] + iVar2 == _Src[lVar4 * 2]) {
      _Src[lVar4 * 2] = iVar2;
      _Src[lVar4 * 2 + 1] = _Src[lVar4 * 2 + 1] + param_2[1];
    }
    else {
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1473ae382(param_1,iVar3);
        _Src = (int *)*param_1;
      }
      memmove(_Src + lVar4 * 2 + 2,_Src + lVar4 * 2,(ulonglong)(iVar3 - param_3) << 3);
      *(undefined8 *)(*param_1 + lVar4 * 8) = *(undefined8 *)param_2;
    }
  }
  return param_3;
}



// FUNCTION 1473a5f80 FUN_1473a5f80 body=103 status=ok
// SIG undefined FUN_1473a5f80(void)

int FUN_1473a5f80(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (int)param_1[1];
  lVar4 = (longlong)iVar3;
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + -4 + lVar4 * 8);
  if (*(int *)(lVar2 + -8 + lVar4 * 8) + iVar1 == *param_2) {
    *(int *)(lVar2 + -4 + lVar4 * 8) = iVar1 + param_2[1];
    iVar3 = iVar3 + -1;
  }
  else {
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_1473ae382(param_1,iVar3);
      lVar2 = *param_1;
    }
    *(undefined8 *)(lVar2 + lVar4 * 8) = *(undefined8 *)param_2;
  }
  return iVar3;
}



// FUNCTION 1473a5fe8 FUN_1473a5fe8 body=121 status=ok
// SIG undefined FUN_1473a5fe8(void)

void FUN_1473a5fe8(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  lVar2 = (longlong)iVar1;
  if (lVar2 < 1) {
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1473ae382(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + lVar2 * 8) = *(undefined8 *)param_2;
    return;
  }
  lVar3 = 0;
  do {
    if (*param_2 < *(uint *)(*param_1 + lVar3 * 8)) {
      FUN_1473a5e2c(param_1,param_2);
      return;
    }
    lVar3 = lVar3 + 1;
  } while (lVar2 != lVar3);
  FUN_1473a5f80(param_1,param_2);
  return;
}



// FUNCTION 1473a6062 FUN_1473a6062 body=127 status=ok
// SIG undefined FUN_1473a6062(void)

ulonglong FUN_1473a6062(longlong param_1,undefined4 *param_2,int param_3,uint param_4,char param_5)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_5 == '\0') {
    if ((longlong)*(int *)(param_1 + 0x50) != 0) {
      lVar3 = 0;
      uVar2 = 0;
      do {
        if ((((uint)(param_3 == 0) + (uint)(param_3 == 1) * 2 & ~*(uint *)(param_1 + 0xc + lVar3))
             == 0) && ((ulonglong)param_4 <= *(ulonglong *)(param_1 + lVar3))) {
          puVar1 = (undefined4 *)(param_1 + lVar3);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          goto LAB_1473a607e;
        }
        uVar2 = (ulonglong)((int)uVar2 + 1);
        lVar3 = lVar3 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x50) * 0x10 != lVar3);
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (longlong)*(int *)(param_1 + 0x50) - 1;
    puVar1 = (undefined4 *)(param_1 + uVar2 * 0x10);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
LAB_1473a607e:
    *param_2 = uVar4;
    param_2[1] = uVar5;
    param_2[2] = uVar6;
    param_2[3] = uVar7;
  }
  return uVar2;
}



// FUNCTION 1473a60e2 FUN_1473a60e2 body=163 status=ok
// SIG undefined FUN_1473a60e2(void)

longlong FUN_1473a60e2(longlong param_1,longlong *param_2,uint param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x50) = 0x500000000;
  *(longlong **)(param_1 + 0x58) = param_2;
  *(short *)(param_1 + 0x60) = (short)param_3;
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(*param_2 + 0x178 + (ulonglong)param_3 * 8);
  *(undefined2 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x68) = param_4;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x80),4000);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  return param_1;
}



// FUNCTION 1473a6186 FUN_1473a6186 body=309 status=ok
// SIG undefined FUN_1473a6186(void)

void FUN_1473a6186(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  plVar5 = (longlong *)(param_1 + 0xa8);
  lVar7 = 0xa8;
  bVar4 = 0;
  do {
    if ((bVar4 & 1) == 0) {
      if ((longlong)(int)plVar5[1] < 1) {
        bVar4 = 0;
      }
      else {
        uVar6 = (longlong)(int)plVar5[1] + 1;
        bVar4 = 0;
        do {
          lVar1 = *(longlong *)(*plVar5 + -0x10 + uVar6 * 8);
          bVar2 = FUN_1473a7004(lVar1);
          FUN_143197808(**(longlong **)(param_1 + 0x58) + 8,lVar1 + 0x40);
          if (lVar1 != 0) {
            FUN_14319d75a(lVar1);
            FUN_1400020a8(lVar1);
          }
          bVar4 = bVar4 | bVar2 ^ 1;
          uVar6 = uVar6 - 1;
        } while (1 < uVar6);
      }
      *(undefined4 *)(plVar5 + 1) = 0;
      if (*(int *)((longlong)plVar5 + 0xc) < 0) {
        FUN_1473ae600(plVar5);
      }
      if (lVar7 == 0xe8) {
        if ((bVar4 & 1) == 0) goto LAB_1473a6270;
LAB_1473a6250:
        FUN_14319c744(**(longlong **)(param_1 + 0x58) + 0x3d8,1);
        uVar3 = FUN_144a82cde();
        FUN_14626bd28(uVar3);
LAB_1473a6270:
        if (*(longlong *)(param_1 + 0xf8) != 0) {
          FUN_1400020a8();
        }
        lVar7 = 0;
        do {
          if (*(longlong *)(param_1 + 0xe8 + lVar7) != 0) {
            FUN_1400020a8();
          }
          lVar7 = lVar7 + -0x10;
        } while (lVar7 != -0x50);
                    /* WARNING: Could not recover jumptable at 0x0001473a62b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
        return;
      }
    }
    else {
      bVar4 = 1;
      if (lVar7 == 0xe8) goto LAB_1473a6250;
    }
    lVar7 = lVar7 + 0x10;
    plVar5 = (longlong *)(param_1 + lVar7);
  } while( true );
}



// FUNCTION 1473a62bc FUN_1473a62bc body=134 status=ok
// SIG undefined FUN_1473a62bc(void)

void FUN_1473a62bc(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1473a6352(*(undefined8 *)(param_1 + 0x58));
  local_20 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  FUN_143197808(**(longlong **)(param_1 + 0x58) + 8);
  *(longlong *)(param_1 + 0x70) =
       *(longlong *)(param_1 + 0x70) - (ulonglong)*(uint *)(param_2 + 0x48);
  if (param_2 != 0) {
    FUN_14319d75a(param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a6352 FUN_1473a6352 body=94 status=ok
// SIG undefined FUN_1473a6352(void)

void FUN_1473a6352(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  if (*(char *)(param_2 + 0x7e) == '\x01') {
    *(longlong *)(param_1 + 0x168) =
         *(longlong *)(param_1 + 0x168) - **(longlong **)(param_2 + 0x40);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  uVar1 = *(uint *)(param_2 + 0x78);
  *(undefined8 *)(*(longlong *)(param_1 + 0x150) + (longlong)(int)uVar1 * 8) =
       *(undefined8 *)(param_1 + 0x160);
  *(ulonglong *)(param_1 + 0x160) = (ulonglong)uVar1;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  return;
}



// FUNCTION 1473a63b0 FUN_1473a63b0 body=277 status=ok
// SIG undefined FUN_1473a63b0(void)

void FUN_1473a63b0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  *(undefined4 *)(param_2 + 0x50) = DAT_14c7590b0;
  if (*(char *)(param_2 + 0x28) == '\x04') {
    iVar1 = *(int *)(param_1 + 0x100);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xf8);
      piVar7 = (int *)(param_1 + 0x100);
      lVar6 = 0;
      uVar2 = 0;
      do {
        if (*(longlong *)(lVar3 + lVar6 * 8) == param_2) goto LAB_1473a6479;
        uVar2 = uVar2 + 8;
        lVar6 = lVar6 + 1;
      } while ((longlong)iVar1 << 3 != uVar2);
    }
  }
  else {
    lVar3 = (ulonglong)*(byte *)(param_2 + 0x7d) * 0x10;
    iVar1 = *(int *)(param_1 + 0xb0 + lVar3);
    if ((longlong)iVar1 != 0) {
      lVar3 = param_1 + lVar3;
      piVar7 = (int *)(lVar3 + 0xb0);
      lVar3 = *(longlong *)(lVar3 + 0xa8);
      lVar6 = 0;
      uVar2 = 0;
      do {
        if (*(longlong *)(lVar3 + lVar6 * 8) == param_2) goto LAB_1473a6479;
        uVar2 = uVar2 + 8;
        lVar6 = lVar6 + 1;
      } while ((longlong)iVar1 << 3 != uVar2);
    }
  }
LAB_1473a642c:
  FUN_1473a62bc(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001473a6443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return;
LAB_1473a6479:
  iVar4 = (int)lVar6;
  if (iVar4 != -1) {
    if (iVar1 + -1 != iVar4) {
      iVar4 = (iVar1 + -1) - iVar4;
      iVar5 = 1;
      if (iVar4 < 1) {
        iVar5 = iVar4;
      }
      memmove((void *)(lVar3 + (longlong)(int)(uVar2 >> 3) * 8),
              (void *)(lVar3 + (longlong)(iVar1 - iVar5) * 8),(longlong)iVar5 << 3);
      iVar1 = *piVar7;
    }
    *piVar7 = iVar1 + -1;
  }
  goto LAB_1473a642c;
}



// FUNCTION 1473a64c6 FUN_1473a64c6 body=147 status=ok
// SIG undefined FUN_1473a64c6(void)

undefined8 FUN_1473a64c6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  lVar2 = 3;
  uVar3 = 0;
  do {
    lVar4 = (longlong)*(int *)(param_1 + 0xb0 + lVar2 * 0x10);
    if (0 < lVar4) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar2 * 0x10 + param_1 + 0xa8) + lVar5 * 8);
        if ((*(char *)(lVar1 + 0x7e) == '\0') && ((*(byte *)(lVar1 + 0x7c) & 2) != 0)) {
          uVar3 = FUN_1473a655a(lVar1,param_2,param_3);
          goto LAB_1473a6531;
        }
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    bVar6 = lVar2 == 0;
    lVar2 = lVar2 + -1;
    if (bVar6) {
LAB_1473a6531:
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
      return uVar3;
    }
  } while( true );
}



// FUNCTION 1473a655a FUN_1473a655a body=150 status=ok
// SIG undefined FUN_1473a655a(void)

undefined8 FUN_1473a655a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  *(undefined1 *)(param_1 + 0x7e) = 1;
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar5 = 0;
    do {
      if ((*(int *)(lVar2 + lVar5) == 1) && (*(char *)(lVar2 + 5 + lVar5) == '\x06')) {
        plVar3 = *(longlong **)(lVar2 + 0x18 + lVar5);
        (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_3);
      }
      lVar5 = lVar5 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar5);
  }
  uVar4 = **(undefined8 **)(param_1 + 0x40);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  return uVar4;
}



// FUNCTION 1473a65f0 FUN_1473a65f0 body=126 status=ok
// SIG undefined FUN_1473a65f0(void)

void FUN_1473a65f0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar3 = (ulonglong)*(byte *)(param_2 + 0x7d) * 0x10;
  iVar6 = *(int *)(param_1 + 0xb0 + lVar3);
  if (0 < iVar6) {
    cVar1 = *(char *)(param_2 + 0x7c);
    lVar3 = lVar3 + param_1;
    plVar4 = (longlong *)(lVar3 + 0xa8);
    uVar5 = 0xffffffff;
    uVar8 = 0;
    uVar7 = 0xffffffff;
    do {
      if (cVar1 == *(char *)(param_2 + 0x7c)) {
        lVar2 = *(longlong *)(*plVar4 + uVar8 * 8);
        if (lVar2 == param_2) {
          uVar5 = uVar8 & 0xffffffff;
        }
        else {
          uVar7 = uVar8 & 0xffffffff;
        }
        *(bool *)(lVar2 + 0x80) = lVar2 == param_2;
        iVar6 = *(int *)(lVar3 + 0xb0);
      }
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)iVar6);
    iVar6 = (int)uVar7;
    if ((int)uVar5 < iVar6) {
      *(undefined8 *)(*plVar4 + (longlong)(int)uVar5 * 8) =
           *(undefined8 *)(*plVar4 + (longlong)iVar6 * 8);
      *(longlong *)(*plVar4 + (longlong)iVar6 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 1473a666e FUN_1473a666e body=266 status=ok
// SIG undefined FUN_1473a666e(void)

undefined8
FUN_1473a666e(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined4 param_5
             ,char param_6)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  
  uVar3 = 0xffffffff;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if (((*(byte *)(param_1 + 0xc + lVar5) & 1) != 0) &&
         ((ulonglong)param_4 <= *(ulonglong *)(param_1 + lVar5))) {
        uVar3 = uVar6 & 0xffffffff;
        break;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x50) * 0x10 != lVar5);
  }
  cVar7 = (param_6 == '\x06') * '\x02';
  if (*(char *)(**(longlong **)(param_1 + 0x58) + 0x390) != '\0') {
    cVar7 = '\0';
  }
  iVar4 = *(int *)(param_1 + 0xb0 + uVar3 * 0x10);
  if (0 < iVar4) {
    param_1 = param_1 + uVar3 * 0x10;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + lVar5 * 8);
      if ((*(char *)(lVar1 + 0x7f) == '\0') && (cVar7 == *(char *)(lVar1 + 0x7c))) {
        cVar2 = FUN_1473a6778(lVar1,param_2,param_3,param_4,param_5,param_6);
        if (cVar2 != '\0') {
          return 1;
        }
        iVar4 = *(int *)(param_1 + 0xb0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  return 0;
}



// FUNCTION 1473a6778 FUN_1473a6778 body=428 status=ok
// SIG undefined FUN_1473a6778(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1473a6778(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4,
                       uint param_5,byte param_6)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  if ((*(char *)(param_1 + 0x7e) == '\0') && (*(char *)(param_1 + 0x7f) == '\0')) {
    uVar8 = *(uint *)(param_1 + 0x98);
    if (param_5 < *(uint *)(param_1 + 0x4c)) {
      param_5 = *(uint *)(param_1 + 0x4c);
    }
    if (0 < (int)uVar8) {
      lVar6 = *(longlong *)(param_1 + 0x90);
      uVar13 = 0;
      do {
        iVar3 = *(int *)(lVar6 + uVar13 * 8);
        uVar4 = *(uint *)(lVar6 + 4 + uVar13 * 8);
        uVar11 = (param_5 - 1) + iVar3 & -param_5;
        uVar12 = (uVar11 - iVar3) + param_4;
        if (uVar4 >= uVar12) {
          if (uVar4 < uVar12 || uVar4 - uVar12 == 0) {
            if (uVar8 - 1 != (int)uVar13) {
              memmove((void *)(lVar6 + uVar13 * 8),(void *)(lVar6 + uVar13 * 8 + 8),
                      (longlong)(int)((uVar8 - 1) - (int)uVar13) << 3);
              uVar8 = *(uint *)(param_1 + 0x98);
            }
            *(uint *)(param_1 + 0x98) = uVar8 - 1;
          }
          else {
            *(uint *)(lVar6 + 4 + uVar13 * 8) = uVar4 - uVar12;
            *(uint *)(lVar6 + uVar13 * 8) = uVar11 + param_4;
          }
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + (ulonglong)uVar12;
          iVar9 = FUN_1473a826e(param_1);
          uVar5 = *(undefined4 *)(param_1 + 0x70);
          uVar2 = *(undefined2 *)(param_1 + 0x78);
          uVar7 = *(undefined8 *)(param_1 + 0x68);
          *(byte *)((longlong)param_2 + 0x1b) = *(byte *)(param_1 + 0x28) | 0x80;
          *(byte *)((longlong)param_2 + 0x1a) = param_6;
          *(int *)((longlong)param_2 + 0xc) = param_4;
          *(uint *)(param_2 + 2) = uVar11;
          *(undefined2 *)(param_2 + 3) = uVar2;
          *(int *)((longlong)param_2 + 0x14) = iVar9;
          *param_2 = uVar7;
          *(undefined4 *)(param_2 + 1) = uVar5;
          piVar1 = (int *)(param_1 + (ulonglong)param_6 * 4);
          *piVar1 = *piVar1 + uVar12;
          _DAT_14ca77fac = _DAT_14ca77fac + 1;
          lVar6 = *(longlong *)(param_1 + 0xa0);
          lVar10 = (longlong)iVar9;
          *(undefined4 *)(lVar6 + lVar10 * 0x28) = 1;
          *(byte *)(lVar6 + 4 + lVar10 * 0x28) = *(byte *)((longlong)param_2 + 0x1b) & 0x7f;
          *(undefined1 *)(lVar6 + 5 + lVar10 * 0x28) = *(undefined1 *)((longlong)param_2 + 0x1a);
          *(undefined4 *)(lVar6 + 8 + lVar10 * 0x28) = *(undefined4 *)((longlong)param_2 + 0xc);
          *(uint *)(lVar6 + 0xc + lVar10 * 0x28) = uVar12;
          *(int *)(lVar6 + 0x10 + lVar10 * 0x28) = iVar3;
          *(undefined8 *)(lVar6 + 0x18 + lVar10 * 0x28) = param_3;
          *(uint *)(lVar6 + 0x20 + lVar10 * 0x28) = param_5;
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
          *(undefined1 *)(param_1 + 0x80) = 0;
          uVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          goto LAB_1473a680d;
        }
        uVar13 = uVar13 + 1;
      } while (uVar8 != uVar13);
    }
  }
  uVar13 = 0;
LAB_1473a680d:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  return uVar13 & 0xffffffff;
}



// FUNCTION 1473a6924 FUN_1473a6924 body=286 status=ok
// SIG undefined FUN_1473a6924(void)

undefined8 *
FUN_1473a6924(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4,
             longlong *param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 5) = param_2;
  param_1[6] = param_3;
  *(undefined4 *)(param_1 + 7) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = param_5;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xe) = param_7;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff7fffffff;
  *(undefined1 *)((longlong)param_1 + 0x7c) = param_4;
  *(undefined2 *)((longlong)param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x17),4000);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar2 = *param_5;
  *(int *)(param_1 + 9) = (int)lVar2;
  *(byte *)((longlong)param_1 + 0x7c) = *(byte *)((longlong)param_1 + 0x7c) & 0xfe | param_5[3] != 0
  ;
  iVar1 = *(int *)(param_1 + 0x13);
  *(uint *)(param_1 + 0x13) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x9c) < iVar1 + 1U) {
    FUN_1473ae382(param_1 + 0x12,iVar1);
  }
  *(longlong *)(param_1[0x12] + (longlong)iVar1 * 8) = lVar2 << 0x20;
  return param_1;
}



// FUNCTION 1473a6a42 FUN_1473a6a42 body=162 status=ok
// SIG undefined FUN_1473a6a42(void)

void FUN_1473a6a42(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x160) == -1) {
    iVar1 = *(int *)(param_1 + 0x158);
    *(int *)(param_2 + 0x78) = iVar1;
    *(uint *)(param_1 + 0x158) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x15c) < iVar1 + 1U) {
      FUN_1473ae4a4((longlong *)(param_1 + 0x150),iVar1);
    }
    plVar2 = (longlong *)((longlong)iVar1 * 8 + *(longlong *)(param_1 + 0x150));
  }
  else {
    iVar1 = (int)*(longlong *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar1 * 8);
    *(int *)(param_2 + 0x78) = iVar1;
    plVar2 = (longlong *)((longlong)iVar1 * 8 + *(longlong *)(param_1 + 0x150));
  }
  *plVar2 = param_2;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  return;
}



// FUNCTION 1473a6ae4 FUN_1473a6ae4 body=426 status=ok
// SIG undefined FUN_1473a6ae4(void)

undefined4
FUN_1473a6ae4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
             ,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  uint local_80;
  int local_78;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  local_88 = &local_68;
  local_68 = 0x3b9cba19;
  local_64 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_58 = (undefined4)param_4;
  uStack_54 = (undefined4)((ulonglong)param_4 >> 0x20);
  local_78 = CONCAT31(local_78._1_3_,param_8);
  local_80 = 0x3f800000;
  lVar3 = FUN_14319c19c(**(longlong **)(param_1 + 0x58) + 8,1,(ulonglong)param_5,
                        *(undefined2 *)(param_1 + 0x60));
  uVar2 = 0;
  iVar5 = 0;
  if (lVar3 != 0) {
    if (DAT_14c760db4 < 2) {
      LOCK();
      UNLOCK();
      iVar5 = (int)DAT_14ca788f0 + 1;
      DAT_14ca788f0 = DAT_14ca788f0 + 1;
    }
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    lVar4 = FUN_14001cc68(0xe0,0x10);
    local_80 = (uint)*(ushort *)(param_1 + 0x60);
    local_88 = (undefined4 *)lVar3;
    local_78 = iVar5;
    FUN_1473a6924(lVar4,4,*(undefined8 *)(param_1 + 0x58),0);
    FUN_1473a6a42(*(undefined8 *)(param_1 + 0x58),lVar4);
    *(undefined1 *)(lVar4 + 0x7d) = 0xff;
    iVar5 = *(int *)(param_1 + 0x100);
    *(uint *)(param_1 + 0x100) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x104) < iVar5 + 1U) {
      FUN_1473ae4a4(param_1 + 0xf8,iVar5);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar5 * 8) = lVar4;
    *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + (ulonglong)param_5;
    uVar1 = *(uint *)(param_1 + 0x6c);
    if (*(uint *)(param_1 + 0x6c) < param_5) {
      uVar1 = param_5;
    }
    *(uint *)(param_1 + 0x6c) = uVar1;
    local_80 = CONCAT31(local_80._1_3_,param_7);
    local_88 = (undefined4 *)CONCAT44(local_88._4_4_,param_6);
    uVar2 = FUN_1473a6778(lVar4,param_2,param_3,param_5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a6c90 FUN_1473a6c90 body=37 status=ok
// SIG undefined FUN_1473a6c90(void)

void FUN_1473a6c90(LPCRITICAL_SECTION param_1)

{
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001473a6cae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 1473a6cb6 FUN_1473a6cb6 body=392 status=ok
// SIG undefined FUN_1473a6cb6(void)

void FUN_1473a6cb6(longlong param_1,char param_2)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong uVar10;
  
  if (param_2 == '\0') {
    if (DAT_14ca77fa8 <= DAT_14c7590b0) {
      plVar1 = (longlong *)(param_1 + 0x1a0);
      uVar3 = *(uint *)(param_1 + 0x1a8);
      uVar8 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        iVar5 = DAT_14c7590b0 - 3;
        lVar7 = 0;
        uVar10 = 0;
        do {
          uVar4 = *(ulonglong *)(*plVar1 + 0x20 + lVar7);
          if ((ulonglong)(longlong)iVar5 <= uVar4) {
            DAT_14ca77fa8 = (int)uVar4 + 4;
            goto LAB_1473a6da7;
          }
          FUN_1473a73fe(param_1,*plVar1 + lVar7,1);
          uVar10 = uVar10 + 1;
          lVar7 = lVar7 + 0x28;
        } while (uVar8 != uVar10);
        uVar10 = (ulonglong)uVar3;
LAB_1473a6da7:
        iVar5 = (int)uVar10;
        uVar6 = uVar3 - iVar5;
        uVar8 = (ulonglong)uVar6;
        if (iVar5 != 0 && (uVar6 != 0 && iVar5 <= (int)uVar3)) {
          memmove(*(void **)(param_1 + 0x1a0),
                  (void *)((longlong)*(void **)(param_1 + 0x1a0) + (uVar10 & 0xffffffff) * 0x28),
                  (ulonglong)uVar6 * 0x28);
          iVar5 = *(int *)(param_1 + 0x1a8);
          if ((int)uVar6 < iVar5) {
            lVar7 = (ulonglong)uVar6 * 0x28 + 0x1b;
            do {
              bVar2 = *(byte *)(*plVar1 + lVar7);
              bVar9 = bVar2 & 0x7f;
              if ((char)bVar2 < '\0' && bVar9 != 0) {
                *(byte *)(*plVar1 + lVar7) = bVar9;
                iVar5 = *(int *)(param_1 + 0x1a8);
              }
              uVar6 = uVar6 + 1;
              lVar7 = lVar7 + 0x28;
            } while ((int)uVar6 < iVar5);
          }
        }
      }
      FUN_1473a7fd6(plVar1,uVar8);
      return;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1a8);
    if (0 < (longlong)iVar5) {
      lVar7 = 0;
      do {
        FUN_1473a73fe(param_1,*(longlong *)(param_1 + 0x1a0) + lVar7,1);
        lVar7 = lVar7 + 0x28;
      } while ((longlong)iVar5 * 0x28 != lVar7);
    }
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    if (*(int *)(param_1 + 0x1ac) != 0) {
      FUN_1473ae6e8(param_1 + 0x1a0);
    }
    DAT_14ca77fa8 = 0;
  }
  return;
}



// FUNCTION 1473a6e3e FUN_1473a6e3e body=452 status=ok
// SIG undefined FUN_1473a6e3e(void)

void FUN_1473a6e3e(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  LPCRITICAL_SECTION local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (LPCRITICAL_SECTION)(param_1 + 4);
  local_58 = 0;
  uStack_50 = 0;
  EnterCriticalSection(local_60);
  plVar8 = param_1 + 0x19;
  lVar7 = 200;
  local_68 = param_1;
  do {
    iVar4 = (int)plVar8[1];
    if (0 < iVar4) {
      iVar5 = -1;
      lVar9 = 0;
      do {
        uVar2 = uStack_50;
        lVar1 = *(longlong *)(*plVar8 + lVar9 * 8);
        if (((char)param_2 != '\0') || (*(int *)(lVar1 + 0x50) + 3U < DAT_14c7590b0)) {
          lVar10 = (longlong)(int)uStack_50;
          uVar3 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
          if (uStack_50._4_4_ < uVar3) {
            FUN_1473ae4a4(&local_58,uVar2 & 0xffffffff);
          }
          *(longlong *)(local_58 + lVar10 * 8) = lVar1;
          iVar4 = (int)plVar8[1];
          iVar6 = iVar5 + iVar4;
          if (iVar6 != 0) {
            if (0 < iVar6) {
              iVar6 = 1;
            }
            memmove((void *)(*plVar8 + lVar9 * 8),(void *)(*plVar8 + (longlong)(iVar4 - iVar6) * 8),
                    (longlong)iVar6 << 3);
            iVar4 = (int)plVar8[1];
          }
          iVar4 = iVar4 + -1;
          *(int *)(plVar8 + 1) = iVar4;
        }
        lVar9 = lVar9 + 1;
        iVar5 = iVar5 + -1;
      } while (lVar9 < iVar4);
    }
    plVar8 = (longlong *)((longlong)local_68 + lVar7 + 0x10);
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x148);
  LeaveCriticalSection(local_60);
  if (0 < (int)uStack_50) {
    lVar7 = 0;
    do {
      lVar9 = *(longlong *)(local_58 + lVar7 * 8);
      if (*(longlong *)(lVar9 + 0x68) != 0) {
        (*DAT_14ca78e20)(*(undefined8 *)*local_68,*(longlong *)(lVar9 + 0x68),0);
        *(undefined8 *)(lVar9 + 0x68) = 0;
      }
      FUN_1473a62bc(*(undefined8 *)(local_68[2] + (longlong)*(int *)(lVar9 + 0x38) * 8),lVar9);
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_50);
  }
  FUN_14319be54(local_68[1],param_2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473a7004 FUN_1473a7004 body=68 status=ok
// SIG undefined FUN_1473a7004(void)

ulonglong FUN_1473a7004(longlong param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  if ((*(int *)(param_1 + 0x98) == 1) && (*(int *)(param_1 + 0x84) == 0)) {
    uVar1 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  return uVar1 & 0xffffffff;
}



// FUNCTION 1473a7048 FUN_1473a7048 body=675 status=ok
// SIG undefined FUN_1473a7048(void)

void FUN_1473a7048(undefined8 *param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  char cVar8;
  byte bVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  
  FUN_1473a6e3e(param_1,0);
  if ((longlong)*(int *)(param_1 + 3) == 0) goto LAB_1473a729b;
  plVar16 = (longlong *)param_1[2];
  uVar3 = *(uint *)(param_1[1] + 0x3a0);
  plVar1 = plVar16 + *(int *)(param_1 + 3);
  lVar12 = 0;
  uVar14 = 0;
  lVar19 = 0;
  uVar17 = 0;
  do {
    lVar5 = *plVar16;
    if (uVar3 == *(ushort *)(lVar5 + 0x62)) {
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar5 + 0x80);
      EnterCriticalSection(lpCriticalSection);
      uVar6 = *(ulonglong *)(lVar5 + 0x70);
      if (DAT_14c760c48 == 0) {
LAB_1473a71e9:
        bVar9 = 0;
      }
      else {
        lVar13 = 0xa8;
        do {
          lVar11 = (longlong)*(int *)(lVar5 + 8 + lVar13);
          if (lVar11 != 0) {
            plVar15 = *(longlong **)(lVar5 + lVar13);
            plVar2 = plVar15 + lVar11;
            do {
              lVar11 = *plVar15;
              if ((*(byte *)(lVar11 + 0x7c) & 2) == 0) {
                iVar4 = *(int *)(lVar11 + 0xa8);
                bVar9 = 1;
                if ((longlong)iVar4 == 0) goto LAB_1473a7173;
                lVar11 = *(longlong *)(lVar11 + 0xa0);
                lVar18 = 0;
                while ((*(int *)(lVar11 + lVar18) != 1 ||
                       ((puVar7 = *(undefined8 **)(lVar11 + 0x18 + lVar18),
                        puVar7 != (undefined8 *)0x0 &&
                        (cVar8 = (**(code **)*puVar7)(), cVar8 != '\0'))))) {
                  lVar18 = lVar18 + 0x28;
                  if ((longlong)iVar4 * 0x28 == lVar18) goto LAB_1473a7173;
                }
              }
              plVar15 = plVar15 + 1;
            } while (plVar15 != plVar2);
          }
          lVar13 = lVar13 + 0x10;
        } while (lVar13 != 0xf8);
        bVar9 = 0;
LAB_1473a7173:
        if ((bool)(bVar9 & uVar17 < uVar6)) {
          lVar19 = lVar5;
          uVar17 = uVar6;
        }
        if (DAT_14c760c48 != 0) {
          lVar13 = 0xa8;
          do {
            lVar11 = (longlong)*(int *)(lVar5 + 8 + lVar13);
            if (lVar11 != 0) {
              lVar18 = 0;
              do {
                if ((*(byte *)(*(longlong *)(*(longlong *)(lVar5 + lVar13) + lVar18) + 0x7c) & 2) !=
                    0) {
                  bVar9 = 1;
                  goto LAB_1473a71eb;
                }
                lVar18 = lVar18 + 8;
              } while (lVar11 * 8 != lVar18);
            }
            lVar13 = lVar13 + 0x10;
          } while (lVar13 != 0xf8);
          goto LAB_1473a71e9;
        }
        bVar9 = 0;
      }
LAB_1473a71eb:
      if ((bool)(bVar9 & uVar14 < uVar6)) {
        lVar12 = lVar5;
        uVar14 = uVar6;
      }
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    plVar16 = plVar16 + 1;
  } while (plVar16 != plVar1);
  if (lVar12 != 0) {
    if (DAT_14ca77f48 == 0) {
      bVar9 = FUN_14319e4f6(param_1);
      if ((bVar9 & -1 < (int)uVar3) != 0) goto LAB_1473a72c7;
    }
    else if (-1 < (int)uVar3) {
LAB_1473a72c7:
      DAT_14ca77f48 = 0;
      lVar12 = FUN_1473a64c6(lVar12,*param_1,param_2);
      param_1[0x2d] = param_1[0x2d] + lVar12;
    }
  }
  if (lVar19 != 0) {
    uVar10 = 1;
    if (DAT_14ca77f70 != 0) {
      FUN_14319c744(param_1,1);
      uVar10 = 0x7fffffff;
    }
    FUN_14319d7a2(lVar19,*param_1,param_2,uVar10);
    if (DAT_14ca77f70 != 0) {
      FUN_14319c744(param_1,1);
      DAT_14ca77f70 = 0;
    }
  }
LAB_1473a729b:
  FUN_14319be54(param_1[1],0);
  return;
}



// FUNCTION 1473a73fe FUN_1473a73fe body=218 status=ok
// SIG undefined FUN_1473a73fe(void)

void FUN_1473a73fe(longlong *param_1,undefined8 *param_2,byte param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_3 & 1) != 0) {
    if ((byte)((*(byte *)((longlong)param_2 + 0x1b) & 0x7f) - 1) < 4) {
      uVar1 = *(ushort *)(param_2 + 3);
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x29));
      uVar2 = *(undefined8 *)(param_1[0x2a] + (ulonglong)uVar1 * 8);
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x29));
      FUN_14319e660(uVar2,param_2);
    }
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    return;
  }
  uVar1 = *(ushort *)(param_2 + 3);
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x29));
  lVar3 = *(longlong *)(param_1[0x2a] + (ulonglong)uVar1 * 8);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x29));
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0xb8));
  *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + (longlong)*(int *)((longlong)param_2 + 0x14) * 0x28)
       = 3;
  if ((LPCRITICAL_SECTION)(lVar3 + 0xb8) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0xb8));
  }
  FUN_1473a74d8(*param_1 + 0x590,param_2);
  return;
}



// FUNCTION 1473a74d8 FUN_1473a74d8 body=386 status=ok
// SIG undefined FUN_1473a74d8(void)

void FUN_1473a74d8(longlong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  byte bVar15;
  longlong lVar16;
  
  bVar15 = *(byte *)((longlong)param_2 + 0x1b) & 0x7f;
  if ((char)*(byte *)((longlong)param_2 + 0x1b) < '\0' && bVar15 != 0) {
    *(byte *)((longlong)param_2 + 0x1b) = bVar15;
    lVar16 = *(longlong *)(*param_1 + 0x1a70);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar16 + 0x18));
    uVar10 = *(undefined8 *)(lVar16 + 0x40);
    uVar11 = *(undefined8 *)(lVar16 + 0x48);
    if ((LPCRITICAL_SECTION)(lVar16 + 0x18) != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar16 + 0x18));
    }
    uVar14 = DAT_14ca77fd0;
    uVar12 = *param_2;
    uVar4 = *(undefined4 *)(param_2 + 1);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar6 = *(undefined4 *)(param_2 + 2);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar3 = *(undefined2 *)(param_2 + 3);
    uVar1 = *(undefined1 *)((longlong)param_2 + 0x1a);
    uVar2 = *(undefined1 *)((longlong)param_2 + 0x1b);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x1c);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
    iVar9 = (int)param_1[7];
    lVar16 = (longlong)iVar9;
    *(uint *)(param_1 + 7) = iVar9 + 1U;
    if (*(uint *)((longlong)param_1 + 0x3c) < iVar9 + 1U) {
      FUN_1473aeb64(param_1 + 6,iVar9);
    }
    lVar13 = param_1[6];
    *(undefined4 *)(lVar13 + lVar16 * 0x48) = 0xd;
    *(undefined4 *)(lVar13 + 4 + lVar16 * 0x48) = uVar14;
    *(undefined8 *)(lVar13 + 8 + lVar16 * 0x48) = uVar11;
    *(undefined8 *)(lVar13 + 0x10 + lVar16 * 0x48) = uVar10;
    *(undefined8 *)(lVar13 + 0x18 + lVar16 * 0x48) = 0;
    *(undefined8 *)(lVar13 + 0x20 + lVar16 * 0x48) = uVar12;
    *(undefined4 *)(lVar13 + 0x28 + lVar16 * 0x48) = uVar4;
    *(undefined4 *)(lVar13 + 0x2c + lVar16 * 0x48) = uVar5;
    *(undefined4 *)(lVar13 + 0x30 + lVar16 * 0x48) = uVar6;
    *(undefined4 *)(lVar13 + 0x34 + lVar16 * 0x48) = uVar7;
    *(undefined2 *)(lVar13 + 0x38 + lVar16 * 0x48) = uVar3;
    *(undefined1 *)(lVar13 + 0x3a + lVar16 * 0x48) = uVar1;
    *(undefined1 *)(lVar13 + 0x3b + lVar16 * 0x48) = uVar2;
    *(undefined4 *)(lVar13 + 0x3c + lVar16 * 0x48) = uVar8;
    *(undefined8 *)(lVar13 + 0x40 + lVar16 * 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001473a7631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
    return;
  }
  return;
}



// FUNCTION 1473a765a FUN_1473a765a body=321 status=ok
// SIG undefined FUN_1473a765a(void)

undefined8 *
FUN_1473a765a(undefined8 *param_1,undefined8 param_2,undefined1 param_3,longlong param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 7) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_6;
  param_1[8] = param_4;
  *(undefined4 *)(param_1 + 9) = param_9;
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_7;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = param_11;
  param_1[0xd] = param_8;
  *(undefined4 *)(param_1 + 0xe) = param_10;
  *(undefined4 *)((longlong)param_1 + 0x74) = param_12;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x7c) = param_3;
  *(undefined2 *)((longlong)param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x17),4000);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(byte *)((longlong)param_1 + 0x7c) =
       *(byte *)((longlong)param_1 + 0x7c) & 0xfe | *(longlong *)(param_4 + 0x18) != 0;
  uVar1 = *(uint *)(param_1 + 9);
  iVar2 = *(int *)(param_1 + 0x13);
  *(uint *)(param_1 + 0x13) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x9c) < iVar2 + 1U) {
    FUN_1473ae382(param_1 + 0x12,iVar2);
  }
  *(ulonglong *)(param_1[0x12] + (longlong)iVar2 * 8) = (ulonglong)uVar1 << 0x20;
  return param_1;
}



// FUNCTION 1473a779c FUN_1473a779c body=114 status=ok
// SIG undefined FUN_1473a779c(void)

uint FUN_1473a779c(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_147397a78();
  if ((uVar1 & 0x2c) == 0) {
    uVar2 = 0x10;
    if ((uVar1 & 0xc0) != 0) goto LAB_1473a77cf;
    uVar3 = DAT_14ca84f00;
    if ((uVar1 >> 0x14 & 1) == 0) {
      if ((uVar1 & 0x10) == 0) goto LAB_1473a77cf;
      uVar3 = *(uint *)(param_1 + 0xd58);
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xd60);
    if (*(uint *)(param_1 + 0xd60) < *(uint *)(param_1 + 0xd50)) {
      uVar3 = *(uint *)(param_1 + 0xd50);
    }
  }
  uVar2 = 0x10;
  if (0x10 < uVar3) {
    uVar2 = uVar3;
  }
LAB_1473a77cf:
  if ((~param_2 & 0x80008) == 0) {
    uVar2 = DAT_14ca84f04;
  }
  return uVar2;
}



// FUNCTION 1473a780e FUN_1473a780e body=195 status=ok
// SIG undefined FUN_1473a780e(void)

void FUN_1473a780e(undefined8 param_1,char param_2,int param_3,ulonglong param_4,undefined4 param_5)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  if (param_2 == '\0') {
    pwVar2 = L"?";
    if (param_3 == -2) {
      pwVar2 = L"Local";
    }
    pwVar3 = L"Host";
    if (param_3 != -1) {
      pwVar3 = pwVar2;
    }
    FUN_14319c744(param_1,CONCAT71((int7)((ulonglong)pwVar2 >> 8),1));
    uVar1 = FUN_144a82cde();
    FUN_146816410(uVar1);
    uVar1 = FUN_144a82cde();
    FUN_14742fd5e(&DAT_14ca9a3e8,uVar1);
    uVar1 = FUN_144a82cde();
    FUN_14626bd28(uVar1);
    FUN_140033559(".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xe3d,
                  L"Out of %s Memory, Requested%.2fKB MemTypeIndex=%d\n",pwVar3,(double)param_4,
                  param_5);
  }
  return;
}



// FUNCTION 1473a78d2 FUN_1473a78d2 body=142 status=ok
// SIG undefined FUN_1473a78d2(void)

void FUN_1473a78d2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return;
}



// FUNCTION 1473a7960 FUN_1473a7960 body=1037 status=ok
// SIG undefined FUN_1473a7960(void)

undefined8
FUN_1473a7960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             uint param_5,char param_6,byte param_7,undefined8 param_8,undefined4 param_9)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  uint local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  byte local_180;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [256];
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar3 = *(longlong *)(param_1 + 8);
  local_170 = param_2;
  if (((param_5 == 1) && (param_6 == '\x06')) && (*(char *)(lVar3 + 0x388) == '\0')) {
    cVar2 = FUN_14319e4f6(param_1);
    lVar3 = *(longlong *)(param_1 + 8);
    param_5 = 1;
    if (cVar2 != '\0') {
      param_5 = (uint)(*(int *)(*(longlong *)(lVar3 + 0x378) + 0x1a94) == 0x1002) * 2;
    }
  }
  uVar9 = *(uint *)(param_4 + 2);
  uVar5 = (ulonglong)*(uint *)(lVar3 + 0x168);
  uVar10 = param_5;
  if (uVar9 == 0 || uVar5 == 0) {
    if ((param_5 & 0x10) == 0) goto LAB_1473a7aa3;
  }
  else {
    uVar12 = 0;
    uVar4 = (ulonglong)uVar9;
    do {
      if (((uVar4 & 1) != 0) && ((param_5 & ~*(uint *)(lVar3 + 0x16c + uVar12 * 8)) == 0))
      goto LAB_1473a7afd;
      uVar12 = uVar12 + 1;
    } while ((uVar12 < uVar5) && (uVar7 = (uint)uVar4, uVar4 = uVar4 >> 1, 1 < uVar7));
    if ((param_5 & 0x10) == 0) {
LAB_1473a7aa3:
      FUN_144a81018(local_160,param_8);
      local_1a8 = *(undefined4 *)(param_4 + 2);
      local_190 = CONCAT44(local_190._4_4_,param_9);
      local_198 = local_58;
      local_1a0 = param_5;
      FUN_140033559(".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xb7c,
                    L"Cannot find memory type for MemSize %d, MemPropTypeBits %u, MemPropertyFlags %u, %s(%d)"
                    ,*(undefined4 *)param_4);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      uVar12 = 0;
      goto LAB_1473a7afd;
    }
    uVar12 = 0;
    do {
      if (((uVar9 & 1) != 0) &&
         (uVar10 = param_5 & 0xffffffef,
         (param_5 & 0xffffffef & ~*(uint *)(lVar3 + 0x16c + uVar12 * 8)) == 0)) goto LAB_1473a7afd;
      uVar12 = uVar12 + 1;
    } while ((uVar12 < uVar5) && (bVar1 = 1 < uVar9, uVar9 = uVar9 >> 1, bVar1));
  }
  FUN_1431b4552(0xfffffff8,
                "DeviceMemoryManager->GetMemoryTypeFromProperties(MemoryReqs.memoryTypeBits, MemoryPropertyFlags, &TypeIndex)"
                ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xb78);
  uVar12 = 0;
  uVar10 = param_5 & 0xffffffef;
LAB_1473a7afd:
  uVar5 = (ulonglong)(int)uVar12;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8);
  if (lVar3 == 0) {
    FUN_144a81018(local_160,param_8);
    local_1a8 = *(undefined4 *)param_4;
    local_1a0 = *(uint *)(param_4 + 2);
    local_188 = param_9;
    local_190 = local_58;
    local_198 = CONCAT44(local_198._4_4_,uVar10);
    FUN_140033559(".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xb81,
                  L"Missing memory type index %d, MemSize %d, MemPropTypeBits %u, MemPropertyFlags %u, %s(%d)"
                  ,uVar12 & 0xffffffff);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8);
  }
  bVar11 = (byte)((uVar10 & 0x10) >> 4) | param_7;
  local_1a8 = *(undefined4 *)param_4;
  local_1a0 = *(uint *)(param_4 + 1);
  local_188 = CONCAT31(local_188._1_3_,param_6);
  local_198 = CONCAT71(local_198._1_7_,(char)((param_5 & 2) >> 1));
  local_190 = CONCAT71(local_190._1_7_,bVar11);
  local_180 = param_7;
  cVar2 = FUN_14319e08a(lVar3,local_170,param_3,0);
  uVar6 = 1;
  if (cVar2 == '\0') {
    uVar9 = uVar10 & 0xfffffffe;
    if (DAT_14c760c50 == 0) {
      uVar9 = uVar10;
    }
    uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x168);
    local_168 = param_3;
    if (*(uint *)(param_4 + 2) != 0 && uVar4 != 0) {
      uVar8 = 0;
      uVar10 = *(uint *)(param_4 + 2);
      do {
        if ((((uVar10 & 1) != 0) && ((uVar12 & 0xffffffff) != uVar8)) &&
           ((*(uint *)(*(longlong *)(param_1 + 8) + 0x16c + uVar8 * 8) & uVar9) == uVar9))
        goto LAB_1473a7c34;
        uVar8 = uVar8 + 1;
      } while ((uVar8 < uVar4) && (bVar1 = 1 < uVar10, uVar10 = uVar10 >> 1, bVar1));
    }
    FUN_1431b4552(0xfffffff8,
                  "DeviceMemoryManager->GetMemoryTypeFromPropertiesExcluding(MemoryReqs.memoryTypeBits, MemoryPropertyFlags, TypeIndex, &TypeIndex)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xb8e);
    uVar8 = uVar5;
LAB_1473a7c34:
    local_1a8 = *(undefined4 *)param_4;
    local_1a0 = *(uint *)(param_4 + 1);
    local_180 = param_7;
    local_188 = CONCAT31(local_188._1_3_,param_6);
    local_190 = CONCAT71(local_190._1_7_,bVar11);
    local_198 = CONCAT71(local_198._1_7_,(char)((uVar9 & 2) >> 1));
    cVar2 = FUN_14319e08a(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar8 * 8),local_170,
                          local_168,0);
    if (cVar2 == '\0') {
      FUN_14319c744(param_1,1);
      FUN_140033559(".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xb93,
                    L"Out Of Memory, trying to allocate %d bytes\n",*param_4);
      uVar6 = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1473a7d6e FUN_1473a7d6e body=8 status=ok
// SIG undefined FUN_1473a7d6e(void)

bool FUN_1473a7d6e(longlong param_1)

{
  return *(int *)(param_1 + 0xc) != 0;
}



// FUNCTION 1473a7d76 FUN_1473a7d76 body=79 status=ok
// SIG undefined FUN_1473a7d76(void)

undefined8 FUN_1473a7d76(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  
  if ((byte)((*(byte *)(param_1 + 0x1b) & 0x7f) - 1) < 4) {
    uVar1 = *(ushort *)(param_1 + 0x18);
    AcquireSRWLockShared((PSRWLOCK)(param_2 + 0x520));
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x528) + (ulonglong)uVar1 * 8);
    ReleaseSRWLockShared((PSRWLOCK)(param_2 + 0x520));
  }
  else {
    lVar2 = 0;
  }
  return *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x10);
}



// FUNCTION 1473a7dc6 FUN_1473a7dc6 body=66 status=ok
// SIG undefined FUN_1473a7dc6(void)

void FUN_1473a7dc6(longlong *param_1,longlong *param_2)

{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + param_2[1];
  param_1[2] = param_1[2] + param_2[2];
  param_1[3] = param_1[3] + param_2[3];
  param_1[4] = param_1[4] + param_2[4];
  param_1[5] = param_1[5] + param_2[5];
  param_1[6] = param_1[6] + param_2[6];
  param_1[7] = param_1[7] + param_2[7];
  return;
}



// FUNCTION 1473a7e08 FUN_1473a7e08 body=371 status=ok
// SIG undefined FUN_1473a7e08(void)

void FUN_1473a7e08(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar3 = *param_2;
    lVar7 = param_2[3];
    lVar8 = param_2[4];
    uVar9 = *(uint *)(param_2 + 8) | 2;
    lVar11 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar11 * 8);
      *param_2 = lVar3 + 1 + lVar11;
      lVar7 = lVar7 + (ulonglong)*(uint *)(lVar1 + 0x44);
      param_2[3] = lVar7;
      lVar8 = lVar8 + (ulonglong)*(uint *)(lVar1 + 0x44);
      param_2[4] = lVar8;
      uVar9 = uVar9 | *(uint *)(lVar1 + 0x40);
      *(uint *)(param_2 + 8) = uVar9;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x30));
  }
  iVar6 = *(int *)(param_1 + 0x40);
  if (0 < iVar6) {
    lVar3 = 0;
    do {
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10 + lVar3 * 0x18);
      if (0 < iVar10) {
        lVar7 = *(longlong *)(param_1 + 0x38) + lVar3 * 0x18;
        lVar8 = 0;
        do {
          lVar11 = *(longlong *)(lVar7 + 8);
          if (0 < *(int *)(lVar11 + 0x10 + lVar8 * 0x18)) {
            lVar11 = lVar11 + lVar8 * 0x18;
            lVar1 = *param_2;
            lVar4 = param_2[3];
            lVar5 = param_2[4];
            uVar9 = *(uint *)(param_2 + 8);
            lVar12 = 0;
            do {
              lVar2 = *(longlong *)(*(longlong *)(lVar11 + 8) + lVar12 * 8);
              *param_2 = lVar1 + 1 + lVar12;
              lVar4 = lVar4 + (ulonglong)*(uint *)(lVar2 + 0x44);
              param_2[3] = lVar4;
              lVar5 = lVar5 + (ulonglong)*(uint *)(lVar2 + 0x44);
              param_2[4] = lVar5;
              uVar9 = uVar9 | *(uint *)(lVar2 + 0x40) | 2;
              *(uint *)(param_2 + 8) = uVar9;
              lVar12 = lVar12 + 1;
            } while (lVar12 < *(int *)(lVar11 + 0x10));
            iVar10 = *(int *)(lVar7 + 0x10);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar10);
        iVar6 = *(int *)(param_1 + 0x40);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar6);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar3 = *param_2;
    lVar7 = param_2[4];
    uVar9 = *(uint *)(param_2 + 8) | 2;
    lVar8 = 0;
    lVar11 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x48);
      *param_2 = lVar3 + 1 + lVar11;
      lVar7 = lVar7 + (ulonglong)*(uint *)(*(longlong *)(lVar1 + lVar8) + 0x44);
      param_2[4] = lVar7;
      uVar9 = uVar9 | *(uint *)(*(longlong *)(lVar1 + lVar8) + 0x40);
      *(uint *)(param_2 + 8) = uVar9;
      lVar11 = lVar11 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar11 < *(int *)(param_1 + 0x50));
  }
  return;
}



// FUNCTION 1473a7f7c FUN_1473a7f7c body=16 status=ok
// SIG undefined FUN_1473a7f7c(void)

bool FUN_1473a7f7c(longlong param_1)

{
  return (char)*(byte *)(param_1 + 0x1b) < '\0' && (*(byte *)(param_1 + 0x1b) & 0x7f) != 0;
}



// FUNCTION 1473a7f8c FUN_1473a7f8c body=68 status=ok
// SIG undefined FUN_1473a7f8c(void)

longlong FUN_1473a7f8c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1473ae654(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_1473ae630(lVar2,1);
  return lVar2;
}



// FUNCTION 1473a7fd0 FUN_1473a7fd0 body=5 status=ok
// SIG undefined FUN_1473a7fd0(void)

void FUN_1473a7fd0(longlong param_1)

{
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0x7f;
  return;
}



// FUNCTION 1473a7fd6 FUN_1473a7fd6 body=95 status=ok
// SIG undefined FUN_1473a7fd6(void)

void FUN_1473a7fd6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473ae654(param_1,iVar1);
    }
    FUN_1473ae630((longlong)iVar1 * 0x28 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473a8036 FUN_1473a8036 body=14 status=ok
// SIG undefined FUN_1473a8036(void)

undefined8 * FUN_1473a8036(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1473a8044 FUN_1473a8044 body=5 status=ok
// SIG undefined FUN_1473a8044(void)

void FUN_1473a8044(longlong param_1)

{
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | 0x80;
  return;
}



// FUNCTION 1473a804a FUN_1473a804a body=90 status=ok
// SIG undefined FUN_1473a804a(void)

longlong FUN_1473a804a(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  
  if ((byte)((*(byte *)(param_1 + 0x1b) & 0x7f) - 1) < 4) {
    uVar1 = *(ushort *)(param_1 + 0x18);
    AcquireSRWLockShared((PSRWLOCK)(param_2 + 0x520));
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x528) + (ulonglong)uVar1 * 8);
    ReleaseSRWLockShared((PSRWLOCK)(param_2 + 0x520));
  }
  else {
    lVar2 = 0;
  }
  return (ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(*(longlong *)(lVar2 + 0x40) + 0x18);
}



// FUNCTION 1473a80a4 FUN_1473a80a4 body=179 status=ok
// SIG undefined FUN_1473a80a4(void)

void FUN_1473a80a4(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((byte)((*(byte *)(param_1 + 0x1b) & 0x7f) - 1) < 4) {
    uVar1 = *(ushort *)(param_1 + 0x18);
    AcquireSRWLockShared((PSRWLOCK)(param_2 + 0x520));
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x528) + (ulonglong)uVar1 * 8);
    ReleaseSRWLockShared((PSRWLOCK)(param_2 + 0x520));
  }
  else {
    lVar3 = 0;
  }
  plVar2 = *(longlong **)(lVar3 + 0x40);
  if ((*(byte *)((longlong)plVar2 + 0x21) & 2) != 0) {
    return;
  }
  uVar4 = 0xffffffffffffffff;
  if ((ulonglong)*(uint *)(param_1 + 0xc) != 0xffffffffffffffff) {
    uVar4 = *(ulonglong *)(**(longlong **)(lVar3 + 0x30) + 0xe08);
    uVar5 = (*(uint *)(param_1 + 0xc) + uVar4) - 1;
    uVar5 = uVar5 - uVar5 % uVar4;
    uVar4 = *plVar2 - (ulonglong)*(uint *)(param_1 + 0x10);
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
  }
  FUN_1473a5d0c(plVar2,(ulonglong)*(uint *)(param_1 + 0x10),uVar4);
  return;
}



// FUNCTION 1473a8158 FUN_1473a8158 body=162 status=ok
// SIG undefined FUN_1473a8158(void)

void FUN_1473a8158(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((byte)((*(byte *)(param_1 + 0x1b) & 0x7f) - 1) < 4) {
    uVar1 = *(ushort *)(param_1 + 0x18);
    AcquireSRWLockShared((PSRWLOCK)(param_2 + 0x520));
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x528) + (ulonglong)uVar1 * 8);
    ReleaseSRWLockShared((PSRWLOCK)(param_2 + 0x520));
  }
  else {
    lVar4 = 0;
  }
  plVar2 = *(longlong **)(lVar4 + 0x40);
  if ((*(byte *)((longlong)plVar2 + 0x21) & 2) != 0) {
    return;
  }
  uVar6 = *plVar2 - (ulonglong)*(uint *)(param_1 + 0x10);
  uVar3 = *(ulonglong *)(**(longlong **)(lVar4 + 0x30) + 0xe08);
  uVar5 = (*(uint *)(param_1 + 0xc) + uVar3) - 1;
  uVar5 = uVar5 - uVar5 % uVar3;
  if (uVar6 < uVar5) {
    uVar5 = uVar6;
  }
  FUN_1473a5d9c(plVar2,(ulonglong)*(uint *)(param_1 + 0x10),uVar5);
  return;
}



// FUNCTION 1473a81fc FUN_1473a81fc body=4 status=ok
// SIG undefined FUN_1473a81fc(void)

undefined8 FUN_1473a81fc(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 1473a8200 FUN_1473a8200 body=110 status=ok
// SIG undefined FUN_1473a8200(void)

void FUN_1473a8200(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = FUN_1473a7d76();
  uVar2 = (*DAT_14ca78ec8)(*param_2,param_3,uVar1,*(undefined4 *)(param_1 + 0x10));
  if (uVar2 < 0xfffffffe) {
    if (uVar2 == 0) {
      return;
    }
  }
  else {
    FUN_14319c744(param_2 + 0x7b,1);
  }
  FUN_1431b4552(uVar2,"Result",".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0xf36);
  return;
}



// FUNCTION 1473a826e FUN_1473a826e body=153 status=ok
// SIG undefined FUN_1473a826e(void)

ulonglong FUN_1473a826e(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*(int *)(param_1 + 0xb0);
  if ((longlong)uVar7 < 0) {
    plVar1 = (longlong *)(param_1 + 0xa0);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = (ulonglong)uVar3;
    *(uint *)(param_1 + 0xa8) = uVar3 + 1;
    if (*(uint *)(param_1 + 0xac) == uVar3) {
      FUN_1473ae718(plVar1,uVar3);
    }
    lVar4 = *plVar1;
    lVar5 = (longlong)(int)uVar3 * 0x28;
    puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar5);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)(lVar4 + lVar5) = 0;
    ((undefined8 *)(lVar4 + lVar5))[1] = 0;
    *(undefined8 *)(lVar4 + 0x20 + lVar5) = 0;
    puVar6 = (undefined4 *)(*plVar1 + lVar5 + 0x24);
  }
  else {
    puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28 + 0x24);
    *(undefined4 *)(param_1 + 0xb0) = *puVar6;
  }
  *puVar6 = 0xffffffff;
  return uVar7 & 0xffffffff;
}



// FUNCTION 1473a8308 FUN_1473a8308 body=158 status=ok
// SIG undefined FUN_1473a8308(void)

longlong FUN_1473a8308(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  do {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar3 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[8];
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
      if (iVar4 != -1) {
        do {
          lVar1 = *param_1 + (longlong)iVar4 * 0x30;
          if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x30) == param_2) {
            if (lVar1 != 0) {
              return lVar1 + 8;
            }
            break;
          }
          iVar4 = *(int *)(lVar1 + 0x28);
        } while (iVar4 != -1);
      }
    }
    param_1 = (longlong *)param_1[0xb];
    if (param_1 == (longlong *)0x0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 1473a83a6 FUN_1473a83a6 body=4 status=ok
// SIG undefined FUN_1473a83a6(void)

undefined4 FUN_1473a83a6(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// FUNCTION 1473a83aa FUN_1473a83aa body=65 status=ok
// SIG undefined FUN_1473a83aa(void)

void FUN_1473a83aa(LPCRITICAL_SECTION param_1,undefined4 param_2,undefined4 param_3)

{
  EnterCriticalSection(param_1);
  FUN_1473a8496(param_1,param_2,param_3);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473a83db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1473a83ec FUN_1473a83ec body=169 status=ok
// SIG undefined FUN_1473a83ec(void)

undefined8 FUN_1473a83ec(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        if (param_3 == '\x01') {
          FUN_1473ae832(param_1);
          return 1;
        }
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 1473a8496 FUN_1473a8496 body=631 status=ok
// SIG undefined FUN_1473a8496(void)

void FUN_1473a8496(longlong param_1,char param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong local_78;
  
  plVar1 = (longlong *)(param_1 + 0x48);
  uVar12 = *(uint *)(param_1 + 0x50);
  if (0 < (longlong)*(int *)(param_1 + 0x40)) {
    uVar13 = (longlong)*(int *)(param_1 + 0x40);
    do {
      uVar2 = uVar13 - 1;
      lVar17 = *(longlong *)(param_1 + 0x38);
      iVar15 = *(int *)(lVar17 + 0x10 + uVar2 * 0x18);
      if (0 < (longlong)iVar15) {
        plVar4 = (longlong *)(lVar17 + uVar2 * 0x18);
        plVar18 = (longlong *)(lVar17 + uVar2 * 0x18 + 8);
        uVar16 = (longlong)iVar15;
        do {
          uVar3 = uVar16 - 1;
          puVar14 = (ulonglong *)(uVar3 * 0x18 + *plVar18);
          if ((param_2 != '\0') || (*puVar14 < *(ulonglong *)(*plVar4 + 0xe0))) {
            if (0 < (int)puVar14[2]) {
              lVar17 = 0;
              do {
                uVar11 = DAT_14c7590b0;
                uVar5 = *(undefined8 *)(puVar14[1] + lVar17 * 8);
                iVar15 = *(int *)(param_1 + 0x50);
                *(uint *)(param_1 + 0x50) = iVar15 + 1U;
                if (*(uint *)(param_1 + 0x54) < iVar15 + 1U) {
                  FUN_1473ae8ce(plVar1,iVar15);
                }
                lVar6 = *plVar1;
                *(undefined8 *)(lVar6 + (longlong)iVar15 * 0x10) = uVar5;
                *(uint *)(lVar6 + 8 + (longlong)iVar15 * 0x10) = uVar11;
                lVar17 = lVar17 + 1;
              } while (lVar17 < (int)puVar14[2]);
            }
            FUN_1473ae954(plVar18,uVar3 & 0xffffffff);
          }
          bVar9 = 1 < (longlong)uVar16;
          uVar16 = uVar3;
        } while (bVar9);
        iVar15 = (int)plVar4[2];
      }
      if (iVar15 == 0) {
        FUN_1473ae9c4((longlong *)(param_1 + 0x38),uVar2 & 0xffffffff);
      }
      bVar9 = 1 < (longlong)uVar13;
      uVar13 = uVar2;
    } while (bVar9);
  }
  if (param_3 != '\0') {
    if (param_2 != '\0') {
      uVar12 = *(uint *)(param_1 + 0x50);
    }
    local_78 = (ulonglong)uVar12;
    if (0 < (int)uVar12) {
      iVar15 = -uVar12;
      lVar17 = local_78 << 4;
      do {
        lVar17 = lVar17 + -0x10;
        lVar6 = *plVar1;
        if ((param_2 != '\0') || (*(int *)(lVar6 + 8 + lVar17) + 3U < DAT_14c7590b0)) {
          *(longlong *)(param_1 + 0x60) =
               *(longlong *)(param_1 + 0x60) -
               (ulonglong)*(uint *)(*(longlong *)(lVar6 + lVar17) + 0x44);
          lVar7 = *(longlong *)(lVar6 + lVar17);
          (*DAT_14ca78e20)(**(undefined8 **)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x38),0);
          *(undefined8 *)(lVar7 + 0x38) = 0;
          FUN_1473a73fe(*(longlong *)(lVar7 + 0x10) + 0x3d8,lVar7 + 0x18);
          puVar8 = *(undefined8 **)(lVar6 + lVar17);
          if (puVar8 != (undefined8 *)0x0) {
            (**(code **)*puVar8)(puVar8,1);
          }
          uVar12 = *(uint *)(param_1 + 0x50);
          if (local_78 != uVar12) {
            iVar10 = uVar12 + iVar15;
            if (0 < (int)(uVar12 + iVar15)) {
              iVar10 = 1;
            }
            memmove((void *)(*(longlong *)(param_1 + 0x48) + lVar17),
                    (void *)((longlong)(int)(uVar12 - iVar10) * 0x10 + *(longlong *)(param_1 + 0x48)
                            ),(longlong)iVar10 << 4);
            uVar12 = *(uint *)(param_1 + 0x50);
          }
          *(uint *)(param_1 + 0x50) = uVar12 - 1;
        }
        iVar15 = iVar15 + 1;
        bVar9 = 1 < local_78;
        local_78 = local_78 - 1;
      } while (bVar9);
    }
  }
  return;
}



// FUNCTION 1473a870e FUN_1473a870e body=142 status=ok
// SIG undefined FUN_1473a870e(void)

longlong FUN_1473a870e(longlong param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_24;
  longlong lStack_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(uint *)(param_1 + 8) = (uint)param_4;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  local_28 = 8;
  local_24 = 0;
  local_14 = 0;
  lStack_1c = (ulonglong)param_4 << 0x20;
  iVar1 = (*DAT_14ca78f10)(*param_2,&local_28,0,param_1);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1,
                  "VulkanRHI::vkCreateFence(InDevice->GetInstanceHandle(), &Info, VULKAN_CPU_ALLOCATOR, &Handle)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x11e2);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a879e FUN_1473a879e body=258 status=ok
// SIG undefined FUN_1473a879e(void)

longlong FUN_1473a879e(undefined8 *param_1,undefined4 param_2)

{
  longlong *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  iVar1 = *(int *)(param_1 + 7);
  if (iVar1 == 0) {
    lVar2 = FUN_14001cc68(0x18,0x10);
    FUN_1473a870e(lVar2,*param_1,param_1,param_2);
    iVar1 = *(int *)(param_1 + 9);
    *(uint *)(param_1 + 9) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x4c) < iVar1 + 1U) {
      FUN_1473aeade(param_1 + 8,iVar1);
    }
    *(longlong *)(param_1[8] + (longlong)iVar1 * 8) = lVar2;
  }
  else {
    _Dst = (longlong *)param_1[6];
    lVar2 = *_Dst;
    iVar3 = iVar1 + -1;
    if (iVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar4 = 1;
      if (iVar3 < 1) {
        iVar4 = iVar3;
      }
      memmove(_Dst,_Dst + (iVar1 - iVar4),(longlong)iVar4 << 3);
      iVar1 = *(int *)(param_1 + 7) + -1;
    }
    *(int *)(param_1 + 7) = iVar1;
    iVar1 = *(int *)(param_1 + 9);
    *(uint *)(param_1 + 9) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x4c) < iVar1 + 1U) {
      FUN_1473aeade(param_1 + 8,iVar1);
    }
    *(longlong *)(param_1[8] + (longlong)iVar1 * 8) = lVar2;
    if ((char)param_2 != '\0') {
      *(undefined4 *)(lVar2 + 8) = 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return lVar2;
}



// FUNCTION 1473a88a0 FUN_1473a88a0 body=127 status=ok
// SIG undefined FUN_1473a88a0(void)

void FUN_1473a88a0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_1473a8920(param_1,*param_2);
  FUN_1473a896e(param_1 + 0x40,param_2,0);
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_1473aeade((longlong *)(param_1 + 0x30),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = *param_2;
  *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001473a890c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1473a8920 FUN_1473a8920 body=78 status=ok
// SIG undefined FUN_1473a8920(void)

void FUN_1473a8920(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 8) != 0) {
    iVar1 = (*DAT_14ca78f20)(*(undefined8 *)*param_1,1,param_2);
    if (iVar1 != 0) {
      FUN_1431b4552(iVar1,"VulkanRHI::vkResetFences(Device->GetInstanceHandle(), 1, &Fence->Handle)"
                    ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x126a);
    }
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1473a896e FUN_1473a896e body=169 status=ok
// SIG undefined FUN_1473a896e(void)

undefined8 FUN_1473a896e(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        if (param_3 == '\x01') {
          FUN_1473aea42(param_1);
          return 1;
        }
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 1473a8a18 FUN_1473a8a18 body=150 status=ok
// SIG undefined FUN_1473a8a18(void)

void FUN_1473a8a18(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  lVar2 = *param_2;
  if (*(int *)(lVar2 + 8) != 1) {
    FUN_1473a8aae(param_1,lVar2,param_3);
    lVar2 = *param_2;
  }
  FUN_1473a8920(param_1,lVar2);
  FUN_1473a896e(param_1 + 0x40,param_2,0);
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_1473aeade((longlong *)(param_1 + 0x30),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = *param_2;
  *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001473a8a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1473a8aae FUN_1473a8aae body=94 status=ok
// SIG undefined FUN_1473a8aae(void)

undefined8 FUN_1473a8aae(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (*DAT_14ca78f30)(*(undefined8 *)*param_1,1,param_2,1,param_3);
  if (iVar1 != 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 8) = 1;
      return 1;
    }
    FUN_1431b4552(iVar1,"Result",".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x125f);
  }
  return 0;
}



// FUNCTION 1473a8b0c FUN_1473a8b0c body=78 status=ok
// SIG undefined FUN_1473a8b0c(void)

undefined8 FUN_1473a8b0c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = (*DAT_14ca78f28)(*(undefined8 *)*param_1,*param_2);
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 1) = 1;
      return 1;
    }
    FUN_1431b4552(iVar1,"Result",".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x1247);
  }
  return 0;
}



// FUNCTION 1473a8b5a FUN_1473a8b5a body=206 status=ok
// SIG undefined FUN_1473a8b5a(void)

void FUN_1473a8b5a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(*param_1 + 0x1a70);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x18));
  uVar3 = *(undefined8 *)(lVar7 + 0x40);
  uVar4 = *(undefined8 *)(lVar7 + 0x48);
  if ((LPCRITICAL_SECTION)(lVar7 + 0x18) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x18));
  }
  uVar6 = DAT_14ca77fd0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  iVar2 = (int)param_1[7];
  lVar7 = (longlong)iVar2;
  *(uint *)(param_1 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3c) < iVar2 + 1U) {
    FUN_1473aeb64(param_1 + 6,iVar2);
  }
  lVar5 = param_1[6];
  *(undefined4 *)(lVar5 + lVar7 * 0x48) = param_2;
  *(undefined4 *)(lVar5 + 4 + lVar7 * 0x48) = uVar6;
  *(undefined8 *)(lVar5 + 8 + lVar7 * 0x48) = uVar4;
  *(undefined8 *)(lVar5 + 0x10 + lVar7 * 0x48) = uVar3;
  *(undefined8 *)(lVar5 + 0x18 + lVar7 * 0x48) = param_3;
  *(undefined8 *)(lVar5 + 0x40 + lVar7 * 0x48) = 0;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar7 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + 0x2c + lVar7 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001473a8c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 1473a8c28 FUN_1473a8c28 body=93 status=ok
// SIG undefined FUN_1473a8c28(void)

void FUN_1473a8c28(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    lVar2 = 0x10;
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar2) == param_2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
        iVar1 = *(int *)(param_1 + 0x38);
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x48;
    } while (lVar3 < iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001473a8c7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1473a8c86 FUN_1473a8c86 body=228 status=ok
// SIG undefined FUN_1473a8c86(void)

void FUN_1473a8c86(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a35c718;
  iVar1 = *(int *)(param_1 + 8);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[7];
    lVar3 = 0;
    do {
      FUN_1431a06fa(param_1[1],*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_1473aebf8(param_1 + 7);
  }
  iVar1 = *(int *)(param_1 + 6);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[5];
    lVar3 = 0;
    do {
      FUN_1431a06fa(param_1[1],*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_1473aebf8(param_1 + 5);
  }
  FUN_1431a06fa(param_1[1],param_1[4]);
  param_1[4] = 0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473a8d6a FUN_1473a8d6a body=763 status=ok
// SIG undefined FUN_1473a8d6a(void)

undefined8 * FUN_1473a8d6a(longlong param_1,undefined8 *param_2,int param_3,ulonglong param_4)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  uint uVar9;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar9 = -*(int *)(param_1 + 0x14) & (param_3 + *(int *)(param_1 + 0x14)) - 1U;
  SRWLock = (PSRWLOCK)(param_1 + 0x48);
  local_48 = param_4;
  AcquireSRWLockShared(SRWLock);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(int *)(lVar2 + 0x40) != *(int *)(lVar2 + 0x6c)) {
    uVar5 = ((uint)(param_4 >> 0x14) & 0xffff ^ (uint)(param_4 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar7 = lVar2 + 0x70;
    if (*(longlong *)(lVar2 + 0x78) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x78);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar2 + 0x80) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4)
    ;
    if (iVar6 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x38) + (longlong)iVar6 * 0x18) == param_4) {
          lVar2 = *(longlong *)(param_1 + 0x20);
          if (*(int *)(lVar2 + 0x40) == *(int *)(lVar2 + 0x6c)) goto LAB_1473a8eb9;
          uVar5 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          lVar7 = lVar2 + 0x70;
          if (*(longlong *)(lVar2 + 0x78) != 0) {
            lVar7 = *(longlong *)(lVar2 + 0x78);
          }
          iVar6 = *(int *)(lVar7 + (ulonglong)
                                   (*(int *)(lVar2 + 0x80) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
          if (iVar6 == -1) goto LAB_1473a8eb9;
          goto LAB_1473a8f72;
        }
        iVar6 = *(int *)(*(longlong *)(lVar2 + 0x38) + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  goto LAB_1473a8e2e;
  while (iVar6 = (int)puVar8[2], iVar6 != -1) {
LAB_1473a8f72:
    puVar8 = (ulonglong *)(*(longlong *)(lVar2 + 0x38) + (longlong)iVar6 * 0x18);
    if (*puVar8 == local_48) goto LAB_1473a8ebb;
  }
LAB_1473a8eb9:
  puVar8 = (ulonglong *)0x0;
LAB_1473a8ebb:
  puVar8[1] = *(ulonglong *)(param_4 + 0xe0);
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x88);
  iVar6 = *piVar1;
  *piVar1 = *piVar1 + uVar9;
  UNLOCK();
  if ((uint)(iVar6 + param_3) < *(uint *)(param_1 + 0x10)) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
    *(int *)(param_2 + 1) = iVar6;
    ReleaseSRWLockShared(SRWLock);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
LAB_1473a8e2e:
  ReleaseSRWLockShared(SRWLock);
  AcquireSRWLockExclusive(SRWLock);
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x88);
  iVar6 = *piVar1;
  *piVar1 = *piVar1 + uVar9;
  UNLOCK();
  if ((uint)(param_3 + iVar6) < *(uint *)(param_1 + 0x10)) {
    uVar4 = *(undefined8 *)(local_48 + 0xe0);
    uVar9 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    puVar3 = (undefined8 *)FUN_1473aec28(*(longlong *)(param_1 + 0x20) + 0x38,uVar9 >> 0x10 ^ uVar9)
    ;
    *puVar3 = uVar4;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x34) < iVar6 + 1U) {
      FUN_1473af1aa(param_1 + 0x28,iVar6);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar6 * 8) =
         *(undefined8 *)(param_1 + 0x20);
    iVar6 = *(int *)(param_1 + 0x40);
    if ((longlong)iVar6 == 0) {
      uVar4 = FUN_1431a05a2(param_1);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + -8 + (longlong)iVar6 * 8);
      *(int *)(param_1 + 0x40) = iVar6 + -1;
    }
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    uVar4 = *(undefined8 *)(local_48 + 0xe0);
    uVar5 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    puVar3 = (undefined8 *)FUN_1473aec28(*(longlong *)(param_1 + 0x20) + 0x38,uVar5 >> 0x10 ^ uVar5)
    ;
    *puVar3 = uVar4;
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x88);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + uVar9;
    UNLOCK();
  }
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  *(int *)(param_2 + 1) = iVar6;
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a9066 FUN_1473a9066 body=182 status=ok
// SIG undefined FUN_1473a9066(void)

longlong FUN_1473a9066(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1473a8d6a(param_1,&local_38,param_2);
  uVar1 = *local_38;
  uVar2 = local_38[1];
  uVar3 = local_38[2];
  uVar4 = local_38[3];
  uVar5 = local_38[5];
  uVar6 = local_38[6];
  uVar7 = local_38[7];
  *(undefined4 *)(param_5 + 2) = local_38[4];
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar5;
  *(undefined4 *)(param_5 + 3) = uVar6;
  *(undefined4 *)((longlong)param_5 + 0x1c) = uVar7;
  *(undefined4 *)param_5 = uVar1;
  *(undefined4 *)((longlong)param_5 + 4) = uVar2;
  *(undefined4 *)(param_5 + 1) = uVar3;
  *(undefined4 *)((longlong)param_5 + 0xc) = uVar4;
  *(byte *)((longlong)param_5 + 0x1b) = *(byte *)((longlong)param_5 + 0x1b) & 0x7f;
  *param_5 = *(undefined8 *)(local_38 + 8);
  *(uint *)((longlong)param_5 + 0xc) = param_2;
  *(uint *)(param_5 + 2) = *(int *)(param_5 + 2) + local_30;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0x3b9f9c63;
    *(undefined8 *)(param_6 + 1) = 0;
    *(undefined8 *)(param_6 + 3) = 0;
    *(undefined8 *)(param_6 + 5) = 0;
    *(undefined8 *)(param_6 + 7) = 0;
    param_6[9] = 0;
    *(ulonglong *)(param_6 + 4) = *(longlong *)(local_38 + 0xc) + (ulonglong)local_30;
    *(ulonglong *)(param_6 + 6) = (ulonglong)param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (ulonglong)local_30 + *(longlong *)(local_38 + 10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a911e FUN_1473a911e body=172 status=ok
// SIG undefined FUN_1473a911e(void)

undefined8 * FUN_1473a911e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14a35cb28;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14a35c798;
  param_1[2] = param_2;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  local_28 = 9;
  local_24 = 0;
  uStack_1c = 0;
  local_14 = 0;
  iVar1 = (*DAT_14ca78f38)(*param_2,&local_28,0,param_1 + 3);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1,
                  "VulkanRHI::vkCreateSemaphore(Device.GetInstanceHandle(), &CreateInfo, VULKAN_CPU_ALLOCATOR, &SemaphoreHandle)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanMemory.cpp",0x13f5);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a91cc FUN_1473a91cc body=74 status=ok
// SIG undefined FUN_1473a91cc(void)

undefined8 * FUN_1473a91cc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a35c5e8;
  FUN_1473a73fe(param_1[2] + 0x3d8,param_1 + 3,0);
  *param_1 = &PTR_FUN_14a35cb28;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473a9216 FUN_1473a9216 body=38 status=ok
// SIG undefined FUN_1473a9216(void)

undefined8 FUN_1473a9216(undefined8 param_1,int param_2)

{
  FUN_1473a8c86();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473a923c FUN_1473a923c body=92 status=ok
// SIG undefined FUN_1473a923c(void)

undefined8 * FUN_1473a923c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a35c798;
  if (*(char *)(param_1 + 4) == '\0') {
    FUN_1473a8b5a(param_1[2] + 0x590,10,param_1[3]);
  }
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14a35cb28;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473a9298 FUN_1473a9298 body=121 status=ok
// SIG undefined FUN_1473a9298(void)

void FUN_1473a9298(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0x60) {
    *(undefined4 *)(param_1 + 1) = 0x60;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 0x60U - iVar1) {
      FUN_1473a9312(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x18 + *param_1),0,(ulonglong)(0x60U - iVar1) * 0x18);
    return;
  }
  if (iVar1 == 0x60) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0x60;
  FUN_1473a93a6(param_1);
  return;
}



// FUNCTION 1473a9312 FUN_1473a9312 body=147 status=ok
// SIG undefined FUN_1473a9312(void)

void FUN_1473a9312(longlong param_1,int param_2)

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



// FUNCTION 1473a93a6 FUN_1473a93a6 body=62 status=ok
// SIG undefined FUN_1473a93a6(void)

void FUN_1473a93a6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473a93e4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1473a93e4 FUN_1473a93e4 body=112 status=ok
// SIG undefined FUN_1473a93e4(void)

ulonglong FUN_1473a93e4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1473a941e;
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
LAB_1473a941e:
  return param_2 & 0xffffffff;
}



// FUNCTION 1473a9454 FUN_1473a9454 body=54 status=ok
// SIG undefined FUN_1473a9454(void)

void FUN_1473a9454(longlong *param_1)

{
  FUN_1473a948a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473a948a FUN_1473a948a body=376 status=ok
// SIG undefined FUN_1473a948a(void)

void FUN_1473a948a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = *(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (lVar3 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar3 + 8);
        uVar5 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar5 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144727cd0(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar5 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar5 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar4 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473a9604 FUN_1473a9604 body=52 status=ok
// SIG undefined FUN_1473a9604(void)

void FUN_1473a9604(longlong *param_1)

{
  FUN_1473a9638();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473a9638 FUN_1473a9638 body=89 status=ok
// SIG undefined FUN_1473a9638(void)

void FUN_1473a9638(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1473a9692 FUN_1473a9692 body=155 status=ok
// SIG undefined FUN_1473a9692(void)

undefined8 FUN_1473a9692(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1473a972e(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473a972e FUN_1473a972e body=93 status=ok
// SIG undefined FUN_1473a972e(void)

void FUN_1473a972e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1473a978c(param_1,param_2,1);
  return;
}



// FUNCTION 1473a978c FUN_1473a978c body=138 status=ok
// SIG undefined FUN_1473a978c(void)

void FUN_1473a978c(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1473a9816 FUN_1473a9816 body=155 status=ok
// SIG undefined FUN_1473a9816(void)

undefined8 FUN_1473a9816(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1473a98b2(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473a98b2 FUN_1473a98b2 body=93 status=ok
// SIG undefined FUN_1473a98b2(void)

void FUN_1473a98b2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1473a9910(param_1,param_2,1);
  return;
}



// FUNCTION 1473a9910 FUN_1473a9910 body=138 status=ok
// SIG undefined FUN_1473a9910(void)

void FUN_1473a9910(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1473a999a FUN_1473a999a body=71 status=ok
// SIG undefined FUN_1473a999a(void)

undefined8 * FUN_1473a999a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
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



// FUNCTION 1473a99e8 FUN_1473a99e8 body=68 status=ok
// SIG undefined FUN_1473a99e8(void)

void FUN_1473a99e8(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x30);
    }
    uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001473a9a21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1473a9a2e FUN_1473a9a2e body=71 status=ok
// SIG undefined FUN_1473a9a2e(void)

undefined8 * FUN_1473a9a2e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec10;
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



// FUNCTION 1473a9a76 FUN_1473a9a76 body=68 status=ok
// SIG undefined FUN_1473a9a76(void)

void FUN_1473a9a76(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x30);
    }
    uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001473a9aaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 1473a9aba FUN_1473a9aba body=52 status=ok
// SIG undefined FUN_1473a9aba(void)

void FUN_1473a9aba(longlong *param_1)

{
  FUN_1473a9aee();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473a9aee FUN_1473a9aee body=313 status=ok
// SIG undefined FUN_1473a9aee(void)

void FUN_1473a9aee(longlong *param_1)

{
  longlong *plVar1;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
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
      if (*(longlong *)(*local_68 + 0x20 + (longlong)iStack_4c * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473a9c28 FUN_1473a9c28 body=39 status=ok
// SIG undefined FUN_1473a9c28(void)

undefined8 * FUN_1473a9c28(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a35cb28;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473a9c50 FUN_1473a9c50 body=63 status=ok
// SIG undefined FUN_1473a9c50(void)

longlong FUN_1473a9c50(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1473a9c98(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1473a9c8f(lVar2);
  return lVar2;
}



// FUNCTION 1473a9c8f FUN_1473a9c8f body=8 status=ok
// SIG undefined FUN_1473a9c8f(void)

void FUN_1473a9c8f(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1473a9c98 FUN_1473a9c98 body=147 status=ok
// SIG undefined FUN_1473a9c98(void)

void FUN_1473a9c98(longlong param_1,int param_2)

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



// FUNCTION 1473a9d2c FUN_1473a9d2c body=63 status=ok
// SIG undefined FUN_1473a9d2c(void)

longlong FUN_1473a9d2c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1473a9d74(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1473a9d6b(lVar2);
  return lVar2;
}



// FUNCTION 1473a9d6b FUN_1473a9d6b body=8 status=ok
// SIG undefined FUN_1473a9d6b(void)

void FUN_1473a9d6b(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1473a9d74 FUN_1473a9d74 body=147 status=ok
// SIG undefined FUN_1473a9d74(void)

void FUN_1473a9d74(longlong param_1,int param_2)

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



// FUNCTION 1473a9e08 FUN_1473a9e08 body=52 status=ok
// SIG undefined FUN_1473a9e08(void)

void FUN_1473a9e08(longlong *param_1)

{
  FUN_1473a9e3c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473a9e3c FUN_1473a9e3c body=89 status=ok
// SIG undefined FUN_1473a9e3c(void)

void FUN_1473a9e3c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1473a9e95 FUN_1473a9e95 body=58 status=ok
// SIG undefined FUN_1473a9e95(void)

void FUN_1473a9e95(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_1473a9ecf(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1473a9ecf FUN_1473a9ecf body=47 status=ok
// SIG undefined FUN_1473a9ecf(void)

void FUN_1473a9ecf(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1473a9efe FUN_1473a9efe body=147 status=ok
// SIG undefined FUN_1473a9efe(void)

void FUN_1473a9efe(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473a9f92 FUN_1473a9f92 body=132 status=ok
// SIG undefined FUN_1473a9f92(void)

void FUN_1473a9f92(longlong param_1,int param_2)

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



// FUNCTION 1473aa018 FUN_1473aa018 body=62 status=ok
// SIG undefined FUN_1473aa018(void)

void FUN_1473aa018(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473aa056(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 1473aa056 FUN_1473aa056 body=93 status=ok
// SIG undefined FUN_1473aa056(void)

ulonglong FUN_1473aa056(uint param_1,uint param_2)

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



// FUNCTION 1473aa0b4 FUN_1473aa0b4 body=305 status=ok
// SIG undefined FUN_1473aa0b4(void)

undefined4 *
FUN_1473aa0b4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1473aa1e6(param_1,local_50);
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  local_48[3] = 0;
  local_48[4] = 0xffffffff;
  local_48[1] = 0;
  local_48[2] = 0;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_1473aa2cc(param_1,uVar4,local_48,&local_54);
  uVar1 = local_54;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1473aa3cc(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473aa1e6 FUN_1473aa1e6 body=230 status=ok
// SIG undefined FUN_1473aa1e6(void)

int * FUN_1473aa1e6(longlong *param_1,int *param_2)

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



// FUNCTION 1473aa2cc FUN_1473aa2cc body=142 status=ok
// SIG undefined FUN_1473aa2cc(void)

void FUN_1473aa2cc(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1473aa35a(iVar2,*param_4);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1473aa336;
        }
        iVar8 = piVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1473aa336:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1473aa35a FUN_1473aa35a body=114 status=ok
// SIG undefined FUN_1473aa35a(void)

void FUN_1473aa35a(longlong *param_1,int param_2)

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



// FUNCTION 1473aa3cc FUN_1473aa3cc body=419 status=ok
// SIG undefined FUN_1473aa3cc(void)

void FUN_1473aa3cc(longlong *param_1)

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



// FUNCTION 1473aa570 FUN_1473aa570 body=147 status=ok
// SIG undefined FUN_1473aa570(void)

void FUN_1473aa570(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473aa604 FUN_1473aa604 body=52 status=ok
// SIG undefined FUN_1473aa604(void)

void FUN_1473aa604(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1473aa638 FUN_1473aa638 body=132 status=ok
// SIG undefined FUN_1473aa638(void)

void FUN_1473aa638(longlong param_1,int param_2)

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



// FUNCTION 1473aa6be FUN_1473aa6be body=48 status=ok
// SIG undefined FUN_1473aa6be(void)

void FUN_1473aa6be(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1473aa6ee FUN_1473aa6ee body=132 status=ok
// SIG undefined FUN_1473aa6ee(void)

void FUN_1473aa6ee(longlong param_1,int param_2)

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



// FUNCTION 1473aa774 FUN_1473aa774 body=63 status=ok
// SIG undefined FUN_1473aa774(void)

void FUN_1473aa774(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473aa7b4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1473aa7b4 FUN_1473aa7b4 body=97 status=ok
// SIG undefined FUN_1473aa7b4(void)

ulonglong FUN_1473aa7b4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1473aa816 FUN_1473aa816 body=150 status=ok
// SIG undefined FUN_1473aa816(void)

void FUN_1473aa816(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x104,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x104)) {
      uVar5 = uVar4 / 0x104 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x104,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473aa8ae FUN_1473aa8ae body=132 status=ok
// SIG undefined FUN_1473aa8ae(void)

void FUN_1473aa8ae(longlong param_1,int param_2)

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



// FUNCTION 1473aa954 FUN_1473aa954 body=29 status=ok
// SIG undefined FUN_1473aa954(void)

undefined8 FUN_1473aa954(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473aa972 FUN_1473aa972 body=71 status=ok
// SIG undefined FUN_1473aa972(void)

undefined8 * FUN_1473aa972(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
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



// FUNCTION 1473aa9ba FUN_1473aa9ba body=74 status=ok
// SIG undefined FUN_1473aa9ba(void)

void FUN_1473aa9ba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar1 + 0x2100) = 0x3b9dc7a0;
  memset((void *)(lVar1 + 0x2104),0,0x214);
  *(undefined8 *)(lVar1 + 0x2108) = *(undefined8 *)(param_2 + 8);
  *(longlong *)(param_2 + 8) = lVar1 + 0x2100;
  return;
}



// FUNCTION 1473aaa04 FUN_1473aaa04 body=71 status=ok
// SIG undefined FUN_1473aaa04(void)

undefined8 * FUN_1473aaa04(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
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



// FUNCTION 1473aaab0 FUN_1473aaab0 body=71 status=ok
// SIG undefined FUN_1473aaab0(void)

undefined8 * FUN_1473aaab0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
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



// FUNCTION 1473aab40 FUN_1473aab40 body=128 status=ok
// SIG undefined FUN_1473aab40(void)

undefined8 * FUN_1473aab40(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  param_1[1] = "VK_KHR_shader_atomic_int64";
  param_1[2] = 0x1000100402000;
  param_1[3] = param_2;
  uVar3 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35cc40;
  lVar1 = DAT_14ca77d90;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  *(bool *)((longlong)param_1 + 0x14) = *(int *)(lVar1 + uVar3 * 4) != 0;
  return param_1;
}



// FUNCTION 1473aabc0 FUN_1473aabc0 body=71 status=ok
// SIG undefined FUN_1473aabc0(void)

undefined8 * FUN_1473aabc0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
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



// FUNCTION 1473aac68 FUN_1473aac68 body=128 status=ok
// SIG undefined FUN_1473aac68(void)

undefined8 * FUN_1473aac68(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  param_1[1] = "VK_EXT_shader_image_atomic_int64";
  param_1[2] = 0x10001ffffffff;
  param_1[3] = param_2;
  uVar3 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35cca0;
  lVar1 = DAT_14ca77d90;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  *(bool *)((longlong)param_1 + 0x14) = *(int *)(lVar1 + uVar3 * 4) != 0;
  return param_1;
}



// FUNCTION 1473aace8 FUN_1473aace8 body=71 status=ok
// SIG undefined FUN_1473aace8(void)

undefined8 * FUN_1473aace8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
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



// FUNCTION 1473aadba FUN_1473aadba body=71 status=ok
// SIG undefined FUN_1473aadba(void)

undefined8 * FUN_1473aadba(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
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


