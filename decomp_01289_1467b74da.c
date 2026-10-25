// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1467b74da FUN_1467b74da body=48 status=ok
// SIG undefined FUN_1467b74da(void)

undefined8 FUN_1467b74da(void)

{
  undefined8 *in_stack_00000038;
  longlong in_stack_00000040;
  
  *in_stack_00000038 = 0xffffffffffffffff;
  if (in_stack_00000040 != 0) {
    FUN_14020fad6(in_stack_00000040,
                  L"PlatformFileJournal is not implemented on the current platform.");
  }
  return 1;
}



// FUNCTION 1467b750a FUN_1467b750a body=249 status=ok
// SIG undefined FUN_1467b750a(void)

undefined8 * FUN_1467b750a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  int local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14006620a(&local_30,*param_3,*(undefined4 *)(param_3 + 1));
  local_50 = CONCAT44(uStack_2c,local_30);
  uStack_48 = uStack_28;
  uStack_44 = uStack_24;
  FUN_140aa5ef8(&local_40,&local_50);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70 = local_40;
  local_68 = local_38 + -1;
  if (local_38 == 0) {
    local_68 = 0;
  }
  FUN_140a8f91e(&local_70,&local_50);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14006620a(&local_30,local_50,uStack_48);
  if ((undefined8 *)&local_30 == param_2) {
    if (CONCAT44(uStack_2c,local_30) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_30;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_2c;
    *(undefined4 *)(param_2 + 1) = uStack_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_24;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b7608 FUN_1467b7608 body=506 status=ok
// SIG undefined FUN_1467b7608(void)

void * FUN_1467b7608(longlong param_1,void *param_2,ulonglong param_3)

{
  DWORD DVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  void *_Dst;
  wchar_t *pwVar5;
  ulonglong _Size;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  DVar1 = *(DWORD *)(param_1 + 0x30);
  DVar3 = GetCurrentThreadId();
  if (DVar1 != DVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1468308d8();
  }
  if (param_3 == 0 || param_2 == (void *)0x0) {
    if (param_2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    FUN_14274d336(param_1,param_2);
    _Dst = (void *)0x0;
    goto LAB_1467b76ce;
  }
  local_38 = 0;
  if ((param_2 < *(void **)(param_1 + 0x38) ||
       (void *)((longlong)*(void **)(param_1 + 0x38) + 0x200000U) <= param_2) &&
     ((param_2 < *(void **)(param_1 + 0x48) ||
      ((void *)((longlong)*(void **)(param_1 + 0x48) + (ulonglong)*(uint *)(param_1 + 0x54)) <=
       param_2)))) {
    pwVar5 = (wchar_t *)(**(code **)(**(longlong **)(param_1 + 0x68) + 200))();
    iVar4 = wcscmp(pwVar5,L"binned");
    if (iVar4 == 0) {
LAB_1467b77b8:
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x68))
                        (*(longlong **)(param_1 + 0x68),param_2,&local_38);
      if ((cVar2 != '\0') && (local_38 != 0)) goto LAB_1467b7686;
      pwVar5 = 
      L"Realloc from previous malloc - we were not able to get correct allocation size, exiting...\n"
      ;
    }
    else {
      pwVar5 = (wchar_t *)(**(code **)(**(longlong **)(param_1 + 0x68) + 200))();
      iVar4 = wcscmp(pwVar5,L"binned2");
      if (iVar4 == 0) goto LAB_1467b77b8;
      pwVar5 = (wchar_t *)(**(code **)(**(longlong **)(param_1 + 0x68) + 200))();
      iVar4 = wcscmp(pwVar5,L"jemalloc");
      if (iVar4 == 0) goto LAB_1467b77b8;
      pwVar5 = 
      L"Realloc from previous malloc - we don\'t know how to get allocation size, exiting...\n";
    }
    OutputDebugStringW(pwVar5);
    FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
  }
  else {
    local_38 = FUN_14274d296(param_1,param_2);
  }
LAB_1467b7686:
  _Dst = (void *)FUN_14274d0f4(param_1,param_3,0x10);
  _Size = local_38;
  if (param_3 < local_38) {
    _Size = param_3;
  }
  memcpy(_Dst,param_2,_Size);
  if (0x8000 < local_38) {
    FUN_145d03cb4(L"Realloc PtrSize=%u NewSize=%u PooledPtr=0x%016llx\n",local_38,
                  param_3 & 0xffffffff,param_2);
  }
  FUN_14274d336(param_1,param_2);
LAB_1467b76ce:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return _Dst;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b7820 FUN_1467b7820 body=24 status=ok
// SIG undefined FUN_1467b7820(void)

undefined1 FUN_1467b7820(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14274d296();
  *param_3 = uVar1;
  return 1;
}



// FUNCTION 1467b7838 FUN_1467b7838 body=112 status=ok
// SIG undefined FUN_1467b7838(void)

void FUN_1467b7838(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_1c;
  undefined8 *local_18;
  undefined4 *local_10;
  undefined8 local_8;
  
  local_10 = &local_1c;
  local_18 = &local_8;
  local_1c = param_2;
  local_8 = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83e6b0) {
    FUN_144b3d300(&DAT_14c83e6b0);
    if (DAT_14c83e6b0 == -1) {
      FUN_14274d56c(&local_18);
      _Init_thread_footer(&DAT_14c83e6b0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1468308d8();
}



// FUNCTION 1467b78a8 default body=108 status=ok
// SIG undefined default(void)

void switchD_145de6071::default(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (((ulonglong)param_1 & 1) != 0) {
    uVar1 = *(undefined1 *)param_2;
    *(undefined1 *)param_2 = *(undefined1 *)param_1;
    param_2 = (undefined4 *)((longlong)param_2 + 1);
    *(undefined1 *)param_1 = uVar1;
    param_1 = (undefined4 *)((longlong)param_1 + 1);
    param_3 = param_3 + -1;
  }
  if (((ulonglong)param_1 & 2) != 0) {
    uVar2 = *(undefined2 *)param_2;
    *(undefined2 *)param_2 = *(undefined2 *)param_1;
    param_2 = (undefined4 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = uVar2;
    param_1 = (undefined4 *)((longlong)param_1 + 2);
    param_3 = param_3 + -2;
  }
  if (((ulonglong)param_1 & 4) != 0) {
    uVar3 = *param_2;
    *param_2 = *param_1;
    param_2 = param_2 + 1;
    *param_1 = uVar3;
    param_1 = param_1 + 1;
    param_3 = param_3 + -4;
  }
  uVar5 = (int)param_1 - (int)param_2 | 8;
  uVar4 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001467b7912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((longlong)&DAT_149e06790 + (longlong)(int)(&DAT_149e06790)[uVar4]))
            (param_1,param_2,param_3);
  return;
}



// FUNCTION 1467b79d4 FUN_1467b79d4 body=30 status=ok
// SIG undefined FUN_1467b79d4(void)

wchar_t * FUN_1467b79d4(char param_1)

{
  if ((byte)(param_1 - 1U) < 7) {
    return (wchar_t *)(&PTR_DAT_149e06718)[(byte)(param_1 - 1U)];
  }
  return L"Unknown";
}



// FUNCTION 1467b79f2 FUN_1467b79f2 body=10 status=ok
// SIG undefined FUN_1467b79f2(void)

undefined8 * FUN_1467b79f2(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1467b79fc FUN_1467b79fc body=29 status=ok
// SIG undefined FUN_1467b79fc(void)

undefined8 FUN_1467b79fc(undefined8 param_1)

{
  FUN_140056680(param_1,L"Unknown");
  return param_1;
}



// FUNCTION 1467b7a1a FUN_1467b7a1a body=25 status=ok
// SIG undefined FUN_1467b7a1a(void)

void FUN_1467b7a1a(undefined8 param_1)

{
  FUN_14049bb83(&DAT_149e0625e,param_1);
  return;
}



// FUNCTION 1467b7a33 FUN_1467b7a33 body=27 status=ok
// SIG undefined FUN_1467b7a33(void)

wchar_t * FUN_1467b7a33(uint param_1)

{
  if (param_1 < 8) {
    return (wchar_t *)(&PTR_DAT_149e06750)[param_1];
  }
  return L"Unknown";
}



// FUNCTION 1467b7a4e FUN_1467b7a4e body=86 status=ok
// SIG undefined FUN_1467b7a4e(void)

wchar_t * FUN_1467b7a4e(void)

{
  char cVar1;
  wchar_t *pwVar2;
  
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,&DAT_149e047b6);
  pwVar2 = L"PCD3D_SM6";
  if (cVar1 != '\0') {
    pwVar2 = L"PCD3D_SM5";
  }
  return pwVar2;
}



// FUNCTION 1467b7aa4 FUN_1467b7aa4 body=98 status=ok
// SIG undefined FUN_1467b7aa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1467b7aa4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83e730) {
    FUN_144b3d300(&DAT_14c83e730);
    if (DAT_14c83e730 == -1) {
      _DAT_14c83e728 = &PTR_LAB_149e05d30;
      _Init_thread_footer(&DAT_14c83e730);
    }
  }
  return &DAT_14c83e728;
}



// FUNCTION 1467b7b06 FUN_1467b7b06 body=95 status=ok
// SIG undefined FUN_1467b7b06(void)

void FUN_1467b7b06(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 4);
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467b7b66 FUN_1467b7b66 body=9 status=ok
// SIG undefined FUN_1467b7b66(void)

undefined8 FUN_1467b7b66(void)

{
  return 0xbf800000;
}



// FUNCTION 1467b7b70 FUN_1467b7b70 body=38 status=ok
// SIG undefined FUN_1467b7b70(void)

int FUN_1467b7b70(void)

{
  int iVar1;
  
  iVar1 = FUN_140e55850();
  if (4 < iVar1) {
    iVar1 = 5;
  }
  if (iVar1 < 4) {
    iVar1 = 3;
  }
  return iVar1 + -1;
}



// FUNCTION 1467b7b96 FUN_1467b7b96 body=158 status=ok
// SIG undefined FUN_1467b7b96(void)

/* WARNING: Removing unreachable block (ram,0x0001467b7c12) */

void FUN_1467b7b96(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(&local_28,"Windows");
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_28;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467b7c36 FUN_1467b7c36 body=10 status=ok
// SIG undefined FUN_1467b7c36(void)

undefined8 * FUN_1467b7c36(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1467b7c40 FUN_1467b7c40 body=109 status=ok
// SIG undefined FUN_1467b7c40(void)

undefined8 FUN_1467b7c40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [40];
  undefined8 local_d0;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar1 = FUN_1424a3b00();
  FUN_1424a3ce0(local_f8,uVar1);
  FUN_1400b22c2(param_1,local_d0);
  FUN_1414b3f60(local_f8);
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b7cae FUN_1467b7cae body=3 status=ok
// SIG undefined FUN_1467b7cae(void)

undefined8 FUN_1467b7cae(void)

{
  return 0;
}



// FUNCTION 1467b7cb2 FUN_1467b7cb2 body=7 status=ok
// SIG undefined FUN_1467b7cb2(void)

void FUN_1467b7cb2(undefined1 param_1)

{
  DAT_14c83e6c8 = param_1;
  return;
}



// FUNCTION 1467b7cba FUN_1467b7cba body=7 status=ok
// SIG undefined FUN_1467b7cba(void)

undefined1 FUN_1467b7cba(void)

{
  return DAT_14c83e6c8;
}



// FUNCTION 1467b7cc2 FUN_1467b7cc2 body=115 status=ok
// SIG undefined FUN_1467b7cc2(void)

undefined8 FUN_1467b7cc2(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_140d5712e();
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  plVar3 = *(longlong **)(lVar4 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    uVar5 = FUN_14142d806(uVar5);
    FUN_1406db95e(lVar4,param_1,uVar5);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar5 = FUN_14142d806(uVar5);
    FUN_1406db95e(lVar4,param_1,uVar5);
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
  return param_1;
}



// FUNCTION 1467b7d36 FUN_1467b7d36 body=10 status=ok
// SIG undefined FUN_1467b7d36(void)

undefined8 * FUN_1467b7d36(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1467b7d40 FUN_1467b7d40 body=10 status=ok
// SIG undefined FUN_1467b7d40(void)

undefined8 * FUN_1467b7d40(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1467b7d4e FUN_1467b7d4e body=155 status=ok
// SIG undefined FUN_1467b7d4e(void)

undefined8 FUN_1467b7d4e(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83e770) {
    FUN_144b3d300(&DAT_14c83e770);
    if (DAT_14c83e770 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14c83e768 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.PropagateAlpha",1);
      _Init_thread_footer(&DAT_14c83e770);
    }
  }
  if (DAT_14c83e768 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467b7d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*DAT_14c83e768 + 0xb0))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1467b7dea FUN_1467b7dea body=153 status=ok
// SIG undefined FUN_1467b7dea(void)

undefined4 FUN_1467b7dea(wchar_t *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined1 auStack_68 [40];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    local_38 = 0;
  }
  else {
    sVar2 = wcslen(param_1);
    local_38 = (int)sVar2;
  }
  uVar1 = FUN_14278d920(param_4);
  if ((char)uVar1 == '\0') {
    if (param_3 != 0) {
      FUN_14020fad6(param_3,L"URL rejected by filter");
    }
  }
  else {
    FUN_14279a7c2(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b7e84 FUN_1467b7e84 body=143 status=ok
// SIG undefined FUN_1467b7e84(void)

undefined8 FUN_1467b7e84(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_c68 [40];
  undefined1 local_c40 [3096];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c68;
  if (param_4 == 0 || param_3 == 0) {
    uVar1 = 0;
  }
  else {
    memset(local_c40,0,0xc18);
    FUN_146830fc4(param_2,local_c40);
    uVar1 = FUN_1467b7f14(local_c40,param_3,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_c68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b7f14 FUN_1467b7f14 body=1214 status=ok
// SIG undefined FUN_1467b7f14(void)

ulonglong FUN_1467b7f14(char *param_1,char *param_2,longlong param_3)

{
  wchar_t *pwVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  size_t sVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_688 [32];
  int local_668;
  wchar_t *local_658;
  int local_650;
  char local_648 [128];
  longlong local_5c8;
  char *local_5c0;
  undefined4 local_5b8;
  char local_548 [255];
  char acStack_449 [1025];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_688;
  if (param_3 == 0 || param_2 == (char *)0x0) {
    uVar7 = 0;
    goto LAB_1467b81a6;
  }
  memset(acStack_449 + 1,0,0x400);
  pcVar3 = strrchr(param_1,0x5c);
  pcVar4 = strrchr(param_1,0x2f);
  if (pcVar3 < pcVar4) {
    pcVar3 = pcVar4;
  }
  pcVar4 = pcVar3 + 1;
  if (pcVar3 == (char *)0x0) {
    pcVar4 = param_1;
  }
  memset(local_548,0,0x100);
  FUN_1407bf796(local_548,0x100,"0x%016llx ",*(undefined8 *)(param_1 + 0xc10));
  sVar5 = strlen(acStack_449 + 1);
  iVar2 = (int)sVar5;
  if (iVar2 < 0x400) {
    strncpy(acStack_449 + (longlong)iVar2 + 1,local_548,(ulonglong)(0x400 - iVar2));
    (acStack_449 + (longlong)iVar2 + 1)[(ulonglong)(0x400 - iVar2) - 1] = '\0';
  }
  sVar5 = strlen(pcVar4);
  if (0 < (int)sVar5) {
    sVar5 = strlen(acStack_449 + 1);
    iVar2 = (int)sVar5;
    if (iVar2 < 0x400) {
      strncpy(acStack_449 + (longlong)iVar2 + 1,pcVar4,(ulonglong)(0x400 - iVar2));
      (acStack_449 + (longlong)iVar2 + 1)[(ulonglong)(0x400 - iVar2) - 1] = '\0';
    }
    sVar5 = strlen(acStack_449 + 1);
    iVar2 = (int)sVar5;
    if (iVar2 < 0x400) {
      strncpy(acStack_449 + (longlong)iVar2 + 1,(char *)L"!../../../Engine/",
              (ulonglong)(0x400 - iVar2));
      (acStack_449 + (longlong)iVar2 + 1)[(ulonglong)(0x400 - iVar2) - 1] = '\0';
    }
  }
  sVar5 = strlen(param_1 + 0x400);
  sVar6 = strlen(acStack_449 + 1);
  uVar7 = CONCAT71((int7)(sVar5 >> 8),0 < (int)sVar5);
  iVar2 = (int)sVar6;
  if ((int)sVar5 < 1) {
    if (iVar2 < 0x400) {
      strncpy(acStack_449 + (longlong)iVar2 + 1,"UnknownFunction",(ulonglong)(0x400 - iVar2));
      pcVar3 = acStack_449 + (longlong)iVar2 + 1 + (0x400 - iVar2);
      goto LAB_1467b80f9;
    }
  }
  else if (iVar2 < 0x400) {
    strncpy(acStack_449 + (longlong)iVar2 + 1,param_1 + 0x400,(ulonglong)(0x400 - iVar2));
    pcVar3 = acStack_449 + (longlong)iVar2 + 1 + (0x400 - iVar2);
LAB_1467b80f9:
    pcVar3[-1] = '\0';
  }
  sVar5 = strlen(param_1 + 0x800);
  iVar2 = *(int *)(param_1 + 0xc00);
  if (iVar2 < 1 || (int)sVar5 < 1) {
    FUN_146831870(&local_658,*(undefined8 *)(param_1 + 0xc10));
    sVar5 = strlen(acStack_449 + 1);
    iVar2 = (int)sVar5;
    if (local_650 < 2) {
      if (iVar2 < 0x400) {
        pcVar3 = " []";
LAB_1467b835f:
        strncpy(acStack_449 + (longlong)iVar2 + 1,pcVar3,(ulonglong)(0x400 - iVar2));
        (acStack_449 + (longlong)iVar2 + 1)[(ulonglong)(0x400 - iVar2) - 1] = '\0';
      }
    }
    else {
      if (iVar2 < 0x400) {
        strncpy(acStack_449 + (longlong)iVar2 + 1," {",(ulonglong)(0x400 - iVar2));
        (acStack_449 + (longlong)iVar2 + 1)[(ulonglong)(0x400 - iVar2) - 1] = '\0';
      }
      pwVar1 = local_658;
      local_5c8 = 0;
      if (local_658 == (wchar_t *)0x0) {
        local_5c0 = (char *)0x0;
        local_5b8 = 0;
      }
      else {
        sVar5 = wcslen(local_658);
        FUN_1449b853c(local_648,pwVar1,sVar5 & 0xffffffff,1);
      }
      sVar5 = strlen(acStack_449 + 1);
      iVar2 = (int)sVar5;
      if (iVar2 < 0x400) {
        strncpy(acStack_449 + (longlong)iVar2 + 1,local_5c0,(ulonglong)(0x400 - iVar2));
        (acStack_449 + (longlong)iVar2 + 1)[(ulonglong)(0x400 - iVar2) - 1] = '\0';
      }
      if (local_5c8 != 0) {
        FUN_1400020a8();
      }
      sVar5 = strlen(acStack_449 + 1);
      iVar2 = (int)sVar5;
      if (iVar2 < 0x400) {
        pcVar3 = "}";
        goto LAB_1467b835f;
      }
    }
    if (local_658 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    memset(local_648,0,0x100);
    local_668 = iVar2;
    FUN_1407bf796(local_648,0x100," [%s:%i]",param_1 + 0x800);
    sVar5 = strlen(acStack_449 + 1);
    iVar2 = (int)sVar5;
    if (iVar2 < 0x400) {
      strncpy(acStack_449 + (longlong)iVar2 + 1,local_648,(ulonglong)(0x400 - iVar2));
      (acStack_449 + (longlong)iVar2 + 1)[(ulonglong)(0x400 - iVar2) - 1] = '\0';
    }
  }
  sVar5 = strlen(param_2);
  iVar2 = (int)sVar5;
  uVar8 = (int)param_3 - iVar2;
  if (uVar8 != 0 && iVar2 <= (int)param_3) {
    strncpy(param_2 + iVar2,acStack_449 + 1,(ulonglong)uVar8);
    (param_2 + iVar2)[(ulonglong)uVar8 - 1] = '\0';
  }
LAB_1467b81a6:
  if ((local_48 ^ (ulonglong)auStack_688) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b83d4 FUN_1467b83d4 body=235 status=ok
// SIG undefined FUN_1467b83d4(void)

void FUN_1467b83d4(char *param_1,int param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_398 [48];
  undefined1 local_368 [800];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  memset(local_368,0,800);
  uVar5 = param_3 + 2;
  if (param_4 != 0) {
    uVar5 = param_3;
  }
  uVar1 = FUN_146830e68(local_368,100,param_4);
  if (uVar5 < uVar1) {
    iVar6 = 0;
    do {
      FUN_1467b7e84();
      sVar3 = strlen(param_1);
      iVar2 = (int)sVar3;
      uVar4 = param_2 - iVar2;
      if (uVar4 != 0 && iVar2 <= param_2) {
        strncpy(param_1 + iVar2,"\r\n",(ulonglong)uVar4);
        (param_1 + iVar2)[(ulonglong)uVar4 - 1] = '\0';
      }
      iVar6 = iVar6 + 1;
    } while (uVar1 - uVar5 != iVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b84c0 FUN_1467b84c0 body=231 status=ok
// SIG undefined FUN_1467b84c0(void)

void FUN_1467b84c0(char *param_1,int param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_398 [48];
  longlong local_368 [100];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  uVar1 = FUN_146830e68(local_368,100,param_4);
  if (0 < (int)uVar1 && param_3 != 0) {
    uVar5 = 0;
    do {
      if (local_368[uVar5] == param_3) goto LAB_1467b8525;
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  uVar5 = 0;
LAB_1467b8525:
  if ((int)uVar5 < (int)uVar1) {
    uVar5 = uVar5 & 0xffffffff;
    do {
      FUN_1467b7e84();
      sVar3 = strlen(param_1);
      iVar2 = (int)sVar3;
      uVar4 = param_2 - iVar2;
      if (uVar4 != 0 && iVar2 <= param_2) {
        strncpy(param_1 + iVar2,"\r\n",(ulonglong)uVar4);
        (param_1 + iVar2)[(ulonglong)uVar4 - 1] = '\0';
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b85a8 FUN_1467b85a8 body=207 status=ok
// SIG undefined FUN_1467b85a8(void)

longlong * FUN_1467b85a8(longlong *param_1,uint param_2,int param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_378 [32];
  undefined8 local_358 [100];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_378;
  *param_1 = 0;
  param_1[1] = 0;
  memset(local_358,0,800);
  uVar3 = param_2 + 2;
  if (param_4 != 0) {
    uVar3 = param_2;
  }
  iVar2 = 100;
  if ((int)(param_3 + uVar3) < 100) {
    iVar2 = param_3 + uVar3;
  }
  uVar1 = FUN_146830e68(local_358,iVar2,param_4);
  if (uVar3 < uVar1) {
    lVar4 = 0;
    do {
      iVar2 = FUN_1467b8678(param_1);
      FUN_146830fc4(local_358[(ulonglong)uVar3 + lVar4],(longlong)iVar2 * 0xc18 + *param_1);
      lVar4 = lVar4 + 1;
    } while (uVar1 - uVar3 != (int)lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b8678 FUN_1467b8678 body=58 status=ok
// SIG undefined FUN_1467b8678(void)

int FUN_1467b8678(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1467bc542(param_1,iVar1);
  }
  FUN_1467bc535((longlong)iVar1 * 0xc18 + *param_1);
  return iVar1;
}



// FUNCTION 1467b86b2 FUN_1467b86b2 body=75 status=ok
// SIG undefined FUN_1467b86b2(void)

int FUN_1467b86b2(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = 0;
  do {
    bVar1 = *(byte *)(param_1 + lVar4);
    bVar2 = *(byte *)(param_2 + lVar4);
    uVar3 = (uint)bVar1;
    if (bVar1 == bVar2) {
      if (uVar3 == 0) {
        return 0;
      }
    }
    else {
      if (0x7f < (bVar2 | bVar1)) {
LAB_1467b86f6:
        return uVar3 - bVar2;
      }
      uVar3 = (uint)(byte)(&DAT_149e05da0)[bVar1];
      bVar2 = (&DAT_149e05da0)[bVar2];
      if ((&DAT_149e05da0)[bVar1] != bVar2) goto LAB_1467b86f6;
    }
    lVar4 = lVar4 + 1;
  } while( true );
}



// FUNCTION 1467b86fe FUN_1467b86fe body=98 status=ok
// SIG undefined FUN_1467b86fe(void)

int FUN_1467b86fe(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  if (param_3 == 0) {
LAB_1467b8753:
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    while( true ) {
      bVar1 = *(byte *)(param_1 + lVar4);
      uVar2 = *(ushort *)(param_2 + lVar4 * 2);
      uVar5 = (uint)uVar2;
      if ((int)(char)bVar1 != (uint)uVar2) break;
      if ((ulonglong)bVar1 == 0) {
        return 0;
      }
      if (param_3 == 1) {
        return 0;
      }
LAB_1467b872d:
      param_3 = param_3 + -1;
      lVar4 = lVar4 + 1;
    }
    if (((uint)uVar2 | (int)(char)bVar1) < 0x80) {
      bVar1 = (&DAT_149e05da0)[bVar1];
      uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar2];
      if (bVar1 == (&DAT_149e05da0)[uVar2]) {
        if (param_3 != 1) goto LAB_1467b872d;
        goto LAB_1467b8753;
      }
    }
    iVar3 = bVar1 - uVar5;
  }
  return iVar3;
}



// FUNCTION 1467b8760 FUN_1467b8760 body=308 status=ok
// SIG undefined FUN_1467b8760(void)

int FUN_1467b8760(undefined8 param_1,ulonglong *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_68 [40];
  ulonglong *local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar4 = 0;
  local_40 = param_2;
  local_34 = param_3;
  if (0 < (int)param_3) {
    uVar5 = 0x7fffffff;
    do {
      if (uVar5 == 0) {
        iVar4 = -1;
        break;
      }
      iVar2 = iVar4;
      if (((((ulonglong)local_40 & 7) == 0) && (local_34 = param_3, 7 < param_3)) &&
         (uVar3 = uVar5, 7 < (int)uVar5)) {
        while (uVar5 = uVar3, iVar2 = iVar4, local_34 = param_3,
              (*local_40 & 0x8080808080808080) == 0) {
          local_40 = local_40 + 1;
          iVar4 = iVar4 + 8;
          local_34 = param_3 - 8;
          uVar5 = uVar3 - 8;
          bVar1 = (int)param_3 < 0x10;
          iVar2 = iVar4;
          param_3 = local_34;
          if ((bVar1) || (bVar1 = uVar3 < 0x10, uVar3 = uVar5, bVar1)) break;
        }
      }
LAB_1467b87bb:
      do {
        iVar4 = iVar2;
        if (((int)param_3 < 1) || ((int)uVar5 < 1)) break;
        uVar3 = FUN_14003e942(&local_40,&local_34);
        param_3 = local_34;
        if (uVar3 < 0x10000) {
          uVar5 = uVar5 - 1;
          iVar2 = iVar4 + 1;
          if (0x7f < uVar3) goto LAB_1467b87bb;
        }
        else {
          if (1 < uVar5) {
            uVar5 = uVar5 - 2;
            iVar2 = iVar4 + 2;
            goto LAB_1467b87bb;
          }
          uVar5 = 0;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar4;
      } while (((ulonglong)local_40 & 7) != 0);
    } while (0 < (int)param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1467b8895 FUN_1467b8895 body=142 status=ok
// SIG undefined FUN_1467b8895(void)

undefined8 FUN_1467b8895(undefined8 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  local_34 = param_2;
  if (0 < param_4) {
    param_4 = param_4 + 1;
    do {
      cVar1 = FUN_1400247af(*param_3,&local_40,&local_34);
      if (cVar1 == '\0') goto LAB_1467b88ff;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (1 < param_4);
  }
  uVar2 = local_40;
  if ((int)local_40 - (int)param_1 == -1) {
LAB_1467b88ff:
    uVar2 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1467b8924 FUN_1467b8924 body=380 status=ok
// SIG undefined FUN_1467b8924(void)

undefined1 * FUN_1467b8924(undefined1 *param_1,uint param_2,ulonglong *param_3,uint param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_78 [40];
  ulonglong *local_50;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar5 = param_1;
  local_50 = param_3;
  local_44 = param_4;
  if (0 < (int)param_4) {
    do {
      puVar4 = (undefined1 *)0x0;
      if (param_2 == 0) goto LAB_1467b8a78;
      puVar4 = puVar5;
      if ((((((ulonglong)local_50 & 7) == 0) && (7 < param_4)) && (7 < (int)param_2)) &&
         (uVar2 = param_2, (*local_50 & 0x8080808080808080) == 0)) {
        do {
          puVar4 = puVar5;
          lVar3 = 0;
          do {
            puVar1 = (ulonglong *)((longlong)local_50 + 1);
            puVar4[lVar3] = (char)*local_50;
            lVar3 = lVar3 + 1;
            local_50 = puVar1;
          } while ((int)lVar3 != 8);
          param_4 = local_44 - 8;
          param_2 = uVar2 - 8;
        } while (((0xf < (int)local_44) && (0xf < (int)uVar2)) &&
                (puVar5 = puVar4 + lVar3, local_44 = param_4, uVar2 = param_2,
                (*puVar1 & 0x8080808080808080) == 0));
        puVar4 = puVar4 + lVar3;
        local_44 = param_4;
      }
LAB_1467b8986:
      do {
        puVar5 = puVar4;
        if (((int)param_4 < 1) || ((int)param_2 < 1)) break;
        uVar2 = FUN_14003e942(&local_50,&local_44);
        param_4 = local_44;
        if (uVar2 < 0x10000) {
          *puVar5 = (char)uVar2;
          param_2 = param_2 - 1;
          puVar4 = puVar5 + 1;
          if (0x7f < uVar2) goto LAB_1467b8986;
        }
        else {
          if (1 < param_2) {
            *puVar5 = (char)(uVar2 + 0x30000 >> 10);
            puVar5[1] = (char)uVar2;
            param_2 = param_2 - 2;
            puVar4 = puVar5 + 2;
            goto LAB_1467b8986;
          }
          *puVar5 = 0x3f;
          param_2 = 0;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar5;
      } while (((ulonglong)local_50 & 7) != 0);
    } while (0 < (int)param_4);
  }
  puVar4 = (undefined1 *)0x0;
  if ((int)puVar5 - (int)param_1 != -1) {
    puVar4 = puVar5;
  }
LAB_1467b8a78:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4;
}



// FUNCTION 1467b8aa2 FUN_1467b8aa2 body=62 status=ok
// SIG undefined FUN_1467b8aa2(void)

uint FUN_1467b8aa2(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  uint in_EAX;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      bVar1 = *(byte *)(param_1 + lVar3);
      bVar2 = *(byte *)(param_2 + lVar3);
      if (bVar1 == 0) {
        in_EAX = (uint)bVar1;
      }
      if ((int)(char)bVar1 != (uint)bVar2) {
        in_EAX = (uint)bVar1 - (uint)bVar2;
      }
      if (bVar1 == 0) {
        return in_EAX;
      }
      if ((int)(char)bVar1 != (uint)bVar2) {
        return in_EAX;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != lVar3);
  }
  return 0;
}



// FUNCTION 1467b8b10 FUN_1467b8b10 body=38 status=ok
// SIG undefined FUN_1467b8b10(void)

undefined8 FUN_1467b8b10(undefined8 param_1,int param_2)

{
  FUN_1467bc712();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467b8b3a FUN_1467b8b3a body=61 status=ok
// SIG undefined FUN_1467b8b3a(void)

void FUN_1467b8b3a(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_140187fa0(*(longlong *)(param_1 + 0x58),1,0);
    plVar1 = *(longlong **)(param_1 + 0x58);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1467b8b78 FUN_1467b8b78 body=80 status=ok
// SIG undefined FUN_1467b8b78(void)

void FUN_1467b8b78(longlong param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    if (param_2 <= 0.0) {
      FUN_140187fa0(*(longlong *)(param_1 + 0x58),1,0);
    }
    else {
      cVar2 = FUN_142750936();
      if (cVar2 == '\0') {
        return;
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x58);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1467b8bd8 FUN_1467b8bd8 body=62 status=ok
// SIG undefined FUN_1467b8bd8(void)

void FUN_1467b8bd8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x60))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x60))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001467b8c0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x48))(plVar2,param_2,*(code **)(*plVar2 + 0x48));
    return;
  }
  return;
}



// FUNCTION 1467b8c16 FUN_1467b8c16 body=60 status=ok
// SIG undefined FUN_1467b8c16(void)

void FUN_1467b8c16(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x60))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x60))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001467b8c47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x50))(plVar2,param_2,*(code **)(*plVar2 + 0x50));
    return;
  }
  return;
}



// FUNCTION 1467b8c52 FUN_1467b8c52 body=92 status=ok
// SIG undefined FUN_1467b8c52(void)

ulonglong FUN_1467b8c52(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  undefined8 unaff_RDI;
  undefined7 uVar5;
  longlong lVar6;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 == 0) {
    uVar5 = (undefined7)((ulonglong)unaff_RDI >> 8);
    bVar4 = 1;
  }
  else {
    lVar1 = *param_2;
    lVar6 = 0;
    bVar4 = 0;
    uVar5 = 0;
    do {
      bVar3 = (**(code **)(*param_1 + 0x88))(param_1,*(undefined8 *)(lVar1 + lVar6));
      bVar4 = bVar4 | bVar3 ^ 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar6);
    bVar4 = bVar4 ^ 1;
  }
  return CONCAT71(uVar5,bVar4) & 0xffffff01;
}



// FUNCTION 1467b8cf2 FUN_1467b8cf2 body=43 status=ok
// SIG undefined FUN_1467b8cf2(void)

void * FUN_1467b8cf2(void *param_1,int param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)param_1 + 8));
  if (param_2 != 0) {
    free(param_1);
  }
  return param_1;
}



// FUNCTION 1467b8d30 FUN_1467b8d30 body=42 status=ok
// SIG undefined FUN_1467b8d30(void)

void FUN_1467b8d30(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 200))();
  FUN_140047918(param_2,L"Allocator Stats for %s: (not implemented)",uVar1);
  return;
}



// FUNCTION 1467b8d80 FUN_1467b8d80 body=95 status=ok
// SIG undefined FUN_1467b8d80(void)

void FUN_1467b8d80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_149e061e0;
    *param_3 = *param_4;
    *param_4 = 0;
    *(undefined1 *)((longlong)param_3 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
  }
  else {
    FUN_14274de1c(param_2,param_4);
  }
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 1467b8de0 FUN_1467b8de0 body=26 status=ok
// SIG undefined FUN_1467b8de0(void)

undefined8 FUN_1467b8de0(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_14007617a(param_2,0);
  }
  return 0;
}



// FUNCTION 1467b8e24 FUN_1467b8e24 body=26 status=ok
// SIG undefined FUN_1467b8e24(void)

undefined8 FUN_1467b8e24(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_14007617a(*param_2,0);
  }
  return 0;
}



// FUNCTION 1467b8e3e FUN_1467b8e3e body=70 status=ok
// SIG undefined FUN_1467b8e3e(void)

undefined8
FUN_1467b8e3e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_14007617a(*param_3,0);
  }
  param_2[5] = &PTR_LAB_149e06220;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 1467b8e92 FUN_1467b8e92 body=52 status=ok
// SIG undefined FUN_1467b8e92(void)

void FUN_1467b8e92(longlong *param_1)

{
  FUN_1467b8ec6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467b8ec6 FUN_1467b8ec6 body=337 status=ok
// SIG undefined FUN_1467b8ec6(void)

void FUN_1467b8ec6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_1467bb158(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b9018 FUN_1467b9018 body=43 status=ok
// SIG undefined FUN_1467b9018(void)

void FUN_1467b9018(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1467b9044 FUN_1467b9044 body=63 status=ok
// SIG undefined FUN_1467b9044(void)

undefined8 * FUN_1467b9044(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e04d70;
  FUN_145c422f4(param_1 + 0x12);
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467b909c FUN_1467b909c body=81 status=ok
// SIG undefined FUN_1467b909c(void)

void FUN_1467b909c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x170))();
  if ((*(byte *)(*(longlong *)(param_1 + 0xe8) + 0x28) & 4) == 0) {
    return;
  }
  FUN_145c4230c(param_1 + 0x90,param_2,param_3);
  return;
}



// FUNCTION 1467b912a FUN_1467b912a body=1 status=ok
// SIG undefined FUN_1467b912a(void)

void FUN_1467b912a(void)

{
  return;
}



// FUNCTION 1467b912c FUN_1467b912c body=8 status=ok
// SIG undefined FUN_1467b912c(void)

bool FUN_1467b912c(longlong param_1)

{
  return (*(byte *)(param_1 + 0x29) & 2) == 0;
}



// FUNCTION 1467b913c FUN_1467b913c body=238 status=ok
// SIG undefined FUN_1467b913c(void)

int * FUN_1467b913c(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 1467b922a FUN_1467b922a body=160 status=ok
// SIG undefined FUN_1467b922a(void)

void FUN_1467b922a(longlong *param_1,undefined8 param_2,void *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *_Dst;
  undefined1 uVar1;
  int iVar2;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar2 = FUN_1467b92ca();
    if (iVar2 != -1) {
      _Dst = (longlong *)(*param_1 + (longlong)iVar2 * 0x50);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar2 * 0x50) != 0) {
        FUN_1400020a8();
      }
      if (*_Dst != 0) {
        FUN_1400020a8();
      }
      memmove(_Dst,param_3,0x48);
      FUN_1467b9394(param_1,*param_4,1);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_1467b924b;
    }
  }
  uVar1 = 0;
LAB_1467b924b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1467b92ca FUN_1467b92ca body=202 status=ok
// SIG undefined FUN_1467b92ca(void)

int FUN_1467b92ca(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1467b9313:
      lVar11 = (longlong)iVar1 * 0x50;
      iVar3 = *(int *)(lVar4 + 8 + lVar11);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar8 = 0;
        do {
          uVar9 = *(ushort *)(*(longlong *)(lVar4 + lVar11) + lVar8);
          uVar10 = (ulonglong)uVar9;
          uVar6 = *(ushort *)(*param_3 + lVar8);
          if (uVar9 == uVar6) {
            if (uVar9 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar6 | uVar9)) goto LAB_1467b9389;
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            uVar7 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar7]) goto LAB_1467b9389;
          }
          lVar8 = lVar8 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1467b937a;
    }
  }
  return -1;
LAB_1467b9389:
  if (uVar9 == uVar6) {
    return iVar1;
  }
LAB_1467b937a:
  iVar1 = *(int *)(lVar4 + 0x48 + lVar11);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1467b9313;
}



// FUNCTION 1467b9394 FUN_1467b9394 body=150 status=ok
// SIG undefined FUN_1467b9394(void)

void FUN_1467b9394(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x50 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
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
      puVar7 = puVar7 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1467b942a FUN_1467b942a body=480 status=ok
// SIG undefined FUN_1467b942a(void)

void FUN_1467b942a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x50;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x4c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b960c FUN_1467b960c body=54 status=ok
// SIG undefined FUN_1467b960c(void)

void FUN_1467b960c(longlong *param_1)

{
  FUN_1467b9642(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467b9642 FUN_1467b9642 body=388 status=ok
// SIG undefined FUN_1467b9642(void)

void FUN_1467b9642(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x10 + lVar4 * 0x50) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x50) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140e9549c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar5 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar5 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar3 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1467b97c8 FUN_1467b97c8 body=55 status=ok
// SIG undefined FUN_1467b97c8(void)

void FUN_1467b97c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0 && (param_3 != 0 && param_2 != 0)) {
    FUN_1467b98d6();
  }
  return;
}



// FUNCTION 1467b9800 FUN_1467b9800 body=213 status=ok
// SIG undefined FUN_1467b9800(void)

void FUN_1467b9800(undefined8 param_1,longlong param_2,wchar_t *param_3)

{
  size_t sVar1;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 != (wchar_t *)0x0 && param_2 != 0) {
    FUN_145d03cb4(L"Additional Crash Context (Key=\"%s\", Value=\"%s\")");
    local_40 = 0;
    sVar1 = wcslen(param_3);
    FUN_1446fe5a4(local_c0,param_3,sVar1 & 0xffffffff,1);
    local_c8 = &DAT_149e049d8;
    FUN_1467b98d6(param_1,param_2,local_38,local_30);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b98d6 FUN_1467b98d6 body=225 status=ok
// SIG undefined FUN_1467b98d6(void)

void FUN_1467b98d6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined1 auStack_868 [32];
  undefined8 local_848;
  undefined8 local_840;
  undefined1 local_838 [2048];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_868;
  memset(local_838,0,0x800);
  local_840 = param_5;
  local_848 = param_2;
  FUN_144737500(local_838,0x400,L"%s/%s.%s",*(undefined8 *)(param_1 + 8));
  plVar1 = (longlong *)FUN_140e92164();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x100))(plVar1,local_838,0,0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_3,param_4);
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
    (**(code **)*plVar1)(plVar1,1);
  }
  if ((local_38 ^ (ulonglong)auStack_868) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b99b8 FUN_1467b99b8 body=209 status=ok
// SIG undefined FUN_1467b99b8(void)

int FUN_1467b99b8(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 1467b9a9c FUN_1467b9a9c body=38 status=ok
// SIG undefined FUN_1467b9a9c(void)

undefined8 FUN_1467b9a9c(undefined8 param_1,int param_2)

{
  FUN_1467b9b66();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467b9ac2 FUN_1467b9ac2 body=67 status=ok
// SIG undefined FUN_1467b9ac2(void)

void FUN_1467b9ac2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  
  uVar1 = FUN_14001cc68(0x70,0x10);
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 0x10);
  }
  FUN_1467b9be8(uVar1,*(undefined8 *)(param_1 + 8),puVar2,param_2);
  return;
}



// FUNCTION 1467b9b0a FUN_1467b9b0a body=87 status=ok
// SIG undefined FUN_1467b9b0a(void)

void FUN_1467b9b0a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0xa1) != '\0') {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  lVar2 = 0;
  do {
    plVar1 = *(longlong **)(param_1 + 0x80 + lVar2 * 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x48))();
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
                    /* WARNING: Could not recover jumptable at 0x0001467b9b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 1467b9b66 FUN_1467b9b66 body=129 status=ok
// SIG undefined FUN_1467b9b66(void)

void FUN_1467b9b66(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  longlong lVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 6);
  EnterCriticalSection(lpCriticalSection);
  lVar2 = 0x10;
  do {
    puVar1 = (undefined8 *)param_1[lVar2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x14);
  LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  DeleteCriticalSection(lpCriticalSection);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e064c0;
  return;
}



// FUNCTION 1467b9be8 FUN_1467b9be8 body=133 status=ok
// SIG undefined FUN_1467b9be8(void)

undefined8 *
FUN_1467b9be8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  uVar2 = 1;
  FUN_1402a8750();
  *param_1 = &PTR_FUN_149e050d0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10,param_3,param_4,uVar2,uVar3);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149e06640;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined2 *)(puVar1 + 5) = 3;
  puVar1[6] = 0xffffffffffffffff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_149e05100;
  puVar1[9] = param_1;
  param_1[0xb] = puVar1;
  FUN_1402a87ea(param_1);
  return param_1;
}



// FUNCTION 1467b9c6e FUN_1467b9c6e body=38 status=ok
// SIG undefined FUN_1467b9c6e(void)

undefined8 FUN_1467b9c6e(undefined8 param_1,int param_2)

{
  FUN_140187ede();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467b9c96 FUN_1467b9c96 body=56 status=ok
// SIG undefined FUN_1467b9c96(void)

void FUN_1467b9c96(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x53) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x80))
                      (*(longlong **)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  FUN_14009bf40(param_1);
  *(undefined1 *)(param_1 + 0x51) = 1;
  return;
}



// FUNCTION 1467b9ce0 FUN_1467b9ce0 body=8 status=ok
// SIG undefined FUN_1467b9ce0(void)

undefined8 FUN_1467b9ce0(void)

{
  return 0xffffffffffffffff;
}



// FUNCTION 1467b9ce8 FUN_1467b9ce8 body=3 status=ok
// SIG undefined FUN_1467b9ce8(void)

undefined8 FUN_1467b9ce8(void)

{
  return 0;
}



// FUNCTION 1467b9cec FUN_1467b9cec body=2 status=ok
// SIG undefined FUN_1467b9cec(void)

void FUN_1467b9cec(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467b9cee FUN_1467b9cee body=132 status=ok
// SIG undefined FUN_1467b9cee(void)

void FUN_1467b9cee(longlong param_1,int param_2)

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



// FUNCTION 1467b9d74 FUN_1467b9d74 body=39 status=ok
// SIG undefined FUN_1467b9d74(void)

undefined8 * FUN_1467b9d74(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e05140;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467b9d9c FUN_1467b9d9c body=39 status=ok
// SIG undefined FUN_1467b9d9c(void)

undefined8 * FUN_1467b9d9c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e05160;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467b9dc8 FUN_1467b9dc8 body=67 status=ok
// SIG undefined FUN_1467b9dc8(void)

void FUN_1467b9dc8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10),&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b9e0c FUN_1467b9e0c body=39 status=ok
// SIG undefined FUN_1467b9e0c(void)

undefined8 * FUN_1467b9e0c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e051a0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467b9e34 FUN_1467b9e34 body=38 status=ok
// SIG undefined FUN_1467b9e34(void)

undefined8 FUN_1467b9e34(undefined8 param_1,int param_2)

{
  FUN_146268e08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467b9e9e FUN_1467b9e9e body=133 status=ok
// SIG undefined FUN_1467b9e9e(void)

undefined8 FUN_1467b9e9e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  FUN_1467ba2d2(&local_38,param_3);
  FUN_1467ba1ea(param_1 + 8,param_2,&local_38);
  FUN_1449db362(&local_38);
  FUN_1449db362(param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b9f3c FUN_1467b9f3c body=78 status=ok
// SIG undefined FUN_1467b9f3c(void)

void FUN_1467b9f3c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_10;
  local_18 = 1;
  local_10 = param_2;
  (**(code **)(*param_1 + 0x80))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b9f8c FUN_1467b9f8c body=78 status=ok
// SIG undefined FUN_1467b9f8c(void)

void FUN_1467b9f8c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_10;
  local_18 = 1;
  local_10 = param_2;
  (**(code **)(*param_1 + 0x88))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ba000 FUN_1467ba000 body=133 status=ok
// SIG undefined FUN_1467ba000(void)

undefined8 FUN_1467ba000(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  FUN_1413d6220(&local_38,param_3);
  FUN_145941952(param_1 + 0x20,param_2,&local_38);
  FUN_1449db362(&local_38);
  FUN_1449db362(param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ba096 FUN_1467ba096 body=133 status=ok
// SIG undefined FUN_1467ba096(void)

undefined8 FUN_1467ba096(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  FUN_1467ba43e(&local_38,param_3);
  FUN_1467ba356(param_1 + 0x38,param_2,&local_38);
  FUN_1449db362(&local_38);
  FUN_1449db362(param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ba144 FUN_1467ba144 body=165 status=ok
// SIG undefined FUN_1467ba144(void)

void FUN_1467ba144(longlong *param_1,undefined4 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,1), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1467ba1c5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1467ba1c5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1467ba1ea FUN_1467ba1ea body=230 status=ok
// SIG undefined FUN_1467ba1ea(void)

undefined8 * FUN_1467ba1ea(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1467ba2d2 FUN_1467ba2d2 body=130 status=ok
// SIG undefined FUN_1467ba2d2(void)

void FUN_1467ba2d2(longlong *param_1,longlong *param_2)

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



// FUNCTION 1467ba356 FUN_1467ba356 body=230 status=ok
// SIG undefined FUN_1467ba356(void)

undefined8 * FUN_1467ba356(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1467ba43e FUN_1467ba43e body=130 status=ok
// SIG undefined FUN_1467ba43e(void)

void FUN_1467ba43e(longlong *param_1,longlong *param_2)

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



// FUNCTION 1467ba4ea FUN_1467ba4ea body=38 status=ok
// SIG undefined FUN_1467ba4ea(void)

undefined8 FUN_1467ba4ea(undefined8 param_1,int param_2)

{
  FUN_145a3576c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467ba510 FUN_1467ba510 body=1 status=ok
// SIG undefined FUN_1467ba510(void)

void FUN_1467ba510(void)

{
  return;
}



// FUNCTION 1467ba528 FUN_1467ba528 body=250 status=ok
// SIG undefined FUN_1467ba528(void)

void FUN_1467ba528(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x60);
  plVar2 = (longlong *)*param_2;
  plVar3 = *(longlong **)(param_1 + 0x60);
  if (plVar3 != plVar2) {
    *plVar1 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_1 + 0x68) = (int)param_2[1];
  local_38.QuadPart = 0;
  uStack_30 = 0;
  CoCreateGuid((GUID *)&local_38.s);
  *(DWORD *)(param_1 + 0xa8) = local_38.s.LowPart;
  *(LONG *)(param_1 + 0xac) = local_38.s.HighPart;
  *(undefined4 *)(param_1 + 0xb0) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 0xb4) = uStack_30._4_4_;
  QueryPerformanceCounter(&local_38);
  *(double *)(param_1 + 0x70) = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  DAT_14c872a70 = 1;
  FUN_140498822(param_1 + 0x78,plVar1);
  local_38 = *(LARGE_INTEGER *)(param_1 + 0xa8);
  uStack_30 = *(undefined8 *)(param_1 + 0xb0);
  FUN_1467ba6d4(param_1 + 0xb8,&local_38,plVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ba624 FUN_1467ba624 body=154 status=ok
// SIG undefined FUN_1467ba624(void)

void FUN_1467ba624(longlong param_1)

{
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  QueryPerformanceCounter(&local_38);
  FUN_1467ba7b6(param_1 + 0x90,param_1 + 0x60,
                ((double)CONCAT44(local_38.s.HighPart,local_38.s.LowPart) * DAT_14c83f420 +
                16777216.0) - *(double *)(param_1 + 0x70));
  local_38.s.LowPart = *(DWORD *)(param_1 + 0xa8);
  local_38.s.HighPart = *(LONG *)(param_1 + 0xac);
  uStack_30 = *(undefined4 *)(param_1 + 0xb0);
  uStack_2c = *(undefined4 *)(param_1 + 0xb4);
  FUN_1467ba6d4(param_1 + 0xd0,&local_38,param_1 + 0x60);
  DAT_14c872a70 = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ba6d4 FUN_1467ba6d4 body=225 status=ok
// SIG undefined FUN_1467ba6d4(void)

void FUN_1467ba6d4(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar8 = uVar5 * 0x10 + -8;
      uVar7 = uVar5;
      while ((*(int *)(*param_1 + lVar8) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0))) {
        local_58 = *param_2;
        uStack_54 = param_2[1];
        uStack_50 = param_2[2];
        uStack_4c = param_2[3];
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_58,param_3);
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar6) goto LAB_1467ba781;
          goto LAB_1467ba790;
        }
      }
      uVar5 = uVar7 - 1;
      bVar6 = true;
    } while (1 < uVar7);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1467ba781:
    FUN_14474d06a(param_1,0);
  }
LAB_1467ba790:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ba7b6 FUN_1467ba7b6 body=189 status=ok
// SIG undefined FUN_1467ba7b6(void)

void FUN_1467ba7b6(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1467ba845;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1467ba845:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1467ba874 FUN_1467ba874 body=74 status=ok
// SIG undefined FUN_1467ba874(void)

undefined8 * FUN_1467ba874(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e06330;
  puVar1 = TlsGetValue(DAT_14c758730);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c758730,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467ba8be FUN_1467ba8be body=31 status=ok
// SIG undefined FUN_1467ba8be(void)

undefined8 FUN_1467ba8be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467ba8fa FUN_1467ba8fa body=93 status=ok
// SIG undefined FUN_1467ba8fa(void)

void FUN_1467ba8fa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149e056c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467ba958 FUN_1467ba958 body=93 status=ok
// SIG undefined FUN_1467ba958(void)

void FUN_1467ba958(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149e056c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467ba9b6 FUN_1467ba9b6 body=126 status=ok
// SIG undefined FUN_1467ba9b6(void)

void FUN_1467ba9b6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149e056c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467baa25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467baa42 FUN_1467baa42 body=21 status=ok
// SIG undefined FUN_1467baa42(void)

undefined8 FUN_1467baa42(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1467baa58 FUN_1467baa58 body=132 status=ok
// SIG undefined FUN_1467baa58(void)

void FUN_1467baa58(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467baade FUN_1467baade body=48 status=ok
// SIG undefined FUN_1467baade(void)

void FUN_1467baade(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 1467bab0e FUN_1467bab0e body=315 status=ok
// SIG undefined FUN_1467bab0e(void)

undefined4 * FUN_1467bab0e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = 0;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  *(undefined8 *)(param_2 + 0x12) = 0;
  uVar1 = param_2[0x14];
  uVar2 = param_2[0x15];
  uVar3 = param_2[0x16];
  uVar4 = param_2[0x17];
  uVar5 = param_2[0x18];
  uVar6 = param_2[0x19];
  uVar7 = param_2[0x1a];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar5;
  param_1[0x19] = uVar6;
  param_1[0x1a] = uVar7;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar2;
  param_1[0x16] = uVar3;
  param_1[0x17] = uVar4;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_2 + 0x1c) = 0;
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  *(undefined8 *)(param_2 + 0x1e) = 0;
  FUN_1467bacde(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_2 + 0x36) = 0;
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(param_2 + 0x3a);
  return param_1;
}



// FUNCTION 1467bac4a FUN_1467bac4a body=146 status=ok
// SIG undefined FUN_1467bac4a(void)

void FUN_1467bac4a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467bacde FUN_1467bacde body=123 status=ok
// SIG undefined FUN_1467bacde(void)

undefined8 * FUN_1467bacde(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1467bad5a();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1467bad5a FUN_1467bad5a body=413 status=ok
// SIG undefined FUN_1467bad5a(void)

longlong * FUN_1467bad5a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    uVar5 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, uStack_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x20;
        FUN_1467bb158(*(undefined8 *)(lVar2 + 8 + lVar8),*(undefined4 *)(lVar2 + 0x10 + lVar8));
        if (*(longlong *)(lVar2 + 8 + lVar8) != 0) {
          FUN_1400020a8();
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_88 != param_1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || local_70._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467baef8 FUN_1467baef8 body=62 status=ok
// SIG undefined FUN_1467baef8(void)

void FUN_1467baef8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467baf36(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xf0,8);
  }
  return;
}



// FUNCTION 1467baf36 FUN_1467baf36 body=110 status=ok
// SIG undefined FUN_1467baf36(void)

ulonglong FUN_1467baf36(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xf0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1467baf6f;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xf0,8);
      param_2 = param_2 / 0xf0;
    }
  }
LAB_1467baf6f:
  return param_2 & 0xffffffff;
}



// FUNCTION 1467bafa4 FUN_1467bafa4 body=175 status=ok
// SIG undefined FUN_1467bafa4(void)

void FUN_1467bafa4(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1467bb02d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1467bb02d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1467bb054 FUN_1467bb054 body=112 status=ok
// SIG undefined FUN_1467bb054(void)

void FUN_1467bb054(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1467bb0c4 FUN_1467bb0c4 body=147 status=ok
// SIG undefined FUN_1467bb0c4(void)

void FUN_1467bb0c4(longlong param_1,int param_2)

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



// FUNCTION 1467bb158 FUN_1467bb158 body=38 status=ok
// SIG undefined FUN_1467bb158(void)

void FUN_1467bb158(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1467b18ee(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 1467bb17e FUN_1467bb17e body=47 status=ok
// SIG undefined FUN_1467bb17e(void)

void FUN_1467bb17e(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_1467bb23e(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1467bb1ae FUN_1467bb1ae body=143 status=ok
// SIG undefined FUN_1467bb1ae(void)

void FUN_1467bb1ae(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467bb23e FUN_1467bb23e body=412 status=ok
// SIG undefined FUN_1467bb23e(void)

undefined8 * FUN_1467bb23e(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = param_2[4];
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



// FUNCTION 1467bb3da FUN_1467bb3da body=108 status=ok
// SIG undefined FUN_1467bb3da(void)

void FUN_1467bb3da(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x70,8);
  }
  return;
}



// FUNCTION 1467bb446 FUN_1467bb446 body=212 status=ok
// SIG undefined FUN_1467bb446(void)

void FUN_1467bb446(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = param_2[4];
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  param_1[8] = 0;
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_2[9] = 0;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = 0;
  param_1[0xb] = param_2[0xb];
  param_2[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  param_2[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return;
}



// FUNCTION 1467bb51a FUN_1467bb51a body=181 status=ok
// SIG undefined FUN_1467bb51a(void)

longlong FUN_1467bb51a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1467bb5b2;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1467bb5d0(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1467bb5b2:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1467bb5d0 FUN_1467bb5d0 body=286 status=ok
// SIG undefined FUN_1467bb5d0(void)

undefined4 * FUN_1467bb5d0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1467bb6f0(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_1467bb158(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_1467bb7d6(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
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
      FUN_1467bb8f6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bb6f0 FUN_1467bb6f0 body=229 status=ok
// SIG undefined FUN_1467bb6f0(void)

int * FUN_1467bb6f0(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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



// FUNCTION 1467bb7d6 FUN_1467bb7d6 body=174 status=ok
// SIG undefined FUN_1467bb7d6(void)

undefined8 FUN_1467bb7d6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1467bb158(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1467bb884(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467bb884 FUN_1467bb884 body=114 status=ok
// SIG undefined FUN_1467bb884(void)

void FUN_1467bb884(longlong *param_1,int param_2)

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



// FUNCTION 1467bb8f6 FUN_1467bb8f6 body=458 status=ok
// SIG undefined FUN_1467bb8f6(void)

void FUN_1467bb8f6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar10 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar10);
        iVar6 = FUN_144a788f7();
        uVar7 = (longlong)(iVar6 + (int)((ulonglong)uVar4 >> 0x20)) & (longlong)(int)param_1[9] - 1U
        ;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467bbac8 FUN_1467bbac8 body=31 status=ok
// SIG undefined FUN_1467bbac8(void)

undefined8 FUN_1467bbac8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467bbafa FUN_1467bbafa body=93 status=ok
// SIG undefined FUN_1467bbafa(void)

void FUN_1467bbafa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e065d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05b20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1467bbb58 FUN_1467bbb58 body=93 status=ok
// SIG undefined FUN_1467bbb58(void)

void FUN_1467bbb58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e065d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05b20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1467bbbb6 FUN_1467bbbb6 body=126 status=ok
// SIG undefined FUN_1467bbbb6(void)

void FUN_1467bbbb6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e065d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e05b20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467bbc25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467bbc4a FUN_1467bbc4a body=93 status=ok
// SIG undefined FUN_1467bbc4a(void)

void FUN_1467bbc4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e062c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1467bbca8 FUN_1467bbca8 body=126 status=ok
// SIG undefined FUN_1467bbca8(void)

void FUN_1467bbca8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e062c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467bbd17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467bbd2a FUN_1467bbd2a body=14 status=ok
// SIG undefined FUN_1467bbd2a(void)

undefined1 FUN_1467bbd2a(longlong param_1)

{
  (**(code **)(param_1 + 0x18))();
  return 1;
}



// FUNCTION 1467bbd38 FUN_1467bbd38 body=136 status=ok
// SIG undefined FUN_1467bbd38(void)

void FUN_1467bbd38(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(&local_40,&DAT_14c83d638);
  local_30 = local_40;
  local_28 = local_38 + -1;
  if (local_38 == 0) {
    local_28 = 0;
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_1467b61f2(param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bbdc2 FUN_1467bbdc2 body=123 status=ok
// SIG undefined FUN_1467bbdc2(void)

undefined8 * FUN_1467bbdc2(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1467bbe3e();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1467bbe3e FUN_1467bbe3e body=417 status=ok
// SIG undefined FUN_1467bbe3e(void)

longlong * FUN_1467bbe3e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    uVar5 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, uStack_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        if (*(longlong *)(lVar2 + 0x10 + (longlong)iVar6 * 0x50) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x50) != 0) {
          FUN_1400020a8();
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_88 != param_1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || local_70._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bbfe0 FUN_1467bbfe0 body=146 status=ok
// SIG undefined FUN_1467bbfe0(void)

void FUN_1467bbfe0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x468,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x468)) {
      uVar5 = uVar4 / 0x468 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x468,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467bc074 FUN_1467bc074 body=62 status=ok
// SIG undefined FUN_1467bc074(void)

void FUN_1467bc074(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467bc0b2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x468,8);
  }
  return;
}



// FUNCTION 1467bc0b2 FUN_1467bc0b2 body=110 status=ok
// SIG undefined FUN_1467bc0b2(void)

ulonglong FUN_1467bc0b2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x468) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1467bc0eb;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x468,8);
      param_2 = param_2 / 0x468;
    }
  }
LAB_1467bc0eb:
  return param_2 & 0xffffffff;
}



// FUNCTION 1467bc120 FUN_1467bc120 body=43 status=ok
// SIG undefined FUN_1467bc120(void)

void FUN_1467bc120(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1467bc14c FUN_1467bc14c body=68 status=ok
// SIG undefined FUN_1467bc14c(void)

void FUN_1467bc14c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1467bc120(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1467bc192(param_1,param_2);
  return;
}



// FUNCTION 1467bc192 FUN_1467bc192 body=96 status=ok
// SIG undefined FUN_1467bc192(void)

void FUN_1467bc192(longlong param_1,int param_2)

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



// FUNCTION 1467bc1f2 FUN_1467bc1f2 body=132 status=ok
// SIG undefined FUN_1467bc1f2(void)

void FUN_1467bc1f2(longlong param_1,int param_2)

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



// FUNCTION 1467bc278 FUN_1467bc278 body=48 status=ok
// SIG undefined FUN_1467bc278(void)

void FUN_1467bc278(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x468,8);
  }
  return;
}



// FUNCTION 1467bc2a8 FUN_1467bc2a8 body=164 status=ok
// SIG undefined FUN_1467bc2a8(void)

void FUN_1467bc2a8(longlong *param_1,undefined8 param_2)

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
        goto LAB_1467bc328;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1467bc328:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1467bc34c FUN_1467bc34c body=96 status=ok
// SIG undefined FUN_1467bc34c(void)

void FUN_1467bc34c(longlong param_1,int param_2)

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



// FUNCTION 1467bc3ac FUN_1467bc3ac body=59 status=ok
// SIG undefined FUN_1467bc3ac(void)

void FUN_1467bc3ac(longlong param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(param_1 + 0x4c) != 0x7fffffff) {
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  std::_Throw_Cpp_error(6);
}



// FUNCTION 1467bc3e8 FUN_1467bc3e8 body=173 status=ok
// SIG undefined FUN_1467bc3e8(void)

void FUN_1467bc3e8(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1467bc46f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1467bc46f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1467bc4a8 FUN_1467bc4a8 body=56 status=ok
// SIG undefined FUN_1467bc4a8(void)

void FUN_1467bc4a8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001467bc4d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1467bc4e4 FUN_1467bc4e4 body=29 status=ok
// SIG undefined FUN_1467bc4e4(void)

undefined8 FUN_1467bc4e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467bc510 FUN_1467bc510 body=37 status=ok
// SIG undefined FUN_1467bc510(void)

longlong FUN_1467bc510(longlong param_1,int param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467bc535 FUN_1467bc535 body=13 status=ok
// SIG undefined FUN_1467bc535(void)

void FUN_1467bc535(void *param_1)

{
  memset(param_1,0,0xc18);
  return;
}



// FUNCTION 1467bc542 FUN_1467bc542 body=146 status=ok
// SIG undefined FUN_1467bc542(void)

void FUN_1467bc542(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc18)) {
      uVar5 = uVar4 / 0xc18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467bc5d6 FUN_1467bc5d6 body=31 status=ok
// SIG undefined FUN_1467bc5d6(void)

undefined8 FUN_1467bc5d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467bc612 FUN_1467bc612 body=93 status=ok
// SIG undefined FUN_1467bc612(void)

void FUN_1467bc612(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467bc670 FUN_1467bc670 body=126 status=ok
// SIG undefined FUN_1467bc670(void)

void FUN_1467bc670(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e05e30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467bc6df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467bc6fc FUN_1467bc6fc body=21 status=ok
// SIG undefined FUN_1467bc6fc(void)

undefined8 FUN_1467bc6fc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1467bc712 FUN_1467bc712 body=110 status=ok
// SIG undefined FUN_1467bc712(void)

void FUN_1467bc712(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e05f60;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1467bc780(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1467bc120(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467bc780 FUN_1467bc780 body=38 status=ok
// SIG undefined FUN_1467bc780(void)

void FUN_1467bc780(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1467bc7a6(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1467bc7a6 FUN_1467bc7a6 body=59 status=ok
// SIG undefined FUN_1467bc7a6(void)

void FUN_1467bc7a6(longlong *param_1)

{
  FUN_1467bc120(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467bc7e1 FUN_1467bc7e1 body=38 status=ok
// SIG undefined FUN_1467bc7e1(void)

void FUN_1467bc7e1(undefined4 param_1,undefined8 param_2)

{
  FUN_140033559(".\\Runtime/Core/Private/HAL/Allocators/AnsiAllocator.cpp",8,
                L"Trying to resize FAnsiAllocator to an invalid size of %d with element size %I64u",
                param_1,param_2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 1467bc808 FUN_1467bc808 body=106 status=ok
// SIG undefined FUN_1467bc808(void)

undefined8 * FUN_1467bc808(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83f488) {
    FUN_144b3d300(&DAT_14c83f488);
    if (DAT_14c83f488 == -1) {
      DAT_14c83f478 = 0;
      uRam000000014c83f480 = 0;
      atexit((_func_5014 *)&LAB_142751131);
      _Init_thread_footer(&DAT_14c83f488);
    }
  }
  return &DAT_14c83f478;
}



// FUNCTION 1467bc872 FUN_1467bc872 body=106 status=ok
// SIG undefined FUN_1467bc872(void)

undefined8 * FUN_1467bc872(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83f4b8) {
    FUN_144b3d300(&DAT_14c83f4b8);
    if (DAT_14c83f4b8 == -1) {
      DAT_14c83f4a8 = 0;
      uRam000000014c83f4b0 = 0;
      atexit((_func_5014 *)&LAB_142751153);
      _Init_thread_footer(&DAT_14c83f4b8);
    }
  }
  return &DAT_14c83f4a8;
}



// FUNCTION 1467bc8dc FUN_1467bc8dc body=122 status=ok
// SIG undefined FUN_1467bc8dc(void)

undefined4 FUN_1467bc8dc(longlong *param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  if ((int)param_1[1] == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  FUN_1409dff21(&local_34,puVar2);
  uVar1 = local_34;
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bc95c FUN_1467bc95c body=604 status=ok
// SIG undefined FUN_1467bc95c(void)

void FUN_1467bc95c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_198 [32];
  longlong *local_178;
  undefined4 local_170;
  uint uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint local_160;
  int iStack_15c;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined2 *local_148;
  int local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_110 [80];
  byte local_c0;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1408e76da(local_110);
  FUN_140056680(&local_148,L"ConsoleHistory");
  FUN_1446f470e(&local_150,L"History",1);
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar2 = param_1 + 0x70;
  local_138 = (undefined2 *)0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar2;
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar4 = *(int *)(param_1 + 0x88);
  }
  uStack_158 = CONCAT44(uStack_11c,uStack_120);
  local_160 = local_128;
  iStack_15c = iStack_124;
  local_170 = (undefined4)local_138;
  uStack_16c = local_138._4_4_;
  uStack_168 = (int)uStack_130;
  uStack_164 = uStack_130._4_4_;
  local_178 = plVar1;
  if ((iStack_124 != iVar4) || (uStack_130 != lVar2)) {
    do {
      puVar3 = (undefined8 *)(*local_178 + (longlong)iStack_15c * 0x28);
      puVar7 = &DAT_149dfb77a;
      if (*(int *)(puVar3 + 1) != 0) {
        puVar7 = (undefined2 *)*puVar3;
      }
      puVar6 = &DAT_149dfb77a;
      if (local_140 != 0) {
        puVar6 = local_148;
      }
      FUN_140002266(&local_138,L"%s%s",puVar6,puVar7);
      if ((longlong)*(int *)(puVar3 + 3) != 0) {
        lVar5 = puVar3[2];
        lVar8 = (longlong)*(int *)(puVar3 + 3) << 4;
        do {
          puVar7 = local_138;
          if ((int)uStack_130 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          FUN_140d68bce(local_110,puVar7,local_150,lVar5);
          lVar5 = lVar5 + 0x10;
          lVar8 = lVar8 + -0x10;
        } while (lVar8 != 0);
      }
      if (local_138 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_160 = local_160 & ~uStack_16c;
      FUN_1449c0562(&local_170);
    } while (local_178 != plVar1 ||
             (CONCAT44(uStack_164,uStack_168) != lVar2 || iStack_15c != iVar4));
  }
  FUN_140b7d3f8(&local_138);
  FUN_144a882a8(&local_178,&local_138,L"ConsoleHistory.ini");
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_c0 = local_c0 | 1;
  local_138 = (undefined2 *)0x0;
  uStack_130 = 0;
  FUN_14577b4ea(local_110,&local_178,1,&local_138);
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_178 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1409263a6(local_110);
  if ((local_38 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467bcbba FUN_1467bcbba body=61 status=ok
// SIG undefined FUN_1467bcbba(void)

void FUN_1467bcbba(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x178));
  FUN_1467bcbf8(param_1 + 8,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001467bcbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x178));
  return;
}



// FUNCTION 1467bcbf8 FUN_1467bcbf8 body=771 status=ok
// SIG undefined FUN_1467bcbf8(void)

void FUN_1467bcbf8(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar6 = *(int *)((longlong)param_2 + 0xc);
  FUN_1447a1747(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1408be2c4(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar8 != 0) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_140e83416(&local_98,uVar8);
    iVar6 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar6)) {
      local_50 = iVar6;
      FUN_14482b9e8();
    }
  }
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
    FUN_1408be2c4(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar2 = *local_e0;
      lVar4 = (longlong)iStack_c4 * 0x20;
      iVar6 = *(int *)(lVar2 + 8 + lVar4);
      puVar7 = &DAT_149dfb77a;
      if (iVar6 != 0) {
        puVar7 = *(undefined2 **)(lVar2 + lVar4);
      }
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar5,puVar7);
      iVar6 = FUN_1456cf568(&local_98,uVar3,lVar2 + lVar4);
      if (iVar6 == -1) {
        puVar9 = (undefined8 *)((longlong)iStack_c4 * 0x20 + *local_e0);
        iVar6 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
          FUN_1447a1bd6(param_2,iVar6);
        }
        lVar2 = *param_2;
        lVar4 = (longlong)iVar6 * 0x10;
        puVar1 = (undefined8 *)(lVar2 + lVar4);
        *(undefined8 *)(lVar2 + lVar4) = 0;
        iVar6 = *(int *)(puVar9 + 1);
        _Src = (void *)*puVar9;
        *(int *)(lVar2 + 8 + lVar4) = iVar6;
        if ((longlong)iVar6 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar6,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar6 * 2);
        }
        FUN_14482b35e(&local_98,&local_b8,(longlong)iStack_c4 * 0x20 + *local_e0,0);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467bcefe FUN_1467bcefe body=759 status=ok
// SIG undefined FUN_1467bcefe(void)

void FUN_1467bcefe(longlong param_1,undefined8 *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  size_t sVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined1 auStack_d8 [32];
  LPCRITICAL_SECTION local_b8;
  ulonglong local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  uStack_70 = 0;
  FUN_140056680(&local_a0,param_3);
  FUN_1403de9f2(&local_a0,&local_78,&DAT_149e001d8,1);
  if (local_a0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  sVar6 = wcslen(param_3);
  local_b8 = (LPCRITICAL_SECTION)(param_1 + 0x178);
  EnterCriticalSection(local_b8);
  local_a0 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    uVar14 = sVar6 & 0xffffffff;
    local_b0 = uVar14;
    local_a8 = param_2;
    do {
      lVar12 = *local_a0;
      lVar11 = (longlong)iStack_84;
      plVar9 = *(longlong **)(lVar12 + 0x10 + lVar11 * 0x20);
      cVar4 = (**(code **)(*plVar9 + 0x88))(plVar9);
      lVar3 = local_78;
      if (cVar4 == '\0') {
        puVar10 = (undefined8 *)(lVar12 + lVar11 * 0x20);
        if ((int)uVar14 == 1) {
          iVar2 = *(int *)(puVar10 + 1);
          puVar7 = &DAT_149dfb77a;
          if (iVar2 != 0) {
            puVar7 = (undefined2 *)*puVar10;
          }
          wVar1 = *param_3;
          if (wVar1 != L'\0') {
            lVar12 = 0;
            do {
              if ((wchar_t)((ushort)(*(ushort *)((longlong)puVar7 + lVar12) - 0x41 < 0x1a) * 0x20 +
                           *(ushort *)((longlong)puVar7 + lVar12)) !=
                  (wchar_t)((ushort)((ushort)wVar1 - 0x41 < 0x1a) * 0x20 + wVar1))
              goto LAB_1467bd050;
              wVar1 = *(wchar_t *)((longlong)param_3 + lVar12 + 2);
              lVar12 = lVar12 + 2;
            } while (wVar1 != L'\0');
          }
joined_r0x0001467bd185:
          puVar7 = &DAT_149dfb77a;
          if (iVar2 != 0) {
            puVar7 = (undefined2 *)*puVar10;
          }
          if (*(int *)(param_2 + 1) == 0) {
            plVar9 = (longlong *)0x0;
          }
          else {
            plVar9 = (longlong *)*param_2;
          }
          (**(code **)(*plVar9 + 0x58))(plVar9,puVar7);
        }
        else {
          lVar12 = (longlong)(int)uStack_70;
          if (0 < lVar12) {
            iVar2 = *(int *)(puVar10 + 1);
            bVar13 = 1;
            lVar11 = 0;
            do {
              puVar7 = &DAT_149dfb77a;
              if (*(int *)(lVar3 + 8 + lVar11) != 0) {
                puVar7 = *(undefined2 **)(lVar3 + lVar11);
              }
              puVar8 = &DAT_149dfb77a;
              if (iVar2 != 0) {
                puVar8 = (undefined2 *)*puVar10;
              }
              bVar5 = FUN_1467bd1f6(puVar8,puVar7);
              bVar13 = bVar13 & bVar5;
              lVar11 = lVar11 + 0x10;
            } while (lVar12 * 0x10 != lVar11);
            param_2 = local_a8;
            uVar14 = local_b0;
            if (bVar13 != 0) goto joined_r0x0001467bd185;
          }
        }
      }
LAB_1467bd050:
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < *(int *)(local_90 + 0x18));
  }
  LeaveCriticalSection(local_b8);
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467bd1f6 FUN_1467bd1f6 body=138 status=ok
// SIG undefined FUN_1467bd1f6(void)

undefined8 FUN_1467bd1f6(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    if (*param_2 == 0) {
      return 1;
    }
    do {
      lVar3 = 2;
      uVar2 = *param_2;
      while ((ushort)((ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1) ==
             (ushort)((ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2)) {
        uVar1 = *(ushort *)((longlong)param_1 + lVar3);
        uVar2 = *(ushort *)((longlong)param_2 + lVar3);
        if (uVar1 == 0) {
          if (uVar2 == 0) {
            return 1;
          }
          break;
        }
        lVar3 = lVar3 + 2;
        if (uVar2 == 0) {
          return 1;
        }
      }
      uVar1 = param_1[1];
      param_1 = param_1 + 1;
    } while (uVar1 != 0);
  }
  return 0;
}



// FUNCTION 1467bd280 FUN_1467bd280 body=171 status=ok
// SIG undefined FUN_1467bd280(void)

void FUN_1467bd280(undefined8 param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_1;
  FUN_14619c2be(&local_38,&local_28,0);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = DAT_14c8407a8;
  puVar2 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  FUN_1446f470e(&local_40,puVar2,1);
  (**(code **)(*plVar1 + 0x118))(plVar1,local_40,0xff000000);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8(local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bd32c FUN_1467bd32c body=399 status=ok
// SIG undefined FUN_1467bd32c(void)

void FUN_1467bd32c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *_Dst;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461b141c();
  FUN_140056680(&local_48,param_2);
  puVar6 = local_48;
  if (local_40 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  iVar4 = local_40 + -1;
  if (local_40 == 0) {
    iVar4 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar4,puVar6);
  plVar5 = (longlong *)FUN_140d07e54(param_1 + 0x60,uVar3,&local_48);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  iVar4 = (int)plVar5[1];
  while (0x40 < iVar4) {
    _Dst = (longlong *)*plVar5;
    if (*_Dst != 0) {
      FUN_1400020a8();
      iVar4 = (int)plVar5[1];
    }
    if (iVar4 + -1 == 0) {
      iVar4 = 0;
    }
    else {
      memmove(_Dst,_Dst + 2,(longlong)(iVar4 + -1) << 4);
      iVar4 = (int)plVar5[1] + -1;
    }
    *(int *)(plVar5 + 1) = iVar4;
    FUN_140b12644(plVar5);
    iVar4 = (int)plVar5[1];
  }
  FUN_140056680(&local_48,param_3);
  local_38 = &local_48;
  FUN_140c8411c(plVar5);
  iVar4 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
    FUN_1447a1bd6(plVar5,iVar4);
  }
  puVar6 = local_48;
  lVar2 = *plVar5;
  lVar7 = (longlong)iVar4 * 0x10;
  puVar1 = (undefined8 *)(lVar2 + lVar7);
  *(undefined8 *)(lVar2 + lVar7) = 0;
  *(int *)(lVar2 + 8 + lVar7) = local_40;
  if ((longlong)local_40 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,local_40,0);
    memcpy((void *)*puVar1,puVar6,(longlong)local_40 * 2);
  }
  FUN_1467bc95c(param_1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bd4bc FUN_1467bd4bc body=177 status=ok
// SIG undefined FUN_1467bd4bc(void)

bool FUN_1467bd4bc(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x178));
  FUN_140056680(&local_38,param_2);
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar2 = local_30 + -1;
  if (local_30 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar3);
  iVar2 = FUN_14483203a(param_1 + 8,uVar1,&local_38);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x178));
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2 != -1;
}



// FUNCTION 1467bd586 FUN_1467bd586 body=414 status=ok
// SIG undefined FUN_1467bd586(void)

void FUN_1467bd586(undefined8 param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar6 = FUN_144a788f7(param_2 & 0xffffffff);
  if (DAT_14c83f430 != DAT_14c83f45c) {
    puVar8 = &DAT_14c83f460;
    if (DAT_14c83f468 != (undefined *)0x0) {
      puVar8 = DAT_14c83f468;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)(DAT_14c83f470 - 1U & iVar6 + (int)(param_2 >> 0x20)) * 4);
    while (iVar6 != -1) {
      puVar2 = (ulonglong *)(DAT_14c83f428 + (longlong)iVar6 * 0x18);
      if (*puVar2 == param_2) {
        if ((puVar2 != (ulonglong *)0x0) &&
           (plVar3 = (longlong *)puVar2[1], plVar3 != (longlong *)0x0)) {
          plVar1 = plVar3 + 2;
          local_58 = 0x100000000;
          local_48 = 0xffffffff;
          local_40 = 0;
          iVar6 = 0;
          local_50 = plVar1;
          if ((int)plVar3[5] != 0) {
            FUN_1449c0562(&local_58);
            iVar6 = (int)plVar3[5];
          }
          local_68 = local_48;
          uVar5 = local_68;
          local_60 = local_40;
          local_5c = local_3c;
          local_78 = local_58;
          local_70 = local_50;
          local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
          iVar7 = local_68._4_4_;
          local_80 = plVar3;
          if ((local_68._4_4_ != iVar6) || (local_68 = uVar5, local_50 != plVar1)) {
            do {
              local_68 = uVar5;
              plVar4 = *(longlong **)(*local_80 + (longlong)iVar7 * 0x10);
              (**(code **)(*plVar4 + 0xa0))(plVar4,param_3,param_2);
              local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
              FUN_1449c0562(&local_78);
              iVar7 = local_68._4_4_;
              uVar5 = local_68;
            } while (local_80 != plVar3 || (local_70 != plVar1 || local_68._4_4_ != iVar6));
          }
          FUN_1467c1b00(param_2);
        }
        break;
      }
      iVar6 = (int)puVar2[2];
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bd725 FUN_1467bd725 body=3 status=ok
// SIG undefined FUN_1467bd725(void)

undefined8 FUN_1467bd725(void)

{
  return 0;
}



// FUNCTION 1467bd728 FUN_1467bd728 body=297 status=ok
// SIG undefined FUN_1467bd728(void)

void FUN_1467bd728(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  char cVar3;
  FILE *_File;
  undefined1 auStack_468 [40];
  undefined2 *local_440;
  undefined2 *local_438;
  ulonglong *local_430;
  char local_428;
  undefined2 local_420 [512];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_468;
  cVar1 = *(char *)(param_2 + 0x1c);
  cVar3 = FUN_14049bbfa();
  if ((cVar3 != '\0') && ((byte)(cVar1 - 2U) < 3)) {
    local_440 = local_420;
    local_428 = '\0';
    local_430 = &local_20;
    local_438 = local_440;
    FUN_14681082c(param_1,&local_440,param_2,0);
    if (local_430 <= local_438 + 1) {
      FUN_140213274(&local_440,1);
    }
    *local_438 = 10;
    local_438[1] = 0;
    local_438 = local_438 + 1;
    FUN_14049bb83(&DAT_149e11938,local_440);
    _File = (FILE *)__acrt_iob_func(1);
    fflush(_File);
    if (local_428 == '\x01') {
      FUN_1400020a8(local_440);
    }
  }
  FUN_1468104de(param_1,param_2);
  plVar2 = *(longlong **)(param_1 + 0x120);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bd852 FUN_1467bd852 body=270 status=ok
// SIG undefined FUN_1467bd852(void)

ulonglong FUN_1467bd852(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  FILE *pFVar5;
  undefined4 extraout_var;
  char *pcVar6;
  undefined2 *puVar7;
  undefined1 auStack_148 [32];
  char local_128 [264];
  ulonglong local_20;
  
  uVar3 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_20 = uVar3;
  if (DAT_14c86a9f0 == '\x01') {
    puVar4 = (undefined8 *)FUN_1447a1f4a(param_2);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*puVar4;
    }
    FUN_14049bb83(&DAT_149e11938,puVar7);
    pFVar5 = (FILE *)__acrt_iob_func(1);
    fflush(pFVar5);
    FUN_14049bb83(&DAT_149e11938,L" (Y/N): ");
    pFVar5 = (FILE *)__acrt_iob_func(1);
    fflush(pFVar5);
    cVar1 = FUN_140b3f358();
    if (cVar1 == '\0') {
      pFVar5 = (FILE *)__acrt_iob_func(0);
      pcVar6 = fgets(local_128,0x100,pFVar5);
      uVar3 = CONCAT71((int7)((ulonglong)pcVar6 >> 8),local_128[0]) & 0xffffffffffffffdf;
      uVar3 = CONCAT71((int7)(uVar3 >> 8),(char)uVar3 == 'Y');
      if (pcVar6 != (char *)0x0) goto LAB_1467bd90b;
    }
    else {
      FUN_14049bb83(&DAT_149e11938,&DAT_149e11952);
      pFVar5 = (FILE *)__acrt_iob_func(1);
      iVar2 = fflush(pFVar5);
      uVar3 = CONCAT44(extraout_var,iVar2);
    }
  }
  uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
LAB_1467bd90b:
  if ((local_20 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1467bd962 FUN_1467bd962 body=823 status=ok
// SIG undefined FUN_1467bd962(void)

uint FUN_1467bd962(longlong *param_1,undefined8 param_2,undefined8 param_3,byte param_4,byte param_5
                  ,undefined8 *param_6,undefined4 param_7,uint param_8)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = (**(code **)*param_6)(param_6,0);
  uVar11 = 2;
  if (cVar4 != '\0') {
    FUN_140056680(&local_70,param_3);
    FUN_140056680(&local_80,param_2);
    puVar8 = local_70;
    if (local_68 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    local_98 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,puVar8,param_7);
    if (local_98 == (longlong *)0x0) {
      uVar11 = 1;
    }
    else {
      puVar8 = local_80;
      if (local_78 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      local_88 = (longlong *)
                 (**(code **)(*param_1 + 0x20))
                           (param_1,puVar8,(uint)(param_4 ^ 1) * 2 + (uint)param_5 * 4 | param_8);
      if (local_88 == (longlong *)0x0) {
        uVar11 = 1;
      }
      else {
        lVar6 = (**(code **)(*local_98 + 0x30))();
        lVar7 = FUN_144a7d36f(0x8000);
        if (lVar6 < 1) {
          bVar1 = false;
          uVar11 = 0;
        }
        else {
          lVar14 = 0;
          lVar9 = 0;
          lVar10 = 0;
          lVar13 = lVar6;
          local_a0 = param_1;
          local_90 = lVar7;
          do {
            lVar7 = local_90;
            plVar2 = local_98;
            lVar12 = 8;
            if (lVar13 < 8) {
              lVar12 = lVar13;
            }
            (**(code **)(*local_98 + 0x170))(local_98,local_90,lVar12);
            plVar3 = local_88;
            if (((*(byte *)((longlong)plVar2 + 0x29) & 2) != 0) ||
               ((**(code **)(*local_88 + 0x170))(local_88,lVar7,lVar12), lVar7 = local_90,
               (*(byte *)((longlong)plVar3 + 0x29) & 2) != 0)) {
              uVar11 = 1;
LAB_1467bdb89:
              bVar1 = true;
              param_1 = local_a0;
              goto LAB_1467bdb8c;
            }
            lVar7 = lVar14 / lVar6;
            if ((lVar10 != lVar7) &&
               (cVar4 = (**(code **)*param_6)(param_6,(float)lVar7 / 100.0), cVar4 == '\0')) {
              uVar11 = 2;
              lVar7 = local_90;
              goto LAB_1467bdb89;
            }
            lVar9 = lVar9 + 8;
            lVar14 = lVar14 + 800;
            lVar13 = lVar13 + -8;
            lVar10 = lVar7;
          } while (lVar9 < lVar6);
          bVar1 = false;
          uVar11 = 0;
          lVar7 = local_90;
          param_1 = local_a0;
        }
LAB_1467bdb8c:
        if (lVar7 != 0) {
          thunk_FUN_1400020a8(lVar7);
        }
        if (!bVar1) {
          bVar5 = (**(code **)(*local_88 + 0x1f8))();
          uVar11 = (uint)(bVar5 ^ 1);
        }
        (**(code **)*local_88)(local_88,1);
        if (uVar11 == 0) {
          bVar5 = (**(code **)(*local_98 + 0x1f8))();
          uVar11 = (uint)(bVar5 ^ 1);
        }
        else {
          puVar8 = local_80;
          if (local_78 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          local_a8 = 0;
          (**(code **)(*param_1 + 0x30))(param_1,puVar8,0,0);
        }
      }
      (**(code **)*local_98)(local_98,1);
      if (uVar11 == 0) {
        bVar5 = (**(code **)*param_6)(param_6,0x3f800000);
        uVar11 = (uint)(bVar5 ^ 1) * 2;
      }
    }
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1467bdc9a FUN_1467bdc9a body=68 status=ok
// SIG undefined FUN_1467bdc9a(void)

undefined8 FUN_1467bdc9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
  (**(code **)(*plVar2 + 0x120))(plVar2,param_2,param_3);
  return param_2;
}



// FUNCTION 1467bdcde FUN_1467bdcde body=118 status=ok
// SIG undefined FUN_1467bdcde(void)

void FUN_1467bdcde(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
  local_30 = *param_3;
  local_28 = param_3[1];
  (**(code **)(*plVar2 + 0x1a0))(plVar2,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bdd56 FUN_1467bdd56 body=68 status=ok
// SIG undefined FUN_1467bdd56(void)

void FUN_1467bdd56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001467bdd87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x140))(plVar2,param_2,param_3);
  return;
}



// FUNCTION 1467bdd9a FUN_1467bdd9a body=118 status=ok
// SIG undefined FUN_1467bdd9a(void)

void FUN_1467bdd9a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
  local_30 = *param_3;
  local_28 = param_3[1];
  (**(code **)(*plVar2 + 0x138))(plVar2,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bde12 FUN_1467bde12 body=68 status=ok
// SIG undefined FUN_1467bde12(void)

void FUN_1467bde12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001467bde43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x1b8))(plVar2,param_2,param_3);
  return;
}



// FUNCTION 1467bde56 FUN_1467bde56 body=118 status=ok
// SIG undefined FUN_1467bde56(void)

void FUN_1467bde56(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
  local_30 = *param_3;
  local_28 = param_3[1];
  (**(code **)(*plVar2 + 0x1b0))(plVar2,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bdece FUN_1467bdece body=78 status=ok
// SIG undefined FUN_1467bdece(void)

void FUN_1467bdece(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001467bdf09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 400))(plVar2,param_2,param_3,param_4);
  return;
}



// FUNCTION 1467bdf1c FUN_1467bdf1c body=68 status=ok
// SIG undefined FUN_1467bdf1c(void)

undefined8 FUN_1467bdf1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
  (**(code **)(*plVar2 + 0xc0))(plVar2,param_2,param_3);
  return param_2;
}



// FUNCTION 1467bdf60 FUN_1467bdf60 body=68 status=ok
// SIG undefined FUN_1467bdf60(void)

undefined8 FUN_1467bdf60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
  (**(code **)(*plVar2 + 200))(plVar2,param_2,param_3);
  return param_2;
}



// FUNCTION 1467bdfa4 FUN_1467bdfa4 body=110 status=ok
// SIG undefined FUN_1467bdfa4(void)

void FUN_1467bdfa4(longlong *param_1)

{
  param_1[0x19] = 0;
  if (param_1[0x1a] != 0) {
    FUN_140d2d4a8(param_1 + 0x18,0);
  }
  param_1[0x16] = param_1[0x15];
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x0001467be008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))(param_1,param_1[0x15]);
    return;
  }
  return;
}



// FUNCTION 1467be024 FUN_1467be024 body=32 status=ok
// SIG undefined FUN_1467be024(void)

void FUN_1467be024(longlong param_1)

{
  FUN_1405b1996();
                    /* WARNING: Could not recover jumptable at 0x0001467be040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x50))();
  return;
}



// FUNCTION 1467be04c FUN_1467be04c body=38 status=ok
// SIG undefined FUN_1467be04c(void)

undefined8 FUN_1467be04c(undefined8 param_1,int param_2)

{
  FUN_142755b14();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467be072 FUN_1467be072 body=38 status=ok
// SIG undefined FUN_1467be072(void)

undefined8 FUN_1467be072(undefined8 param_1,int param_2)

{
  FUN_145eeadb8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467be098 FUN_1467be098 body=747 status=ok
// SIG undefined FUN_1467be098(void)

undefined8 FUN_1467be098(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8 [2];
  longlong *local_e8 [2];
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  longlong *local_d0 [2];
  longlong local_c0;
  int local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  (**(code **)(*param_1 + 0xc0))(param_1,&local_c0);
  if (local_b8 < 2) {
    local_80 = L"CVarEmptyValueString";
    local_78[0] = 0x14;
    FUN_1446e940c(local_d4,&local_80);
    local_80 = L"ConsoleManager";
    local_78[0] = 0xe;
    FUN_1446e940c(local_d8,&local_80);
    FUN_140208bae(local_d0,local_d8,local_d4,L"<empty>");
  }
  else {
    FUN_140009b9a(local_d0,&local_c0);
  }
  uVar3 = (**(code **)(*param_1 + 8))(param_1);
  FUN_140056680(local_f8,uVar3);
  FUN_140233b1a(local_e8,local_f8);
  local_80 = L"CVarDetailedHelp";
  local_78[0] = 0x10;
  FUN_1446e940c(local_11c,&local_80);
  local_80 = L"ConsoleManager";
  local_78[0] = 0xe;
  FUN_1446e940c(local_120,&local_80);
  FUN_140208bae(local_118,local_120,local_11c,L"{0}\n\nCurrent value : {1}");
  FUN_14023409e(&local_108,local_118,1);
  local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
  FUN_14023423e(local_70,local_e8);
  local_60 = 4;
  FUN_14023423e(local_50,local_d0);
  local_98 = &local_40;
  local_a0 = &local_80;
  FUN_14010d304(&local_90);
  local_b0 = local_108;
  local_a8 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_b0,&local_90);
  FUN_14007f2db(local_90,local_88);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0x30;
  do {
    plVar2 = *(longlong **)((longlong)local_78 + lVar4 + -8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)((longlong)local_78 + lVar4 + -8) = 0;
      *(undefined4 *)((longlong)local_78 + lVar4) = 0;
    }
    lVar4 = lVar4 + -0x20;
  } while (lVar4 != -0x10);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_100 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467be3bc FUN_1467be3bc body=23 status=ok
// SIG undefined FUN_1467be3bc(void)

bool FUN_1467be3bc(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xb0))();
  return iVar1 != 0;
}



// FUNCTION 1467be3d4 FUN_1467be3d4 body=22 status=ok
// SIG undefined FUN_1467be3d4(void)

float FUN_1467be3d4(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xb0))();
  return (float)iVar1;
}



// FUNCTION 1467be3ee FUN_1467be3ee body=40 status=ok
// SIG undefined FUN_1467be3ee(void)

undefined8 FUN_1467be3ee(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1467bf1b6();
  FUN_140002266(param_2,&DAT_149e063bc,uVar1);
  return param_2;
}



// FUNCTION 1467be43e FUN_1467be43e body=123 status=ok
// SIG undefined FUN_1467be43e(void)

void FUN_1467be43e(longlong param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  byte bVar4;
  
  uVar3 = (ulonglong)(*(uint *)(param_1 + 0x60) >> 3);
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x50) + uVar3);
  bVar2 = (byte)(1 << ((byte)*(uint *)(param_1 + 0x60) & 7));
  bVar4 = ~bVar2 & bVar1;
  if (*param_2 == 0) {
    bVar4 = bVar1 | bVar2;
  }
  *(byte *)(*(longlong *)(param_1 + 0x50) + uVar3) = bVar4;
  uVar3 = (ulonglong)(*(uint *)(param_1 + 0x60) >> 3);
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x58) + uVar3);
  bVar2 = (byte)(1 << ((byte)*(uint *)(param_1 + 0x60) & 7));
  bVar4 = ~bVar2 & bVar1;
  if (*param_2 == 1) {
    bVar4 = bVar1 | bVar2;
  }
  *(byte *)(*(longlong *)(param_1 + 0x58) + uVar3) = bVar4;
  return;
}



// FUNCTION 1467be4c0 FUN_1467be4c0 body=102 status=ok
// SIG undefined FUN_1467be4c0(void)

undefined8 FUN_1467be4c0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_140056680(local_28,uVar1);
  FUN_140233b1a(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467be528 FUN_1467be528 body=132 status=ok
// SIG undefined FUN_1467be528(void)

void FUN_1467be528(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_1467be5ac(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1467be5ac FUN_1467be5ac body=90 status=ok
// SIG undefined FUN_1467be5ac(void)

void FUN_1467be5ac(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1467be606();
  return;
}



// FUNCTION 1467be606 FUN_1467be606 body=114 status=ok
// SIG undefined FUN_1467be606(void)

void FUN_1467be606(longlong *param_1,int param_2)

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



// FUNCTION 1467be678 FUN_1467be678 body=47 status=ok
// SIG undefined FUN_1467be678(void)

void FUN_1467be678(longlong param_1,int param_2)

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



// FUNCTION 1467be6a8 FUN_1467be6a8 body=322 status=ok
// SIG undefined FUN_1467be6a8(void)

undefined4 * FUN_1467be6a8(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467be7ec(local_48);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  iVar6 = FUN_144a788f7();
  uVar10 = iVar6 + (int)((ulonglong)uVar2 >> 0x20);
  cVar5 = FUN_1467be8fa(uVar10,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = DAT_14c83f430 - DAT_14c83f45c;
    iVar6 = 1;
    if (3 < uVar7) {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar6 <= DAT_14c83f470)) {
      uVar10 = DAT_14c83f470 - 1U & uVar10;
      *(uint *)((longlong)local_40 + 0x14) = uVar10;
      puVar8 = DAT_14c83f468;
      if (DAT_14c83f468 == (undefined *)0x0) {
        puVar8 = &DAT_14c83f460;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)(puVar8 + ((longlong)DAT_14c83f470 - 1U & (longlong)(int)uVar10) * 4);
      puVar8 = DAT_14c83f468;
      if (DAT_14c83f468 == (undefined *)0x0) {
        puVar8 = &DAT_14c83f460;
      }
      *(undefined4 *)(puVar8 + ((longlong)DAT_14c83f470 - 1U & (longlong)(int)uVar10) * 4) =
           local_4c;
    }
    else {
      DAT_14c83f470 = iVar6;
      FUN_1467bea0a();
    }
  }
  *param_1 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467be7ec FUN_1467be7ec body=270 status=ok
// SIG undefined FUN_1467be7ec(void)

int * FUN_1467be7ec(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c83f458;
  iVar4 = DAT_14c83f430;
  if (DAT_14c83f45c == 0) {
    iVar2 = DAT_14c83f430 + 1;
    bVar7 = DAT_14c83f434 == DAT_14c83f430;
    DAT_14c83f430 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c83f428,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14c83f438,1);
    puVar3 = DAT_14c83f448;
    if (DAT_14c83f448 == (undefined *)0x0) {
      puVar3 = &DAT_14c83f438;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14c83f458;
    DAT_14c83f458 = *(int *)(DAT_14c83f428 + 4 + lVar6 * 0x18);
    DAT_14c83f45c = DAT_14c83f45c + -1;
    iVar4 = iVar2;
    if (DAT_14c83f45c != 0) {
      *(undefined4 *)(DAT_14c83f428 + (longlong)DAT_14c83f458 * 0x18) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14c83f438;
  if (DAT_14c83f448 != (undefined *)0x0) {
    puVar3 = DAT_14c83f448;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c83f428;
  return param_1;
}



// FUNCTION 1467be8fa FUN_1467be8fa body=143 status=ok
// SIG undefined FUN_1467be8fa(void)

undefined8 FUN_1467be8fa(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c83f430 - DAT_14c83f45c != 1) && (DAT_14c83f430 != DAT_14c83f45c)) {
    puVar6 = &DAT_14c83f460;
    if (DAT_14c83f468 != (undefined *)0x0) {
      puVar6 = DAT_14c83f468;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c83f470 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c83f428 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_1467be98a(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467be98a FUN_1467be98a body=128 status=ok
// SIG undefined FUN_1467be98a(void)

void FUN_1467be98a(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c83f428;
  if (DAT_14c83f45c != 0) {
    *(int *)(DAT_14c83f428 + (longlong)DAT_14c83f458 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c83f45c) {
    iVar4 = DAT_14c83f458;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14c83f45c = DAT_14c83f45c + 1;
  puVar3 = &DAT_14c83f438;
  if (DAT_14c83f448 != (undefined *)0x0) {
    puVar3 = DAT_14c83f448;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c83f458 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1467bea0a FUN_1467bea0a body=491 status=ok
// SIG undefined FUN_1467bea0a(void)

void FUN_1467bea0a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14c83f468 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c83f468,0,0,4);
  }
  uVar3 = DAT_14c83f470;
  uVar2 = local_68;
  if (DAT_14c83f470 != 0) {
    uVar8 = 0;
    FUN_144a1cbf0(&DAT_14c83f460,0,DAT_14c83f470,4);
    if (0 < (int)uVar3) {
      do {
        puVar7 = DAT_14c83f468;
        if (DAT_14c83f468 == (undefined *)0x0) {
          puVar7 = &DAT_14c83f460;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c83f470 + 0x7fffffff & uVar8) * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    local_58 = 0x100000000;
    local_50 = &DAT_14c83f438;
    local_48 = 0xffffffff;
    local_40 = 0;
    if (DAT_14c83f450 != 0) {
      FUN_1449c0562(&local_58);
    }
    local_80 = &DAT_14c83f428;
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar2 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    if (local_68._4_4_ < *(int *)(local_50 + 0x18)) {
      iVar4 = local_68._4_4_;
      local_68 = uVar2;
      do {
        lVar1 = *local_80;
        lVar9 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar9 * 0x18);
        iVar5 = FUN_144a788f7();
        uVar6 = (longlong)(iVar5 + (int)((ulonglong)uVar2 >> 0x20)) &
                (longlong)(int)DAT_14c83f470 - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar1 + 0x14 + lVar9 * 0x18) = iVar5;
        puVar7 = DAT_14c83f468;
        if (DAT_14c83f468 == (undefined *)0x0) {
          puVar7 = &DAT_14c83f460;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar9 * 0x18) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14c83f470 - 1U & uVar6) * 4);
        puVar7 = DAT_14c83f468;
        if (DAT_14c83f468 == (undefined *)0x0) {
          puVar7 = &DAT_14c83f460;
        }
        *(int *)(puVar7 + ((longlong)iVar5 & (longlong)(int)DAT_14c83f470 - 1U) * 4) = iVar4;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        uVar2 = local_68;
      } while (local_68._4_4_ < *(int *)(local_70 + 0x18));
    }
  }
  local_68 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467bebf6 FUN_1467bebf6 body=312 status=ok
// SIG undefined FUN_1467bebf6(void)

undefined4 * FUN_1467bebf6(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467bed30(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1467bee16(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1467bee92(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bed30 FUN_1467bed30 body=229 status=ok
// SIG undefined FUN_1467bed30(void)

int * FUN_1467bed30(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1467bee16 FUN_1467bee16 body=124 status=ok
// SIG undefined FUN_1467bee16(void)

undefined8 FUN_1467bee16(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_1467be606(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467bee92 FUN_1467bee92 body=477 status=ok
// SIG undefined FUN_1467bee92(void)

void FUN_1467bee92(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467bf070 FUN_1467bf070 body=170 status=ok
// SIG undefined FUN_1467bf070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1467bf070(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  lVar2 = (longlong)(int)param_1[1] + 1;
  puVar1 = (undefined4 *)((longlong)(int)param_1[1] * 0x18 + *param_1);
  while (puVar3 = puVar1, lVar2 = lVar2 + -1, lVar2 != 0) {
    puVar1 = puVar3 + -6;
    if (0 < (int)puVar3[-2]) {
      *param_2 = puVar3[-6];
      return (undefined *)(*(longlong *)(puVar3 + -4) + (longlong)(puVar3[-2] + -1) * 0x10 + 8);
    }
  }
  *param_2 = 0xff000000;
  if (DAT_14c83ff58 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110)) {
    return &DAT_14c83ff50;
  }
  FUN_144b3d300(&DAT_14c83ff58);
  if (DAT_14c83ff58 != -1) {
    return &DAT_14c83ff50;
  }
  _DAT_14c83ff50 = 0;
  _Init_thread_footer(&DAT_14c83ff58);
  return &DAT_14c83ff50;
}



// FUNCTION 1467bf11a FUN_1467bf11a body=62 status=ok
// SIG undefined FUN_1467bf11a(void)

void FUN_1467bf11a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467bf158(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 1467bf158 FUN_1467bf158 body=93 status=ok
// SIG undefined FUN_1467bf158(void)

ulonglong FUN_1467bf158(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1467bf1b6 FUN_1467bf1b6 body=115 status=ok
// SIG undefined FUN_1467bf1b6(void)

ulonglong FUN_1467bf1b6(longlong *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  
  plVar6 = (longlong *)param_1[9];
  if (plVar6 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467bf219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*param_1 + 0xb0))();
    return uVar5;
  }
  uVar3 = *(uint *)(plVar6 + 1);
  uVar8 = 0;
  uVar7 = uVar3;
  if (0 < (int)uVar3) {
    do {
      uVar1 = (uVar7 >> 1) + uVar8;
      if (*(int *)(*plVar6 + (ulonglong)uVar1 * 0x18) < 0) {
        uVar8 = uVar1 + (uVar7 & 1);
      }
      bVar4 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar4);
  }
  if ((int)uVar8 < (int)uVar3) {
    piVar2 = (int *)(*plVar6 + (ulonglong)uVar8 * 0x18);
    plVar6 = (longlong *)0x0;
    if (*piVar2 < 1) {
      plVar6 = (longlong *)(piVar2 + 2);
    }
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  return (ulonglong)*(uint *)(*plVar6 + 8);
}



// FUNCTION 1467bf22a FUN_1467bf22a body=403 status=ok
// SIG undefined FUN_1467bf22a(void)

void FUN_1467bf22a(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  uint *puVar8;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  uint *local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar2 = (undefined1 *)FUN_1400d7a00();
  (**(code **)(*param_2 + 0x10))(param_2,L"\nHISTORY",*puVar2,puVar2 + 4);
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar8 = (uint *)*param_1;
    local_80 = puVar8 + (longlong)*(int *)(param_1 + 1) * 6;
    do {
      if ((longlong)(int)puVar8[4] != 0) {
        plVar3 = *(longlong **)(puVar8 + 2);
        lVar4 = (longlong)(int)puVar8[4] << 4;
        do {
          lVar1 = *plVar3;
          puVar5 = &DAT_149dfb77a;
          if (lVar1 != 0) {
            FUN_1400021e4(plVar3,&local_68);
            puVar5 = &DAT_149dfb77a;
            if (local_60 != 0) {
              puVar5 = local_68;
            }
            FUN_140002266(&local_58,L" [%s]",puVar5);
            puVar5 = &DAT_149dfb77a;
            if (local_50 != 0) {
              puVar5 = local_58;
            }
          }
          FUN_140002266(&local_78,&DAT_149e063bc,(int)plVar3[1]);
          puVar7 = &DAT_149dfb77a;
          if (local_70 != 0) {
            puVar7 = local_78;
          }
          pwVar6 = L"<UNKNOWN>";
          if (*puVar8 < 0xf000000) {
            pwVar6 = (wchar_t *)(&PTR_u_Constructor_149e142c8)[*puVar8 >> 0x18];
          }
          local_88 = puVar5;
          FUN_140047918(param_2,L"%s: %s%s",pwVar6,puVar7);
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (lVar1 != 0) {
            if (local_58 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          plVar3 = plVar3 + 2;
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != 0);
      }
      puVar8 = puVar8 + 6;
    } while (puVar8 != local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bf3be FUN_1467bf3be body=65 status=ok
// SIG undefined FUN_1467bf3be(void)

undefined8 * FUN_1467bf3be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e12470;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_141131496(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467bf418 FUN_1467bf418 body=84 status=ok
// SIG undefined FUN_1467bf418(void)

void FUN_1467bf418(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_1410be678();
  cVar1 = FUN_1409df8ac(param_1,param_3);
  if (cVar1 != '\0') {
    FUN_14020fad6(param_1 + 0xb,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001467bf460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))(param_1,param_3,0);
    return;
  }
  return;
}



// FUNCTION 1467bf4a8 FUN_1467bf4a8 body=92 status=ok
// SIG undefined FUN_1467bf4a8(void)

void FUN_1467bf4a8(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  if (*(int *)(param_1 + 0x60) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0x58);
  }
  FUN_1409dff21(&local_14,puVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_14);
}



// FUNCTION 1467bf506 FUN_1467bf506 body=83 status=ok
// SIG undefined FUN_1467bf506(void)

undefined8 * FUN_1467bf506(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x60);
  _Src = *(void **)(param_1 + 0x58);
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



// FUNCTION 1467bf55a FUN_1467bf55a body=150 status=ok
// SIG undefined FUN_1467bf55a(void)

undefined8 * FUN_1467bf55a(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1467bfc90(param_1,&local_30);
  _Src = local_30;
  *param_2 = 0;
  *(int *)(param_2 + 1) = local_28;
  if ((longlong)local_28 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,local_28,0);
    memcpy((void *)*param_2,_Src,(longlong)local_28 * 2);
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8(local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bf61a FUN_1467bf61a body=78 status=ok
// SIG undefined FUN_1467bf61a(void)

void FUN_1467bf61a(longlong param_1,uint param_2)

{
  FUN_1410be55a(*(undefined8 *)(param_1 + 0x50),param_1 + 0x58,*(undefined4 *)(param_1 + 0x18),
                param_2);
  if ((param_2 >> 0x11 & 1) == 0) {
    *(uint *)(param_1 + 0x18) = (uint)*(ushort *)(param_1 + 0x18) | param_2 & 0xff00ffff;
    FUN_14078f2d2(param_1 + 0x20,param_1);
    return;
  }
  return;
}



// FUNCTION 1467bf674 FUN_1467bf674 body=58 status=ok
// SIG undefined FUN_1467bf674(void)

void FUN_1467bf674(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_1410beca0(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1467bf6ae FUN_1467bf6ae body=576 status=ok
// SIG undefined FUN_1467bf6ae(void)

undefined8 FUN_1467bf6ae(longlong *param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar6 = *param_1;
  uVar5 = 0;
  if (0 < (int)uVar2) {
    uVar9 = (ulonglong)uVar2;
    uVar13 = uVar2;
    do {
      uVar9 = uVar9 >> 1;
      uVar14 = (uint)uVar9 + uVar5;
      if (*(int *)(lVar6 + (ulonglong)uVar14 * 0x18) < (int)param_2) {
        uVar5 = uVar14 + (uVar13 & 1);
      }
      bVar3 = 1 < uVar13;
      uVar13 = (uint)uVar9;
    } while (bVar3);
  }
  if ((int)uVar2 <= (int)uVar5) {
    return 0;
  }
  piVar15 = (int *)(lVar6 + (ulonglong)uVar5 * 0x18);
  uVar9 = 0;
  if (piVar15 == (int *)&DAT_fffffffffffffff8 || (int)param_2 < *piVar15) {
    return 0;
  }
  if (0 < (int)uVar2) {
    uVar9 = 0;
    uVar7 = (ulonglong)uVar2;
    do {
      uVar13 = (int)(uVar7 >> 1) + (int)uVar9;
      uVar5 = (uint)uVar7;
      if (*(int *)(lVar6 + (ulonglong)uVar13 * 0x18) < (int)param_2) {
        uVar9 = (ulonglong)(uVar13 + (uVar5 & 1));
      }
      uVar7 = uVar7 >> 1;
    } while (1 < uVar5);
  }
  if ((int)uVar9 < (int)uVar2) {
    piVar1 = (int *)(lVar6 + uVar9 * 0x18);
    piVar15 = (int *)0x0;
    if (*piVar1 <= (int)param_2) {
      piVar15 = piVar1 + 2;
    }
  }
  else {
    piVar15 = (int *)0x0;
  }
  if (param_3 == 0) {
    uVar7 = 0;
    if (piVar15[2] < 1) {
      return 0;
    }
    if (0 < (int)uVar2) {
      uVar7 = 0;
      uVar12 = (ulonglong)uVar2;
      do {
        uVar13 = (int)(uVar12 >> 1) + (int)uVar7;
        uVar5 = (uint)uVar12;
        if (*(int *)(lVar6 + (ulonglong)uVar13 * 0x18) < (int)param_2) {
          uVar7 = (ulonglong)(uVar13 + (uVar5 & 1));
        }
        uVar12 = uVar12 >> 1;
      } while (1 < uVar5);
    }
  }
  else {
    iVar11 = piVar15[2];
    uVar8 = CONCAT71((int7)(uVar9 >> 8),0 < (longlong)iVar11);
    if ((param_2 & 0xfd000000) == 0x5000000 || (param_2 & 0xfe000000) == 0xa000000) {
      if (0 < iVar11) {
        plVar4 = *(longlong **)piVar15;
        lVar6 = 0;
        while (*plVar4 != param_3) {
          lVar6 = lVar6 + 1;
          plVar4 = plVar4 + 5;
          if (iVar11 == lVar6) {
            return 0;
          }
        }
        FUN_1467bfa60(piVar15);
        FUN_1467bfaca(piVar15);
        iVar11 = piVar15[2];
      }
      if (iVar11 != 0) {
        return uVar8;
      }
      uVar2 = *(uint *)(param_1 + 1);
      lVar6 = *param_1;
      uVar7 = 0;
      if (0 < (int)uVar2) {
        uVar9 = (ulonglong)uVar2;
        do {
          uVar13 = (int)(uVar9 >> 1) + (int)uVar7;
          uVar5 = (uint)uVar9;
          if (*(int *)(lVar6 + (ulonglong)uVar13 * 0x18) < (int)param_2) {
            uVar7 = (ulonglong)(uVar13 + (uVar5 & 1));
          }
          uVar9 = uVar9 >> 1;
        } while (1 < uVar5);
      }
      if ((int)uVar2 <= (int)uVar7) {
        return uVar8;
      }
      goto LAB_1467bf827;
    }
    if (iVar11 < 1) {
      return 0;
    }
    uVar7 = 0;
    uVar9 = 0;
    if (**(longlong **)piVar15 != param_3) {
      return 0;
    }
    if (0 < (int)uVar2) {
      uVar7 = 0;
      uVar12 = (ulonglong)uVar2;
      do {
        uVar13 = (int)(uVar12 >> 1) + (int)uVar7;
        uVar5 = (uint)uVar12;
        if (*(int *)(lVar6 + (ulonglong)uVar13 * 0x18) < (int)param_2) {
          uVar7 = (ulonglong)(uVar13 + (uVar5 & 1));
        }
        uVar12 = uVar12 >> 1;
      } while (1 < uVar5);
    }
  }
  uVar10 = (undefined7)(uVar9 >> 8);
  if ((int)uVar2 <= (int)uVar7) {
    return CONCAT71(uVar10,1);
  }
  uVar8 = CONCAT71(uVar10,1);
LAB_1467bf827:
  if (*(int *)(lVar6 + uVar7 * 0x18) <= (int)param_2) {
    FUN_1467bfb78(param_1);
    FUN_1467bfbe2(param_1);
    return uVar8;
  }
  return uVar8;
}



// FUNCTION 1467bf8ee FUN_1467bf8ee body=236 status=ok
// SIG undefined FUN_1467bf8ee(void)

undefined8 * FUN_1467bf8ee(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = (longlong)(int)param_1[1] + 1;
  puVar1 = (undefined4 *)((longlong)(int)param_1[1] * 0x18 + *param_1);
  do {
    puVar4 = puVar1;
    lVar2 = lVar2 + -1;
    if (lVar2 == 0) {
      *param_2 = 0xff000000;
      puVar3 = &DAT_14c83ff60;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c83ff80) {
        FUN_144b3d300(&DAT_14c83ff80);
        if (DAT_14c83ff80 == -1) {
          local_28 = 0;
          uStack_20 = 0;
          puVar3 = &DAT_14c83ff60;
          FUN_140e45006(&DAT_14c83ff60);
          atexit(FUN_1427567dc);
          _Init_thread_footer(&DAT_14c83ff80);
        }
      }
      goto LAB_1467bf972;
    }
    puVar1 = puVar4 + -6;
  } while ((int)puVar4[-2] < 1);
  *param_2 = puVar4[-6];
  puVar3 = (undefined8 *)(*(longlong *)(puVar4 + -4) + (longlong)(puVar4[-2] + -1) * 0x28 + 8);
LAB_1467bf972:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bf9dc FUN_1467bf9dc body=131 status=ok
// SIG undefined FUN_1467bf9dc(void)

longlong FUN_1467bf9dc(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  
  bVar5 = false;
  lVar4 = 0;
  do {
    lVar4 = lVar4 * 0x10;
    puVar1 = (undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    iVar2 = *(int *)(param_2 + 8 + lVar4);
    _Src = *(void **)(param_2 + lVar4);
    *(int *)(param_1 + 8 + lVar4) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2,0);
      memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
    }
    lVar4 = 1;
    bVar3 = !bVar5;
    bVar5 = true;
  } while (bVar3);
  return param_1;
}



// FUNCTION 1467bfa60 FUN_1467bfa60 body=105 status=ok
// SIG undefined FUN_1467bfa60(void)

void FUN_1467bfa60(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x28 + *param_1);
  lVar2 = 0x20;
  do {
    if (*(longlong *)((longlong)_Dst + lVar2 + -8) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar1) * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 1467bfaca FUN_1467bfaca body=62 status=ok
// SIG undefined FUN_1467bfaca(void)

void FUN_1467bfaca(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467bfb08(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1467bfb08 FUN_1467bfb08 body=112 status=ok
// SIG undefined FUN_1467bfb08(void)

ulonglong FUN_1467bfb08(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1467bfb42;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_1467bfb42:
  return param_2 & 0xffffffff;
}



// FUNCTION 1467bfb78 FUN_1467bfb78 body=105 status=ok
// SIG undefined FUN_1467bfb78(void)

void FUN_1467bfb78(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2;
  FUN_1410beca0(*(undefined8 *)(lVar1 + 8 + lVar3 * 0x18),
                *(undefined4 *)(lVar1 + 0x10 + lVar3 * 0x18));
  if (*(longlong *)(lVar1 + 8 + lVar3 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + lVar3 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar2) * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1467bfbe2 FUN_1467bfbe2 body=62 status=ok
// SIG undefined FUN_1467bfbe2(void)

void FUN_1467bfbe2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467bfc20(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1467bfc20 FUN_1467bfc20 body=112 status=ok
// SIG undefined FUN_1467bfc20(void)

ulonglong FUN_1467bfc20(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1467bfc5a;
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
LAB_1467bfc5a:
  return param_2 & 0xffffffff;
}



// FUNCTION 1467bfc90 FUN_1467bfc90 body=204 status=ok
// SIG undefined FUN_1467bfc90(void)

undefined8 * FUN_1467bfc90(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  plVar5 = *(longlong **)(param_1 + 0x48);
  if (plVar5 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1467bfd5c(0,param_2);
  }
  else {
    uVar2 = *(uint *)(plVar5 + 1);
    uVar9 = 0;
    if (0 < (int)uVar2) {
      uVar7 = (ulonglong)uVar2;
      do {
        uVar8 = (int)(uVar7 >> 1) + uVar9;
        uVar6 = (uint)uVar7;
        if (*(int *)(*plVar5 + (ulonglong)uVar8 * 0x18) < 0) {
          uVar9 = uVar8 + (uVar6 & 1);
        }
        uVar7 = uVar7 >> 1;
      } while (1 < uVar6);
    }
    if ((int)uVar9 < (int)uVar2) {
      piVar1 = (int *)(*plVar5 + (ulonglong)uVar9 * 0x18);
      plVar5 = (longlong *)0x0;
      if (*piVar1 < 1) {
        plVar5 = (longlong *)(piVar1 + 2);
      }
    }
    else {
      plVar5 = (longlong *)0x0;
    }
    lVar4 = *plVar5;
    *param_2 = 0;
    iVar3 = *(int *)(lVar4 + 0x10);
    _Src = *(void **)(lVar4 + 8);
    *(int *)(param_2 + 1) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar3,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar3 * 2);
    }
  }
  return param_2;
}



// FUNCTION 1467bfd5c FUN_1467bfd5c body=127 status=ok
// SIG undefined FUN_1467bfd5c(void)

void FUN_1467bfd5c(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0xc0))(param_1,&local_28);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467bfddc FUN_1467bfddc body=572 status=ok
// SIG undefined FUN_1467bfddc(void)

void FUN_1467bfddc(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  uint *local_98;
  longlong *local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar3 = (undefined1 *)FUN_1400d7a00();
  local_90 = param_2;
  (**(code **)(*param_2 + 0x10))(param_2,L"\nHISTORY",*puVar3,puVar3 + 4);
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar10 = (uint *)*param_1;
    local_98 = puVar10 + (longlong)*(int *)(param_1 + 1) * 6;
    do {
      if ((longlong)(int)puVar10[4] != 0) {
        plVar4 = *(longlong **)(puVar10 + 2);
        lVar8 = (longlong)(int)puVar10[4] * 0x28;
        do {
          lVar1 = *plVar4;
          puVar5 = &DAT_149dfb77a;
          if (lVar1 != 0) {
            FUN_1400021e4(plVar4,&local_68);
            puVar5 = &DAT_149dfb77a;
            if (local_60 != 0) {
              puVar5 = local_68;
            }
            FUN_140002266(&local_58,L" [%s]",puVar5);
            puVar5 = &DAT_149dfb77a;
            if (local_50 != 0) {
              puVar5 = local_58;
            }
          }
          local_88 = (void *)0x0;
          local_80 = (int)plVar4[2];
          lVar9 = (longlong)local_80;
          pvVar2 = (void *)plVar4[1];
          if (lVar9 == 0) {
            local_7c = 0;
            local_70 = 0;
LAB_1467bff4c:
            local_78 = (undefined2 *)0x0;
            local_6c = 0;
LAB_1467bff54:
            puVar7 = &DAT_149dfb77a;
          }
          else {
            FUN_1446dd670(&local_88,local_80,0);
            memcpy(local_88,pvVar2,lVar9 * 2);
            pvVar2 = local_88;
            lVar9 = (longlong)local_80;
            local_78 = (undefined2 *)0x0;
            local_70 = local_80;
            if (lVar9 == 0) goto LAB_1467bff4c;
            FUN_1446dd670(&local_78,local_80,0);
            memcpy(local_78,pvVar2,lVar9 * 2);
            puVar7 = local_78;
            if (local_70 == 0) goto LAB_1467bff54;
          }
          pwVar6 = L"<UNKNOWN>";
          if (*puVar10 < 0xf000000) {
            pwVar6 = (wchar_t *)(&PTR_u_Constructor_149e142c8)[*puVar10 >> 0x18];
          }
          local_a8 = puVar5;
          FUN_140047918(local_90,L"%s: %s%s",pwVar6,puVar7);
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_88 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (lVar1 != 0) {
            if (local_58 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          plVar4 = plVar4 + 5;
          lVar8 = lVar8 + -0x28;
        } while (lVar8 != 0);
      }
      puVar10 = puVar10 + 6;
    } while (puVar10 != local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467c0048 FUN_1467c0048 body=57 status=ok
// SIG undefined FUN_1467c0048(void)

undefined8 * FUN_1467c0048(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e12740;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c009a FUN_1467c009a body=43 status=ok
// SIG undefined FUN_1467c009a(void)

undefined8 FUN_1467c009a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if ((*(int *)(param_1 + 0x28) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 0x20), param_1 = 0, plVar1 == (longlong *)0x0)) {
    bVar5 = (byte)param_1;
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_3);
    bVar5 = (byte)uVar3;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & bVar5);
}



// FUNCTION 1467c00c6 FUN_1467c00c6 body=40 status=ok
// SIG undefined FUN_1467c00c6(void)

undefined8 FUN_1467c00c6(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if ((*(int *)(param_1 + 0x28) == 0) ||
     (plVar1 = (longlong *)(param_1 + 0x20), param_1 = 0, (longlong *)*plVar1 == (longlong *)0x0)) {
    bVar5 = (byte)param_1;
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*(longlong *)*plVar1 + 0x60))();
    bVar5 = (byte)uVar3;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & bVar5);
}



// FUNCTION 1467c00ee FUN_1467c00ee body=43 status=ok
// SIG undefined FUN_1467c00ee(void)

undefined8 FUN_1467c00ee(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if ((*(int *)(param_1 + 0x28) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 0x20), param_1 = 0, plVar1 == (longlong *)0x0)) {
    bVar5 = (byte)param_1;
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_4);
    bVar5 = (byte)uVar3;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & bVar5);
}



// FUNCTION 1467c011a FUN_1467c011a body=40 status=ok
// SIG undefined FUN_1467c011a(void)

undefined8 FUN_1467c011a(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if ((*(int *)(param_1 + 0x28) == 0) ||
     (plVar1 = (longlong *)(param_1 + 0x20), param_1 = 0, (longlong *)*plVar1 == (longlong *)0x0)) {
    bVar5 = (byte)param_1;
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*(longlong *)*plVar1 + 0x60))();
    bVar5 = (byte)uVar3;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & bVar5);
}



// FUNCTION 1467c0142 FUN_1467c0142 body=43 status=ok
// SIG undefined FUN_1467c0142(void)

undefined8 FUN_1467c0142(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if ((*(int *)(param_1 + 0x28) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 0x20), param_1 = 0, plVar1 == (longlong *)0x0)) {
    bVar5 = (byte)param_1;
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_4);
    bVar5 = (byte)uVar3;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & bVar5);
}



// FUNCTION 1467c0172 FUN_1467c0172 body=50 status=ok
// SIG undefined FUN_1467c0172(void)

undefined8 FUN_1467c0172(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if ((*(int *)(param_1 + 0x28) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 0x20), param_1 = 0, plVar1 == (longlong *)0x0)) {
    bVar5 = (byte)param_1;
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_3,param_2);
    bVar5 = (byte)uVar3;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & bVar5);
}



// FUNCTION 1467c01ab FUN_1467c01ab body=870 status=ok
// SIG undefined FUN_1467c01ab(void)

void FUN_1467c01ab(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar13 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      iVar10 = iVar13 * 2 + 1;
      iVar15 = iVar13;
      if (iVar10 < (int)param_2) {
LAB_1467c0206:
        iVar17 = iVar15 * 2 + 2;
        iVar16 = iVar10;
        if (iVar17 < (int)param_2) {
          puVar12 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar10 * 2 + 1) != 0) {
            puVar12 = (undefined2 *)param_1[(longlong)iVar10 * 2];
          }
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar17 * 2 + 1) != 0) {
            puVar7 = (undefined2 *)param_1[(longlong)iVar17 * 2];
          }
          lVar20 = 0;
          while( true ) {
            uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
            uVar9 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
            uVar8 = (uint)uVar3;
            iVar16 = iVar17;
            if (uVar2 != uVar3) break;
            if (uVar2 == 0) goto LAB_1467c0285;
LAB_1467c0255:
            lVar20 = lVar20 + 2;
          }
          if ((uVar3 | uVar2) < 0x80) {
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1467c0255;
          }
          if ((int)(uVar9 - uVar8) < 0) {
            iVar16 = iVar10;
          }
        }
LAB_1467c0285:
        lVar20 = (longlong)iVar16;
        puVar12 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar20 * 2 + 1) != 0) {
          puVar12 = (undefined2 *)param_1[lVar20 * 2];
        }
        lVar18 = (longlong)iVar15;
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar18 * 2 + 1) != 0) {
          puVar7 = (undefined2 *)param_1[lVar18 * 2];
        }
        puVar19 = param_1 + lVar18 * 2;
        puVar11 = param_1 + lVar20 * 2;
        lVar20 = 0;
        do {
          uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
          uVar9 = (uint)uVar2;
          uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
          uVar8 = (uint)uVar3;
          if (uVar2 == uVar3) {
            if (uVar2 == 0) break;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) goto LAB_1467c02f2;
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_1467c02f2;
          }
          lVar20 = lVar20 + 2;
        } while( true );
      }
LAB_1467c0329:
      bVar21 = iVar13 != 0;
      iVar13 = iVar13 + -1;
    } while (bVar21);
    if (1 < (int)param_2) {
      uVar14 = (ulonglong)param_2 - 1;
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = (param_1 + uVar14 * 2)[1];
      *param_1 = param_1[uVar14 * 2];
      param_1[1] = uVar6;
      local_58._0_4_ = (undefined4)uVar4;
      local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar5;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar11 = param_1 + uVar14 * 2;
      *(undefined4 *)puVar11 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
      local_58 = uVar4;
      uStack_50 = uVar5;
      if (param_2 != 2) {
LAB_1467c03a2:
        iVar13 = 1;
        iVar15 = 0;
        iVar10 = 0;
LAB_1467c03ad:
        iVar15 = iVar15 + 2;
        lVar20 = (longlong)iVar15;
        iVar16 = iVar13;
        if (lVar20 < (longlong)uVar14) {
          puVar12 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar13 * 2 + 1) != 0) {
            puVar12 = (undefined2 *)param_1[(longlong)iVar13 * 2];
          }
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(param_1 + lVar20 * 2 + 1) != 0) {
            puVar7 = (undefined2 *)param_1[lVar20 * 2];
          }
          lVar20 = 0;
          while( true ) {
            uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
            uVar8 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
            uVar9 = (uint)uVar3;
            iVar16 = iVar15;
            if (uVar2 != uVar3) break;
            if (uVar2 == 0) goto LAB_1467c0428;
LAB_1467c03f9:
            lVar20 = lVar20 + 2;
          }
          if ((uVar3 | uVar2) < 0x80) {
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1467c03f9;
          }
          if ((int)(uVar8 - uVar9) < 0) {
            iVar16 = iVar13;
          }
        }
LAB_1467c0428:
        lVar20 = (longlong)iVar16;
        puVar12 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar20 * 2 + 1) != 0) {
          puVar12 = (undefined2 *)param_1[lVar20 * 2];
        }
        lVar18 = (longlong)iVar10;
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar18 * 2 + 1) != 0) {
          puVar7 = (undefined2 *)param_1[lVar18 * 2];
        }
        puVar11 = param_1 + lVar18 * 2;
        puVar19 = param_1 + lVar20 * 2;
        lVar20 = 0;
        do {
          uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
          uVar8 = (uint)uVar2;
          uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
          uVar9 = (uint)uVar3;
          if (uVar2 == uVar3) {
            if (uVar2 == 0) goto LAB_1467c04ce;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) goto LAB_1467c0493;
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_1467c0493;
          }
          lVar20 = lVar20 + 2;
        } while( true );
      }
    }
  }
LAB_1467c0375:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1467c02f2:
  if (-1 < (int)(uVar9 - uVar8)) goto LAB_1467c0329;
  uVar4 = *puVar19;
  uVar5 = puVar19[1];
  uVar6 = puVar11[1];
  *puVar19 = *puVar11;
  puVar19[1] = uVar6;
  local_58._0_4_ = (undefined4)uVar4;
  local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar5;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)puVar11 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
  *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
  iVar10 = iVar16 * 2 + 1;
  local_58 = uVar4;
  uStack_50 = uVar5;
  iVar15 = iVar16;
  if ((int)param_2 <= iVar10) goto LAB_1467c0329;
  goto LAB_1467c0206;
LAB_1467c0493:
  if (-1 < (int)(uVar8 - uVar9)) goto LAB_1467c04ce;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar19[1];
  *puVar11 = *puVar19;
  puVar11[1] = uVar6;
  *puVar19 = uVar4;
  puVar19[1] = uVar5;
  iVar15 = iVar16 * 2;
  iVar13 = iVar16 * 2 + 1;
  iVar10 = iVar16;
  if ((longlong)uVar14 <= (longlong)iVar13) goto LAB_1467c04ce;
  goto LAB_1467c03ad;
LAB_1467c04ce:
  uVar1 = uVar14 - 1;
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar6 = (param_1 + uVar1 * 2)[1];
  *param_1 = param_1[uVar1 * 2];
  param_1[1] = uVar6;
  local_58._0_4_ = (undefined4)uVar4;
  local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar5;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  puVar11 = param_1 + uVar1 * 2;
  *(undefined4 *)puVar11 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
  *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
  bVar21 = uVar14 < 3;
  uVar14 = uVar1;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if (bVar21) goto LAB_1467c0375;
  goto LAB_1467c03a2;
}



// FUNCTION 1467c0512 FUN_1467c0512 body=38 status=ok
// SIG undefined FUN_1467c0512(void)

undefined8 FUN_1467c0512(undefined8 param_1,int param_2)

{
  FUN_1467c0538();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c0538 FUN_1467c0538 body=502 status=ok
// SIG undefined FUN_1467c0538(void)

void FUN_1467c0538(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_149e13270;
  plVar1 = param_1 + 1;
  local_38 = param_1 + 3;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 6) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = plVar1;
  if (iStack_2c < *(int *)(local_38 + 3)) {
    do {
      puVar2 = *(undefined8 **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 3));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x24);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  FUN_144760e21(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_144959b6a(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(param_1 + 0xc);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1467c076c(plVar1);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c0730 FUN_1467c0730 body=59 status=ok
// SIG undefined FUN_1467c0730(void)

void FUN_1467c0730(longlong *param_1)

{
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467c076c FUN_1467c076c body=52 status=ok
// SIG undefined FUN_1467c076c(void)

void FUN_1467c076c(longlong *param_1)

{
  FUN_1467c07a0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467c07a0 FUN_1467c07a0 body=312 status=ok
// SIG undefined FUN_1467c07a0(void)

void FUN_1467c07a0(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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


